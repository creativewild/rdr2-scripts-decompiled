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
	BOOL bLocal_20 = 0;
	BOOL bLocal_21 = 0;
	BOOL bLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	Hash hLocal_25 = 0;
	Hash hLocal_26 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xBD340A9D ^0x4261D1DB
{
	var unk;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	iLocal_24 = -1;
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

void func_1(var uParam0, var uParam1) // Position - 0x2C0 Hash - 0x9A91AFB8 ^0xB14256EC
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

BOOL func_2() // Position - 0x39E Hash - 0xA095694D ^0x506AFF8
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

int func_3() // Position - 0x409 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

int func_4(Hash hParam0, int iParam1) // Position - 0x417 Hash - 0x7A1C2599 ^0xFF9B5634
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

BOOL func_5(Hash hParam0, Hash hParam1) // Position - 0x461 Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_22(hParam0, 0))
		return func_24(func_23(hParam0), hParam1);

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

BOOL func_6(Hash hParam0) // Position - 0x4A2 Hash - 0xFE4CB542 ^0x4BB17F50
{
	if (func_5(hParam0, 566155764))
		return 0;

	if (func_5(hParam0, 2028734248))
		return 1;

	return 0;
}

BOOL func_7(var uParam0, var uParam1) // Position - 0x4CF Hash - 0xFEDFD7AA ^0x98A1A67E
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

int func_8(var uParam0, var uParam1) // Position - 0x52B Hash - 0xAED62A62 ^0xA318C47
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

int func_9(var uParam0, var uParam1) // Position - 0x728 Hash - 0x359EBC2F ^0x70ADBA59
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

int func_10(var uParam0, var uParam1) // Position - 0x921 Hash - 0x97DFAD04 ^0xC1DE0D6
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

BOOL func_11() // Position - 0x974 Hash - 0x487153ED ^0x5FDFEE8C
{
	if (Global_1220826.f_1204 && func_5(Global_1913442, -1472964441) || Global_1220826.f_1205 && func_5(Global_1913442, 1841149704) || Global_1220826.f_1206 && func_5(Global_1913442, 566155764) || Global_1220826.f_1207 && func_5(Global_1913442, -228153877))
		if (Global_1220826.f_1202 && !func_55() || Global_1220826.f_1203 && func_55())
			return true;

	return false;
}

BOOL func_12() // Position - 0xA24 Hash - 0xC24BA3AE ^0xA4363903
{
	return Global_1940252.f_2 || Global_1940252 == 1;
}

void func_13(var uParam0, var uParam1) // Position - 0xA3E Hash - 0x9147FD03 ^0x9147FD03
{
	return;
}

int func_14(int iParam0) // Position - 0xA46 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

void func_15(var uParam0, var uParam1) // Position - 0xA67 Hash - 0xA6A6FD90 ^0x501B0F7A
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

void func_16(var uParam0) // Position - 0xAC3 Hash - 0x8AEBE79D ^0x722BC817
{
	if (uParam0->f_5.f_1 && !UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("translation_overlay")))
	{
		AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
		uParam0->f_5.f_1 = 0;
	}

	return;
}

void func_17(var uParam0) // Position - 0xAF6 Hash - 0x50F536B6 ^0x6EBB4896
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

void func_18(var uParam0, var uParam1) // Position - 0xB8A Hash - 0xE1ADB278 ^0x53D1F4F5
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

void func_19(int iParam0) // Position - 0xC08 Hash - 0xBD578226 ^0x58965C2C
{
	Global_1913614[iParam0 /*6*/].f_1 = 3;
	Global_1913614[iParam0 /*6*/] = 0;
	Global_1913614[iParam0 /*6*/].f_5 = 0;
	return;
}

void func_20(var uParam0) // Position - 0xC2F Hash - 0x8FD544BB ^0x7F571638
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

void func_21(var uParam0, var uParam1) // Position - 0xCBC Hash - 0xD9D81486 ^0x249E7B9B
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

BOOL func_22(Hash hParam0, int iParam1) // Position - 0xD36 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

Hash func_23(Hash hParam0) // Position - 0xD50 Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

int func_24(Hash hParam0, Hash hParam1) // Position - 0xD5A Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_65(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

BOOL func_25(BOOL bParam0, BOOL bParam1) // Position - 0xD90 Hash - 0x8CDC02F2 ^0xDB4E8541
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

BOOL func_26(var uParam0, var uParam1) // Position - 0xE70 Hash - 0xAE0707D ^0x71FE04A1
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

BOOL func_27(Hash hParam0) // Position - 0xED7 Hash - 0xE48228D0 ^0xE48228D0
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

void func_28(var uParam0, var uParam1) // Position - 0xF07 Hash - 0x79CD7A0A ^0x82EF1ECD
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

void func_29(var uParam0, var uParam1) // Position - 0xF36 Hash - 0xC45352D ^0x724BD766
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

void func_30(var uParam0, var uParam1) // Position - 0xF8F Hash - 0xC3B300A5 ^0x7629A89E
{
	uParam0->f_120 = 1;

	switch (TASK::GET_ITEM_INTERACTION_ITEM_ID(Global_33))
	{
		case joaat("DOCUMENT_RCM_SLAVE_LEDGER"):
			hLocal_25 = joaat("ui_doc_sc_diary");
			TXD::REQUEST_STREAMED_TXD(hLocal_25, false);
			break;
	
		case joaat("DOCUMENT_LEDGER_VALENTINE_JAIL"):
			hLocal_25 = joaat("ui_book_valentine_jail_ledger");
			TXD::REQUEST_STREAMED_TXD(hLocal_25, false);
			break;
	
		case joaat("document_mary_beth_journal"):
			hLocal_25 = joaat("ui_doc_mb_diary1");
			TXD::REQUEST_STREAMED_TXD(hLocal_25, false);
			break;
	}

	return;
}

void func_31(var uParam0, Hash hParam1) // Position - 0xFEE Hash - 0xB15B5AA9 ^0x8C2F1984
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

void func_32(var uParam0, int iParam1) // Position - 0x107B Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_33(Hash hParam0, int iParam1) // Position - 0x1088 Hash - 0xDB76EF08 ^0x5D708D69
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

void func_34(var uParam0) // Position - 0x1297 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

int func_35(var uParam0, var uParam1, BOOL bParam2) // Position - 0x129F Hash - 0xCEA0DA93 ^0xEAC362D7
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
				func_71(&Global_17402[1], false);
			}
			else
			{
				Global_17407[1] = true;
				func_71(&Global_17402[1], true);
			}
		
			if (!func_22(uParam1->[1 /*11*/], 0))
			{
				Global_17407[0] = false;
				func_71(&Global_17402[0], false);
			}
			else
			{
				Global_17407[0] = true;
				func_71(&Global_17402[0], true);
			}
		}
	
		Global_17407[3] = func_72(uParam0, &uParam1->[0 /*11*/]);
		func_71(&Global_17402[3], Global_17407[3]);
	
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

void func_36(var uParam0, var uParam1) // Position - 0x1409 Hash - 0xF894815A ^0x1D6A93E9
{
	int i;
	int num;

	if (!func_33(*uParam1, uParam0->f_104) && !func_73(*uParam1, uParam0->f_104))
	{
		if (!uParam0->f_112)
		{
			if (func_74(Global_17402[0], true))
				uParam0->f_113 = 0;
			else
				uParam0->f_113 = 1;
		
			if (func_74(Global_17402[1], true))
				uParam0->f_114 = 0;
			else
				uParam0->f_114 = 1;
		
			for (i = 0; i < 4; i = i + 1)
			{
				func_75(&Global_17402[i], false);
			}
		
			uParam0->f_112 = 1;
		}
	}
	else if (uParam0->f_112)
	{
		func_76(uParam0, uParam1);
	
		for (i = 0; i < 3; i = i + 1)
		{
			num = i;
		
			if (num == 0 && !uParam0->f_113 || num == 1 && !uParam0->f_114 || num != 1 && num != 0)
				func_75(&Global_17402[num], true);
		}
	
		uParam0->f_112 = 0;
	}

	return;
}

void func_37(var uParam0, var uParam1) // Position - 0x1503 Hash - 0xEFD559E0 ^0xB6E5B9F3
{
	if (!uParam0->f_115 && func_77(uParam1->[0 /*11*/], uParam0->f_104))
	{
		uParam0->f_115 = 1;
		func_78(uParam1->[0 /*11*/]);
	}

	return;
}

void func_38(var uParam0, var uParam1) // Position - 0x1533 Hash - 0xD55F9E5C ^0x1E03D896
{
	Hash itemInteractionState;

	if (!UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("translation_overlay")) && uParam0->f_105 > 0)
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_X")))
			if (UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(joaat("translation_overlay"), joaat("GENERIC")) == 0)
				func_79(uParam0, uParam1);
	
		if (iLocal_24 == -1)
			func_80(uParam0);
	
		itemInteractionState = TASK::GET_ITEM_INTERACTION_STATE(Global_33);
	
		if (!bLocal_20)
		{
			if (itemInteractionState == -271999469 || itemInteractionState == 1088578020)
			{
				bLocal_20 = true;
				iLocal_23 = iLocal_23 + 1;
			}
		}
		else if (itemInteractionState == 1087288635 || itemInteractionState == 504129763 || itemInteractionState == -1809475494 || itemInteractionState == 1854147388)
		{
			bLocal_20 = false;
		}
	
		if (!bLocal_21)
		{
			if (itemInteractionState == 447737959 || itemInteractionState == 847337666)
			{
				bLocal_21 = true;
				iLocal_23 = iLocal_23 - 1;
			}
		}
		else if (itemInteractionState == 1087288635 || itemInteractionState == 504129763 || itemInteractionState == -1809475494 || itemInteractionState == 1854147388)
		{
			bLocal_21 = false;
		}
	
		if (iLocal_23 == 0)
			if (!PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "BOOK_BLOCK_PAGE_PREV"))
				PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "BOOK_BLOCK_PAGE_PREV", true, -1);
		else if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "BOOK_BLOCK_PAGE_PREV"))
			PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "BOOK_BLOCK_PAGE_PREV", false, -1);
	
		if (iLocal_23 >= iLocal_24)
			if (!PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "BOOK_BLOCK_PAGE_NEXT"))
				PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "BOOK_BLOCK_PAGE_NEXT", true, -1);
		else if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "BOOK_BLOCK_PAGE_NEXT"))
			PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "BOOK_BLOCK_PAGE_NEXT", false, -1);
	}

	if (!bLocal_22 && hLocal_25 != 0)
	{
		if (TXD::HAS_STREAMED_TXD_LOADED(hLocal_25))
		{
			OBJECT::SET_CUSTOM_TEXTURES_ON_OBJECT(TASK::_GET_ITEM_INTERACTION_ENTITY_FROM_PED(Global_33, 0), hLocal_25, 0, 0);
			bLocal_22 = true;
		}
	}

	return;
}

BOOL func_39(Hash hParam0, int iParam1) // Position - 0x16FC Hash - 0xC2416B92 ^0xFBFC1A40
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

BOOL func_40(int iParam0, BOOL bParam1) // Position - 0x1941 Hash - 0xAAB142C4 ^0x20EFEF89
{
	int num;

	if (bParam1 && !func_50(iParam0))
		return false;

	num = func_81(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1951910[num /*23*/].f_3);
}

void func_41(var uParam0, Hash hParam1) // Position - 0x1974 Hash - 0xAD4FFF85 ^0x702E8543
{
	if (func_5(hParam1, -1227898937))
	{
		if (UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(joaat("translation_overlay"), joaat("newspaper")) == 0)
		{
			uParam0->f_5.f_1 = 1;
			AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
			func_82(uParam0, hParam1);
		}
	}
	else if (UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(joaat("translation_overlay"), joaat("GENERIC")) == 0)
	{
		uParam0->f_5.f_1 = 1;
		AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
		func_82(uParam0, hParam1);
	}

	return;
}

BOOL func_42(Hash hParam0, int iParam1) // Position - 0x19E7 Hash - 0x764CD05F ^0xC5F6D4B8
{
	int num;

	if (!func_22(hParam0, 0))
		return false;

	num = func_83(hParam0);

	switch (num)
	{
		case joaat("CLOTHING"):
			if (func_85(hParam0))
				return true;
			break;
	
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
				return true;
			else
				return false;
			break;
	
		case joaat("AMMO"):
			if (!func_84(hParam0, 1))
				return false;
			break;
	}

	return func_86(hParam0, false, false, false) >= iParam1;
}

