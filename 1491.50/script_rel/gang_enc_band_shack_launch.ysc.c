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
	Any anLocal_14 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x8F8941B7 ^0xF64E46D6
{
	var unk;
	var unk11;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	anLocal_14 = anScriptParam_0;

	if (func_1() != -1)
		func_2();

	if (!TASK::DOES_SCENARIO_POINT_EXIST(anScriptParam_0.f_1))
		func_2();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_2();

	while (Global_1879534)
	{
		BUILTIN::WAIT(0);
	}

	unk = func_3(5);
	unk.f_6 = { TASK::_GET_SCENARIO_POINT_COORDS(anScriptParam_0.f_1, true) };
	unk11 = { unk };
	TEXT_LABEL_ASSIGN_STRING(&(unk11.f_10), "gang_enc_bandito_shack", 32);
	unk11.f_14 = 2048;
	unk11.f_15 = 1;
	func_4(unk11, 0);
	func_2();
	return;
}

BOOL func_1() // Position - 0x8D Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

void func_2() // Position - 0x9B Hash - 0x4A511B9B ^0x5E718E4D
{
	SCRIPTS::_0xE7282390542F570D(anLocal_14);

	if (func_1() != -1)
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

var func_3(int iParam0) // Position - 0xBD Hash - 0x897CF466 ^0x930A278A
{
	return Global_40.f_9571[iParam0 /*10*/].f_9;
}

void func_4(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16) // Position - 0xD1 Hash - 0x72903DA6 ^0xEF9AE14A
{
	int i;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0.f_10)))
		return;

	if (Global_1934603.f_161 >= 10)
		return;

	if (!func_5(iParam16, 2))
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(uParam0.f_10))) > 0 || func_6(&(uParam0.f_10)))
			return;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[i /*16*/].f_10)))
		{
			Global_1934603[i /*16*/] = { uParam0 };
			Global_1934603.f_161 = Global_1934603.f_161 + 1;
			func_7(iParam16);
			return;
		}
	}

	return;
}

BOOL func_5(int iParam0, int iParam1) // Position - 0x16D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_6(const char* sParam0) // Position - 0x17C Hash - 0x2124511C ^0xA40AAA4F
{
	int i;

	i = 0;

	for (i = 0; i < Global_1934603.f_161; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_1934603[i /*16*/].f_10), sParam0))
			return true;
	}

	return false;
}

void func_7(int iParam0) // Position - 0x1B6 Hash - 0x22E7EDA ^0x22E7EDA
{
	if (func_5(iParam0, 1))
		func_8(1);

	return;
}

void func_8(int iParam0) // Position - 0x1CD Hash - 0xC586259C ^0x2B2C6A17
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		if (iParam0 == 1)
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");

	return;
}

