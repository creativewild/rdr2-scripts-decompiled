#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 2514129;
	var uLocal_3 = 0;
	var uLocal_4 = 3;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 1056964608;
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
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x624BA493 ^0xF0780B4
{
	uLocal_0.f_3 = "mech_inventory@binoculars";

	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		uLocal_0.f_8 = PED::IS_PED_ON_MOUNT(Global_35);

	func_1();

	if (func_2(472))
		func_3(472);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_4(&uLocal_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	while (!ENTITY::IS_ENTITY_DEAD(Global_35) && func_5(&uLocal_0))
	{
		if (func_6() == 4 || func_6() == 5)
			func_7(&uLocal_0);
	
		if (func_8(Global_35, true, 0, true) != joaat("weapon_kit_binoculars"))
		{
			func_9(&(uLocal_0.f_13), &(uLocal_0.f_14), &(uLocal_0.f_15), &(uLocal_0.f_16));
		
			if (uLocal_0.f_15 != 0 || uLocal_0.f_16 != 0)
				func_10(&(uLocal_0.f_18));
		}
	
		if (func_6() > 0 && func_8(Global_35, true, 0, true) != joaat("weapon_kit_binoculars"))
			func_11(&uLocal_0, 8);
	
		if (func_12(uLocal_0.f_4[0]) && func_13(uLocal_0.f_4[0], true))
			func_11(&uLocal_0, 6);
	
		func_14(&uLocal_0);
	
		switch (func_6())
		{
			case 0:
				if (func_15(&uLocal_0))
					func_16(&uLocal_0);
			
				func_11(&uLocal_0, 1);
				break;
		
			case 1:
				if (func_15(&uLocal_0))
					func_16(&uLocal_0);
			
				func_11(&uLocal_0, 2);
				break;
		
			case 2:
				if (func_15(&uLocal_0))
					func_16(&uLocal_0);
			
				if (func_8(Global_35, true, 0, false) != joaat("weapon_kit_binoculars"))
				{
				}
				else
				{
					func_17(true);
					func_18(473, false);
					func_19(&uLocal_0);
					uLocal_0.f_4[0] = func_20("BINO_PUT_AWAY", joaat("INPUT_CAMERA_PUT_AWAY"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
					func_11(&uLocal_0, 4);
				}
				break;
		
			case 4:
				PAD::_SET_CONTROL_CONTEXT(5, joaat("BinocularsOnFoot"));
			
				if (func_15(&uLocal_0))
					func_16(&uLocal_0);
			
				if (func_21())
				{
					func_22("enter", "Binoculars_Sounds");
					func_11(&uLocal_0, 5);
				}
				break;
		
			case 5:
				PAD::_SET_CONTROL_CONTEXT(5, joaat("BinocularsInUse"));
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			
				if (CAM::_0xDC62CD70658E7A02())
					func_22("zoom_in", "Binoculars_Sounds");
			
				if (CAM::_0x796085220ADCC847())
					func_22("zoom_out", "Binoculars_Sounds");
			
				if (func_15(&uLocal_0))
				{
					func_16(&uLocal_0);
					func_17(true);
					func_23(&uLocal_0.f_4[2], true, true);
					uLocal_0.f_4[2] = func_24("IB_ZOOM" /*Zoom*/, joaat("INPUT_SNIPER_ZOOM"), 16, 570, 4000, 10, 1073741824, 0, 1065353216, false, 3, joaat("SHORT_TIMED_EVENT"), false);
					func_25(uLocal_0.f_4[2], 11, true, true);
					func_25(uLocal_0.f_4[2], 17, true, true);
					func_26(uLocal_0.f_4[2], joaat("INPUT_SNIPER_ZOOM"));
				}
			
				if (func_27())
				{
					func_17(true);
					func_23(&uLocal_0.f_4[2], true, true);
					func_22("exit", "Binoculars_Sounds");
					func_11(&uLocal_0, 4);
				}
				break;
		
			case 6:
				if (func_15(&uLocal_0))
				{
					func_19(&uLocal_0);
					func_16(&uLocal_0);
				}
			
				func_11(&uLocal_0, 7);
				break;
		
			case 7:
				if (func_15(&uLocal_0))
					func_16(&uLocal_0);
			
				func_11(&uLocal_0, 8);
			
				if (func_28(Global_35, 0) == joaat("weapon_kit_binoculars"))
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				break;
		
			case 8:
				if (func_15(&uLocal_0))
				{
					func_17(true);
					func_16(&uLocal_0);
				}
			
				func_4(&uLocal_0);
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_4(&uLocal_0);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x386 Hash - 0xFEC7C9F6 ^0xFEC7C9F6
{
	Global_1911668 = 0;
	return;
}

BOOL func_2(int iParam0) // Position - 0x393 Hash - 0x854AC499 ^0x54AC68DD
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);

	if (currentMessage != 0)
		return currentMessage == Global_1905944.f_22[iParam0 /*9*/].f_1;

	return false;
}

void func_3(int iParam0) // Position - 0x3BB Hash - 0xC32B5228 ^0xC32B5228
{
	if (!func_2(iParam0))
		return;

	func_17(true);
	return;
}

void func_4(Object* pobParam0) // Position - 0x3D5 Hash - 0x1F7B6378 ^0x99F1DFCA
{
	if (func_2(474))
		func_3(474);

	if (func_2(473))
		func_3(473);

	func_19(pobParam0);
	func_1();
	Global_1911669 = 0;

	if (ENTITY::DOES_ENTITY_EXIST(*pobParam0))
		OBJECT::DELETE_OBJECT(pobParam0);

	if (func_29(pobParam0, 64))
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);

	MAP::DISPLAY_RADAR(true);

	if (CAM::DOES_CAM_EXIST(pobParam0->f_1))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_CAM_ACTIVE(pobParam0->f_1, false);
		CAM::DESTROY_CAM(pobParam0->f_1, false);
	}

	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, &func_15, false);
	func_17(true);
	HUD::_TEXT_BLOCK_DELETE("BINO");
	return;
}

BOOL func_5(Object* pobParam0) // Position - 0x480 Hash - 0x6C6F0EB3 ^0xAA244A3A
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return false;

	if (func_30())
	{
		func_31(pobParam0, 8);
		func_31(pobParam0, 16);
		func_31(pobParam0, 64);
	}

	if (func_29(pobParam0, 8) || func_29(pobParam0, 16))
		return false;

	if (!func_32(joaat("weapon_kit_binoculars"), 1, false) && func_8(Global_35, true, 0, true) != joaat("weapon_kit_binoculars"))
		return false;

	if (func_33())
		return false;

	if (Global_1357517)
		return false;

	return true;
}