int func_43(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, Hash hParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0x1A6A Hash - 0x11449F01 ^0x11449F01
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

	if (!func_87(hParam0, iParam1, bParam2, hParam5))
		return 0;

	if (!func_88(hParam0, &value, iParam1))
		return 0;

	func_89(hParam0, bParam2);
	lootTableKey = 0;

	if (func_83(hParam0) == joaat("CLOTHING"))
		if (!func_5(hParam0, 866047851) && !func_5(hParam0, -1979000645))
			flag = true;

	if (func_90(hParam0, 8388608) && !func_91(27))
		func_92(27);

	func_93(hParam0);

	if (!flag)
	{
		if (func_5(hParam0, -1588156645))
		{
			bParam2 = true;
			flag2 = true;
			weaponHash = func_95(func_94(hParam0, true), false);
		
			if (WEAPON::IS_WEAPON_VALID(weaponHash))
			{
				if (func_3() == -1)
					func_96(weaponHash);
			
				if (func_97(false) && func_98(weaponHash, 0, false, true, 0, false, hParam5, false))
				{
					func_99(hParam0, value, hParam5);
				
					if (!bParam9)
						bParam2 = false;
				}
				else
				{
					func_100(hParam0, value, hParam5);
				}
			}
		}
		else if (func_83(hParam0) == joaat("WEAPON"))
		{
			if (!func_101(hParam0, hParam5, &bParam2, bParam3, bParam4))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_83(hParam0) == joaat("AMMO") && func_102(hParam0))
		{
			if (!func_103(hParam0, &value, hParam5))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_5(hParam0, -103750053))
		{
			func_105(func_104(joaat("claws_collected")), value);
		}
		else if (hParam0 == joaat("provision_alligator_tooth"))
		{
			func_105(func_106(joaat("COLLECTED"), joaat("alligator_tooth")), value);
		}
		else if (func_5(hParam0, -121341956) && !func_5(hParam0, 606799272))
		{
			if (hParam0 != joaat("weapon_kit_detector"))
				func_107(536, false);
		
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
			func_107(519, false);
		}
		else if (func_5(hParam0, 1147021565) && func_5(hParam0, -524514947))
		{
		}
		else if (func_5(hParam0, 554195525))
		{
		}
		else if (func_5(hParam0, 589988438))
		{
			if (func_108())
			{
				func_109(joaat("reward_small"), false, 1065353216, 1, 0, 0, false, -1);
				bParam2 = true;
				flag2 = true;
			}
		}
		else if (func_5(hParam0, 787083290) && func_5(hParam0, 949916894))
		{
			func_110(hParam0);
		}
		else if (func_5(hParam0, -1718133314))
		{
			func_111(hParam0);
		}
		else if (func_5(hParam0, -1738650224))
		{
			func_112(hParam0);
		}
		else if (func_5(hParam0, -1112814642) && func_5(hParam0, 949916894))
		{
			func_113(hParam0);
		}
		else if (hParam0 == joaat("document_player_journal"))
		{
			Global_1940085.f_21 = 0;
		}
		else if (func_5(hParam0, 1841149704))
		{
			func_114();
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
		else if (func_5(hParam0, -839724752) && func_90(hParam0, 4))
		{
		}
		else if (func_5(hParam0, 1399091007))
		{
			func_115(hParam0, &lootTableKey);
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
					func_118(686, -103579, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_118(686, -1531530025, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("consumable_tonic"):
			case joaat("consumable_potent_tonic"):
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_118(685, -1228016946, true, true);
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
					func_118(685, 1934060482, true, true);
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
					func_118(685, 1110018439, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("kit_gun_oil"):
				func_107(521, false);
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
					func_118(685, 1408511260, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("consumable_coffee_gnds_reg"):
				if (func_91(1))
					func_107(522, false);
				break;
		
			case joaat("consumable_valerian_root"):
				func_117(271, func_116(joaat("consumable_valerian_root"), false), false);
				break;
		
			case joaat("weapon_kit_binoculars"):
			case joaat("weapon_kit_binoculars_improved"):
				break;
		
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				flag2 = true;
				break;
		
			case joaat("consumable_aged_pirate_rum"):
				func_117(272, func_116(joaat("consumable_aged_pirate_rum"), false), false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("consumable_hair_tonic"):
				func_107(526, false);
				break;
		
			case joaat("consumable_ginseng_elixier"):
				func_117(270, func_116(joaat("consumable_ginseng_elixier"), false), false);
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
				func_107(534, false);
				break;
		
			case joaat("consumable_hair_grease"):
				func_107(529, false);
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
		func_119(&hash);
	
		if (!func_100(hash, value, hParam5))
			return 0;
		else if (!func_97(false))
			return 1;
	
		if (func_83(hParam0) == joaat("CLOTHING"))
			func_120(hParam0);
	}
	else if (lootTableKey != 0)
	{
		if (func_97(false) && !func_121())
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
			func_122(lootTableKey, 0);
		}
	}

	statId = { func_123(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::_STAT_ID_INCREMENT_INT(&statId, value);

	func_124(hParam0);

	if (iParam6 > 0f)
	{
		if (func_5(hParam0, -839724752))
			func_125(hParam0, iParam6);
	}
	else if (!bParam2)
	{
		flag3 = hParam5 == 1248274121;
		func_126(hParam0, value, false, flag3, 0, false, false);
	}

	return 1;
}

Hash func_44(var uParam0) // Position - 0x251E Hash - 0x1B9917EF ^0x8F9E933E
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

void func_45(var uParam0, Any anParam1) // Position - 0x2573 Hash - 0x2374F27F ^0x94CC5ADA
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

void func_46(var uParam0, var uParam1) // Position - 0x25E0 Hash - 0xED62B70C ^0xED62B70C
{
	func_127(uParam0, uParam1->[0 /*11*/]);
	func_128(uParam0, uParam1);

	if (uParam1->[1 /*11*/] != 0)
		func_129(1, uParam1->[1 /*11*/]);
	else
		func_19(1);

	func_130(uParam0, uParam1);

	if (uParam1->[2 /*11*/] != 0)
		func_129(2, uParam1->[2 /*11*/]);
	else
		func_19(2);

	func_131(uParam1);
	func_132(uParam1);
	return;
}

int func_47(var uParam0, int iParam1) // Position - 0x2648 Hash - 0x990B5855 ^0xA8E94B3C
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
				if (!func_133(uParam0))
					return 0;
		
			return 1;
		}
	}
	else if (func_134(*uParam0, &txdHash, joaat("Inventory"), joaat("ui_itemviewer"), 0, 0))
	{
		if (TXD::DOES_STREAMED_TXD_EXIST(txdHash))
		{
			TXD::REQUEST_STREAMED_TXD(txdHash, false);
			uParam0->f_5 = txdHash;
		}
	}

	return 1;
}

BOOL func_48(var uParam0, var uParam1) // Position - 0x26E5 Hash - 0x938132EF ^0x938132EF
{
	if (func_135(uParam0, &uParam1->[0 /*11*/]))
	{
		func_136(uParam0, uParam1);
		return true;
	}

	return false;
}

int func_49(var uParam0, var uParam1) // Position - 0x2709 Hash - 0x6565581A ^0x6565581A
{
	return 1;
}

BOOL func_50(int iParam0) // Position - 0x2712 Hash - 0x475F11C3 ^0x2467C3B3
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 60)
		return false;

	if (Global_1951910[iParam0 /*23*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3);
}

BOOL func_51(int iParam0, BOOL bParam1) // Position - 0x2751 Hash - 0x1C19B2F4 ^0xAAE134BB
{
	int num;
	int gameTimer;
	float progress;
	int num2;
	int num3;

	if (bParam1 && !func_50(iParam0))
		return false;

	num = func_81(iParam0);

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

void func_52(BOOL bParam0, int iParam1) // Position - 0x284B Hash - 0xCC16269 ^0xB563FF97
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

BOOL func_53(var uParam0) // Position - 0x286D Hash - 0x8E17540C ^0x63AC476C
{
	BOOL num;

	num = 0;
	uParam0->f_110 = 0;

	if (func_40(Global_17402[1], true))
	{
		num = 1;
		uParam0->f_110 = 1;
		func_75(&Global_17402[1], !uParam0->f_125);
		func_75(&Global_17402[0], true);
	}

	if (func_40(Global_17402[0], true))
	{
		num = 1;
		func_75(&Global_17402[0], !uParam0->f_124);
		func_75(&Global_17402[1], true);
	}

	return num;
}

Hash func_54(Hash hParam0) // Position - 0x28DA Hash - 0x49053431 ^0xA926A0DE
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

BOOL func_55() // Position - 0x29F3 Hash - 0x9AF3EE3F ^0xBF53F360
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_56(int iParam0) // Position - 0x2A07 Hash - 0x6FB27747 ^0x572AF236
{
	return iParam0 == -492264119 || iParam0 == 1397875340;
}

void func_57(Hash hParam0, Hash hParam1) // Position - 0x2A25 Hash - 0xF91D6A5B ^0x6EDBA286
{
	Hash hash;
	var unk;
	var unk11;

	hash = func_137(hParam0, true);

	if (func_138(hash))
	{
		unk = -1;
		unk.f_1 = -1;
		unk11.f_9 = 1;
		unk11.f_11 = joaat("SLOTID_NONE");
	
		if (func_139(&unk, hash, &unk11, true, hParam1, -1, false))
		{
		}
	}

	return;
}

void func_58(int iParam0) // Position - 0x2A76 Hash - 0x9F9C833D ^0x2FA301A0
{
	switch (iParam0)
	{
		case -492264119:
			func_140(-2028134866, 0);
			func_107(861, false);
			break;
	
		case 684416450:
			func_140(-1419640182, 0);
			break;
	
		case 1397875340:
			func_140(518311877, 0);
			break;
	}

	return;
}

int func_59(int iParam0) // Position - 0x2ACA Hash - 0xBF3EFB31 ^0xBF3EFB31
{
	switch (iParam0)
	{
		case -31140163:
			return 0;
	}

	return 1;
}

void func_60(var uParam0) // Position - 0x2AE8 Hash - 0xA4DD7C3 ^0xF78CE8D5
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

void func_61(var uParam0) // Position - 0x2B42 Hash - 0x7DBE30D6 ^0xEA3658B1
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

void func_62(var uParam0) // Position - 0x2BCA Hash - 0xD31813AD ^0xBBBB9597
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

void func_63(var uParam0) // Position - 0x2C52 Hash - 0x7EE54F18 ^0x3F8ACC37
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

int func_64(Hash hParam0, BOOL bParam1, BOOL bParam2, int iParam3, float fParam4) // Position - 0x2CF2 Hash - 0x5AD1F9FD ^0x14415059
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

BOOL func_65(Hash hParam0, int iParam1) // Position - 0x3045 Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

BOOL func_66(int iParam0) // Position - 0x305F Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_141(iParam0);
}

BOOL func_67(Hash hParam0) // Position - 0x306D Hash - 0xBFE07B66 ^0x7CF1C952
{
	return func_5(hParam0, 566155764) && !UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("Map"));
}

BOOL func_68(Hash hParam0) // Position - 0x308F Hash - 0x34C4768F ^0xDCD32F74
{
	return func_5(hParam0, -1472964441) && func_6(hParam0) && !UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("Map"));
}

BOOL func_69(int iParam0) // Position - 0x30BC Hash - 0xAD766E45 ^0x99868738
{
	if (iParam0 == 82200319)
		return 1;

	return 0;
}

void func_70(var uParam0) // Position - 0x30D3 Hash - 0x50D621B0 ^0x8454B2FA
{
	if (uParam0->f_105 > 0)
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_BOOK_READ_AVAILABLE", true, -1);

	return;
}

void func_71(int iParam0, BOOL bParam1) // Position - 0x30F3 Hash - 0x6A490E1C ^0x6A490E1C
{
	if (func_50(*iParam0))
		func_142(*iParam0, bParam1, false, true);

	return;
}

BOOL func_72(var uParam0, var uParam1) // Position - 0x3110 Hash - 0xCC356685 ^0x695F187
{
	BOOL flag;

	if (func_33(*uParam1, uParam0->f_104))
		flag = !func_5(*uParam1, 1051234725);

	if (func_73(*uParam1, uParam0->f_104))
		flag = func_5(*uParam1, 601161511);

	return flag;
}

BOOL func_73(Hash hParam0, int iParam1) // Position - 0x3153 Hash - 0xDB76EF08 ^0x45A19FF7
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

BOOL func_74(int iParam0, BOOL bParam1) // Position - 0x32AF Hash - 0xC074CB7F ^0xC074CB7F
{
	if (bParam1 && !func_50(iParam0))
		return false;

	return !func_143(iParam0, 4);
}

void func_75(int iParam0, BOOL bParam1) // Position - 0x32D4 Hash - 0xCA238275 ^0xCA238275
{
	if (func_50(*iParam0))
		func_142(*iParam0, bParam1, true, true);

	return;
}

void func_76(var uParam0, var uParam1) // Position - 0x32F1 Hash - 0xE59010A2 ^0xE59010A2
{
	func_75(&Global_17402[3], func_72(uParam0, uParam1));
	return;
}

BOOL func_77(Hash hParam0, int iParam1) // Position - 0x330B Hash - 0xDB76EF08 ^0x8DABBCD3
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

void func_78(var uParam0) // Position - 0x3467 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_79(var uParam0, var uParam1) // Position - 0x346F Hash - 0x35BD1C29 ^0xBC562C26
{
	int i;
	int j;
	int num;

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(hLocal_26))
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(hLocal_26);

	func_17(uParam0);
	hLocal_26 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Translate");
	uParam0->f_5.f_63 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(hLocal_26, "Generic");
	num = 0;
	iLocal_24 = -1;

	for (j = 0; j < uParam0->f_105; j = j + 1)
	{
		for (i = 0; i < uParam0->f_5.f_2[j /*5*/].f_1; i = i + 1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(uParam1->[0 /*11*/], uParam0->f_5.f_2[j /*5*/].f_2, i);
		
			switch (uParam0->f_5.f_2[j /*5*/])
			{
				case 1410847083:
					func_144(&(uParam0->f_5), num, 0, true, false);
					num = num + 1;
					break;
			
				case 1724675796:
					func_144(&(uParam0->f_5), num, 1, true, false);
					num = num + 1;
					break;
			
				default:
					func_145(&(uParam0->f_5), j, &num, 2, true);
					break;
			}
		}
	}

	return;
}

void func_80(var uParam0) // Position - 0x3556 Hash - 0x54785B85 ^0xE5EEEF8E
{
	int i;
	int j;

	iLocal_24 = -1;

	for (j = 0; j < uParam0->f_105; j = j + 1)
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
						iLocal_24 = iLocal_24 + 1;
						uParam0->f_5.f_2[j /*5*/].f_4 = iLocal_24;
					}
				
					uParam0->f_5.f_2[j /*5*/].f_3 = 1;
					break;
			}
		}
	}

	return;
}

int func_81(int iParam0) // Position - 0x35E6 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_82(var uParam0, Hash hParam1) // Position - 0x35F0 Hash - 0x37667EFC ^0x6B300E72
{
	Hash entryId;

	entryId = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Translate");
	uParam0->f_5.f_63 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(entryId, "Generic");

	if (func_5(hParam1, 1104960349))
	{
		func_146(uParam0, hParam1);
	}
	else if (func_5(hParam1, 1989861793))
	{
		if (func_5(hParam1, -885754398))
			func_147(uParam0, hParam1);
		else
			func_148(uParam0, hParam1);
	}
	else if (func_5(hParam1, 1989861793))
	{
		func_148(uParam0, hParam1);
	}
	else if (func_5(hParam1, -772152977))
	{
		func_149(uParam0, hParam1);
	}
	else if (func_5(hParam1, -2081717885))
	{
		func_150(uParam0, hParam1);
	}
	else if (func_4(hParam1, 1224357681) == joaat("CI_TAG_FOLDER_BOUNTY_POSTERS"))
	{
		func_151(uParam0, hParam1);
	}
	else if (func_5(hParam1, -1227898937))
	{
	}
	else
	{
		func_152(uParam0, hParam1);
	}

	return;
}

