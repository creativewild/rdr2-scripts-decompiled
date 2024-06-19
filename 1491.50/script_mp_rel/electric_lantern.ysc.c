#region Local Var
	Object obLocal_0 = 0;
	BOOL bLocal_1 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xCFC830EB ^0x81E461DB
{
	var unk;
	var unk4;
	var unk7;
	float num;
	float num2;
	float num3;
	int value;
	int value2;
	int value3;
	int value4;
	int value5;
	int value6;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	while (!func_2())
	{
		if (func_3())
		{
			unk = { func_4(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_33, 0f, 5f, 0f) - ENTITY::GET_ENTITY_COORDS(Global_33, true, false)) };
			unk4 = { func_5() };
			unk4.f_2 = Global_34.f_2;
			unk7 = { func_4(unk4 - Global_34) };
			num = MISC::ACOS(func_6(unk, unk7));
			num2 = 180f - num;
			num3 = num2 / 180f;
			func_7(num3, 0f, 1f);
			value = 255;
			value2 = 195;
			value3 = 77;
			value4 = 255;
			value5 = 30;
			value6 = 0;
			GRAPHICS::_SET_LIGHTS_COLOR_FOR_ENTITY(obLocal_0, BUILTIN::FLOOR(func_8(BUILTIN::TO_FLOAT(value), BUILTIN::TO_FLOAT(value4), num3)), BUILTIN::FLOOR(func_8(BUILTIN::TO_FLOAT(value2), BUILTIN::TO_FLOAT(value5), num3)), BUILTIN::FLOOR(func_8(BUILTIN::TO_FLOAT(value3), BUILTIN::TO_FLOAT(value6), num3)));
		}
	
		BUILTIN::WAIT(0);
	}

	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x106 Hash - 0xAFA866B8 ^0x1648D0D5
{
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_0);
	return;
}

BOOL func_2() // Position - 0x114 Hash - 0x2C8CF301 ^0xF5A6331C
{
	if (ENTITY::IS_ENTITY_DEAD(Global_33))
		return true;

	if (bLocal_1 && !ENTITY::DOES_ENTITY_EXIST(obLocal_0))
		return true;

	if (Global_1940199.f_38 != joaat("weapon_melee_lantern_electric"))
		return true;

	return false;
}

BOOL func_3() // Position - 0x152 Hash - 0x5690F96E ^0xADAF80CC
{
	int weaponHash;

	if (bLocal_1)
		return true;

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_0))
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &weaponHash, true, 0, false))
			if (weaponHash == joaat("weapon_melee_lantern_electric"))
				obLocal_0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_33, 0));

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_0))
	{
		bLocal_1 = true;
		return true;
	}

	return false;
}

Vector3 func_4(float fParam0, var uParam1, var uParam2) // Position - 0x1A5 Hash - 0xFB6A39D2 ^0x80C9C759
{
	float num;
	float num2;

	num = BUILTIN::VMAG(fParam0);

	if (num != 0f)
	{
		num2 = 1f / num;
		fParam0 = { fParam0 * { num2, num2, num2 } };
	}
	else
	{
		fParam0 = 0f;
		fParam0.f_1 = 0f;
		fParam0.f_2 = 0f;
	}

	return fParam0;
}

Vector3 func_5() // Position - 0x1E4 Hash - 0x21158019 ^0x21158019
{
	return -1502.098f, 2458.125f, 418.487f;
}

float func_6(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x1FB Hash - 0x596BEA29 ^0x5FBCDBE5
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

float func_7(float fParam0, float fParam1, float fParam2) // Position - 0x21C Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

float func_8(float fParam0, float fParam1, float fParam2) // Position - 0x243 Hash - 0xC55BBAAC ^0xC55BBAAC
{
	return ((1f - fParam2) * fParam0) + (fParam2 * fParam1);
}