int func_6() // Position - 0x511 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1911669;
}

void func_7(Object* pobParam0) // Position - 0x51D Hash - 0x650795A0 ^0x650795A0
{
	if (func_34(1))
	{
		if (!func_29(pobParam0, 16))
		{
			if (func_6() == 5)
			{
				func_31(pobParam0, 8);
				func_31(pobParam0, 16);
			}
			else
			{
				func_11(pobParam0, 6);
			}
		}
	
		func_35(1);
	}

	if (func_34(2))
	{
		if (!func_29(pobParam0, 8))
			if (func_6() == 5)
				func_31(pobParam0, 8);
	
		func_35(2);
	}

	if (func_34(4))
	{
		if (func_12(pobParam0->f_4[0]))
			func_36(pobParam0->f_4[0], false, true);
	
		func_35(4);
	}
	else if (func_12(pobParam0->f_4[0]) && func_37(pobParam0->f_4[0], true))
	{
		func_36(pobParam0->f_4[0], true, true);
	}

	if (func_34(8))
	{
		if (!func_29(pobParam0, 32))
			func_31(pobParam0, 32);
	
		func_35(8);
	}

	if (func_34(16))
	{
		if (func_29(pobParam0, 32))
			func_38(pobParam0, 32);
	
		func_35(16);
	}

	return;
}

int func_8(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x625 Hash - 0xDD2F88C2 ^0x29E97850
{
	int weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

void func_9(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x667 Hash - 0xF24A8D1A ^0x164E269E
{
	*uParam0 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, joaat("INPUT_SCRIPT_LEFT_AXIS_X")) * 127f);
	*uParam1 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, joaat("INPUT_SCRIPT_LEFT_AXIS_Y")) * 127f);
	*uParam2 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, joaat("INPUT_SCRIPT_RIGHT_AXIS_X")) * 127f);
	*uParam3 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, joaat("INPUT_SCRIPT_RIGHT_AXIS_Y")) * 127f);
	return;
}