int func_83(Hash hParam0) // Position - 0x36E3 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_22(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_84(Hash hParam0, int iParam1) // Position - 0x370E Hash - 0x2A2D0794 ^0xC823165
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

	hash = func_153(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_154("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_155(&unk, i, num, num2))
			{
			}
			else if (!func_156(unk.f_4))
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

BOOL func_85(Hash hParam0) // Position - 0x37B6 Hash - 0x52397408 ^0x52397408
{
	Hash hash;
	int num;
	int num2;

	if (!func_22(hParam0, 0))
		return false;

	hash = func_157(hParam0);

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

	num = func_158(hParam0);

	if (!(num == 0))
	{
		num2 = func_159(&(Global_17418.f_55.f_664.f_1354.f_5), num);
	
		if (num2 == -1)
			return true;
	}

	num = func_160(hParam0);
	num2 = func_159(&(Global_17418.f_55.f_664.f_1354.f_5), num);

	if (num2 == -1)
		return false;

	return hParam0 == Global_17418.f_55.f_664.f_1354.f_5[num2 /*17*/];
}

int func_86(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3872 Hash - 0x68EBB232 ^0xEAD633B4
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_22(hParam0, 0))
		return 0;

	num = func_83(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_153(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_161(hParam0, false);
	}

	if (func_162(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_163(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_164(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_163(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

BOOL func_87(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x3934 Hash - 0x198FCB70 ^0x369C0AB5
{
	if (func_3() == -1)
	{
		if (func_165(hParam0) && func_166(hParam0))
		{
			func_167(hParam0, iParam1, true, &bParam2, hParam3);
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

BOOL func_88(Hash hParam0, var uParam1, int iParam2) // Position - 0x398B Hash - 0x8ABA0690 ^0x8ABA0690
{
	var unk;
	int num;
	int num2;

	*uParam1 = iParam2;
	func_168(hParam0, uParam1);
	unk = { func_169(hParam0, false, true) };
	num = func_170(hParam0, &unk, false, false);
	num2 = func_171(hParam0, false, false, false);

	if (num > 1 && num2 + iParam2 >= num)
		if (func_5(hParam0, -2051813666))
			func_107(674, true);
		else if (func_3() == -1)
			func_107(673, false);

	if (func_172(hParam0, &unk, *uParam1, false, false, -1, false))
		if (num2 < num)
			*uParam1 = num - num2;
		else
			return false;

	return true;
}

void func_89(Hash hParam0, BOOL bParam1) // Position - 0x3A29 Hash - 0x86DCB18E ^0x6098B664
{
	if (bParam1)
		return;

	if (!func_173())
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

BOOL func_90(Hash hParam0, int iParam1) // Position - 0x3ADA Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_22(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

BOOL func_91(int iParam0) // Position - 0x3AF9 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_174(iParam0))
		return false;

	return func_175(iParam0);
}

void func_92(int iParam0) // Position - 0x3B15 Hash - 0xFDF9CB10 ^0xFDF9CB10
{
	if (!func_174(iParam0))
		return;

	func_176(iParam0);
	func_177(iParam0);
	return;
}

void func_93(Hash hParam0) // Position - 0x3B36 Hash - 0xB0B39801 ^0xC789CDD0
{
	if (func_5(hParam0, -1522723129))
		func_178(-848633709, 0, 255, 0, false);
	else if (func_5(hParam0, -283942357))
		func_178(-981153234, 0, 255, 0, false);
	else if (func_5(hParam0, 683680997))
		func_178(-756350192, 0, 255, 0, false);
	else if (func_5(hParam0, 1307628809))
		func_178(603094518, 0, 255, 0, false);

	return;
}

Hash func_94(Hash hParam0, BOOL bParam1) // Position - 0x3BBB Hash - 0x27CC99BE ^0xBF8437DD
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
			if (func_179(hash) || func_180(hash))
				return hash;
		else
			return hash;

	return hParam0;
}

Hash func_95(Hash hParam0, BOOL bParam1) // Position - 0x3DB1 Hash - 0x68919B0 ^0x66A44A24
{
	if (!func_22(hParam0, 0))
		return 0;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return hParam0;

	!bParam1;
	return 0;
}

void func_96(Hash hParam0) // Position - 0x3DDD Hash - 0x6D90E810 ^0x1F802071
{
	Hash weaponUnlock;

	if (Global_1572887.f_14 != -1)
		return;

	if (!func_156(hParam0))
		return;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(weaponUnlock, true);
	return;
}

BOOL func_97(BOOL bParam0) // Position - 0x3E17 Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_3() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_163(bParam0));
}

BOOL func_98(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0x3E35 Hash - 0x61DE9CAE ^0x4ADCEE54
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
		unk = { func_169(hParam0, false, true) };
	
		if (func_181(hParam0, &unk, unk.f_4, false, false))
		{
			unk6.f_9 = joaat("SLOTID_NONE");
		
			if (func_182(hParam0, &unk6, unk.f_4))
			{
				unk28 = { func_183(hParam0, unk, unk.f_4, false) };
				func_184(hParam0, &unk28, &unk, 1, -142743235, 1, false);
			}
		}
	}

	if (func_97(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_33, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
			return 0;
	
		func_99(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_185(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_33, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

BOOL func_99(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x3F65 Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return true;

	if (!func_102(hParam0))
		return false;

	if (!func_97(false))
		return false;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_33, hParam0, iParam1, hParam2);
	return true;
}

BOOL func_100(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x3FA0 Hash - 0x452D8154 ^0x10C1EA46
{
	int num;
	var unk;
	var unk6;

	if (!func_22(hParam0, 0))
		return 0;

	if (iParam1 < 1)
		return 0;

	num = func_162(hParam0, joaat("DEFAULT"));

	if (num != 0)
		return func_186(hParam0, iParam1, hParam2);

	unk = { func_169(hParam0, false, true) };
	unk6 = { func_183(hParam0, unk, unk.f_4, false) };
	return func_187(hParam0, &unk6, &unk, iParam1, hParam2, false);
}

BOOL func_101(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x4010 Hash - 0xF555C517 ^0x702518D6
{
	Hash weaponHash;
	var unk;
	int num;
	Hash weaponHash2;

	weaponHash = func_95(hParam0, false);

	if (WEAPON::IS_WEAPON_VALID(weaponHash))
	{
		if (func_3() == -1)
		{
			func_96(weaponHash);
		
			if (hParam1 == 1248274121)
				func_188(weaponHash);
		}
	
		if (!func_172(hParam0, &unk, 1, false, false, -1, false))
		{
			func_167(hParam0, 1, false, uParam2, hParam1);
			num = func_189(weaponHash);
		
			if (WEAPON::_IS_WEAPON_SNIPER(weaponHash))
			{
				func_98(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("weapon_fishingrod") || WEAPON::_IS_WEAPON_BINOCULARS(weaponHash))
			{
				func_98(weaponHash, 0, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (WEAPON::_IS_WEAPON_LASSO(weaponHash))
			{
				func_98(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash))
			{
				if (weaponHash == joaat("weapon_melee_knife_john") && !func_190())
					return false;
			
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(hParam0))
				{
				}
				else if (!func_191(weaponHash))
				{
					func_98(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
				}
				else
				{
					func_98(weaponHash, WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 4, bParam3, bParam4, 0, false, hParam1, false);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash))
			{
				weaponHash2 = func_192(Global_33, 2, false, true);
			
				if (func_156(weaponHash2) && !Global_26688 && weaponHash2 != weaponHash && !func_42(joaat("upgrade_offhand_holster"), 1) && bParam4)
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_33, weaponHash2);
			
				if (func_156(weaponHash2) && func_42(joaat("upgrade_offhand_holster"), 1))
					if (!func_98(weaponHash, num, bParam3, bParam4, 3, true, hParam1, false))
						return false;
				else if (!func_98(weaponHash, num, bParam3, bParam4, 0, true, hParam1, false))
					return false;
			}
			else if (!func_98(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false))
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
		func_107(515, true);

	return true;
}

BOOL func_102(Hash hParam0) // Position - 0x421E Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

BOOL func_103(Hash hParam0, var uParam1, Hash hParam2) // Position - 0x422C Hash - 0x8FE8AA03 ^0x8ABA2B4
{
	int num;
	int weaponClipSize;
	int ammo;
	int pedAmmoByType;
	Hash weaponTypeFromAmmoType;
	int num2;
	int num3;

	if (!func_102(hParam0))
		return false;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);
	pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	if (func_156(weaponTypeFromAmmoType))
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
		func_117(func_193(hParam0), func_116(hParam0, false), true);
		return false;
	}

	ammo == pedAmmoByType + num;

	if (num == 0)
		return false;

	if (func_97(false))
	{
		if (func_99(hParam0, num, hParam2))
		{
			*uParam1 = num;
			return true;
		}
	}
	else
	{
		return func_100(hParam0, *uParam1, hParam2);
	}

	return false;
}

struct<2> func_104(int iParam0) // Position - 0x432A Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

void func_105(var uParam0, var uParam1, int iParam2) // Position - 0x433C Hash - 0x31B6F9FF ^0xF5CD2283
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

struct<2> func_106(int iParam0, int iParam1) // Position - 0x4359 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_107(int iParam0, BOOL bParam1) // Position - 0x436F Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_194(iParam0, &num, &num2);

	if (!func_195(iParam0, num, num2, bParam1))
		return;

	func_196(num, num2);
	return;
}

BOOL func_108() // Position - 0x439C Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

int func_109(Hash hParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0x43A5 Hash - 0x6AA1931B ^0x6AA1931B
{
	int num;

	if (func_3() == 0)
	{
		func_122(hParam0, 0);
		return 0;
	}

	num = func_197(hParam0, bParam6, iParam7);

	if (!bParam1)
		func_198(num, sParam4, iParam5, false);

	func_199(num, bParam1, iParam2, iParam3);
	return num;
}

void func_110(Hash hParam0) // Position - 0x43EC Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_111(Hash hParam0) // Position - 0x43F4 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_112(Hash hParam0) // Position - 0x43FC Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_113(Hash hParam0) // Position - 0x4404 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_114() // Position - 0x440C Hash - 0xC8FE42DB ^0x507D23E9
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("sp_chal_expl_root")) < 2)
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("sp_chal_expl_root"), joaat("acw_expl_rank_01_treasure"), 1);

	return;
}

void func_115(Hash hParam0, var uParam1) // Position - 0x4430 Hash - 0xC6F24F1D ^0xC6F24F1D
{
	var unk;

	func_200(hParam0, uParam1, &unk);
	return;
}

Hash func_116(Hash hParam0, BOOL bParam1) // Position - 0x4442 Hash - 0x88397BA6 ^0x88397BA6
{
	Hash hash;

	if (!func_22(hParam0, 0))
		return 0;

	hash = func_201(hParam0, bParam1);

	if (hash != 0)
		return hash;

	return hParam0;
}

void func_117(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0x4470 Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_194(iParam0, &num, &num2);

	if (!func_195(iParam0, num, num2, bParam2))
		return;

	if (!func_202(iParam0, 1024))
		return;

	func_196(num, num2);
	Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/] = hParam1;
	Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	return;
}

void func_118(int iParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x44D0 Hash - 0x692A8F54 ^0x2BADE95C
{
	int num;
	int num2;

	func_194(iParam0, &num, &num2);

	if (!func_195(iParam0, num, num2, bParam2))
		return;

	if (!func_202(iParam0, 1024))
		return;

	func_196(num, num2);
	Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/] = hParam1;

	if (!bParam3)
		Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	else
		Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;

	return;
}

void func_119(var uParam0) // Position - 0x454B Hash - 0xE1DD92C1 ^0x7C7DCFDC
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

void func_120(Hash hParam0) // Position - 0x458F Hash - 0xC34F92EA ^0xC34F92EA
{
	if (func_3() != -1)
		return;

	return;
}

BOOL func_121() // Position - 0x45A2 Hash - 0xD3E48215 ^0xDBA46110
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
		return false;

	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

int func_122(Hash hParam0, int iParam1) // Position - 0x45BE Hash - 0x10BA6DD6 ^0xD79E06BF
{
	var unk;
	var unk5;

	if (0 == hParam0)
		return 0;

	unk5.f_1 = 10;
	func_203(&unk5, joaat("LOOT_TYPE_NORMAL"));
	return func_204(hParam0, &unk5, &unk, iParam1, 0);
}

struct<2> func_123(Hash hParam0) // Position - 0x45F2 Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_22(hParam0, 0))
		return unk;

	if (func_5(hParam0, -305066475))
		if (func_3() == -1)
			if (func_5(hParam0, -537818634))
				return func_205(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_205(joaat("deadeye_items"));
	else if (func_5(hParam0, -537818634))
		return func_205(joaat("medicine_items"));

	if (func_5(hParam0, 2084895747))
		return func_205(joaat("lock_breaker_items"));

	return unk3;
}

void func_124(Hash hParam0) // Position - 0x4686 Hash - 0xD6BB2A12 ^0xD6BB2A12
{
	switch (hParam0)
	{
		case joaat("provision_bird_feather_flight"):
			break;
	}

	return;
}

void func_125(Hash hParam0, int iParam1) // Position - 0x469F Hash - 0x81B514EF ^0xAFEF3E5D
{
	char* str;

	str = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(Global_1902822.f_37);
	func_208(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", iParam1, str), "inventory_items", func_207(hParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

void func_126(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x46E0 Hash - 0x81C6837 ^0x21B516A3
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

	if (!func_209() || bParam6)
	{
		func_210(hParam0, iParam1, bParam2, iParam4, bParam3, bParam5);
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
	else if (bParam2 && func_90(hParam0, 2097152))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		flag = true;
	}

	num = func_83(hParam0);
	num2 = 0;
	num3 = joaat("Inventory");

	if (num == joaat("AMMO") && hParam0 != joaat("ammo_hatchet") && hParam0 != joaat("ammo_hatchet_cleaver") && hParam0 != joaat("ammo_hatchet_hunter") && hParam0 != joaat("ammo_tomahawk_ancient") && hParam0 != joaat("ammo_poisonbottle") && hParam0 != joaat("AMMO_MOONSHINEJUG_MP") && !func_5(hParam0, -1982291600) && !func_5(hParam0, 137764179))
	{
		num2 = joaat("ammo_types");
		num3 = joaat("ammo_types");
	}

	hash = func_157(hParam0);

	if (num == joaat("weapon_mod") || num == joaat("weapon_decoration") || hash == -1674363638 || hash == 252325943 || hash == 829857647 || hash == -636562458 || hash == 1341188928 || hash == 1216664798)
	{
		str = "ITEMTYPE_UPGRADES";
		str.f_1 = "itemtype_textures";
	}
	else if (!func_212(hParam0, &str, num3, num2, 0, joaat("ui_itemviewer")))
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
		str4 = func_213(hParam0);
	
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

	if (func_214(hParam0))
		if (!flag && !bParam2)
			num4 = joaat("color_yellow");
		else
			num4 = joaat("color_yellowdark");

	hash2 = func_116(hParam0, false);

	if (func_215(hash) && func_5(hParam0, -306684263) && hash2 != 0)
	{
		hash2 = func_216(hParam0);
	}
	else if (func_83(hParam0) == joaat("CLOTHING"))
	{
		hash3 = func_217(hParam0);
	
		if (func_22(hash3, 0))
			hash2 = func_116(hash3, false);
	}

	if (func_218(hParam0, 1443104131) && bParam3)
	{
		value2 = 1;
		func_219(hParam0, -915411861, &value2, false);
		value = BUILTIN::CEIL(BUILTIN::TO_FLOAT(value) / BUILTIN::TO_FLOAT(value2));
		iParam1 = BUILTIN::CEIL(BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(value2));
	}

	str5 = func_220(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, hash2), value), num4);

	if (iParam1 == 1)
		str5 = MISC::VAR_STRING(0, hash2);

	if (hash == -1839668642 && hParam0 != joaat("clothing_item_hair_none") && hParam0 != 1326838792 && hParam0 != -230310728 || hash == 231148558 && hParam0 != joaat("clothing_item_m_beard_stubble") && hParam0 != joaat("clothing_item_beard_none") || hash == 252325943 && hParam0 != joaat("clothing_blend_lipstick_none") || hash == -636562458 && hParam0 != joaat("clothing_blend_eyeshadow_none"))
		str5 = MISC::VAR_STRING(0, func_221(hParam0, -442898163));

	if (hash == -126813555 || hash == 1946043663)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk7, "", 128);
	
		if (func_222(hParam0, &unk7))
			str5 = func_224(func_223(unk7), joaat("COLOR_PURE_WHITE"));
	}

	func_208(str5, str.f_1, MISC::GET_HASH_KEY(str), num5, num4, str3, str2, 0, true);
	return;
}

int func_127(var uParam0, var uParam1) // Position - 0x4BBB Hash - 0xF1B2F4A1 ^0x4E9D5DD8
{
	int i;
	int num;
	var unk;

	if (func_154("ALL SATCHEL EXCLUDING CLOTHING", &(uParam0->f_1.f_1), &(uParam0->f_1), joaat("SLOTID_SATCHEL"), false))
	{
		uParam0->f_119 = 1;
		i = 0;
		num = 0;
	
		if (uParam0->f_1 > 0)
		{
			unk.f_9 = joaat("SLOTID_NONE");
		
			for (i = uParam0->f_1 - 1; i >= 0; i = i + -1)
			{
				if (!func_155(&unk, i, uParam0->f_1.f_1, uParam0->f_1))
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
						if (func_225(&unk, 0))
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

BOOL func_128(var uParam0, var uParam1) // Position - 0x4C72 Hash - 0x3E027C66 ^0x70F81265
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
		if (func_155(&unk, i, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (func_226(uParam1->[0 /*11*/], unk.f_4))
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

void func_129(int iParam0, Hash hParam1) // Position - 0x4D2C Hash - 0x6166124B ^0x346C850E
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

BOOL func_130(var uParam0, var uParam1) // Position - 0x4DA3 Hash - 0x14EE969C ^0x3CE0D873
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
	
		if (func_155(&unk, i, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (func_226(uParam1->[0 /*11*/], unk.f_4))
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

void func_131(var uParam0) // Position - 0x4E66 Hash - 0x70905DA9 ^0x70905DA9
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (func_22(uParam0->[i /*11*/], 0))
			func_227(&uParam0->[i /*11*/]);
	}

	return;
}

void func_132(var uParam0) // Position - 0x4E98 Hash - 0xFDB128B0 ^0x2B471831
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (func_22(uParam0->[i /*11*/], 0))
			uParam0->[i /*11*/].f_6 = func_4(uParam0->[i /*11*/], -949239683);
	}

	return;
}

BOOL func_133(var uParam0) // Position - 0x4ED7 Hash - 0x43D284C0 ^0x5C458F0B
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
BOOL func_134(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x4F17 Hash - 0x92B705D3 ^0xB783F681
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

BOOL func_135(var uParam0, var uParam1) // Position - 0x500D Hash - 0xEC5FD8E2 ^0x3EBD7048
{
	if (uParam1->f_3)
		return true;

	if (uParam1->f_1)
	{
		return func_133(uParam1);
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

int func_136(var uParam0, var uParam1) // Position - 0x507A Hash - 0x7D48C204 ^0x7D48C204
{
	return 0;
}

Hash func_137(Hash hParam0, BOOL bParam1) // Position - 0x5083 Hash - 0x6C21B9A ^0x615CAFBF
{
	var outData;

	if (!func_22(hParam0, 0))
		return func_228(func_23(hParam0), bParam1);

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData) || outData.f_5 == 0)
		return 0;

	if (bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(outData.f_5))
		return 0;

	return outData.f_5;
}

BOOL func_138(Hash hParam0) // Position - 0x50DB Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

BOOL func_139(int* piParam0, Hash hParam1, var uParam2, BOOL bParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x50E7 Hash - 0x9D321287 ^0x9D321287
{
	if (!func_229(piParam0, false))
		return false;

	if (hParam4 == 0)
		hParam4 = func_230(hParam1, 0, true, iParam5, bParam6);

	if (!func_231(hParam1, hParam4, iParam5))
		return false;

	uParam2->f_17 = hParam1;
	uParam2->f_8 = hParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = hParam4;
	uParam2->f_12 = 1248274121;

	if (!func_232(piParam0, *uParam2, 541670136, bParam3))
		return false;

	if (COLLECTION::_0x9ADEE485726025D4(hParam1) != 0)
	{
		Global_1292143.f_20.f_422 != -1;
		Global_1292143.f_20.f_422.f_1 = hParam1;
		Global_1292143.f_20.f_422 = piParam0->f_1;
	}

	return true;
}

int func_140(int iParam0, int iParam1) // Position - 0x5190 Hash - 0x37FA9E51 ^0x38034F60
{
	int num;

	if (iParam0 == 0)
		return -1;

	if (Global_1292143.f_459.f_1546 >= 40)
	{
		func_233();
		return -1;
	}

	num = -1;
	num.f_5.f_1 = 11;
	num.f_18.f_1 = 10;
	num.f_4 = iParam0;
	num = func_234();
	num.f_3 = iParam1;
	func_235(num, 0);
	return num;
}

BOOL func_141(int iParam0) // Position - 0x51F4 Hash - 0xA059D395 ^0x8E0849E2
{
	return func_236(Global_1940085.f_38, iParam0);
}

void func_142(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5208 Hash - 0x90451281 ^0x90451281
{
	int num;

	if (bParam2 && !func_50(iParam0))
		return;

	num = func_81(iParam0);

	if (bParam1)
	{
		func_237(iParam0, 4);
	
		if (bParam3)
			func_238(num, true);
	
		func_239(num, true);
	}
	else
	{
		func_240(iParam0, 4);
		func_239(num, false);
	}

	return;
}

BOOL func_143(int iParam0, int iParam1) // Position - 0x525C Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1951910[iParam0 /*23*/].f_1 && iParam1 != false;
}

void func_144(var uParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x527D Hash - 0x3E9A5D7C ^0xE0671913
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

void func_145(var uParam0, int iParam1, var uParam2, Hash hParam3, BOOL bParam4) // Position - 0x5316 Hash - 0xE77E9D41 ^0x2E5BA8BE
{
	var unk;

	if (*uParam2 >= 11)
		return;

	if (!uParam0->f_2[iParam1 /*5*/].f_3)
	{
		iLocal_24 = iLocal_24 + 1;
		uParam0->f_2[iParam1 /*5*/].f_4 = iLocal_24;
	}

	uParam0->f_2[iParam1 /*5*/].f_3 = 1;
	TEXT_LABEL_ASSIGN_STRING(&unk, "textField", 16);
	TEXT_LABEL_APPEND_INT(&unk, *uParam2, 16);
	uParam0->f_64[*uParam2] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &unk);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_64[*uParam2], "text", *uParam0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_64[*uParam2], "style", hParam3);
	TEXT_LABEL_ASSIGN_STRING(&unk, "divider", 16);
	TEXT_LABEL_APPEND_INT(&unk, *uParam2, 16);
	uParam0->f_76[*uParam2] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &unk);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_76[*uParam2], "isVisible", bParam4);
	*uParam2 = *uParam2 + 1;
	return;
}

void func_146(var uParam0, Hash hParam1) // Position - 0x53DD Hash - 0x7799F092 ^0x1A028C41
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
					func_144(&(uParam0->f_5), 1, 2, true, false);
					break;
			
				case -139224928:
					func_144(&(uParam0->f_5), 4, 1, true, false);
					break;
			
				case -29447330:
					func_144(&(uParam0->f_5), 5, 2, true, false);
					break;
			
				case 159464507:
					func_144(&(uParam0->f_5), 6, 1, true, false);
					break;
			
				case 276123595:
					func_144(&(uParam0->f_5), 3, 3, true, false);
					break;
			
				case 1175698187:
					func_144(&(uParam0->f_5), 7, 2, false, false);
					break;
			
				case 1410847083:
					func_144(&(uParam0->f_5), 0, 0, true, false);
					break;
			
				case 1724675796:
					func_144(&(uParam0->f_5), 2, 1, true, false);
					break;
			}
		}
	}

	return;
}

void func_147(var uParam0, Hash hParam1) // Position - 0x54E7 Hash - 0x5650074E ^0xBBBFF2C3
{
	int i;
	int j;
	int num;
	const char* stringFromHashKey;

	for (j = 0; j < uParam0->f_105; j = j + 1)
	{
		for (i = 0; i < uParam0->f_5.f_2[j /*5*/].f_1; i = i + 1)
		{
			if (func_241(i))
			{
				uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(hParam1, uParam0->f_5.f_2[j /*5*/].f_2, i);
				stringFromHashKey = HUD::GET_STRING_FROM_HASH_KEY(uParam0->f_5);
				uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(hParam1, uParam0->f_5.f_2[j /*5*/].f_2, i + 1);
			
				if (MISC::_DOES_STRING_EXIST_IN_STRING(stringFromHashKey, "_MH"))
					func_144(&(uParam0->f_5), num, 0, true, false);
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(stringFromHashKey, "_SH"))
					func_144(&(uParam0->f_5), num, 1, true, false);
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(stringFromHashKey, "_BDY_C"))
					func_144(&(uParam0->f_5), num, 3, false, false);
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(stringFromHashKey, "_BDY_J"))
					func_144(&(uParam0->f_5), num, 4, false, false);
				else if (MISC::_DOES_STRING_EXIST_IN_STRING(stringFromHashKey, "_BDY_L"))
					func_144(&(uParam0->f_5), num, 2, false, false);
			
				num = num + 1;
			}
		}
	}

	return;
}

void func_148(var uParam0, Hash hParam1) // Position - 0x55FA Hash - 0xF209FECA ^0x7CCBC66E
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
					func_144(&(uParam0->f_5), num, 2, true, false);
					num = num + 1;
					break;
			
				case 1410847083:
					func_144(&(uParam0->f_5), num, 0, true, false);
					num = num + 1;
					break;
			}
		}
	}

	return;
}

void func_149(var uParam0, Hash hParam1) // Position - 0x5697 Hash - 0x7799F092 ^0x1A028C41
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
					func_144(&(uParam0->f_5), 2, 3, true, false);
					break;
			
				case -29447330:
					func_144(&(uParam0->f_5), 4, 3, true, false);
					break;
			
				case 276123595:
					func_144(&(uParam0->f_5), 3, 3, true, false);
					break;
			
				case 1410847083:
					func_144(&(uParam0->f_5), 0, 0, true, false);
					break;
			}
		}
	}

	uParam0->f_5 = hParam1;
	func_144(&(uParam0->f_5), 1, 1, true, false);
	return;
}

