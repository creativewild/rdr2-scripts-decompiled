#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xD45BC9DA ^0x71075A3
{
	int num;
	Hash weaponHash;
	Hash entryHash;

	fLocal_7 = 1f;
	fLocal_8 = 1f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_1();

	PED::SET_PED_RESET_FLAG(Global_35, 304, true);

	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!PED::IS_PED_IN_ANY_BOAT(Global_35))
		{
			num = func_2(Global_35, 0);
		
			if (num != joaat("WEAPON_UNARMED") && num != joaat("weapon_melee_torch") && num != joaat("weapon_fishingrod"))
				if (Global_36605 == 0)
					WEAPON::GET_PED_WEAPON_GUID_AT_ATTACH_POINT(Global_35, 0, &Global_36606);
		
			weaponHash = func_2(Global_35, 1);
		
			if (WEAPON::IS_WEAPON_REVOLVER(weaponHash) || WEAPON::IS_WEAPON_PISTOL(weaponHash))
			{
				if (Global_36605 != 0)
				{
				}
				else
				{
					WEAPON::GET_PED_WEAPON_GUID_AT_ATTACH_POINT(Global_35, 1, &Global_36610);
				}
			}
		
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
		}
		else
		{
			Global_36606 = { func_3() };
			Global_36610 = { func_3() };
		}
	}

	Global_1935689.f_9476 = 0;
	Global_1935689.f_9477 = 0;
	entryHash = joaat("ingame");

	if (func_4(false))
		entryHash = joaat("SHOP");

	while (true)
	{
		PED::SET_PED_RESET_FLAG(Global_35, 304, true);
	
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
			
				if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("satchel")) || Global_1935689 == 2 || Global_16 || PED::IS_PED_DEAD_OR_DYING(Global_35, true))
				{
					func_8(2);
				}
				else if (func_9() != -1)
				{
				}
				else
				{
					func_10();
				}
			
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

void func_1() // Position - 0x1DC Hash - 0xBF1C4253 ^0x7DBC706F
{
	UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("satchel"));
	func_11(false);
	Global_1935689.f_1 = 0;
	Global_36633 = 0;
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

Hash func_2(Ped pedParam0, int iParam1) // Position - 0x201 Hash - 0xB13A3864 ^0x7FBAE642
{
	var weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, iParam1, false);
	return weaponHash;
}

struct<4> func_3() // Position - 0x218 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

BOOL func_4(BOOL bParam0) // Position - 0x224 Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1914319.f_17370;

	return Global_1914319.f_17370 || Global_1914319.f_18996.f_1;
}

int func_5() // Position - 0x254 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1935689.f_9476;
}

BOOL func_6() // Position - 0x263 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1935689.f_9477;
}

void func_7() // Position - 0x272 Hash - 0x6BEE258E ^0x6BEE258E
{
	Global_1935689.f_9477 = 0;
	return;
}

void func_8(int iParam0) // Position - 0x282 Hash - 0x543F43A8 ^0x543F43A8
{
	if (Global_1935689.f_9476 != iParam0)
	{
		Global_1935689.f_9476 = iParam0;
		func_12();
	}

	return;
}

BOOL func_9() // Position - 0x2A3 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

void func_10() // Position - 0x2B1 Hash - 0xFF3646F9 ^0x12D4F4E1
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SELECT_WEAPON_MELEE"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, joaat("INPUT_HORSE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON_NEG"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON_POS"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_INTERACT_ANIMAL"), false);
	return;
}

void func_11(BOOL bParam0) // Position - 0x353 Hash - 0xDA8F6A70 ^0xDA8F6A70
{
	if (bParam0)
		Global_1935689 = 1;
	else
		Global_1935689 = 2;

	return;
}

void func_12() // Position - 0x36D Hash - 0x92C2AC43 ^0x92C2AC43
{
	Global_1935689.f_9477 = 1;
	return;
}