void func_10(var uParam0) // Position - 0x6CB Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_39(uParam0, 0f);
	return;
}

void func_11(Object* pobParam0, int iParam1) // Position - 0x6DA Hash - 0xC7821C7F ^0xC7821C7F
{
	Global_1911669 = iParam1;
	func_40(pobParam0);
	return;
}

BOOL func_12(int iParam0) // Position - 0x6EE Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

BOOL func_13(int iParam0, BOOL bParam1) // Position - 0x72D Hash - 0xAAB142C4 ^0x20EFEF89
{
	int num;

	if (bParam1 && !func_12(iParam0))
		return false;

	num = func_41(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1945188[num /*18*/].f_3);
}

void func_14(var uParam0) // Position - 0x760 Hash - 0x8B0A743C ^0x6F4E6EFF
{
	if (func_8(Global_35, true, 0, true) != joaat("weapon_kit_binoculars"))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPRINT"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_SPRINT"), false);
	}

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SELECT_WEAPON_MELEE"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);

	if (CAM::DOES_CAM_EXIST(uParam0->f_1) && CAM::IS_CAM_ACTIVE(uParam0->f_1))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOK_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOK_BEHIND"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SWITCH_SHOULDER"), false);
	}

	return;
}

BOOL func_15(var uParam0) // Position - 0x800 Hash - 0xD73B9827 ^0x66164436
{
	return uParam0->f_10;
}

void func_16(var uParam0) // Position - 0x80C Hash - 0xBA5A1D5A ^0x2104F386
{
	uParam0->f_10 = 0;
	return;
}

void func_17(BOOL bParam0) // Position - 0x819 Hash - 0x6C3953AD ^0xF72D6E5A
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
	return;
}

void func_18(int iParam0, BOOL bParam1) // Position - 0x829 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_42(iParam0, &num, &num2);

	if (!func_43(iParam0, num, num2, bParam1))
		return;

	func_44(num, num2);
	return;
}

void func_19(Object* pobParam0) // Position - 0x856 Hash - 0x796FDD6D ^0x5A5C7DE4
{
	int i;

	for (i = 0; i < pobParam0->f_4; i = i + 1)
	{
		if (func_12(pobParam0->f_4[i]))
			func_23(&pobParam0->f_4[i], true, true);
	}

	return;
}

int func_20(char* sParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, Hash hParam10, BOOL bParam11) // Position - 0x890 Hash - 0xBB16F284 ^0x81C5F899
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_45(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_46(num, hParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, false, false, 0, hParam10, bParam11);
		return num;
	}

	return 0;
}

BOOL func_21() // Position - 0x919 Hash - 0xCB1294EB ^0x93601F4
{
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (func_8(Global_35, true, 0, true) != joaat("weapon_kit_binoculars"))
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, &func_15, false);
	
		return true;
	}

	return false;
}

void func_22(char* sParam0, char* sParam1) // Position - 0x94C Hash - 0xEC3E3845 ^0x55B7F2F
{
	int soundId;

	soundId = AUDIO::GET_SOUND_ID();

	if (soundId != -1)
	{
		AUDIO::_PLAY_SOUND_FRONTEND_WITH_SOUND_ID(soundId, sParam0, sParam1, true);
		Global_1955838[Global_1955838.f_25] = soundId;
		Global_1955838.f_25 = (Global_1955838.f_25 + 1) % 24;
	}

	return;
}