void func_150(var uParam0, Hash hParam1) // Position - 0x575F Hash - 0xF209FECA ^0x7CCBC66E
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
					func_144(&(uParam0->f_5), num, 2, false, false);
					num = num + 1;
					break;
			
				case 1410847083:
					func_144(&(uParam0->f_5), num, 1, true, false);
					num = num + 1;
					break;
			
				case 1724675796:
					func_144(&(uParam0->f_5), num, 3, true, false);
					num = num + 1;
					break;
			}
		}
	}

	return;
}

void func_151(var uParam0, Hash hParam1) // Position - 0x5818 Hash - 0x7799F092 ^0x1A028C41
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
					func_144(&(uParam0->f_5), 3, 0, true, false);
					break;
			
				case -139224928:
					func_144(&(uParam0->f_5), 2, 0, true, false);
					break;
			
				case -29447330:
					func_144(&(uParam0->f_5), 5, 3, true, false);
					break;
			
				case 276123595:
					func_144(&(uParam0->f_5), 4, 3, true, false);
					break;
			
				case 852595847:
					func_144(&(uParam0->f_5), 7, 3, true, false);
					break;
			
				case 1175698187:
					func_144(&(uParam0->f_5), 6, 3, true, false);
					break;
			
				case 1410847083:
					func_144(&(uParam0->f_5), 0, 1, true, false);
					break;
			
				case 1488412754:
					func_144(&(uParam0->f_5), 8, 3, true, false);
					break;
			
				case 1724675796:
					func_144(&(uParam0->f_5), 1, 0, true, false);
					break;
			}
		}
	}

	return;
}

void func_152(var uParam0, Hash hParam1) // Position - 0x5938 Hash - 0x7799F092 ^0x1A028C41
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
					func_242(hParam1, &(uParam0->f_5), &unk, 1);
					break;
			
				case -1720361947:
				case -139224928:
					func_242(hParam1, &(uParam0->f_5), &unk, 1);
					break;
			
				case -641080715:
				case -29447330:
				case 276123595:
					func_242(hParam1, &(uParam0->f_5), &unk, 2);
					break;
			
				case 159464507:
				case 1410847083:
					func_242(hParam1, &(uParam0->f_5), &unk, 0);
					break;
			
				case 852595847:
				case 1175698187:
				case 1488412754:
					func_242(hParam1, &(uParam0->f_5), &unk, 2);
					break;
			}
		}
	}

	return;
}

