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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x3C723B31 ^0xBBB7F79B
{
	var unk;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	unk.f_5.f_2 = 12;
	unk.f_5.f_64 = 11;
	unk.f_5.f_76 = 11;
	unk.f_124 = 1;
	unk.f_125 = 1;
	unk.f_121 = 1;
	unk.f_101 = uScriptParam_0.f_1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		unk.f_118 = 1;
		unk.f_126 = 1;
		func_1(&unk, &Global_1913580);
	}

	if (func_2())
		TASK::TASK_STOP_LEADING_HORSE(Global_33);

	unk.f_108 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig@player_journal", 0, "plMain", false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(unk.f_108);
	unk.f_116 = 0;

	if (MISC::GET_GAME_TIMER() >= Global_1913443 && MISC::GET_GAME_TIMER() >= Global_17412)
	{
		unk.f_93.f_4 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_33, false);
		unk.f_116 = 1;
	}

	Global_1913443 = 0;
	Global_17414 = false;
	Global_17415 = 0;
	Global_17417 = 0;

	if (MISC::GET_GAME_TIMER() < Global_17395 || unk.f_116 || func_3() == 0 && func_4(Global_1913442, 1224357681) == joaat("CI_TAG_FOLDER_TREASURE_MAPS") || func_5(Global_1913442, 566155764) || func_5(Global_1913442, -1472964441) && func_6(Global_1913442))
	{
		Global_17414 = true;
		Global_17415 = 1;
	}

	if (func_5(Global_1913442, MISC::GET_HASH_KEY("CI_TAG_ITEM_DOCUMENT_HIDE_READ_PROMPT")))
		Global_17417 = 1;

	if (Global_1940252.f_11587 == 0 || MISC::GET_GAME_TIMER() <= 3000 + Global_1940085.f_70.f_2)
		Global_17414 = true;

	while (func_7(&unk, &Global_1913580))
	{
		if (func_5(Global_1913580[0 /*11*/], 566155764) || func_5(Global_1913442, 566155764))
			PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, joaat("INPUT_FRONTEND_PAUSE"), false);
	
		unk.f_104 = TASK::GET_ITEM_INTERACTION_STATE(Global_33);
	
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(unk.f_108) && ANIMSCENE::IS_ANIM_SCENE_LOADED(unk.f_108, true, false) && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(unk.f_108, false) && CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(unk.f_108, Global_34, ENTITY::GET_ENTITY_ROTATION(Global_33, 2), 2);
			ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(unk.f_108, Global_33, -1);
			ANIMSCENE::START_ANIM_SCENE(unk.f_108);
		}
	
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPECIAL_ABILITY"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_DUCK"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_MELEE"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
		CAM::_DISABLE_CINEMATIC_MODE_THIS_FRAME();
	
		if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("translation_overlay")))
			HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_TRANSLATE_OVERLAY"));
	
		if (unk.f_116)
			func_8(&unk, &Global_1913580);
		else
			func_9(&unk, &Global_1913580);
	
		func_10(&unk, &Global_1913580);
		BUILTIN::WAIT(0);
	}

	func_1(&unk, &Global_1913580);
	return;
}

void func_1(var uParam0, var uParam1) // Position - 0x2BD Hash - 0x9A91AFB8 ^0xB14256EC
{
	if (func_11())
	{
	}
	else if (func_12() && !Global_1940252.f_9)
	{
		if (!SCRIPTS::IS_THREAD_EXIT_REQUESTED())
			SCRIPTS::TERMINATE_THIS_THREAD();
	
		return;
	}

	if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("translation_overlay")))
		UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("translation_overlay"));

	if (uParam0->f_115)
		func_13(uParam0, uParam1);

	if (uParam0->f_119)
	{
		func_14(uParam0->f_1.f_1);
		uParam0->f_119 = 0;
	}

	func_15(uParam0, uParam1);
	func_16(uParam0);
	func_17(uParam0);

	if (uParam0->f_118)
		func_18(uParam0, uParam1);

	if (!uParam0->f_117)
	{
		if (!uParam1->[0 /*11*/].f_1)
			func_19(0);
		else
			Global_1913614[0 /*6*/].f_1 = 4;
	
		func_19(2);
		func_19(1);
		func_20(uParam1);
	}
	else
	{
		func_21(uParam0, uParam1);
	}

	if (!SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

BOOL func_2() // Position - 0x39B Hash - 0xA095694D ^0x506AFF8
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

int func_3() // Position - 0x406 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

int func_4(Hash hParam0, int iParam1) // Position - 0x414 Hash - 0x7A1C2599 ^0xFF9B5634
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

BOOL func_5(Hash hParam0, Hash hParam1) // Position - 0x45E Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_22(hParam0, 0))
		return func_24(func_23(hParam0), hParam1);

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

BOOL func_6(Hash hParam0) // Position - 0x49F Hash - 0xFE4CB542 ^0x4BB17F50
{
	if (func_5(hParam0, 566155764))
		return 0;

	if (func_5(hParam0, 2028734248))
		return 1;

	return 0;
}

BOOL func_7(var uParam0, var uParam1) // Position - 0x4CC Hash - 0xFEDFD7AA ^0x98A1A67E
{
	if (func_3() == 0 && func_25(false, false))
		return false;

	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		return false;

	if (func_26(uParam0, uParam1) && MISC::GET_GAME_TIMER() >= Global_17395 || !func_27(Global_1913442))
	{
		uParam0->f_118 = 1;
		return false;
	}

	return true;
}

int func_8(var uParam0, var uParam1) // Position - 0x528 Hash - 0xAED62A62 ^0xA318C47
{
	if (*uParam0 > 0)
		func_28(uParam0, uParam1);

	switch (*uParam0)
	{
		case 0:
			uParam0->f_101 = TASK::_GET_ITEM_INTERACTION_ENTITY_FROM_PED(Global_33, joaat("primaryitem"));
		
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_101))
			{
				func_29(uParam0, &uParam1->[0 /*11*/]);
				func_30(uParam0, uParam1);
				func_31(uParam0, uParam1->[0 /*11*/]);
				func_28(uParam0, uParam1);
				func_32(uParam0, 4);
			}
			break;
	
		case 4:
			if (func_33(uParam1->[0 /*11*/], uParam0->f_104))
			{
				func_34(uParam1->[0 /*11*/]);
				func_35(uParam0, uParam1, true);
				func_32(uParam0, 6);
			}
			break;
	
		case 6:
			func_36(uParam0, &uParam1->[0 /*11*/]);
			func_37(uParam0, uParam1);
			func_38(uParam0, uParam1);
		
			if (func_39(uParam1->[0 /*11*/], uParam0->f_104))
				if (func_5(uParam1->[0 /*11*/], -674618190))
					func_32(uParam0, 7);
				else
					func_32(uParam0, 8);
			else if (func_40(Global_17402[3], true))
				func_41(uParam0, uParam1->[0 /*11*/]);
		
			func_16(uParam0);
			break;
	
		case 7:
			uParam0->f_93.f_3 = TASK::_GET_SCENARIO_POINT_TYPE(uParam0->f_93.f_4);
			uParam0->f_93 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_93.f_4, true) };
			TASK::_0x4161648394262FDF(uParam0->f_93, 1f);
		
			if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_93.f_4))
				uParam0->f_93.f_4 = TASK::FIND_SCENARIO_OF_TYPE_HASH(uParam0->f_93, uParam0->f_93.f_3, 1f, 1, false);
		
			uParam0->f_93.f_5 = TASK::GET_PROP_FOR_SCENARIO_POINT(uParam0->f_93.f_4, "PrimaryItem");
			uParam0->f_93.f_6 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_93.f_5);
			OBJECT::SET_CUSTOM_TEXTURES_ON_OBJECT(uParam0->f_93.f_6, uParam1->[0 /*11*/].f_5, 0, 0);
			func_32(uParam0, 9);
			break;
	
		case 8:
			if (!func_42(uParam1->[0 /*11*/], 1) && !uParam0->f_123)
			{
				func_43(uParam1->[0 /*11*/], 1, false, false, false, 752097756, 0, 0, 0, false);
				uParam0->f_123 = 1;
			}
		
			func_32(uParam0, 9);
			break;
	}

	return 0;
}

int func_9(var uParam0, var uParam1) // Position - 0x725 Hash - 0x359EBC2F ^0x70ADBA59
{
	if (*uParam0 > 0)
		func_28(uParam0, uParam1);

	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_101))
				uParam0->f_101 = TASK::_GET_ITEM_INTERACTION_ENTITY_FROM_PED(Global_33, joaat("primaryitem"));
		
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_101))
			{
				uParam1->[0 /*11*/] = func_44(uParam0);
				func_45(uParam0, uParam1->[0 /*11*/]);
				func_30(uParam0, uParam1);
				func_31(uParam0, uParam1->[0 /*11*/]);
				func_28(uParam0, uParam1);
				func_29(uParam0, &uParam1->[0 /*11*/]);
				func_46(uParam0, uParam1);
			
				if (Global_1913614[0 /*6*/].f_1 == 2)
				{
					func_47(&uParam1->[0 /*11*/], 0);
					func_48(uParam0, uParam1);
				}
			
				func_32(uParam0, 2);
			}
			break;
	
		case 2:
			if (func_47(&uParam1->[0 /*11*/], 0) && func_49(uParam0, uParam1))
				func_32(uParam0, 3);
			break;
	
		case 3:
			if (func_48(uParam0, uParam1))
				func_32(uParam0, 4);
			break;
	
		case 4:
			if (func_33(uParam1->[0 /*11*/], uParam0->f_104))
			{
				func_35(uParam0, uParam1, true);
				func_34(uParam1->[0 /*11*/]);
				func_32(uParam0, 5);
			}
			break;
	
		case 5:
			func_36(uParam0, &uParam1->[0 /*11*/]);
			func_37(uParam0, uParam1);
			func_38(uParam0, uParam1);
		
			if (func_39(uParam1->[0 /*11*/], uParam0->f_104))
			{
				func_32(uParam0, 9);
			}
			else if (func_50(Global_17402[2]) && func_51(Global_17402[2], true))
			{
				func_32(uParam0, 9);
				uParam0->f_118 = 1;
				Global_1940252.f_9 = 1;
				Global_17413 = MISC::GET_GAME_TIMER() + 10000;
				func_52(true, 0);
			}
			else if (func_40(Global_17402[3], true))
			{
				func_41(uParam0, uParam1->[0 /*11*/]);
			}
			else if (!Global_17414 && func_53(uParam0))
			{
				uParam0->f_117 = 1;
				func_32(uParam0, 9);
			}
		
			func_16(uParam0);
			break;
	}

	return 0;
}

int func_10(var uParam0, var uParam1) // Position - 0x91E Hash - 0x97DFAD04 ^0xC1DE0D6
{
	Hash itemInteractionState;

	Global_1940085.f_70.f_4 = MISC::GET_GAME_TIMER() + 5000;

	if (Global_17401 == 1)
	{
		itemInteractionState = TASK::GET_ITEM_INTERACTION_STATE(Global_33);
	
		if (itemInteractionState == func_54(Global_1913442))
			Global_17401 = 2;
	}

	switch (*uParam0)
	{
		case 9:
			func_1(uParam0, uParam1);
			break;
	}

	return 0;
}

BOOL func_11() // Position - 0x971 Hash - 0x487153ED ^0x5FDFEE8C
{
	if (Global_1220826.f_1204 && func_5(Global_1913442, -1472964441) || Global_1220826.f_1205 && func_5(Global_1913442, 1841149704) || Global_1220826.f_1206 && func_5(Global_1913442, 566155764) || Global_1220826.f_1207 && func_5(Global_1913442, -228153877))
		if (Global_1220826.f_1202 && !func_55() || Global_1220826.f_1203 && func_55())
			return true;

	return false;
}

BOOL func_12() // Position - 0xA21 Hash - 0xC24BA3AE ^0xA4363903
{
	return Global_1940252.f_2 || Global_1940252 == 1;
}

void func_13(var uParam0, var uParam1) // Position - 0xA3B Hash - 0x9147FD03 ^0x9147FD03
{
	return;
}

int func_14(int iParam0) // Position - 0xA43 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

void func_15(var uParam0, var uParam1) // Position - 0xA64 Hash - 0xA6A6FD90 ^0x501B0F7A
{
	Hash hash;

	if (!uParam0->f_126 && !SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		hash = 1946634759;
	
		if (uParam1->[0 /*11*/] == 684416450)
			hash = -489628648;
	
		if (func_56(uParam1->[0 /*11*/]))
			func_57(uParam1->[0 /*11*/], hash);
	
		func_58(uParam1->[0 /*11*/]);
	}

	return;
}

void func_16(var uParam0) // Position - 0xAC0 Hash - 0x8AEBE79D ^0x722BC817
{
	if (uParam0->f_5.f_1 && !UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("translation_overlay")))
	{
		AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
		uParam0->f_5.f_1 = 0;
	}

	return;
}

void func_17(var uParam0) // Position - 0xAF3 Hash - 0x50F536B6 ^0x6EBB4896
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

void func_18(var uParam0, var uParam1) // Position - 0xB87 Hash - 0xE1ADB278 ^0x53D1F4F5
{
	if (uParam1->[0 /*11*/] != 0)
	{
		if (func_54(uParam1->[0 /*11*/]) != 0)
			TASK::_0xB35370D5353995CB(Global_33, func_54(uParam1->[0 /*11*/]), 1048576000);
	
		if (uParam0->f_116 && func_59(uParam1->[0 /*11*/]) && !func_42(uParam1->[0 /*11*/], 1) && !uParam0->f_123)
		{
			func_43(uParam1->[0 /*11*/], 1, false, false, false, 752097756, 0, 0, 0, false);
			uParam0->f_123 = 1;
		}
	}

	return;
}

void func_19(int iParam0) // Position - 0xC05 Hash - 0xBD578226 ^0x58965C2C
{
	Global_1913614[iParam0 /*6*/].f_1 = 3;
	Global_1913614[iParam0 /*6*/] = 0;
	Global_1913614[iParam0 /*6*/].f_5 = 0;
	return;
}

void func_20(var uParam0) // Position - 0xC2C Hash - 0x8FD544BB ^0x7F571638
{
	if (!Global_1940252.f_9)
	{
		if (func_5(Global_1913442, -1472964441) || func_5(Global_1913442, 1841149704) || func_5(Global_1913442, 566155764) || func_5(Global_1913442, -228153877))
		{
			Global_1940085.f_70.f_5 = 1;
			Global_1940085.f_70.f_1 = Global_1913442;
		}
	}

	Global_1913442 = 0;
	Global_17412 = 0;
	Global_17401 = 2;
	Global_1913580[0 /*11*/].f_3 = 0;
	func_60(uParam0);
	return;
}

void func_21(var uParam0, var uParam1) // Position - 0xCB9 Hash - 0xD9D81486 ^0x249E7B9B
{
	if (uParam0->f_115)
		func_13(uParam0, uParam1);

	if (uParam0->f_110)
		func_61(uParam1);
	else
		func_62(uParam1);

	if (uParam0->f_119)
	{
		func_14(uParam0->f_1.f_1);
		uParam0->f_119 = 0;
	}

	func_63(uParam1);
	uParam1->[0 /*11*/].f_3 = 0;
	Global_1913442 = uParam1->[0 /*11*/];
	func_64(uParam1->[0 /*11*/], false, true, 0, 0f);
	GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
	Global_17412 = MISC::GET_GAME_TIMER() + 3000;
	return;
}

BOOL func_22(Hash hParam0, int iParam1) // Position - 0xD33 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

Hash func_23(Hash hParam0) // Position - 0xD4D Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

int func_24(Hash hParam0, Hash hParam1) // Position - 0xD57 Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_65(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

BOOL func_25(BOOL bParam0, BOOL bParam1) // Position - 0xD8D Hash - 0x8CDC02F2 ^0xDB4E8541
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

BOOL func_26(var uParam0, var uParam1) // Position - 0xE6D Hash - 0xAE0707D ^0x71FE04A1
{
	if (ENTITY::IS_ENTITY_DEAD(Global_33))
		return true;

	if (!TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_33))
		return true;

	if (!func_66(16))
		return true;

	if (!uParam0->f_118 && *uParam0 > 4 && func_67(uParam1->[0 /*11*/]) || func_68(uParam1->[0 /*11*/]))
		return true;

	return false;
}

BOOL func_27(Hash hParam0) // Position - 0xED4 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case -904734609:
		case -595619260:
		case -31140163:
		case 1760651454:
			return true;
	}

	return false;
}

void func_28(var uParam0, var uParam1) // Position - 0xF04 Hash - 0x79CD7A0A ^0x82EF1ECD
{
	if (!uParam0->f_122)
	{
		if (func_33(uParam1->[0 /*11*/], uParam0->f_104))
		{
			func_35(uParam0, uParam1, false);
			uParam0->f_122 = 1;
		}
	}

	return;
}

void func_29(var uParam0, var uParam1) // Position - 0xF33 Hash - 0xC45352D ^0x724BD766
{
	var outData;

	*uParam1 = func_44(uParam0);
	uParam1->f_6 = func_4(*uParam1, -949239683);
	uParam1->f_1 = func_69(uParam1->f_6);

	if (uParam1->f_1)
		if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(*uParam1, &outData))
			uParam1->f_7.f_2 = outData.f_4;

	func_45(uParam0, *uParam1);
	return;
}

void func_30(var uParam0, var uParam1) // Position - 0xF8C Hash - 0x9147FD03 ^0x9147FD03
{
	return;
}

void func_31(var uParam0, Hash hParam1) // Position - 0xF94 Hash - 0xB15B5AA9 ^0x8C2F1984
{
	if (func_5(hParam1, -98816307))
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_BOOK_TAKE_AVAILABLE", false, -1);
	else
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_BOOK_TAKE_AVAILABLE", true, -1);

	if (func_5(hParam1, -1903335637))
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_DOCUMENT_FLIP_AVAILABLE", true, -1);
	else
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_DOCUMENT_FLIP_AVAILABLE", false, -1);

	if (uParam0->f_120)
	{
		if (func_5(hParam1, -98816307))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_BOOK_TAKE_AVAILABLE", false, -1);
			PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_BOOK_RETURN_AVAILABLE", true, -1);
		}
	}

	func_70(uParam0);
	return;
}

void func_32(var uParam0, int iParam1) // Position - 0x1021 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_33(Hash hParam0, int iParam1) // Position - 0x102E Hash - 0xDB76EF08 ^0x5D708D69
{
	switch (func_4(hParam0, -949239683))
	{
		case -1565009253:
			if (iParam1 == -2077441721)
				return true;
			break;
	
		case -1420737577:
			if (iParam1 == 1607869040)
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

void func_34(Hash hParam0) // Position - 0x123D Hash - 0xC31D72D7 ^0xC31D72D7
{
	func_71(hParam0);
	func_72(hParam0, &(Global_17418.f_2992), true);
	func_73(hParam0);
	return;
}

int func_35(var uParam0, var uParam1, BOOL bParam2) // Position - 0x125E Hash - 0xCEA0DA93 ^0xEAC362D7
{
	if (func_5(uParam1->[0 /*11*/], 566155764))
		return 1;

	if (func_5(uParam1->[0 /*11*/], -1472964441))
		if (func_6(uParam1->[0 /*11*/]))
			return 1;

	if (!uParam0->f_120)
	{
		if (!Global_17414 && bParam2)
		{
			if (!func_22(uParam1->[2 /*11*/], 0))
			{
				Global_17407[1] = false;
				func_74(&Global_17402[1], false);
			}
			else
			{
				Global_17407[1] = true;
				func_74(&Global_17402[1], true);
			}
		
			if (!func_22(uParam1->[1 /*11*/], 0))
			{
				Global_17407[0] = false;
				func_74(&Global_17402[0], false);
			}
			else
			{
				Global_17407[0] = true;
				func_74(&Global_17402[0], true);
			}
		}
	
		Global_17407[3] = func_75(uParam0, &uParam1->[0 /*11*/]);
		func_74(&Global_17402[3], Global_17407[3]);
	
		if (uParam1->[0 /*11*/] == joaat("DOCUMENT_BANKROB_NEWSCLIP"))
			Global_17416 = 1;
	
		Global_17401 = 1;
	}

	if (uParam0->f_116)
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

void func_36(var uParam0, var uParam1) // Position - 0x13C8 Hash - 0xF894815A ^0x1D6A93E9
{
	int i;
	int num;

	if (!func_33(*uParam1, uParam0->f_104) && !func_76(*uParam1, uParam0->f_104))
	{
		if (!uParam0->f_112)
		{
			if (func_77(Global_17402[0], true))
				uParam0->f_113 = 0;
			else
				uParam0->f_113 = 1;
		
			if (func_77(Global_17402[1], true))
				uParam0->f_114 = 0;
			else
				uParam0->f_114 = 1;
		
			for (i = 0; i < 4; i = i + 1)
			{
				func_78(&Global_17402[i], false);
			}
		
			uParam0->f_112 = 1;
		}
	}
	else if (uParam0->f_112)
	{
		func_79(uParam0, uParam1);
	
		for (i = 0; i < 3; i = i + 1)
		{
			num = i;
		
			if (num == 0 && !uParam0->f_113 || num == 1 && !uParam0->f_114 || num != 1 && num != 0)
				func_78(&Global_17402[num], true);
		}
	
		uParam0->f_112 = 0;
	}

	return;
}

void func_37(var uParam0, var uParam1) // Position - 0x14C2 Hash - 0xEFD559E0 ^0xB6E5B9F3
{
	if (!uParam0->f_115 && func_80(uParam1->[0 /*11*/], uParam0->f_104))
	{
		uParam0->f_115 = 1;
		func_81(uParam1->[0 /*11*/]);
	}

	return;
}

void func_38(var uParam0, var uParam1) // Position - 0x14F2 Hash - 0x9147FD03 ^0x9147FD03
{
	return;
}

BOOL func_39(Hash hParam0, int iParam1) // Position - 0x14FA Hash - 0xC2416B92 ^0xFBFC1A40
{
	switch (func_4(hParam0, -949239683))
	{
		case -1565009253:
			if (iParam1 == -672448089 || iParam1 == 1505672707)
				return true;
			break;
	
		case -1420737577:
			if (iParam1 == -34349608)
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

BOOL func_40(int iParam0, BOOL bParam1) // Position - 0x173F Hash - 0xAAB142C4 ^0x20EFEF89
{
	int num;

	if (bParam1 && !func_50(iParam0))
		return false;

	num = func_82(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1951910[num /*23*/].f_3);
}

void func_41(var uParam0, Hash hParam1) // Position - 0x1772 Hash - 0xAD4FFF85 ^0x702E8543
{
	if (func_5(hParam1, -1227898937))
	{
		if (UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(joaat("translation_overlay"), joaat("newspaper")) == 0)
		{
			uParam0->f_5.f_1 = 1;
			AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
			func_83(uParam0, hParam1);
		}
	}
	else if (UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(joaat("translation_overlay"), joaat("GENERIC")) == 0)
	{
		uParam0->f_5.f_1 = 1;
		AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
		func_83(uParam0, hParam1);
	}

	return;
}

BOOL func_42(Hash hParam0, int iParam1) // Position - 0x17E5 Hash - 0x764CD05F ^0xC5F6D4B8
{
	int num;

	if (!func_22(hParam0, 0))
		return false;

	num = func_84(hParam0);

	switch (num)
	{
		case joaat("CLOTHING"):
			if (func_86(hParam0))
				return true;
			break;
	
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
				return true;
			else
				return false;
			break;
	
		case joaat("AMMO"):
			if (!func_85(hParam0, 1))
				return false;
			break;
	}

	return func_87(hParam0, false, false, false) >= iParam1;
}

int func_43(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, Hash hParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0x1868 Hash - 0x11449F01 ^0x11449F01
{
	int value;
	Hash weaponHash;
	Hash lootTableKey;
	BOOL flag;
	BOOL flag2;
	Hash hash;
	int num;
	int i;
	var statId;
	BOOL flag3;

	if (!func_22(hParam0, 0))
		return 0;

	if (!func_88(hParam0, iParam1, bParam2, hParam5))
		return 0;

	if (!func_89(hParam0, &value, iParam1))
		return 0;

	func_90(hParam0, bParam2);
	lootTableKey = 0;

	if (func_84(hParam0) == joaat("CLOTHING"))
		if (!func_5(hParam0, 866047851) && !func_5(hParam0, -1979000645))
			flag = true;

	if (func_91(hParam0, 8388608) && !func_92(27))
		func_93(27);

	func_94(hParam0);

	if (!flag)
	{
		if (func_5(hParam0, -1588156645))
		{
			bParam2 = true;
			flag2 = true;
			weaponHash = func_96(func_95(hParam0, true), false);
		
			if (WEAPON::IS_WEAPON_VALID(weaponHash))
			{
				if (func_3() == -1)
					func_97(weaponHash);
			
				if (func_98(false) && func_99(weaponHash, 0, false, true, 0, false, hParam5, false))
				{
					func_100(hParam0, value, hParam5);
				
					if (!bParam9)
						bParam2 = false;
				}
				else
				{
					func_101(hParam0, value, hParam5);
				}
			}
		}
		else if (func_84(hParam0) == joaat("WEAPON"))
		{
			if (!func_102(hParam0, hParam5, &bParam2, bParam3, bParam4))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_84(hParam0) == joaat("AMMO") && func_103(hParam0))
		{
			if (!func_104(hParam0, &value, hParam5))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_5(hParam0, -103750053))
		{
			func_106(func_105(joaat("claws_collected")), value);
		}
		else if (hParam0 == joaat("provision_alligator_tooth"))
		{
			func_106(func_107(joaat("COLLECTED"), joaat("alligator_tooth")), value);
		}
		else if (func_5(hParam0, -121341956) && !func_5(hParam0, 606799272))
		{
			if (hParam0 != joaat("weapon_kit_detector"))
				func_108(536, false);
		
			func_5(hParam0, -2017733358) || func_5(hParam0, -1369131378);
		}
		else if (func_5(hParam0, -136654233))
		{
			if (func_5(hParam0, -1021472396))
			{
			}
		}
		else if (func_5(hParam0, -1466706512) && func_5(hParam0, 1147021565))
		{
			func_108(519, false);
		}
		else if (func_5(hParam0, 1147021565) && func_5(hParam0, -524514947))
		{
		}
		else if (func_5(hParam0, 554195525))
		{
		}
		else if (func_5(hParam0, 589988438))
		{
			if (func_109())
			{
				func_110(joaat("reward_small"), false, 1065353216, 1, 0, 0, false, -1);
				bParam2 = true;
				flag2 = true;
			}
		}
		else if (func_5(hParam0, 787083290) && func_5(hParam0, 949916894))
		{
			func_111(hParam0);
		}
		else if (func_5(hParam0, -1718133314))
		{
			func_112(hParam0);
		}
		else if (func_5(hParam0, -1738650224))
		{
			func_113(hParam0);
		}
		else if (func_5(hParam0, -1112814642) && func_5(hParam0, 949916894))
		{
			func_114(hParam0);
		}
		else if (hParam0 == joaat("document_player_journal"))
		{
			Global_1940085.f_21 = 0;
		}
		else if (func_5(hParam0, 1841149704))
		{
			func_115();
		}
		else if (func_5(hParam0, -1979000645))
		{
		}
		else if (func_5(hParam0, 606799272))
		{
		}
		else if (func_5(hParam0, -1112814642) && func_5(hParam0, -1697809989))
		{
		}
		else if (func_5(hParam0, -2017733358) || func_5(hParam0, -1369131378))
		{
		}
		else if (func_5(hParam0, -1921346699))
		{
			return 0;
		}
		else if (func_5(hParam0, 1192444843))
		{
			switch (hParam0)
			{
				case joaat("upgrade_fsh_bait_lure_swamp"):
					if (!func_42(471514780, 1))
						func_43(471514780, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_lake"):
					if (!func_42(526074061, 1))
						func_43(526074061, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_swamp"):
					if (!func_42(-967317137, 1))
						func_43(-967317137, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_river"):
					if (!func_42(670273567, 1))
						func_43(670273567, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_lake"):
					if (!func_42(215778062, 1))
						func_43(215778062, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_river"):
					if (!func_42(-1045488665, 1))
						func_43(-1045488665, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			}
		}
		else if (func_5(hParam0, -839724752) && func_91(hParam0, 4))
		{
		}
		else if (func_5(hParam0, 1399091007))
		{
			func_116(hParam0, &lootTableKey);
			bParam2 = true;
			flag2 = true;
		}
	
		switch (hParam0)
		{
			case joaat("upgrade_upg_mortar_pestle"):
				if (func_3() == -1)
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
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_119(686, -103579, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_119(686, -1531530025, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("consumable_tonic"):
			case joaat("consumable_potent_tonic"):
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_119(685, -1228016946, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_fancy");
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
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_119(685, 1934060482, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
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
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_119(685, 1110018439, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("kit_gun_oil"):
				func_108(521, false);
				break;
		
			case joaat("consumable_cigarette_box"):
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
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_119(685, 1408511260, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("consumable_coffee_gnds_reg"):
				if (func_92(1))
					func_108(522, false);
				break;
		
			case joaat("consumable_valerian_root"):
				func_118(271, func_117(joaat("consumable_valerian_root"), false), false);
				break;
		
			case joaat("weapon_kit_binoculars"):
			case joaat("weapon_kit_binoculars_improved"):
				break;
		
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				flag2 = true;
				break;
		
			case joaat("consumable_aged_pirate_rum"):
				func_118(272, func_117(joaat("consumable_aged_pirate_rum"), false), false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("consumable_hair_tonic"):
				func_108(526, false);
				break;
		
			case joaat("consumable_ginseng_elixier"):
				func_118(270, func_117(joaat("consumable_ginseng_elixier"), false), false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
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
		
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("ARROW_BUNDLE");
				break;
		
			case joaat("PROVISION_MP_TREASURE_MAP_REWARDS_BOX_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("reward_abandoned_loot_male");
				break;
		
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_poor");
				break;
		
			case joaat("upgrade_upg_coffee_kit"):
				func_108(534, false);
				break;
		
			case joaat("consumable_hair_grease"):
				func_108(529, false);
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
		
			default:
				break;
		}
	}

	if (!flag2)
	{
		if (value <= 0)
			return 0;
	
		hash = hParam0;
		func_120(&hash);
	
		if (!func_101(hash, value, hParam5))
			return 0;
		else if (!func_98(false))
			return 1;
	
		if (func_84(hParam0) == joaat("CLOTHING"))
			func_121(hParam0);
	}
	else if (lootTableKey != 0)
	{
		if (func_98(false) && !func_122())
		{
			num.f_1 = 10;
			num.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_33, false, false, lootTableKey, &num, 0);
		
			for (i = 0; i < num; i = i + 1)
			{
				func_43(num.f_1[i], num.f_12[i], false, false, false, -897553835, 0, 0, 0, false);
			}
		}
		else
		{
			func_123(lootTableKey, 0);
		}
	}

	statId = { func_124(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::_STAT_ID_INCREMENT_INT(&statId, value);

	func_125(hParam0);

	if (iParam6 > 0f)
	{
		if (func_5(hParam0, -839724752))
			func_126(hParam0, iParam6);
	}
	else if (!bParam2)
	{
		flag3 = hParam5 == 1248274121;
		func_127(hParam0, value, false, flag3, 0, false, false);
	}

	return 1;
}

Hash func_44(var uParam0) // Position - 0x231C Hash - 0xB7BBC016 ^0x6D5B5222
{
	Hash _int;

	if (uParam0->f_116)
	{
		if (DECORATOR::DECOR_EXIST_ON(uParam0->f_101, "letter_item"))
		{
			_int = DECORATOR::DECOR_GET_INT(uParam0->f_101, "letter_item");
		}
		else
		{
			_int = TASK::GET_ITEM_INTERACTION_ITEM_ID(Global_33);
		
			if (!func_22(_int, 0))
			{
			}
		}
	
		Global_1913442 = _int;
	}
	else
	{
		_int = Global_1913442;
	}

	return _int;
}

void func_45(var uParam0, Any anParam1) // Position - 0x2371 Hash - 0x2374F27F ^0x94CC5ADA
{
	int i;

	uParam0->f_105 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES(anParam1);

	for (i = 0; i < uParam0->f_105; i = i + 1)
	{
		uParam0->f_5.f_2[i /*5*/] = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_TYPE(anParam1, i);
		uParam0->f_5.f_2[i /*5*/].f_2 = uParam0->f_5.f_2[i /*5*/];
		uParam0->f_5.f_2[i /*5*/].f_1 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_NUM_VALUES(anParam1, uParam0->f_5.f_2[i /*5*/].f_2);
	}

	return;
}

void func_46(var uParam0, var uParam1) // Position - 0x23DE Hash - 0xED62B70C ^0xED62B70C
{
	func_128(uParam0, uParam1->[0 /*11*/]);
	func_129(uParam0, uParam1);

	if (uParam1->[1 /*11*/] != 0)
		func_130(1, uParam1->[1 /*11*/]);
	else
		func_19(1);

	func_131(uParam0, uParam1);

	if (uParam1->[2 /*11*/] != 0)
		func_130(2, uParam1->[2 /*11*/]);
	else
		func_19(2);

	func_132(uParam1);
	func_133(uParam1);
	return;
}

int func_47(var uParam0, int iParam1) // Position - 0x2446 Hash - 0x990B5855 ^0xA8E94B3C
{
	Hash txdHash;

	if (uParam0->f_1)
	{
		if (uParam0->f_7.f_1 == 0)
			uParam0->f_7.f_1 = HUD::UI_REQUEST_SCENE(uParam0->f_7.f_3, -2);
	
		if (uParam0->f_7.f_1 != 0 && uParam0->f_7 == 0)
		{
			uParam0->f_7 = HUD::UI_GET_SCENE_UIOBJECT(uParam0->f_7.f_1);
		
			if (iParam1 == 0)
				if (!func_134(uParam0))
					return 0;
		
			return 1;
		}
	}
	else if (func_135(*uParam0, &txdHash, joaat("Inventory"), joaat("ui_itemviewer"), 0, 0))
	{
		if (TXD::DOES_STREAMED_TXD_EXIST(txdHash))
		{
			TXD::REQUEST_STREAMED_TXD(txdHash, false);
			uParam0->f_5 = txdHash;
		}
	}

	return 1;
}

BOOL func_48(var uParam0, var uParam1) // Position - 0x24E3 Hash - 0x938132EF ^0x938132EF
{
	if (func_136(uParam0, &uParam1->[0 /*11*/]))
	{
		func_137(uParam0, uParam1);
		return true;
	}

	return false;
}

int func_49(var uParam0, var uParam1) // Position - 0x2507 Hash - 0x6565581A ^0x6565581A
{
	return 1;
}

BOOL func_50(int iParam0) // Position - 0x2510 Hash - 0x475F11C3 ^0x2467C3B3
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 60)
		return false;

	if (Global_1951910[iParam0 /*23*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3);
}

BOOL func_51(int iParam0, BOOL bParam1) // Position - 0x254F Hash - 0x1C19B2F4 ^0xAAE134BB
{
	int num;
	int gameTimer;
	float progress;
	int num2;
	int num3;

	if (bParam1 && !func_50(iParam0))
		return false;

	num = func_82(iParam0);

	if (HUD::_UI_PROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1951910[num /*23*/].f_3))
	{
		if (Global_1951910[num /*23*/].f_20)
			gameTimer = MISC::GET_GAME_TIMER();
		else
			gameTimer = MISC::GET_SYSTEM_TIME();
	
		progress = HUD::_UI_PROMPT_GET_PROGRESS(Global_1951910[num /*23*/].f_3);
	
		if (!HUD::_UI_PROMPT_IS_ACTIVE(Global_1951910[num /*23*/].f_3))
		{
			num2 = gameTimer - Global_1951910[num /*23*/].f_21;
			num3 = BUILTIN::FLOOR((float)Global_1951910[num /*23*/].f_18 * (1f - Global_1951910[num /*23*/].f_22));
		
			if (num2 > num3)
				return true;
		}
		else
		{
			Global_1951910[num /*23*/].f_21 = gameTimer;
			Global_1951910[num /*23*/].f_22 = progress;
		}
	}

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1951910[num /*23*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1951910[num /*23*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1951910[num /*23*/].f_3);
}

void func_52(BOOL bParam0, int iParam1) // Position - 0x2649 Hash - 0xCC16269 ^0xB563FF97
{
	if (bParam0)
	{
		Global_1940252 = 1;
		Global_1940252.f_1 = iParam1;
	}
	else
	{
		Global_1940252 = 2;
	}

	return;
}

BOOL func_53(var uParam0) // Position - 0x266B Hash - 0x8E17540C ^0x63AC476C
{
	BOOL num;

	num = 0;
	uParam0->f_110 = 0;

	if (func_40(Global_17402[1], true))
	{
		num = 1;
		uParam0->f_110 = 1;
		func_78(&Global_17402[1], !uParam0->f_125);
		func_78(&Global_17402[0], true);
	}

	if (func_40(Global_17402[0], true))
	{
		num = 1;
		func_78(&Global_17402[0], !uParam0->f_124);
		func_78(&Global_17402[1], true);
	}

	return num;
}

Hash func_54(Hash hParam0) // Position - 0x26D8 Hash - 0x49053431 ^0xA926A0DE
{
	switch (func_4(hParam0, -949239683))
	{
		case -1565009253:
			return -672448089;
	
		case -1420737577:
			return -34349608;
	
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

BOOL func_55() // Position - 0x27F1 Hash - 0x9AF3EE3F ^0xBF53F360
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_56(int iParam0) // Position - 0x2805 Hash - 0x6FB27747 ^0x572AF236
{
	return iParam0 == -492264119 || iParam0 == 1397875340;
}

void func_57(Hash hParam0, Hash hParam1) // Position - 0x2823 Hash - 0xF91D6A5B ^0x6EDBA286
{
	Hash hash;
	var unk;
	var unk11;

	hash = func_138(hParam0, true);

	if (func_139(hash))
	{
		unk = -1;
		unk.f_1 = -1;
		unk11.f_9 = 1;
		unk11.f_11 = joaat("SLOTID_NONE");
	
		if (func_140(&unk, hash, &unk11, true, hParam1, -1, false))
		{
		}
	}

	return;
}

void func_58(int iParam0) // Position - 0x2874 Hash - 0x9F9C833D ^0x2FA301A0
{
	switch (iParam0)
	{
		case -492264119:
			func_141(-2028134866, 0);
			func_108(861, false);
			break;
	
		case 684416450:
			func_141(-1419640182, 0);
			break;
	
		case 1397875340:
			func_141(518311877, 0);
			break;
	}

	return;
}

int func_59(int iParam0) // Position - 0x28C8 Hash - 0xBF3EFB31 ^0xBF3EFB31
{
	switch (iParam0)
	{
		case -31140163:
			return 0;
	}

	return 1;
}

void func_60(var uParam0) // Position - 0x28E6 Hash - 0xA4DD7C3 ^0xF78CE8D5
{
	uParam0->[0 /*11*/] = 0;
	uParam0->[0 /*11*/].f_1 = 0;
	uParam0->[0 /*11*/].f_3 = 0;
	uParam0->[0 /*11*/].f_5 = 0;
	uParam0->[0 /*11*/].f_6 = 0;
	uParam0->[0 /*11*/].f_7 = 0;
	uParam0->[0 /*11*/].f_7.f_1 = 0;
	uParam0->[0 /*11*/].f_7.f_2 = 0;
	uParam0->[0 /*11*/].f_7.f_3 = 0;
	func_63(uParam0);
	return;
}

void func_61(var uParam0) // Position - 0x2940 Hash - 0x7DBE30D6 ^0xEA3658B1
{
	uParam0->[0 /*11*/] = uParam0->[2 /*11*/];
	uParam0->[0 /*11*/].f_1 = uParam0->[2 /*11*/].f_1;
	uParam0->[0 /*11*/].f_5 = uParam0->[2 /*11*/].f_5;
	uParam0->[0 /*11*/].f_6 = uParam0->[2 /*11*/].f_6;
	uParam0->[0 /*11*/].f_7 = uParam0->[2 /*11*/].f_7;
	uParam0->[0 /*11*/].f_7.f_1 = uParam0->[2 /*11*/].f_7.f_1;
	uParam0->[0 /*11*/].f_7.f_2 = uParam0->[2 /*11*/].f_7.f_2;
	uParam0->[0 /*11*/].f_7.f_3 = uParam0->[2 /*11*/].f_7.f_3;
	uParam0->[0 /*11*/].f_3 = 0;
	return;
}

void func_62(var uParam0) // Position - 0x29C8 Hash - 0xD31813AD ^0xBBBB9597
{
	uParam0->[0 /*11*/] = uParam0->[1 /*11*/];
	uParam0->[0 /*11*/].f_1 = uParam0->[1 /*11*/].f_1;
	uParam0->[0 /*11*/].f_5 = uParam0->[1 /*11*/].f_5;
	uParam0->[0 /*11*/].f_6 = uParam0->[1 /*11*/].f_6;
	uParam0->[0 /*11*/].f_7 = uParam0->[1 /*11*/].f_7;
	uParam0->[0 /*11*/].f_7.f_1 = uParam0->[1 /*11*/].f_7.f_1;
	uParam0->[0 /*11*/].f_7.f_2 = uParam0->[1 /*11*/].f_7.f_2;
	uParam0->[0 /*11*/].f_7.f_3 = uParam0->[1 /*11*/].f_7.f_3;
	uParam0->[0 /*11*/].f_3 = 0;
	return;
}

void func_63(var uParam0) // Position - 0x2A50 Hash - 0x7EE54F18 ^0x3F8ACC37
{
	uParam0->[2 /*11*/] = 0;
	uParam0->[2 /*11*/].f_1 = 0;
	uParam0->[2 /*11*/].f_3 = 0;
	uParam0->[2 /*11*/].f_5 = 0;
	uParam0->[2 /*11*/].f_6 = 0;
	uParam0->[2 /*11*/].f_7 = 0;
	uParam0->[2 /*11*/].f_7.f_1 = 0;
	uParam0->[2 /*11*/].f_7.f_2 = 0;
	uParam0->[2 /*11*/].f_7.f_3 = 0;
	uParam0->[1 /*11*/] = 0;
	uParam0->[1 /*11*/].f_1 = 0;
	uParam0->[1 /*11*/].f_3 = 0;
	uParam0->[1 /*11*/].f_5 = 0;
	uParam0->[1 /*11*/].f_6 = 0;
	uParam0->[1 /*11*/].f_7 = 0;
	uParam0->[1 /*11*/].f_7.f_1 = 0;
	uParam0->[1 /*11*/].f_7.f_2 = 0;
	uParam0->[1 /*11*/].f_7.f_3 = 0;
	return;
}

int func_64(Hash hParam0, BOOL bParam1, BOOL bParam2, int iParam3, float fParam4) // Position - 0x2AF0 Hash - 0x5AD1F9FD ^0x14415059
{
	Hash interactionAnimHash;

	switch (func_4(hParam0, -949239683))
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
	
		case -1420737577:
			if (!bParam1)
			{
				interactionAnimHash = 2129866661;
			
				if (bParam2)
					interactionAnimHash = 1607869040;
			
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
					interactionAnimHash = -1791047090;
			
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

BOOL func_65(Hash hParam0, int iParam1) // Position - 0x2E43 Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

BOOL func_66(int iParam0) // Position - 0x2E5D Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_142(iParam0);
}

BOOL func_67(Hash hParam0) // Position - 0x2E6B Hash - 0xBFE07B66 ^0x7CF1C952
{
	return func_5(hParam0, 566155764) && !UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("Map"));
}

BOOL func_68(Hash hParam0) // Position - 0x2E8D Hash - 0x34C4768F ^0xDCD32F74
{
	return func_5(hParam0, -1472964441) && func_6(hParam0) && !UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("Map"));
}

BOOL func_69(int iParam0) // Position - 0x2EBA Hash - 0xAD766E45 ^0x99868738
{
	if (iParam0 == 82200319)
		return 1;

	return 0;
}

void func_70(var uParam0) // Position - 0x2ED1 Hash - 0x8B54E291 ^0x6EC71C19
{
	if (uParam0->f_105 > 0)
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_BOOK_READ_AVAILABLE", true, -1);

	return;
}

void func_71(Hash hParam0) // Position - 0x2EF0 Hash - 0x77C3B3B0 ^0x538DE55D
{
	if (func_5(hParam0, 1989861793))
		func_57(hParam0, 1946634759);

	return;
}

void func_72(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x2F11 Hash - 0x6499D4AC ^0xF122C41A
{
	int num;
	var unk;

	if (!func_5(hParam0, -1472964441))
		return;

	if (!func_6(hParam0))
		return;

	num = func_143(hParam0, bParam2);

	if (num != 0)
	{
		func_145(func_144(num), 10000, 0, 0, 0, true);
		return;
	}

	unk = 3;
	unk.f_11 = 3;
	unk.f_10 = hParam0;
	func_146(&unk);
	num = func_147(unk);

	if (num != 0)
	{
		func_145(func_144(num), 10000, 0, 0, 0, true);
		return;
	}

	if (iParam1->f_21)
		func_148(iParam1, 0);

	if (iParam1->f_18 != unk.f_10)
	{
		func_106(func_149(joaat("collector_map_opened")), 1);
		iParam1->f_18 = unk.f_10;
	}

	func_150(unk);
	Global_17418.f_3106 = { func_151() };
	iParam1->f_21 = 1;

	if (bParam2)
	{
		UIAPPS::LAUNCH_UIAPP_BY_HASH(joaat("Map"));
		iParam1->f_22 = 0;
	}

	return;
}

void func_73(Hash hParam0) // Position - 0x2FFA Hash - 0xA526C727 ^0xE3A2F00B
{
	int num;
	Vector3 vector;
	float radius;

	if (func_5(hParam0, 566155764))
	{
		func_152(hParam0);
		num = func_153(hParam0);
	
		if (num != -1)
		{
			vector = { func_154(num) };
			radius = { func_155(num) };
			MAP::_SET_PAUSEMAP_COORDS_WITH_RADIUS(vector, radius);
		}
	
		UIAPPS::LAUNCH_UIAPP_BY_HASH(joaat("Map"));
	}

	return;
}

void func_74(int iParam0, BOOL bParam1) // Position - 0x304C Hash - 0x6A490E1C ^0x6A490E1C
{
	if (func_50(*iParam0))
		func_156(*iParam0, bParam1, false, true);

	return;
}

BOOL func_75(var uParam0, var uParam1) // Position - 0x3069 Hash - 0xCC356685 ^0x695F187
{
	BOOL flag;

	if (func_33(*uParam1, uParam0->f_104))
		flag = !func_5(*uParam1, 1051234725);

	if (func_76(*uParam1, uParam0->f_104))
		flag = func_5(*uParam1, 601161511);

	return flag;
}

BOOL func_76(Hash hParam0, int iParam1) // Position - 0x30AC Hash - 0xDB76EF08 ^0x45A19FF7
{
	switch (func_4(hParam0, -949239683))
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

BOOL func_77(int iParam0, BOOL bParam1) // Position - 0x3208 Hash - 0xC074CB7F ^0xC074CB7F
{
	if (bParam1 && !func_50(iParam0))
		return false;

	return !func_157(iParam0, 4);
}

void func_78(int iParam0, BOOL bParam1) // Position - 0x322D Hash - 0xCA238275 ^0xCA238275
{
	if (func_50(*iParam0))
		func_156(*iParam0, bParam1, true, true);

	return;
}

void func_79(var uParam0, var uParam1) // Position - 0x324A Hash - 0xE59010A2 ^0xE59010A2
{
	func_78(&Global_17402[3], func_75(uParam0, uParam1));
	return;
}

BOOL func_80(Hash hParam0, int iParam1) // Position - 0x3264 Hash - 0xDB76EF08 ^0x8DABBCD3
{
	switch (func_4(hParam0, -949239683))
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

void func_81(var uParam0) // Position - 0x33C0 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

int func_82(int iParam0) // Position - 0x33C8 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_83(var uParam0, Hash hParam1) // Position - 0x33D2 Hash - 0xEA957C45 ^0x30F439A2
{
	Hash entryId;

	entryId = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Translate");
	uParam0->f_5.f_63 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(entryId, "Generic");

	if (func_5(hParam1, 1104960349))
	{
		func_158(uParam0, hParam1);
	}
	else if (func_5(hParam1, 1989861793))
	{
		if (func_5(hParam1, -885754398))
			func_159(uParam0, hParam1);
		else
			func_160(uParam0, hParam1);
	}
	else if (func_5(hParam1, 1989861793))
	{
		func_160(uParam0, hParam1);
	}
	else if (func_5(hParam1, -772152977))
	{
		func_161(uParam0, hParam1);
	}
	else if (func_5(hParam1, -2081717885))
	{
		func_162(uParam0, hParam1);
	}
	else if (func_4(hParam1, 1224357681) == joaat("CI_TAG_FOLDER_BOUNTY_POSTERS"))
	{
		func_163(uParam0, hParam1);
	}
	else if (func_5(hParam1, -1227898937))
	{
	}
	else
	{
		func_164(uParam0, hParam1);
	}

	return;
}

int func_84(Hash hParam0) // Position - 0x34C3 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_22(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_85(Hash hParam0, int iParam1) // Position - 0x34EE Hash - 0x2A2D0794 ^0xC823165
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_22(hParam0, 0))
		return false;

	if (Global_1940199.f_6)
		return false;

	hash = func_165(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_166("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_167(&unk, i, num, num2))
			{
			}
			else if (!func_168(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_14(num);
				return true;
			}
		}
	
		func_14(num);
	}

	return false;
}

BOOL func_86(Hash hParam0) // Position - 0x3596 Hash - 0x52397408 ^0x52397408
{
	Hash hash;
	int num;
	int num2;

	if (!func_22(hParam0, 0))
		return false;

	hash = func_169(hParam0);

	switch (hash)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1115104855:
		case 1216664798:
		case 1341188928:
			break;
	
		default:
			return false;
	}

	num = func_170(hParam0);

	if (!(num == 0))
	{
		num2 = func_171(&(Global_17418.f_55.f_664.f_1354.f_5), num);
	
		if (num2 == -1)
			return true;
	}

	num = func_172(hParam0);
	num2 = func_171(&(Global_17418.f_55.f_664.f_1354.f_5), num);

	if (num2 == -1)
		return false;

	return hParam0 == Global_17418.f_55.f_664.f_1354.f_5[num2 /*17*/];
}

int func_87(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3652 Hash - 0x68EBB232 ^0xEAD633B4
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_22(hParam0, 0))
		return 0;

	num = func_84(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_165(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_173(hParam0, false);
	}

	if (func_174(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_175(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_176(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_175(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

BOOL func_88(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x3714 Hash - 0x198FCB70 ^0x369C0AB5
{
	if (func_3() == -1)
	{
		if (func_177(hParam0) && func_178(hParam0))
		{
			func_179(hParam0, iParam1, true, &bParam2, hParam3);
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

BOOL func_89(Hash hParam0, var uParam1, int iParam2) // Position - 0x376B Hash - 0x8ABA0690 ^0x8ABA0690
{
	var unk;
	int num;
	int num2;

	*uParam1 = iParam2;
	func_180(hParam0, uParam1);
	unk = { func_181(hParam0, false, true) };
	num = func_182(hParam0, &unk, false, false);
	num2 = func_183(hParam0, false, false, false);

	if (num > 1 && num2 + iParam2 >= num)
		if (func_5(hParam0, -2051813666))
			func_108(674, true);
		else if (func_3() == -1)
			func_108(673, false);

	if (func_184(hParam0, &unk, *uParam1, false, false, -1, false))
		if (num2 < num)
			*uParam1 = num - num2;
		else
			return false;

	return true;
}

void func_90(Hash hParam0, BOOL bParam1) // Position - 0x3809 Hash - 0x86DCB18E ^0x6098B664
{
	if (bParam1)
		return;

	if (!func_185())
		return;

	switch (func_4(hParam0, -949239683))
	{
		case -1565009253:
		case -1420737577:
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
			Global_1940085.f_70.f_5 = 1;
			Global_1940085.f_70.f_6 = 0;
			Global_1940085.f_70.f_1 = hParam0;
			break;
	}

	return;
}

BOOL func_91(Hash hParam0, int iParam1) // Position - 0x38BA Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_22(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

BOOL func_92(int iParam0) // Position - 0x38D9 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_186(iParam0))
		return false;

	return func_187(iParam0);
}

void func_93(int iParam0) // Position - 0x38F5 Hash - 0xFDF9CB10 ^0xFDF9CB10
{
	if (!func_186(iParam0))
		return;

	func_188(iParam0);
	func_189(iParam0);
	return;
}

void func_94(Hash hParam0) // Position - 0x3916 Hash - 0xB0B39801 ^0xC789CDD0
{
	if (func_5(hParam0, -1522723129))
		func_190(-848633709, 0, 255, 0, false);
	else if (func_5(hParam0, -283942357))
		func_190(-981153234, 0, 255, 0, false);
	else if (func_5(hParam0, 683680997))
		func_190(-756350192, 0, 255, 0, false);
	else if (func_5(hParam0, 1307628809))
		func_190(603094518, 0, 255, 0, false);

	return;
}

Hash func_95(Hash hParam0, BOOL bParam1) // Position - 0x399B Hash - 0x27CC99BE ^0xBF8437DD
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
	
		case joaat("ammo_throwing_knives_confuse"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_throwing_knives_wound"):
			hash = joaat("weapon_thrown_throwing_knives");
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
	
		case joaat("ammo_bolas"):
			hash = joaat("weapon_thrown_bolas");
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
	
		case joaat("ammo_poisonbottle"):
			hash = joaat("weapon_thrown_poisonbottle");
			break;
	
		case joaat("ammo_throwing_knives_improved"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_tomahawk"):
			hash = joaat("weapon_thrown_tomahawk");
			break;
	
		case joaat("ammo_throwing_knives_trail"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("AMMO_MOLOTOV"):
			hash = joaat("weapon_thrown_molotov");
			break;
	
		case joaat("ammo_throwing_knives_disorient"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_hatchet_double_bit"):
			hash = joaat("weapon_melee_hatchet_double_bit");
			break;
	
		case joaat("ammo_throwing_knives_drain"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_throwing_knives_poison"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		default:
			break;
	}

	if (func_22(hash, 0))
		if (bParam1)
			if (func_191(hash) || func_192(hash))
				return hash;
		else
			return hash;

	return hParam0;
}

Hash func_96(Hash hParam0, BOOL bParam1) // Position - 0x3B91 Hash - 0x68919B0 ^0x66A44A24
{
	if (!func_22(hParam0, 0))
		return 0;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return hParam0;

	!bParam1;
	return 0;
}

void func_97(Hash hParam0) // Position - 0x3BBD Hash - 0x6D90E810 ^0x1F802071
{
	Hash weaponUnlock;

	if (Global_1572887.f_14 != -1)
		return;

	if (!func_168(hParam0))
		return;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(weaponUnlock, true);
	return;
}

BOOL func_98(BOOL bParam0) // Position - 0x3BF7 Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_3() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_175(bParam0));
}

BOOL func_99(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0x3C15 Hash - 0x61DE9CAE ^0x4ADCEE54
{
	var unk;
	var unk6;
	var unk28;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	if (WEAPON::IS_WEAPON_MELEE_WEAPON(hParam0) && iParam1 > 0)
		iParam1 = 0;

	if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
	{
		unk = { func_181(hParam0, false, true) };
	
		if (func_193(hParam0, &unk, unk.f_4, false, false))
		{
			unk6.f_9 = joaat("SLOTID_NONE");
		
			if (func_194(hParam0, &unk6, unk.f_4))
			{
				unk28 = { func_195(hParam0, unk, unk.f_4, false) };
				func_196(hParam0, &unk28, &unk, 1, -142743235, 1, false);
			}
		}
	}

	if (func_98(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_33, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
			return 0;
	
		func_100(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_197(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_33, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

BOOL func_100(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x3D45 Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return true;

	if (!func_103(hParam0))
		return false;

	if (!func_98(false))
		return false;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_33, hParam0, iParam1, hParam2);
	return true;
}

BOOL func_101(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x3D80 Hash - 0x452D8154 ^0x10C1EA46
{
	int num;
	var unk;
	var unk6;

	if (!func_22(hParam0, 0))
		return 0;

	if (iParam1 < 1)
		return 0;

	num = func_174(hParam0, joaat("DEFAULT"));

	if (num != 0)
		return func_198(hParam0, iParam1, hParam2);

	unk = { func_181(hParam0, false, true) };
	unk6 = { func_195(hParam0, unk, unk.f_4, false) };
	return func_199(hParam0, &unk6, &unk, iParam1, hParam2, false);
}

BOOL func_102(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x3DEF Hash - 0xF555C517 ^0x702518D6
{
	Hash weaponHash;
	var unk;
	int num;
	Hash weaponHash2;

	weaponHash = func_96(hParam0, false);

	if (WEAPON::IS_WEAPON_VALID(weaponHash))
	{
		if (func_3() == -1)
		{
			func_97(weaponHash);
		
			if (hParam1 == 1248274121)
				func_200(weaponHash);
		}
	
		if (!func_184(hParam0, &unk, 1, false, false, -1, false))
		{
			func_179(hParam0, 1, false, uParam2, hParam1);
			num = func_201(weaponHash);
		
			if (WEAPON::_IS_WEAPON_SNIPER(weaponHash))
			{
				func_99(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("weapon_fishingrod") || WEAPON::_IS_WEAPON_BINOCULARS(weaponHash))
			{
				func_99(weaponHash, 0, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (WEAPON::_IS_WEAPON_LASSO(weaponHash))
			{
				func_99(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash))
			{
				if (weaponHash == joaat("weapon_melee_knife_john") && !func_202())
					return false;
			
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(hParam0))
				{
				}
				else if (!func_203(weaponHash))
				{
					func_99(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
				}
				else
				{
					func_99(weaponHash, WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 4, bParam3, bParam4, 0, false, hParam1, false);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash))
			{
				weaponHash2 = func_204(Global_33, 2, false, true);
			
				if (func_168(weaponHash2) && !Global_26688 && weaponHash2 != weaponHash && !func_42(joaat("upgrade_offhand_holster"), 1) && bParam4)
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_33, weaponHash2);
			
				if (func_168(weaponHash2) && func_42(joaat("upgrade_offhand_holster"), 1))
					if (!func_99(weaponHash, num, bParam3, bParam4, 3, true, hParam1, false))
						return false;
				else if (!func_99(weaponHash, num, bParam3, bParam4, 0, true, hParam1, false))
					return false;
			}
			else if (!func_99(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false))
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
		func_108(515, true);

	return true;
}

BOOL func_103(Hash hParam0) // Position - 0x3FFD Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

BOOL func_104(Hash hParam0, var uParam1, Hash hParam2) // Position - 0x400E Hash - 0x8FE8AA03 ^0x8ABA2B4
{
	int num;
	int weaponClipSize;
	int ammo;
	int pedAmmoByType;
	Hash weaponTypeFromAmmoType;
	int num2;
	int num3;

	if (!func_103(hParam0))
		return false;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);
	pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	if (func_168(weaponTypeFromAmmoType))
		WEAPON::GET_MAX_AMMO(Global_33, &ammo, weaponTypeFromAmmoType);

	num2 = ammo - pedAmmoByType;

	if (WEAPON::IS_WEAPON_BOW(weaponTypeFromAmmoType))
		weaponClipSize = 5;
	else
		weaponClipSize = WEAPON::GET_WEAPON_CLIP_SIZE(weaponTypeFromAmmoType);

	if (*uParam1 > 0)
		num3 = *uParam1;
	else if (*uParam1 < 0)
		num3 = weaponClipSize * MISC::ABSI(*uParam1);

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
		func_118(func_205(hParam0), func_117(hParam0, false), true);
		return false;
	}

	ammo == pedAmmoByType + num;

	if (num == 0)
		return false;

	if (func_98(false))
	{
		if (func_100(hParam0, num, hParam2))
		{
			*uParam1 = num;
			return true;
		}
	}
	else
	{
		return func_101(hParam0, *uParam1, hParam2);
	}

	return false;
}

struct<2> func_105(int iParam0) // Position - 0x410C Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

void func_106(var uParam0, var uParam1, int iParam2) // Position - 0x411E Hash - 0x31B6F9FF ^0xF5CD2283
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

struct<2> func_107(int iParam0, int iParam1) // Position - 0x413B Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_108(int iParam0, BOOL bParam1) // Position - 0x4151 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_206(iParam0, &num, &num2);

	if (!func_207(iParam0, num, num2, bParam1))
		return;

	func_208(num, num2);
	return;
}

BOOL func_109() // Position - 0x417E Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

int func_110(Hash hParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0x4187 Hash - 0x6AA1931B ^0x6AA1931B
{
	int num;

	if (func_3() == 0)
	{
		func_123(hParam0, 0);
		return 0;
	}

	num = func_209(hParam0, bParam6, iParam7);

	if (!bParam1)
		func_210(num, sParam4, iParam5, false);

	func_211(num, bParam1, iParam2, iParam3);
	return num;
}

void func_111(Hash hParam0) // Position - 0x41CE Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_112(Hash hParam0) // Position - 0x41D6 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_113(Hash hParam0) // Position - 0x41DE Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_114(Hash hParam0) // Position - 0x41E6 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_115() // Position - 0x41EE Hash - 0xC8FE42DB ^0x507D23E9
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("sp_chal_expl_root")) < 2)
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("sp_chal_expl_root"), joaat("acw_expl_rank_01_treasure"), 1);

	return;
}

void func_116(Hash hParam0, var uParam1) // Position - 0x4212 Hash - 0xC6F24F1D ^0xC6F24F1D
{
	var unk;

	func_212(hParam0, uParam1, &unk);
	return;
}

Hash func_117(Hash hParam0, BOOL bParam1) // Position - 0x4224 Hash - 0x88397BA6 ^0x88397BA6
{
	Hash hash;

	if (!func_22(hParam0, 0))
		return 0;

	hash = func_213(hParam0, bParam1);

	if (hash != 0)
		return hash;

	return hParam0;
}

void func_118(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0x4252 Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_206(iParam0, &num, &num2);

	if (!func_207(iParam0, num, num2, bParam2))
		return;

	if (!func_214(iParam0, 1024))
		return;

	func_208(num, num2);
	Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/] = hParam1;
	Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	return;
}

void func_119(int iParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x42B2 Hash - 0x692A8F54 ^0x2BADE95C
{
	int num;
	int num2;

	func_206(iParam0, &num, &num2);

	if (!func_207(iParam0, num, num2, bParam2))
		return;

	if (!func_214(iParam0, 1024))
		return;

	func_208(num, num2);
	Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/] = hParam1;

	if (!bParam3)
		Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	else
		Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;

	return;
}

void func_120(var uParam0) // Position - 0x432D Hash - 0xE1DD92C1 ^0x7C7DCFDC
{
	switch (*uParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = joaat("consumable_cigarette_box");
			break;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
			*uParam0 = joaat("consumable_cocaine_chewing_gum");
			break;
	
		case joaat("consumable_cigarette_box_cheap_used"):
			*uParam0 = joaat("consumable_cigarette_box_cheap");
			break;
	}

	return;
}

void func_121(Hash hParam0) // Position - 0x4371 Hash - 0xC34F92EA ^0xC34F92EA
{
	if (func_3() != -1)
		return;

	return;
}

BOOL func_122() // Position - 0x4384 Hash - 0xD3E48215 ^0xDBA46110
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
		return false;

	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

int func_123(Hash hParam0, int iParam1) // Position - 0x43A0 Hash - 0x10BA6DD6 ^0xD79E06BF
{
	var unk;
	var unk5;

	if (0 == hParam0)
		return 0;

	unk5.f_1 = 10;
	func_215(&unk5, joaat("LOOT_TYPE_NORMAL"));
	return func_216(hParam0, &unk5, &unk, iParam1, 0);
}

struct<2> func_124(Hash hParam0) // Position - 0x43D4 Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_22(hParam0, 0))
		return unk;

	if (func_5(hParam0, -305066475))
		if (func_3() == -1)
			if (func_5(hParam0, -537818634))
				return func_149(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_149(joaat("deadeye_items"));
	else if (func_5(hParam0, -537818634))
		return func_149(joaat("medicine_items"));

	if (func_5(hParam0, 2084895747))
		return func_149(joaat("lock_breaker_items"));

	return unk3;
}

void func_125(Hash hParam0) // Position - 0x4468 Hash - 0xD6BB2A12 ^0xD6BB2A12
{
	switch (hParam0)
	{
		case joaat("provision_bird_feather_flight"):
			break;
	}

	return;
}

void func_126(Hash hParam0, int iParam1) // Position - 0x4481 Hash - 0x81B514EF ^0x5A78BD0E
{
	char* str;

	str = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(Global_1902822.f_37);
	func_219(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", iParam1, str), "inventory_items", func_218(hParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

void func_127(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x44C2 Hash - 0x81C6837 ^0x21B516A3
{
	BOOL flag;
	int value;
	var unk;
	int num;
	char* str;
	int num2;
	int num3;
	Hash hash;
	int num4;
	char* str2;
	char* str3;
	int num5;
	char* str4;
	Hash hash2;
	Hash hash3;
	int value2;
	const char* str5;
	var unk7;

	if (!func_22(hParam0, 0))
		return;
	else if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;
	else if (iParam1 == 0)
		return;

	if (!func_220() || bParam6)
	{
		func_221(hParam0, iParam1, bParam2, iParam4, bParam3, bParam5);
		return;
	}

	flag = false;
	value = MISC::ABSI(iParam1);
	TEXT_LABEL_ASSIGN_STRING(&unk, value == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);

	if (hParam0 == joaat("AMMO_MOONSHINEJUG_MP"))
		TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_GET_PUMP", 32);

	if (iParam1 > 0)
	{
	}
	else if (bParam3 || iParam4)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, value == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);
		flag = true;
	}
	else if (bParam2 && func_91(hParam0, 2097152))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		flag = true;
	}

	num = func_84(hParam0);
	num2 = 0;
	num3 = joaat("Inventory");

	if (num == joaat("AMMO") && hParam0 != joaat("ammo_hatchet") && hParam0 != joaat("ammo_hatchet_cleaver") && hParam0 != joaat("ammo_hatchet_hunter") && hParam0 != joaat("ammo_tomahawk_ancient") && hParam0 != joaat("ammo_poisonbottle") && hParam0 != joaat("AMMO_MOONSHINEJUG_MP") && !func_5(hParam0, -1982291600) && !func_5(hParam0, 137764179))
	{
		num2 = joaat("ammo_types");
		num3 = joaat("ammo_types");
	}

	hash = func_169(hParam0);

	if (num == joaat("weapon_mod") || num == joaat("weapon_decoration") || hash == -1674363638 || hash == 252325943 || hash == 829857647 || hash == -636562458 || hash == 1341188928 || hash == 1216664798)
	{
		str = "ITEMTYPE_UPGRADES";
		str.f_1 = "itemtype_textures";
	}
	else if (!func_223(hParam0, &str, num3, num2, 0, joaat("ui_itemviewer")))
	{
		str = "_PLACEHOLDER";
		str.f_1 = "inventory_items";
	}

	if (MISC::GET_HASH_KEY(str) == 121560594)
		str = "DOCUMENT_MAP_GENERIC";

	if (bParam5)
	{
		str = "ITEMTYPE_ORDERED_ITEM";
		str.f_1 = "itemtype_textures";
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return;

	num4 = joaat("COLOR_PURE_WHITE");
	str2 = "Transaction_Positive";
	str3 = "Transaction_Feed_Sounds";
	num5 = 0;

	if (flag)
	{
		num4 = joaat("color_greymid");
		str2 = "Transaction_Negative";
		num5 = 1;
	}

	if (func_5(hParam0, 474910316))
	{
		str4 = func_224(hParam0);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(str4))
		{
			str2 = str4;
			str3 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}

	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(hParam0))
		if (!flag && !bParam2)
			num4 = joaat("color_rpg_special_1");
		else
			num4 = joaat("color_yellowdark");

	if (func_5(hParam0, 1816585950))
		num4 = joaat("color_objective");

	if (func_225(hParam0))
		if (!flag && !bParam2)
			num4 = joaat("color_yellow");
		else
			num4 = joaat("color_yellowdark");

	hash2 = func_117(hParam0, false);

	if (func_226(hash) && func_5(hParam0, -306684263) && hash2 != 0)
	{
		hash2 = func_227(hParam0);
	}
	else if (func_84(hParam0) == joaat("CLOTHING"))
	{
		hash3 = func_228(hParam0);
	
		if (func_22(hash3, 0))
			hash2 = func_117(hash3, false);
	}

	if (func_229(hParam0, 1443104131) && bParam3)
	{
		value2 = 1;
		func_230(hParam0, -915411861, &value2, false);
		value = BUILTIN::CEIL(BUILTIN::TO_FLOAT(value) / BUILTIN::TO_FLOAT(value2));
		iParam1 = BUILTIN::CEIL(BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(value2));
	}

	str5 = func_231(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, hash2), value), num4);

	if (iParam1 == 1)
		str5 = MISC::VAR_STRING(0, hash2);

	if (hash == -1839668642 && hParam0 != joaat("clothing_item_hair_none") && hParam0 != 1326838792 && hParam0 != -230310728 || hash == 231148558 && hParam0 != joaat("clothing_item_m_beard_stubble") && hParam0 != joaat("clothing_item_beard_none") || hash == 252325943 && hParam0 != joaat("clothing_blend_lipstick_none") || hash == -636562458 && hParam0 != joaat("clothing_blend_eyeshadow_none"))
		str5 = MISC::VAR_STRING(0, func_232(hParam0, -442898163));

	if (hash == -126813555 || hash == 1946043663)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk7, "", 128);
	
		if (func_233(hParam0, &unk7))
			str5 = func_235(func_234(unk7), joaat("COLOR_PURE_WHITE"));
	}

	func_219(str5, str.f_1, MISC::GET_HASH_KEY(str), num5, num4, str3, str2, 0, true);
	return;
}

int func_128(var uParam0, var uParam1) // Position - 0x499C Hash - 0xF1B2F4A1 ^0x583C81D0
{
	int i;
	int num;
	var unk;

	if (func_166("ALL SATCHEL EXCLUDING CLOTHING", &(uParam0->f_1.f_1), &(uParam0->f_1), joaat("SLOTID_SATCHEL"), false))
	{
		uParam0->f_119 = 1;
		i = 0;
		num = 0;
	
		if (uParam0->f_1 > 0)
		{
			unk.f_9 = joaat("SLOTID_NONE");
		
			for (i = uParam0->f_1 - 1; i >= 0; i = i + -1)
			{
				if (!func_167(&unk, i, uParam0->f_1.f_1, uParam0->f_1))
				{
				}
				else
				{
					if (uParam1 == unk.f_4)
					{
						uParam0->f_1.f_2 = i;
						uParam0->f_1.f_3 = num;
					}
				
					if (Global_1940252.f_11587 == 0)
					{
						if (func_236(&unk, 0))
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

BOOL func_129(var uParam0, var uParam1) // Position - 0x4A53 Hash - 0x3E027C66 ^0x70F81265
{
	var unk;
	int i;
	BOOL flag;

	if (uParam0->f_1.f_2 + 1 >= uParam0->f_1)
	{
		uParam1->[2 /*11*/] = 0;
		return false;
	}

	if (Global_17414)
		return false;

	if (!uParam0->f_119)
		return false;

	unk.f_9 = joaat("SLOTID_NONE");
	i = 0;
	flag = false;

	for (i = uParam0->f_1.f_2 + 1; i <= uParam0->f_1 - 1; i = i + 1)
	{
		if (func_167(&unk, i, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (func_237(uParam1->[0 /*11*/], unk.f_4))
			{
				if (!flag)
				{
					uParam1->[1 /*11*/] = unk.f_4;
					flag = true;
				}
				else
				{
					uParam0->f_124 = 0;
					return flag;
				}
			}
		}
	}

	if (!flag)
		uParam1->[1 /*11*/] = 0;

	return flag;
}

void func_130(int iParam0, Hash hParam1) // Position - 0x4B0D Hash - 0x6166124B ^0x346C850E
{
	if (!func_22(hParam1, 0))
		return;

	if (!func_5(hParam1, 747873593) && !func_5(hParam1, joaat("CI_TAG_FOLDER_LETTERS")) && !func_5(hParam1, joaat("CI_TAG_FOLDER_NOTES")))
		return;

	if (hParam1 != Global_1913614[iParam0 /*6*/])
	{
		Global_1913614[iParam0 /*6*/].f_1 = 3;
		Global_1913614[iParam0 /*6*/] = hParam1;
		Global_1913614[iParam0 /*6*/].f_5 = 0;
	}

	return;
}

BOOL func_131(var uParam0, var uParam1) // Position - 0x4B84 Hash - 0x14EE969C ^0x3CE0D873
{
	var unk;
	int i;
	int num;
	int num2;
	BOOL flag;

	unk.f_9 = joaat("SLOTID_NONE");
	i = 0;
	num = 16 - uParam0->f_1.f_3;

	if (Global_17414)
		return false;

	if (!uParam0->f_119)
		return false;

	flag = false;

	for (i = uParam0->f_1.f_2 - 1; i >= 0; i = i + -1)
	{
		if (Global_1940252.f_11587 == 0)
		{
			num2 = num2 + 1;
		
			if (num2 >= num)
				return false;
		}
	
		if (func_167(&unk, i, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (func_237(uParam1->[0 /*11*/], unk.f_4))
			{
				if (!flag)
				{
					uParam1->[2 /*11*/] = unk.f_4;
					flag = true;
				}
				else
				{
					uParam0->f_125 = 0;
					return flag;
				}
			}
		}
	}

	if (!flag)
		uParam1->[2 /*11*/] = 0;

	return flag;
}

void func_132(var uParam0) // Position - 0x4C47 Hash - 0x70905DA9 ^0x70905DA9
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (func_22(uParam0->[i /*11*/], 0))
			func_238(&uParam0->[i /*11*/]);
	}

	return;
}

void func_133(var uParam0) // Position - 0x4C79 Hash - 0xFDB128B0 ^0x2B471831
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (func_22(uParam0->[i /*11*/], 0))
			uParam0->[i /*11*/].f_6 = func_4(uParam0->[i /*11*/], -949239683);
	}

	return;
}

BOOL func_134(var uParam0) // Position - 0x4CB8 Hash - 0x43D284C0 ^0x5C458F0B
{
	if (!uParam0->f_3 && uParam0->f_7.f_1 != 0 && uParam0->f_7 != 0)
	{
		HUD::UI_MOVIEVIEW_SET_RENDER_TARGET(uParam0->f_7, uParam0->f_7.f_2);
		uParam0->f_3 = 1;
		return true;
	}

	return false;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_135(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x4CF8 Hash - 0x92B705D3 ^0xB783F681
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

BOOL func_136(var uParam0, var uParam1) // Position - 0x4DEE Hash - 0xEC5FD8E2 ^0x3EBD7048
{
	if (uParam1->f_3)
		return true;

	if (uParam1->f_1)
	{
		return func_134(uParam1);
	}
	else if (uParam1->f_5 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_101) && TXD::HAS_STREAMED_TXD_LOADED(uParam1->f_5))
		{
			if (!uParam1->f_3)
				OBJECT::SET_CUSTOM_TEXTURES_ON_OBJECT(uParam0->f_101, uParam1->f_5, 0, 0);
		
			uParam1->f_3 = 1;
			return true;
		}
		else
		{
			return false;
		}
	}

	return true;
}

int func_137(var uParam0, var uParam1) // Position - 0x4E5B Hash - 0x7D48C204 ^0x7D48C204
{
	return 0;
}

Hash func_138(Hash hParam0, BOOL bParam1) // Position - 0x4E64 Hash - 0x6C21B9A ^0x615CAFBF
{
	var outData;

	if (!func_22(hParam0, 0))
		return func_239(func_23(hParam0), bParam1);

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData) || outData.f_5 == 0)
		return 0;

	if (bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(outData.f_5))
		return 0;

	return outData.f_5;
}

BOOL func_139(Hash hParam0) // Position - 0x4EBC Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

BOOL func_140(int* piParam0, Hash hParam1, var uParam2, BOOL bParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x4EC8 Hash - 0x9D321287 ^0x9D321287
{
	if (!func_240(piParam0, false))
		return false;

	if (hParam4 == 0)
		hParam4 = func_241(hParam1, 0, true, iParam5, bParam6);

	if (!func_242(hParam1, hParam4, iParam5))
		return false;

	uParam2->f_17 = hParam1;
	uParam2->f_8 = hParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = hParam4;
	uParam2->f_12 = 1248274121;

	if (!func_243(piParam0, *uParam2, 541670136, bParam3))
		return false;

	if (COLLECTION::_0x9ADEE485726025D4(hParam1) != 0)
	{
		Global_1292143.f_20.f_422 != -1;
		Global_1292143.f_20.f_422.f_1 = hParam1;
		Global_1292143.f_20.f_422 = piParam0->f_1;
	}

	return true;
}

int func_141(int iParam0, int iParam1) // Position - 0x4F71 Hash - 0x37FA9E51 ^0x38034F60
{
	int num;

	if (iParam0 == 0)
		return -1;

	if (Global_1292143.f_459.f_1546 >= 40)
	{
		func_244();
		return -1;
	}

	num = -1;
	num.f_5.f_1 = 11;
	num.f_18.f_1 = 10;
	num.f_4 = iParam0;
	num = func_245();
	num.f_3 = iParam1;
	func_246(num, 0);
	return num;
}

BOOL func_142(int iParam0) // Position - 0x4FD5 Hash - 0xA059D395 ^0x8E0849E2
{
	return func_247(Global_1940085.f_38, iParam0);
}

int func_143(Hash hParam0, BOOL bParam1) // Position - 0x4FE9 Hash - 0x7A949BFB ^0xDA5FE858
{
	if (!func_6(hParam0))
		return 0;

	if (func_248(0, false, true))
		return 1;

	if (hParam0 == -171130052)
		if (!func_42(joaat("kit_collector_spade"), 1))
			return 3;
	else if (hParam0 == 1133082501 || hParam0 == -944411166 || hParam0 == 1850181232)
		if (!func_42(joaat("weapon_kit_metal_detector"), 1))
			return 4;

	if (hParam0 == -1820411463)
		if (!func_42(joaat("weapon_kit_metal_detector"), 1))
			return 4;
		else if (!func_249())
			return 5;

	if (bParam1)
		if (Global_17418.f_2992 > 0)
			return 2;

	return 0;
}

char* func_144(int iParam0) // Position - 0x50A4 Hash - 0x965887CC ^0xCA1ECA2C
{
	switch (iParam0)
	{
		case 1:
			return "COLLECTIBLE_MAP_ON_MISSION";
	
		case 2:
			return "COLLECTIBLE_MAP_ACTIVE_MAP";
	
		case 3:
			return "COLLECTIBLE_MAP_SPADE_MISSING";
	
		case 4:
			return "COLLECTIBLE_MAP_METAL_DETECTOR_MISSING";
	
		case 5:
			return "COLLECTIBLE_MAP_SEARCH_ITEMS_NOT_AVAILABLE";
	}

	return "NET_COLLECTIBLE_OPEN_MAP_RESULT_NONE";
}

int func_145(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x5105 Hash - 0x8EBD6187 ^0x42F0F0AC
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

void func_146(var uParam0) // Position - 0x5140 Hash - 0xC86BF260 ^0x25A859CD
{
	switch (uParam0->f_10)
	{
		case -1820411463:
			func_250(uParam0, -352095726);
			break;
	
		case -1168276602:
			func_250(uParam0, -149719013);
			break;
	
		case -1017335808:
			func_250(uParam0, 1940829793);
			break;
	
		case -944411166:
			func_250(uParam0, 143267379);
			break;
	
		case -849054700:
			func_250(uParam0, 1239889275);
			break;
	
		case -171130052:
			func_250(uParam0, -1995062316);
			break;
	
		case 1133082501:
			func_250(uParam0, 1562621600);
			break;
	
		case 1509009970:
			func_250(uParam0, 0);
			break;
	
		case 1850181232:
			func_250(uParam0, -944041124);
			break;
	
		case 2147314556:
			func_250(uParam0, 781094263);
			break;
	
		default:
			func_250(uParam0, 0);
			break;
	}

	return;
}

int func_147(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) // Position - 0x5220 Hash - 0xE99EB0D1 ^0xE99EB0D1
{
	int i;

	for (i = 0; i < iParam0; i = i + 1)
	{
		if (!_IS_NULL_VECTOR(iParam0[i /*3*/]))
			return 0;
	}

	return 5;
}

void func_148(int iParam0, int iParam1) // Position - 0x5250 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*iParam0 = iParam1;
	return;
}

struct<2> func_149(int iParam0) // Position - 0x525D Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

void func_150(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) // Position - 0x526D Hash - 0x6A8E491 ^0xC9DFE9B0
{
	int i;

	Global_17418.f_2992.f_17 = iParam0.f_10;

	for (i = 0; i < iParam0; i = i + 1)
	{
		Global_17418.f_2992.f_1[i /*5*/].f_1 = { iParam0[i /*3*/] };
		Global_17418.f_2992.f_1[i /*5*/].f_4 = iParam0.f_11[i];
	}

	return;
}

struct<10> func_151() // Position - 0x52C2 Hash - 0x4F39BE3E ^0xAB76F360
{
	return Global_1296539.f_34[func_252() /*10*/];
}

void func_152(Hash hParam0) // Position - 0x52D9 Hash - 0x50FD6976 ^0xAA249651
{
	var unk;
	var value;

	unk.f_4 = 1;
	unk.f_5 = hParam0;
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, PLAYER::PLAYER_ID());
	func_253(&unk, value);
	return;
}

int func_153(Hash hParam0) // Position - 0x52FE Hash - 0x537A51B4 ^0x537A51B4
{
	int i;

	for (i = 0; i <= 49; i = i + 1)
	{
		if (func_254(i, hParam0))
			return i;
	}

	return -1;
}

Vector3 func_154(int iParam0) // Position - 0x532A Hash - 0x41098A4 ^0x4C5558DE
{
	var unk;
	var unk4;

	if (func_255(&unk4, iParam0) && func_256(&unk4))
		func_257(unk4, 924198834, &unk, true);

	return unk;
}

Vector3 func_155(int iParam0) // Position - 0x535D Hash - 0x41098A4 ^0xEFA7220E
{
	var unk;
	var unk4;

	if (func_255(&unk4, iParam0) && func_256(&unk4))
		func_257(unk4, 1334964216, &unk, true);

	return unk;
}

void func_156(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5390 Hash - 0x90451281 ^0x90451281
{
	int num;

	if (bParam2 && !func_50(iParam0))
		return;

	num = func_82(iParam0);

	if (bParam1)
	{
		func_258(iParam0, 4);
	
		if (bParam3)
			func_259(num, true);
	
		func_260(num, true);
	}
	else
	{
		func_261(iParam0, 4);
		func_260(num, false);
	}

	return;
}

BOOL func_157(int iParam0, int iParam1) // Position - 0x53E4 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1951910[iParam0 /*23*/].f_1 && iParam1 != false;
}

void func_158(var uParam0, Hash hParam1) // Position - 0x5405 Hash - 0x7799F092 ^0x1A028C41
{
	int i;
	int j;

	for (j = 0; j < uParam0->f_105; j = j + 1)
	{
		for (i = 0; i < uParam0->f_5.f_2[j /*5*/].f_1; i = i + 1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(hParam1, uParam0->f_5.f_2[j /*5*/].f_2, i);
		
			switch (uParam0->f_5.f_2[j /*5*/])
			{
				case -641080715:
					func_262(&(uParam0->f_5), 1, 2, true, false);
					break;
			
				case -139224928:
					func_262(&(uParam0->f_5), 4, 1, true, false);
					break;
			
				case -29447330:
					func_262(&(uParam0->f_5), 5, 2, true, false);
					break;
			
				case 159464507:
					func_262(&(uParam0->f_5), 6, 1, true, false);
					break;
			
				case 276123595:
					func_262(&(uParam0->f_5), 3, 3, true, false);
					break;
			
				case 1175698187:
					func_262(&(uParam0->f_5), 7, 2, false, false);
					break;
			
				case 1410847083:
					func_262(&(uParam0->f_5), 0, 0, true, false);
					break;
			
				case 1724675796:
					func_262(&(uParam0->f_5), 2, 1, true, false);
					break;
			}
		}
	}

	return;
}

void func_159(var uParam0, Hash hParam1) // Position - 0x550F Hash - 0x5650074E ^0xBBBFF2C3
{
	int i;
	int j;
	int num;
	const char* stringFromHashKey;

	for (j = 0; j < uParam0->f_105; j = j + 1)
	{
		for (i = 0; i < uParam0->f_5.f_2[j /*5*/].f_1; i = i + 1)
		{
			if (func_263(i))
			{
				uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(hParam1, uParam0->f_5.f_2[j /*5*/].f_2, i);
				stringFromHashKey = HUD::GET_STRING_FROM_HASH_KEY(uParam0->f_5);
				uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(hParam1, uParam0->f_5.f_2[j /*5*/].f_2, i + 1);
			
				if (MISC::_DOES_STRING_EXIST_IN_STRING(stringFromHashKey, "_MH"))
					func_262(&(uParam0->f_5), num, 0, true, false);
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(stringFromHashKey, "_SH"))
					func_262(&(uParam0->f_5), num, 1, true, false);
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(stringFromHashKey, "_BDY_C"))
					func_262(&(uParam0->f_5), num, 3, false, false);
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(stringFromHashKey, "_BDY_J"))
					func_262(&(uParam0->f_5), num, 4, false, false);
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(stringFromHashKey, "_BDY_L"))
					func_262(&(uParam0->f_5), num, 2, false, false);
			
				num = num + 1;
			}
		}
	}

	return;
}

void func_160(var uParam0, Hash hParam1) // Position - 0x5622 Hash - 0xF209FECA ^0x7CCBC66E
{
	int i;
	int j;
	int num;

	num = 0;

	for (j = 0; j < uParam0->f_105; j = j + 1)
	{
		for (i = 0; i < uParam0->f_5.f_2[j /*5*/].f_1; i = i + 1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(hParam1, uParam0->f_5.f_2[j /*5*/].f_2, i);
		
			switch (uParam0->f_5.f_2[j /*5*/])
			{
				case -641080715:
					func_262(&(uParam0->f_5), num, 2, true, false);
					num = num + 1;
					break;
			
				case 1410847083:
					func_262(&(uParam0->f_5), num, 0, true, false);
					num = num + 1;
					break;
			}
		}
	}

	return;
}

void func_161(var uParam0, Hash hParam1) // Position - 0x56BF Hash - 0x7799F092 ^0x1A028C41
{
	int i;
	int j;

	for (j = 0; j < uParam0->f_105; j = j + 1)
	{
		for (i = 0; i < uParam0->f_5.f_2[j /*5*/].f_1; i = i + 1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(hParam1, uParam0->f_5.f_2[j /*5*/].f_2, i);
		
			switch (uParam0->f_5.f_2[j /*5*/])
			{
				case -641080715:
					func_262(&(uParam0->f_5), 2, 3, true, false);
					break;
			
				case -29447330:
					func_262(&(uParam0->f_5), 4, 3, true, false);
					break;
			
				case 276123595:
					func_262(&(uParam0->f_5), 3, 3, true, false);
					break;
			
				case 1410847083:
					func_262(&(uParam0->f_5), 0, 0, true, false);
					break;
			}
		}
	}

	uParam0->f_5 = hParam1;
	func_262(&(uParam0->f_5), 1, 1, true, false);
	return;
}

void func_162(var uParam0, Hash hParam1) // Position - 0x5787 Hash - 0xF209FECA ^0x7CCBC66E
{
	int i;
	int j;
	int num;

	num = 0;

	for (j = 0; j < uParam0->f_105; j = j + 1)
	{
		for (i = 0; i < uParam0->f_5.f_2[j /*5*/].f_1; i = i + 1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(hParam1, uParam0->f_5.f_2[j /*5*/].f_2, i);
		
			switch (uParam0->f_5.f_2[j /*5*/])
			{
				case -641080715:
					func_262(&(uParam0->f_5), num, 2, false, false);
					num = num + 1;
					break;
			
				case 1410847083:
					func_262(&(uParam0->f_5), num, 1, true, false);
					num = num + 1;
					break;
			
				case 1724675796:
					func_262(&(uParam0->f_5), num, 3, true, false);
					num = num + 1;
					break;
			}
		}
	}

	return;
}

void func_163(var uParam0, Hash hParam1) // Position - 0x5840 Hash - 0x7799F092 ^0x1A028C41
{
	int i;
	int j;

	for (j = 0; j < uParam0->f_105; j = j + 1)
	{
		for (i = 0; i < uParam0->f_5.f_2[j /*5*/].f_1; i = i + 1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(hParam1, uParam0->f_5.f_2[j /*5*/].f_2, i);
		
			switch (uParam0->f_5.f_2[j /*5*/])
			{
				case -641080715:
					func_262(&(uParam0->f_5), 3, 0, true, false);
					break;
			
				case -139224928:
					func_262(&(uParam0->f_5), 2, 0, true, false);
					break;
			
				case -29447330:
					func_262(&(uParam0->f_5), 5, 3, true, false);
					break;
			
				case 276123595:
					func_262(&(uParam0->f_5), 4, 3, true, false);
					break;
			
				case 852595847:
					func_262(&(uParam0->f_5), 7, 3, true, false);
					break;
			
				case 1175698187:
					func_262(&(uParam0->f_5), 6, 3, true, false);
					break;
			
				case 1410847083:
					func_262(&(uParam0->f_5), 0, 1, true, false);
					break;
			
				case 1488412754:
					func_262(&(uParam0->f_5), 8, 3, true, false);
					break;
			
				case 1724675796:
					func_262(&(uParam0->f_5), 1, 0, true, false);
					break;
			}
		}
	}

	return;
}

void func_164(var uParam0, Hash hParam1) // Position - 0x5960 Hash - 0x7799F092 ^0x1A028C41
{
	int i;
	int j;
	var unk;

	for (j = 0; j < uParam0->f_105; j = j + 1)
	{
		for (i = 0; i < uParam0->f_5.f_2[j /*5*/].f_1; i = i + 1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(hParam1, uParam0->f_5.f_2[j /*5*/].f_2, i);
		
			switch (uParam0->f_5.f_2[j /*5*/])
			{
				case -2016692014:
				case 1724675796:
					func_264(hParam1, &(uParam0->f_5), &unk, 1);
					break;
			
				case -1720361947:
				case -139224928:
					func_264(hParam1, &(uParam0->f_5), &unk, 1);
					break;
			
				case -641080715:
				case -29447330:
				case 276123595:
					func_264(hParam1, &(uParam0->f_5), &unk, 2);
					break;
			
				case 159464507:
				case 1410847083:
					func_264(hParam1, &(uParam0->f_5), &unk, 0);
					break;
			
				case 852595847:
				case 1175698187:
				case 1488412754:
					func_264(hParam1, &(uParam0->f_5), &unk, 2);
					break;
			}
		}
	}

	return;
}

Hash func_165(Hash hParam0, int iParam1) // Position - 0x5A5A Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_22(hParam0, 0))
		return 0;

	num = func_84(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_5(hParam0, 1399091007))
	{
		func_212(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_166(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x5AD4 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_175(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_167(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x5AFB Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_168(Hash hParam0) // Position - 0x5B36 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

Hash func_169(Hash hParam0) // Position - 0x5B51 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_22(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

int func_170(Hash hParam0) // Position - 0x5B7C Hash - 0xB8EC44B7 ^0x72487142
{
	switch (hParam0)
	{
		case joaat("clothing_blend_eyeshadow_none"):
			return -875805376;
	
		case joaat("clothing_blend_foundation_none"):
			return -2056583192;
	
		case joaat("clothing_blend_complexion_none"):
			return -1180698265;
	
		case joaat("clothing_blend_complexion_2_none"):
			return -487028314;
	
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 1285634184;
	
		case joaat("clothing_blend_lipstick_none"):
			return -768760704;
	
		case joaat("clothing_blend_spots_none"):
			return 1301555144;
	
		case -643819742:
			return -559080197;
	
		case joaat("clothing_blend_freckles_none"):
			return 241235545;
	
		case -28107610:
			return -2118203104;
	
		case joaat("clothing_blend_moles_none"):
			return 1827902148;
	
		case joaat("clothing_blend_scar_none"):
			return 1858448324;
	
		case 1687431937:
			return -1811760631;
	
		case joaat("clothing_blend_blusher_none"):
			return 1015239729;
	
		case joaat("clothing_blend_eyeliner_none"):
			return -340627321;
	
		default:
		
	}

	return 0;
}

int func_171(var uParam0, int iParam1) // Position - 0x5C5F Hash - 0x6AC2726E ^0xDB215040
{
	int i;

	for (i = 0; i < 22; i = i + 1)
	{
		if (uParam0->[i /*17*/].f_1 == -1)
			break;
	
		if (uParam0->[i /*17*/].f_16 == iParam1)
			return i;
	}

	return -1;
}

int func_172(Hash hParam0) // Position - 0x5C9C Hash - 0xD114ACC1 ^0x3428F85C
{
	Hash hash;

	hash = func_169(hParam0);

	switch (hash)
	{
		case -636562458:
			return -875805376;
	
		case 252325943:
			return -768760704;
	
		case 829857647:
			return -340627321;
	
		case 1115104855:
			return -2118203104;
	
		case 1216664798:
			return 1015239729;
	
		case 1341188928:
			return -2056583192;
	
		default:
		
	}

	return 0;
}

int func_173(Hash hParam0, BOOL bParam1) // Position - 0x5D09 Hash - 0xF271562B ^0x8AA3413F
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_265(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam1)
		func_267(&unk, func_266(false));

	if (!func_268(&unk, &num, &num2, false))
		return 0;

	func_14(num);
	return num2;
}

int func_174(Hash hParam0, Hash hParam1) // Position - 0x5D68 Hash - 0x865BD5D3 ^0xA4D690BD
{
	if (hParam1 == 0)
		return 0;

	if (func_65(func_23(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

int func_175(BOOL bParam0) // Position - 0x5D94 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_3() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<4> func_176(Hash hParam0, BOOL bParam1) // Position - 0x5DD5 Hash - 0x8EFC92E9 ^0xE8DA0FF0
{
	var unk;

	unk = { func_181(hParam0, bParam1, false) };
	return func_195(hParam0, unk, unk.f_4, bParam1);
}

BOOL func_177(Hash hParam0) // Position - 0x5DFA Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_84(hParam0) == joaat("WEAPON");
}

BOOL func_178(Hash hParam0) // Position - 0x5E0E Hash - 0xCD05DF70 ^0x86E370D6
{
	var unk;

	if (func_3() != -1)
		return false;

	if (func_91(hParam0, 1048576))
		return false;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return func_184(hParam0, &unk, 1, false, false, -1, false);

	return func_42(hParam0, 1);
}

void func_179(Hash hParam0, int iParam1, BOOL bParam2, var uParam3, Hash hParam4) // Position - 0x5E53 Hash - 0x4ACBF8C5 ^0x4A0F082E
{
	Hash weaponHash;

	if (func_84(hParam0) != joaat("WEAPON"))
		return;

	weaponHash = func_96(hParam0, false);

	if (!WEAPON::IS_WEAPON_VALID(weaponHash))
		return;

	if (bParam2 || !func_192(weaponHash))
	{
		if (bParam2 || !WEAPON::HAS_PED_GOT_WEAPON(Global_33, weaponHash, 0, false) && func_87(hParam0, false, false, false) == 0)
		{
			if (func_3() == -1)
				func_97(weaponHash);
		
			if (!*uParam3 && !(hParam4 == 1248274121))
			{
				func_127(hParam0, iParam1, false, 0, 0, false, false);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}

	return;
}

void func_180(Hash hParam0, var uParam1) // Position - 0x5EFD Hash - 0xE8F09939 ^0xD0796490
{
	if (func_5(hParam0, 58855631))
		func_230(hParam0, -915411861, uParam1, true);

	return;
}

struct<5> func_181(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5F22 Hash - 0xFD1D83A6 ^0x412BEE1D
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_269(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	num = func_84(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_272(hParam0, -1823706425))
			{
				unk = { func_195(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_272(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_195(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_195(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
			else if (func_272(hParam0, -1653629781))
			{
				unk = { func_195(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = joaat("SLOTID_NONE");
			unk = { func_271(bParam1) };
		
			switch (func_169(hParam0))
			{
				case joaat("CI_CATEGORY_EMOTE_TAUNTS"):
					unk.f_4 = -268116367;
					break;
			
				case -1070622585:
					unk.f_4 = -6796437;
					break;
			
				case -1057349201:
					unk.f_4 = 1473261684;
					break;
			
				case joaat("CI_CATEGORY_EMOTE_GREETS"):
					unk.f_4 = -241855024;
					break;
			}
			break;
	
		case joaat("CLOTHING"):
			unk = { func_195(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_266(bParam1) };
		
			if (bParam2 && func_270(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_193(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_193(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_194(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_273(unk, &unk28, bParam1, false, -1))
				{
					unk.f_4 = 0;
				}
				else
				{
					unk = { unk28.f_5 };
					unk.f_4 = joaat("SLOTID_CURRENCY");
				}
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -718417579))
			{
				unk.f_4 = -718417579;
			}
			else if (func_272(hParam0, -1653629781))
			{
				unk = { func_195(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
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

int func_182(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6296 Hash - 0xFE9D5798 ^0xDB9F4CF5
{
	if (!func_22(hParam0, 0))
	{
		if (func_65(func_23(hParam0), 2))
			return -1;
	
		return 0;
	}

	if (func_84(hParam0) == joaat("fee"))
		return -1;

	if (!bParam2 && func_174(hParam0, joaat("DEFAULT")) == 0)
		bParam2 = true;

	if (bParam2)
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_175(bParam3), hParam0);
}

int func_183(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x630A Hash - 0x118F0611 ^0x5AC648CA
{
	if (func_103(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_175(bParam1), hParam0, bParam3);
}

BOOL func_184(Hash hParam0, Any* panParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6) // Position - 0x633D Hash - 0x83727B4C ^0xA6F6F598
{
	var unk;
	var unk5;
	int num;
	int num2;

	func_274(&hParam0);

	if (!func_22(hParam0, 0) && !func_65(func_23(hParam0), 2))
		return 0;

	if (!bParam3 && func_174(hParam0, joaat("DEFAULT")) == 0)
		bParam3 = true;

	if (func_177(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		unk = { func_266(false) };
		unk5.f_9 = joaat("SLOTID_NONE");
	
		if (!func_193(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
			return 0;
		else if (func_194(hParam0, &unk5, joaat("SLOTID_WEAPON_0")))
			return 0;
	
		if (func_270(hParam0, true))
			if (!func_193(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
				return 0;
			else if (func_194(hParam0, &unk5, joaat("SLOTID_WEAPON_1")))
				return 0;
	
		return 1;
	}

	num = iParam5;

	if (iParam5 < 0)
		num = func_182(hParam0, panParam1, bParam3, bParam4);

	if (num < 0)
		return 0;
	else if (num == 0)
		return 1;

	num2 = func_275(hParam0, *panParam1, panParam1->f_4, bParam4, bParam3, bParam6);

	if (num2 + iParam2 > num)
		return 1;

	return 0;
}

BOOL func_185() // Position - 0x6471 Hash - 0xB8876D40 ^0xFAD3D5CE
{
	if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_33) && !func_276(Global_33, 1369124074) && !func_276(Global_33, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD) && !TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33) && !PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
		return true;

	return false;
}

BOOL func_186(int iParam0) // Position - 0x64D6 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_187(int iParam0) // Position - 0x64E9 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_38.f_3651[num2], offset);
}

void func_188(int iParam0) // Position - 0x6513 Hash - 0x48EBE6BD ^0x358C7E90
{
	int num;
	int num2;
	int offset;
	int address;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	address = Global_38.f_3651[num2];
	MISC::SET_BIT(&address, offset);
	Global_38.f_3651[num2] = address;
	return;
}

void func_189(int iParam0) // Position - 0x654D Hash - 0xB25DF9C2 ^0xF6204414
{
	switch (iParam0)
	{
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
	
		case 2:
			if (func_285() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
				func_286("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_108(677, false);
			break;
	
		case 3:
			if (func_285() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
				func_286("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_108(678, false);
			break;
	
		case 4:
			if (func_285() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
				func_286("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_108(679, false);
			break;
	
		case 5:
			if (func_285() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
				func_286("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_108(680, false);
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
			func_277(true);
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
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_278(1);
			break;
	
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_278(2);
			break;
	
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_278(3);
			break;
	
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
	
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
	
		case 22:
			PLAYER::_SET_MOUNT_PROMPT_DISABLED(false);
			break;
	
		case 23:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			break;
	
		case 24:
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
			func_279(true);
			break;
	
		case 33:
			func_280(true);
			break;
	
		case 34:
			func_281(true);
			break;
	
		case 35:
			break;
	
		case 36:
			func_282(false);
			break;
	
		case 37:
			func_283(false);
			break;
	
		case 38:
			func_284(false);
			break;
	
		case 39:
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
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1940199.f_41 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
	
		case 45:
			break;
	
		case 46:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
	
		case 47:
			if (func_3() == -1)
				if (!func_42(1013902307, 1))
					func_101(1013902307, 1, 752097756);
			break;
	
		case 48:
			if (func_3() == -1)
				if (!func_42(786809402, 1))
					func_101(786809402, 1, 752097756);
			break;
	
		case 49:
			if (func_3() == -1)
			{
				if (!func_42(1013902307, 1))
					func_101(1013902307, 1, 752097756);
			
				if (!func_42(142640135, 1))
					func_101(142640135, 1, 752097756);
			}
			break;
	
		case 50:
			if (func_3() == -1)
			{
				if (!func_42(786809402, 1))
					func_101(786809402, 1, 752097756);
			
				if (!func_42(-518019409, 1))
					func_101(-518019409, 1, 752097756);
			}
			break;
	
		case 51:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
	
		case 52:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
	
		case 53:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
	
		case 54:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("compendium"), true);
			break;
	
		case 55:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}

	return;
}

int func_190(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x6AC9 Hash - 0xC51EFF01 ^0xD252B7CC
{
	var unk;
	var unk13;
	var unk26;

	unk.f_1 = 10;
	unk13.f_1 = 11;
	return func_287(iParam0, &unk26, &unk13, &unk, iParam1, iParam2, iParam3, bParam4);
}

BOOL func_191(Hash hParam0) // Position - 0x6AF9 Hash - 0x8C6B1607 ^0xB465A08C
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_VISIBLE(weaponUnlock))
		return true;

	return false;
}

BOOL func_192(Hash hParam0) // Position - 0x6B21 Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

BOOL func_193(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x6B49 Hash - 0x28ECC25A ^0x28ECC25A
{
	return func_275(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_194(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x6B64 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_288(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_195(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x6B85 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_22(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_175(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_196(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x6BB6 Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;
	var unk15;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_289(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_273(*panParam1, &unk, bParam6, false, -1))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_98(bParam6))
	{
		num = -1;
	
		if (unk.f_13)
		{
		}
		else if (func_3() == 0)
		{
			unk15.f_9 = 1;
			unk15.f_11 = joaat("SLOTID_NONE");
			unk15.f_8 = hParam0;
			unk15 = { *panParam1 };
			unk15.f_4 = { *uParam2 };
			unk15.f_11 = uParam2->f_4;
			unk15.f_9 = iParam3;
			unk15.f_12 = hParam4;
			num = func_290(joaat("use"), &unk15, true);
		
			if (num != -1)
			{
				num2.f_7 = -142743235;
				num2.f_16 = -1;
				num2 = iParam5;
				num2.f_7 = hParam4;
				func_291(num, num2);
			}
		}
	
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_175(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

void func_197(Hash hParam0, int iParam1) // Position - 0x6CD4 Hash - 0xC6BCDC43 ^0xB7300BA8
{
	int ammo;
	int ammo2;
	int ammo3;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_33, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo3 = func_292(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_33, hParam0, ammo3);
	
		if (WEAPON::GET_MAX_AMMO(Global_33, &ammo2, hParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_33, hParam0) > ammo2)
			WEAPON::SET_PED_AMMO(Global_33, hParam0, ammo2);
	}

	return;
}

int func_198(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x6D46 Hash - 0x8DB88FC7 ^0xD6CAC1F
{
	int num;
	var guid2;
	var guid1;

	if (!func_22(hParam0, 0))
		return 0;

	num = func_174(hParam0, joaat("DEFAULT"));

	if (num == 0)
		return 0;

	guid2 = { func_181(hParam0, false, false) };

	if (func_184(hParam0, &guid2, iParam1, false, false, -1, false))
		return 0;

	if (!func_98(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_175(false), &guid1, &guid2, hParam0, guid2.f_4, iParam1, hParam2))
		return 0;

	return 1;
}

int func_199(Hash hParam0, Any* panParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x6DC2 Hash - 0x740B8A62 ^0x5C694353
{
	if (!func_22(hParam0, 0))
		return 0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_184(hParam0, panParam2, iParam3, bParam5, false, -1, false))
		return 0;

	if (!func_98(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_175(false), panParam1, panParam2, hParam0, panParam2->f_4, iParam3, hParam4))
		return 0;

	return 1;
}

void func_200(Hash hParam0) // Position - 0x6E2A Hash - 0x708BD33E ^0xB8AB550F
{
	char* propertyName;
	char* propertyName2;
	int value;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || Global_1940199.f_6)
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

	DECORATOR::DECOR_SET_INT(Global_33, propertyName, hParam0);
	value = func_293();
	func_294(&value, 0, 0, 0, 1, 0, 0, false);
	DECORATOR::DECOR_SET_INT(Global_33, propertyName2, value);
	return;
}

int func_201(Hash hParam0) // Position - 0x6EF9 Hash - 0x62B2BF56 ^0x18236051
{
	int num;
	int pedAmmoByType;

	if (func_295(hParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, joaat("ammo_arrow")) <= 0)
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
	
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
	
		if (pedAmmoByType >= num)
			num = 0;
		else if (pedAmmoByType > 0)
			num = num - pedAmmoByType;
	}

	return num;
}

BOOL func_202() // Position - 0x6F75 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

BOOL func_203(Hash hParam0) // Position - 0x6F7E Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

Hash func_204(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6F90 Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

int func_205(Hash hParam0) // Position - 0x6FB6 Hash - 0xBA04765D ^0x454D110B
{
	Hash weaponTypeFromAmmoType;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);

	if (WEAPON::IS_WEAPON_A_GUN(weaponTypeFromAmmoType))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_92(49))
			{
				if (!func_92(47))
					return 149;
			
				return 151;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_92(50))
			{
				if (!func_92(48))
					return 150;
			
				return 152;
			}
		}
	}

	return 153;
}

void func_206(int iParam0, var uParam1, var uParam2) // Position - 0x7022 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_207(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x703E Hash - 0x6E07CB9 ^0x6E07CB9
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_296(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_297(iParam0))
		return false;

	if (func_298(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_214(iParam0, 1) || func_299(32768))
		if (!func_214(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_300())
		return false;

	return true;
}

void func_208(int iParam0, int iParam1) // Position - 0x70E0 Hash - 0x978E21B ^0xA1438975
{
	var address;

	address = Global_1904402[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1904402[iParam0] = address;
	return;
}

int func_209(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x7104 Hash - 0x88B97E84 ^0x896726CB
{
	float num;
	int num2;
	int i;
	Hash hash;

	if (func_3() == 0)
		return 0;

	if (iParam2 != -1)
		return iParam2;

	num = 1f;

	if (bParam1 && func_42(joaat("provision_trinket_elk_antler"), 1))
		num = num + 0.1f;

	num2.f_1 = 10;
	num2.f_12 = 10;
	MISC::_LOOT_TABLES_GET_INFO(Global_33, true, true, hParam0, &num2, 0);

	for (i = 0; i < num2; i = i + 1)
	{
		if (num2.f_1[i] == joaat("currency_cash"))
		{
			return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
		else
		{
			hash = num2.f_1[i];
		
			if (func_22(hash, 0) && func_5(hash, -1921346699))
				return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
	}

	return 0;
}

void func_210(int iParam0, const char* sParam1, int iParam2, BOOL bParam3) // Position - 0x71D4 Hash - 0x6EA86F5A ^0xB17FF4AF
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_301(iParam0, 1000);
			return;
		}
	
		sParam1 = "FEED_MONEY_EARN";
	}

	func_219(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	return;
}

void func_211(int iParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0x7226 Hash - 0x7435A573 ^0x3E04C000
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
	
		if (func_302() || func_303())
			num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value) * 0.1f);
	
		iParam0 = iParam0 + num2;
		value = value + num2;
		func_219(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		iParam0 = iParam0 - num;
		num > 0;
		func_219(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", value), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	}
	else
	{
		value = iParam0;
	}

	if (value > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(value, 752097756);
		func_106(func_149(joaat("CAREER_CASH")), value);
	}

	return;
}

void func_212(Hash hParam0, var uParam1, var uParam2) // Position - 0x7301 Hash - 0x38E6C2DD ^0xA4FE6475
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

Hash func_213(Hash hParam0, BOOL bParam1) // Position - 0x750D Hash - 0xBBDA5425 ^0x264AEE9E
{
	switch (hParam0)
	{
		case joaat("kit_pouch_kit"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
	
		case joaat("kit_pouch_valuables"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
	
		case joaat("kit_pouch_provisions"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	
		case joaat("kit_pouch_remedies"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
	
		case 239629152:
			if (bParam1)
				return MISC::GET_HASH_KEY("DOCUMENT_BOUNTY_HUNTER_LICENSE_UPGRADE_01_SHORT");
			break;
	
		case joaat("kit_pouch_materials"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
	
		case joaat("kit_pouch_ingredients"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
	}

	return 0;
}

BOOL func_214(int iParam0, int iParam1) // Position - 0x75AF Hash - 0xECB143B0 ^0xE41A70C5
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

void func_215(var uParam0, int iParam1) // Position - 0x75C8 Hash - 0x624BD2B7 ^0x9DA59487
{
	BOOL flag;
	int i;

	if (iParam1 == 0)
		return;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->f_1[i] == iParam1)
			return;
	
		switch (iParam1)
		{
			case joaat("FISHING_RESULT_RUINED"):
			case joaat("FISHING_RESULT_NORMAL"):
			case joaat("FISHING_RESULT_LEGENDARY"):
				if (uParam0->f_1[i] == joaat("FISHING_RESULT_NORMAL") || uParam0->f_1[i] == joaat("FISHING_RESULT_RUINED") || uParam0->f_1[i] == joaat("FISHING_RESULT_LEGENDARY"))
					flag = true;
				break;
		
			case joaat("LOOTER_PED_IS_FEMALE"):
			case joaat("LOOTER_PED_IS_MALE"):
				if (uParam0->f_1[i] == joaat("LOOTER_PED_IS_MALE") || uParam0->f_1[i] == joaat("LOOTER_PED_IS_FEMALE"))
					flag = true;
				break;
		
			case joaat("LOOT_TYPE_NORMAL"):
			case joaat("LOOT_TYPE_SKINNING"):
				if (uParam0->f_1[i] == joaat("LOOT_TYPE_NORMAL") || uParam0->f_1[i] == joaat("LOOT_TYPE_SKINNING"))
					flag = true;
				break;
		}
	
		if (flag)
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

int func_216(int iParam0, var uParam1, Any anParam2, int iParam3, int iParam4) // Position - 0x76F4 Hash - 0x4F430DA4 ^0x658D22B6
{
	var unk;
	int num;

	if (iParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_304(uParam1);
	SECURE_STORE(&unk, iParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_3.f_1 = 10;
	num = iParam3;
	num.f_3 = { *uParam1 };
	num.f_2 = iParam4;
	func_305(anParam2, iParam0, num);
	return 1;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x7763 Hash - 0xA17D549C ^0xA854D64
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

Hash func_218(Hash hParam0) // Position - 0x783A Hash - 0x42CB27A1 ^0xAE7DBAA9
{
	Hash num;

	if (!func_135(hParam0, &num, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
		return joaat("_placeholder");

	return num;
}

int func_219(const char* sParam0, const char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x7864 Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_306(sParam0, sParam1, hParam2);
	return num2;
}

BOOL func_220() // Position - 0x78C7 Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1913444;
}

void func_221(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x78D4 Hash - 0x3B7A5BE9 ^0xEE7A100D
{
	int i;

	for (i = 0; i < Global_1913444.f_3; i = i + 1)
	{
		if (Global_1913444.f_4[i /*6*/] == hParam0 && Global_1913444.f_4[i /*6*/].f_2 == bParam2 && Global_1913444.f_4[i /*6*/].f_3 == bParam3 && Global_1913444.f_4[i /*6*/].f_4 == bParam4 && Global_1913444.f_4[i /*6*/].f_5 == iParam5)
		{
			Global_1913444.f_4[i /*6*/].f_1 = Global_1913444.f_4[i /*6*/].f_1 + iParam1;
			return;
		}
	}

	if (Global_1913444.f_3 < 19)
	{
		Global_1913444.f_4[Global_1913444.f_3 /*6*/] = hParam0;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_1 = iParam1;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_2 = bParam2;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_3 = bParam3;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_4 = bParam4;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_5 = iParam5;
		Global_1913444.f_3 = Global_1913444.f_3 + 1;
	}

	return;
}

var func_222(BOOL bParam0, var uParam1, var uParam2) // Position - 0x79F7 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_223(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x7A0E Hash - 0x92B705D3 ^0xB783F681
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

char* func_224(Hash hParam0) // Position - 0x7B01 Hash - 0xFBA883FB ^0xECD1802D
{
	if (func_5(hParam0, -1995062316))
		return "collectible_arrowheads";

	if (func_5(hParam0, 1239889275))
		return "collectible_liquor_bottles";

	if (func_5(hParam0, 143267379))
		return "collectible_coins";

	if (func_5(hParam0, -944041124))
		return "colectible_heirlooms";

	if (func_5(hParam0, 1562621600))
		return "collectible_jewelry";

	if (func_5(hParam0, -149719013))
		return "collectible_bird_eggs";

	if (func_5(hParam0, 1940829793))
		return "collectible_tarot_cards";

	if (func_5(hParam0, 781094263))
		return "collectible_flowers";

	if (func_5(hParam0, -352095726) || func_5(hParam0, -2014783736) || func_5(hParam0, -545064757) || func_5(hParam0, 679186220))
		return "collectible_found_fossil";

	return "";
}

BOOL func_225(Hash hParam0) // Position - 0x7BFC Hash - 0x12CDDB68 ^0xF31C74A7
{
	if (func_5(hParam0, -189374246))
		if (func_307(hParam0, -1305775593) || func_307(hParam0, 1384151091) || func_307(hParam0, 2075388272) || func_307(hParam0, -1738780413))
			return true;

	if (func_5(hParam0, -753854379) || func_5(hParam0, 173360570))
		return true;

	return false;
}

BOOL func_226(Hash hParam0) // Position - 0x7C7B Hash - 0x339D45CE ^0x339D45CE
{
	switch (hParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
	
		default:
		
	}

	return true;
}

Hash func_227(Hash hParam0) // Position - 0x7CA2 Hash - 0x9C7FC6B8 ^0x60951C4B
{
	var outData;
	int i;

	if (!func_22(hParam0, 0))
		return 0;

	outData.f_2 = 5;
	outData.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &outData))
	{
		for (i = 0; i < 8; i = i + 1)
		{
			if (outData.f_18[i /*2*/].f_1 == 14460646)
				if (outData.f_18[i /*2*/] != 0)
					return outData.f_18[i /*2*/];
		}
	}

	return 0;
}

Hash func_228(Hash hParam0) // Position - 0x7D10 Hash - 0xD046EEF0 ^0xB8E66C21
{
	int num;
	var unk;
	int collectionId;
	int num2;
	int i;
	Hash outKey;

	num = func_308(hParam0);

	if (num == 0)
		return 0;

	unk = { func_309(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0, 0, -1, num, 0) };

	if (func_310(unk, &collectionId, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(collectionId, i, &outKey) && func_311(outKey))
			{
				func_312(collectionId);
				return outKey;
			}
		}
	
		func_312(collectionId);
	}

	return 0;
}

int func_229(Hash hParam0, Hash hParam1) // Position - 0x7D95 Hash - 0x34B85114 ^0x6986CE99
{
	if (hParam0 == 0)
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, -949239683))
		return 1;

	return 0;
}

int func_230(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0x7DC6 Hash - 0x6E96D276 ^0x9A3B0071
{
	var outData;

	if (!func_22(hParam0, 0) && !func_65(func_23(hParam0), 2))
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

const char* func_231(const char* sParam0, int iParam1) // Position - 0x7E25 Hash - 0x9E99F03 ^0x534D981C
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

 func_232(Hash hParam0, int iParam1) // Position - 0x7E3F Hash - 0x7C967237 ^0x7C967237
{
	 num;

	num = func_313(hParam0, iParam1);

	if (num == 0)
		return 0;

	return num;
}

BOOL func_233(Hash hParam0, char* sParam1) // Position - 0x7E5D Hash - 0xE779657E ^0x44FD4FF7
{
	int lengthOfLiteralString;
	var unk;

	if (!func_22(hParam0, 0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(sParam1, func_314(hParam0), 128);
	lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);

	if (!func_315(hParam0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(&unk, func_316(hParam0), 128);

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		return false;

	TEXT_LABEL_APPEND_STRING(&unk, " - ", 128);
	lengthOfLiteralString = lengthOfLiteralString + HUD::GET_LENGTH_OF_LITERAL_STRING(&unk);
	TEXT_LABEL_APPEND_STRING(&unk, sParam1, 128);

	if (lengthOfLiteralString >= 127)
		return false;

	*sParam1 = { unk };
	return true;
}

const char* func_234(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x7EDA Hash - 0xE80420B9 ^0x2740E778
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

const char* func_235(const char* sParam0, int iParam1) // Position - 0x7EEE Hash - 0xB0CFF0C3 ^0xE33E14BF
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);

	return func_231(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

BOOL func_236(var uParam0, int iParam1) // Position - 0x7F24 Hash - 0xD248A057 ^0xD5D6A9F9
{
	int num;

	if (func_317(uParam0->f_9))
		return false;

	if (!func_318(*uParam0))
		return false;

	if (!func_319(uParam0->f_4, iParam1, false))
		return false;

	if (!func_320(uParam0->f_4))
		return false;

	if (func_321(false))
	{
		if (!func_22(uParam0->f_4, 0))
			return false;
	
		if (func_122())
		{
			num = func_183(uParam0->f_4, true, false, false);
		
			if (num < func_275(uParam0->f_4, uParam0->f_5, uParam0->f_9, false, false, false))
				uParam0->f_11 = num;
		}
	
		if (uParam0->f_11 <= 0)
			return false;
	}

	if (Global_1940252.f_11588 == 0 && !func_139(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940252.f_11613, Global_1940252.f_11596), "label")) && !func_322())
		func_323(uParam0->f_4);
	else
		func_324(0);

	return true;
}

BOOL func_237(Hash hParam0, Hash hParam1) // Position - 0x8014 Hash - 0x9D305ADC ^0xED1BD779
{
	switch (func_4(hParam1, -949239683))
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
			if (Global_1940252.f_11587 != 1061777683 || func_4(hParam0, 1224357681) == func_4(hParam1, 1224357681))
				return true;
			break;
	}

	return false;
}

void func_238(var uParam0) // Position - 0x80B6 Hash - 0xA0478F20 ^0x35094FCE
{
	var outData;

	if (func_69(uParam0->f_6))
		if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(*uParam0, &outData))
			uParam0->f_7.f_2 = outData.f_4;

	return;
}

int func_239(Hash hParam0, BOOL bParam1) // Position - 0x80E2 Hash - 0x84086197 ^0x82A85664
{
	int num;

	if (!func_65(hParam0, 2))
		return 0;

	num = 0;

	if (num != 0 && bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
		return 0;

	return num;
}

BOOL func_240(int* piParam0, BOOL bParam1) // Position - 0x811B Hash - 0x7D3BA1EA ^0x8B940399
{
	if (!bParam1)
		if (func_325(piParam0))
			return false;

	if (func_326(&(piParam0->f_6)))
		if (NETWORK::_0xE10F2D7715ABABEC(&(piParam0->f_6)))
			return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(2113164098))
		return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("Sell")))
		return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("UPDATE")))
		return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("use")))
		return false;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return false;

	if (NETSHOPPING::CASHINVENTORY_IS_CONNECTION_FAULTED())
		return false;

	if (NETSHOPPING::_CASHINVENTORY_INIT_SESSION_IS_FAULTED())
		return false;

	return true;
}

Hash func_241(Hash hParam0, int iParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0x81B7 Hash - 0x6E5FA253 ^0x344F4256
{
	int num;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (!func_327(hParam0))
		return 0;

	flag = func_328(iParam3, 2);
	flag2 = func_329(hParam0, -570078785, flag);
	flag3 = func_329(hParam0, -915411861, flag);

	if (func_329(hParam0, 997808187, flag))
		iParam1 = 997808187;
	else if (bParam4 && func_330(hParam0, &num) || func_331(hParam0, &num))
		iParam1 = num;
	else if (flag2 && !flag3)
		iParam1 = -570078785;
	else if (flag2 && flag3)
		if (func_332())
			iParam1 = -570078785;
		else
			iParam1 = -915411861;
	else if (flag3)
		iParam1 = -915411861;
	else if (func_333(15) && func_329(hParam0, 369710026, flag))
		iParam1 = 369710026;

	if (iParam1 == 0 && bParam2)
		return -915411861;

	return iParam1;
}

BOOL func_242(Hash hParam0, Hash hParam1, int iParam2) // Position - 0x82BC Hash - 0x67DCAB3C ^0x67DCAB3C
{
	if (hParam0 == 0)
		return false;

	if (!func_329(hParam0, hParam1, false))
		return false;

	if (func_328(iParam2, 2))
		if (func_334(hParam0, hParam1))
			return false;

	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(hParam0))
		return false;

	if (func_328(iParam2, 8))
		return func_335(hParam0, hParam1);

	return true;
}

BOOL func_243(int* piParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, Hash hParam19, BOOL bParam20) // Position - 0x831C Hash - 0xCC3F3D79 ^0x430250A2
{
	if (hParam19 != 541670136)
		return false;

	if (!func_336(uParam1))
		return false;

	if (!func_337(piParam0, hParam19))
		return false;

	if (func_338(*piParam0, hParam19, &uParam1))
	{
	}
	else
	{
		return false;
	}

	return func_339(piParam0, bParam20);
}

void func_244() // Position - 0x8370 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

int func_245() // Position - 0x8378 Hash - 0x65D86EC2 ^0xEDE20818
{
	Global_1292143.f_459.f_1552 = Global_1292143.f_459.f_1552 + 1;

	if (Global_1292143.f_459.f_1552 >= 2147483646)
		Global_1292143.f_459.f_1552 = 0;

	return Global_1292143.f_459.f_1552;
}

void func_246(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, int iParam30) // Position - 0x83BD Hash - 0x559491F8 ^0xD7B41EE2
{
	switch (iParam30)
	{
		case 0:
			Global_1292143.f_459.f_44[func_340() /*30*/] = { uParam0 };
			func_341((func_340() + 1) % 40);
			Global_1292143.f_459.f_1546 = Global_1292143.f_459.f_1546 + 1;
			break;
	
		case 1:
			Global_1292143.f_459.f_1245[func_342() /*30*/] = { uParam0 };
			func_343((func_342() + 1) % 10);
			Global_1292143.f_459.f_1547 = Global_1292143.f_459.f_1547 + 1;
			break;
	}

	return;
}

BOOL func_247(int iParam0, int iParam1) // Position - 0x8454 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_248(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x8463 Hash - 0xB13E2226 ^0x3E0E04BA
{
	if (Global_1572887.f_14 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1900460.f_67;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1900460.f_68;
	
		if (func_344())
			return true;
	
		if (Global_1072759.f_3 && !Global_1572887.f_10)
			if (Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_481 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
				return true;
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
			return Global_1900460.f_67;
		else
			return Global_1900460.f_68;
	}

	if (iParam0 == 0 && func_346(func_345(0)))
		return true;

	if (Global_1940199 && 81919 & -1 - iParam0 != false)
		return true;

	if (!bParam1)
		if (MISC::GET_GAME_TIMER() - 5000 < Global_1900595)
			return true;

	switch (func_347(func_345(0)))
	{
		case -1:
			return false;
	
		case 2:
			return iParam0 & 1 == 0;
	
		case 3:
			return iParam0 & 16 == 0;
	
		case 4:
			return iParam0 & 32 == 0;
	
		case 5:
			return iParam0 & 2 == 0;
	
		case 7:
			return iParam0 & 1024 == 0;
	
		default:
		
	}

	return false;
}

BOOL func_249() // Position - 0x85D9 Hash - 0x4192543B ^0x401DE8CD
{
	if (!(UNLOCK::UNLOCK_IS_VISIBLE(-474252899) || UNLOCK::UNLOCK_IS_VISIBLE(294305054) || UNLOCK::UNLOCK_IS_VISIBLE(-296143697)))
		return false;
	else if (!UNLOCK::UNLOCK_IS_VISIBLE(-1820411463))
		return false;

	return true;
}

void func_250(var uParam0, int iParam1) // Position - 0x8625 Hash - 0x90476B4A ^0xC4A88070
{
	int num;
	var unk;
	int i;
	int j;
	Vector3 vector;
	float distanceBetweenCoords;
	Hash hash;
	int num2;
	int num3;
	var unk13;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_8 = -1;
	unk = { func_309(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, -1837820255, 0, 0, -1, iParam1, 0) };

	if (func_310(unk, &num2, &num3, 0))
	{
		unk13 = { func_151() };
	
		if (iParam1 != 0)
			func_348(uParam0, num2, num3);
	
		for (i = 0; i < num3; i = i + 1)
		{
			hash = func_349(i, num2);
		
			if (func_5(hash, -352095726))
			{
				if (!func_249() || !func_42(joaat("weapon_kit_metal_detector"), 1))
				{
				}
				else if (func_350(hash))
				{
					if (func_5(hash, 781094263))
					{
						if (func_5(hash, 1307628809))
						{
							for (j = 0; j <= 8; j = j + 1)
							{
								num = func_351(unk13.f_7, hash, j);
								vector = { func_352(num, hash) };
								distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vector, true);
								func_353(uParam0, hash, vector, distanceBetweenCoords);
							}
						}
						else if (func_5(hash, 683680997))
						{
							for (j = 0; j <= 5; j = j + 1)
							{
								num = func_351(unk13.f_7, hash, j);
								vector = { func_352(num, hash) };
								distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vector, true);
								func_353(uParam0, hash, vector, distanceBetweenCoords);
							}
						}
						else if (func_5(hash, -283942357))
						{
							if (hash != joaat("provision_wldflwr_agarita") && hash != joaat("provision_wldflwr_blood_flower"))
							{
								for (j = 0; j <= 2; j = j + 1)
								{
									num = func_351(unk13.f_7, hash, j);
									vector = { func_352(num, hash) };
									distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vector, true);
									func_353(uParam0, hash, vector, distanceBetweenCoords);
								}
							}
						}
					}
					else if (func_5(hash, -149719013) && func_5(hash, -283942357) && hash != joaat("provision_vulture_egg"))
					{
						for (j = 0; j <= 1; j = j + 1)
						{
							num = func_354(unk13.f_6, j);
							vector = { func_352(num, hash) };
							distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vector, true);
							func_353(uParam0, hash, vector, distanceBetweenCoords);
						}
					}
					else
					{
						num = func_355(&unk13, hash);
						vector = { func_352(num, hash) };
						distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vector, true);
						func_353(uParam0, hash, vector, distanceBetweenCoords);
					}
				}
			}
		
			if (func_350(hash))
			{
				if (func_5(hash, 781094263))
				{
					if (func_5(hash, 1307628809))
					{
						j = 0;
					
						if (j <= 8)
						{
							num = func_351(unk13.f_7, hash, j);
							vector = { func_352(num, hash) };
							distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vector, true);
							func_353(uParam0, hash, vector, distanceBetweenCoords);
							j = j + 1;
						}
					}
					else if (func_5(hash, 683680997))
					{
						j = 0;
					
						if (j <= 5)
						{
							num = func_351(unk13.f_7, hash, j);
							vector = { func_352(num, hash) };
							distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vector, true);
							func_353(uParam0, hash, vector, distanceBetweenCoords);
							j = j + 1;
						}
					}
					else if (func_5(hash, -283942357))
					{
						if (hash != joaat("provision_wldflwr_agarita") && hash != joaat("provision_wldflwr_blood_flower"))
						{
							j = 0;
						
							if (j <= 2)
							{
								num = func_351(unk13.f_7, hash, j);
								vector = { func_352(num, hash) };
								distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vector, true);
								func_353(uParam0, hash, vector, distanceBetweenCoords);
								j = j + 1;
							}
						}
					}
				}
				else if (func_5(hash, -149719013) && func_5(hash, -283942357) && hash != joaat("provision_vulture_egg"))
				{
					j = 0;
				
					if (j <= 1)
					{
						num = func_354(unk13.f_6, j);
						vector = { func_352(num, hash) };
						distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vector, true);
						func_353(uParam0, hash, vector, distanceBetweenCoords);
						j = j + 1;
					}
				}
				else
				{
					num = func_355(&unk13, hash);
					vector = { func_352(num, hash) };
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vector, true);
					func_353(uParam0, hash, vector, distanceBetweenCoords);
				}
			}
		}
	
		func_312(num2);
	}

	return;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x88E9 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_252() // Position - 0x8913 Hash - 0xFF728524 ^0x2F89AEA2
{
	int year;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;

	CLOCK::GET_POSIX_TIME(&year, &(year.f_1), &(year.f_2), &(year.f_3), &(year.f_4), &(year.f_5));
	num = year.f_2;
	num2 = year.f_1;
	num3 = year;

	if (num2 <= 2)
	{
		num2 = num2 + 12;
		num3 = num3 - 1;
	}

	num4 = num3 % 100;
	num5 = num3 / 100;
	num6 = num + ((13 * (num2 + 1)) / 5) + num4 + (num4 / 4) + (num5 / 4) + (5 * num5);
	num7 = (num6 + 6) % 7;
	return num7;
}

void func_253(Any* panParam0, var uParam1) // Position - 0x898F Hash - 0x86BFAF7B ^0x229579C0
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return;

	*panParam0 = 33;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 6, 28, &uParam1);
	func_356(*panParam0);
	return;
}

BOOL func_254(int iParam0, Hash hParam1) // Position - 0x89CE Hash - 0x516C6848 ^0x6761C278
{
	int i;

	for (i = 0; i <= 1; i = i + 1)
	{
		if (Global_1220826.f_48[iParam0 /*21*/].f_18[i] != 0 && Global_1220826.f_48[iParam0 /*21*/].f_18[i] == hParam1)
			return true;
	}

	return false;
}

BOOL func_255(Any* panParam0, int iParam1) // Position - 0x8A1A Hash - 0x463D23F3 ^0xDE78773
{
	*panParam0 = Global_1220826.f_1201;
	panParam0->f_2 = 1335336942;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_256(Any* panParam0) // Position - 0x8A45 Hash - 0x424BB8C9 ^0x958D7B30
{
	panParam0->f_2 = 1037679264;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_257(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, Vector3* pvParam6, BOOL bParam7) // Position - 0x8A60 Hash - 0x75EEBFEF ^0x20737992
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam6, &uParam0))
		return 1;
	else
		bParam7;

	return 0;
}

void func_258(int iParam0, int iParam1) // Position - 0x8A86 Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 - Global_1951910[iParam0 /*23*/].f_1 && iParam1;
	return;
}

void func_259(int iParam0, BOOL bParam1) // Position - 0x8AB9 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		if (Global_1951910[iParam0 /*23*/].f_5 == 5 && !func_157(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_260(int iParam0, BOOL bParam1) // Position - 0x8B11 Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_261(int iParam0, int iParam1) // Position - 0x8B3A Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 || iParam1;
	return;
}

void func_262(var uParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x8B62 Hash - 0x3E9A5D7C ^0xBE4769C1
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

BOOL func_263(int iParam0) // Position - 0x8BFB Hash - 0x89A0391F ^0x89A0391F
{
	if (iParam0 % 2 == 0)
		return true;

	return false;
}

void func_264(Hash hParam0, var uParam1, var uParam2, Hash hParam3) // Position - 0x8C10 Hash - 0x4011D718 ^0x94F93FCB
{
	if (*uParam2 < 7)
	{
		uParam1->f_64[*uParam2] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_63, func_357(hParam0, *uParam2));
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_64[*uParam2], "text", *uParam1);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_64[*uParam2], "style", hParam3);
		*uParam2 = *uParam2 + 1;
	}

	return;
}

struct<18> func_265(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x8C6D Hash - 0x90CCF0F4 ^0xA5F3D799
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

	if (iParam6 != 0)
		hash.f_8 = iParam6;

	return hash;
}

struct<4> func_266(BOOL bParam0) // Position - 0x8D4B Hash - 0xC271E2E0 ^0xF6B4968C
{
	int num;

	num = func_175(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_195(923904168, func_269(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_195(923904168, func_269(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_195(923904168, func_269(bParam0), -740156546, false);
}

void func_267(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x8DEC Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_268(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x8E07 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_175(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

struct<4> func_269(BOOL bParam0) // Position - 0x8E2C Hash - 0xCD4C5B4C ^0x5BC3600A
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_175(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_195(joaat("character"), func_358(), joaat("SLOTID_NONE"), bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_195(joaat("character"), func_358(), joaat("SLOTID_NONE"), false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_195(joaat("character"), func_358(), joaat("SLOTID_NONE"), bParam0);
}

BOOL func_270(Hash hParam0, BOOL bParam1) // Position - 0x8ECC Hash - 0x5D0FB4E0 ^0x17177DE5
{
	if (func_169(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_359();
		else
			return 1;

	return 0;
}

struct<4> func_271(BOOL bParam0) // Position - 0x8F03 Hash - 0x9E4BFC8E ^0xE92FDA8B
{
	int num;

	num = func_175(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_195(271701509, func_269(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_195(271701509, func_269(bParam0), 12999093, false);
}

BOOL func_272(Hash hParam0, Hash hParam1) // Position - 0x8F6D Hash - 0x3516CCA0 ^0x327E5212
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_169(hParam0);

	if (category == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (func_360(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_273(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x8FDA Hash - 0x113CD144 ^0x113CD144
{
	return func_361(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

int func_274(var uParam0) // Position - 0x8FF0 Hash - 0x8D760BCC ^0xB90089A3
{
	if (!func_22(*uParam0, 0))
		return 0;

	if (!func_362(*uParam0))
		return 0;

	switch (*uParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = joaat("consumable_cigarette_box");
			break;
	
		case joaat("upgrade_fsh_bait_cricket_tin"):
			*uParam0 = joaat("upgrade_fsh_bait_cricket");
			break;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
			*uParam0 = joaat("consumable_cocaine_chewing_gum");
			break;
	
		case joaat("consumable_chewing_tobacco_used"):
			*uParam0 = joaat("consumable_chewing_tobacco");
			break;
	
		case joaat("upgrade_fsh_bait_worm_can"):
			*uParam0 = joaat("upgrade_fsh_bait_worm");
			break;
	
		default:
			return 0;
	}

	return 1;
}

int func_275(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x907A Hash - 0xC754D793 ^0x26C4E67C
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_22(hParam0, 0))
		return 0;

	if (!bParam7 && func_174(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_195(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_175(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_175(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_276(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x90F9 Hash - 0x37FB14EB ^0x7E496A4A
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

void func_277(BOOL bParam0) // Position - 0x9122 Hash - 0xB584A39F ^0xFC4CA802
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
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

void func_278(int iParam0) // Position - 0x9160 Hash - 0x2EDDC601 ^0x8923AAAC
{
	Any itemContextByIndex;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1956875.f_5.f_7))
		return;

	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1956875.f_5.f_7) > iParam0)
	{
		itemContextByIndex = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1956875.f_5.f_7, iParam0);
	
		if (itemContextByIndex == Global_1956875.f_5.f_14[iParam0 /*102*/])
			return;
	}

	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1956875.f_5.f_7, iParam0, "pause_info_panel_list", Global_1956875.f_5.f_14[iParam0 /*102*/]);
	return;
}

void func_279(BOOL bParam0) // Position - 0x91CE Hash - 0x731EA76E ^0xD49C9ADF
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33);
	PED::SET_PED_CONFIG_FLAG(Global_33, 440, !bParam0);
	return;
}

void func_280(BOOL bParam0) // Position - 0x9208 Hash - 0x731EA76E ^0xCC0310C8
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33);
	PED::SET_PED_CONFIG_FLAG(Global_33, 439, !bParam0);
	return;
}

void func_281(BOOL bParam0) // Position - 0x9242 Hash - 0x731EA76E ^0xC0281252
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33);
	PED::SET_PED_CONFIG_FLAG(Global_33, 438, !bParam0);
	return;
}

void func_282(BOOL bParam0) // Position - 0x927C Hash - 0x6ED794F8 ^0x98C24F9E
{
	Hash hash;

	hash = 398076311;

	if (bParam0)
		HUD::_ENABLE_HUD_CONTEXT(hash);
	else
		HUD::_DISABLE_HUD_CONTEXT(hash);

	return;
}

void func_283(BOOL bParam0) // Position - 0x929F Hash - 0x15EA8A2D ^0x6EE74130
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

void func_284(BOOL bParam0) // Position - 0x92E1 Hash - 0xBAD014C9 ^0x3FDE3E28
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

BOOL func_285() // Position - 0x9323 Hash - 0x65674CA9 ^0xC0D8F466
{
	return true;
}

int func_286(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x9342 Hash - 0xB88D7AA5 ^0x36259347
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
	num2.f_4 = iParam2;
	num2.f_5 = iParam3;
	num2.f_7 = 1;
	num3 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&num, &num2, bParam9, bParam10);
	return num3;
}

int func_287(int iParam0, Any anParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x93A8 Hash - 0x72C1A759 ^0xD848AFAA
{
	BOOL flag;
	int num;
	var unk;
	var unk2;

	if (iParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(iParam0))
		return 1;

	if (bParam7)
	{
		flag = GANG::NETWORK_IS_GANG_ID_VALID(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) && GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
		bParam7 = flag;
	}

	POSSE::_0xC08AFF658B2E51DA(&num);

	if (num != 0)
		func_363(iParam2, -372840566);

	SECURE_STORE(&unk, iParam0);

	if (!bParam7)
		if (!NETWORK::_0x64A36BA85CE01A81(&unk, &(uParam3->f_1), &(iParam2->f_1), anParam1))
			return 0;
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&unk, &(iParam2->f_1), anParam1))
		return 0;

	unk2.f_1 = 11;
	unk2.f_16 = 255;
	unk2.f_13 = iParam4;
	unk2.f_16 = iParam5;
	unk2.f_14 = iParam6;
	unk2 = { *iParam2 };
	func_364(anParam1, iParam0, unk2);
	return 1;
}

BOOL func_288(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x9489 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_175(false);
	*panParam1 = { func_195(hParam0, func_266(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_289(Hash hParam0) // Position - 0x94CE Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

int func_290(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x94E4 Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_365(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_367(func_366(num, hParam0, panParam1), num, panParam1);
	else
		return func_368(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17), num, panParam1);

	return -1;
}

void func_291(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0x954E Hash - 0x4EE39F09 ^0x4C62B7DF
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
		{
			if (Global_1292143.f_20.f_1[i /*21*/].f_1 == 1 || Global_1292143.f_20.f_1[i /*21*/].f_1 == 5)
				Global_1292143.f_20.f_1[i /*21*/].f_4 = { uParam1 };
		
			return;
		}
	}

	return;
}

int func_292(int iParam0, int iParam1) // Position - 0x95CC Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

int func_293() // Position - 0x95E2 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1902569;
}

void func_294(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x95EE Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_369(*uParam0);
	i = func_370(*uParam0);
	num2 = func_371(*uParam0);
	j = func_372(*uParam0);
	k = func_373(*uParam0);
	l = func_374(*uParam0);

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

	for (m = func_375(i, num); num2 > m; m = func_375(i, num))
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

	func_376(uParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_295(Hash hParam0) // Position - 0x9776 Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

BOOL func_296(int iParam0, int iParam1) // Position - 0x9784 Hash - 0x5A86BEFA ^0xB951E1EF
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_297(int iParam0) // Position - 0x979C Hash - 0x773BFB67 ^0x773BFB67
{
	if (func_214(iParam0, 4))
		return false;

	return true;
}

BOOL func_298(int iParam0) // Position - 0x97B3 Hash - 0x7F4C96B ^0x650690F6
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	if (Global_1904402.f_33[iParam0 /*9*/].f_2 & 98304 == 0)
		return false;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	for (i = 0; i < Global_38.f_3542; i = i + 1)
	{
		if (Global_38.f_3542[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (Global_1904402.f_33[iParam0 /*9*/].f_2 & 131072 != 0)
				num2 = 2;
		
			if (Global_1904402.f_33[iParam0 /*9*/].f_2 & 524288 != 0)
				num2 = 5;
		
			num = cloudTimeAsInt - Global_38.f_3542[i /*3*/];
		
			if (Global_38.f_3542[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && Global_1904402.f_33[iParam0 /*9*/].f_2 & 32768 != 0)
				return true;
		}
	}

	return false;
}

BOOL func_299(int iParam0) // Position - 0x987F Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_300() // Position - 0x9892 Hash - 0xD9A24882 ^0xD9A24882
{
	if (!func_55())
		return false;

	return Global_1904402.f_8873;
}

void func_301(int iParam0, int iParam1) // Position - 0x98AD Hash - 0x74C9983D ^0x6478FDCA
{
	if (iParam0 <= 0)
		return;

	if (func_377())
	{
		Global_1913444.f_125 = MISC::GET_GAME_TIMER();
		Global_1913444.f_126 = iParam1;
	}

	Global_1913444.f_127 = Global_1913444.f_127 + iParam0;
	return;
}

BOOL func_302() // Position - 0x98E9 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_303() // Position - 0x98FA Hash - 0x11DC3931 ^0xA685465E
{
	return DLC::IS_DLC_PRESENT(joaat("dlc_ultimateedition"));
}

void func_304(var uParam0) // Position - 0x990B Hash - 0x333BC7D4 ^0xCB2892E1
{
	func_215(uParam0, joaat("MULTIPLAYER_GAME"));

	if (func_378() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_215(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_215(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_305(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) // Position - 0x9943 Hash - 0x15598973 ^0x15598973
{
	int i;
	var unk;

	if (!func_326(anParam0))
		return;

	if (Global_1292143.f_2539 < 20)
	{
		Global_1292143.f_2539 = Global_1292143.f_2539 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1292143.f_2539.f_1[i /*22*/] = { Global_1292143.f_2539.f_1[i + 1 /*22*/] };
		}
	}

	unk.f_7.f_3.f_1 = 10;
	unk = { *anParam0 };
	unk.f_4 = iParam1;
	unk.f_6 = 1;
	unk.f_7 = { uParam2 };
	Global_1292143.f_2539.f_1[Global_1292143.f_2539 - 1 /*22*/] = { unk };
	return;
}

void func_306(const char* sParam0, const char* sParam1, Hash hParam2) // Position - 0x99F9 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_307(Hash hParam0, Hash hParam1) // Position - 0x9A2A Hash - 0xCB56AA2F ^0x760BB648
{
	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1224357681))
		return true;

	return false;
}

int func_308(Hash hParam0) // Position - 0x9A51 Hash - 0xE1F3DDAE ^0xC8D3B326
{
	var outData;
	int num;

	if (!func_22(hParam0, 0))
		return 0;

	outData = 5;
	num = ITEMDATABASE::_0x8870895BA5ED9385(hParam0, -442898163, &outData);

	if (num > 0)
		return outData[0];

	return 0;
}

struct<10> func_309(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x9A8B Hash - 0x440EE211 ^0xAE2816F9
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

BOOL func_310(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int* piParam11, int iParam12) // Position - 0x9B5F Hash - 0xB0933807 ^0x5CBA43FF
{
	*uParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, piParam11, iParam12);

	if (*uParam10 >= 0)
		return true;

	return false;
}

BOOL func_311(Hash hParam0) // Position - 0x9B80 Hash - 0x5E6E1858 ^0xE905275C
{
	!func_22(hParam0, 0);

	if (func_5(hParam0, -393037696))
		return true;

	return false;
}

int func_312(int iParam0) // Position - 0x9BA6 Hash - 0x6B3C6310 ^0x9A4DF434
{
	if (iParam0 < 0)
		return 0;

	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_313(Hash hParam0, int iParam1) // Position - 0x9BC7 Hash - 0x193BF536 ^0xD3271214
{
	var outData;
	int num;
	int outIndex;
	int i;

	outData = 20;
	num = 0;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(hParam0, &outData, &outIndex, 20))
	{
		for (i = 0; i < outIndex; i = i + 1)
		{
			if (outData[i /*2*/].f_1 == iParam1)
			{
				num = outData[i /*2*/];
				return num;
			}
		}
	}

	return 0;
}

char* func_314(Hash hParam0) // Position - 0x9C15 Hash - 0xBD440801 ^0x8290F22B
{
	Hash labelHash;

	if (!func_22(hParam0, 0))
		return "";

	labelHash = func_117(hParam0, false);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

BOOL func_315(Hash hParam0) // Position - 0x9C49 Hash - 0xB0090776 ^0x189C4477
{
	if (func_169(hParam0) == -126813555 || func_169(hParam0) == 1946043663)
		return true;

	return false;
}

char* func_316(Hash hParam0) // Position - 0x9C77 Hash - 0xA25BDA6C ^0xC886A96D
{
	Hash labelHash;

	if (!func_22(hParam0, 0))
		return "";

	labelHash = func_227(hParam0);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

BOOL func_317(int iParam0) // Position - 0x9CAA Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case -1649851713:
		case -997505963:
		case 1005272:
		case 348853959:
		case 359221401:
		case 1045621973:
		case 1463321587:
		case 1583044470:
		case 1651573695:
			return true;
	}

	return false;
}

BOOL func_318(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) // Position - 0x9CF8 Hash - 0xE6946885 ^0xF1EEB43E
{
	var unk;
	int num;

	if (uParam0.f_9 != joaat("SLOTID_SATCHEL") && uParam0.f_9 != -140655024 && uParam0.f_9 != -1162387149 && uParam0.f_9 != 1784584921 && uParam0.f_9 != -511891179)
	{
		unk.f_9 = joaat("SLOTID_NONE");
	
		if (!func_273(uParam0.f_5, &unk, true, false, -1))
			return false;
	
		if (!func_5(unk.f_4, 1093867179))
			return false;
	}

	num = func_84(uParam0.f_4);

	if (num == joaat("WEAPON") && !WEAPON::_IS_WEAPON_BINOCULARS(uParam0.f_4) && uParam0.f_4 != joaat("weapon_kit_camera") && uParam0.f_4 != 332793555)
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
			switch (func_169(uParam0.f_4))
			{
				case -525676072:
					if (uParam0.f_4 == joaat("kit_mask_grey_cloth"))
						return true;
					else
						return false;
					break;
			
				case 81053684:
					return true;
			
				case 1477698721:
					if (func_5(uParam0.f_4, 160827531))
						return true;
				
					return false;
			
				default:
					return false;
			}
			break;
	}

	if (func_169(uParam0.f_4) == -829303394)
		return false;

	return true;
}

BOOL func_319(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x9EAE Hash - 0xAEB34219 ^0xE0C7A844
{
	BOOL flag;

	flag = false;

	if (iParam1 == 0 || func_321(false) || bParam2)
		flag = true;

	if (!bParam2)
		if (!func_22(hParam0, 0) || hParam0 == 1259508039 || hParam0 == joaat("kit_wardrobe"))
			return false;

	if (!flag && func_379(hParam0))
		return false;

	switch (iParam1)
	{
		case -2074770370:
			if (Global_1940252.f_39 == 1 || Global_1940252.f_39 == 2)
				return func_382(hParam0, iParam1);
			else if (func_4(hParam0, -949239683) == -1337515701 && hParam0 != joaat("kit_player_pocketwatch"))
				return true;
			else
				return func_5(hParam0, -111938901);
			break;
	
		case -1666604090:
			return func_5(hParam0, -193035453) && !func_5(hParam0, 474910316);
	
		case -1559802791:
			return func_5(hParam0, 1422457563);
	
		case -1268291907:
			return func_5(hParam0, 1360707454) && !func_5(hParam0, 474910316);
	
		case -889932290:
		case -283002878:
		case 0:
			if (!func_321(false))
			{
				if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
					return true;
			
				if (func_319(hParam0, -1559802791, true) || func_319(hParam0, -1268291907, true) || func_319(hParam0, -96974025, true) || func_319(hParam0, -1666604090, true) || func_319(hParam0, 1561961676, true) || func_319(hParam0, -156634416, true) || func_319(hParam0, 1061777683, true) || func_319(hParam0, -2074770370, true) || func_319(hParam0, -693134279, true) || func_319(hParam0, -182626652, true) || func_319(hParam0, 1783698482, true) || func_380(hParam0))
					return true;
			}
			else
			{
				return true;
			}
			break;
	
		case -693134279:
			return func_91(hParam0, 8388608);
	
		case -182626652:
			if (func_383(hParam0, Global_1915656.f_20241.f_1))
			{
				func_384(func_175(false), hParam0, true);
				return true;
			}
			break;
	
		case -156634416:
			return func_5(hParam0, -928967997) && !func_5(hParam0, 474910316);
	
		case -96974025:
			return func_5(hParam0, 1009210113) && !func_5(hParam0, 474910316);
	
		case 1061777683:
			return func_5(hParam0, 747873593) && !func_5(hParam0, 474910316);
	
		case 1561961676:
			if (func_5(hParam0, -111938901) && !func_5(hParam0, 474910316))
				return true;
			else if (func_5(hParam0, -189374246) || func_5(hParam0, -1257428961))
				return true;
			else
				return false;
			break;
	
		case 1783698482:
			return func_5(hParam0, 474910316) && !func_321(false) && func_381(hParam0);
	}

	return false;
}

BOOL func_320(Hash hParam0) // Position - 0xA237 Hash - 0xA5F6DAC7 ^0xB374C77C
{
	int i;

	if (Global_1940252.f_17.f_16 > 0)
	{
		for (i = 0; i < Global_1940252.f_17.f_16; i = i + 1)
		{
			if (Global_1940252.f_17[i /*3*/] != hParam0)
			{
			}
			else if (Global_1940252.f_17[i /*3*/].f_1 & 1 != 0)
			{
				return false;
			}
		}
	}

	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY"):
			return false;
	}

	if (func_5(hParam0, 1989861793) && func_275(func_385(hParam0), func_269(true), joaat("SLOTID_SATCHEL"), false, false, false) > 0)
		return false;

	if (func_321(false))
	{
		if (Global_1940252.f_11587 == -182626652 && !func_383(hParam0, Global_1915656.f_20241.f_1))
			return false;
	
		if (Global_1940252.f_11587 == 0 && ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0) || func_386(hParam0))
			return false;
	
		switch (Global_1915656.f_20241)
		{
			case 2:
				if (!func_387(hParam0))
					return false;
				break;
		}
	}

	if (func_5(hParam0, -805003139))
		if (!UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
			return false;

	if (func_84(hParam0) == joaat("UPGRADE"))
		if (!func_5(hParam0, -1540973036) && !func_5(hParam0, 1192444843))
			return false;
		else if (hParam0 == 1872063208 || hParam0 == 1309979101)
			return false;

	return true;
}

BOOL func_321(BOOL bParam0) // Position - 0xA3C8 Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

BOOL func_322() // Position - 0xA3F8 Hash - 0x4228A1C2 ^0x5DCAFF22
{
	return Global_1940252.f_10;
}

void func_323(var uParam0) // Position - 0xA406 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1940252.f_11588 = uParam0;
	return;
}

void func_324(int iParam0) // Position - 0xA417 Hash - 0x29A8F290 ^0x1CB9B41C
{
	Global_1940252.f_10 = iParam0;
	return;
}

BOOL func_325(int* piParam0) // Position - 0xA427 Hash - 0xF95E1119 ^0x322602AD
{
	int num;

	if (piParam0->f_1 == -1)
		return false;

	num = func_388(piParam0);

	if (num == 1 || num == 5)
		return true;

	return false;
}

BOOL func_326(Any anParam0) // Position - 0xA459 Hash - 0x36229A1B ^0x2A9934D3
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 || anParam0->f_1 == -889271554 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_327(Hash hParam0) // Position - 0xA49F Hash - 0x3FD9EF89 ^0x3FC8CAC6
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(hParam0);
}

BOOL func_328(int iParam0, int iParam1) // Position - 0xA4B7 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_329(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0xA4C6 Hash - 0xDFD4B035 ^0x7F7C43A6
{
	if (!func_327(hParam0))
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_COUNT_FROM_COST_TYPE(hParam0, hParam1) == 0)
		return false;

	if (bParam2)
		return !func_334(hParam0, hParam1);

	return true;
}

BOOL func_330(Hash hParam0, var uParam1) // Position - 0xA4FE Hash - 0x4D07B4AD ^0x4D07B4AD
{
	*uParam1 = func_389(hParam0, true);
	return *uParam1 != 0;
}

BOOL func_331(Hash hParam0, var uParam1) // Position - 0xA515 Hash - 0xA213590B ^0xA213590B
{
	*uParam1 = func_390(hParam0, true, false);
	return *uParam1 != 0;
}

BOOL func_332() // Position - 0xA52D Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1915656.f_22477;
}

BOOL func_333(int iParam0) // Position - 0xA53C Hash - 0x16518DC6 ^0xD6363784
{
	if (iParam0 == 34 && Global_1915656.f_22504.f_1)
		return true;

	if (func_321(true))
		if (Global_1915656.f_20241 == iParam0)
			return true;

	return false;
}

BOOL func_334(Hash hParam0, Hash hParam1) // Position - 0xA577 Hash - 0x86D562BB ^0xB258F193
{
	var outData;
	int outUnk;
	Hash unlockHash;
	int num;
	int i;
	int j;

	outData = 10;
	outData.f_1.f_4 = 15;
	outData.f_1.f_36 = 10;
	outData.f_1.f_47.f_4 = 15;
	outData.f_1.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(hParam0, &outData, &outUnk, 10) || outUnk == 0)
		return false;

	num = 0;

	for (i = 0; i < outUnk; i = i + 1)
	{
		if (outData[i /*47*/] == hParam1)
		{
			num = outData[i /*47*/].f_35;
		
			for (j = 0; j < num; j = j + 1)
			{
				unlockHash = outData[i /*47*/].f_36[j];
			
				if (unlockHash == 0)
				{
				}
				else if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
				{
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_335(Hash hParam0, Hash hParam1) // Position - 0xA6C0 Hash - 0xB71B0B73 ^0x482F6C5E
{
	int num;
	int num2;
	var unk;

	if (hParam1 == -570078785)
	{
		num = func_391(hParam0, -570078785, false, true);
		num == 0;
	
		if (!func_392(num))
		{
			if (Global_1915656.f_20644)
				func_394(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_393(num)));
		
			return 0;
		}
	}
	else if (hParam1 == -915411861)
	{
		num2 = func_391(hParam0, -915411861, false, true);
		num2 == 0;
	
		if (!func_395(num2))
		{
			if (Global_1915656.f_20644)
				func_394("SHOP_H_TOO_POOR");
		
			return 0;
		}
	}
	else if (hParam1 == 997808187)
	{
		return 1;
	}

	if (!func_396(hParam0, hParam1, &unk, true, false))
		return 0;

	return 1;
}

BOOL func_336(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0xA77A Hash - 0x195DA727 ^0x43C01C6A
{
	if (!func_327(uParam0.f_17))
		return false;

	return true;
}

BOOL func_337(int* piParam0, Hash hParam1) // Position - 0xA793 Hash - 0x8DE7BD5B ^0x83B9042B
{
	Hash action;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
		if (!func_397(piParam0, hParam1))
			return false;

	action = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*piParam0);

	if (action != hParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0) >= 50)
	{
		if (!func_398(piParam0))
			return false;
	
		if (!func_397(piParam0, hParam1))
			return false;
	}

	return true;
}

BOOL func_338(int iParam0, Hash hParam1, Any* panParam2) // Position - 0xA7F6 Hash - 0xAEE55F03 ^0x36ABCD3F
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

BOOL func_339(int* piParam0, BOOL bParam1) // Position - 0xA80D Hash - 0x5B4FA9A9 ^0x92224A48
{
	piParam0->f_2 = piParam0->f_2 + 1;

	if (bParam1)
		return func_398(piParam0);

	return true;
}

int func_340() // Position - 0xA82E Hash - 0xEEC80C47 ^0xEEC80C47
{
	if (Global_1292143.f_459.f_1548 >= 40 || Global_1292143.f_459.f_1548 < 0)
		Global_1292143.f_459.f_1548 = 0;

	return Global_1292143.f_459.f_1548;
}

void func_341(int iParam0) // Position - 0xA86D Hash - 0x91140DCF ^0x91140DCF
{
	if (iParam0 >= 40 || iParam0 < 0)
		iParam0 = 0;

	Global_1292143.f_459.f_1548 = iParam0;
	return;
}

int func_342() // Position - 0xA896 Hash - 0x3F0702A6 ^0x3F0702A6
{
	if (Global_1292143.f_459.f_1549 >= 10 || Global_1292143.f_459.f_1549 < 0)
		Global_1292143.f_459.f_1549 = 0;

	return Global_1292143.f_459.f_1549;
}

void func_343(int iParam0) // Position - 0xA8D5 Hash - 0x2263858C ^0x2263858C
{
	if (iParam0 >= 10 || iParam0 < 0)
		iParam0 = 0;

	Global_1292143.f_459.f_1549 = iParam0;
	return;
}

BOOL func_344() // Position - 0xA8FE Hash - 0x9D650775 ^0xA87234F9
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_346(Global_1051268) && Global_1572887.f_8 & 1 != 0)
		return true;

	return false;
}

struct<2> func_345(int iParam0) // Position - 0xA956 Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_346(var uParam0, var uParam1) // Position - 0xA96A Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_399(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_400(uParam0))
		return false;

	return true;
}

int func_347(var uParam0, var uParam1) // Position - 0xA99E Hash - 0x72C53F65 ^0x72C53F65
{
	return uParam0;
}

void func_348(var uParam0, int iParam1, int iParam2) // Position - 0xA9A8 Hash - 0xAA024A7F ^0xCC1C521
{
	Vector3 vector;
	float distanceBetweenCoords;
	var unk3;
	var unk6;
	int i;
	int j;
	Hash hash;
	var unk7;
	int num;
	var unk8;

	unk8 = { func_151() };

	for (i = 0; i < iParam2; i = i + 1)
	{
		hash = func_349(i, iParam1);
	
		if (func_350(hash))
		{
			if (func_5(hash, 781094263))
			{
				if (func_5(hash, 1307628809))
				{
					for (j = 0; j <= 8; j = j + 1)
					{
						num = func_351(unk8.f_7, hash, j);
						vector = { func_352(num, hash) };
						distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vector, true);
						func_401(&unk6, &distanceBetweenCoords, &unk3, &vector, &unk7, &hash);
					}
				}
				else if (func_5(hash, 683680997))
				{
					for (j = 0; j <= 5; j = j + 1)
					{
						num = func_351(unk8.f_7, hash, j);
						vector = { func_352(num, hash) };
						distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vector, true);
						func_401(&unk6, &distanceBetweenCoords, &unk3, &vector, &unk7, &hash);
					}
				}
				else if (func_5(hash, -283942357))
				{
					if (hash != joaat("provision_wldflwr_agarita") && hash != joaat("provision_wldflwr_blood_flower"))
					{
						for (j = 0; j <= 2; j = j + 1)
						{
							num = func_351(unk8.f_7, hash, j);
							vector = { func_352(num, hash) };
							distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vector, true);
							func_401(&unk6, &distanceBetweenCoords, &unk3, &vector, &unk7, &hash);
						}
					}
				}
			}
			else if (func_5(hash, -149719013) && func_5(hash, -283942357) && hash != joaat("provision_vulture_egg"))
			{
				for (j = 0; j <= 1; j = j + 1)
				{
					num = func_354(unk8.f_6, j);
					vector = { func_352(num, hash) };
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vector, true);
					func_401(&unk6, &distanceBetweenCoords, &unk3, &vector, &unk7, &hash);
				}
			}
			else
			{
				num = func_355(&unk8, hash);
				vector = { func_352(num, hash) };
				distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vector, true);
				func_401(&unk6, &distanceBetweenCoords, &unk3, &vector, &unk7, &hash);
			}
		}
	}

	func_402(uParam0, unk7, unk3, 0);
	return;
}

Hash func_349(int iParam0, int iParam1) // Position - 0xABD8 Hash - 0x3644D28E ^0x6DB2088F
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

BOOL func_350(Hash hParam0) // Position - 0xAC1B Hash - 0x2D29E5CD ^0xBFE00D4
{
	int num;

	if (!func_22(hParam0, 0))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return false;

	if (func_5(hParam0, -1995062316))
	{
		if (!func_42(joaat("kit_collector_spade"), 1))
			return false;
	
		if (func_5(hParam0, -283942357))
			if (!func_42(joaat("weapon_kit_metal_detector"), 1))
				return false;
	}

	if (func_5(hParam0, 1562621600) || func_5(hParam0, 143267379) || func_5(hParam0, -944041124) || func_5(hParam0, -352095726))
		if (!func_42(joaat("weapon_kit_metal_detector"), 1))
			return false;

	if (!func_5(hParam0, -352095726))
	{
		num = func_403(12);
	
		if (num < 5)
			if (func_5(hParam0, 683680997))
				return false;
	
		if (num < 10)
			if (func_5(hParam0, -283942357))
				return false;
	}

	return true;
}

int func_351(int iParam0, Hash hParam1, int iParam2) // Position - 0xAD1D Hash - 0xD9ABF212 ^0x41B8E751
{
	int num;

	switch (iParam0)
	{
		case -1586372771:
			num = 1;
			break;
	
		case -1356105008:
			num = 2;
			break;
	
		case -1175547818:
			num = 3;
			break;
	
		case -877579301:
			num = 4;
			break;
	
		case 40018245:
			num = 0;
			break;
	
		case 1138992134:
			num = 5;
			break;
	}

	if (func_5(hParam1, 1307628809))
		iParam2 = iParam2 + (num * 9);
	else if (func_5(hParam1, 683680997))
		iParam2 = iParam2 + (num * 6);
	else if (func_5(hParam1, -283942357))
		iParam2 = iParam2 + (num * 3);

	switch (iParam2)
	{
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 5:
			return 5;
	
		case 6:
			return 6;
	
		case 7:
			return 7;
	
		case 8:
			return 8;
	
		case 9:
			return 9;
	
		case 10:
			return 10;
	
		case 11:
			return 11;
	
		case 12:
			return 12;
	
		case 13:
			return 13;
	
		case 14:
			return 14;
	
		case 15:
			return 15;
	
		case 16:
			return 16;
	
		case 17:
			return 17;
	
		case 18:
			return 18;
	
		case 19:
			return 19;
	
		case 20:
			return 20;
	
		case 21:
			return 21;
	
		case 22:
			return 22;
	
		case 23:
			return 23;
	
		case 24:
			return 24;
	
		case 25:
			return 25;
	
		case 26:
			return 26;
	
		case 27:
			return 27;
	
		case 28:
			return 28;
	
		case 29:
			return 29;
	
		case 30:
			return 30;
	
		case 31:
			return 31;
	
		case 32:
			return 32;
	
		case 33:
			return 33;
	
		case 34:
			return 34;
	
		case 35:
			return 35;
	
		case 36:
			return 36;
	
		case 37:
			return 37;
	
		case 38:
			return 38;
	
		case 39:
			return 39;
	
		case 40:
			return 40;
	
		case 41:
			return 41;
	
		case 42:
			return 42;
	
		case 43:
			return 43;
	
		case 44:
			return 44;
	
		case 45:
			return 45;
	
		case 46:
			return 46;
	
		case 47:
			return 47;
	
		case 48:
			return 48;
	
		case 49:
			return 49;
	
		case 50:
			return 50;
	
		case 51:
			return 51;
	
		case 52:
			return 52;
	
		case 53:
			return 53;
	
		default:
		
	}

	return 0;
}

Vector3 func_352(int iParam0, Hash hParam1) // Position - 0xB013 Hash - 0x3543C812 ^0x611EC779
{
	var unk;

	if (func_5(hParam1, -1995062316))
		unk = { func_404(iParam0, hParam1) };

	if (func_5(hParam1, -149719013))
		unk = { func_405(iParam0, hParam1) };

	if (func_5(hParam1, 143267379))
		unk = { func_406(iParam0, hParam1) };

	if (func_5(hParam1, -944041124))
		unk = { func_407(iParam0, hParam1) };

	if (func_5(hParam1, 1239889275))
		unk = { func_408(iParam0, hParam1) };

	if (func_5(hParam1, 1940829793))
		unk = { func_409(iParam0, hParam1) };

	if (func_5(hParam1, 1562621600))
		unk = { func_410(iParam0, hParam1) };

	if (func_5(hParam1, 781094263))
		unk = { func_411(iParam0, hParam1) };

	if (func_5(hParam1, -352095726))
		unk = { func_412(iParam0, hParam1) };

	return unk;
}

void func_353(var uParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, float fParam5) // Position - 0xB109 Hash - 0x684F8C04 ^0x23D84021
{
	Vector3 vector;
	float distanceBetweenCoords;
	int i;

	if (func_413(hParam1, uParam2) && func_350(hParam1) && !_IS_NULL_VECTOR(uParam2))
	{
		for (i = 0; i < uParam0->f_11; i = i + 1)
		{
			vector = { uParam0->[i /*3*/] };
			distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vector, true);
		
			if (i == 0)
				if (_IS_NULL_VECTOR(uParam0->[i /*3*/]))
					func_402(uParam0, hParam1, uParam2, i);
				else if (hParam1 != uParam0->f_11[i])
					if (fParam5 < distanceBetweenCoords)
						func_402(uParam0, hParam1, uParam2, i);
			else if (!func_414(uParam0, hParam1))
				if (_IS_NULL_VECTOR(uParam0->[i /*3*/]))
					func_402(uParam0, hParam1, uParam2, i);
				else if (!func_415(uParam0, i))
					if (fParam5 < distanceBetweenCoords)
						func_402(uParam0, hParam1, uParam2, i);
				else
					func_402(uParam0, hParam1, uParam2, i + 1);
		}
	}

	return;
}

int func_354(int iParam0, int iParam1) // Position - 0xB215 Hash - 0x642693D2 ^0x642693D2
{
	switch (iParam0)
	{
		case -2013016202:
			iParam1 = iParam1 + 8;
			break;
	
		case -1745916083:
			iParam1 = iParam1 + 10;
			break;
	
		case 1218924734:
			iParam1 = iParam1 + 2;
			break;
	
		case 1516368947:
			iParam1 = iParam1 + 4;
			break;
	
		case 1561655701:
			iParam1 = iParam1;
			break;
	
		case 1984048115:
			iParam1 = iParam1 + 6;
			break;
	}

	switch (iParam1)
	{
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 5:
			return 5;
	
		case 6:
			return 6;
	
		case 7:
			return 7;
	
		case 8:
			return 8;
	
		case 9:
			return 9;
	
		case 10:
			return 10;
	
		case 11:
			return 11;
	
		default:
		
	}

	return 0;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
int func_355(var uParam0, Hash hParam1) // Position - 0xB302 Hash - 0xF8B42983 ^0x22A4C116
{
	if (func_5(hParam1, 781094263))
	{
	}
	else if (func_5(hParam1, -149719013))
	{
		switch (uParam0->f_6)
		{
			case -2013016202:
				return 4;
		
			case -1745916083:
				return 5;
		
			case 1218924734:
				return 1;
		
			case 1516368947:
				return 2;
		
			case 1561655701:
				return 0;
		
			case 1984048115:
				return 3;
		
			default:
				goto 0x2CA;
		}
	}
	else if (func_5(hParam1, -1995062316))
	{
		switch (*uParam0)
		{
			case -2102912900:
				return 2;
		
			case -1865796416:
				return 1;
		
			case -1711487195:
				return 4;
		
			case -1471781960:
				return 3;
		
			case 262189671:
				return 0;
		
			case 1532840411:
				return 5;
		
			default:
				goto 0x2CA;
		}
	}
	else if (func_5(hParam1, 143267379))
	{
		switch (uParam0->f_3)
		{
			case -1285238734:
				return 0;
		
			case -1211213567:
				return 2;
		
			case -1116052391:
				return 3;
		
			case -888012916:
				return 1;
		
			case 1314063884:
				return 4;
		
			case 1644572018:
				return 5;
		
			default:
				goto 0x2CA;
		}
	}
	else if (func_5(hParam1, -944041124))
	{
		switch (uParam0->f_4)
		{
			case -1789128804:
				return 4;
		
			case -1617026016:
				return 5;
		
			case -486692198:
				return 2;
		
			case -158969429:
				return 0;
		
			case 147060262:
				return 1;
		
			case 886099519:
				return 3;
		
			default:
				goto 0x2CA;
		}
	}
	else if (func_5(hParam1, 1239889275))
	{
		switch (uParam0->f_1)
		{
			case -1952384882:
				return 5;
		
			case -1859451998:
				return 0;
		
			case -366824048:
				return 4;
		
			case -137539355:
				return 3;
		
			case 212892331:
				return 2;
		
			case 467802382:
				return 1;
		
			default:
				goto 0x2CA;
		}
	}
	else if (func_5(hParam1, 1940829793))
	{
		switch (uParam0->f_8)
		{
			case -2102137352:
				return 2;
		
			case 199098446:
				return 3;
		
			case 1381272898:
				return 0;
		
			case 1462376165:
				return 4;
		
			case 1539809320:
				return 1;
		
			case 1885620569:
				return 5;
		
			default:
				goto 0x2CA;
		}
	}
	else if (func_5(hParam1, 1562621600))
	{
		switch (uParam0->f_5)
		{
			case -1414390857:
				return 0;
		
			case -564887297:
				return 3;
		
			case -490927668:
				return 1;
		
			case 267084844:
				return 4;
		
			case 345304443:
				return 2;
		
			case 1120782832:
				return 5;
		
			default:
				goto 0x2CA;
		}
	}
	else if (func_5(hParam1, -352095726))
	{
		switch (uParam0->f_9)
		{
			case -145707284:
				return 2;
		
			case 82987567:
				return 1;
		
			case 346286482:
				return 0;
		
			case 1310186617:
				return 5;
		
			case 1558018564:
				return 4;
		
			case 1940236180:
				return 3;
		
			default:
			
		}
	}

	return 0;
}

void func_356(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0xB5D0 Hash - 0xA016E18B ^0xA016E18B
{
	return;
}

char* func_357(Hash hParam0, int iParam1) // Position - 0xB5D8 Hash - 0x42D82A11 ^0xD6E68A28
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

struct<4> func_358() // Position - 0xB66B Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_359() // Position - 0xB677 Hash - 0x7BDD8F67 ^0x9160E7D8
{
	if (func_183(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

BOOL func_360(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0xB694 Hash - 0x7F891916 ^0x5CD7D9F0
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(hParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, hParam2);
}

BOOL func_361(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0xB6C7 Hash - 0xC845006B ^0xAA568F17
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_175(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

BOOL func_362(Hash hParam0) // Position - 0xB701 Hash - 0xD47FBCD ^0xAB7C7E88
{
	return func_5(hParam0, 1279601681);
}

void func_363(int iParam0, int iParam1) // Position - 0xB714 Hash - 0xC00BEAB5 ^0x728D99B1
{
	if (iParam1 == 0)
		return;

	if (SECURE_LOAD(&iParam0) >= 11)
		return;

	SECURE_STORE(&iParam0->f_1[SECURE_LOAD(&iParam0)], iParam1);
	SECURE_STORE(&iParam0, SECURE_LOAD(&iParam0) + 1);
	return;
}

void func_364(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18) // Position - 0xB744 Hash - 0xE040F56 ^0xE040F56
{
	int i;
	var unk;

	if (!func_326(anParam0))
		return;

	if (Global_1292143.f_2012 < 20)
	{
		Global_1292143.f_2012 = Global_1292143.f_2012 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1292143.f_2012.f_1[i /*24*/] = { Global_1292143.f_2012.f_1[i + 1 /*24*/] };
		}
	}

	unk.f_7.f_1 = 11;
	unk.f_7.f_16 = 255;
	unk = { *anParam0 };
	unk.f_4 = iParam1;
	unk.f_7 = { uParam2 };
	unk.f_6 = 1;
	Global_1292143.f_2012.f_1[Global_1292143.f_2012 - 1 /*24*/] = { unk };
	return;
}

BOOL func_365(Hash hParam0, Any* panParam1) // Position - 0xB7FF Hash - 0xB914F903 ^0x1DD44828
{
	int num;

	num = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(hParam0, panParam1);

	if (hParam0 == joaat("use"))
		if (func_416(panParam1->f_8, hParam0, num, 2048) || func_416(panParam1->f_8, hParam0, num, 32768) || func_416(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (hParam0 == 1168099063)
		if (func_416(panParam1->f_8, hParam0, num, 4) || func_416(panParam1->f_8, hParam0, num, 256) || func_416(panParam1->f_8, hParam0, num, 65536) || func_416(panParam1->f_8, hParam0, num, 131072))
			return false;
	else if (hParam0 == joaat("spend"))
		if (func_416(panParam1->f_8, hParam0, num, 1) || func_416(panParam1->f_8, hParam0, num, 8) || func_416(panParam1->f_8, hParam0, num, 65536) || func_416(panParam1->f_8, hParam0, num, 32))
			return false;
	else if (hParam0 == joaat("Sell"))
		if (func_416(panParam1->f_8, hParam0, num, 1) || func_416(panParam1->f_8, hParam0, num, 16) || func_416(panParam1->f_8, hParam0, num, 2) || func_416(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (func_416(panParam1->f_8, hParam0, num, 8) || func_416(panParam1->f_8, hParam0, num, 4096) || func_416(panParam1->f_8, hParam0, num, 256) || func_416(panParam1->f_8, hParam0, num, 65536))
		return false;

	return true;
}

BOOL func_366(int iParam0, Hash hParam1, Any* panParam2) // Position - 0xB9D5 Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

int func_367(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0xB9EC Hash - 0x85216370 ^0xE7D00C30
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_417(iParam1, 1, 0, 0);
			return iParam1;
		}
	
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}

	func_417(iParam1, 2, 0, 0);
	return -1;
}

int func_368(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0xBA35 Hash - 0xE2AB25BA ^0xE2AB25BA
{
	if (bParam0)
	{
		func_417(iParam1, 1, 0, 0);
		return iParam1;
	}

	return -1;
}

int func_369(int iParam0) // Position - 0xBA51 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_370(int iParam0) // Position - 0xBA76 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_371(int iParam0) // Position - 0xBA89 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_372(int iParam0) // Position - 0xBA9C Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_373(int iParam0) // Position - 0xBAAF Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_374(int iParam0) // Position - 0xBAC1 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_375(int iParam0, int iParam1) // Position - 0xBAD3 Hash - 0x893AC59E ^0x893AC59E
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

void func_376(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xBB6D Hash - 0xA65AB937 ^0xA65AB937
{
	func_419(uParam0, iParam6);
	func_420(uParam0, iParam5);
	func_421(uParam0, iParam4);
	func_422(uParam0, iParam3);
	func_423(uParam0, iParam2);
	func_424(uParam0, iParam1);
	return;
}

BOOL func_377() // Position - 0xBBA5 Hash - 0x977C1DDD ^0x1581CA55
{
	return Global_1913444.f_127 == 0;
}

int func_378() // Position - 0xBBB5 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1953292.f_1;
}

BOOL func_379(Hash hParam0) // Position - 0xBBC3 Hash - 0x94D015F5 ^0xC1449CA4
{
	int i;

	for (i = 0; i < Global_1940252.f_41.f_1; i = i + 1)
	{
		if (func_425(hParam0, Global_1940252.f_41.f_2[i /*2*/]))
			return true;
	}

	return false;
}

BOOL func_380(Hash hParam0) // Position - 0xBBFE Hash - 0x41E81FD3 ^0x6129C7A4
{
	if (func_5(hParam0, -839724752))
		return func_5(hParam0, 1937586541);

	return false;
}

BOOL func_381(Hash hParam0) // Position - 0xBC23 Hash - 0xE3FE29A5 ^0x631A1635
{
	if (func_426(hParam0, joaat("ANTIQUE_BOTTLES")) || func_426(hParam0, joaat("BIRD_EGGS")) || func_426(hParam0, joaat("Arrowheads")) || func_426(hParam0, joaat("FAMILY_HEIRLOOMS")) || func_426(hParam0, joaat("WILD_FLOWERS")) || func_426(hParam0, joaat("coins")) || func_426(hParam0, joaat("LOST_JEWELRY_RINGS")) || func_426(hParam0, joaat("LOST_JEWELRY_BRACELETS")) || func_426(hParam0, joaat("LOST_JEWELRY_EARRINGS")) || func_426(hParam0, joaat("LOST_JEWELRY_NECKLACES")) || func_426(hParam0, joaat("TAROT_CARDS_CUPS")) || func_426(hParam0, joaat("TAROT_CARDS_PENTACLES")) || func_426(hParam0, joaat("TAROT_CARDS_SWORDS")) || func_426(hParam0, joaat("TAROT_CARDS_WANDS")) || func_426(hParam0, 773314749) || func_426(hParam0, -246025274) || func_426(hParam0, -41527693))
		return true;

	return false;
}

BOOL func_382(Hash hParam0, int iParam1) // Position - 0xBD4D Hash - 0xE1C16725 ^0x529AED8
{
	switch (Global_1940252.f_39)
	{
		case 1:
			if (iParam1 == -2074770370)
				if (func_5(hParam0, joaat("ci_tag_item_meat_animal")) || func_5(hParam0, -839724752) || func_5(hParam0, -136654233))
					return 1;
			break;
	
		case 2:
			if (iParam1 == -2074770370)
				if (func_5(hParam0, joaat("ci_tag_item_meat_animal")) || func_5(hParam0, -839724752) || func_5(hParam0, -136654233) || func_5(hParam0, 554195525) || func_5(hParam0, -1238310989) || func_5(hParam0, 2127114599) || func_5(hParam0, -1864584831) || func_5(hParam0, 1068498601) || func_5(hParam0, 1967571132))
					return 1;
			break;
	
		default:
			break;
	}

	return 0;
}

BOOL func_383(Hash hParam0, int iParam1) // Position - 0xBE59 Hash - 0x503679EB ^0x503679EB
{
	if (iParam1 == 119)
		return func_427(hParam0);

	return func_428(hParam0, iParam1);
}

void func_384(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0xBE7C Hash - 0xBD272687 ^0xCE8D193D
{
	if (func_22(hParam1, 0))
		if (bParam2)
			INVENTORY::_INVENTORY_ENABLE_ITEM(iParam0, hParam1);
		else
			INVENTORY::_INVENTORY_DISABLE_ITEM(iParam0, hParam1, 0);

	return;
}

Hash func_385(Hash hParam0) // Position - 0xBEA7 Hash - 0x3DF0E667 ^0x806933A2
{
	Hash award;
	Hash outData;
	int i;
	int awardItemCount;

	if (func_5(hParam0, 1397200408))
		return 0;

	if (!func_5(hParam0, 1989861793))
		return 0;

	award = func_138(hParam0, false);

	if (!ITEMDATABASE::_ITEMDATABASE_GET_PRIORITY_ACCESS_AWARD(award))
		return 0;

	awardItemCount = ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ITEM_COUNT(award);

	for (i = 0; i < awardItemCount; i = i + 1)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_AWARD_ITEM_INFO(award, i, &outData))
		{
		}
		else if (func_5(outData, 1989861793))
		{
			return outData;
		}
	}

	return 0;
}

BOOL func_386(Hash hParam0) // Position - 0xBF2B Hash - 0x672E565C ^0xD531C7FC
{
	if (func_5(hParam0, 75135761))
		return true;

	return false;
}

BOOL func_387(Hash hParam0) // Position - 0xBF46 Hash - 0x38920CAC ^0xE621BFA9
{
	Hash hash;

	hash = hParam0;

	if (!func_139(hash))
		return false;

	if (hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("coins"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("WILD_FLOWERS"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("FAMILY_HEIRLOOMS"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("Arrowheads"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("ANTIQUE_BOTTLES"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("BIRD_EGGS"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("LOST_JEWELRY_RINGS"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("LOST_JEWELRY_BRACELETS"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("LOST_JEWELRY_NECKLACES"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("LOST_JEWELRY_EARRINGS"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("TAROT_CARDS_CUPS"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("TAROT_CARDS_PENTACLES"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("TAROT_CARDS_SWORDS"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("TAROT_CARDS_WANDS"), 0))
		return true;

	return false;
}

int func_388(int* piParam0) // Position - 0xC06F Hash - 0xAC4ACAD7 ^0x53A8C861
{
	return func_429(piParam0->f_1);
}

Hash func_389(Hash hParam0, BOOL bParam1) // Position - 0xC07F Hash - 0x73CC7FFA ^0x73CC7FFA
{
	int i;
	int num;
	var unk;
	Hash hash;
	int j;

	unk = 15;

	for (i = 0; i < 3; i = i + 1)
	{
		hash = func_430(i, true, false);
	
		if (!func_431(hParam0, hash, &unk, &num, false, true))
		{
		}
		else
		{
			for (j = 0; j < num; j = j + 1)
			{
				if (func_432(unk[j /*2*/]))
				{
					if (!bParam1 || func_87(unk[j /*2*/], false, true, true) > 0)
						return hash;
				
					break;
				}
			
				if (unk[j /*2*/] == 0)
					break;
			}
		}
	}

	return 0;
}

Hash func_390(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC112 Hash - 0x2596799 ^0x2596799
{
	int i;
	int num;
	var unk;
	var unk2;
	Hash hash;
	Hash hash2;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	var unk3;
	Hash hash3;
	int j;

	unk3 = 15;

	for (i = 0; i < 5; i = i + 1)
	{
		hash3 = func_430(i, false, true);
	
		if (!func_431(hParam0, hash3, &unk3, &num, false, true))
		{
		}
		else
		{
			flag3 = false;
			hash2 = 0;
		
			for (j = 0; j < num; j = j + 1)
			{
				if (func_433(unk3[j /*2*/]))
				{
					if (!bParam1 || func_87(unk3[j /*2*/], false, true, true) > 0)
						flag3 = true;
				}
				else if (unk3[j /*2*/] == joaat("currency_cash") || unk3[j /*2*/] == joaat("currency_gold_bar"))
				{
					if (bParam2 && unk3[j /*2*/] == joaat("currency_cash") || !bParam2 && unk3[j /*2*/] == joaat("currency_gold_bar"))
					{
						if (hash == 0 || flag && unk3[j /*2*/].f_1 < unk)
						{
							hash2 = hash3;
							unk2 = unk3[j /*2*/].f_1;
							flag2 = 1;
						}
					}
					else if (hash == 0 || unk3[j /*2*/].f_1 < unk)
					{
						hash2 = hash3;
						unk2 = unk3[j /*2*/].f_1;
						flag2 = 0;
					}
				}
				else if (unk3[j /*2*/] == 0)
				{
					break;
				}
			}
		
			if (flag3 && hash2 != 0)
			{
				hash = hash2;
				unk = unk2;
				flag = flag2;
			}
		}
	}

	return hash;
}

int func_391(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0xC271 Hash - 0x45FFEF5A ^0x45FFEF5A
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_431(hParam0, hParam1, &unk, &num, bParam2, bParam3))
	{
		!bParam2;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == joaat("currency_cash") || unk[i /*2*/] == joaat("currency_gold_bar") || unk[i /*2*/] == joaat("character_role_token"))
			return unk[i /*2*/].f_1;
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam2;
	return 0;
}

BOOL func_392(int iParam0) // Position - 0xC305 Hash - 0x9186FF7C ^0xD4141850
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(0, iParam0);
}

int func_393(int iParam0) // Position - 0xC328 Hash - 0x15FBACEE ^0x15FBACEE
{
	return iParam0 / 100;
}

void func_394(const char* sParam0) // Position - 0xC335 Hash - 0x6D26E8EF ^0x36AA660D
{
	Global_1915656.f_22470 = func_145(sParam0, 10000, 0, 0, 0, true);
	return;
}

BOOL func_395(int iParam0) // Position - 0xC351 Hash - 0x65331643 ^0x65331643
{
	if (iParam0 < 0)
		return false;

	if (func_3() == 0)
		return func_434(iParam0);

	return iParam0 <= func_435();
}

BOOL func_396(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0xC37E Hash - 0xE8CB342E ^0xE8CB342E
{
	var unk;
	int num;
	int i;
	int num2;
	int num3;
	int num4;

	unk = 15;

	if (!func_431(hParam0, hParam1, &unk, &num, false, true))
		return false;

	num3 = -1;

	if (Global_1915656.f_20638)
		num3 = Global_1915656.f_20241;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0)
			break;
	
		if (unk[i /*2*/] == joaat("currency_cash"))
		{
			if (!bParam4 && !func_395(unk[i /*2*/].f_1))
				return false;
		}
		else if (unk[i /*2*/] == joaat("currency_gold_bar"))
		{
			if (!bParam4 && !func_392(unk[i /*2*/].f_1))
				return false;
		}
		else
		{
			num2 = func_436(num3, unk[i /*2*/]);
		
			if (num2 != 0)
				num4 = func_437(unk[i /*2*/], num2);
			else
				num4 = func_87(unk[i /*2*/], false, bParam3, true);
		
			if (num4 < unk[i /*2*/].f_1)
			{
				*uParam2 = { unk[i /*2*/] };
				return false;
			}
		}
	}

	return true;
}

BOOL func_397(int* piParam0, Hash hParam1) // Position - 0xC485 Hash - 0x8927A1A4 ^0x3C5C8B8F
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(piParam0, joaat("basket"), hParam1))
		return false;

	return true;
}

BOOL func_398(int* piParam0) // Position - 0xC4A3 Hash - 0x7EABA512 ^0xD3B85449
{
	Hash action;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
	{
		func_417(*piParam0, 0, 0, 0);
		return true;
	}

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*piParam0);
		func_417(*piParam0, 4, 0, 0);
		return true;
	}

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*piParam0))
	{
		func_417(*piParam0, 2, 0, 0);
		return false;
	}

	func_417(*piParam0, 1, 0, 0);
	action = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*piParam0);

	if (action == 2113164098 || action == 541670136)
		piParam0->f_3 = 1;

	piParam0->f_1 = *piParam0;
	*piParam0 = -1;
	piParam0->f_2 = 0;
	return true;
}

BOOL func_399(int iParam0) // Position - 0xC540 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
	
		default:
		
	}

	return false;
}

int func_400(int iParam0) // Position - 0xC57F Hash - 0xE34A477A ^0xE34A477A
{
	switch (iParam0)
	{
		case 2:
			return Global_1072759.f_573.f_601;
	
		case 3:
			return Global_1072759.f_573.f_2103;
	
		case 4:
			return Global_1072759.f_573.f_12605;
	
		case 5:
			return Global_1072759.f_573.f_12907;
	
		case 6:
			return Global_1072759.f_573.f_15909;
	
		case 7:
			return Global_1072759.f_573.f_16511;
	
		case 8:
			return Global_1072759.f_573.f_18913;
	
		default:
		
	}

	return -1;
}

void func_401(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0xC615 Hash - 0xF4E2FD3E ^0xF4E2FD3E
{
	if (func_413(*uParam5, *uParam3))
	{
		if (*uParam0 == 0f || *uParam1 < *uParam0)
		{
			*uParam2 = { *uParam3 };
			*uParam0 = *uParam1;
			*uParam4 = *uParam5;
		}
	}

	return;
}

void func_402(var uParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, int iParam5) // Position - 0xC654 Hash - 0xC4B5BA4D ^0x10A22D68
{
	uParam0->f_11[iParam5] = hParam1;
	uParam0->[iParam5 /*3*/] = { uParam2 };
	return;
}

int func_403(int iParam0) // Position - 0xC672 Hash - 0xBCD92AB4 ^0xBCD92AB4
{
	int num;

	if (!func_438(iParam0))
		return 0;

	num = func_439(iParam0);

	if (num != -1)
		return num;
	else
		return func_440(iParam0, true);

	return 0;
}

Vector3 func_404(int iParam0, Hash hParam1) // Position - 0xC6A9 Hash - 0x980CF3F1 ^0x980CF3F1
{
	var unk;

	switch (hParam1)
	{
		case joaat("provision_arrowhead_slate"):
			switch (iParam0)
			{
				case 0:
					unk = { -2120.62f, 71.71207f, 254.9753f };
					break;
			
				case 1:
					unk = { 1201.297f, -2041.166f, 55.00516f };
					break;
			
				case 2:
					unk = { 1242.734f, 1173.516f, 148.6348f };
					break;
			
				case 3:
					unk = { 2408.423f, 1764.503f, 88.656f };
					break;
			
				case 4:
					unk = { -973.079f, 218.101f, 87.932f };
					break;
			
				case 5:
					unk = { 241.777f, 1591.056f, 178.563f };
					break;
			}
			break;
	
		case joaat("provision_arrowhead_bone"):
			switch (iParam0)
			{
				case 0:
					unk = { -3090.208f, -3687.019f, -23.07111f };
					break;
			
				case 1:
					unk = { 331.659f, -751.492f, 41.516f };
					break;
			
				case 2:
					unk = { 1467.294f, -1835.141f, 52.2977f };
					break;
			
				case 3:
					unk = { 431.627f, 2181.339f, 245.228f };
					break;
			
				case 4:
					unk = { -1630.31f, -916.825f, 96.558f };
					break;
			
				case 5:
					unk = { 2732.805f, 1305.355f, 94.425f };
					break;
			}
			break;
	
		case joaat("provision_arrowhead_raw"):
			switch (iParam0)
			{
				case 0:
					unk = { -2688.423f, -1502.831f, 150.2751f };
					break;
			
				case 1:
					unk = { 1090.46f, -30.50565f, 85.73418f };
					break;
			
				case 2:
					unk = { 491.7462f, -308.6388f, 142.6688f };
					break;
			
				case 3:
					unk = { 1451.435f, -357.234f, 79.693f };
					break;
			
				case 4:
					unk = { -964.51f, -1746.746f, 72.566f };
					break;
			
				case 5:
					unk = { 737.965f, 217.404f, 143.854f };
					break;
			}
			break;
	
		case joaat("provision_arrowhead_obsidian"):
			switch (iParam0)
			{
				case 0:
					unk = { 1141.345f, 465.1495f, 95.96226f };
					break;
			
				case 1:
					unk = { -2586.866f, -95.34192f, 167.6172f };
					break;
			
				case 2:
					unk = { -2905.136f, -254.2839f, 185.6743f };
					break;
			
				case 3:
					unk = { 765.732f, 639.022f, 124.101f };
					break;
			
				case 4:
					unk = { 2276.143f, 1061.22f, 77.504f };
					break;
			
				case 5:
					unk = { -1141.282f, -959.976f, 63.03f };
					break;
			}
			break;
	
		case joaat("provision_arrowhead_quartz"):
			switch (iParam0)
			{
				case 0:
					unk = { 2846.721f, 2253.417f, 156.0374f };
					break;
			
				case 1:
					unk = { -1641.062f, 631.366f, 123.972f };
					break;
			
				case 2:
					unk = { -5685.067f, -2757.809f, -17.34713f };
					break;
			
				case 3:
					unk = { -1814.626f, -1612.653f, 104.607f };
					break;
			
				case 4:
					unk = { 1294.231f, -1555.382f, 66.411f };
					break;
			
				case 5:
					unk = { -3992.301f, -3472.408f, 52.659f };
					break;
			}
			break;
	
		case joaat("provision_arrowhead_flint"):
			switch (iParam0)
			{
				case 0:
					unk = { 324.7118f, 1716.88f, 165.6345f };
					break;
			
				case 1:
					unk = { -2138.969f, -1773.034f, 141.357f };
					break;
			
				case 2:
					unk = { 2458.548f, 292.0694f, 69.62054f };
					break;
			
				case 3:
					unk = { -1520.7f, 738.223f, 124.885f };
					break;
			
				case 4:
					unk = { -4072.965f, -2612.864f, -5.672f };
					break;
			
				case 5:
					unk = { 1443.389f, -1949.58f, 51.623f };
					break;
			}
			break;
	
		case joaat("provision_arrowhead_agate"):
			switch (iParam0)
			{
				case 0:
					unk = { -1626.256f, -1440.047f, 81.56577f };
					break;
			
				case 1:
					unk = { 228.4911f, 1905.913f, 205.1248f };
					break;
			
				case 2:
					unk = { -166.4996f, 347.176f, 96.39246f };
					break;
			
				case 3:
					unk = { -2048.924f, -485.327f, 148.617f };
					break;
			
				case 4:
					unk = { 2591.175f, 464.552f, 65.386f };
					break;
			
				case 5:
					unk = { 449.954f, 2139.728f, 242.163f };
					break;
			}
			break;
	
		case joaat("provision_arrowhead_rough"):
			switch (iParam0)
			{
				case 0:
					unk = { -4721.776f, -3225.844f, 8.061125f };
					break;
			
				case 1:
					unk = { 116.6806f, 1217.888f, 183.4647f };
					break;
			
				case 2:
					unk = { -2008.259f, -2782.807f, 69.77032f };
					break;
			
				case 3:
					unk = { -4801.018f, -2393.364f, 6.379f };
					break;
			
				case 4:
					unk = { 1985.262f, -556.278f, 40.807f };
					break;
			
				case 5:
					unk = { -3144.45f, -2651.773f, 10.954f };
					break;
			}
			break;
	
		case joaat("provision_arrowhead_splintered"):
			switch (iParam0)
			{
				case 0:
					unk = { -166.1597f, -164.5237f, 90.37929f };
					break;
			
				case 1:
					unk = { 2535.888f, 700.0389f, 77.22427f };
					break;
			
				case 2:
					unk = { 456.302f, 2192.027f, 244.7186f };
					break;
			
				case 3:
					unk = { -2718.98f, 682.542f, 174.764f };
					break;
			
				case 4:
					unk = { -462.207f, 1427.085f, 206.364f };
					break;
			
				case 5:
					unk = { 2211.003f, -675.961f, 40.775f };
					break;
			}
			break;
	
		case joaat("provision_arrowhead_crude"):
			switch (iParam0)
			{
				case 0:
					unk = { 1797.57f, -820.6117f, 41.44231f };
					break;
			
				case 1:
					unk = { -1549.497f, -914.4499f, 88.37117f };
					break;
			
				case 2:
					unk = { 1210.972f, -935.7455f, 61.7126f };
					break;
			
				case 3:
					unk = { 2910.409f, 1220.405f, 42.791f };
					break;
			
				case 4:
					unk = { -6010.271f, -3099.12f, -1.952f };
					break;
			
				case 5:
					unk = { -2487.932f, -2683.609f, 75.215f };
					break;
			}
			break;
	
		case joaat("provision_arrowhead_chipped"):
			switch (iParam0)
			{
				case 0:
					unk = { 2681.312f, 888.0165f, 88.69837f };
					break;
			
				case 1:
					unk = { -5077.907f, -3758.28f, -4.03334f };
					break;
			
				case 2:
					unk = { -2076.948f, -2018.081f, 95.6292f };
					break;
			
				case 3:
					unk = { 273.126f, 1471.93f, 157.105f };
					break;
			
				case 4:
					unk = { 1856.797f, -1640.871f, 43.837f };
					break;
			
				case 5:
					unk = { -834.325f, 1105.575f, 148.744f };
					break;
			}
			break;
	
		case joaat("provision_arrowhead_feldspar"):
			switch (iParam0)
			{
				case 0:
					unk = { -1327.926f, -2570.111f, 72.97827f };
					break;
			
				case 1:
					unk = { -3738.736f, -2085.723f, -8.071209f };
					break;
			
				case 2:
					unk = { -2416.179f, -1005.542f, 166.8462f };
					break;
			
				case 3:
					unk = { -6387.865f, -3671.32f, -23.469f };
					break;
			
				case 4:
					unk = { 1261.371f, -256.617f, 97.896f };
					break;
			
				case 5:
					unk = { -2201.921f, -1444.722f, 136.539f };
					break;
			}
			break;
	}

	return unk;
}

Vector3 func_405(int iParam0, Hash hParam1) // Position - 0xCF69 Hash - 0x980CF3F1 ^0x980CF3F1
{
	var unk;

	switch (hParam1)
	{
		case joaat("provision_egret_egg"):
			switch (iParam0)
			{
				case 0:
					unk = { 2057.918f, -1722.14f, 43.88942f };
					break;
			
				case 1:
					unk = { 1855.121f, -859.4686f, 45.96879f };
					break;
			
				case 2:
					unk = { 2477.28f, -273.61f, 44.34f };
					break;
			
				case 3:
					unk = { 2336.483f, -853.3739f, 45.38264f };
					break;
			
				case 4:
					unk = { 1924.734f, -1141.323f, 44.74717f };
					break;
			
				case 5:
					unk = { 1853.557f, -351.4071f, 50.09297f };
					break;
			}
			break;
	
		case joaat("provision_duck_egg"):
			switch (iParam0)
			{
				case 0:
					unk = { 130.6175f, 1513.541f, 115.4675f };
					break;
			
				case 1:
					unk = { 2380.566f, 987.6273f, 73.02643f };
					break;
			
				case 2:
					unk = { 2759.191f, 2185.55f, 155.8484f };
					break;
			
				case 3:
					unk = { 1572.564f, 1365.523f, 144.8364f };
					break;
			
				case 4:
					unk = { -2446.152f, -533.0729f, 141.4806f };
					break;
			
				case 5:
					unk = { -2500.409f, -1472.979f, 146.5042f };
					break;
			}
			break;
	
		case joaat("provision_goose_egg"):
			switch (iParam0)
			{
				case 0:
					unk = { -1455.642f, -2012.715f, 40.79536f };
					break;
			
				case 1:
					unk = { 175.0837f, -762.0237f, 40.92589f };
					break;
			
				case 2:
					unk = { 1650.297f, -2080.092f, 41.33918f };
					break;
			
				case 3:
					unk = { -2151.871f, -2033.236f, 55.35887f };
					break;
			
				case 4:
					unk = { -372.8311f, -1101.837f, 41.17361f };
					break;
			
				case 5:
					unk = { 435.17f, -1659.833f, 43.82178f };
					break;
			}
			break;
	
		case joaat("provision_spoonbill_egg"):
			switch (iParam0)
			{
				case 0:
					unk = { 2054.959f, -1424.426f, 48.92442f };
					break;
			
				case 1:
					unk = { 2385.209f, -628.4365f, 49.72212f };
					break;
			
				case 2:
					unk = { 2803.415f, -695.4971f, 45.49643f };
					break;
			
				case 3:
					unk = { 1765.679f, -557.788f, 49.223f };
					break;
			
				case 4:
					unk = { 1569.394f, -913.1165f, 45.72157f };
					break;
			
				case 5:
					unk = { 2004.221f, -1723.626f, 50.89873f };
					break;
			}
			break;
	
		case joaat("provision_heron_egg"):
			switch (iParam0)
			{
				case 0:
					unk = { 2129.335f, -478.5026f, 44.24976f };
					break;
			
				case 1:
					unk = { 2165.205f, -856.9f, 46.1399f };
					break;
			
				case 2:
					unk = { 1721.049f, -998.6505f, 48.03225f };
					break;
			
				case 3:
					unk = { 1936.41f, -1843.55f, 47.92f };
					break;
			
				case 4:
					unk = { 2230.212f, -264.3365f, 45.79628f };
					break;
			
				case 5:
					unk = { 2239.663f, -1140.097f, 46.36992f };
					break;
			}
			break;
	
		case joaat("provision_loon_egg"):
			switch (iParam0)
			{
				case 0:
					unk = { 682.966f, -1866.18f, 43.12862f };
					break;
			
				case 1:
					unk = { -699.7326f, -463.4799f, 40.81263f };
					break;
			
				case 2:
					unk = { -1098.347f, -905.8218f, 44.19538f };
					break;
			
				case 3:
					unk = { -1912.605f, -1097.146f, 74.84635f };
					break;
			
				case 4:
					unk = { -862.9524f, 587.9164f, 58.90303f };
					break;
			
				case 5:
					unk = { 453.1795f, -663.71f, 47.58012f };
					break;
			}
			break;
	
		case joaat("provision_eagle_egg"):
			switch (iParam0)
			{
				case 0:
					unk = { -2220.327f, -555.082f, 151.4888f };
					break;
			
				case 1:
					unk = { -1215.258f, 1370.017f, 260.743f };
					break;
			
				case 2:
					unk = { -2113.571f, -73.96356f, 262.4125f };
					break;
			
				case 3:
					unk = { -984.1674f, 1529.783f, 247.623f };
					break;
			
				case 4:
					unk = { -1513.108f, -340.9661f, 152.7582f };
					break;
			
				case 5:
					unk = { -1955.492f, 2190.889f, 332.6355f };
					break;
			
				case 6:
					unk = { -1170.96f, 1050.89f, 167.97f };
					break;
			
				case 7:
					unk = { -2010.61f, -395.48f, 174.74f };
					break;
			
				case 8:
					unk = { -1930.982f, 1240.447f, 194.9847f };
					break;
			
				case 9:
					unk = { -1875.668f, -241.1899f, 199.1293f };
					break;
			
				case 10:
					unk = { -1183.784f, 2093.181f, 355.679f };
					break;
			
				case 11:
					unk = { -2374.11f, 193.6417f, 211.24f };
					break;
			}
			break;
	
		case joaat("provision_vulture_egg"):
			switch (iParam0)
			{
				case 0:
					unk = { -2916.537f, -2288.44f, 76.43781f };
					break;
			
				case 1:
					unk = { -2054.743f, -1925.456f, 112.2727f };
					break;
			
				case 2:
					unk = { 2653.375f, 1752.763f, 110.4145f };
					break;
			
				case 3:
					unk = { -2531.534f, -2954.918f, 66.75875f };
					break;
			
				case 4:
					unk = { 2719.022f, 2190.373f, 156.71f };
					break;
			
				case 5:
					unk = { 2354.067f, 1451.83f, 142.5797f };
					break;
			}
			break;
	
		case joaat("provision_hawk_egg"):
			switch (iParam0)
			{
				case 0:
					unk = { 1685.95f, 1813.614f, 218.2414f };
					break;
			
				case 1:
					unk = { -1583.697f, 3174.265f, 484.5643f };
					break;
			
				case 2:
					unk = { 813.1831f, 1999.82f, 283.3279f };
					break;
			
				case 3:
					unk = { -1039.653f, 2650.086f, 318.0255f };
					break;
			
				case 4:
					unk = { -215.7416f, 1607.373f, 168.6563f };
					break;
			
				case 5:
					unk = { -1491.561f, 2597.406f, 374.8609f };
					break;
			
				case 6:
					unk = { 1353.112f, 1545.57f, 198.9298f };
					break;
			
				case 7:
					unk = { -712.7252f, 2593.39f, 339.63f };
					break;
			
				case 8:
					unk = { 451.5644f, 1626.011f, 207.8618f };
					break;
			
				case 9:
					unk = { -1336.23f, 2000.95f, 326.51f };
					break;
			
				case 10:
					unk = { 90.35796f, 1705.762f, 187.9509f };
					break;
			
				case 11:
					unk = { -715.788f, 2847.03f, 350.9099f };
					break;
			}
			break;
	}

	return unk;
}

Vector3 func_406(int iParam0, Hash hParam1) // Position - 0xD74E Hash - 0x980CF3F1 ^0x980CF3F1
{
	var unk;

	switch (hParam1)
	{
		case joaat("provision_coin_1800_gld_dlr"):
			switch (iParam0)
			{
				case 0:
					unk = { -1393.007f, 1184.725f, 220.978f };
					break;
			
				case 1:
					unk = { -4244.491f, -3191.862f, 17.72649f };
					break;
			
				case 2:
					unk = { 1192.889f, -1348.479f, 70.41161f };
					break;
			
				case 3:
					unk = { -3898.082f, -3165.799f, -0.558f };
					break;
			
				case 4:
					unk = { 365.79f, -15.661f, 99.122f };
					break;
			
				case 5:
					unk = { -1992.12f, -1036.359f, 73.885f };
					break;
			}
			break;
	
		case joaat("provision_coin_1792_nickel"):
			switch (iParam0)
			{
				case 0:
					unk = { -1788.771f, -581.2818f, 154.9099f };
					break;
			
				case 1:
					unk = { 2535.496f, 1195.557f, 163.4559f };
					break;
			
				case 2:
					unk = { 3139.878f, 1530.139f, 52.69886f };
					break;
			
				case 3:
					unk = { -2269.376f, -1330.475f, 132.516f };
					break;
			
				case 4:
					unk = { -4342.196f, -2604.031f, -1.945f };
					break;
			
				case 5:
					unk = { 1374.679f, -2080.701f, 50.768f };
					break;
			}
			break;
	
		case joaat("provision_coin_1796_hlf_pny"):
			switch (iParam0)
			{
				case 0:
					unk = { -1404.415f, -2665.34f, 41.33462f };
					break;
			
				case 1:
					unk = { -410.9144f, 668.2853f, 113.9756f };
					break;
			
				case 2:
					unk = { -5420.417f, -2975.219f, 7.981212f };
					break;
			
				case 3:
					unk = { -2704.466f, -2387.511f, 43.602f };
					break;
			
				case 4:
					unk = { -3625.301f, -2570.524f, -15.811f };
					break;
			
				case 5:
					unk = { 1948.57f, -679.584f, 40.927f };
					break;
			}
			break;
	
		case joaat("provision_coin_1795_hlf_eag"):
			switch (iParam0)
			{
				case 0:
					unk = { 1473.601f, 331.8847f, 89.07144f };
					break;
			
				case 1:
					unk = { -6234.784f, -3518.823f, -31.67799f };
					break;
			
				case 2:
					unk = { 81.67809f, 447.1742f, 153.211f };
					break;
			
				case 3:
					unk = { -281.84f, 922.422f, 127.207f };
					break;
			
				case 4:
					unk = { 1491.987f, 942.91f, 154.98f };
					break;
			
				case 5:
					unk = { -1261.387f, -1607.831f, 79.704f };
					break;
			}
			break;
	
		case joaat("provision_coin_1797_gld_eag"):
			switch (iParam0)
			{
				case 0:
					unk = { 1268.305f, -386.9097f, 88.47926f };
					break;
			
				case 1:
					unk = { 1957.905f, -159.5148f, 51.77026f };
					break;
			
				case 2:
					unk = { -1648.063f, -2168.614f, 41.694f };
					break;
			
				case 3:
					unk = { 895.89f, -1967.784f, 43.127f };
					break;
			
				case 4:
					unk = { -2459.944f, 841.279f, 141.746f };
					break;
			
				case 5:
					unk = { 2643.864f, -20.404f, 50.152f };
					break;
			}
			break;
	
		case joaat("provision_coin_1792_lib_qtr"):
			switch (iParam0)
			{
				case 0:
					unk = { -5170.19f, -2777.566f, 7.988142f };
					break;
			
				case 1:
					unk = { -371.9685f, -80.23643f, 42.88546f };
					break;
			
				case 2:
					unk = { -254.3018f, 1348.715f, 138.5417f };
					break;
			
				case 3:
					unk = { 1585.462f, -1844.872f, 51.353f };
					break;
			
				case 4:
					unk = { -3287.94f, -2802.297f, -4.167f };
					break;
			
				case 5:
					unk = { 359.265f, 1421.24f, 175.937f };
					break;
			}
			break;
	
		case joaat("provision_coin_1800_hlf_dime"):
			switch (iParam0)
			{
				case 0:
					unk = { -746.9712f, 891.4087f, 107.9984f };
					break;
			
				case 1:
					unk = { 192.283f, -409.8842f, 86.70686f };
					break;
			
				case 2:
					unk = { -2264.846f, -504.1707f, 137.7239f };
					break;
			
				case 3:
					unk = { -562.238f, -453.865f, 79.693f };
					break;
			
				case 4:
					unk = { -2871.289f, -2024.989f, 77.634f };
					break;
			
				case 5:
					unk = { -4331.344f, -2452.329f, 15.168f };
					break;
			}
			break;
	
		case joaat("provision_coin_1789_pny"):
			switch (iParam0)
			{
				case 0:
					unk = { 2868.94f, 1774.43f, 134.0816f };
					break;
			
				case 1:
					unk = { 1639.768f, 833.7402f, 143.8371f };
					break;
			
				case 2:
					unk = { 1196.359f, -570.8525f, 67.2235f };
					break;
			
				case 3:
					unk = { -5544.435f, -2897.414f, -4.08f };
					break;
			
				case 4:
					unk = { 2280.038f, -539.038f, 40.566f };
					break;
			
				case 5:
					unk = { -537.863f, 2671.4f, 317.747f };
					break;
			}
			break;
	
		case joaat("provision_coin_1800_gld_qtr"):
			switch (iParam0)
			{
				case 0:
					unk = { -1938.051f, 462.7608f, 115.6562f };
					break;
			
				case 1:
					unk = { -2649.848f, -2979.265f, 69.05343f };
					break;
			
				case 2:
					unk = { 1844.446f, -676.2562f, 40.97815f };
					break;
			
				case 3:
					unk = { -2261.235f, -1921.091f, 115.661f };
					break;
			
				case 4:
					unk = { -1852.999f, -398.465f, 168.327f };
					break;
			
				case 5:
					unk = { 647.94f, -563.003f, 66.216f };
					break;
			}
			break;
	
		case joaat("provision_coin_1798_slv_dlr"):
			switch (iParam0)
			{
				case 0:
					unk = { -3207.183f, -3221.716f, -1.947383f };
					break;
			
				case 1:
					unk = { 2110.998f, -1949.03f, 40.62194f };
					break;
			
				case 2:
					unk = { 2428.506f, 579.6636f, 67.13865f };
					break;
			
				case 3:
					unk = { -1673.309f, -336.558f, 173.006f };
					break;
			
				case 4:
					unk = { -5387.589f, -3660.634f, -23.076f };
					break;
			
				case 5:
					unk = { -3711.403f, -3618.255f, 41.47f };
					break;
			}
			break;
	
		case joaat("provision_coin_1787_cent_tkn"):
			switch (iParam0)
			{
				case 0:
					unk = { 602.0844f, 550.2792f, 111.3233f };
					break;
			
				case 1:
					unk = { 434.1988f, 1643.844f, 196.8673f };
					break;
			
				case 2:
					unk = { -1705.896f, -1302.72f, 92.48844f };
					break;
			
				case 3:
					unk = { -1372.737f, -2387.345f, 41.15795f };
					break;
			
				case 4:
					unk = { 2107.461f, -1276.037f, 41.274f };
					break;
			
				case 5:
					unk = { -2195.814f, 752.0993f, 122.809f };
					break;
			}
			break;
	
		case joaat("provision_coin_1794_slv_dlr"):
			switch (iParam0)
			{
				case 0:
					unk = { 2497.531f, -419.3243f, 40.53325f };
					break;
			
				case 1:
					unk = { -2350.628f, 112.6509f, 216.7536f };
					break;
			
				case 2:
					unk = { -3545.135f, -3007.878f, 10.43144f };
					break;
			
				case 3:
					unk = { 2690.942f, 2029.559f, 158.495f };
					break;
			
				case 4:
					unk = { 828.481f, -1553.911f, 43.209f };
					break;
			
				case 5:
					unk = { -1993.648f, -1627.849f, 116.137f };
					break;
			}
			break;
	
		case joaat("provision_coin_1700_ny_tkn"):
			switch (iParam0)
			{
				case 0:
					unk = { 2384.636f, 702.7831f, 68.47878f };
					break;
			
				case 1:
					unk = { 1413.694f, -1774.543f, 65.75599f };
					break;
			
				case 2:
					unk = { -2715.088f, 716.8932f, 170.1759f };
					break;
			
				case 3:
					unk = { -4687.155f, -3742.616f, 9.319794f };
					break;
			
				case 4:
					unk = { 2305.91f, 2000.815f, 179.0962f };
					break;
			
				case 5:
					unk = { 2465.432f, -991.1915f, 40.44379f };
					break;
			}
			break;
	
		case joaat("provision_coin_1800_five_dlr"):
			switch (iParam0)
			{
				case 0:
					unk = { 999.2269f, -943.6021f, 61.59056f };
					break;
			
				case 1:
					unk = { -1036.054f, -1663.117f, 80.65519f };
					break;
			
				case 2:
					unk = { 831.3604f, 1925.699f, 258.2985f };
					break;
			
				case 3:
					unk = { -1645.33f, -1340.855f, 82.968f };
					break;
			
				case 4:
					unk = { 371.924f, 1069.85f, 189.326f };
					break;
			
				case 5:
					unk = { 1982.666f, 1795.47f, 191.102f };
					break;
			}
			break;
	
		case joaat("provision_coin_1792_qtr"):
			switch (iParam0)
			{
				case 0:
					unk = { 129.2208f, 1003.35f, 208.2303f };
					break;
			
				case 1:
					unk = { -395.5179f, 1753.13f, 215.2918f };
					break;
			
				case 2:
					unk = { 922.476f, 271.5775f, 115.754f };
					break;
			
				case 3:
					unk = { 2622.302f, -651.247f, 42.497f };
					break;
			
				case 4:
					unk = { -1649.375f, -1717.725f, 82.658f };
					break;
			
				case 5:
					unk = { 2718.649f, 706.791f, 78.061f };
					break;
			}
			break;
	}

	return unk;
}

Vector3 func_407(int iParam0, Hash hParam1) // Position - 0xE239 Hash - 0x980CF3F1 ^0x980CF3F1
{
	var unk;

	switch (hParam1)
	{
		case joaat("provision_hrlm_hairpin_ivory"):
			switch (iParam0)
			{
				case 0:
					unk = { 1464.331f, 813.4755f, 100.369f };
					break;
			
				case 1:
					unk = { 2777.36f, 535.0708f, 67.25923f };
					break;
			
				case 2:
					unk = { 2474.075f, -1212.954f, 48.088f };
					break;
			
				case 3:
					unk = { 2989.488f, 2184.499f, 166.8642f };
					break;
			
				case 4:
					unk = { 1927.38f, 1964.747f, 262.468f };
					break;
			
				case 5:
					unk = { 2638f, -1204.05f, 53.20464f };
					break;
			}
			break;
	
		case joaat("provision_hrlm_brush_rosewood"):
			switch (iParam0)
			{
				case 0:
					unk = { 1119.399f, -1985.255f, 55.173f };
					break;
			
				case 1:
					unk = { 1114.132f, 494.6769f, 97.36f };
					break;
			
				case 2:
					unk = { 2947.771f, 1329.517f, 43.72f };
					break;
			
				case 3:
					unk = { 1246.032f, -1319.193f, 76.11919f };
					break;
			
				case 4:
					unk = { 1709.548f, -1006.039f, 42.95497f };
					break;
			
				case 5:
					unk = { -1354.787f, 2444.092f, 308.264f };
					break;
			}
			break;
	
		case joaat("provision_hrlm_comb_tortoiseshell"):
			switch (iParam0)
			{
				case 0:
					unk = { 1373.292f, -878.3732f, 70.168f };
					break;
			
				case 1:
					unk = { 2498.121f, -423.8156f, 44.15034f };
					break;
			
				case 2:
					unk = { -5548.973f, -2399.283f, -8.260815f };
					break;
			
				case 3:
					unk = { 2658.711f, -1296.561f, 50.89073f };
					break;
			
				case 4:
					unk = { -1963.057f, 2156.889f, 327.6145f };
					break;
			
				case 5:
					unk = { 517.873f, 566.1005f, 109.408f };
					break;
			}
			break;
	
		case joaat("provision_hrlm_comb_ivory"):
			switch (iParam0)
			{
				case 0:
					unk = { -3697.792f, -2602.399f, -10.498f };
					break;
			
				case 1:
					unk = { -861.1652f, -1281.893f, 43.37f };
					break;
			
				case 2:
					unk = { 2310.05f, -327.5573f, 41.67405f };
					break;
			
				case 3:
					unk = { -805.3663f, -1373.019f, 42.74774f };
					break;
			
				case 4:
					unk = { 2557.495f, -919.4724f, 42.46076f };
					break;
			
				case 5:
					unk = { 2945.906f, 1331.703f, 44.25066f };
					break;
			}
			break;
	
		case joaat("provision_hrlm_brush_horsehair"):
			switch (iParam0)
			{
				case 0:
					unk = { -825.8105f, -1322.975f, 47.703f };
					break;
			
				case 1:
					unk = { 2989.978f, 2194.683f, 166.21f };
					break;
			
				case 2:
					unk = { 2659.991f, -963.4542f, 44.43f };
					break;
			
				case 3:
					unk = { -3617.383f, -2620.49f, -14.34254f };
					break;
			
				case 4:
					unk = { 1183.269f, -99.6868f, 94.54f };
					break;
			
				case 5:
					unk = { 3029.329f, 1781.402f, 84.215f };
					break;
			}
			break;
	
		case joaat("provision_hrlm_brush_boar"):
			switch (iParam0)
			{
				case 0:
					unk = { 2794.538f, 855.7374f, 72.215f };
					break;
			
				case 1:
					unk = { -4366.604f, -2417.883f, 19.56f };
					break;
			
				case 2:
					unk = { -5853.86f, -3743.685f, -25.09f };
					break;
			
				case 3:
					unk = { -292.6273f, 863.1826f, 119.9146f };
					break;
			
				case 4:
					unk = { 2256.442f, -793.3142f, 44.26483f };
					break;
			
				case 5:
					unk = { -1026.682f, -1628.977f, 78.407f };
					break;
			}
			break;
	
		case joaat("provision_hrlm_brush_rosewood_ng"):
			switch (iParam0)
			{
				case 0:
					unk = { -323.1665f, 759.1418f, 117.515f };
					break;
			
				case 1:
					unk = { 1772.645f, -1359.118f, 44.99425f };
					break;
			
				case 2:
					unk = { 1331.819f, -1373.854f, 79.94992f };
					break;
			
				case 3:
					unk = { 1984.691f, 1197.64f, 171.467f };
					break;
			
				case 4:
					unk = { 2337.355f, -1199.357f, 44.59311f };
					break;
			
				case 5:
					unk = { 1370.993f, -879.3163f, 69.373f };
					break;
			}
			break;
	
		case joaat("provision_hrlm_hairpin_jade"):
			switch (iParam0)
			{
				case 0:
					unk = { 2130.675f, 150.517f, 74.84375f };
					break;
			
				case 1:
					unk = { -4583.002f, -2906.29f, -18.69263f };
					break;
			
				case 2:
					unk = { -936.1354f, -1283.669f, 50.2256f };
					break;
			
				case 3:
					unk = { 2588.217f, 835.753f, 82.329f };
					break;
			
				case 4:
					unk = { 1963.121f, -1217.119f, 41.096f };
					break;
			
				case 5:
					unk = { 1004.484f, -1778.697f, 52.49139f };
					break;
			}
			break;
	
		case joaat("provision_hrlm_comb_cherrywood"):
			switch (iParam0)
			{
				case 0:
					unk = { 2638.189f, -1220.527f, 59.64f };
					break;
			
				case 1:
					unk = { 1019.273f, -1764.641f, 51.246f };
					break;
			
				case 2:
					unk = { 774.061f, 844.8143f, 118.123f };
					break;
			
				case 3:
					unk = { -325.2552f, 776.0793f, 121.4301f };
					break;
			
				case 4:
					unk = { -4786.58f, -2729.231f, -14.37767f };
					break;
			
				case 5:
					unk = { 2453.964f, -1290.005f, 45.63f };
					break;
			}
			break;
	
		case joaat("provision_hrlm_brush_ebony"):
			switch (iParam0)
			{
				case 0:
					unk = { 2359.031f, -1222.644f, 46.655f };
					break;
			
				case 1:
					unk = { 1133.524f, -981.9582f, 69.475f };
					break;
			
				case 2:
					unk = { -757.2515f, -1457.008f, 55.58f };
					break;
			
				case 3:
					unk = { 2406.756f, -1060.379f, 43.44f };
					break;
			
				case 4:
					unk = { -881.9086f, -1647.193f, 68.594f };
					break;
			
				case 5:
					unk = { -818.7466f, 356.2394f, 98.16889f };
					break;
			}
			break;
	
		case joaat("provision_hrlm_hairpin_metal"):
			switch (iParam0)
			{
				case 0:
					unk = { -4849.342f, -2670.424f, -13.5677f };
					break;
			
				case 1:
					unk = { 2882.798f, -241.9108f, 41.67151f };
					break;
			
				case 2:
					unk = { 2535.601f, 2287.424f, 175.5534f };
					break;
			
				case 3:
					unk = { 2952.059f, 578.021f, 43.567f };
					break;
			
				case 4:
					unk = { -5577.372f, -2577.874f, -9.463f };
					break;
			
				case 5:
					unk = { -1500.475f, -784.755f, 102.998f };
					break;
			}
			break;
	
		case joaat("provision_hrlm_hairpin_wooden"):
			switch (iParam0)
			{
				case 0:
					unk = { -2530.832f, 1161.717f, 223.6726f };
					break;
			
				case 1:
					unk = { -608.9261f, 515.7279f, 95.39239f };
					break;
			
				case 2:
					unk = { -2035.53f, -1890.794f, 109.1178f };
					break;
			
				case 3:
					unk = { 2330.359f, -1358.269f, 44.966f };
					break;
			
				case 4:
					unk = { 1374.128f, -1411.036f, 78.239f };
					break;
			
				case 5:
					unk = { 3015.904f, 1761.071f, 82.617f };
					break;
			}
			break;
	
		case joaat("provision_hrlm_comb_boxwood"):
			switch (iParam0)
			{
				case 0:
					unk = { 2834.479f, 1686.983f, 129.74f };
					break;
			
				case 1:
					unk = { -326.9715f, 758.7587f, 121.685f };
					break;
			
				case 2:
					unk = { -815.4717f, 355.9247f, 97.282f };
					break;
			
				case 3:
					unk = { 2822.545f, -1229.885f, 46.63329f };
					break;
			
				case 4:
					unk = { 901.0944f, 264.487f, 116.0603f };
					break;
			
				case 5:
					unk = { -1812.807f, -368.4038f, 165.69f };
					break;
			}
			break;
	
		case joaat("provision_hrlm_brush_goathair"):
			switch (iParam0)
			{
				case 0:
					unk = { -1819.679f, -366.3559f, 166.325f };
					break;
			
				case 1:
					unk = { -1352.955f, -2297.988f, 39.36f };
					break;
			
				case 2:
					unk = { 2948.272f, 536.8262f, 49.64f };
					break;
			
				case 3:
					unk = { -5624.502f, -2946.631f, 6.545f };
					break;
			
				case 4:
					unk = { 1332.225f, -1375.457f, 79.685f };
					break;
			
				case 5:
					unk = { 2222.584f, -769.3432f, 43.00125f };
					break;
			}
			break;
	
		case joaat("provision_hrlm_hairpin_ebony"):
			switch (iParam0)
			{
				case 0:
					unk = { 411.5402f, 2245.408f, 251.6545f };
					break;
			
				case 1:
					unk = { 2409.379f, -1094.746f, 46.877f };
					break;
			
				case 2:
					unk = { 1461.757f, -1361.581f, 77.8037f };
					break;
			
				case 3:
					unk = { -4787.916f, -2751.693f, -15.705f };
					break;
			
				case 4:
					unk = { 2063.961f, -854.2643f, 43.15271f };
					break;
			
				case 5:
					unk = { -315.609f, -108.42f, 48.217f };
					break;
			}
			break;
	}

	return unk;
}

Vector3 func_408(int iParam0, Hash hParam1) // Position - 0xED24 Hash - 0x980CF3F1 ^0x980CF3F1
{
	var unk;

	switch (hParam1)
	{
		case joaat("consumable_carib_rum"):
			switch (iParam0)
			{
				case 0:
					unk = { -4185.033f, -2504.018f, 2.03f };
					break;
			
				case 1:
					unk = { -156.9135f, 1489.64f, 115.954f };
					break;
			
				case 2:
					unk = { -1350.047f, 2435.303f, 307.533f };
					break;
			
				case 3:
					unk = { 3005.017f, 478.9952f, 44.30219f };
					break;
			
				case 4:
					unk = { -852.3582f, -1223.754f, 43.45f };
					break;
			
				case 5:
					unk = { 2704.826f, 436.4368f, 87.14f };
					break;
			}
			break;
	
		case joaat("consumable_cognac"):
			switch (iParam0)
			{
				case 0:
					unk = { 2005.196f, -1606.981f, 40.81687f };
					break;
			
				case 1:
					unk = { -342.7149f, -154.2104f, 50.08184f };
					break;
			
				case 2:
					unk = { 2784.679f, 531.0778f, 70.39831f };
					break;
			
				case 3:
					unk = { -1892.469f, 1334.107f, 203.1187f };
					break;
			
				case 4:
					unk = { -4368.796f, -2414.692f, 19.495f };
					break;
			
				case 5:
					unk = { 1622.351f, -362.5829f, 76.39752f };
					break;
			}
			break;
	
		case joaat("consumable_londry_gin"):
			switch (iParam0)
			{
				case 0:
					unk = { 401.546f, 888.0118f, 153.86f };
					break;
			
				case 1:
					unk = { 3036.985f, 432.5538f, 60.047f };
					break;
			
				case 2:
					unk = { 1004.679f, -1765.193f, 47.386f };
					break;
			
				case 3:
					unk = { -3548.462f, -3007.078f, 11.10074f };
					break;
			
				case 4:
					unk = { -2238.278f, 734.3409f, 135.314f };
					break;
			
				case 5:
					unk = { 2197.229f, -1504.087f, 45.872f };
					break;
			}
			break;
	
		case joaat("consumable_tenn_whiskey"):
			switch (iParam0)
			{
				case 0:
					unk = { -1982.173f, -1668.795f, 117.2746f };
					break;
			
				case 1:
					unk = { 1320.882f, -2283.563f, 49.64003f };
					break;
			
				case 2:
					unk = { 223.8315f, 985.9778f, 190.6785f };
					break;
			
				case 3:
					unk = { 1450.358f, 369.3219f, 89.52037f };
					break;
			
				case 4:
					unk = { 2329.757f, -1514.801f, 42.058f };
					break;
			
				case 5:
					unk = { -3599.471f, -2645.779f, -12.37373f };
					break;
			}
			break;
	
		case joaat("consumable_irish_whiskey"):
			switch (iParam0)
			{
				case 0:
					unk = { -2459.279f, 843.0058f, 146.1292f };
					break;
			
				case 1:
					unk = { 2368.739f, -859.4152f, 42.82577f };
					break;
			
				case 2:
					unk = { 2689.612f, -1170.965f, 55.565f };
					break;
			
				case 3:
					unk = { 2153.209f, -1647.306f, 40.60719f };
					break;
			
				case 4:
					unk = { 609.4552f, -142.6026f, 144.8148f };
					break;
			
				case 5:
					unk = { -1493.7f, 1246.622f, 317.667f };
					break;
			}
			break;
	
		case joaat("consumable_scotch_whiskey"):
			switch (iParam0)
			{
				case 0:
					unk = { 402.3609f, -1257.529f, 40.7177f };
					break;
			
				case 1:
					unk = { -6049.142f, -3254.608f, -14.27233f };
					break;
			
				case 2:
					unk = { 1706.455f, -1003.528f, 43.2974f };
					break;
			
				case 3:
					unk = { -5198.34f, -2093.827f, 12.318f };
					break;
			
				case 4:
					unk = { 756.4769f, -976.1186f, 48.7024f };
					break;
			
				case 5:
					unk = { 2872.421f, -258.6376f, 41.34779f };
					break;
			}
			break;
	
		case joaat("consumable_cyprus_brandy"):
			switch (iParam0)
			{
				case 0:
					unk = { 2701.95f, -1060.224f, 47.778f };
					break;
			
				case 1:
					unk = { -1162.748f, -1941.539f, 41.755f };
					break;
			
				case 2:
					unk = { -3830.432f, -3176.455f, -12.915f };
					break;
			
				case 3:
					unk = { -5393.608f, -3665.479f, -24.45832f };
					break;
			
				case 4:
					unk = { 2522.567f, 2300.74f, 192.7359f };
					break;
			
				case 5:
					unk = { -2368.588f, 473.4166f, 132.0141f };
					break;
			}
			break;
	
		case joaat("consumable_plymouth_gin"):
			switch (iParam0)
			{
				case 0:
					unk = { 2639.127f, -0.559658f, 51.19f };
					break;
			
				case 1:
					unk = { 1938.338f, 1948.734f, 265.1676f };
					break;
			
				case 2:
					unk = { -2844.929f, 142.047f, 183.665f };
					break;
			
				case 3:
					unk = { -1807.661f, -405.8664f, 152.926f };
					break;
			
				case 4:
					unk = { 2827.936f, 276.3889f, 47.178f };
					break;
			
				case 5:
					unk = { -239.8812f, 771.0339f, 117.5361f };
					break;
			}
			break;
	
		case joaat("consumable_oldtom_gin"):
			switch (iParam0)
			{
				case 0:
					unk = { 1877.212f, -739.4555f, 42.63802f };
					break;
			
				case 1:
					unk = { 2237.905f, -145.7879f, 46.67f };
					break;
			
				case 2:
					unk = { -2582.484f, -1381.714f, 147.0984f };
					break;
			
				case 3:
					unk = { -720.3767f, 925.5535f, 116.076f };
					break;
			
				case 4:
					unk = { -5962.709f, -3241.012f, -21.635f };
					break;
			
				case 5:
					unk = { 2904.69f, 1377.523f, 53.61996f };
					break;
			}
			break;
	}

	return unk;
}

Vector3 func_409(int iParam0, Hash hParam1) // Position - 0xF3B9 Hash - 0x980CF3F1 ^0x980CF3F1
{
	var unk;

	switch (hParam1)
	{
		case joaat("document_card_ten_pentacles"):
			switch (iParam0)
			{
				case 0:
					unk = { -3870.449f, -3169.91f, -13.01f };
					break;
			
				case 1:
					unk = { 1372.678f, -874.9531f, 70.617f };
					break;
			
				case 2:
					unk = { 2466.088f, 277.0007f, 78.516f };
					break;
			
				case 3:
					unk = { 1117.4f, -1986.08f, 54.38f };
					break;
			
				case 4:
					unk = { 2818.652f, -1107.754f, 45.89925f };
					break;
			
				case 5:
					unk = { -248.1706f, 957.9525f, 138.105f };
					break;
			}
			break;
	
		case joaat("document_card_king_swords"):
			switch (iParam0)
			{
				case 0:
					unk = { 2634.352f, 1700.587f, 115.705f };
					break;
			
				case 1:
					unk = { -5547.786f, -2398.16f, -9.09f };
					break;
			
				case 2:
					unk = { 2585.521f, -1011.535f, 44.741f };
					break;
			
				case 3:
					unk = { 1705.205f, -1005.103f, 43.291f };
					break;
			
				case 4:
					unk = { 727.2112f, -473.8823f, 77.13835f };
					break;
			
				case 5:
					unk = { 2312.604f, 1454.129f, 83.25579f };
					break;
			}
			break;
	
		case joaat("document_card_knight_swords"):
			switch (iParam0)
			{
				case 0:
					unk = { 1333.293f, -1376.881f, 84.072f };
					break;
			
				case 1:
					unk = { 2951.417f, -1237.773f, 41.29379f };
					break;
			
				case 2:
					unk = { -5529.383f, -2950.009f, 3.285f };
					break;
			
				case 3:
					unk = { 2090.067f, -1816.521f, 42.725f };
					break;
			
				case 4:
					unk = { -1090.415f, -573.9154f, 85.344f };
					break;
			
				case 5:
					unk = { -1347.56f, 2403.389f, 306.888f };
					break;
			}
			break;
	
		case joaat("document_card_queen_cups"):
			switch (iParam0)
			{
				case 0:
					unk = { 1825.769f, -1202.711f, 41.96914f };
					break;
			
				case 1:
					unk = { -5982.722f, -3165.576f, -26.807f };
					break;
			
				case 2:
					unk = { 1467.309f, 810.6748f, 100.721f };
					break;
			
				case 3:
					unk = { 1373.336f, 357.3541f, 87.525f };
					break;
			
				case 4:
					unk = { 2827.736f, 279.6334f, 50.85627f };
					break;
			
				case 5:
					unk = { 1780.932f, -472.4116f, 45.54533f };
					break;
			}
			break;
	
		case joaat("document_card_six_swords"):
			switch (iParam0)
			{
				case 0:
					unk = { 2150.482f, -641.6266f, 42.258f };
					break;
			
				case 1:
					unk = { 1452.888f, 288.4397f, 103.551f };
					break;
			
				case 2:
					unk = { -36.04559f, 1216.432f, 172.529f };
					break;
			
				case 3:
					unk = { 1708.568f, -407.2771f, 49.432f };
					break;
			
				case 4:
					unk = { -2182.214f, 721.0881f, 125.654f };
					break;
			
				case 5:
					unk = { 1898.859f, -1872.568f, 46.79531f };
					break;
			}
			break;
	
		case joaat("document_card_five_wands"):
			switch (iParam0)
			{
				case 0:
					unk = { 225.7984f, 988.1877f, 190.999f };
					break;
			
				case 1:
					unk = { 1321.554f, -1137.092f, 81.967f };
					break;
			
				case 2:
					unk = { -3321.853f, -2872.174f, -6.147f };
					break;
			
				case 3:
					unk = { -25.9034f, 1222.207f, 172.2385f };
					break;
			
				case 4:
					unk = { -1150.443f, -1918.312f, 42.32f };
					break;
			
				case 5:
					unk = { -1895.564f, 1330.18f, 200.1581f };
					break;
			}
			break;
	
		case joaat("document_card_queen_pentacles"):
			switch (iParam0)
			{
				case 0:
					unk = { 3027.182f, 1776.44f, 83.926f };
					break;
			
				case 1:
					unk = { -5512.32f, -2880.17f, -3.84f };
					break;
			
				case 2:
					unk = { -1810.387f, -353.6751f, 160.907f };
					break;
			
				case 3:
					unk = { 554.2538f, 568.2386f, 116.645f };
					break;
			
				case 4:
					unk = { -5948.872f, -3267.162f, -21.71592f };
					break;
			
				case 5:
					unk = { 2858.646f, -1272.893f, 49.91f };
					break;
			}
			break;
	
		case joaat("document_card_seven_pentacles"):
			switch (iParam0)
			{
				case 0:
					unk = { -768.07f, -1274.364f, 44.197f };
					break;
			
				case 1:
					unk = { 1833.804f, -1423.065f, 43.601f };
					break;
			
				case 2:
					unk = { -1424.302f, -2686.436f, 40.842f };
					break;
			
				case 3:
					unk = { 2541.009f, -1456.998f, 46.277f };
					break;
			
				case 4:
					unk = { -253.5445f, 638.9977f, 117.744f };
					break;
			
				case 5:
					unk = { -5515.065f, -2919.768f, 1.611f };
					break;
			}
			break;
	
		case joaat("document_card_ace_wands"):
			switch (iParam0)
			{
				case 0:
					unk = { 2507.901f, 2288.05f, 177.1559f };
					break;
			
				case 1:
					unk = { -531.5649f, 2671.969f, 319.243f };
					break;
			
				case 2:
					unk = { 1022.043f, -1769.855f, 48.084f };
					break;
			
				case 3:
					unk = { -2217.574f, 726.6389f, 127.5132f };
					break;
			
				case 4:
					unk = { 1751.351f, -411.8749f, 48.358f };
					break;
			
				case 5:
					unk = { -1454.006f, -2295.404f, 43.308f };
					break;
			}
			break;
	
		case joaat("document_card_five_cups"):
			switch (iParam0)
			{
				case 0:
					unk = { 1897.236f, -736.8479f, 42.306f };
					break;
			
				case 1:
					unk = { -791.3267f, -1356.294f, 51.668f };
					break;
			
				case 2:
					unk = { -1094.955f, -570.4799f, 82.1826f };
					break;
			
				case 3:
					unk = { 2739.444f, 1351.561f, 67.87411f };
					break;
			
				case 4:
					unk = { 2815.994f, -1409.566f, 44.84941f };
					break;
			
				case 5:
					unk = { 900.5817f, -1793.154f, 42.88783f };
					break;
			}
			break;
	
		case joaat("document_card_two_swords"):
			switch (iParam0)
			{
				case 0:
					unk = { -4361.989f, -3076.853f, -9.959f };
					break;
			
				case 1:
					unk = { 2284.664f, -763.9371f, 41.677f };
					break;
			
				case 2:
					unk = { -876.7333f, -1418.467f, 44.945f };
					break;
			
				case 3:
					unk = { 2777.354f, -1044.44f, 46.328f };
					break;
			
				case 4:
					unk = { -242.144f, 768.4951f, 117.886f };
					break;
			
				case 5:
					unk = { -5990.474f, -3212.507f, -14.609f };
					break;
			}
			break;
	
		case joaat("document_card_page_swords"):
			switch (iParam0)
			{
				case 0:
					unk = { 1899.332f, 295.5579f, 76.264f };
					break;
			
				case 1:
					unk = { 600.3424f, 568.1143f, 111.213f };
					break;
			
				case 2:
					unk = { -672.7397f, 1033.106f, 134.759f };
					break;
			
				case 3:
					unk = { 3034.291f, 1779.221f, 83.32f };
					break;
			
				case 4:
					unk = { -1880.284f, 1318.582f, 201.2222f };
					break;
			
				case 5:
					unk = { 458.9841f, 671.9208f, 116.7326f };
					break;
			}
			break;
	
		case joaat("document_card_two_cups"):
			switch (iParam0)
			{
				case 0:
					unk = { 506.6608f, 1766.462f, 182.225f };
					break;
			
				case 1:
					unk = { -2370.792f, 470.3645f, 131.718f };
					break;
			
				case 2:
					unk = { 980.776f, -2016.561f, 46.486f };
					break;
			
				case 3:
					unk = { -172.0568f, 631.8036f, 113.4876f };
					break;
			
				case 4:
					unk = { -5422.808f, -2971.498f, 12.298f };
					break;
			
				case 5:
					unk = { 2977.604f, 1316.154f, 43.828f };
					break;
			}
			break;
	
		case joaat("document_card_eight_cups"):
			switch (iParam0)
			{
				case 0:
					unk = { -3666.746f, -2569.831f, -13.43366f };
					break;
			
				case 1:
					unk = { 2501.691f, 818.5446f, 71.632f };
					break;
			
				case 2:
					unk = { -575.309f, 2695.187f, 320.2f };
					break;
			
				case 3:
					unk = { 2117.172f, -597.3241f, 42.401f };
					break;
			
				case 4:
					unk = { -1395.294f, -2346.622f, 44.987f };
					break;
			
				case 5:
					unk = { 3034.11f, 432.3413f, 51.154f };
					break;
			}
			break;
	
		case joaat("document_card_two_wands"):
			switch (iParam0)
			{
				case 0:
					unk = { -5621.368f, -2941.645f, 6.196f };
					break;
			
				case 1:
					unk = { -691.7759f, -1245.418f, 43.18266f };
					break;
			
				case 2:
					unk = { 1424.569f, -1144.531f, 75.435f };
					break;
			
				case 3:
					unk = { 1839.385f, -1275.077f, 43.297f };
					break;
			
				case 4:
					unk = { 2279.529f, 1487.438f, 83.47887f };
					break;
			
				case 5:
					unk = { 1931.983f, 1945.649f, 265.9054f };
					break;
			}
			break;
	
		case joaat("document_card_four_pentacles"):
			switch (iParam0)
			{
				case 0:
					unk = { 1180.219f, -102.3198f, 94.513f };
					break;
			
				case 1:
					unk = { 2753.752f, -1285.876f, 47.905f };
					break;
			
				case 2:
					unk = { -2094.373f, -1900.385f, 114.15f };
					break;
			
				case 3:
					unk = { -420.2359f, 1735.101f, 216.5775f };
					break;
			
				case 4:
					unk = { 2997.642f, 485.2014f, 42.016f };
					break;
			
				case 5:
					unk = { 894.0088f, 266.3849f, 115.945f };
					break;
			}
			break;
	
		case joaat("document_card_ten_wands"):
			switch (iParam0)
			{
				case 0:
					unk = { 1585.455f, -732.2845f, 42.3866f };
					break;
			
				case 1:
					unk = { 2482.621f, -1303.083f, 48.68f };
					break;
			
				case 2:
					unk = { 2017.862f, 603.5269f, 160.514f };
					break;
			
				case 3:
					unk = { 1270.417f, -403.1694f, 97.04227f };
					break;
			
				case 4:
					unk = { 2883.358f, -253.6491f, 42.831f };
					break;
			
				case 5:
					unk = { 2524.72f, 2286.114f, 177.152f };
					break;
			}
			break;
	
		case joaat("document_card_six_wands"):
			switch (iParam0)
			{
				case 0:
					unk = { -1981.887f, -1670.349f, 119.02f };
					break;
			
				case 1:
					unk = { 2797.684f, -1160.63f, 47.972f };
					break;
			
				case 2:
					unk = { -323.7289f, -362.4248f, 88.009f };
					break;
			
				case 3:
					unk = { -324.8878f, 763.9997f, 117.938f };
					break;
			
				case 4:
					unk = { 2399.137f, -998.0281f, 44.005f };
					break;
			
				case 5:
					unk = { 2850.777f, 1384.421f, 68.60077f };
					break;
			}
			break;
	
		case joaat("document_card_six_cups"):
			switch (iParam0)
			{
				case 0:
					unk = { 2856.656f, 1339.221f, 64.69f };
					break;
			
				case 1:
					unk = { -5591.378f, -3323.73f, -22.117f };
					break;
			
				case 2:
					unk = { -1622.703f, -877.8527f, 89.788f };
					break;
			
				case 3:
					unk = { 1376.266f, -1315.819f, 77.12f };
					break;
			
				case 4:
					unk = { 1748.228f, -1320.188f, 44.236f };
					break;
			
				case 5:
					unk = { 590.6957f, 643.2216f, 131.0161f };
					break;
			}
			break;
	
		case joaat("document_card_two_pentacles"):
			switch (iParam0)
			{
				case 0:
					unk = { -2261.507f, 379.8123f, 176.935f };
					break;
			
				case 1:
					unk = { 876.3088f, -1930.418f, 46.505f };
					break;
			
				case 2:
					unk = { -3590.551f, -2610.387f, -15.073f };
					break;
			
				case 3:
					unk = { -1976.613f, -1651.554f, 116.9042f };
					break;
			
				case 4:
					unk = { 1310.683f, -1354.187f, 77.755f };
					break;
			
				case 5:
					unk = { -1424.709f, -2193.708f, 42.745f };
					break;
			}
			break;
	
		case joaat("document_card_nine_wands"):
			switch (iParam0)
			{
				case 0:
					unk = { 2724.203f, 1403.457f, 68.73445f };
					break;
			
				case 1:
					unk = { -2312.505f, -483.5394f, 144.9906f };
					break;
			
				case 2:
					unk = { 728.6371f, -466.6955f, 84f };
					break;
			
				case 3:
					unk = { -5201.147f, -3438.431f, -10.41009f };
					break;
			
				case 4:
					unk = { 2497.068f, -421.6676f, 44.184f };
					break;
			
				case 5:
					unk = { 1585.105f, -1845.161f, 58.605f };
					break;
			}
			break;
	
		case joaat("document_card_seven_swords"):
			switch (iParam0)
			{
				case 0:
					unk = { 487.1789f, 563.5685f, 111.264f };
					break;
			
				case 1:
					unk = { -1858.694f, -1728.357f, 108.979f };
					break;
			
				case 2:
					unk = { -1200.4f, -1951.404f, 43.37f };
					break;
			
				case 3:
					unk = { 2824.703f, 276.2172f, 48.585f };
					break;
			
				case 4:
					unk = { -1430.835f, 1203.193f, 225.4744f };
					break;
			
				case 5:
					unk = { 2834.369f, -1052.816f, 43.75f };
					break;
			}
			break;
	
		case joaat("document_card_nine_cups"):
			switch (iParam0)
			{
				case 0:
					unk = { -2577.274f, -1383.74f, 148.261f };
					break;
			
				case 1:
					unk = { -1409.911f, -2672.891f, 42.227f };
					break;
			
				case 2:
					unk = { 2812.643f, -925.7277f, 44.12f };
					break;
			
				case 3:
					unk = { 1115.424f, 507.2167f, 95.316f };
					break;
			
				case 4:
					unk = { 2894.978f, 628.2769f, 57.15911f };
					break;
			
				case 5:
					unk = { 1139.306f, -979.7267f, 69.35948f };
					break;
			}
			break;
	
		case joaat("document_card_three_swords"):
			switch (iParam0)
			{
				case 0:
					unk = { -2497.293f, -2401.793f, 72.166f };
					break;
			
				case 1:
					unk = { -344.1977f, 694.8963f, 116.853f };
					break;
			
				case 2:
					unk = { -1728.967f, -85.84953f, 181.594f };
					break;
			
				case 3:
					unk = { 2483.545f, 775.2837f, 67.025f };
					break;
			
				case 4:
					unk = { 1374.706f, -1217.925f, 84.124f };
					break;
			
				case 5:
					unk = { -443.3312f, 655.369f, 111.768f };
					break;
			}
			break;
	
		case joaat("document_card_page_wands"):
			switch (iParam0)
			{
				case 0:
					unk = { -3959.438f, -2128.002f, -3.79f };
					break;
			
				case 1:
					unk = { 2335.602f, 1403.099f, 103.33f };
					break;
			
				case 2:
					unk = { 1186.981f, -103.3362f, 94.52f };
					break;
			
				case 3:
					unk = { 2693.608f, -1523.545f, 46.1426f };
					break;
			
				case 4:
					unk = { 758.8849f, 839.5547f, 120.5366f };
					break;
			
				case 5:
					unk = { -1976.292f, -1668.282f, 117.1813f };
					break;
			}
			break;
	
		case joaat("document_card_eight_pentacles"):
			switch (iParam0)
			{
				case 0:
					unk = { 2495.921f, -935.5837f, 41.83111f };
					break;
			
				case 1:
					unk = { -1360.017f, 2427.802f, 307.729f };
					break;
			
				case 2:
					unk = { 1122.943f, 490.8148f, 97.197f };
					break;
			
				case 3:
					unk = { 2930.417f, 1388.615f, 56.3945f };
					break;
			
				case 4:
					unk = { 2467.235f, -1381.177f, 44.75f };
					break;
			
				case 5:
					unk = { -905.5945f, -1367.161f, 45.22607f };
					break;
			}
			break;
	
		case joaat("document_card_four_swords"):
			switch (iParam0)
			{
				case 0:
					unk = { -1477.258f, -769.9705f, 104.16f };
					break;
			
				case 1:
					unk = { 2971.657f, 494.3364f, 48.924f };
					break;
			
				case 2:
					unk = { 1885.005f, -1343.515f, 47.22f };
					break;
			
				case 3:
					unk = { -1435.478f, -2265.299f, 43.42018f };
					break;
			
				case 4:
					unk = { 1325.79f, -2287.317f, 49.11174f };
					break;
			
				case 5:
					unk = { 1115.514f, 485.5861f, 96.73001f };
					break;
			}
			break;
	
		case joaat("document_card_eight_swords"):
			switch (iParam0)
			{
				case 0:
					unk = { 2570.364f, 784.302f, 81.694f };
					break;
			
				case 1:
					unk = { 1052.559f, -1119.853f, 67.834f };
					break;
			
				case 2:
					unk = { 2468.019f, -1172.61f, 48.823f };
					break;
			
				case 3:
					unk = { 2276.614f, 1454.194f, 83.76834f };
					break;
			
				case 4:
					unk = { 193.0581f, 991.5071f, 189.7564f };
					break;
			
				case 5:
					unk = { -1201.22f, -1937.747f, 43.34136f };
					break;
			}
			break;
	
		case joaat("document_card_seven_cups"):
			switch (iParam0)
			{
				case 0:
					unk = { 341.8932f, -669.0356f, 42.25286f };
					break;
			
				case 1:
					unk = { 2257.845f, -784.6151f, 44.225f };
					break;
			
				case 2:
					unk = { 1807.804f, -48.12351f, 58.367f };
					break;
			
				case 3:
					unk = { -821.4991f, 354.529f, 98.568f };
					break;
			
				case 4:
					unk = { -1981.191f, -1617.101f, 118.1249f };
					break;
			
				case 5:
					unk = { -4839.736f, -2661.281f, -13.171f };
					break;
			}
			break;
	
		case joaat("document_card_ace_cups"):
			switch (iParam0)
			{
				case 0:
					unk = { -5411.058f, -2922.478f, 1.633f };
					break;
			
				case 1:
					unk = { 2988.672f, 2185.661f, 166.535f };
					break;
			
				case 2:
					unk = { -1333.433f, 2397.419f, 307.076f };
					break;
			
				case 3:
					unk = { -6010.498f, -3144.973f, 5.219f };
					break;
			
				case 4:
					unk = { -823.4883f, -1297.783f, 53.73291f };
					break;
			
				case 5:
					unk = { 2401.79f, -1550.644f, 42.82064f };
					break;
			}
			break;
	
		case joaat("document_card_knight_pentacles"):
			switch (iParam0)
			{
				case 0:
					unk = { 2291.082f, -1539.305f, 41.422f };
					break;
			
				case 1:
					unk = { 1932.541f, 1947.621f, 262.954f };
					break;
			
				case 2:
					unk = { 2542.088f, 699.2532f, 80.16f };
					break;
			
				case 3:
					unk = { 1903.682f, -1821.06f, 41.97f };
					break;
			
				case 4:
					unk = { -2398.913f, -2469.837f, 59.93f };
					break;
			
				case 5:
					unk = { -2179.922f, 719.9606f, 122.396f };
					break;
			}
			break;
	
		case joaat("document_card_eight_wands"):
			switch (iParam0)
			{
				case 0:
					unk = { -5420.16f, -3657.385f, -18.903f };
					break;
			
				case 1:
					unk = { 2071.159f, -855.5762f, 43.65374f };
					break;
			
				case 2:
					unk = { 2949.082f, 516.9532f, 46.254f };
					break;
			
				case 3:
					unk = { 577.4657f, 1687.921f, 187.74f };
					break;
			
				case 4:
					unk = { 1779.248f, -809.139f, 42.316f };
					break;
			
				case 5:
					unk = { -1663.501f, -1378.33f, 83.807f };
					break;
			}
			break;
	
		case joaat("document_card_king_wands"):
			switch (iParam0)
			{
				case 0:
					unk = { -1831.834f, -608.7134f, 154.372f };
					break;
			
				case 1:
					unk = { -1357.474f, -2290.772f, 45.951f };
					break;
			
				case 2:
					unk = { 351.2373f, -17.20502f, 107.017f };
					break;
			
				case 3:
					unk = { -5463.614f, -2908.602f, 0.658f };
					break;
			
				case 4:
					unk = { -398.3195f, 1727.015f, 215.874f };
					break;
			
				case 5:
					unk = { 2969.867f, 598.343f, 44.61f };
					break;
			}
			break;
	
		case joaat("document_card_ten_cups"):
			switch (iParam0)
			{
				case 0:
					unk = { -3563.438f, -3025.844f, 11.424f };
					break;
			
				case 1:
					unk = { 766.2133f, 880.913f, 120.9506f };
					break;
			
				case 2:
					unk = { 1296.224f, -1150.173f, 81.165f };
					break;
			
				case 3:
					unk = { -2493.048f, -2432.054f, 60.05442f };
					break;
			
				case 4:
					unk = { 1796.942f, -100.2141f, 55.48214f };
					break;
			
				case 5:
					unk = { 2401.277f, -1065.757f, 51.86878f };
					break;
			}
			break;
	
		case joaat("document_card_knight_cups"):
			switch (iParam0)
			{
				case 0:
					unk = { 2139.922f, -1284.657f, 49.816f };
					break;
			
				case 1:
					unk = { 2569.923f, -772.3018f, 42.324f };
					break;
			
				case 2:
					unk = { -1384.26f, 1154.303f, 224.835f };
					break;
			
				case 3:
					unk = { 2852.355f, -1148.669f, 46.25088f };
					break;
			
				case 4:
					unk = { -5555.605f, -2400.442f, -8.176f };
					break;
			
				case 5:
					unk = { -401.7801f, 1734.134f, 218.6434f };
					break;
			}
			break;
	
		case joaat("document_card_three_wands"):
			switch (iParam0)
			{
				case 0:
					unk = { -225.4506f, 834.5778f, 124.406f };
					break;
			
				case 1:
					unk = { 3033.43f, 1367.321f, 42.87f };
					break;
			
				case 2:
					unk = { -2169.378f, -248.6758f, 192.337f };
					break;
			
				case 3:
					unk = { -2321.166f, -2390.095f, 63.211f };
					break;
			
				case 4:
					unk = { 1906.76f, -1860.9f, 44.076f };
					break;
			
				case 5:
					unk = { 2463.728f, 302.1954f, 76.15352f };
					break;
			}
			break;
	
		case joaat("document_card_nine_pentacles"):
			switch (iParam0)
			{
				case 0:
					unk = { -1875.848f, 1330.423f, 202.013f };
					break;
			
				case 1:
					unk = { 2902.685f, 1342.593f, 47.95f };
					break;
			
				case 2:
					unk = { 2230.71f, -767.3853f, 43.725f };
					break;
			
				case 3:
					unk = { 1357.015f, -1248.945f, 79.98093f };
					break;
			
				case 4:
					unk = { -1841.589f, -421.5529f, 160.5227f };
					break;
			
				case 5:
					unk = { 1424.431f, 382.3747f, 89.399f };
					break;
			}
			break;
	
		case joaat("document_card_king_pentacles"):
			switch (iParam0)
			{
				case 0:
					unk = { -606.1691f, -54.50835f, 84.257f };
					break;
			
				case 1:
					unk = { 2745.335f, 1410.862f, 98.828f };
					break;
			
				case 2:
					unk = { 1774.655f, -470.5374f, 45.029f };
					break;
			
				case 3:
					unk = { -1416.201f, 1130.668f, 225.315f };
					break;
			
				case 4:
					unk = { 2987.138f, 2190.272f, 166.2066f };
					break;
			
				case 5:
					unk = { 199.2651f, 991.0287f, 189.9391f };
					break;
			}
			break;
	
		case joaat("document_card_ace_pentacles"):
			switch (iParam0)
			{
				case 0:
					unk = { 1522.962f, 450.2165f, 90.152f };
					break;
			
				case 1:
					unk = { 576.9316f, 1675.01f, 187.7765f };
					break;
			
				case 2:
					unk = { -5856.934f, -3185.338f, -13.16593f };
					break;
			
				case 3:
					unk = { -977.3434f, -1200.263f, 57.98044f };
					break;
			
				case 4:
					unk = { 2506.52f, 739.9262f, 74.187f };
					break;
			
				case 5:
					unk = { 1752.954f, -1365.595f, 44.63037f };
					break;
			}
			break;
	
		case joaat("document_card_page_pentacles"):
			switch (iParam0)
			{
				case 0:
					unk = { -365.4468f, -155.0315f, 50.555f };
					break;
			
				case 1:
					unk = { 1781.656f, -400.4307f, 47.24f };
					break;
			
				case 2:
					unk = { 2387.917f, 1690.443f, 95.509f };
					break;
			
				case 3:
					unk = { -1814.892f, 658.8661f, 131.8925f };
					break;
			
				case 4:
					unk = { 2005.39f, -761.9121f, 41.7f };
					break;
			
				case 5:
					unk = { -16.03913f, 1232.503f, 173.3871f };
					break;
			}
			break;
	
		case joaat("document_card_three_cups"):
			switch (iParam0)
			{
				case 0:
					unk = { -785.7925f, 351.1424f, 96.443f };
					break;
			
				case 1:
					unk = { -1310.024f, 392.2272f, 94.842f };
					break;
			
				case 2:
					unk = { -4766.876f, -2707.932f, -14.12604f };
					break;
			
				case 3:
					unk = { -1769.97f, -429.6013f, 154.674f };
					break;
			
				case 4:
					unk = { 1046.408f, -1845.566f, 48.232f };
					break;
			
				case 5:
					unk = { 2550f, 812.0331f, 75.636f };
					break;
			}
			break;
	
		case joaat("document_card_queen_wands"):
			switch (iParam0)
			{
				case 0:
					unk = { 2784.246f, 533.7446f, 71.129f };
					break;
			
				case 1:
					unk = { -3844.834f, -3009.312f, -7.398f };
					break;
			
				case 2:
					unk = { 2092.187f, -610.6999f, 41.675f };
					break;
			
				case 3:
					unk = { -1638.736f, -1362.702f, 84.28762f };
					break;
			
				case 4:
					unk = { -5215.863f, -3505.096f, -21.82158f };
					break;
			
				case 5:
					unk = { 534.3098f, 1745.734f, 183.704f };
					break;
			}
			break;
	
		case joaat("document_card_three_pentacles"):
			switch (iParam0)
			{
				case 0:
					unk = { 2941.327f, 497.7603f, 45.557f };
					break;
			
				case 1:
					unk = { 1456.948f, 803.3541f, 99.955f };
					break;
			
				case 2:
					unk = { -1757.492f, -361.9659f, 170.035f };
					break;
			
				case 3:
					unk = { 2410.756f, -1076.878f, 47.48f };
					break;
			
				case 4:
					unk = { -856.5822f, 333.9793f, 98.936f };
					break;
			
				case 5:
					unk = { 1338.637f, -2293.063f, 49.743f };
					break;
			}
			break;
	
		case joaat("document_card_seven_wands"):
			switch (iParam0)
			{
				case 0:
					unk = { -285.0148f, 872.1119f, 120.924f };
					break;
			
				case 1:
					unk = { 753.2751f, -854.7612f, 55.11713f };
					break;
			
				case 2:
					unk = { 2195.288f, -554.449f, 41.48f };
					break;
			
				case 3:
					unk = { -1317.953f, 2436.072f, 309.366f };
					break;
			
				case 4:
					unk = { 3027.961f, 1775.08f, 83.617f };
					break;
			
				case 5:
					unk = { 1981.649f, 1193.035f, 171.202f };
					break;
			}
			break;
	
		case joaat("document_card_six_pentacles"):
			switch (iParam0)
			{
				case 0:
					unk = { -4684.597f, -3735.584f, 13.072f };
					break;
			
				case 1:
					unk = { 1409.751f, -1287.476f, 78.037f };
					break;
			
				case 2:
					unk = { 497.7721f, 673.6046f, 120.834f };
					break;
			
				case 3:
					unk = { 2234.996f, -142.1575f, 47.40239f };
					break;
			
				case 4:
					unk = { 1130.36f, -989.1239f, 68.874f };
					break;
			
				case 5:
					unk = { 789.1991f, 839.0553f, 117.637f };
					break;
			}
			break;
	
		case joaat("document_card_page_cups"):
			switch (iParam0)
			{
				case 0:
					unk = { 2490.364f, -437.7844f, 41.405f };
					break;
			
				case 1:
					unk = { -1992.476f, -1605.796f, 117.8166f };
					break;
			
				case 2:
					unk = { 1313.643f, -2280.667f, 50.472f };
					break;
			
				case 3:
					unk = { 775.4293f, 844.6693f, 118.956f };
					break;
			
				case 4:
					unk = { 1620.895f, -360.2322f, 75.36804f };
					break;
			
				case 5:
					unk = { 2239.058f, -147.8358f, 46.73964f };
					break;
			}
			break;
	
		case joaat("document_card_ace_swords"):
			switch (iParam0)
			{
				case 0:
					unk = { -414.2433f, 1748.174f, 219.237f };
					break;
			
				case 1:
					unk = { 1903.133f, -1861.375f, 47.154f };
					break;
			
				case 2:
					unk = { -322.3861f, -330.0626f, 101.448f };
					break;
			
				case 3:
					unk = { 2930.624f, 511.4331f, 45.106f };
					break;
			
				case 4:
					unk = { -59.93358f, 1241.177f, 170.5883f };
					break;
			
				case 5:
					unk = { -1814.496f, -355.9884f, 161.8523f };
					break;
			}
			break;
	
		case joaat("document_card_five_swords"):
			switch (iParam0)
			{
				case 0:
					unk = { -5852.164f, -3740.74f, -25.688f };
					break;
			
				case 1:
					unk = { -1816.15f, -435.9532f, 159.483f };
					break;
			
				case 2:
					unk = { 877.7709f, -1819.264f, 43.837f };
					break;
			
				case 3:
					unk = { 903.1764f, 261.0582f, 115.805f };
					break;
			
				case 4:
					unk = { 3025.154f, 1442.077f, 47f };
					break;
			
				case 5:
					unk = { -2342.035f, -2380.208f, 62.082f };
					break;
			}
			break;
	
		case joaat("document_card_five_pentacles"):
			switch (iParam0)
			{
				case 0:
					unk = { 1238.492f, -442.7407f, 90.514f };
					break;
			
				case 1:
					unk = { 2090.363f, -1820.301f, 42.976f };
					break;
			
				case 2:
					unk = { -395.2218f, 1724.644f, 216.2263f };
					break;
			
				case 3:
					unk = { 1625.42f, -363.5916f, 75.70547f };
					break;
			
				case 4:
					unk = { 1178.113f, 433.4455f, 92.715f };
					break;
			
				case 5:
					unk = { 2824.817f, 280.6819f, 51.125f };
					break;
			}
			break;
	
		case joaat("document_card_knight_wands"):
			switch (iParam0)
			{
				case 0:
					unk = { 2685.521f, -1102.14f, 49.034f };
					break;
			
				case 1:
					unk = { 1008.127f, -1805.869f, 46.506f };
					break;
			
				case 2:
					unk = { -1021.207f, 1695.284f, 244.3578f };
					break;
			
				case 3:
					unk = { -1820.981f, -372.3584f, 163.0933f };
					break;
			
				case 4:
					unk = { 540.5381f, 595.9525f, 127.4449f };
					break;
			
				case 5:
					unk = { 2343.544f, -1165.905f, 46.764f };
					break;
			}
			break;
	
		case joaat("document_card_king_cups"):
			switch (iParam0)
			{
				case 0:
					unk = { 2139.922f, -1284.657f, 49.816f };
					break;
			
				case 1:
					unk = { 828.2776f, 1923.064f, 259.505f };
					break;
			
				case 2:
					unk = { 1434.244f, -1363.573f, 84.95869f };
					break;
			
				case 3:
					unk = { 1319.78f, -2287.278f, 50.32104f };
					break;
			
				case 4:
					unk = { -626.771f, -74.001f, 83.297f };
					break;
			
				case 5:
					unk = { 2991.004f, 2191.702f, 166.5247f };
					break;
			}
			break;
	
		case joaat("document_card_queen_swords"):
			switch (iParam0)
			{
				case 0:
					unk = { -1422.935f, -2339.014f, 45.006f };
					break;
			
				case 1:
					unk = { 1869.853f, 584.2012f, 113.291f };
					break;
			
				case 2:
					unk = { 2452.558f, 2096.085f, 173.752f };
					break;
			
				case 3:
					unk = { -1164.138f, -1944.113f, 42.134f };
					break;
			
				case 4:
					unk = { 2366.678f, -1468.138f, 45.902f };
					break;
			
				case 5:
					unk = { -844.3076f, -1183.771f, 43.381f };
					break;
			}
			break;
	
		case joaat("document_card_ten_swords"):
			switch (iParam0)
			{
				case 0:
					unk = { 1988.772f, 1197.333f, 170.926f };
					break;
			
				case 1:
					unk = { 2446.509f, 290.5638f, 67.239f };
					break;
			
				case 2:
					unk = { -154.1317f, 1490.631f, 116.839f };
					break;
			
				case 3:
					unk = { -1576.273f, -923.0228f, 85.506f };
					break;
			
				case 4:
					unk = { -1318.793f, 2462.397f, 309.7299f };
					break;
			
				case 5:
					unk = { 1457.72f, 814.1915f, 101.44f };
					break;
			}
			break;
	
		case joaat("document_card_four_cups"):
			switch (iParam0)
			{
				case 0:
					unk = { 1456.267f, -1363.698f, 78.26161f };
					break;
			
				case 1:
					unk = { -3439.563f, -2719.311f, -3.935848f };
					break;
			
				case 2:
					unk = { 2975.23f, 573.8652f, 45.12079f };
					break;
			
				case 3:
					unk = { 2745.968f, -1182.872f, 48.988f };
					break;
			
				case 4:
					unk = { -276.0031f, 813.6921f, 122.5749f };
					break;
			
				case 5:
					unk = { 1299.625f, -1303.212f, 81.70584f };
					break;
			}
			break;
	
		case joaat("document_card_nine_swords"):
			switch (iParam0)
			{
				case 0:
					unk = { 2601.089f, -1472.551f, 51.98522f };
					break;
			
				case 1:
					unk = { 2881.864f, 1381.877f, 83.02f };
					break;
			
				case 2:
					unk = { -4372.16f, -2412.86f, 19.484f };
					break;
			
				case 3:
					unk = { 1935.854f, 1942.919f, 273.093f };
					break;
			
				case 4:
					unk = { 2440.585f, 305.988f, 74.64512f };
					break;
			
				case 5:
					unk = { 2561.756f, -1086.731f, 56.53377f };
					break;
			}
			break;
	
		case joaat("document_card_four_wands"):
			switch (iParam0)
			{
				case 0:
					unk = { 2255.278f, -753.965f, 42.578f };
					break;
			
				case 1:
					unk = { 2540.273f, 697.4079f, 81.22f };
					break;
			
				case 2:
					unk = { 1445.074f, 374.511f, 89.922f };
					break;
			
				case 3:
					unk = { -756.7344f, -1351.986f, 43.175f };
					break;
			
				case 4:
					unk = { 2867.417f, 1449.662f, 69.19386f };
					break;
			
				case 5:
					unk = { 1415.163f, -1399.66f, 81.95272f };
					break;
			}
			break;
	}

	return unk;
}

Vector3 func_410(int iParam0, Hash hParam1) // Position - 0x11C47 Hash - 0x980CF3F1 ^0x980CF3F1
{
	var unk;

	switch (hParam1)
	{
		case joaat("provision_jewelry_french_dmnd_ring"):
			switch (iParam0)
			{
				case 0:
					unk = { -347.9342f, 1153.391f, 125.6111f };
					break;
			
				case 1:
					unk = { -2080.393f, -1891.941f, 113.6176f };
					break;
			
				case 2:
					unk = { -1374.927f, 511.1898f, 100.6f };
					break;
			
				case 3:
					unk = { 1965.265f, -1871.806f, 40.724f };
					break;
			
				case 4:
					unk = { -410.4796f, 1749.962f, 218.5241f };
					break;
			
				case 5:
					unk = { -4450.241f, -3879.977f, -26.709f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_grnet_post_earring"):
			switch (iParam0)
			{
				case 0:
					unk = { 1515.215f, 2022.364f, 297.7653f };
					break;
			
				case 1:
					unk = { 2916.7798f, 1251.5007f, 44.73628f };
					break;
			
				case 2:
					unk = { -1398.124f, -1734.039f, 82.11946f };
					break;
			
				case 3:
					unk = { 427.904f, -149.548f, 117.172f };
					break;
			
				case 4:
					unk = { 2061.983f, 943.904f, 116.989f };
					break;
			
				case 5:
					unk = { -4813.368f, -2709.548f, -14.264f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_gld_pearl_necklace"):
			switch (iParam0)
			{
				case 0:
					unk = { -1757.989f, -2937.432f, -11.79251f };
					break;
			
				case 1:
					unk = { 1182.359f, 2036.899f, 323.0538f };
					break;
			
				case 2:
					unk = { 1465.587f, -1722.392f, 62.49817f };
					break;
			
				case 3:
					unk = { -5583.634f, -2588.623f, -9.075f };
					break;
			
				case 4:
					unk = { -1823.96f, -1133.145f, 88.989f };
					break;
			
				case 5:
					unk = { 2715.422f, -1081.903f, 47.11272f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_turquoise_bracelet"):
			switch (iParam0)
			{
				case 0:
					unk = { 1365.181f, 1827.732f, 190.9018f };
					break;
			
				case 1:
					unk = { 1402.485f, -984.186f, 47.50457f };
					break;
			
				case 2:
					unk = { -1585.8707f, -2805.9102f, 38.9954f };
					break;
			
				case 3:
					unk = { 2001.609f, 700.08f, 170.329f };
					break;
			
				case 4:
					unk = { -4380.315f, -3079.24f, -11.653f };
					break;
			
				case 5:
					unk = { 956.51f, 389.518f, 109.939f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_ylwgld_dmnd_ring"):
			switch (iParam0)
			{
				case 0:
					unk = { -2176.511f, 720.0225f, 125.2582f };
					break;
			
				case 1:
					unk = { 1715.98f, -1725.556f, 50.62097f };
					break;
			
				case 2:
					unk = { -1095.227f, 706.5919f, 103.139f };
					break;
			
				case 3:
					unk = { 1218.012f, -143.7625f, 100.194f };
					break;
			
				case 4:
					unk = { -1730.175f, -78.967f, 180.201f };
					break;
			
				case 5:
					unk = { -2067.141f, -1928.338f, 112.243f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_onyx_ring"):
			switch (iParam0)
			{
				case 0:
					unk = { -367.266f, 300.0798f, 89.44596f };
					break;
			
				case 1:
					unk = { 2301.32f, -1322.696f, 42.06955f };
					break;
			
				case 2:
					unk = { -2240.554f, 609.4323f, 117.2326f };
					break;
			
				case 3:
					unk = { -2775.61f, -3209.412f, -7.898378f };
					break;
			
				case 4:
					unk = { 1203.29f, -1204.167f, 75.664f };
					break;
			
				case 5:
					unk = { -828.698f, -1516.472f, 62.305f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_emerald_earring"):
			switch (iParam0)
			{
				case 0:
					unk = { 2431.102f, 1748.229f, 86.07227f };
					break;
			
				case 1:
					unk = { -5807.756f, -2853.925f, -21.07f };
					break;
			
				case 2:
					unk = { 687.0368f, 1429.984f, 179.87f };
					break;
			
				case 3:
					unk = { -1170.441f, 85.439f, 43.968f };
					break;
			
				case 4:
					unk = { -2731.12f, -2522.983f, 64.287f };
					break;
			
				case 5:
					unk = { -2258.174f, 740.849f, 123.933f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_rudy_dngl_earring"):
			switch (iParam0)
			{
				case 0:
					unk = { -422.9006f, 1124.224f, 116.5767f };
					break;
			
				case 1:
					unk = { 2305.086f, -186.9085f, 40.92494f };
					break;
			
				case 2:
					unk = { 882.827f, -293.7682f, 82.99796f };
					break;
			
				case 3:
					unk = { 2330.561f, -1264.729f, 44.665f };
					break;
			
				case 4:
					unk = { 1575.993f, -262.667f, 79.194f };
					break;
			
				case 5:
					unk = { 297.576f, 847.984f, 186.128f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_dmnd_pendt_earring"):
			switch (iParam0)
			{
				case 0:
					unk = { 2899.738f, 492.7514f, 65.84051f };
					break;
			
				case 1:
					unk = { -2871.56f, -462.0377f, 196.8847f };
					break;
			
				case 2:
					unk = { 1445.657f, 1456.146f, 188.63f };
					break;
			
				case 3:
					unk = { 1871.821f, 578.064f, 112.566f };
					break;
			
				case 4:
					unk = { -2585.285f, -2521.196f, 71.488f };
					break;
			
				case 5:
					unk = { 2337.882f, 1007.901f, 88.839f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_gld_pendt_necklace"):
			switch (iParam0)
			{
				case 0:
					unk = { -414.3991f, 1265.394f, 160.5856f };
					break;
			
				case 1:
					unk = { 2695.703f, 1996.243f, 123.35f };
					break;
			
				case 2:
					unk = { -5992.344f, -3821.39f, -30.7928f };
					break;
			
				case 3:
					unk = { 1712.729f, -1303.595f, 42.161f };
					break;
			
				case 4:
					unk = { 2572.77f, 142.555f, 51.44873f };
					break;
			
				case 5:
					unk = { -3341.876f, -2753.213f, -5.127f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_topaz_necklace"):
			switch (iParam0)
			{
				case 0:
					unk = { -278.1749f, 88.7519f, 48.23199f };
					break;
			
				case 1:
					unk = { -3694.892f, -2663.843f, -15.3165f };
					break;
			
				case 2:
					unk = { -5397.794f, -3668.164f, -21.97512f };
					break;
			
				case 3:
					unk = { -1302.337f, -875.792f, 69.533f };
					break;
			
				case 4:
					unk = { -2773.447f, -3039.548f, 10.243f };
					break;
			
				case 5:
					unk = { -393.977f, 1726.975f, 216.468f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_emerald_ring"):
			switch (iParam0)
			{
				case 0:
					unk = { 3222.236f, 1464.866f, 52.10627f };
					break;
			
				case 1:
					unk = { 1897.726f, -1195.392f, 41.91169f };
					break;
			
				case 2:
					unk = { -1097.89f, -1356.006f, 64.07458f };
					break;
			
				case 3:
					unk = { -6023.612f, -3233.676f, -22.148f };
					break;
			
				case 4:
					unk = { 2489.684f, 884.126f, 72.419f };
					break;
			
				case 5:
					unk = { 481.589f, 1845.104f, 196.887f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_pearl_earring"):
			switch (iParam0)
			{
				case 0:
					unk = { -1840.84f, 563.2191f, 112.6902f };
					break;
			
				case 1:
					unk = { 2200.189f, -993.9132f, 40.68365f };
					break;
			
				case 2:
					unk = { 2281.374f, 1445.469f, 84.43324f };
					break;
			
				case 3:
					unk = { -3614.626f, -2662.714f, -12.783f };
					break;
			
				case 4:
					unk = { -1005.908f, -1193.674f, 58.304f };
					break;
			
				case 5:
					unk = { 1179.77f, -101.4314f, 97.15665f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_blck_pearl_necklace"):
			switch (iParam0)
			{
				case 0:
					unk = { 873.05f, 2256.082f, 238.799f };
					break;
			
				case 1:
					unk = { -630.5759f, 1132.453f, 156.1782f };
					break;
			
				case 2:
					unk = { -584.6255f, -831.5223f, 40.69221f };
					break;
			
				case 3:
					unk = { 1066.412f, -1023.771f, 67.869f };
					break;
			
				case 4:
					unk = { -5520.459f, -3056.198f, -3.31f };
					break;
			
				case 5:
					unk = { 135.157f, 177.181f, 120.193f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_carved_bracelet"):
			switch (iParam0)
			{
				case 0:
					unk = { 2098.276f, 163.5964f, 73.96008f };
					break;
			
				case 1:
					unk = { -3345.583f, -2856.703f, -7.089534f };
					break;
			
				case 2:
					unk = { -1568.609f, 725.8712f, 129.2337f };
					break;
			
				case 3:
					unk = { -2385.313f, -2360.324f, 60.861f };
					break;
			
				case 4:
					unk = { -2172.959f, -255.478f, 190.639f };
					break;
			
				case 5:
					unk = { -3483.668f, -3470.969f, -0.715999f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_grnet_bracelet"):
			switch (iParam0)
			{
				case 0:
					unk = { 2056.683f, -797.0857f, 41.25389f };
					break;
			
				case 1:
					unk = { -1356.743f, -928.0706f, 58.06551f };
					break;
			
				case 2:
					unk = { -864.6054f, 625.0072f, 94.73165f };
					break;
			
				case 3:
					unk = { -164.773f, 497.919f, 105.616f };
					break;
			
				case 4:
					unk = { -4341.151f, -3496.203f, 31.601f };
					break;
			
				case 5:
					unk = { -2071.77f, -2678.627f, 67.868f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_whtgld_dmnd_ring"):
			switch (iParam0)
			{
				case 0:
					unk = { 1169.316f, 1685.228f, 355.7802f };
					break;
			
				case 1:
					unk = { -1521.499f, 518.2305f, 102.25f };
					break;
			
				case 2:
					unk = { -596.504f, 856.5514f, 109.4832f };
					break;
			
				case 3:
					unk = { 804.661f, 831.088f, 117.221f };
					break;
			
				case 4:
					unk = { 2835.425f, 1681.985f, 129.9798f };
					break;
			
				case 5:
					unk = { -686.152f, 1022.066f, 132.999f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_turquoise_ring"):
			switch (iParam0)
			{
				case 0:
					unk = { -1239.72f, -1911.497f, 55.959f };
					break;
			
				case 1:
					unk = { 775.2253f, 849.8893f, 118.7485f };
					break;
			
				case 2:
					unk = { -3584.689f, -3567.713f, 34.21161f };
					break;
			
				case 3:
					unk = { 533.449f, 1746.879f, 162.112f };
					break;
			
				case 4:
					unk = { 1317.384f, -2275.81f, 51.01833f };
					break;
			
				case 5:
					unk = { 2329.152f, 1330.265f, 106.107f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_coral_dngl_earring"):
			switch (iParam0)
			{
				case 0:
					unk = { -1384.99f, -1402.253f, 93.5495f };
					break;
			
				case 1:
					unk = { -1992.5f, -2384.515f, 56.43238f };
					break;
			
				case 2:
					unk = { -5345.73f, -2913.978f, 8.322517f };
					break;
			
				case 3:
					unk = { -2772.355f, -431.812f, 173.256f };
					break;
			
				case 4:
					unk = { -5859.28f, -3185.474f, -14.348f };
					break;
			
				case 5:
					unk = { 1859.219f, -739.871f, 41.361f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_coral_ring"):
			switch (iParam0)
			{
				case 0:
					unk = { -1851.781f, 2317.591f, 348.1268f };
					break;
			
				case 1:
					unk = { -853.7369f, 396.1281f, 94.9f };
					break;
			
				case 2:
					unk = { 2569.415f, 717.7336f, 81.21738f };
					break;
			
				case 3:
					unk = { -3172.644f, -2475.335f, 72.115f };
					break;
			
				case 4:
					unk = { -1277.482f, 483.129f, 86.077f };
					break;
			
				case 5:
					unk = { 1705.024f, -1008.447f, 40.684f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_porcelain_necklace"):
			switch (iParam0)
			{
				case 0:
					unk = { 2383.226f, 1695.083f, 95.911f };
					break;
			
				case 1:
					unk = { 1716.582f, 463.6513f, 106.2908f };
					break;
			
				case 2:
					unk = { -1168.274f, 843.575f, 134.8053f };
					break;
			
				case 3:
					unk = { 2684.51f, 1647.921f, 147.5019f };
					break;
			
				case 4:
					unk = { 1732.463f, -1173.364f, 40.679f };
					break;
			
				case 5:
					unk = { 1731.615f, -425.61f, 47.192f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_slvr_pearl_necklace"):
			switch (iParam0)
			{
				case 0:
					unk = { -63.90002f, 1234.047f, 170.8458f };
					break;
			
				case 1:
					unk = { 1460.522f, -477.047f, 73.44901f };
					break;
			
				case 2:
					unk = { -1638.215f, -1360.739f, 83.49316f };
					break;
			
				case 3:
					unk = { 2780.342f, 534.8629f, 71.79f };
					break;
			
				case 4:
					unk = { -5046.095f, -2504.365f, -11.168f };
					break;
			
				case 5:
					unk = { 1121.401f, -1297.322f, 64.358f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_sphr_bracelet"):
			switch (iParam0)
			{
				case 0:
					unk = { -2184.685f, -1664.431f, 138.5523f };
					break;
			
				case 1:
					unk = { 468.4028f, 1091f, 195.0037f };
					break;
			
				case 2:
					unk = { -614.8671f, 525.5435f, 97.91837f };
					break;
			
				case 3:
					unk = { 2964.187f, 438.709f, 56.915f };
					break;
			
				case 4:
					unk = { -1286.468f, -625.796f, 98.286f };
					break;
			
				case 5:
					unk = { 344.1996f, -666.2773f, 41.90558f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_pers_turq_ring"):
			switch (iParam0)
			{
				case 0:
					unk = { -4496.287f, -3208.554f, 9.911187f };
					break;
			
				case 1:
					unk = { 872.0493f, 1291.168f, 221.9553f };
					break;
			
				case 2:
					unk = { 1899.343f, -1854.501f, 47.45892f };
					break;
			
				case 3:
					unk = { 2248.565f, -766.519f, 41.818f };
					break;
			
				case 4:
					unk = { 429.323f, 668.517f, 114.407f };
					break;
			
				case 5:
					unk = { 2233.555f, -141.2088f, 48.10167f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_dmnd_bngle_bracelet"):
			switch (iParam0)
			{
				case 0:
					unk = { -1070.01f, -1927.607f, 41.43198f };
					break;
			
				case 1:
					unk = { -1799.061f, -1764.563f, 107.4229f };
					break;
			
				case 2:
					unk = { 2382.294f, 882.2943f, 73.1396f };
					break;
			
				case 3:
					unk = { -3306.079f, -2849.913f, -6.958f };
					break;
			
				case 4:
					unk = { -380.661f, -361.891f, 85.739f };
					break;
			
				case 5:
					unk = { 2623.028f, -1174.482f, 52.10396f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_moon_ring"):
			switch (iParam0)
			{
				case 0:
					unk = { 1249.602f, 1156.183f, 151.6954f };
					break;
			
				case 1:
					unk = { 2294.689f, 2076.941f, 199.8165f };
					break;
			
				case 2:
					unk = { 2479.74f, 2000.122f, 167.1423f };
					break;
			
				case 3:
					unk = { 1588.217f, 2192.406f, 325.189f };
					break;
			
				case 4:
					unk = { -1188.5055f, 326.9177f, 43.7868f };
					break;
			
				case 5:
					unk = { 2063.751f, -1761.572f, 40.542f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_drop_earring"):
			switch (iParam0)
			{
				case 0:
					unk = { 1795.936f, -421.4888f, 43.91587f };
					break;
			
				case 1:
					unk = { -1693.907f, -1542.08f, 82.97929f };
					break;
			
				case 2:
					unk = { 751.4978f, 1185.651f, 143.4009f };
					break;
			
				case 3:
					unk = { 1876.071f, 1019.309f, 122.024f };
					break;
			
				case 4:
					unk = { -3554.666f, -3389.052f, -1.595f };
					break;
			
				case 5:
					unk = { -2618.264f, -348.66f, 141.183f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_qn_dmnd_earring"):
			switch (iParam0)
			{
				case 0:
					unk = { 1882.536f, 138.9948f, 97.59777f };
					break;
			
				case 1:
					unk = { 1237.213f, -1666.103f, 65.53084f };
					break;
			
				case 2:
					unk = { -1052.817f, 75.87376f, 90.76984f };
					break;
			
				case 3:
					unk = { 738.079f, -1444.563f, 48.618f };
					break;
			
				case 4:
					unk = { -2260.866f, -1433.324f, 139.047f };
					break;
			
				case 5:
					unk = { -1062.977f, -830.346f, 42.847f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_pearl_ring"):
			switch (iParam0)
			{
				case 0:
					unk = { 1308.987f, -389.3056f, 98.80263f };
					break;
			
				case 1:
					unk = { 2926.397f, 2343.146f, 157.2647f };
					break;
			
				case 2:
					unk = { -1755.261f, -225.4198f, 183.7908f };
					break;
			
				case 3:
					unk = { -3817.285f, -3001.792f, -7.194f };
					break;
			
				case 4:
					unk = { 1980.839f, 1187.971f, 169.914f };
					break;
			
				case 5:
					unk = { 1845.287f, -1813.046f, 43.97054f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_mthr_pearl_necklace"):
			switch (iParam0)
			{
				case 0:
					unk = { 1143.589f, -2167.258f, 55.39804f };
					break;
			
				case 1:
					unk = { 2675.015f, 424.8618f, 82.26527f };
					break;
			
				case 2:
					unk = { 323.924f, 309.331f, 145.39f };
					break;
			
				case 3:
					unk = { -482.686f, -70.27f, 42.896f };
					break;
			
				case 4:
					unk = { 2623.636f, 1696.611f, 115.4945f };
					break;
			
				case 5:
					unk = { -1871.348f, -1724.728f, 108.487f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_gld_cross_necklace"):
			switch (iParam0)
			{
				case 0:
					unk = { 715.0709f, 23.18262f, 151.8853f };
					break;
			
				case 1:
					unk = { -948.6896f, 1634.235f, 244.38f };
					break;
			
				case 2:
					unk = { 2416.921f, -738.7106f, 41.36396f };
					break;
			
				case 3:
					unk = { 1469.829f, 798.88f, 98.616f };
					break;
			
				case 4:
					unk = { 1896.782f, -1861.499f, 46.56086f };
					break;
			
				case 5:
					unk = { 1893.525f, 299.28f, 75.9f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_gld_bngle_bracelet"):
			switch (iParam0)
			{
				case 0:
					unk = { 700.8186f, -1252.892f, 43.97901f };
					break;
			
				case 1:
					unk = { 157.7216f, 361.8874f, 118.6619f };
					break;
			
				case 2:
					unk = { -5905.865f, -3413.23f, -4.372983f };
					break;
			
				case 3:
					unk = { -399.17f, 1735.706f, 217.9749f };
					break;
			
				case 4:
					unk = { 1592.672f, 1627.75f, 146.213f };
					break;
			
				case 5:
					unk = { -2713.809f, -54.182f, 151.834f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_amethyst_necklace"):
			switch (iParam0)
			{
				case 0:
					unk = { 2326.581f, 1092.258f, 102.1426f };
					break;
			
				case 1:
					unk = { 621.4919f, 959.4529f, 176.381f };
					break;
			
				case 2:
					unk = { 1482.876f, 1121.825f, 198.2411f };
					break;
			
				case 3:
					unk = { -1506.288f, -755.233f, 104.926f };
					break;
			
				case 4:
					unk = { 1306.245f, 321.932f, 87.032f };
					break;
			
				case 5:
					unk = { 1993.759f, -1613.599f, 41.097f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_turq_stud_earring"):
			switch (iParam0)
			{
				case 0:
					unk = { -4443.736f, -2688.467f, -12.10359f };
					break;
			
				case 1:
					unk = { 2080.73f, -583.7109f, 40.68758f };
					break;
			
				case 2:
					unk = { 2875.142f, 1019.903f, 40.91467f };
					break;
			
				case 3:
					unk = { 224.485f, 1002.841f, 188.619f };
					break;
			
				case 4:
					unk = { 511.3415f, 2242.749f, 245.8599f };
					break;
			
				case 5:
					unk = { -3535.955f, -3047.648f, 11.114f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_sphr_bngle_bracelet"):
			switch (iParam0)
			{
				case 0:
					unk = { -1045.887f, 421.9767f, 46.4541f };
					break;
			
				case 1:
					unk = { -2231.449f, 891.0339f, 163.5341f };
					break;
			
				case 2:
					unk = { -3312.46f, -1837.436f, 56.99748f };
					break;
			
				case 3:
					unk = { -37.298f, 1108.598f, 167.237f };
					break;
			
				case 4:
					unk = { -2454.475f, -2854.224f, 70.063f };
					break;
			
				case 5:
					unk = { 1718.99f, 596.886f, 102.129f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_wht_dmnd_earring"):
			switch (iParam0)
			{
				case 0:
					unk = { 1991.458f, -1903.824f, 40.69088f };
					break;
			
				case 1:
					unk = { -164.3306f, 1731.664f, 169.7935f };
					break;
			
				case 2:
					unk = { -754.5217f, -558.4883f, 40.81464f };
					break;
			
				case 3:
					unk = { -1322.847f, -2177.425f, 41.373f };
					break;
			
				case 4:
					unk = { -455.087f, 882.664f, 125.946f };
					break;
			
				case 5:
					unk = { 2431.759f, 98.043f, 44.798f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_elk_tooth_earring"):
			switch (iParam0)
			{
				case 0:
					unk = { 2985.184f, 1280.13f, 40.96151f };
					break;
			
				case 1:
					unk = { 220.5197f, 686.5555f, 175.8618f };
					break;
			
				case 2:
					unk = { 1388.297f, -645.8536f, 70.60245f };
					break;
			
				case 3:
					unk = { 2120.819f, -640.731f, 40.687f };
					break;
			
				case 4:
					unk = { -24.567f, 1248.657f, 171.727f };
					break;
			
				case 5:
					unk = { 1591.662f, 2185.654f, 323.313f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_pearl_bracelet"):
			switch (iParam0)
			{
				case 0:
					unk = { 2063.583f, -851.6461f, 43.32316f };
					break;
			
				case 1:
					unk = { 1619.393f, 1487.577f, 145.4048f };
					break;
			
				case 2:
					unk = { -92.89658f, 1359.296f, 168.3585f };
					break;
			
				case 3:
					unk = { 2372.439f, -859.7336f, 43.34306f };
					break;
			
				case 4:
					unk = { 878.194f, -2029.334f, 43.937f };
					break;
			
				case 5:
					unk = { -5633.213f, -2951.038f, 4.873f };
					break;
			}
			break;
	
		case joaat("provision_jewelry_topaz_ring"):
			switch (iParam0)
			{
				case 0:
					unk = { 1725.126f, -1968.61f, 46.54615f };
					break;
			
				case 1:
					unk = { 1598.018f, -1840.43f, 58.632f };
					break;
			
				case 2:
					unk = { 741.7739f, 1818.116f, 236.1417f };
					break;
			
				case 3:
					unk = { 2443.097f, 290.514f, 66.50214f };
					break;
			
				case 4:
					unk = { 2725.293f, -1057.348f, 46.91621f };
					break;
			
				case 5:
					unk = { -159.714f, 1505.379f, 116.488f };
					break;
			}
			break;
	}

	return unk;
}

Vector3 func_411(int iParam0, Hash hParam1) // Position - 0x1388A Hash - 0x980CF3F1 ^0x980CF3F1
{
	var unk;

	switch (hParam1)
	{
		case joaat("provision_wldflwr_cardinal_flower"):
			switch (iParam0)
			{
				case 0:
					unk = { 2096.103f, -570.0728f, 40.76724f };
					break;
			
				case 1:
					unk = { 2118.5f, -1861.513f, 40.54971f };
					break;
			
				case 2:
					unk = { 2271.446f, -475.6335f, 40.91769f };
					break;
			
				case 3:
					unk = { 2050.705f, -1233.955f, 42.07559f };
					break;
			
				case 4:
					unk = { 2212.287f, -817.0461f, 41.05512f };
					break;
			
				case 5:
					unk = { 2213.18f, -1137.773f, 42.13002f };
					break;
			
				case 6:
					unk = { 2031.381f, -1605.756f, 40.84847f };
					break;
			
				case 7:
					unk = { 1765.468f, -1275.672f, 41.87871f };
					break;
			
				case 8:
					unk = { 1894f, -1989.385f, 41.46169f };
					break;
			
				case 9:
					unk = { 2268.59f, -507.9146f, 40.75f };
					break;
			
				case 10:
					unk = { 2168.978f, -287.6918f, 41.27938f };
					break;
			
				case 11:
					unk = { 1981.499f, -2008.384f, 40.91828f };
					break;
			
				case 12:
					unk = { 2400.476f, -757.072f, 40.92308f };
					break;
			
				case 13:
					unk = { 1994.725f, -1559.202f, 40.74926f };
					break;
			
				case 14:
					unk = { 1595.292f, -971.217f, 41.22252f };
					break;
			
				case 15:
					unk = { 2098.452f, -1047.086f, 41.35026f };
					break;
			
				case 16:
					unk = { 2030.629f, -1138.634f, 40.50709f };
					break;
			
				case 17:
					unk = { 2053.598f, -1840.162f, 40.69882f };
					break;
			
				case 18:
					unk = { 1948.073f, -1158.214f, 40.86988f };
					break;
			
				case 19:
					unk = { 2308.52f, -566.7586f, 40.77962f };
					break;
			
				case 20:
					unk = { 1920.365f, -1850.414f, 40.9271f };
					break;
			
				case 21:
					unk = { 2302.28f, -350.1679f, 41.79851f };
					break;
			
				case 22:
					unk = { 2412.502f, -725.1883f, 40.95741f };
					break;
			
				case 23:
					unk = { 2001.047f, -1001.912f, 42.31869f };
					break;
			
				case 24:
					unk = { 2015.419f, -1554.983f, 40.73554f };
					break;
			
				case 25:
					unk = { 2035.616f, -1999.656f, 41.09543f };
					break;
			
				case 26:
					unk = { 1509.446f, -826.7535f, 44.47095f };
					break;
			
				case 27:
					unk = { 2582.996f, -638.0927f, 42.48944f };
					break;
			
				case 28:
					unk = { 1961.522f, -522.7937f, 40.75521f };
					break;
			
				case 29:
					unk = { 2318.057f, -509.386f, 41.03922f };
					break;
			
				case 30:
					unk = { 1906.669f, -1751.401f, 42.04636f };
					break;
			
				case 31:
					unk = { 1640.019f, -741.5635f, 40.81805f };
					break;
			
				case 32:
					unk = { 2094.501f, -924.8128f, 40.77338f };
					break;
			
				case 33:
					unk = { 2061.693f, -1474.422f, 40.5374f };
					break;
			
				case 34:
					unk = { 2112.21f, -1956.966f, 40.62199f };
					break;
			
				case 35:
					unk = { 1881.001f, -1051.795f, 41.74044f };
					break;
			
				case 36:
					unk = { 2065.621f, -1718.06f, 40.60165f };
					break;
			
				case 37:
					unk = { 2379.899f, -496.1565f, 40.67059f };
					break;
			
				case 38:
					unk = { 1912.171f, -411.4875f, 42.1138f };
					break;
			
				case 39:
					unk = { 1795.963f, -814.7781f, 41.52293f };
					break;
			
				case 40:
					unk = { 2218.973f, -896.0101f, 40.78076f };
					break;
			
				case 41:
					unk = { 2164.055f, -1462.051f, 40.71122f };
					break;
			
				case 42:
					unk = { 2361.998f, -661.2549f, 40.99789f };
					break;
			
				case 43:
					unk = { 1812.99f, -1145.849f, 40.78216f };
					break;
			
				case 44:
					unk = { 1978.474f, -1926.182f, 41.20599f };
					break;
			
				case 45:
					unk = { 2228.102f, -1268.194f, 40.62177f };
					break;
			
				case 46:
					unk = { 2506.603f, -428.8445f, 40.59692f };
					break;
			
				case 47:
					unk = { 2012.282f, -332.8559f, 40.63703f };
					break;
			
				case 48:
					unk = { 1791.035f, -1145.769f, 40.59069f };
					break;
			
				case 49:
					unk = { 1906.752f, -746.4213f, 42.54567f };
					break;
			
				case 50:
					unk = { 2281.305f, -978.6946f, 40.88538f };
					break;
			
				case 51:
					unk = { 2056.947f, -1901.105f, 40.62201f };
					break;
			
				case 52:
					unk = { 2162.393f, -683.0685f, 40.81242f };
					break;
			
				case 53:
					unk = { 2169.019f, -1677.297f, 40.74394f };
					break;
			}
			break;
	
		case joaat("provision_wldflwr_creek_plum"):
			switch (iParam0)
			{
				case 0:
					unk = { 1215.327f, -550.4489f, 69.20448f };
					break;
			
				case 1:
					unk = { -1693.434f, 150.5699f, 139.3553f };
					break;
			
				case 2:
					unk = { -1602.843f, -721.0051f, 134.8383f };
					break;
			
				case 3:
					unk = { 1353.102f, -948.4034f, 54.34033f };
					break;
			
				case 4:
					unk = { -1446.998f, -597.8992f, 124.9854f };
					break;
			
				case 5:
					unk = { -2296.586f, -76.67634f, 236.971f };
					break;
			
				case 6:
					unk = { -1938.189f, -254.6173f, 187.9133f };
					break;
			
				case 7:
					unk = { -1158.12f, -417.6564f, 107.3296f };
					break;
			
				case 8:
					unk = { 760.3007f, -1441.318f, 50.42412f };
					break;
			
				case 9:
					unk = { 1852.904f, -250.8335f, 57.8251f };
					break;
			
				case 10:
					unk = { -2035.193f, -422.1566f, 161.4343f };
					break;
			
				case 11:
					unk = { 1331.847f, -1663.221f, 66.0006f };
					break;
			
				case 12:
					unk = { 1558.239f, -373.491f, 80.65101f };
					break;
			
				case 13:
					unk = { -2229.277f, -500.377f, 143.5234f };
					break;
			
				case 14:
					unk = { 1686.212f, -1804f, 51.31548f };
					break;
			
				case 15:
					unk = { -1826.407f, -920.2198f, 105.5977f };
					break;
			
				case 16:
					unk = { 977.1981f, -318.6132f, 92.39168f };
					break;
			
				case 17:
					unk = { 1397.009f, -2207.4f, 48.89367f };
					break;
			}
			break;
	
		case joaat("provision_wldflwr_blood_flower"):
			switch (iParam0)
			{
				case 0:
					unk = { 1577.387f, -919.5087f, 40.94017f };
					break;
			
				case 1:
					unk = { 2306.311f, -194.6056f, 40.92645f };
					break;
			
				case 2:
					unk = { 2741.538f, -694.9662f, 40.5845f };
					break;
			
				case 3:
					unk = { 1956.2f, -1138.579f, 40.54645f };
					break;
			
				case 4:
					unk = { 2348.779f, -616.8898f, 40.75293f };
					break;
			
				case 5:
					unk = { 2306.104f, -258.4776f, 41.20464f };
					break;
			
				case 6:
					unk = { 2244.353f, -620.5598f, 40.61773f };
					break;
			
				case 7:
					unk = { 2144.061f, -349.5971f, 40.51577f };
					break;
			
				case 8:
					unk = { 2193.562f, -1229.606f, 40.98674f };
					break;
			
				case 9:
					unk = { 2208.828f, -1638.493f, 40.58871f };
					break;
			
				case 10:
					unk = { 2780.535f, -588.9789f, 40.60842f };
					break;
			
				case 11:
					unk = { 2023.787f, -623.6941f, 42.3571f };
					break;
			
				case 12:
					unk = { 1691.598f, -682.3945f, 40.66817f };
					break;
			
				case 13:
					unk = { 2046.46f, -1672.703f, 41.02987f };
					break;
			
				case 14:
					unk = { 2360.87f, -534.0822f, 40.85497f };
					break;
			
				case 15:
					unk = { 2272.366f, -576.9771f, 40.74205f };
					break;
			
				case 16:
					unk = { 2235.588f, -817.0897f, 40.92264f };
					break;
			
				case 17:
					unk = { 2126.303f, -1854.556f, 40.62185f };
					break;
			}
			break;
	
		case joaat("provision_wldflwr_chocolate_daisy"):
			switch (iParam0)
			{
				case 0:
					unk = { -1802.734f, -1230.744f, 81.30141f };
					break;
			
				case 1:
					unk = { 887.2073f, -1620.102f, 43.40933f };
					break;
			
				case 2:
					unk = { -797.9009f, -573.506f, 53.54251f };
					break;
			
				case 3:
					unk = { 688.0437f, -855.008f, 47.97547f };
					break;
			
				case 4:
					unk = { 559.2841f, -563.241f, 69.24438f };
					break;
			
				case 5:
					unk = { -996.9205f, -943.0409f, 60.46959f };
					break;
			
				case 6:
					unk = { -471.9287f, -441.182f, 84.15424f };
					break;
			
				case 7:
					unk = { -646.877f, 259.4007f, 90.02546f };
					break;
			
				case 8:
					unk = { 167.3677f, -542.701f, 63.01952f };
					break;
			
				case 9:
					unk = { 862.6147f, -1819.358f, 42.45035f };
					break;
			
				case 10:
					unk = { -1770.195f, -1232.711f, 80.85489f };
					break;
			
				case 11:
					unk = { 205.6236f, -603.0321f, 46.31397f };
					break;
			
				case 12:
					unk = { -1160.332f, -841.0135f, 57.55645f };
					break;
			
				case 13:
					unk = { 625.2186f, -627.9928f, 50.9932f };
					break;
			
				case 14:
					unk = { 713.1145f, -882.6884f, 48.26238f };
					break;
			
				case 15:
					unk = { -772.9506f, 140.4494f, 41.95989f };
					break;
			
				case 16:
					unk = { -416.4897f, -454.566f, 76.58561f };
					break;
			
				case 17:
					unk = { -659.2621f, -472.8685f, 50.49635f };
					break;
			
				case 18:
					unk = { 907.9697f, -2013.26f, 44.72888f };
					break;
			
				case 19:
					unk = { 807.1368f, -988.8497f, 52.42957f };
					break;
			
				case 20:
					unk = { -999.7451f, -755.2712f, 58.68235f };
					break;
			
				case 21:
					unk = { -1664.827f, -1162.666f, 77.30522f };
					break;
			
				case 22:
					unk = { 713.1884f, -555.7805f, 77.14464f };
					break;
			
				case 23:
					unk = { -571.5287f, -297.4931f, 53.0472f };
					break;
			
				case 24:
					unk = { -1017.968f, -33.77452f, 43.04612f };
					break;
			
				case 25:
					unk = { -302.5742f, -493.9792f, 65.02707f };
					break;
			
				case 26:
					unk = { 266.8748f, -567.5861f, 60.7539f };
					break;
			
				case 27:
					unk = { 938.4082f, -2064.738f, 43.32006f };
					break;
			
				case 28:
					unk = { 831.8718f, -1048.238f, 48.52503f };
					break;
			
				case 29:
					unk = { -773.7565f, -733.709f, 52.99412f };
					break;
			
				case 30:
					unk = { -1663.015f, -1012.056f, 100.3875f };
					break;
			
				case 31:
					unk = { 771.7671f, -617.4674f, 76.28725f };
					break;
			
				case 32:
					unk = { -272.7094f, -548.2258f, 43.95261f };
					break;
			
				case 33:
					unk = { -493.6351f, -99.02039f, 42.13488f };
					break;
			
				case 34:
					unk = { -1028.052f, 93.09535f, 89.9007f };
					break;
			
				case 35:
					unk = { 396.9534f, -568.6733f, 61.37666f };
					break;
			
				case 36:
					unk = { 427.8954f, -670.0096f, 49.22416f };
					break;
			
				case 37:
					unk = { 645.3694f, -1205.165f, 46.51438f };
					break;
			
				case 38:
					unk = { -781.3183f, -708.7633f, 52.69588f };
					break;
			
				case 39:
					unk = { -1480.488f, -1145.786f, 73.58723f };
					break;
			
				case 40:
					unk = { 775.7672f, -633.3217f, 75.78204f };
					break;
			
				case 41:
					unk = { 1018.206f, -2149.585f, 42.81111f };
					break;
			
				case 42:
					unk = { -446.1029f, 35.37569f, 42.53957f };
					break;
			
				case 43:
					unk = { -68.08208f, -535.2953f, 63.72619f };
					break;
			
				case 44:
					unk = { -1086.443f, 293.9889f, 55.83007f };
					break;
			
				case 45:
					unk = { 484.8581f, -646.3868f, 44.16967f };
					break;
			
				case 46:
					unk = { 1120.864f, -2221.609f, 48.87132f };
					break;
			
				case 47:
					unk = { 913.8426f, -1373.651f, 58.73856f };
					break;
			
				case 48:
					unk = { -843.8945f, -646.6285f, 61.70801f };
					break;
			
				case 49:
					unk = { -1375.26f, -884.5809f, 93.20879f };
					break;
			
				case 50:
					unk = { 838.4435f, -807.2313f, 60.97507f };
					break;
			
				case 51:
					unk = { -541.0539f, -499.2539f, 51.61814f };
					break;
			
				case 52:
					unk = { -338.3631f, 187.3566f, 62.11228f };
					break;
			
				case 53:
					unk = { 36.32716f, -560.6879f, 49.99359f };
					break;
			}
			break;
	
		case joaat("provision_wldflwr_wisteria"):
			switch (iParam0)
			{
				case 0:
					unk = { -1999.087f, -967.3788f, 100.2708f };
					break;
			
				case 1:
					unk = { -2054.315f, -2129.293f, 51.13446f };
					break;
			
				case 2:
					unk = { -2368.826f, -1824.353f, 107.4021f };
					break;
			
				case 3:
					unk = { 2769.278f, 2074.029f, 166.9392f };
					break;
			
				case 4:
					unk = { 2236.578f, 1626.647f, 84.76954f };
					break;
			
				case 5:
					unk = { -2363.491f, -364.6791f, 143.1913f };
					break;
			
				case 6:
					unk = { 2268.302f, 1274.2f, 93.99426f };
					break;
			
				case 7:
					unk = { -1950.254f, -1062.476f, 75.34731f };
					break;
			
				case 8:
					unk = { -2345.954f, -1739.286f, 114.7719f };
					break;
			
				case 9:
					unk = { -2084.32f, -2089.309f, 56.60844f };
					break;
			
				case 10:
					unk = { 2631.735f, 1974.998f, 96.31788f };
					break;
			
				case 11:
					unk = { -2365.458f, -507.0249f, 145.6053f };
					break;
			
				case 12:
					unk = { -1970.063f, -1124.512f, 74.62655f };
					break;
			
				case 13:
					unk = { -2435.026f, -1586.924f, 148.4297f };
					break;
			
				case 14:
					unk = { -2123.584f, -2032.072f, 58.84632f };
					break;
			
				case 15:
					unk = { -2143.314f, -564.3889f, 137.8063f };
					break;
			
				case 16:
					unk = { 2625.632f, 1851.786f, 89.97489f };
					break;
			
				case 17:
					unk = { 2375.784f, 1069.28f, 84.05659f };
					break;
			
				case 18:
					unk = { -2676.946f, -1423.428f, 147.7894f };
					break;
			
				case 19:
					unk = { -1778.268f, -1118.677f, 82.0814f };
					break;
			
				case 20:
					unk = { 2273.503f, 921.3495f, 78.24824f };
					break;
			
				case 21:
					unk = { -2056.528f, -1906.18f, 110.8105f };
					break;
			
				case 22:
					unk = { 2526.579f, 1726.432f, 87.43194f };
					break;
			
				case 23:
					unk = { -2243.863f, -759.4833f, 141.9535f };
					break;
			
				case 24:
					unk = { -2492f, -1385.933f, 148.4419f };
					break;
			
				case 25:
					unk = { -2202.033f, -2002.685f, 75.23257f };
					break;
			
				case 26:
					unk = { -2097.383f, -799.0377f, 83.25292f };
					break;
			
				case 27:
					unk = { 2461.039f, 801.8494f, 67.13483f };
					break;
			
				case 28:
					unk = { 2451.55f, 1697.122f, 96.74268f };
					break;
			
				case 29:
					unk = { 2879.246f, 2218.497f, 156.5749f };
					break;
			
				case 30:
					unk = { -2023.242f, -863.724f, 100.6152f };
					break;
			
				case 31:
					unk = { -2609.855f, -1486.657f, 145.0986f };
					break;
			
				case 32:
					unk = { 2443.427f, 635.2462f, 69.1945f };
					break;
			
				case 33:
					unk = { 2428.804f, 1574.949f, 85.993f };
					break;
			
				case 34:
					unk = { 2749.768f, 2172.252f, 155.8185f };
					break;
			
				case 35:
					unk = { -2264.978f, -1887.964f, 118.8384f };
					break;
			}
			break;
	
		case joaat("provision_wldflwr_texas_blue_bonnet"):
			switch (iParam0)
			{
				case 0:
					unk = { -4551.036f, -3717.372f, 16.74775f };
					break;
			
				case 1:
					unk = { -4756.509f, -3243.545f, 7.083439f };
					break;
			
				case 2:
					unk = { -1308.42f, -1904.898f, 62.07966f };
					break;
			
				case 3:
					unk = { -5177.246f, -2452.09f, 0.591442f };
					break;
			
				case 4:
					unk = { -881.3884f, -1971.176f, 49.44643f };
					break;
			
				case 5:
					unk = { -5987.447f, -3678.175f, -6.555591f };
					break;
			
				case 6:
					unk = { -4701.285f, -3750.453f, 11.8994f };
					break;
			
				case 7:
					unk = { -4487.299f, -3140.017f, 7.967143f };
					break;
			
				case 8:
					unk = { -5642.289f, -2894.806f, 2.9304f };
					break;
			
				case 9:
					unk = { -749.5547f, -1941.077f, 47.16733f };
					break;
			
				case 10:
					unk = { -5608.817f, -3765.67f, -24.15397f };
					break;
			
				case 11:
					unk = { -1150.277f, -1911.295f, 41.6031f };
					break;
			
				case 12:
					unk = { -4672.48f, -3541.827f, 15.18375f };
					break;
			
				case 13:
					unk = { -4347.379f, -3357.034f, 33.69977f };
					break;
			
				case 14:
					unk = { -5507.112f, -3186.329f, -21.6769f };
					break;
			
				case 15:
					unk = { -5527.961f, -3600.143f, -22.37232f };
					break;
			
				case 16:
					unk = { -1137.674f, -1829.151f, 61.23735f };
					break;
			
				case 17:
					unk = { -758.7194f, -1756.665f, 53.39788f };
					break;
			
				case 18:
					unk = { -5310.222f, -3986.815f, -9.60792f };
					break;
			
				case 19:
					unk = { -4059.273f, -3291.623f, 32.05573f };
					break;
			
				case 20:
					unk = { -1519.904f, -1989.379f, 46.35562f };
					break;
			
				case 21:
					unk = { -5734.856f, -3350.746f, -24.15577f };
					break;
			
				case 22:
					unk = { -817.0863f, -1644.762f, 61.01518f };
					break;
			
				case 23:
					unk = { -1049.058f, -1692.225f, 81.09015f };
					break;
			
				case 24:
					unk = { -4016.213f, -3415.796f, 47.05555f };
					break;
			
				case 25:
					unk = { -5151.946f, -3656.595f, -3.751917f };
					break;
			
				case 26:
					unk = { -682.2558f, -1589.873f, 47.90882f };
					break;
			
				case 27:
					unk = { -1424.341f, -1981.077f, 44.61142f };
					break;
			
				case 28:
					unk = { -5962.068f, -3498.418f, -24.10148f };
					break;
			
				case 29:
					unk = { -1052.637f, -1796.781f, 62.35318f };
					break;
			
				case 30:
					unk = { -5154.702f, -3471.117f, 0.055218f };
					break;
			
				case 31:
					unk = { -3989.788f, -3672.628f, 47.61529f };
					break;
			
				case 32:
					unk = { -698.519f, -1487.196f, 47.90404f };
					break;
			
				case 33:
					unk = { -940.1525f, -1933.584f, 48.53842f };
					break;
			
				case 34:
					unk = { -1374.326f, -1872.431f, 69.53745f };
					break;
			
				case 35:
					unk = { -6336.438f, -3537.301f, -28.13726f };
					break;
			}
			break;
	
		case joaat("provision_wldflwr_bitterweed"):
			switch (iParam0)
			{
				case 0:
					unk = { -837.0764f, -179.6575f, 77.68317f };
					break;
			
				case 1:
					unk = { -1451.45f, 475.6181f, 103.6345f };
					break;
			
				case 2:
					unk = { -2527.715f, 362.7336f, 151.6517f };
					break;
			
				case 3:
					unk = { 2854.28f, 694.4197f, 64.87576f };
					break;
			
				case 4:
					unk = { -2080.122f, 693.6569f, 121.9127f };
					break;
			
				case 5:
					unk = { 2545.92f, 274.1429f, 69.23188f };
					break;
			
				case 6:
					unk = { 2682.133f, 295.6832f, 61.90741f };
					break;
			
				case 7:
					unk = { -1957.831f, 477.7415f, 116.0796f };
					break;
			
				case 8:
					unk = { -2458.693f, 459.8373f, 144.0181f };
					break;
			
				case 9:
					unk = { -1308.998f, 286.0198f, 75.79656f };
					break;
			
				case 10:
					unk = { 2074.065f, 823.5678f, 153.9429f };
					break;
			
				case 11:
					unk = { -755.7537f, 25.02407f, 81.93896f };
					break;
			
				case 12:
					unk = { -1708.174f, 603.0139f, 117.7064f };
					break;
			
				case 13:
					unk = { 2245.984f, 392.1618f, 46.47459f };
					break;
			
				case 14:
					unk = { -2541.703f, 658.5632f, 136.1618f };
					break;
			
				case 15:
					unk = { 2363.628f, 883.5585f, 73.92034f };
					break;
			
				case 16:
					unk = { -1450.8f, 107.9894f, 89.53876f };
					break;
			
				case 17:
					unk = { -622.4541f, -18.40578f, 85.21953f };
					break;
			
				case 18:
					unk = { 2177.449f, -80.94263f, 50.22923f };
					break;
			
				case 19:
					unk = { 1934.772f, 470.8045f, 130.7732f };
					break;
			
				case 20:
					unk = { -1800.463f, 345.83f, 115.2097f };
					break;
			
				case 21:
					unk = { -2508.952f, 833.7975f, 147.4184f };
					break;
			
				case 22:
					unk = { -1275.675f, 105.488f, 70.64514f };
					break;
			
				case 23:
					unk = { 2491.08f, 937.9883f, 79.73892f };
					break;
			
				case 24:
					unk = { -1311.239f, -77.12775f, 96.92197f };
					break;
			
				case 25:
					unk = { 2252.339f, 100.3517f, 54.90428f };
					break;
			
				case 26:
					unk = { -1684.869f, 354.543f, 107.3314f };
					break;
			
				case 27:
					unk = { -2301.606f, 790.7549f, 132.5147f };
					break;
			
				case 28:
					unk = { 2296.166f, 575.2374f, 75.16478f };
					break;
			
				case 29:
					unk = { 2765.188f, 983.2751f, 66.55457f };
					break;
			
				case 30:
					unk = { 2402.335f, 101.8964f, 45.81161f };
					break;
			
				case 31:
					unk = { -2176.205f, 473.7471f, 117.8443f };
					break;
			
				case 32:
					unk = { 2699.46f, 688.5892f, 75.24394f };
					break;
			
				case 33:
					unk = { -1565.916f, 274.7366f, 113.4644f };
					break;
			
				case 34:
					unk = { 2219.457f, 1329.016f, 98.94907f };
					break;
			
				case 35:
					unk = { -1172.452f, -210.5993f, 92.73193f };
					break;
			}
			break;
	
		case joaat("provision_wldflwr_agarita"):
			switch (iParam0)
			{
				case 0:
					unk = { -6158.079f, -3672.228f, 23.7246f };
					break;
			
				case 1:
					unk = { -3176.188f, -2494.712f, 71.67211f };
					break;
			
				case 2:
					unk = { -4454.255f, -3654.398f, 56.73625f };
					break;
			
				case 3:
					unk = { -2837.986f, -2626.157f, 92.17568f };
					break;
			
				case 4:
					unk = { -3517.831f, -1922.929f, 10.00902f };
					break;
			
				case 5:
					unk = { -5994.68f, -3685.647f, -6.307046f };
					break;
			
				case 6:
					unk = { -2860.788f, -2869.481f, 88.79768f };
					break;
			
				case 7:
					unk = { -5399.701f, -3534.924f, 4.885307f };
					break;
			
				case 8:
					unk = { -3677.977f, -3580.438f, 46.71785f };
					break;
			
				case 9:
					unk = { -4742.011f, -2475.097f, 7.924973f };
					break;
			
				case 10:
					unk = { -3108.148f, -2259.494f, 73.75759f };
					break;
			
				case 11:
					unk = { -5242.113f, -3844.581f, -4.130068f };
					break;
			
				case 12:
					unk = { -1807.05f, -2830.738f, 14.16864f };
					break;
			
				case 13:
					unk = { -4757.845f, -2252.798f, 48.07966f };
					break;
			
				case 14:
					unk = { -4910.926f, -3754.54f, 25.15245f };
					break;
			
				case 15:
					unk = { -5379.681f, -2706.009f, 15.69893f };
					break;
			
				case 16:
					unk = { -3386.393f, -3420.153f, 45.52135f };
					break;
			
				case 17:
					unk = { -2123.675f, -2281.767f, 97.89298f };
					break;
			}
			break;
	
		case joaat("provision_wldflwr_wild_rhubarb"):
			switch (iParam0)
			{
				case 0:
					unk = { -3551.613f, -2539.796f, -14.11569f };
					break;
			
				case 1:
					unk = { -2279.294f, -2538.378f, 64.17388f };
					break;
			
				case 2:
					unk = { -4952.385f, -2448.958f, -4.652772f };
					break;
			
				case 3:
					unk = { -4585.389f, -2931.452f, -19.1451f };
					break;
			
				case 4:
					unk = { -3422.309f, -2735.995f, -5.550219f };
					break;
			
				case 5:
					unk = { -3807.379f, -2660.309f, -14.97992f };
					break;
			
				case 6:
					unk = { -3002.762f, -3204.804f, -0.745385f };
					break;
			
				case 7:
					unk = { -2736.513f, -2584.714f, 66.61004f };
					break;
			
				case 8:
					unk = { -2026.944f, -2914.289f, 7.941141f };
					break;
			
				case 9:
					unk = { -2903.181f, -2520.676f, 64.85474f };
					break;
			
				case 10:
					unk = { -3981.757f, -2377.309f, -9.19969f };
					break;
			
				case 11:
					unk = { -3671.022f, -2226.875f, -13.62176f };
					break;
			
				case 12:
					unk = { -2367.019f, -2719.615f, 67.30415f };
					break;
			
				case 13:
					unk = { -2960.799f, -3103.594f, 7.026269f };
					break;
			
				case 14:
					unk = { -4535.32f, -2959.584f, -18.97934f };
					break;
			
				case 15:
					unk = { -3647.044f, -2967.884f, 3.168286f };
					break;
			
				case 16:
					unk = { -4901.773f, -2732.863f, -11.23535f };
					break;
			
				case 17:
					unk = { -1785.729f, -2867.956f, 3.920457f };
					break;
			
				case 18:
					unk = { -3818.323f, -2431.667f, -11.85196f };
					break;
			
				case 19:
					unk = { -3573.904f, -2077.847f, -13.69387f };
					break;
			
				case 20:
					unk = { -2413.509f, -2600.069f, 79.50917f };
					break;
			
				case 21:
					unk = { -3753.492f, -3147.621f, -7.111763f };
					break;
			
				case 22:
					unk = { -4268.449f, -3031.226f, -10.47778f };
					break;
			
				case 23:
					unk = { -4880.2f, -3002.013f, -19.80571f };
					break;
			
				case 24:
					unk = { -1558.065f, -2653.922f, 61.00679f };
					break;
			
				case 25:
					unk = { -3019.986f, -2678.777f, 83.5397f };
					break;
			
				case 26:
					unk = { -2787.677f, -3094.006f, 11.7956f };
					break;
			
				case 27:
					unk = { -3053.521f, -2550.07f, 69.55097f };
					break;
			
				case 28:
					unk = { -3481.634f, -2268.223f, -4.268718f };
					break;
			
				case 29:
					unk = { -3681.408f, -2437.438f, -14.75682f };
					break;
			
				case 30:
					unk = { -4041.084f, -2841.911f, -8.170352f };
					break;
			
				case 31:
					unk = { -4718.928f, -2797.024f, -10.74108f };
					break;
			
				case 32:
					unk = { -2482.316f, -2620.406f, 74.44934f };
					break;
			
				case 33:
					unk = { -2750.083f, -3066.452f, 8.679184f };
					break;
			
				case 34:
					unk = { -1753.186f, -2664.416f, 64.18607f };
					break;
			
				case 35:
					unk = { -3557.486f, -3220.925f, 4.855478f };
					break;
			
				case 36:
					unk = { -3605.652f, -2553.657f, -15.10676f };
					break;
			
				case 37:
					unk = { -1983.373f, -2516.197f, 64.48646f };
					break;
			
				case 38:
					unk = { -3385.293f, -2426.299f, 0.909047f };
					break;
			
				case 39:
					unk = { -2544.437f, -2392.296f, 64.56077f };
					break;
			
				case 40:
					unk = { -3117.798f, -2193.891f, 73.96046f };
					break;
			
				case 41:
					unk = { -3262.19f, -3033.966f, 0.071635f };
					break;
			
				case 42:
					unk = { -4690.015f, -2971.554f, -19.06419f };
					break;
			
				case 43:
					unk = { -3921.625f, -2908.703f, -16.13763f };
					break;
			
				case 44:
					unk = { -2723.317f, -3063.674f, 5.848349f };
					break;
			
				case 45:
					unk = { -2019.112f, -2598.32f, 67.13496f };
					break;
			
				case 46:
					unk = { -2738.691f, -2152.243f, 79.31107f };
					break;
			
				case 47:
					unk = { -4666.345f, -3016.519f, -16.4672f };
					break;
			
				case 48:
					unk = { -3070.031f, -2841.298f, 19.88575f };
					break;
			
				case 49:
					unk = { -3819.758f, -2720.052f, -15.92571f };
					break;
			
				case 50:
					unk = { 2053.598f, -1840.162f, 40.69882f };
					break;
			
				case 51:
					unk = { -3592.551f, -2689.42f, -10.87045f };
					break;
			
				case 52:
					unk = { -3268.259f, -2678.055f, 6.380742f };
					break;
			
				case 53:
					unk = { -2681.336f, -2582.359f, 68.82637f };
					break;
			}
			break;
	}

	return unk;
}

Vector3 func_412(int iParam0, Hash hParam1) // Position - 0x15CA8 Hash - 0x980CF3F1 ^0x980CF3F1
{
	var unk;

	switch (hParam1)
	{
		case -1962391614:
			switch (iParam0)
			{
				case 0:
					unk = { -1981.892f, 2189.041f, 333.734f };
					break;
			
				case 1:
					unk = { -1328.974f, 2290.826f, 308.623f };
					break;
			
				case 2:
					unk = { -1589.428f, 2207.341f, 287.4981f };
					break;
			
				case 3:
					unk = { -1721.467f, 2542.711f, 472.1256f };
					break;
			
				case 4:
					unk = { -1762.796f, 2029.415f, 263.6463f };
					break;
			
				case 5:
					unk = { -1492.626f, 2218.59f, 294.178f };
					break;
			}
			break;
	
		case -1901964465:
			switch (iParam0)
			{
				case 0:
					unk = { -1956.95f, 1877.6f, 247.212f };
					break;
			
				case 1:
					unk = { -986.2538f, 2175.431f, 340.0901f };
					break;
			
				case 2:
					unk = { -1191.99f, 2091.873f, 348.0234f };
					break;
			
				case 3:
					unk = { -1467.143f, 2030.774f, 338.4102f };
					break;
			
				case 4:
					unk = { -1455.401f, 1864.565f, 306.1352f };
					break;
			
				case 5:
					unk = { -1876.256f, 2176.413f, 312.5924f };
					break;
			}
			break;
	
		case -1695562218:
			switch (iParam0)
			{
				case 0:
					unk = { -1538.826f, 2965.289f, 463.942f };
					break;
			
				case 1:
					unk = { -2231.305f, -2062.452f, 57.61456f };
					break;
			
				case 2:
					unk = { -1828.741f, 2240.774f, 320.9892f };
					break;
			
				case 3:
					unk = { -1730.363f, 467.283f, 108.748f };
					break;
			
				case 4:
					unk = { 1315.935f, 661.2304f, 86.00089f };
					break;
			
				case 5:
					unk = { -857.4758f, -957.7673f, 40.50006f };
					break;
			}
			break;
	
		case -1574273736:
			switch (iParam0)
			{
				case 0:
					unk = { 241.3359f, 1954.009f, 203.8331f };
					break;
			
				case 1:
					unk = { -265.57f, 1415.222f, 103.074f };
					break;
			
				case 2:
					unk = { -422.7934f, 73.59402f, 40.49999f };
					break;
			
				case 3:
					unk = { 1585.246f, 1433.348f, 144.6408f };
					break;
			
				case 4:
					unk = { -2464.38f, 768.951f, 128.829f };
					break;
			
				case 5:
					unk = { -1200.365f, 112.272f, 40.5f };
					break;
			}
			break;
	
		case -1471980896:
			switch (iParam0)
			{
				case 0:
					unk = { -846.821f, 2662.214f, 347.036f };
					break;
			
				case 1:
					unk = { -1034.102f, 2872.896f, 370.5002f };
					break;
			
				case 2:
					unk = { -5031.42f, -4073.341f, -29.08f };
					break;
			
				case 3:
					unk = { -1065.014f, 2940.17f, 406.0876f };
					break;
			
				case 4:
					unk = { -653.7477f, 2688.019f, 343.4409f };
					break;
			
				case 5:
					unk = { -1480.449f, 3113.121f, 494.9475f };
					break;
			}
			break;
	
		case -925996336:
			switch (iParam0)
			{
				case 0:
					unk = { -2832.628f, 1112.049f, 270.5342f };
					break;
			
				case 1:
					unk = { -1009.801f, 1778.724f, 291.9197f };
					break;
			
				case 2:
					unk = { -1118.27f, 1078.411f, 164.9164f };
					break;
			
				case 3:
					unk = { -2058.1404f, 1136.092f, 184.418f };
					break;
			
				case 4:
					unk = { -1210.107f, 1059.117f, 170.5688f };
					break;
			
				case 5:
					unk = { -2175.26f, 1071.477f, 219.0795f };
					break;
			}
			break;
	
		case -669648037:
			switch (iParam0)
			{
				case 0:
					unk = { -1730.371f, 2193.851f, 292.6352f };
					break;
			
				case 1:
					unk = { -2007.754f, 2271.368f, 402.5477f };
					break;
			
				case 2:
					unk = { -1438.578f, 2395.003f, 313.6951f };
					break;
			
				case 3:
					unk = { -1013.861f, 2632.919f, 311.9872f };
					break;
			
				case 4:
					unk = { -1154.014f, 2343.382f, 324.9037f };
					break;
			
				case 5:
					unk = { -1506.043f, 2455.094f, 418.0699f };
					break;
			}
			break;
	
		case -564862271:
			switch (iParam0)
			{
				case 0:
					unk = { -1085.924f, 824.4896f, 116.0231f };
					break;
			
				case 1:
					unk = { -1323.116f, 1332.734f, 202.8198f };
					break;
			
				case 2:
					unk = { 238.9727f, 1517.669f, 114.5001f };
					break;
			
				case 3:
					unk = { -750.924f, 613.58f, 55.679f };
					break;
			
				case 4:
					unk = { 546.835f, 1801.014f, 127.633f };
					break;
			
				case 5:
					unk = { -3445.096f, -3148.687f, -11f };
					break;
			}
			break;
	
		case -488648162:
			switch (iParam0)
			{
				case 0:
					unk = { -1438.599f, 1353.098f, 226.0597f };
					break;
			
				case 1:
					unk = { -1159.856f, 1226.773f, 221.4363f };
					break;
			
				case 2:
					unk = { -1794.874f, 1699.672f, 237.3792f };
					break;
			
				case 3:
					unk = { -2553.499f, 1253.569f, 242.0133f };
					break;
			
				case 4:
					unk = { -2006.899f, 1164.015f, 175.4224f };
					break;
			
				case 5:
					unk = { -1915.941f, 1229.928f, 185.1237f };
					break;
			}
			break;
	
		case -413279196:
			switch (iParam0)
			{
				case 0:
					unk = { -1833.167f, -2237.894f, 40.5f };
					break;
			
				case 1:
					unk = { -1631.138f, 1663.711f, 245.4464f };
					break;
			
				case 2:
					unk = { -1990.375f, 1065.361f, 167.4834f };
					break;
			
				case 3:
					unk = { -2502.919f, -1549.846f, 143.1926f };
					break;
			
				case 4:
					unk = { 1132.783f, -130.2699f, 84.65631f };
					break;
			
				case 5:
					unk = { 796.393f, -1216.777f, 40.5f };
					break;
			}
			break;
	
		case -399160143:
			switch (iParam0)
			{
				case 0:
					unk = { -1487.043f, 1250.889f, 313.5081f };
					break;
			
				case 1:
					unk = { -761.7214f, 1628.036f, 280.7698f };
					break;
			
				case 2:
					unk = { -1524.802f, 1718.539f, 239.584f };
					break;
			
				case 3:
					unk = { -2110.301f, 1834.77f, 254.1476f };
					break;
			
				case 4:
					unk = { -928.1132f, 1548.871f, 237.9028f };
					break;
			
				case 5:
					unk = { -1408.09f, 1442.827f, 225.8582f };
					break;
			}
			break;
	
		case -282219948:
			switch (iParam0)
			{
				case 0:
					unk = { 585.2773f, -627.6782f, 40.5f };
					break;
			
				case 1:
					unk = { 576.2587f, -1625.504f, 40.5f };
					break;
			
				case 2:
					unk = { -1887.101f, -1178.01f, 73.08592f };
					break;
			
				case 3:
					unk = { 1529.85f, -2172.842f, 40.5f };
					break;
			
				case 4:
					unk = { 2825.028f, 2179.208f, 155.6f };
					break;
			
				case 5:
					unk = { 2258.411f, 333.4229f, 43.45484f };
					break;
			}
			break;
	
		case 212472674:
			switch (iParam0)
			{
				case 0:
					unk = { -1344.81f, 2543.583f, 314.6429f };
					break;
			
				case 1:
					unk = { -1137.542f, 2415.694f, 331.9357f };
					break;
			
				case 2:
					unk = { -424.708f, 2767.098f, 338.0498f };
					break;
			
				case 3:
					unk = { -540.3226f, 2599.64f, 337.9672f };
					break;
			
				case 4:
					unk = { -1414.336f, 2732.175f, 411.6711f };
					break;
			
				case 5:
					unk = { -726.2466f, 2680.246f, 347.301f };
					break;
			}
			break;
	
		case 698668228:
			switch (iParam0)
			{
				case 0:
					unk = { 2141.272f, -823.959f, 40.52f };
					break;
			
				case 1:
					unk = { 2793.688f, -713.969f, 40.5f };
					break;
			
				case 2:
					unk = { 2249.056f, -1407.771f, 40.5f };
					break;
			
				case 3:
					unk = { 1628.499f, -1102.416f, 40.537f };
					break;
			
				case 4:
					unk = { 498.424f, 534.23f, 108.393f };
					break;
			
				case 5:
					unk = { 1932.035f, -964.8993f, 39.97401f };
					break;
			}
			break;
	
		case 866218183:
			switch (iParam0)
			{
				case 0:
					unk = { -2059.842f, -853.856f, 82.692f };
					break;
			
				case 1:
					unk = { -648.1997f, -280.1455f, 40.49999f };
					break;
			
				case 2:
					unk = { -1623.653f, -2439.15f, 40.5f };
					break;
			
				case 3:
					unk = { -3998.81f, -3877.813f, -25.502f };
					break;
			
				case 4:
					unk = { 2298.832f, 895.7715f, 72.58966f };
					break;
			
				case 5:
					unk = { -1626.47f, -2834.9f, -12.75f };
					break;
			}
			break;
	
		case 972001444:
			switch (iParam0)
			{
				case 0:
					unk = { 2566.666f, -709.825f, 40.52f };
					break;
			
				case 1:
					unk = { 1654.044f, -695.2427f, 40.54647f };
					break;
			
				case 2:
					unk = { 2834.497f, -141.3161f, 41.19836f };
					break;
			
				case 3:
					unk = { 2731.036f, -432.3745f, 40.64665f };
					break;
			
				case 4:
					unk = { 2192.02f, -423.3405f, 39.70004f };
					break;
			
				case 5:
					unk = { 2435.077f, -329.223f, 40.52004f };
					break;
			}
			break;
	
		case 1051711290:
			switch (iParam0)
			{
				case 0:
					unk = { -2879.071f, 96.89554f, 182.9811f };
					break;
			
				case 1:
					unk = { -1470.532f, 278.8819f, 91.28812f };
					break;
			
				case 2:
					unk = { -2675.592f, -334.693f, 141.007f };
					break;
			
				case 3:
					unk = { -966.7284f, -1953.708f, 40.5f };
					break;
			
				case 4:
					unk = { -2646.19f, -3254.188f, -16.439f };
					break;
			
				case 5:
					unk = { -273.971f, -590.184f, 40.5f };
					break;
			}
			break;
	
		case 1081670855:
			switch (iParam0)
			{
				case 0:
					unk = { 2956.994f, 351.384f, 40.5f };
					break;
			
				case 1:
					unk = { 2636.47f, 1931.858f, 84.56282f };
					break;
			
				case 2:
					unk = { 404.7244f, -1076.743f, 40.5f };
					break;
			
				case 3:
					unk = { -473.4391f, 998.4291f, 86.65992f };
					break;
			
				case 4:
					unk = { 2234.304f, 1354.916f, 84.05428f };
					break;
			
				case 5:
					unk = { -1527.2f, -2183.455f, 40.5f };
					break;
			}
			break;
	
		case 1287909434:
			switch (iParam0)
			{
				case 0:
					unk = { -2067.73f, 1223.025f, 227.7125f };
					break;
			
				case 1:
					unk = { -1464.237f, 1544.253f, 252.5666f };
					break;
			
				case 2:
					unk = { -1608.148f, 1746.335f, 279.4192f };
					break;
			
				case 3:
					unk = { -886.0485f, 1362.238f, 243.5741f };
					break;
			
				case 4:
					unk = { -1164.172f, 1429.997f, 303.1261f };
					break;
			
				case 5:
					unk = { -1206.728f, 1147.919f, 168.9505f };
					break;
			}
			break;
	
		case 2031475177:
			switch (iParam0)
			{
				case 0:
					unk = { -1624.272f, 1763.458f, 298.7617f };
					break;
			
				case 1:
					unk = { -2179.87f, 1803.763f, 267.5596f };
					break;
			
				case 2:
					unk = { -816.92f, 1492.335f, 259.852f };
					break;
			
				case 3:
					unk = { -1603.005f, 1868.278f, 318.9729f };
					break;
			
				case 4:
					unk = { -1981.376f, 1884.209f, 263.4395f };
					break;
			
				case 5:
					unk = { -1059.849f, 2018.669f, 387.223f };
					break;
			}
			break;
	}

	return unk;
}

BOOL func_413(Hash hParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x16B30 Hash - 0xD581E0A ^0x1D24F810
{
	int num;
	int num2;

	if (func_5(hParam0, -1522723129))
		return false;

	num = func_87(hParam0, false, false, false);

	if (!func_5(hParam0, -352095726))
	{
		num2 = func_403(12);
	
		if (num2 < 5)
			if (func_5(hParam0, 683680997))
				return false;
	
		if (num2 < 10)
			if (func_5(hParam0, -283942357))
				return false;
	}

	if (num == 10)
		return false;

	if (PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED_AT_COORDS(vParam1))
		return false;

	return true;
}

BOOL func_414(var uParam0, Hash hParam1) // Position - 0x16BB8 Hash - 0xF369C753 ^0x22C7CCC8
{
	int i;

	for (i = 0; i < uParam0->f_11; i = i + 1)
	{
		if (uParam0->f_11[i] == hParam1)
			return true;
	}

	return false;
}

BOOL func_415(var uParam0, int iParam1) // Position - 0x16BE7 Hash - 0xDED7EEAE ^0xDED7EEAE
{
	int num;

	num = iParam1 + 1;

	if (func_441(num))
		return false;

	if (!_IS_NULL_VECTOR(uParam0->[num /*3*/]))
		return false;

	return true;
}

BOOL func_416(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x16C17 Hash - 0xF94ED236 ^0xF94ED236
{
	if (func_247(iParam2, iParam3))
		return true;

	return false;
}

void func_417(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x16C2F Hash - 0x3169A239 ^0x47E831EC
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
		{
			if (Global_1292143.f_20.f_1[i /*21*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1292143.f_20.f_1[i /*21*/].f_1 = iParam1;
			}
		
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1292143.f_20.f_1[i /*21*/].f_2 = iParam2;
				Global_1292143.f_20.f_1[i /*21*/].f_3 = iParam3;
			}
		
			return;
		}
	}

	func_442(iParam0, iParam1, iParam2, iParam3);
	return;
}

var func_418(BOOL bParam0, var uParam1, var uParam2) // Position - 0x16CCD Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_419(var uParam0, int iParam1) // Position - 0x16CE4 Hash - 0xD05180BA ^0x39589262
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

void func_420(var uParam0, int iParam1) // Position - 0x16D6A Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_421(var uParam0, int iParam1) // Position - 0x16DA6 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_370(*uParam0);
	num2 = func_369(*uParam0);

	if (iParam1 < 1 || iParam1 > func_375(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_422(var uParam0, int iParam1) // Position - 0x16DF9 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_423(var uParam0, int iParam1) // Position - 0x16E34 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_424(var uParam0, int iParam1) // Position - 0x16E6D Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_425(Hash hParam0, int iParam1) // Position - 0x16EA5 Hash - 0x930C4241 ^0x2C8F95BA
{
	return iParam1 == func_4(hParam0, 1224357681);
}

BOOL func_426(Hash hParam0, Hash hParam1) // Position - 0x16EBB Hash - 0x33966A5 ^0x8C6CC565
{
	Hash categoryItemSetBuyAward;
	int awardAcquireCostCountFromCostType;
	int i;
	var unk;

	categoryItemSetBuyAward = COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(hParam1, 0);

	if (!func_139(categoryItemSetBuyAward))
		return false;

	awardAcquireCostCountFromCostType = ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_COUNT_FROM_COST_TYPE(categoryItemSetBuyAward, -489628648);
	unk = 15;

	for (i = 0; i < awardAcquireCostCountFromCostType; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_AWARD_ACQUIRE_COST(categoryItemSetBuyAward, -489628648, i, &unk[i /*2*/]))
			if (func_22(unk[i /*2*/], 0) && unk[i /*2*/] == hParam0)
				return true;
	}

	return false;
}

BOOL func_427(Hash hParam0) // Position - 0x16F37 Hash - 0xA839C3B7 ^0xFE515ADA
{
	int i;
	int num;

	i = 0;
	num = Global_1915656.f_20646.f_1010.f_201;

	if (hParam0 != 0)
	{
		if (num < 200)
		{
			for (i = 0; i < num; i = i + 1)
			{
				if (Global_1915656.f_20646.f_1010[i] == hParam0)
					return 1;
			}
		}
	}

	return 0;
}

BOOL func_428(Hash hParam0, int iParam1) // Position - 0x16F88 Hash - 0x58B8EE01 ^0x58B8EE01
{
	var unk;
	int num;
	Hash hash;

	if (!func_22(hParam0, 0))
		return 0;

	if (iParam1 == -1)
		return 0;

	num = func_443(iParam1);

	if (num == -1)
		return 0;

	if (!func_444(6, &unk))
		return 0;

	unk.f_2 = -815325344;
	unk.f_3 = func_445(num);

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

int func_429(int iParam0) // Position - 0x17012 Hash - 0xA7E21081 ^0xBD28E742
{
	int num;
	int status;

	num = func_446(iParam0);

	if (num == 0 || num == 1 || num == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &status))
		{
			if (status == 4 || status == 2 || num == 0 && status != 0)
			{
				func_417(iParam0, status, 0, 0);
				num = status;
			}
		}
		else if (num == 1 || num == 5)
		{
			func_417(iParam0, 4, 0, 0);
		}
	}

	return num;
}

Hash func_430(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1709C Hash - 0xC67FD48A ^0x72A5971A
{
	int num;

	num = 0;

	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
		
			case 1:
				return 866168015;
		
			case 2:
				return -1103707655;
		
			default:
			
		}
	
		num = 3;
	}

	if (bParam2)
	{
		switch (iParam0 - num)
		{
			case 0:
				return 75922725;
		
			case 1:
				return 1070046552;
		
			case 2:
				return -1843707398;
		
			case 3:
				return -1571233163;
		
			case 4:
				return -1197011183;
		
			default:
			
		}
	}

	return 0;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_431(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x17138 Hash - 0x8AAE9761 ^0xF5D9C5DD
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_327(hParam0))
		return false;

	*uParam3 = ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_COUNT_FROM_COST_TYPE(hParam0, hParam1);

	if (*uParam3 == 0)
	{
		!bParam4;
		return false;
	}

	!bParam4;

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_AWARD_ACQUIRE_COST(hParam0, hParam1, i, &uParam2->[i /*2*/]))
			goto 0x70;
	
		!bParam4;
	}

	if (bParam5)
		func_447(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

BOOL func_432(Hash hParam0) // Position - 0x171C7 Hash - 0x1B551CF7 ^0x9235FF01
{
	return func_169(hParam0) == 1946043663;
}

BOOL func_433(Hash hParam0) // Position - 0x171DB Hash - 0x1B551CF7 ^0xC792EAB9
{
	return func_169(hParam0) == -126813555;
}

BOOL func_434(int iParam0) // Position - 0x171EF Hash - 0x6C22F57C ^0x1F3736DE
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_435() // Position - 0x17212 Hash - 0xD56F3AB7 ^0x4ED7D083
{
	if (func_3() == 0)
		return MONEY::_NETWORK_GET_CASH_BALANCE();

	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_436(int iParam0, Hash hParam1) // Position - 0x1722D Hash - 0x3911B2FD ^0x13C4D79B
{
	if (iParam0 == 15 && func_5(hParam1, -2051813666))
		return 1;

	return 0;
}

int func_437(Hash hParam0, int iParam1) // Position - 0x17252 Hash - 0x3B4883DD ^0xBE4A62CA
{
	var unk;
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_22(hParam0, 0))
		return 0;

	unk = { func_269(false) };
	unk.f_4 = func_448(iParam1);
	guid = { func_195(hParam0, unk, unk.f_4, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_175(false), &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_438(int iParam0) // Position - 0x172AD Hash - 0xEDE8ECF3 ^0xEDE8ECF3
{
	if (iParam0 < 0 || iParam0 > 36)
		return false;

	return true;
}

int func_439(int iParam0) // Position - 0x172CC Hash - 0xC3A4C269 ^0xC3A4C269
{
	if (!func_438(iParam0))
		return 0;

	return Global_1292143.f_3024[iParam0];
}

int func_440(int iParam0, BOOL bParam1) // Position - 0x172ED Hash - 0xAE8B7FA5 ^0xAE8B7FA5
{
	Hash hash;
	int xp;

	if (!func_438(iParam0))
		return 0;

	if (bParam1)
	{
		hash = func_449(iParam0);
	
		if (func_22(hash, 0))
		{
			if (iParam0 == 0)
				xp = func_450(255);
			else
				xp = func_275(hash, func_269(true), joaat("SLOTID_PROGRESSION"), true, false, false);
		
			Global_1292143.f_3024[iParam0] = xp;
			return xp;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		hash = func_451(iParam0);
	
		if (func_22(hash, 0))
		{
			if (iParam0 == 0)
				xp = NETWORK::_NETWORK_GET_XP();
			else
				xp = func_275(hash, func_269(true), joaat("SLOTID_PROGRESSION"), true, false, false);
		
			Global_1292143.f_2986[iParam0] = xp;
			return xp;
		}
		else
		{
			return 0;
		}
	}

	return 0;
}

BOOL func_441(int iParam0) // Position - 0x173AC Hash - 0x8ECE0389 ^0x8ECE0389
{
	if (iParam0 > 2)
		return true;

	return false;
}

void func_442(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x173C2 Hash - 0xBC161045 ^0xD3B33F74
{
	int i;

	if (iParam0 == -1)
		return;

	if (Global_1292143.f_20 < 20)
	{
		Global_1292143.f_20 = Global_1292143.f_20 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1292143.f_20.f_1[i /*21*/] = { Global_1292143.f_20.f_1[i + 1 /*21*/] };
		}
	}

	func_452(&Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/]);
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/] = iParam0;
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_1 = iParam1;

	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_2 = iParam2;
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_3 = iParam3;
	}

	return;
}

int func_443(int iParam0) // Position - 0x1749E Hash - 0xA78B2E8C ^0xA78B2E8C
{
	if (!(iParam0 > -1 && iParam0 < 180))
		return -1;

	switch (iParam0)
	{
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 157:
		case 161:
		case 166:
		case 170:
		case 174:
			return 6;
	
		case 1:
		case 14:
		case 24:
		case 27:
		case 35:
		case 51:
		case 74:
		case 87:
		case 98:
		case 101:
		case 111:
		case 117:
			return 2;
	
		case 2:
		case 15:
		case 25:
		case 28:
		case 39:
		case 52:
		case 88:
		case 97:
		case 100:
		case 112:
		case 118:
			return 1;
	
		case 3:
		case 4:
		case 40:
		case 63:
		case 76:
		case 148:
			return 15;
	
		case 5:
		case 29:
		case 42:
		case 77:
			return 12;
	
		case 6:
		case 23:
		case 33:
		case 48:
		case 69:
		case 84:
		case 99:
		case 102:
		case 108:
		case 156:
		case 160:
		case 165:
		case 169:
		case 173:
			return 3;
	
		case 8:
		case 43:
		case 78:
			return 8;
	
		case 9:
		case 30:
		case 44:
		case 68:
		case 82:
		case 104:
			return 10;
	
		case 10:
		case 36:
		case 54:
		case 56:
		case 75:
		case 79:
		case 81:
		case 91:
		case 94:
		case 105:
		case 110:
			return 30;
	
		case 11:
		case 37:
		case 55:
		case 57:
		case 80:
		case 95:
		case 106:
			return 31;
	
		case 12:
		case 60:
			return 18;
	
		case 13:
		case 41:
		case 50:
		case 71:
		case 86:
		case 96:
		case 107:
			return 9;
	
		case 16:
		case 17:
		case 18:
		case 38:
		case 58:
		case 59:
		case 72:
		case 73:
		case 132:
			return 32;
	
		case 19:
		case 53:
			return 7;
	
		case 20:
			return 33;
	
		case 21:
		case 32:
		case 47:
		case 92:
		case 115:
		case 131:
			return 33;
	
		case 22:
		case 31:
		case 46:
		case 93:
		case 116:
		case 130:
			return 4;
	
		case 26:
			return 14;
	
		case 45:
		case 83:
		case 155:
		case 159:
		case 164:
		case 168:
		case 172:
			return 0;
	
		case 61:
		case 62:
		case 89:
			return 36;
	
		case 64:
		case 65:
		case 66:
		case 67:
			return 16;
	
		case 70:
		case 90:
			return 17;
	
		case 109:
		case 113:
		case 114:
			return 35;
	
		case 119:
			return 11;
	
		case 120:
		case 122:
		case 124:
		case 126:
		case 127:
		case 129:
			return 25;
	
		case 121:
		case 123:
		case 125:
		case 128:
			return 26;
	
		case 133:
			return 27;
	
		case 134:
			return 37;
	
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
			return 38;
	
		case 149:
		case 150:
		case 151:
			return 39;
	
		case 152:
			return 34;
	
		case 153:
			return 28;
	
		case 154:
			return 29;
	
		case 158:
		case 162:
		case 167:
		case 171:
		case 175:
			return 23;
	
		case 163:
			return 5;
	
		case 176:
			return 19;
	
		case 177:
			return 20;
	
		case 178:
			return 21;
	
		case 179:
			return 20;
	
		default:
		
	}

	return -1;
}

BOOL func_444(int iParam0, var uParam1) // Position - 0x179BB Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_453(iParam0))
		return false;

	*uParam1 = Global_1915606[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

int func_445(int iParam0) // Position - 0x179E8 Hash - 0x8D427F55 ^0x9966D58
{
	if (func_3() != -1)
		if (Global_1072759.f_12)
			if (iParam0 == 3)
				return joaat("ST_GENERAL_INTRO");

	return func_454(iParam0);
}

int func_446(int iParam0) // Position - 0x17A15 Hash - 0xD52E0195 ^0x6C5F51BC
{
	int i;

	if (iParam0 == -1)
		return 0;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
			return Global_1292143.f_20.f_1[i /*21*/].f_1;
	}

	return 0;
}

void func_447(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x17A61 Hash - 0x7EFAC478 ^0x4E4217E0
{
	int i;
	int j;
	int k;
	int l;
	int numberOfModifiedPrices;
	int numberOfModifiers;
	Hash key;
	int outData;
	var outData2;
	var unk13;

	if (*uParam2 < 15)
		return;
	else if (iParam3 > *uParam2 || iParam3 < 1)
		return;

	outData.f_1 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_AWARD_COST_MODIFIERS(hParam0, &outData) || outData == 0)
		return;

	unk13 = 15;

	for (i = 0; i < iParam3; i = i + 1)
	{
		unk13[i] = 1f;
	}

	for (j = 0; j < outData; j = j + 1)
	{
		key = outData.f_1[j];
		numberOfModifiedPrices = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(key);
	
		for (k = 0; k < numberOfModifiedPrices; k = k + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(key, k) != hParam1)
			{
			}
			else
			{
				numberOfModifiers = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(key);
			
				for (l = 0; l < numberOfModifiers; l = l + 1)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(key, l, &outData2))
					{
					}
					else
					{
						for (i = 0; i < iParam3; i = i + 1)
						{
							if (uParam2->[i /*2*/] == outData2)
							{
								unk13[i] = unk13[i] + (outData2.f_1 - 1f);
								break;
							}
						}
					}
				}
			
				break;
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk13[i] != 1f && uParam2->[i /*2*/].f_1 > 0)
		{
			if (uParam2->[i /*2*/] == joaat("currency_gold_bar"))
				uParam2->[i /*2*/].f_1 = ((100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 1000000) * 100;
			else
				uParam2->[i /*2*/].f_1 = (100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 10000;
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_169(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

int func_448(int iParam0) // Position - 0x17C37 Hash - 0xF00685F3 ^0x39EB3A7D
{
	switch (iParam0)
	{
		case 0:
			return joaat("SLOTID_SATCHEL");
	
		case 1:
			return -1360128126;
	
		default:
		
	}

	return joaat("SLOTID_SATCHEL");
}

Hash func_449(int iParam0) // Position - 0x17C68 Hash - 0xB8EC44B7 ^0xFD8B1C5A
{
	switch (iParam0)
	{
		case 0:
			return joaat("CHARACTER_RANK");
	
		case 7:
			return joaat("CHARACTER_RANK_BOUNTY_HUNTER");
	
		case 11:
			return joaat("CHARACTER_RANK_TRADER");
	
		case 12:
			return joaat("CHARACTER_RANK_COLLECTOR");
	
		case 13:
			return joaat("CHARACTER_RANK_SEASON_005");
	
		case 14:
			return joaat("CHARACTER_RANK_VIP_SEASON_005");
	
		case 15:
			return joaat("CHARACTER_RANK_MOONSHINER");
	
		case 16:
			return joaat("CHARACTER_RANK_SEASON_006");
	
		case 17:
			return joaat("CHARACTER_RANK_VIP_SEASON_006");
	
		case 18:
			return -296143963;
	
		case 19:
			return -575193412;
	
		case 20:
			return 1364208910;
	
		case 21:
			return 1936286816;
	
		case 22:
			return -361115047;
	
		case 23:
			return -874931455;
	
		case 24:
			return -1692024648;
	
		case 25:
			return -1371940008;
	
		case 26:
			return -108990605;
	
		case 27:
			return -122883667;
	
		case 28:
			return -2093379718;
	
		case 29:
			return -362851054;
	
		case 30:
			return -244323351;
	
		case 31:
			return 1314790674;
	
		case 32:
			return -550123659;
	
		case 33:
			return 944566512;
	
		case 34:
			return 1589331582;
	
		case 35:
			return 721639005;
	
		case 36:
			return 1289855691;
	
		default:
		
	}

	return 0;
}

int func_450(int iParam0) // Position - 0x17E01 Hash - 0xFBE6ACAA ^0xC8FB295B
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
		return NETWORK::_NETWORK_GET_RANK();

	return Global_1155150[iParam0 /*30*/];
}

Hash func_451(int iParam0) // Position - 0x17E2D Hash - 0xB8EC44B7 ^0xFB7D0806
{
	switch (iParam0)
	{
		case 0:
			return joaat("CHARACTER_XP");
	
		case 7:
			return joaat("CHARACTER_XP_BOUNTY_HUNTER");
	
		case 11:
			return joaat("CHARACTER_XP_TRADER");
	
		case 12:
			return joaat("CHARACTER_XP_COLLECTOR");
	
		case 13:
			return joaat("CHARACTER_XP_SEASON_005");
	
		case 14:
			return joaat("CHARACTER_XP_VIP_SEASON_005");
	
		case 15:
			return joaat("CHARACTER_XP_MOONSHINER");
	
		case 16:
			return joaat("CHARACTER_XP_SEASON_006");
	
		case 17:
			return joaat("CHARACTER_XP_VIP_SEASON_006");
	
		case 18:
			return -399749454;
	
		case 19:
			return 1428145499;
	
		case 20:
			return -1318783204;
	
		case 21:
			return 893948884;
	
		case 22:
			return -187008013;
	
		case 23:
			return 92055054;
	
		case 24:
			return 2141983659;
	
		case 25:
			return 1021617260;
	
		case 26:
			return 451790629;
	
		case 27:
			return -379952091;
	
		case 28:
			return -2076041980;
	
		case 29:
			return -453223575;
	
		case 30:
			return -1366789744;
	
		case 31:
			return -745162596;
	
		case 32:
			return 312097202;
	
		case 33:
			return -1063349586;
	
		case 34:
			return 48798287;
	
		case 35:
			return -1288374309;
	
		case 36:
			return 1026199250;
	
		default:
		
	}

	return 0;
}

void func_452(int iParam0) // Position - 0x17FC6 Hash - 0x84E910A9 ^0x5650392D
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	func_455(&(iParam0->f_4));
	return;
}

BOOL func_453(int iParam0) // Position - 0x17FE9 Hash - 0x873748AD ^0x873748AD
{
	return iParam0 > -1 && iParam0 < 26;
}

int func_454(int iParam0) // Position - 0x17FFF Hash - 0xB8EC44B7 ^0x57E60B83
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
			return joaat("st_bank");
	
		case 14:
			return joaat("st_bait");
	
		case 15:
			return joaat("st_trapper");
	
		case 16:
			return joaat("st_pearson");
	
		case 17:
			return joaat("st_hotel");
	
		case 18:
			return joaat("st_photo_studio");
	
		case 19:
			return joaat("st_weapon_mod_store");
	
		case 20:
			return joaat("st_clothing");
	
		case 21:
			return joaat("st_camp_shaving");
	
		case 22:
			return joaat("st_quartermaster");
	
		case 23:
			return joaat("st_horse_trainer");
	
		case 24:
			return joaat("st_blacksmith");
	
		case 25:
			return joaat("st_bountyhunting_mp_return");
	
		case 26:
			return joaat("st_coach");
	
		case 27:
			return joaat("st_wilderness_supplies");
	
		case 28:
			return joaat("st_camp_lockbox");
	
		case 29:
			return joaat("st_camp_butchertable");
	
		case 30:
			return joaat("st_bartender");
	
		case 31:
			return joaat("st_pianist");
	
		case 32:
			return joaat("st_musician");
	
		case 33:
			return joaat("st_moonshine_still");
	
		case 34:
			return joaat("st_handheld");
	
		case 35:
			return joaat("st_honor_mp");
	
		case 36:
			return joaat("st_theater_mp");
	
		case 37:
			return joaat("st_moonshine_property");
	
		case 38:
			return joaat("st_travelling_salesman");
	
		case 39:
			return 374439621;
	
		default:
		
	}

	return 0;
}

void func_455(var uParam0) // Position - 0x18233 Hash - 0x58FD8C3D ^0x7E71AD66
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
	return;
}

