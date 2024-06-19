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
#endregion

void main() // Position - 0x0 Hash - 0x2D80A0 ^0xD7E00EC8
{
	int num;
	Hash weaponHash;
	Hash entryHash;

	fLocal_14 = 1f;
	fLocal_15 = 1f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_1();

	PED::SET_PED_RESET_FLAG(Global_33, 304, true);

	if (!ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		num = func_2(Global_33, 0);
	
		if (num != joaat("WEAPON_UNARMED") && num != joaat("weapon_melee_torch") && num != joaat("weapon_fishingrod"))
			if (Global_17385 == 0)
				WEAPON::GET_PED_WEAPON_GUID_AT_ATTACH_POINT(Global_33, 0, &Global_17386);
	
		weaponHash = func_2(Global_33, 1);
	
		if (WEAPON::IS_WEAPON_REVOLVER(weaponHash) || WEAPON::IS_WEAPON_PISTOL(weaponHash))
			if (Global_17385 == 0)
				WEAPON::GET_PED_WEAPON_GUID_AT_ATTACH_POINT(Global_33, 1, &Global_17390);
	
		WEAPON::_HIDE_PED_WEAPONS(Global_33, 2, false);
	}

	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("WEAPON_UNARMED"), false);
	Global_1940252.f_11642 = 0;
	Global_1940252.f_11643 = 0;
	entryHash = joaat("ingame");

	if (func_3(false))
	{
		entryHash = joaat("SHOP");
	}
	else if (Global_1940252.f_1 == 0)
	{
	}
	else
	{
		entryHash = Global_1940252.f_1;
	}

	while (!func_4())
	{
		PED::SET_PED_RESET_FLAG(Global_33, 304, true);
	
		switch (func_5())
		{
			case 0:
				if (func_6())
					func_7();
			
				if (UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(joaat("satchel"), entryHash) != 0)
				{
				}
				else
				{
					func_8(1);
				}
				break;
		
			case 1:
				if (func_6())
					func_7();
			
				if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("satchel")) || Global_1940252 == 2 || Global_13 || PED::IS_PED_DEAD_OR_DYING(Global_33, true) || !func_9(255) || func_10(512))
					func_8(2);
				else
					func_11();
			
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_TOGGLE_HOLSTER"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOK_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOK_UD"), false);
				break;
		
			case 2:
				if (func_6())
				{
					func_7();
					func_1();
				}
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1();
	return;
}

void func_1() // Position - 0x1F2 Hash - 0x47AA562B ^0xFE963BF6
{
	UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("satchel"));

	if (!func_10(512))
	{
		func_12(false, 0);
	}
	else
	{
		func_12(true, 0);
		func_13(512);
	}

	Global_1940252.f_2 = 0;
	Global_17413 = 0;
	Global_1940252.f_13 = 0;
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

Hash func_2(Ped pedParam0, int iParam1) // Position - 0x23A Hash - 0xB13A3864 ^0x7FBAE642
{
	var weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, iParam1, false);
	return weaponHash;
}

BOOL func_3(BOOL bParam0) // Position - 0x251 Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

BOOL func_4() // Position - 0x281 Hash - 0x3C22169D ^0x665B3AA6
{
	if (func_14(true, true))
		return true;

	if (Global_1940252.f_13)
		return true;

	return false;
}

int func_5() // Position - 0x2A4 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1940252.f_11642;
}

BOOL func_6() // Position - 0x2B3 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1940252.f_11643;
}

void func_7() // Position - 0x2C2 Hash - 0x6BEE258E ^0x6BEE258E
{
	Global_1940252.f_11643 = 0;
	return;
}

void func_8(int iParam0) // Position - 0x2D2 Hash - 0x543F43A8 ^0x543F43A8
{
	if (Global_1940252.f_11642 != iParam0)
	{
		Global_1940252.f_11642 = iParam0;
		func_15();
	}

	return;
}

BOOL func_9(int iParam0) // Position - 0x2F3 Hash - 0x4B08C8C4 ^0x4B08C8C4
{
	return !func_16(iParam0);
}

BOOL func_10(int iParam0) // Position - 0x302 Hash - 0xDDC0076D ^0xDDC0076D
{
	return Global_1940252.f_11561 && iParam0 != false;
}

void func_11() // Position - 0x316 Hash - 0x5808700A ^0x817B748D
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_NEXT_CAMERA"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ENTER"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PHONE"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_RADIAL_MENU_SLOT_NAV_NEXT"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_RADIAL_MENU_SLOT_NAV_PREV"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	return;
}

void func_12(BOOL bParam0, int iParam1) // Position - 0x397 Hash - 0xCC16269 ^0xB563FF97
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

void func_13(int iParam0) // Position - 0x3B9 Hash - 0xB89DF92F ^0xB89DF92F
{
	Global_1940252.f_11561 = Global_1940252.f_11561 - Global_1940252.f_11561 && iParam0;
	return;
}

BOOL func_14(BOOL bParam0, BOOL bParam1) // Position - 0x3DA Hash - 0x8CDC02F2 ^0xDB4E8541
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

void func_15() // Position - 0x4BA Hash - 0x92C2AC43 ^0x92C2AC43
{
	Global_1940252.f_11643 = 1;
	return;
}

BOOL func_16(int iParam0) // Position - 0x4CA Hash - 0xA3986FDD ^0xA3986FDD
{
	return func_17(1, iParam0);
}

BOOL func_17(int iParam0, int iParam1) // Position - 0x4D9 Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_18(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_19())
		return func_18(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_18(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_18(Any* panParam0, int iParam1, int iParam2) // Position - 0x54D Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

int func_19() // Position - 0x584 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