Hash func_153(Hash hParam0, int iParam1) // Position - 0x5A32 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_22(hParam0, 0))
		return 0;

	num = func_83(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_5(hParam0, 1399091007))
	{
		func_200(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_154(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x5AAC Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_163(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_155(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x5AD3 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_156(Hash hParam0) // Position - 0x5B0E Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

Hash func_157(Hash hParam0) // Position - 0x5B29 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_22(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

int func_158(Hash hParam0) // Position - 0x5B54 Hash - 0xB8EC44B7 ^0x72487142
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

int func_159(var uParam0, int iParam1) // Position - 0x5C37 Hash - 0x6AC2726E ^0xDB215040
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

int func_160(Hash hParam0) // Position - 0x5C74 Hash - 0xD114ACC1 ^0x3428F85C
{
	Hash hash;

	hash = func_157(hParam0);

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

int func_161(Hash hParam0, BOOL bParam1) // Position - 0x5CE1 Hash - 0xF271562B ^0x8AA3413F
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_243(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam1)
		func_245(&unk, func_244(false));

	if (!func_246(&unk, &num, &num2, false))
		return 0;

	func_14(num);
	return num2;
}

int func_162(Hash hParam0, Hash hParam1) // Position - 0x5D40 Hash - 0x865BD5D3 ^0xA4D690BD
{
	if (hParam1 == 0)
		return 0;

	if (func_65(func_23(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

int func_163(BOOL bParam0) // Position - 0x5D6C Hash - 0x58DE66BA ^0xF4629DE1
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

struct<4> func_164(Hash hParam0, BOOL bParam1) // Position - 0x5DAD Hash - 0x8EFC92E9 ^0xE8DA0FF0
{
	var unk;

	unk = { func_169(hParam0, bParam1, false) };
	return func_183(hParam0, unk, unk.f_4, bParam1);
}

BOOL func_165(Hash hParam0) // Position - 0x5DD2 Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_83(hParam0) == joaat("WEAPON");
}

BOOL func_166(Hash hParam0) // Position - 0x5DE6 Hash - 0xCD05DF70 ^0x86E370D6
{
	var unk;

	if (func_3() != -1)
		return false;

	if (func_90(hParam0, 1048576))
		return false;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return func_172(hParam0, &unk, 1, false, false, -1, false);

	return func_42(hParam0, 1);
}

void func_167(Hash hParam0, int iParam1, BOOL bParam2, var uParam3, Hash hParam4) // Position - 0x5E2B Hash - 0x4ACBF8C5 ^0x4A0F082E
{
	Hash weaponHash;

	if (func_83(hParam0) != joaat("WEAPON"))
		return;

	weaponHash = func_95(hParam0, false);

	if (!WEAPON::IS_WEAPON_VALID(weaponHash))
		return;

	if (bParam2 || !func_180(weaponHash))
	{
		if (bParam2 || !WEAPON::HAS_PED_GOT_WEAPON(Global_33, weaponHash, 0, false) && func_86(hParam0, false, false, false) == 0)
		{
			if (func_3() == -1)
				func_96(weaponHash);
		
			if (!*uParam3 && !(hParam4 == 1248274121))
			{
				func_126(hParam0, iParam1, false, 0, 0, false, false);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}

	return;
}

void func_168(Hash hParam0, var uParam1) // Position - 0x5ED5 Hash - 0xE8F09939 ^0xD0796490
{
	if (func_5(hParam0, 58855631))
		func_219(hParam0, -915411861, uParam1, true);

	return;
}

struct<5> func_169(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5EFA Hash - 0xFD1D83A6 ^0x412BEE1D
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_247(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	num = func_83(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_250(hParam0, -1823706425))
			{
				unk = { func_183(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_250(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_183(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_183(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
			else if (func_250(hParam0, -1653629781))
			{
				unk = { func_183(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = joaat("SLOTID_NONE");
			unk = { func_249(bParam1) };
		
			switch (func_157(hParam0))
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
			unk = { func_183(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_244(bParam1) };
		
			if (bParam2 && func_248(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_181(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_181(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_182(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_251(unk, &unk28, bParam1, false, -1))
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
			else if (func_250(hParam0, -1653629781))
			{
				unk = { func_183(1384535894, unk, 1784584921, bParam1) };
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

int func_170(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x626E Hash - 0xFE9D5798 ^0xDB9F4CF5
{
	if (!func_22(hParam0, 0))
	{
		if (func_65(func_23(hParam0), 2))
			return -1;
	
		return 0;
	}

	if (func_83(hParam0) == joaat("fee"))
		return -1;

	if (!bParam2 && func_162(hParam0, joaat("DEFAULT")) == 0)
		bParam2 = true;

	if (bParam2)
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_163(bParam3), hParam0);
}

int func_171(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x62E2 Hash - 0x118F0611 ^0x5AC648CA
{
	if (func_102(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_163(bParam1), hParam0, bParam3);
}

BOOL func_172(Hash hParam0, Any* panParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6) // Position - 0x6315 Hash - 0x83727B4C ^0xA6F6F598
{
	var unk;
	var unk5;
	int num;
	int num2;

	func_252(&hParam0);

	if (!func_22(hParam0, 0) && !func_65(func_23(hParam0), 2))
		return 0;

	if (!bParam3 && func_162(hParam0, joaat("DEFAULT")) == 0)
		bParam3 = true;

	if (func_165(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		unk = { func_244(false) };
		unk5.f_9 = joaat("SLOTID_NONE");
	
		if (!func_181(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
			return 0;
		else if (func_182(hParam0, &unk5, joaat("SLOTID_WEAPON_0")))
			return 0;
	
		if (func_248(hParam0, true))
			if (!func_181(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
				return 0;
			else if (func_182(hParam0, &unk5, joaat("SLOTID_WEAPON_1")))
				return 0;
	
		return 1;
	}

	num = iParam5;

	if (iParam5 < 0)
		num = func_170(hParam0, panParam1, bParam3, bParam4);

	if (num < 0)
		return 0;
	else if (num == 0)
		return 1;

	num2 = func_253(hParam0, *panParam1, panParam1->f_4, bParam4, bParam3, bParam6);

	if (num2 + iParam2 > num)
		return 1;

	return 0;
}

BOOL func_173() // Position - 0x6449 Hash - 0xB8876D40 ^0xFAD3D5CE
{
	if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_33) && !func_254(Global_33, 1369124074) && !func_254(Global_33, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD) && !TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33) && !PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
		return true;

	return false;
}

BOOL func_174(int iParam0) // Position - 0x64AE Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_175(int iParam0) // Position - 0x64C1 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_38.f_3651[num2], offset);
}

void func_176(int iParam0) // Position - 0x64EB Hash - 0x48EBE6BD ^0x358C7E90
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

void func_177(int iParam0) // Position - 0x6525 Hash - 0xB25DF9C2 ^0xF6204414
{
	switch (iParam0)
	{
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
	
		case 2:
			if (func_263() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
				func_264("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_107(677, false);
			break;
	
		case 3:
			if (func_263() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
				func_264("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_107(678, false);
			break;
	
		case 4:
			if (func_263() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
				func_264("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_107(679, false);
			break;
	
		case 5:
			if (func_263() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
				func_264("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_107(680, false);
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
			func_255(true);
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
			func_256(1);
			break;
	
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_256(2);
			break;
	
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_256(3);
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
			func_257(true);
			break;
	
		case 33:
			func_258(true);
			break;
	
		case 34:
			func_259(true);
			break;
	
		case 35:
			break;
	
		case 36:
			func_260(false);
			break;
	
		case 37:
			func_261(false);
			break;
	
		case 38:
			func_262(false);
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
					func_100(1013902307, 1, 752097756);
			break;
	
		case 48:
			if (func_3() == -1)
				if (!func_42(786809402, 1))
					func_100(786809402, 1, 752097756);
			break;
	
		case 49:
			if (func_3() == -1)
			{
				if (!func_42(1013902307, 1))
					func_100(1013902307, 1, 752097756);
			
				if (!func_42(142640135, 1))
					func_100(142640135, 1, 752097756);
			}
			break;
	
		case 50:
			if (func_3() == -1)
			{
				if (!func_42(786809402, 1))
					func_100(786809402, 1, 752097756);
			
				if (!func_42(-518019409, 1))
					func_100(-518019409, 1, 752097756);
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

int func_178(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x6AA1 Hash - 0xC51EFF01 ^0xD252B7CC
{
	var unk;
	var unk13;
	var unk26;

	unk.f_1 = 10;
	unk13.f_1 = 11;
	return func_265(iParam0, &unk26, &unk13, &unk, iParam1, iParam2, iParam3, bParam4);
}

BOOL func_179(Hash hParam0) // Position - 0x6AD1 Hash - 0x8C6B1607 ^0xB465A08C
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_VISIBLE(weaponUnlock))
		return true;

	return false;
}

BOOL func_180(Hash hParam0) // Position - 0x6AF9 Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

BOOL func_181(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x6B21 Hash - 0x28ECC25A ^0x28ECC25A
{
	return func_253(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_182(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x6B3C Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_266(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_183(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x6B5D Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_22(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_163(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_184(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x6B8E Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;
	var unk15;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_267(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_251(*panParam1, &unk, bParam6, false, -1))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_97(bParam6))
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
			num = func_268(joaat("use"), &unk15, true);
		
			if (num != -1)
			{
				num2.f_7 = -142743235;
				num2.f_16 = -1;
				num2 = iParam5;
				num2.f_7 = hParam4;
				func_269(num, num2);
			}
		}
	
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_163(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

void func_185(Hash hParam0, int iParam1) // Position - 0x6CAC Hash - 0xC6BCDC43 ^0xB7300BA8
{
	int ammo;
	int ammo2;
	int ammo3;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_33, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo3 = func_270(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_33, hParam0, ammo3);
	
		if (WEAPON::GET_MAX_AMMO(Global_33, &ammo2, hParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_33, hParam0) > ammo2)
			WEAPON::SET_PED_AMMO(Global_33, hParam0, ammo2);
	}

	return;
}

int func_186(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x6D1E Hash - 0x8DB88FC7 ^0xD6CAC1F
{
	int num;
	var guid2;
	var guid1;

	if (!func_22(hParam0, 0))
		return 0;

	num = func_162(hParam0, joaat("DEFAULT"));

	if (num == 0)
		return 0;

	guid2 = { func_169(hParam0, false, false) };

	if (func_172(hParam0, &guid2, iParam1, false, false, -1, false))
		return 0;

	if (!func_97(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_163(false), &guid1, &guid2, hParam0, guid2.f_4, iParam1, hParam2))
		return 0;

	return 1;
}

int func_187(Hash hParam0, Any* panParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x6D9A Hash - 0x740B8A62 ^0x5C694353
{
	if (!func_22(hParam0, 0))
		return 0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_172(hParam0, panParam2, iParam3, bParam5, false, -1, false))
		return 0;

	if (!func_97(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_163(false), panParam1, panParam2, hParam0, panParam2->f_4, iParam3, hParam4))
		return 0;

	return 1;
}

void func_188(Hash hParam0) // Position - 0x6E02 Hash - 0x708BD33E ^0x8BF76231
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
	value = func_271();
	func_272(&value, 0, 0, 0, 1, 0, 0, false);
	DECORATOR::DECOR_SET_INT(Global_33, propertyName2, value);
	return;
}

int func_189(Hash hParam0) // Position - 0x6ED1 Hash - 0x62B2BF56 ^0x18236051
{
	int num;
	int pedAmmoByType;

	if (func_273(hParam0))
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

BOOL func_190() // Position - 0x6F4D Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

BOOL func_191(Hash hParam0) // Position - 0x6F56 Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

Hash func_192(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6F68 Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

int func_193(Hash hParam0) // Position - 0x6F8E Hash - 0xBA04765D ^0x454D110B
{
	Hash weaponTypeFromAmmoType;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);

	if (WEAPON::IS_WEAPON_A_GUN(weaponTypeFromAmmoType))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_91(49))
			{
				if (!func_91(47))
					return 149;
			
				return 151;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_91(50))
			{
				if (!func_91(48))
					return 150;
			
				return 152;
			}
		}
	}

	return 153;
}

void func_194(int iParam0, var uParam1, var uParam2) // Position - 0x6FFA Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_195(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x7016 Hash - 0x6E07CB9 ^0x6E07CB9
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_274(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_275(iParam0))
		return false;

	if (func_276(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_202(iParam0, 1) || func_277(32768))
		if (!func_202(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_278())
		return false;

	return true;
}

void func_196(int iParam0, int iParam1) // Position - 0x70B8 Hash - 0x978E21B ^0xA1438975
{
	var address;

	address = Global_1904402[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1904402[iParam0] = address;
	return;
}

int func_197(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x70DC Hash - 0x88B97E84 ^0x896726CB
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

void func_198(int iParam0, const char* sParam1, int iParam2, BOOL bParam3) // Position - 0x71AC Hash - 0x6EA86F5A ^0x57BEA734
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_279(iParam0, 1000);
			return;
		}
	
		sParam1 = "FEED_MONEY_EARN";
	}

	func_208(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	return;
}

void func_199(int iParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0x71FE Hash - 0x7435A573 ^0x3E04C000
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
	
		if (func_280() || func_281())
			num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value) * 0.1f);
	
		iParam0 = iParam0 + num2;
		value = value + num2;
		func_208(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		iParam0 = iParam0 - num;
		num > 0;
		func_208(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", value), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	}
	else
	{
		value = iParam0;
	}

	if (value > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(value, 752097756);
		func_105(func_205(joaat("CAREER_CASH")), value);
	}

	return;
}

void func_200(Hash hParam0, var uParam1, var uParam2) // Position - 0x72D9 Hash - 0x38E6C2DD ^0xA4FE6475
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

Hash func_201(Hash hParam0, BOOL bParam1) // Position - 0x74E5 Hash - 0xBBDA5425 ^0x94A0AB4
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

BOOL func_202(int iParam0, int iParam1) // Position - 0x7587 Hash - 0xECB143B0 ^0xE41A70C5
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

void func_203(var uParam0, int iParam1) // Position - 0x75A0 Hash - 0x624BD2B7 ^0x9DA59487
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

int func_204(int iParam0, var uParam1, Any anParam2, int iParam3, int iParam4) // Position - 0x76CC Hash - 0x4F430DA4 ^0x658D22B6
{
	var unk;
	int num;

	if (iParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_282(uParam1);
	SECURE_STORE(&unk, iParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_3.f_1 = 10;
	num = iParam3;
	num.f_3 = { *uParam1 };
	num.f_2 = iParam4;
	func_283(anParam2, iParam0, num);
	return 1;
}

struct<2> func_205(int iParam0) // Position - 0x773B Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x774B Hash - 0xA17D549C ^0xAF7614EF
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

Hash func_207(Hash hParam0) // Position - 0x7822 Hash - 0x42CB27A1 ^0xAE7DBAA9
{
	Hash num;

	if (!func_134(hParam0, &num, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
		return joaat("_placeholder");

	return num;
}

int func_208(const char* sParam0, const char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x784C Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_284(sParam0, sParam1, hParam2);
	return num2;
}

BOOL func_209() // Position - 0x78AF Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1913444;
}

void func_210(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x78BC Hash - 0x3B7A5BE9 ^0xEE7A100D
{
	int i;

	for (i = 0; i < Global_1913444.f_3; i = i + 1)
	{
		if (Global_1913444.f_4[i /*6*/] == hParam0 && Global_1913444.f_4[i /*6*/].f_2 == iParam2 && Global_1913444.f_4[i /*6*/].f_3 == iParam3 && Global_1913444.f_4[i /*6*/].f_4 == iParam4 && Global_1913444.f_4[i /*6*/].f_5 == iParam5)
		{
			Global_1913444.f_4[i /*6*/].f_1 = Global_1913444.f_4[i /*6*/].f_1 + iParam1;
			return;
		}
	}

	if (Global_1913444.f_3 < 19)
	{
		Global_1913444.f_4[Global_1913444.f_3 /*6*/] = hParam0;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_1 = iParam1;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_2 = iParam2;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_3 = iParam3;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_4 = iParam4;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_5 = iParam5;
		Global_1913444.f_3 = Global_1913444.f_3 + 1;
	}

	return;
}

var func_211(BOOL bParam0, var uParam1, var uParam2) // Position - 0x79DF Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_212(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x79F6 Hash - 0x92B705D3 ^0xB783F681
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

char* func_213(Hash hParam0) // Position - 0x7AE9 Hash - 0xFBA883FB ^0x87D0EE53
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

BOOL func_214(Hash hParam0) // Position - 0x7BE5 Hash - 0x12CDDB68 ^0xF31C74A7
{
	if (func_5(hParam0, -189374246))
		if (func_285(hParam0, -1305775593) || func_285(hParam0, 1384151091) || func_285(hParam0, 2075388272) || func_285(hParam0, -1738780413))
			return true;

	if (func_5(hParam0, -753854379) || func_5(hParam0, 173360570))
		return true;

	return false;
}

BOOL func_215(Hash hParam0) // Position - 0x7C64 Hash - 0x339D45CE ^0x339D45CE
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

Hash func_216(Hash hParam0) // Position - 0x7C8B Hash - 0x9C7FC6B8 ^0x60951C4B
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

Hash func_217(Hash hParam0) // Position - 0x7CF9 Hash - 0xD046EEF0 ^0xB8E66C21
{
	int num;
	var unk;
	int collectionId;
	int num2;
	int i;
	Hash outKey;

	num = func_286(hParam0);

	if (num == 0)
		return 0;

	unk = { func_287(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0, 0, -1, num, 0) };

	if (func_288(unk, &collectionId, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(collectionId, i, &outKey) && func_289(outKey))
			{
				func_290(collectionId);
				return outKey;
			}
		}
	
		func_290(collectionId);
	}

	return 0;
}

int func_218(Hash hParam0, Hash hParam1) // Position - 0x7D7E Hash - 0x34B85114 ^0x6986CE99
{
	if (hParam0 == 0)
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, -949239683))
		return 1;

	return 0;
}

int func_219(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0x7DAF Hash - 0x6E96D276 ^0x9A3B0071
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

const char* func_220(const char* sParam0, int iParam1) // Position - 0x7E0E Hash - 0x9E99F03 ^0x45493D8D
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

 func_221(Hash hParam0, int iParam1) // Position - 0x7E28 Hash - 0x7C967237 ^0x7C967237
{
	 num;

	num = func_291(hParam0, iParam1);

	if (num == 0)
		return 0;

	return num;
}

BOOL func_222(Hash hParam0, char* sParam1) // Position - 0x7E46 Hash - 0xE779657E ^0x44FD4FF7
{
	int lengthOfLiteralString;
	var unk;

	if (!func_22(hParam0, 0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(sParam1, func_292(hParam0), 128);
	lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);

	if (!func_293(hParam0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(&unk, func_294(hParam0), 128);

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

const char* func_223(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x7EC3 Hash - 0xE80420B9 ^0x2740E778
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

const char* func_224(const char* sParam0, int iParam1) // Position - 0x7ED7 Hash - 0xB0CFF0C3 ^0x88CDDEAF
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);

	return func_220(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

BOOL func_225(var uParam0, int iParam1) // Position - 0x7F0D Hash - 0xD248A057 ^0xD5D6A9F9
{
	int num;

	if (func_295(uParam0->f_9))
		return false;

	if (!func_296(*uParam0))
		return false;

	if (!func_297(uParam0->f_4, iParam1, false))
		return false;

	if (!func_298(uParam0->f_4))
		return false;

	if (func_299(false))
	{
		if (!func_22(uParam0->f_4, 0))
			return false;
	
		if (func_121())
		{
			num = func_171(uParam0->f_4, true, false, false);
		
			if (num < func_253(uParam0->f_4, uParam0->f_5, uParam0->f_9, false, false, false))
				uParam0->f_11 = num;
		}
	
		if (uParam0->f_11 <= 0)
			return false;
	}

	if (Global_1940252.f_11588 == 0 && !func_138(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940252.f_11613, Global_1940252.f_11596), "label")) && !func_300())
		func_301(uParam0->f_4);
	else
		func_302(0);

	return true;
}

BOOL func_226(Hash hParam0, Hash hParam1) // Position - 0x7FFC Hash - 0x9D305ADC ^0xED1BD779
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

void func_227(var uParam0) // Position - 0x80A2 Hash - 0xA0478F20 ^0x35094FCE
{
	var outData;

	if (func_69(uParam0->f_6))
		if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(*uParam0, &outData))
			uParam0->f_7.f_2 = outData.f_4;

	return;
}

int func_228(Hash hParam0, BOOL bParam1) // Position - 0x80CE Hash - 0x84086197 ^0x82A85664
{
	int num;

	if (!func_65(hParam0, 2))
		return 0;

	num = 0;

	if (num != 0 && bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
		return 0;

	return num;
}

BOOL func_229(int* piParam0, BOOL bParam1) // Position - 0x8107 Hash - 0x7D3BA1EA ^0x8B940399
{
	if (!bParam1)
		if (func_303(piParam0))
			return false;

	if (func_304(&(piParam0->f_6)))
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

Hash func_230(Hash hParam0, int iParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0x81A3 Hash - 0x6E5FA253 ^0x344F4256
{
	int num;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (!func_305(hParam0))
		return 0;

	flag = func_306(iParam3, 2);
	flag2 = func_307(hParam0, -570078785, flag);
	flag3 = func_307(hParam0, -915411861, flag);

	if (func_307(hParam0, 997808187, flag))
		iParam1 = 997808187;
	else if (bParam4 && func_308(hParam0, &num) || func_309(hParam0, &num))
		iParam1 = num;
	else if (flag2 && !flag3)
		iParam1 = -570078785;
	else if (flag2 && flag3)
		if (func_310())
			iParam1 = -570078785;
		else
			iParam1 = -915411861;
	else if (flag3)
		iParam1 = -915411861;
	else if (func_311(15) && func_307(hParam0, 369710026, flag))
		iParam1 = 369710026;

	if (iParam1 == 0 && bParam2)
		return -915411861;

	return iParam1;
}

BOOL func_231(Hash hParam0, Hash hParam1, int iParam2) // Position - 0x82A8 Hash - 0x67DCAB3C ^0x67DCAB3C
{
	if (hParam0 == 0)
		return false;

	if (!func_307(hParam0, hParam1, false))
		return false;

	if (func_306(iParam2, 2))
		if (func_312(hParam0, hParam1))
			return false;

	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(hParam0))
		return false;

	if (func_306(iParam2, 8))
		return func_313(hParam0, hParam1);

	return true;
}

BOOL func_232(int* piParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, Hash hParam19, BOOL bParam20) // Position - 0x8308 Hash - 0xCC3F3D79 ^0x430250A2
{
	if (hParam19 != 541670136)
		return false;

	if (!func_314(uParam1))
		return false;

	if (!func_315(piParam0, hParam19))
		return false;

	if (func_316(*piParam0, hParam19, &uParam1))
	{
	}
	else
	{
		return false;
	}

	return func_317(piParam0, bParam20);
}

void func_233() // Position - 0x835C Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

int func_234() // Position - 0x8364 Hash - 0x65D86EC2 ^0xEDE20818
{
	Global_1292143.f_459.f_1552 = Global_1292143.f_459.f_1552 + 1;

	if (Global_1292143.f_459.f_1552 >= 2147483646)
		Global_1292143.f_459.f_1552 = 0;

	return Global_1292143.f_459.f_1552;
}

void func_235(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, int iParam30) // Position - 0x83A9 Hash - 0x559491F8 ^0xD7B41EE2
{
	switch (iParam30)
	{
		case 0:
			Global_1292143.f_459.f_44[func_318() /*30*/] = { uParam0 };
			func_319((func_318() + 1) % 40);
			Global_1292143.f_459.f_1546 = Global_1292143.f_459.f_1546 + 1;
			break;
	
		case 1:
			Global_1292143.f_459.f_1245[func_320() /*30*/] = { uParam0 };
			func_321((func_320() + 1) % 10);
			Global_1292143.f_459.f_1547 = Global_1292143.f_459.f_1547 + 1;
			break;
	}

	return;
}

BOOL func_236(int iParam0, int iParam1) // Position - 0x8440 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_237(int iParam0, int iParam1) // Position - 0x844F Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 - Global_1951910[iParam0 /*23*/].f_1 && iParam1;
	return;
}

void func_238(int iParam0, BOOL bParam1) // Position - 0x8482 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		if (Global_1951910[iParam0 /*23*/].f_5 == 5 && !func_143(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_239(int iParam0, BOOL bParam1) // Position - 0x84DA Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_240(int iParam0, int iParam1) // Position - 0x8503 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 || iParam1;
	return;
}

BOOL func_241(int iParam0) // Position - 0x852B Hash - 0x89A0391F ^0x89A0391F
{
	if (iParam0 % 2 == 0)
		return true;

	return false;
}

void func_242(Hash hParam0, var uParam1, var uParam2, Hash hParam3) // Position - 0x8540 Hash - 0x4011D718 ^0xAA7AC041
{
	if (*uParam2 < 7)
	{
		uParam1->f_64[*uParam2] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_63, func_322(hParam0, *uParam2));
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_64[*uParam2], "text", *uParam1);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_64[*uParam2], "style", hParam3);
		*uParam2 = *uParam2 + 1;
	}

	return;
}

struct<18> func_243(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x859D Hash - 0x90CCF0F4 ^0xA5F3D799
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

struct<4> func_244(BOOL bParam0) // Position - 0x867B Hash - 0xC271E2E0 ^0xF6B4968C
{
	int num;

	num = func_163(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_183(923904168, func_247(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_183(923904168, func_247(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_183(923904168, func_247(bParam0), -740156546, false);
}

void func_245(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x871C Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_246(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x8737 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_163(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

struct<4> func_247(BOOL bParam0) // Position - 0x875C Hash - 0xCD4C5B4C ^0x5BC3600A
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_163(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_183(joaat("character"), func_323(), joaat("SLOTID_NONE"), bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_183(joaat("character"), func_323(), joaat("SLOTID_NONE"), false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_183(joaat("character"), func_323(), joaat("SLOTID_NONE"), bParam0);
}

BOOL func_248(Hash hParam0, BOOL bParam1) // Position - 0x87FC Hash - 0x5D0FB4E0 ^0x17177DE5
{
	if (func_157(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_324();
		else
			return 1;

	return 0;
}

struct<4> func_249(BOOL bParam0) // Position - 0x8833 Hash - 0x9E4BFC8E ^0xE92FDA8B
{
	int num;

	num = func_163(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_183(271701509, func_247(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_183(271701509, func_247(bParam0), 12999093, false);
}

BOOL func_250(Hash hParam0, Hash hParam1) // Position - 0x889D Hash - 0x3516CCA0 ^0x327E5212
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_157(hParam0);

	if (category == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (func_325(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_251(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x890A Hash - 0x113CD144 ^0x113CD144
{
	return func_326(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

int func_252(var uParam0) // Position - 0x8920 Hash - 0x8D760BCC ^0xB90089A3
{
	if (!func_22(*uParam0, 0))
		return 0;

	if (!func_327(*uParam0))
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

int func_253(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x89AA Hash - 0xC754D793 ^0x26C4E67C
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_22(hParam0, 0))
		return 0;

	if (!bParam7 && func_162(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_183(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_163(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_163(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_254(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x8A29 Hash - 0x37FB14EB ^0x7E496A4A
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

void func_255(BOOL bParam0) // Position - 0x8A52 Hash - 0xB584A39F ^0xFC4CA802
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

void func_256(int iParam0) // Position - 0x8A90 Hash - 0x2EDDC601 ^0x8923AAAC
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

void func_257(BOOL bParam0) // Position - 0x8AFE Hash - 0x731EA76E ^0xD49C9ADF
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33);
	PED::SET_PED_CONFIG_FLAG(Global_33, 440, !bParam0);
	return;
}

void func_258(BOOL bParam0) // Position - 0x8B38 Hash - 0x731EA76E ^0xCC0310C8
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33);
	PED::SET_PED_CONFIG_FLAG(Global_33, 439, !bParam0);
	return;
}

void func_259(BOOL bParam0) // Position - 0x8B72 Hash - 0x731EA76E ^0xC0281252
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33);
	PED::SET_PED_CONFIG_FLAG(Global_33, 438, !bParam0);
	return;
}

void func_260(BOOL bParam0) // Position - 0x8BAC Hash - 0x6ED794F8 ^0x98C24F9E
{
	Hash hash;

	hash = 398076311;

	if (bParam0)
		HUD::_ENABLE_HUD_CONTEXT(hash);
	else
		HUD::_DISABLE_HUD_CONTEXT(hash);

	return;
}

void func_261(BOOL bParam0) // Position - 0x8BCF Hash - 0x15EA8A2D ^0x6EE74130
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

void func_262(BOOL bParam0) // Position - 0x8C11 Hash - 0xBAD014C9 ^0x3FDE3E28
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

BOOL func_263() // Position - 0x8C53 Hash - 0x65674CA9 ^0xC0D8F466
{
	return true;
}

int func_264(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x8C72 Hash - 0xB88D7AA5 ^0x36259347
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

int func_265(int iParam0, Any anParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x8CD8 Hash - 0x72C1A759 ^0xD848AFAA
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
		func_328(iParam2, -372840566);

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
	func_329(anParam1, iParam0, unk2);
	return 1;
}

BOOL func_266(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x8DB9 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_163(false);
	*panParam1 = { func_183(hParam0, func_244(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_267(Hash hParam0) // Position - 0x8DFE Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

int func_268(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x8E14 Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_330(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_332(func_331(num, hParam0, panParam1), num, panParam1);
	else
		return func_333(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17), num, panParam1);

	return -1;
}

void func_269(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0x8E7E Hash - 0x4EE39F09 ^0x4C62B7DF
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

int func_270(int iParam0, int iParam1) // Position - 0x8EFC Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

int func_271() // Position - 0x8F12 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1902569;
}

void func_272(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x8F1E Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_334(*uParam0);
	i = func_335(*uParam0);
	num2 = func_336(*uParam0);
	j = func_337(*uParam0);
	k = func_338(*uParam0);
	l = func_339(*uParam0);

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

	for (m = func_340(i, num); num2 > m; m = func_340(i, num))
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

	func_341(uParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_273(Hash hParam0) // Position - 0x90A6 Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

BOOL func_274(int iParam0, int iParam1) // Position - 0x90B4 Hash - 0x5A86BEFA ^0xB951E1EF
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_275(int iParam0) // Position - 0x90CC Hash - 0x773BFB67 ^0x773BFB67
{
	if (func_202(iParam0, 4))
		return false;

	return true;
}

BOOL func_276(int iParam0) // Position - 0x90E3 Hash - 0x7F4C96B ^0x650690F6
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

BOOL func_277(int iParam0) // Position - 0x91AF Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_278() // Position - 0x91C2 Hash - 0xD9A24882 ^0xD9A24882
{
	if (!func_55())
		return false;

	return Global_1904402.f_8873;
}

void func_279(int iParam0, int iParam1) // Position - 0x91DD Hash - 0x74C9983D ^0x6478FDCA
{
	if (iParam0 <= 0)
		return;

	if (func_342())
	{
		Global_1913444.f_125 = MISC::GET_GAME_TIMER();
		Global_1913444.f_126 = iParam1;
	}

	Global_1913444.f_127 = Global_1913444.f_127 + iParam0;
	return;
}

BOOL func_280() // Position - 0x9219 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_281() // Position - 0x922A Hash - 0x11DC3931 ^0xA685465E
{
	return DLC::IS_DLC_PRESENT(joaat("dlc_ultimateedition"));
}

void func_282(var uParam0) // Position - 0x923B Hash - 0x333BC7D4 ^0xCB2892E1
{
	func_203(uParam0, joaat("MULTIPLAYER_GAME"));

	if (func_343() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_203(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_203(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_283(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) // Position - 0x9273 Hash - 0x15598973 ^0x15598973
{
	int i;
	var unk;

	if (!func_304(anParam0))
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

void func_284(const char* sParam0, const char* sParam1, Hash hParam2) // Position - 0x9329 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_285(Hash hParam0, Hash hParam1) // Position - 0x935A Hash - 0xCB56AA2F ^0x760BB648
{
	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1224357681))
		return true;

	return false;
}

int func_286(Hash hParam0) // Position - 0x9381 Hash - 0xE1F3DDAE ^0xC8D3B326
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

struct<10> func_287(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x93BB Hash - 0x440EE211 ^0xAE2816F9
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

BOOL func_288(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int* piParam11, int iParam12) // Position - 0x948F Hash - 0xB0933807 ^0x5CBA43FF
{
	*uParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, piParam11, iParam12);

	if (*uParam10 >= 0)
		return true;

	return false;
}

BOOL func_289(Hash hParam0) // Position - 0x94B0 Hash - 0x5E6E1858 ^0xE905275C
{
	!func_22(hParam0, 0);

	if (func_5(hParam0, -393037696))
		return true;

	return false;
}

int func_290(int iParam0) // Position - 0x94D6 Hash - 0x6B3C6310 ^0x9A4DF434
{
	if (iParam0 < 0)
		return 0;

	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_291(Hash hParam0, int iParam1) // Position - 0x94F7 Hash - 0x193BF536 ^0xD3271214
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

char* func_292(Hash hParam0) // Position - 0x9545 Hash - 0x40E070C8 ^0x4AF8C7B6
{
	Hash labelHash;

	if (!func_22(hParam0, 0))
		return "";

	labelHash = func_116(hParam0, false);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

BOOL func_293(Hash hParam0) // Position - 0x957B Hash - 0xB0090776 ^0x189C4477
{
	if (func_157(hParam0) == -126813555 || func_157(hParam0) == 1946043663)
		return true;

	return false;
}

char* func_294(Hash hParam0) // Position - 0x95A9 Hash - 0xB15BC7E7 ^0xFC7313A6
{
	Hash labelHash;

	if (!func_22(hParam0, 0))
		return "";

	labelHash = func_216(hParam0);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

BOOL func_295(int iParam0) // Position - 0x95DE Hash - 0xE48228D0 ^0xE48228D0
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

BOOL func_296(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) // Position - 0x962C Hash - 0xE6946885 ^0xF1EEB43E
{
	var unk;
	int num;

	if (uParam0.f_9 != joaat("SLOTID_SATCHEL") && uParam0.f_9 != -140655024 && uParam0.f_9 != -1162387149 && uParam0.f_9 != 1784584921 && uParam0.f_9 != -511891179)
	{
		unk.f_9 = joaat("SLOTID_NONE");
	
		if (!func_251(uParam0.f_5, &unk, true, false, -1))
			return false;
	
		if (!func_5(unk.f_4, 1093867179))
			return false;
	}

	num = func_83(uParam0.f_4);

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
			switch (func_157(uParam0.f_4))
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

	if (func_157(uParam0.f_4) == -829303394)
		return false;

	return true;
}

BOOL func_297(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x97E2 Hash - 0xAEB34219 ^0xE0C7A844
{
	BOOL flag;

	flag = false;

	if (iParam1 == 0 || func_299(false) || bParam2)
		flag = true;

	if (!bParam2)
		if (!func_22(hParam0, 0) || hParam0 == 1259508039 || hParam0 == joaat("kit_wardrobe"))
			return false;

	if (!flag && func_344(hParam0))
		return false;

	switch (iParam1)
	{
		case -2074770370:
			if (Global_1940252.f_39 == 1 || Global_1940252.f_39 == 2)
				return func_347(hParam0, iParam1);
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
			if (!func_299(false))
			{
				if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
					return true;
			
				if (func_297(hParam0, -1559802791, true) || func_297(hParam0, -1268291907, true) || func_297(hParam0, -96974025, true) || func_297(hParam0, -1666604090, true) || func_297(hParam0, 1561961676, true) || func_297(hParam0, -156634416, true) || func_297(hParam0, 1061777683, true) || func_297(hParam0, -2074770370, true) || func_297(hParam0, -693134279, true) || func_297(hParam0, -182626652, true) || func_297(hParam0, 1783698482, true) || func_345(hParam0))
					return true;
			}
			else
			{
				return true;
			}
			break;
	
		case -693134279:
			return func_90(hParam0, 8388608);
	
		case -182626652:
			if (func_348(hParam0, Global_1915656.f_20241.f_1))
			{
				func_349(func_163(false), hParam0, true);
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
			return func_5(hParam0, 474910316) && !func_299(false) && func_346(hParam0);
	}

	return false;
}

BOOL func_298(Hash hParam0) // Position - 0x9B6B Hash - 0xA5F6DAC7 ^0xB374C77C
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

	if (func_5(hParam0, 1989861793) && func_253(func_350(hParam0), func_247(true), joaat("SLOTID_SATCHEL"), false, false, false) > 0)
		return false;

	if (func_299(false))
	{
		if (Global_1940252.f_11587 == -182626652 && !func_348(hParam0, Global_1915656.f_20241.f_1))
			return false;
	
		if (Global_1940252.f_11587 == 0 && ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0) || func_351(hParam0))
			return false;
	
		switch (Global_1915656.f_20241)
		{
			case 2:
				if (!func_352(hParam0))
					return false;
				break;
		}
	}

	if (func_5(hParam0, -805003139))
		if (!UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
			return false;

	if (func_83(hParam0) == joaat("UPGRADE"))
		if (!func_5(hParam0, -1540973036) && !func_5(hParam0, 1192444843))
			return false;
		else if (hParam0 == 1872063208 || hParam0 == 1309979101)
			return false;

	return true;
}

BOOL func_299(BOOL bParam0) // Position - 0x9CFC Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

BOOL func_300() // Position - 0x9D2C Hash - 0x4228A1C2 ^0x5DCAFF22
{
	return Global_1940252.f_10;
}

void func_301(var uParam0) // Position - 0x9D3A Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1940252.f_11588 = uParam0;
	return;
}

void func_302(int iParam0) // Position - 0x9D4B Hash - 0x29A8F290 ^0x1CB9B41C
{
	Global_1940252.f_10 = iParam0;
	return;
}

BOOL func_303(int* piParam0) // Position - 0x9D5B Hash - 0xF95E1119 ^0x322602AD
{
	int num;

	if (piParam0->f_1 == -1)
		return false;

	num = func_353(piParam0);

	if (num == 1 || num == 5)
		return true;

	return false;
}

BOOL func_304(Any anParam0) // Position - 0x9D8D Hash - 0x36229A1B ^0x2A9934D3
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 || anParam0->f_1 == -889271554 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_305(Hash hParam0) // Position - 0x9DD3 Hash - 0x3FD9EF89 ^0x3FC8CAC6
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(hParam0);
}

BOOL func_306(int iParam0, int iParam1) // Position - 0x9DEB Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_307(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x9DFA Hash - 0xDFD4B035 ^0x7F7C43A6
{
	if (!func_305(hParam0))
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_COUNT_FROM_COST_TYPE(hParam0, hParam1) == 0)
		return false;

	if (bParam2)
		return !func_312(hParam0, hParam1);

	return true;
}

BOOL func_308(Hash hParam0, var uParam1) // Position - 0x9E32 Hash - 0x4D07B4AD ^0x4D07B4AD
{
	*uParam1 = func_354(hParam0, true);
	return *uParam1 != 0;
}

BOOL func_309(Hash hParam0, var uParam1) // Position - 0x9E49 Hash - 0xA213590B ^0xA213590B
{
	*uParam1 = func_355(hParam0, true, false);
	return *uParam1 != 0;
}

BOOL func_310() // Position - 0x9E61 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1915656.f_22477;
}

BOOL func_311(int iParam0) // Position - 0x9E70 Hash - 0x16518DC6 ^0xD6363784
{
	if (iParam0 == 34 && Global_1915656.f_22504.f_1)
		return true;

	if (func_299(true))
		if (Global_1915656.f_20241 == iParam0)
			return true;

	return false;
}

BOOL func_312(Hash hParam0, Hash hParam1) // Position - 0x9EAB Hash - 0x86D562BB ^0xB258F193
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

BOOL func_313(Hash hParam0, Hash hParam1) // Position - 0x9FF4 Hash - 0xB71B0B73 ^0x8737CB96
{
	int num;
	int num2;
	var unk;

	if (hParam1 == -570078785)
	{
		num = func_356(hParam0, -570078785, false, true);
		num == 0;
	
		if (!func_357(num))
		{
			if (Global_1915656.f_20644)
				func_359(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_358(num)));
		
			return 0;
		}
	}
	else if (hParam1 == -915411861)
	{
		num2 = func_356(hParam0, -915411861, false, true);
		num2 == 0;
	
		if (!func_360(num2))
		{
			if (Global_1915656.f_20644)
				func_359("SHOP_H_TOO_POOR");
		
			return 0;
		}
	}
	else if (hParam1 == 997808187)
	{
		return 1;
	}

	if (!func_361(hParam0, hParam1, &unk, true, false))
		return 0;

	return 1;
}

BOOL func_314(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0xA0AE Hash - 0x195DA727 ^0x43C01C6A
{
	if (!func_305(uParam0.f_17))
		return false;

	return true;
}

BOOL func_315(int* piParam0, Hash hParam1) // Position - 0xA0C7 Hash - 0x8DE7BD5B ^0x83B9042B
{
	Hash action;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
		if (!func_362(piParam0, hParam1))
			return false;

	action = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*piParam0);

	if (action != hParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0) >= 50)
	{
		if (!func_363(piParam0))
			return false;
	
		if (!func_362(piParam0, hParam1))
			return false;
	}

	return true;
}

BOOL func_316(int iParam0, Hash hParam1, Any* panParam2) // Position - 0xA12A Hash - 0xAEE55F03 ^0x36ABCD3F
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

BOOL func_317(int* piParam0, BOOL bParam1) // Position - 0xA141 Hash - 0x5B4FA9A9 ^0x92224A48
{
	piParam0->f_2 = piParam0->f_2 + 1;

	if (bParam1)
		return func_363(piParam0);

	return true;
}

int func_318() // Position - 0xA162 Hash - 0xEEC80C47 ^0xEEC80C47
{
	if (Global_1292143.f_459.f_1548 >= 40 || Global_1292143.f_459.f_1548 < 0)
		Global_1292143.f_459.f_1548 = 0;

	return Global_1292143.f_459.f_1548;
}

void func_319(int iParam0) // Position - 0xA1A1 Hash - 0x91140DCF ^0x91140DCF
{
	if (iParam0 >= 40 || iParam0 < 0)
		iParam0 = 0;

	Global_1292143.f_459.f_1548 = iParam0;
	return;
}

int func_320() // Position - 0xA1CA Hash - 0x3F0702A6 ^0x3F0702A6
{
	if (Global_1292143.f_459.f_1549 >= 10 || Global_1292143.f_459.f_1549 < 0)
		Global_1292143.f_459.f_1549 = 0;

	return Global_1292143.f_459.f_1549;
}

void func_321(int iParam0) // Position - 0xA209 Hash - 0x2263858C ^0x2263858C
{
	if (iParam0 >= 10 || iParam0 < 0)
		iParam0 = 0;

	Global_1292143.f_459.f_1549 = iParam0;
	return;
}

char* func_322(Hash hParam0, int iParam1) // Position - 0xA232 Hash - 0x42D82A11 ^0xEB5ED24F
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

struct<4> func_323() // Position - 0xA2C6 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_324() // Position - 0xA2D2 Hash - 0x7BDD8F67 ^0x9160E7D8
{
	if (func_171(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

BOOL func_325(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0xA2EF Hash - 0x7F891916 ^0x5CD7D9F0
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(hParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, hParam2);
}

BOOL func_326(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0xA322 Hash - 0xC845006B ^0xAA568F17
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_163(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

BOOL func_327(Hash hParam0) // Position - 0xA35C Hash - 0xD47FBCD ^0xAB7C7E88
{
	return func_5(hParam0, 1279601681);
}

void func_328(int iParam0, int iParam1) // Position - 0xA36F Hash - 0xC00BEAB5 ^0x728D99B1
{
	if (iParam1 == 0)
		return;

	if (SECURE_LOAD(&iParam0) >= 11)
		return;

	SECURE_STORE(&iParam0->f_1[SECURE_LOAD(&iParam0)], iParam1);
	SECURE_STORE(&iParam0, SECURE_LOAD(&iParam0) + 1);
	return;
}

void func_329(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18) // Position - 0xA39F Hash - 0xE040F56 ^0xE040F56
{
	int i;
	var unk;

	if (!func_304(anParam0))
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

BOOL func_330(Hash hParam0, Any* panParam1) // Position - 0xA45A Hash - 0xB914F903 ^0x1DD44828
{
	int num;

	num = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(hParam0, panParam1);

	if (hParam0 == joaat("use"))
		if (func_364(panParam1->f_8, hParam0, num, 2048) || func_364(panParam1->f_8, hParam0, num, 32768) || func_364(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (hParam0 == 1168099063)
		if (func_364(panParam1->f_8, hParam0, num, 4) || func_364(panParam1->f_8, hParam0, num, 256) || func_364(panParam1->f_8, hParam0, num, 65536) || func_364(panParam1->f_8, hParam0, num, 131072))
			return false;
	else if (hParam0 == joaat("spend"))
		if (func_364(panParam1->f_8, hParam0, num, 1) || func_364(panParam1->f_8, hParam0, num, 8) || func_364(panParam1->f_8, hParam0, num, 65536) || func_364(panParam1->f_8, hParam0, num, 32))
			return false;
	else if (hParam0 == joaat("Sell"))
		if (func_364(panParam1->f_8, hParam0, num, 1) || func_364(panParam1->f_8, hParam0, num, 16) || func_364(panParam1->f_8, hParam0, num, 2) || func_364(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (func_364(panParam1->f_8, hParam0, num, 8) || func_364(panParam1->f_8, hParam0, num, 4096) || func_364(panParam1->f_8, hParam0, num, 256) || func_364(panParam1->f_8, hParam0, num, 65536))
		return false;

	return true;
}

BOOL func_331(int iParam0, Hash hParam1, Any* panParam2) // Position - 0xA630 Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

int func_332(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0xA647 Hash - 0x85216370 ^0xE7D00C30
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_365(iParam1, 1, 0, 0);
			return iParam1;
		}
	
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}

	func_365(iParam1, 2, 0, 0);
	return -1;
}

int func_333(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0xA690 Hash - 0xE2AB25BA ^0xE2AB25BA
{
	if (bParam0)
	{
		func_365(iParam1, 1, 0, 0);
		return iParam1;
	}

	return -1;
}

int func_334(int iParam0) // Position - 0xA6AC Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_335(int iParam0) // Position - 0xA6D1 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_336(int iParam0) // Position - 0xA6E4 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_337(int iParam0) // Position - 0xA6F7 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_338(int iParam0) // Position - 0xA70A Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_339(int iParam0) // Position - 0xA71C Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_340(int iParam0, int iParam1) // Position - 0xA72E Hash - 0x893AC59E ^0x893AC59E
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

void func_341(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xA7C8 Hash - 0xA65AB937 ^0xA65AB937
{
	func_367(uParam0, iParam6);
	func_368(uParam0, iParam5);
	func_369(uParam0, iParam4);
	func_370(uParam0, iParam3);
	func_371(uParam0, iParam2);
	func_372(uParam0, iParam1);
	return;
}

BOOL func_342() // Position - 0xA800 Hash - 0x977C1DDD ^0x1581CA55
{
	return Global_1913444.f_127 == 0;
}

int func_343() // Position - 0xA810 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1953292.f_1;
}

BOOL func_344(Hash hParam0) // Position - 0xA81E Hash - 0x94D015F5 ^0xC1449CA4
{
	int i;

	for (i = 0; i < Global_1940252.f_41.f_1; i = i + 1)
	{
		if (func_373(hParam0, Global_1940252.f_41.f_2[i /*2*/]))
			return true;
	}

	return false;
}

BOOL func_345(Hash hParam0) // Position - 0xA859 Hash - 0x41E81FD3 ^0x6129C7A4
{
	if (func_5(hParam0, -839724752))
		return func_5(hParam0, 1937586541);

	return false;
}

BOOL func_346(Hash hParam0) // Position - 0xA87E Hash - 0xE3FE29A5 ^0x631A1635
{
	if (func_374(hParam0, joaat("ANTIQUE_BOTTLES")) || func_374(hParam0, joaat("BIRD_EGGS")) || func_374(hParam0, joaat("Arrowheads")) || func_374(hParam0, joaat("FAMILY_HEIRLOOMS")) || func_374(hParam0, joaat("WILD_FLOWERS")) || func_374(hParam0, joaat("coins")) || func_374(hParam0, joaat("LOST_JEWELRY_RINGS")) || func_374(hParam0, joaat("LOST_JEWELRY_BRACELETS")) || func_374(hParam0, joaat("LOST_JEWELRY_EARRINGS")) || func_374(hParam0, joaat("LOST_JEWELRY_NECKLACES")) || func_374(hParam0, joaat("TAROT_CARDS_CUPS")) || func_374(hParam0, joaat("TAROT_CARDS_PENTACLES")) || func_374(hParam0, joaat("TAROT_CARDS_SWORDS")) || func_374(hParam0, joaat("TAROT_CARDS_WANDS")) || func_374(hParam0, 773314749) || func_374(hParam0, -246025274) || func_374(hParam0, -41527693))
		return true;

	return false;
}

BOOL func_347(Hash hParam0, int iParam1) // Position - 0xA9A8 Hash - 0xE1C16725 ^0x529AED8
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

BOOL func_348(Hash hParam0, int iParam1) // Position - 0xAAB4 Hash - 0x503679EB ^0x503679EB
{
	if (iParam1 == 119)
		return func_375(hParam0);

	return func_376(hParam0, iParam1);
}

void func_349(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0xAAD7 Hash - 0xBD272687 ^0xCE8D193D
{
	if (func_22(hParam1, 0))
		if (bParam2)
			INVENTORY::_INVENTORY_ENABLE_ITEM(iParam0, hParam1);
		else
			INVENTORY::_INVENTORY_DISABLE_ITEM(iParam0, hParam1, 0);

	return;
}

Hash func_350(Hash hParam0) // Position - 0xAB02 Hash - 0x3DF0E667 ^0x806933A2
{
	Hash award;
	Hash outData;
	int i;
	int awardItemCount;

	if (func_5(hParam0, 1397200408))
		return 0;

	if (!func_5(hParam0, 1989861793))
		return 0;

	award = func_137(hParam0, false);

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

BOOL func_351(Hash hParam0) // Position - 0xAB86 Hash - 0x672E565C ^0xD531C7FC
{
	if (func_5(hParam0, 75135761))
		return true;

	return false;
}

BOOL func_352(Hash hParam0) // Position - 0xABA1 Hash - 0x38920CAC ^0xE621BFA9
{
	Hash hash;

	hash = hParam0;

	if (!func_138(hash))
		return false;

	if (hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("coins"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("WILD_FLOWERS"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("FAMILY_HEIRLOOMS"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("Arrowheads"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("ANTIQUE_BOTTLES"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("BIRD_EGGS"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("LOST_JEWELRY_RINGS"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("LOST_JEWELRY_BRACELETS"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("LOST_JEWELRY_NECKLACES"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("LOST_JEWELRY_EARRINGS"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("TAROT_CARDS_CUPS"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("TAROT_CARDS_PENTACLES"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("TAROT_CARDS_SWORDS"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("TAROT_CARDS_WANDS"), 0))
		return true;

	return false;
}

int func_353(int* piParam0) // Position - 0xACC6 Hash - 0xAC4ACAD7 ^0x53A8C861
{
	return func_377(piParam0->f_1);
}

Hash func_354(Hash hParam0, BOOL bParam1) // Position - 0xACD6 Hash - 0x73CC7FFA ^0x73CC7FFA
{
	int i;
	int num;
	var unk;
	Hash hash;
	int j;

	unk = 15;

	for (i = 0; i < 3; i = i + 1)
	{
		hash = func_378(i, true, false);
	
		if (!func_379(hParam0, hash, &unk, &num, false, true))
		{
		}
		else
		{
			for (j = 0; j < num; j = j + 1)
			{
				if (func_380(unk[j /*2*/]))
				{
					if (!bParam1 || func_86(unk[j /*2*/], false, true, true) > 0)
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

Hash func_355(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xAD69 Hash - 0x2596799 ^0x2596799
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
		hash3 = func_378(i, false, true);
	
		if (!func_379(hParam0, hash3, &unk3, &num, false, true))
		{
		}
		else
		{
			flag3 = false;
			hash2 = 0;
		
			for (j = 0; j < num; j = j + 1)
			{
				if (func_381(unk3[j /*2*/]))
				{
					if (!bParam1 || func_86(unk3[j /*2*/], false, true, true) > 0)
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

int func_356(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0xAEC8 Hash - 0x45FFEF5A ^0x45FFEF5A
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_379(hParam0, hParam1, &unk, &num, bParam2, bParam3))
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

BOOL func_357(int iParam0) // Position - 0xAF5C Hash - 0x9186FF7C ^0xD4141850
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(0, iParam0);
}

int func_358(int iParam0) // Position - 0xAF7F Hash - 0x15FBACEE ^0x15FBACEE
{
	return iParam0 / 100;
}

void func_359(const char* sParam0) // Position - 0xAF8C Hash - 0x6D26E8EF ^0x36AA660D
{
	Global_1915656.f_22470 = func_382(sParam0, 10000, 0, 0, 0, true);
	return;
}

BOOL func_360(int iParam0) // Position - 0xAFA8 Hash - 0x65331643 ^0x65331643
{
	if (iParam0 < 0)
		return false;

	if (func_3() == 0)
		return func_383(iParam0);

	return iParam0 <= func_384();
}

BOOL func_361(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0xAFD5 Hash - 0xE8CB342E ^0xE8CB342E
{
	var unk;
	int num;
	int i;
	int num2;
	int num3;
	int num4;

	unk = 15;

	if (!func_379(hParam0, hParam1, &unk, &num, false, true))
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
			if (!bParam4 && !func_360(unk[i /*2*/].f_1))
				return false;
		}
		else if (unk[i /*2*/] == joaat("currency_gold_bar"))
		{
			if (!bParam4 && !func_357(unk[i /*2*/].f_1))
				return false;
		}
		else
		{
			num2 = func_385(num3, unk[i /*2*/]);
		
			if (num2 != 0)
				num4 = func_386(unk[i /*2*/], num2);
			else
				num4 = func_86(unk[i /*2*/], false, bParam3, true);
		
			if (num4 < unk[i /*2*/].f_1)
			{
				*uParam2 = { unk[i /*2*/] };
				return false;
			}
		}
	}

	return true;
}

BOOL func_362(int* piParam0, Hash hParam1) // Position - 0xB0DC Hash - 0x8927A1A4 ^0x3C5C8B8F
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(piParam0, joaat("basket"), hParam1))
		return false;

	return true;
}

BOOL func_363(int* piParam0) // Position - 0xB0FA Hash - 0x7EABA512 ^0xD3B85449
{
	Hash action;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
	{
		func_365(*piParam0, 0, 0, 0);
		return true;
	}

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*piParam0);
		func_365(*piParam0, 4, 0, 0);
		return true;
	}

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*piParam0))
	{
		func_365(*piParam0, 2, 0, 0);
		return false;
	}

	func_365(*piParam0, 1, 0, 0);
	action = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*piParam0);

	if (action == 2113164098 || action == 541670136)
		piParam0->f_3 = 1;

	piParam0->f_1 = *piParam0;
	*piParam0 = -1;
	piParam0->f_2 = 0;
	return true;
}

BOOL func_364(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0xB197 Hash - 0xF94ED236 ^0xF94ED236
{
	if (func_236(iParam2, iParam3))
		return true;

	return false;
}

void func_365(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xB1AF Hash - 0x3169A239 ^0x47E831EC
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

	func_387(iParam0, iParam1, iParam2, iParam3);
	return;
}

var func_366(BOOL bParam0, var uParam1, var uParam2) // Position - 0xB24D Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_367(var uParam0, int iParam1) // Position - 0xB264 Hash - 0xD05180BA ^0x39589262
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

void func_368(var uParam0, int iParam1) // Position - 0xB2EA Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_369(var uParam0, int iParam1) // Position - 0xB326 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_335(*uParam0);
	num2 = func_334(*uParam0);

	if (iParam1 < 1 || iParam1 > func_340(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_370(var uParam0, int iParam1) // Position - 0xB379 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_371(var uParam0, int iParam1) // Position - 0xB3B4 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_372(var uParam0, int iParam1) // Position - 0xB3ED Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_373(Hash hParam0, int iParam1) // Position - 0xB425 Hash - 0x930C4241 ^0x2C8F95BA
{
	return iParam1 == func_4(hParam0, 1224357681);
}

BOOL func_374(Hash hParam0, Hash hParam1) // Position - 0xB43B Hash - 0x33966A5 ^0x8C6CC565
{
	Hash categoryItemSetBuyAward;
	int awardAcquireCostCountFromCostType;
	int i;
	var unk;

	categoryItemSetBuyAward = COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(hParam1, 0);

	if (!func_138(categoryItemSetBuyAward))
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

BOOL func_375(Hash hParam0) // Position - 0xB4B7 Hash - 0xA839C3B7 ^0xFE515ADA
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

BOOL func_376(Hash hParam0, int iParam1) // Position - 0xB508 Hash - 0x58B8EE01 ^0x58B8EE01
{
	var unk;
	int num;
	Hash hash;

	if (!func_22(hParam0, 0))
		return 0;

	if (iParam1 == -1)
		return 0;

	num = func_388(iParam1);

	if (num == -1)
		return 0;

	if (!func_389(6, &unk))
		return 0;

	unk.f_2 = -815325344;
	unk.f_3 = func_390(num);

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

int func_377(int iParam0) // Position - 0xB592 Hash - 0xA7E21081 ^0xBD28E742
{
	int num;
	int status;

	num = func_391(iParam0);

	if (num == 0 || num == 1 || num == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &status))
		{
			if (status == 4 || status == 2 || num == 0 && status != 0)
			{
				func_365(iParam0, status, 0, 0);
				num = status;
			}
		}
		else if (num == 1 || num == 5)
		{
			func_365(iParam0, 4, 0, 0);
		}
	}

	return num;
}

Hash func_378(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xB61C Hash - 0xC67FD48A ^0x72A5971A
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
BOOL func_379(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0xB6B8 Hash - 0x8AAE9761 ^0xF5D9C5DD
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_305(hParam0))
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
		func_392(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

BOOL func_380(Hash hParam0) // Position - 0xB747 Hash - 0x1B551CF7 ^0x9235FF01
{
	return func_157(hParam0) == 1946043663;
}

BOOL func_381(Hash hParam0) // Position - 0xB75B Hash - 0x1B551CF7 ^0xC792EAB9
{
	return func_157(hParam0) == -126813555;
}

int func_382(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0xB76F Hash - 0x8EBD6187 ^0x42F0F0AC
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

BOOL func_383(int iParam0) // Position - 0xB7AA Hash - 0x6C22F57C ^0x1F3736DE
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_384() // Position - 0xB7CD Hash - 0xD56F3AB7 ^0x4ED7D083
{
	if (func_3() == 0)
		return MONEY::_NETWORK_GET_CASH_BALANCE();

	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_385(int iParam0, Hash hParam1) // Position - 0xB7E8 Hash - 0x3911B2FD ^0x13C4D79B
{
	if (iParam0 == 15 && func_5(hParam1, -2051813666))
		return 1;

	return 0;
}

int func_386(Hash hParam0, int iParam1) // Position - 0xB80D Hash - 0x3B4883DD ^0xBE4A62CA
{
	var unk;
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_22(hParam0, 0))
		return 0;

	unk = { func_247(false) };
	unk.f_4 = func_393(iParam1);
	guid = { func_183(hParam0, unk, unk.f_4, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_163(false), &guid, false);
	return inventoryItemCountWithGuid;
}

void func_387(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xB868 Hash - 0xBC161045 ^0xD3B33F74
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

	func_394(&Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/]);
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/] = iParam0;
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_1 = iParam1;

	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_2 = iParam2;
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_3 = iParam3;
	}

	return;
}

int func_388(int iParam0) // Position - 0xB944 Hash - 0xA78B2E8C ^0xA78B2E8C
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

BOOL func_389(int iParam0, var uParam1) // Position - 0xBE61 Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_395(iParam0))
		return false;

	*uParam1 = Global_1915606[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

int func_390(int iParam0) // Position - 0xBE8E Hash - 0x8D427F55 ^0x9966D58
{
	if (func_3() != -1)
		if (Global_1072759.f_12)
			if (iParam0 == 3)
				return joaat("ST_GENERAL_INTRO");

	return func_396(iParam0);
}

int func_391(int iParam0) // Position - 0xBEBB Hash - 0xD52E0195 ^0x6C5F51BC
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

void func_392(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0xBF07 Hash - 0x7EFAC478 ^0x4E4217E0
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
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_157(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

int func_393(int iParam0) // Position - 0xC0DD Hash - 0xF00685F3 ^0x39EB3A7D
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

void func_394(int iParam0) // Position - 0xC10E Hash - 0x84E910A9 ^0x5650392D
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	func_397(&(iParam0->f_4));
	return;
}

BOOL func_395(int iParam0) // Position - 0xC131 Hash - 0x873748AD ^0x873748AD
{
	return iParam0 > -1 && iParam0 < 26;
}

int func_396(int iParam0) // Position - 0xC147 Hash - 0xB8EC44B7 ^0x57E60B83
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

void func_397(var uParam0) // Position - 0xC37A Hash - 0x58FD8C3D ^0x7E71AD66
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