void func_23(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x98A Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_12(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_41(*uParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_47(num);
	*uParam0 = 0;
	return;
}

int func_24(char* sParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, int iParam10, Hash hParam11, BOOL bParam12) // Position - 0x9DE Hash - 0x6B838E14 ^0xADF883E0
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_45(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_46(num, hParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, bParam9, false, 0, hParam11, bParam12);
		return num;
	}

	return 0;
}

void func_25(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xA64 Hash - 0x4C8DF022 ^0x193FDB49
{
	int num;

	if (bParam3 && !func_12(iParam0))
		return;

	num = func_41(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[num /*18*/].f_3, iParam1, bParam2);
	return;
}

void func_26(int iParam0, Hash hParam1) // Position - 0xAAF Hash - 0xDEF73F31 ^0x53A5E4BF
{
	int num;

	if (!func_12(iParam0))
		return;

	num = func_41(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ALLOWED_ACTION(Global_1945188[num /*18*/].f_3, hParam1);
	return;
}

BOOL func_27() // Position - 0xAF1 Hash - 0x55E09D0A ^0xC01AA0C4
{
	if (!CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, &func_15, false);
		return true;
	}

	return false;
}

int func_28(Ped pedParam0, int iParam1) // Position - 0xB13 Hash - 0xB13A3864 ^0x7FBAE642
{
	int weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, iParam1, false);
	return weaponHash;
}

BOOL func_29(Object* pobParam0, int iParam1) // Position - 0xB2A Hash - 0x718DD1EF ^0xAD502E2B
{
	return pobParam0->f_12 && iParam1 != false;
}

BOOL func_30() // Position - 0xB3B Hash - 0xD26FE6BD ^0xAB4AD451
{
	int i;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_AI); i = i + 1)
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_AI, i))
		{
			case joaat("EVENT_DAMAGE"):
			case joaat("event_entity_damaged"):
				if (func_48(i))
					return true;
				break;
		}
	}

	if (PED::IS_PED_IN_MELEE_COMBAT(Global_35))
		return true;

	return false;
}

void func_31(Object* pobParam0, int iParam1) // Position - 0xB91 Hash - 0x53A96DDB ^0xF91CD48B
{
	pobParam0->f_12 = pobParam0->f_12 || iParam1;
	return;
}

BOOL func_32(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0xBA4 Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_49(hParam0, 0))
		return false;

	num = func_50(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_51(hParam0, 1))
			return false;

	return func_52(hParam0, false, bParam2) >= iParam1;
}

BOOL func_33() // Position - 0xC0E Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1935689.f_1;
}

BOOL func_34(int iParam0) // Position - 0xC1C Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1911668 && iParam0 != false;
}

void func_35(int iParam0) // Position - 0xC2D Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1911668 = Global_1911668 - Global_1911668 && iParam0;
	return;
}

void func_36(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC45 Hash - 0x89AE2BEC ^0x89AE2BEC
{
	int num;

	if (bParam2 && !func_12(iParam0))
		return;

	num = func_41(iParam0);

	if (bParam1)
	{
		func_53(iParam0, 4);
		func_54(num, true);
		func_55(num, true);
	}
	else
	{
		func_56(iParam0, 4);
		func_55(num, false);
	}

	return;
}

BOOL func_37(int iParam0, BOOL bParam1) // Position - 0xC94 Hash - 0xD5575CBB ^0xD5575CBB
{
	if (bParam1 && !func_12(iParam0))
		return true;

	return func_45(iParam0, 4);
}

void func_38(Object* pobParam0, int iParam1) // Position - 0xCB8 Hash - 0xA4EAD31F ^0xC25F490
{
	pobParam0->f_12 = pobParam0->f_12 - pobParam0->f_12 && iParam1;
	return;
}

void func_39(var uParam0, float fParam1) // Position - 0xCD0 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_57() - fParam1;
	func_58(uParam0, 1);
	func_59(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

void func_40(Object* pobParam0) // Position - 0xCF6 Hash - 0x86FD8689 ^0x206CE292
{
	pobParam0->f_10 = 1;
	return;
}

int func_41(int iParam0) // Position - 0xD03 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_42(int iParam0, var uParam1, var uParam2) // Position - 0xD0D Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_43(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xD29 Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_60(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_61(iParam0))
		return false;

	if (func_62(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_63(iParam0, 1) || func_64(32768))
		if (!func_63(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_65())
		return false;

	return true;
}

void func_44(int iParam0, int iParam1) // Position - 0xDCB Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_45(int iParam0, int iParam1) // Position - 0xDEF Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

void func_46(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0xE10 Hash - 0x1B501888 ^0x6546232B
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
	func_54(iParam0, true);
	func_55(iParam0, true);
	func_56(iParam0, 128);
	return;
}

void func_47(int iParam0) // Position - 0x10B6 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_66(iParam0))
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

BOOL func_48(int iParam0) // Position - 0x1169 Hash - 0xD9CF253A ^0x3138BCD7
{
	struct<9> eventData;
	Ped pedIndexFromEntityIndex;
	Ped pedIndexFromEntityIndex2;
	Hash weapontypeGroup;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, iParam0, &eventData, 9);

	if (!ENTITY::DOES_ENTITY_EXIST(eventData))
		return false;

	if (ENTITY::IS_ENTITY_A_PED(eventData))
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData);
	
		if (!ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
			return false;
	
		if (!PED::IS_PED_A_PLAYER(pedIndexFromEntityIndex))
			return false;
	
		if (ENTITY::IS_ENTITY_A_PED(eventData.f_1))
		{
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData.f_1);
		
			if (!ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex2) || pedIndexFromEntityIndex2 == Global_35)
				return false;
		}
		else
		{
			return false;
		}
	
		if (eventData.f_4 <= 1f)
			return false;
	
		weapontypeGroup = WEAPON::GET_WEAPONTYPE_GROUP(eventData.f_2);
	
		if (weapontypeGroup != joaat("GROUP_MELEE") && weapontypeGroup != joaat("GROUP_UNARMED"))
			return false;
	}

	return false;
}

BOOL func_49(Hash hParam0, int iParam1) // Position - 0x1222 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_50(Hash hParam0) // Position - 0x123C Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_49(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_51(Hash hParam0, int iParam1) // Position - 0x1267 Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_49(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_67(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_68("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_69(&unk, i, num, num2))
			{
			}
			else if (!func_70(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_71(num);
				return true;
			}
		}
	
		func_71(num);
	}

	return false;
}

int func_52(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x130E Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_49(hParam0, 0))
		return 0;

	num = func_50(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_67(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_72(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_73(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

void func_53(int iParam0, int iParam1) // Position - 0x1390 Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 - Global_1945188[iParam0 /*18*/].f_1 && iParam1;
	return;
}

void func_54(int iParam0, BOOL bParam1) // Position - 0x13C3 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_45(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_55(int iParam0, BOOL bParam1) // Position - 0x141B Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_56(int iParam0, int iParam1) // Position - 0x1444 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

float func_57() // Position - 0x146C Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_58(var uParam0, int iParam1) // Position - 0x149E Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_59(var uParam0, int iParam1) // Position - 0x14AF Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_60(int iParam0, int iParam1) // Position - 0x14C4 Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_74() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_61(int iParam0) // Position - 0x14F7 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_74() != -1)
		if (func_63(iParam0, 4))
			return false;
	else if (func_63(iParam0, 2))
		return false;

	return true;
}

BOOL func_62(int iParam0) // Position - 0x1527 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_63(iParam0, 65536) && !func_63(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_63(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_63(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_63(int iParam0, int iParam1) // Position - 0x15D3 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_64(int iParam0) // Position - 0x15EC Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_65() // Position - 0x15FF Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

BOOL func_66(int iParam0) // Position - 0x160E Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_45(iParam0, 2);
}

Hash func_67(Hash hParam0, int iParam1) // Position - 0x161D Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_49(hParam0, 0))
		return 0;

	num = func_50(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_75(hParam0, 1399091007))
	{
		func_76(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_68(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x1697 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_73(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_69(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x16BE Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_70(Hash hParam0) // Position - 0x16F9 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_71(int iParam0) // Position - 0x1714 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_72(Hash hParam0, BOOL bParam1) // Position - 0x1735 Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_77(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_79(&unk, func_78(false));

	if (!func_80(&unk, &num, &num2, false))
		return 0;

	func_71(num);
	return num2;
}

int func_73(BOOL bParam0) // Position - 0x1793 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_74() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_74() // Position - 0x17D4 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_75(Hash hParam0, Hash hParam1) // Position - 0x17E2 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

void func_76(Hash hParam0, var uParam1, var uParam2) // Position - 0x1813 Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_77(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1A1F Hash - 0x84700F53 ^0xB9E7AA96
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

struct<4> func_78(BOOL bParam0) // Position - 0x1AF1 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_73(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_82(923904168, func_81(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_82(923904168, func_81(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_82(923904168, func_81(bParam0), -740156546, false);
}

void func_79(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1B86 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_80(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x1BA1 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_73(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

struct<4> func_81(BOOL bParam0) // Position - 0x1BC6 Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_82(joaat("character"), func_83(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> func_82(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x1BE2 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_49(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_73(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

struct<4> func_83() // Position - 0x1C13 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

