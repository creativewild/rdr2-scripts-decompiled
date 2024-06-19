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
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	Any anLocal_16 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x802B681D ^0x82CFB9E2
{
	var unk;
	int num;
	BOOL flag;
	BOOL flag2;
	int num2;
	int num3;
	var unk22;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_14 = -1;
	anLocal_16 = anScriptParam_0;

	if (func_1() != -1)
		func_2(0, false);

	if (!TASK::DOES_SCENARIO_POINT_EXIST(anScriptParam_0.f_1))
		func_2(0, false);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_2(0, false);

	num = -1;
	num.f_1 = { TASK::_GET_SCENARIO_POINT_COORDS(anScriptParam_0.f_1, true) };
	num.f_4 = TASK::_GET_SCENARIO_POINT_HEADING(anScriptParam_0.f_1, true);

	while (func_3(&num))
	{
		BUILTIN::WAIT(0);
	}

	func_4();
	num2 = func_6(num.f_1, &flag, func_5() == 0);
	func_7();

	if (!func_8(num.f_1))
		if (func_9() && flag)
			func_2(0, false);

	TEXT_LABEL_ASSIGN_STRING(&unk, func_10(&num, &flag2), 64);

	if (func_11(num.f_1))
		func_2(num2, !flag && !flag2);

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		func_2(num2, !flag && !flag2);

	if (func_8(num.f_1))
	{
		if (!func_12(num))
			if (func_5() != 0)
				num = 0;
			else
				num = 3;
	
		TEXT_LABEL_ASSIGN_STRING(&unk, func_13(func_5()), 64);
	
		if (!func_14(num, 32768))
		{
			func_15(num);
			flag = true;
		}
	}
	else if (func_5() == 1)
	{
		if (func_16())
			func_2(num2, !flag2);
	
		if (func_17())
			func_2(num2, true);
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		func_2(num2, !flag && !flag2);

	func_18(num.f_1, num);
	num3 = num;
	num3.f_1 = anScriptParam_0.f_1;
	num3.f_6 = { num.f_1 };
	num3.f_6.f_3 = num.f_4;
	num3.f_4 = !flag;
	unk22 = { num3 };
	TEXT_LABEL_COPY(&(unk22.f_10), { unk }, 4);
	unk22.f_15 = 1;

	if (func_5() == 0)
		unk22.f_14 = 1200;
	else
		unk22.f_14 = 1024;

	func_19(unk22, 2);

	if (TASK::DOES_SCENARIO_GROUP_EXIST("PROPSET_GANG_CAMP_PLAYER_CRAFTING"))
		TASK::SET_SCENARIO_GROUP_ENABLED("PROPSET_GANG_CAMP_PLAYER_CRAFTING", false);

	func_2(0, false);
	return;
}

BOOL func_1() // Position - 0x213 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

void func_2(int iParam0, BOOL bParam1) // Position - 0x221 Hash - 0x248C4AAA ^0x4939BACC
{
	int num;

	SCRIPTS::_0xE7282390542F570D(anLocal_16);

	if (func_1() != -1)
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}

	num = func_5();

	if (num != 0)
	{
		Global_1393237.f_9 = Global_1393237.f_9 - 1;
	
		if (Global_1393237.f_9 < 0)
			Global_1393237.f_9 = 0;
	}
	else if (num == 0)
	{
		Global_1393237.f_10 = Global_1393237.f_10 - 1;
	
		if (Global_1393237.f_10 < 0)
			Global_1393237.f_10 = 0;
	}

	if (bParam1)
		func_15(iParam0);

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_3(var uParam0) // Position - 0x2A1 Hash - 0xDC4E2739 ^0xDC4E2739
{
	if (Global_1879534)
		return true;

	return false;
}

void func_4() // Position - 0x2B5 Hash - 0xA3D90C42 ^0xADB6F44
{
	if (CLOCK::GET_CLOCK_HOURS() >= 18 || CLOCK::GET_CLOCK_HOURS() <= 6)
		Global_1393237.f_6 = 3;
	else
		Global_1393237.f_6 = 2;

	return;
}

int func_5() // Position - 0x2E4 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return 0;
}

int func_6(Vector3 vParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x2ED Hash - 0x52E8DBA7 ^0xE839A2A0
{
	int num;
	int i;
	int num2;
	int num3;

	num = -1;

	if (bParam4)
	{
		num2 = 3;
		num3 = 5;
	}
	else
	{
		num2 = 0;
		num3 = 2;
	}

	for (i = num2; i <= num3; i = i + 1)
	{
		if (BUILTIN::VDIST(Global_1393237.f_11[i /*30*/].f_3, vParam0) < 10f)
		{
			*uParam3 = 0;
			return i;
		}
	
		if (num == -1 && !func_20(i) && func_21(i) || !bParam4 && func_22(Global_1393237.f_11[i /*30*/].f_3, Global_36) > 2000f)
		{
			*uParam3 = 1;
			num = i;
		}
	}

	if (!func_14(num, 32768))
		func_15(num);

	return num;
}

void func_7() // Position - 0x3AF Hash - 0x7D066623 ^0xE8A2B5CF
{
	int i;
	int num;

	if (func_1() != -1)
		return;

	num = -1;

	for (i = 0; i < Global_1393237.f_11; i = i + 1)
	{
		if (func_21(i))
		{
			if (!_IS_NULL_VECTOR(Global_1393237.f_11[i /*30*/].f_3) && !func_14(i, 1))
				func_24(Global_1393237.f_11[i /*30*/].f_3, 0);
		}
		else if (func_14(i, 8192))
		{
			if (func_25(i))
			{
				num = func_26(Global_1393237.f_11[i /*30*/].f_3, 0);
			
				if (num >= 0)
				{
					if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1911670[num]))
					{
						if (VOLUME::_0xF6CE6F9C3897804E(Global_1911670[num]) > 45f)
						{
							func_24(Global_1393237.f_11[i /*30*/].f_3, 0);
							func_27(Global_1393237.f_11[i /*30*/].f_3, 45f, "sCampfireAllDead", false, 0, 1, false, -1082130432);
							func_28(i, 4194304, false);
						}
					}
				}
			}
		}
	}

	return;
}

BOOL func_8(var uParam0, var uParam1, var uParam2) // Position - 0x4B4 Hash - 0xEF708085 ^0xEF708085
{
	if (func_29(uParam0))
		return false;

	if (func_30(uParam0))
		return true;

	return false;
}

BOOL func_9() // Position - 0x4DE Hash - 0xA4D31B6 ^0x6710107A
{
	int num;
	int i;
	int num2;

	num = func_5();

	if (num != 0)
	{
		Global_1393237.f_9 = Global_1393237.f_9 + 1;
	
		if (Global_1393237.f_9 > 1)
			return true;
	}

	if (num == 0)
	{
		Global_1393237.f_10 = Global_1393237.f_10 + 1;
	
		if (Global_1393237.f_10 > 1)
			return true;
	
		for (i = 3; i <= 5; i = i + 1)
		{
			if (func_20(i))
				num2 = num2 + 1;
		}
	
		if (num2 > 0)
			return true;
	}

	return false;
}

char* func_10(var uParam0, var uParam1) // Position - 0x55C Hash - 0x66688513 ^0x6A3C04EF
{
	int num;
	BOOL flag;

	num = func_5();
	*uParam0 = func_6(uParam0->f_1, &flag, num == 0);

	if (!func_12(*uParam0))
		return "";

	if (Global_1393237.f_199)
		return "";

	if (func_29(uParam0->f_1))
	{
		*uParam1 = 1;
		return "";
	}

	if (func_8(uParam0->f_1) || func_14(*uParam0, 524288))
		return func_13(num);

	if (flag)
	{
		if (func_31(true) > 1 && num != 0)
			return "";
	
		if (!func_32(uParam0->f_1, *uParam0))
			return "";
	
		if (func_33(uParam0->f_1))
			return "";
	
		if (func_34(*uParam0, num == 0))
			return "";
	
		if (func_35(uParam0->f_1, 1, 0, 0))
			return "";
	
		if (func_36(*uParam0))
			return "";
	
		if (func_37(uParam0->f_1, *uParam0))
			return "";
	
		if (!func_38(uParam0->f_1, *uParam0, num == 0))
			return "";
	}
	else if (func_21(*uParam0))
	{
		func_15(*uParam0);
		*uParam0 = -1;
		return "";
	}
	else if (func_20(*uParam0))
	{
		*uParam1 = 1;
		*uParam0 = -1;
		return "";
	}
	else
	{
		num = Global_1393237.f_11[*uParam0 /*30*/].f_2;
	}

	return func_13(num);
}

BOOL func_11(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x6DF Hash - 0xB39DD68D ^0x837576C4
{
	int num;

	if (_IS_NULL_VECTOR(Global_1393237.f_200))
		return false;

	if (func_30(vParam0))
		return false;

	if (iLocal_14 == -1)
		iLocal_14 = func_39(vParam0);

	num = func_40(iLocal_14);
	return BUILTIN::VDIST(Global_1393237.f_200, vParam0) < func_41(func_5(), num, false) + 20f;
}

BOOL func_12(int iParam0) // Position - 0x743 Hash - 0x82FB4626 ^0x9AA2D16B
{
	if (iParam0 < 0 || iParam0 >= Global_1393237.f_11)
		return false;

	return true;
}

char* func_13(int iParam0) // Position - 0x766 Hash - 0xAE4E93F2 ^0xAE4E93F2
{
	switch (iParam0)
	{
		case 0:
			return "campfire_gang";
	
		case 1:
			return "campfire_always";
	
		default:
		
	}

	return "";
}

BOOL func_14(int iParam0, int iParam1) // Position - 0x794 Hash - 0x4F089875 ^0x2D4019CD
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
		return false;

	return func_42(Global_1393237.f_11[iParam0 /*30*/].f_10, iParam1);
}

void func_15(int iParam0) // Position - 0x7C8 Hash - 0x7C292CDC ^0x28CDA9CE
{
	int i;

	if (iParam0 < 0)
		return;

	if (!_IS_NULL_VECTOR(Global_1393237.f_11[iParam0 /*30*/].f_3))
	{
		func_24(Global_1393237.f_11[iParam0 /*30*/].f_3, 0);
		PED::_0x9851DE7AEC10B4E1(Global_1393237.f_11[iParam0 /*30*/].f_3, 20f, 1, 0);
	}

	Global_1393237.f_11[iParam0 /*30*/] = -15;
	Global_1393237.f_11[iParam0 /*30*/].f_2 = -1;
	Global_1393237.f_11[iParam0 /*30*/].f_3 = { 0f, 0f, 0f };
	Global_1393237.f_11[iParam0 /*30*/].f_6 = { 0f, 0f, 0f };
	Global_1393237.f_11[iParam0 /*30*/].f_9 = 0f;

	if (func_14(iParam0, 8388608))
	{
		Global_1393237.f_11[iParam0 /*30*/].f_10 = 8388608;
	}
	else
	{
		Global_1393237.f_11[iParam0 /*30*/].f_10 = 0;
		Global_1393237.f_11[iParam0 /*30*/].f_17 != func_43();
		Global_1393237.f_11[iParam0 /*30*/].f_17 = func_43();
	}

	Global_1393237.f_11[iParam0 /*30*/].f_11 = -1;
	Global_1393237.f_11[iParam0 /*30*/].f_12 = 0;
	Global_1393237.f_11[iParam0 /*30*/].f_13 = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		Global_1393237.f_11[iParam0 /*30*/].f_14[i] = 0;
	}

	func_44(iParam0, 1);
	Global_1393237.f_11[iParam0 /*30*/].f_29 = 0;

	if (iParam0 > 2)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	
		if (MAP::DOES_BLIP_EXIST(Global_1393237.f_11[iParam0 /*30*/].f_18[0]))
			MAP::REMOVE_BLIP(&Global_1393237.f_11[iParam0 /*30*/].f_18[0]);
	
		if (MAP::DOES_BLIP_EXIST(Global_1393237.f_11[iParam0 /*30*/].f_18[1]))
			MAP::REMOVE_BLIP(&Global_1393237.f_11[iParam0 /*30*/].f_18[1]);
	
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	}

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1393237.f_11[iParam0 /*30*/].f_21))
		func_24(Global_1393237.f_11[iParam0 /*30*/].f_3, 1);

	return;
}

BOOL func_16() // Position - 0x99A Hash - 0x69DACD03 ^0xBDA4E305
{
	var weatherType1;
	var weatherType2;
	float percentWeather2;
	int num;

	MISC::GET_CURR_WEATHER_STATE(&weatherType1, &weatherType2, &percentWeather2);

	if (percentWeather2 < 0.75f)
		num = weatherType1;
	else
		num = weatherType2;

	switch (num)
	{
		case joaat("sandstorm"):
		case joaat("THUNDER"):
		case joaat("snow"):
		case joaat("sleet"):
		case joaat("BLIZZARD"):
		case joaat("whiteout"):
		case joaat("hurricane"):
		case joaat("rain"):
		case joaat("snowclearing"):
		case joaat("hail"):
		case joaat("Thunderstorm"):
		case joaat("groundblizzard"):
			return true;
	}

	return false;
}

BOOL func_17() // Position - 0xA1A Hash - 0x378FC94F ^0x378FC94F
{
	return Global_1894899 & true != 0 && func_45() != -1;
}

void func_18(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0xA35 Hash - 0x19C70672 ^0x4D4124C
{
	Global_1393237.f_11[iParam3 /*30*/].f_3 = { uParam0 };
	func_28(iParam3, 512, false);
	return;
}

void func_19(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16) // Position - 0xA59 Hash - 0x72903DA6 ^0xEF9AE14A
{
	int i;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0.f_10)))
		return;

	if (Global_1934603.f_161 >= 10)
		return;

	if (!func_46(iParam16, 2))
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(uParam0.f_10))) > 0 || func_47(&(uParam0.f_10)))
			return;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[i /*16*/].f_10)))
		{
			Global_1934603[i /*16*/] = { uParam0 };
			Global_1934603.f_161 = Global_1934603.f_161 + 1;
			func_48(iParam16);
			return;
		}
	}

	return;
}

BOOL func_20(int iParam0) // Position - 0xAF5 Hash - 0x27B9CA95 ^0xDEC403B1
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
		return false;

	return func_14(iParam0, 512);
}

BOOL func_21(int iParam0) // Position - 0xB20 Hash - 0x87F03911 ^0xC3E844F1
{
	if (Global_1393237.f_11[iParam0 /*30*/] == -15)
		if (!func_14(iParam0, 512))
			return true;
		else
			return false;

	return func_50(func_49(iParam0));
}

float func_22(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0xB5A Hash - 0x6A10E689 ^0x100E8618
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0xB78 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_24(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0xBA2 Hash - 0x303BFB8D ^0xBCF80455
{
	int i;
	Volume volLockRequestId;
	Vector3 vector;

	if (_IS_NULL_VECTOR(uParam0))
		return;

	for (i = 0; i < Global_1911670; i = i + 1)
	{
		volLockRequestId = Global_1911670[i];
	
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId))
		{
			vector = { VOLUME::_0xC4019CF9AE8E931A(volLockRequestId) };
		
			if (func_51(vector, uParam0, 2f, true))
			{
				if (iParam3 == 0 || VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vector, 2f, 0, iParam3, 16384))
				{
					VOLUME::_RELEASE_LOCK_VOLUME(volLockRequestId);
					Global_1911670[i] = 0;
				}
			}
		}
	}

	return;
}

BOOL func_25(int iParam0) // Position - 0xC26 Hash - 0xFEEC15CE ^0x760701AD
{
	if (func_14(iParam0, 4194304))
		return false;

	if (func_14(iParam0, 1))
		return false;

	if (_IS_NULL_VECTOR(Global_1393237.f_11[iParam0 /*30*/].f_3))
		return false;

	return true;
}

int func_26(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0xC67 Hash - 0x828BE29C ^0x3493FFD0
{
	int i;
	Volume volLockRequestId;
	Vector3 vector;

	if (_IS_NULL_VECTOR(uParam0))
		return -1;

	for (i = 0; i < Global_1911670; i = i + 1)
	{
		volLockRequestId = Global_1911670[i];
	
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId))
		{
			vector = { VOLUME::_0xC4019CF9AE8E931A(volLockRequestId) };
		
			if (func_51(vector, uParam0, 2f, true))
				if (iParam3 == 0 || VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vector, 2f, 0, iParam3, 16384))
					return i;
		}
	}

	return -1;
}

Volume func_27(Vector3 vParam0, var uParam1, var uParam2, float fParam3, char* sParam4, BOOL bParam5, Entity eParam6, int iParam7, BOOL bParam8, int iParam9) // Position - 0xCE3 Hash - 0xC1E3A062 ^0xD42263D3
{
	Volume volume;
	int num;
	var entityCoords;

	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return 0;

	if (fParam3 <= 0.1f)
		return 0;

	if (_IS_NULL_VECTOR(vParam0))
		return 0;

	num = 0;

	if (!bParam5)
		num = num | 2;

	num = num | 1;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam6))
	{
		if (func_52(vParam0))
			return 0;
	
		volume = VOLUME::_CREATE_VOLUME_LOCK(vParam0, fParam3, num, 0);
	}
	else
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(eParam6, false, false) };
		volume = VOLUME::_CREATE_VOLUME_LOCK_ATTACHED_TO_ENTITY(eParam6, fParam3, num, 0);
	}

	if (iParam7 != 0)
		VOLUME::_0xB440F4E35393FC39(volume, iParam7);

	if (iParam9 >= 0f)
		VOLUME::_0xD460135C98940274(volume, iParam9);

	func_53(volume, bParam8);
	return volume;
}

void func_28(int iParam0, int iParam1, BOOL bParam2) // Position - 0xD9D Hash - 0x125DC0A8 ^0x7CF66474
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
		return;

	if (bParam2)
	{
	}

	Global_1393237.f_11[iParam0 /*30*/].f_10 = Global_1393237.f_11[iParam0 /*30*/].f_10 || iParam1;
	return;
}

BOOL func_29(var uParam0, var uParam1, var uParam2) // Position - 0xDE1 Hash - 0xEE60E98 ^0xEE60E98
{
	int num;

	num = func_54(uParam0);

	if (num < 0)
		return false;

	return func_14(num, 1);
}

BOOL func_30(Vector3 vParam0, var uParam1, var uParam2) // Position - 0xE04 Hash - 0xA0EEE249 ^0x70DF8989
{
	if (!_IS_NULL_VECTOR(Global_1393237.f_200))
		return BUILTIN::VDIST(Global_1393237.f_200, vParam0) < 5f;

	return false;
}

int func_31(BOOL bParam0) // Position - 0xE32 Hash - 0x35BC734 ^0x35BC734
{
	int num;

	num = func_55(true);

	if (bParam0)
		return num + 1;

	return num;
}

BOOL func_32(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0xE4F Hash - 0xD311DA43 ^0x8648A8D
{
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	if (iLocal_14 == -1)
		iLocal_14 = func_39(uParam0);

	if (!func_56())
		return false;

	if (Global_1393237.f_3 > MISC::GET_GAME_TIMER())
		return false;

	if (Global_1327479.f_5 > MISC::GET_GAME_TIMER())
		return false;

	if (!func_57(true, uParam0, -1, -1))
		return false;

	if (func_58(Global_40.f_9632.f_192))
	{
		func_60(func_59(), &unk, &num, &num2, &num3, &num4, &num5);
	
		if (num3 < 1 && num4 < 1 && num5 < 1)
			if (func_61())
				if (num2 >= 3 && num >= 0)
					return false;
			else if (num2 >= 3 && num >= 0)
				return false;
	}

	if (!func_62(func_5(), uParam0))
		return false;

	if (!func_63(-1))
		return false;
	else if (!func_63(func_64(iLocal_14, false, false, 0)))
		return false;

	if (func_66(uParam0, func_65(iLocal_14), 4, 1))
		return false;

	if (func_66(uParam0, func_67(iLocal_14), 2, 1))
		return false;

	switch (iLocal_14)
	{
		case 1:
		case 3:
		case 9:
			if (!func_69(0))
				return true;
			break;
	
		case 10:
			if (func_68())
				return true;
			else
				return false;
			break;
	
		case 11:
			if (!func_69(2))
				return true;
	
		case 12:
			if (!func_69(3))
				return true;
			break;
	}

	return false;
}

BOOL func_33(var uParam0, var uParam1, var uParam2) // Position - 0xFEC Hash - 0x425D0DCF ^0xC16E757F
{
	int i;

	for (i = 0; i < Global_40.f_10991.f_4; i = i + 1)
	{
		if (func_51(Global_40.f_10991.f_4[i /*3*/], uParam0, 10f, true))
			return true;
	}

	return false;
}

BOOL func_34(int iParam0, BOOL bParam1) // Position - 0x1031 Hash - 0xBF0AA8E4 ^0x648F878F
{
	if (func_70(PLAYER::PLAYER_ID(), false, true, true))
		return true;

	if (func_17())
		return true;

	if (func_14(iParam0, 4096) || func_14(iParam0, 131072))
		return true;

	return false;
}

BOOL func_35(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1077 Hash - 0x3F4C1B1 ^0x898E9E6F
{
	var unk;
	var unk6;

	if (_IS_NULL_VECTOR(uParam0))
		return false;

	unk = 4;
	unk[0] = iParam4;
	unk6 = 4;
	unk6[0] = 16384;
	unk6[1] = iParam5;

	if (VOLUME::_0x870E9981ED27C815(uParam0, &unk, &unk6, iParam3))
		return true;

	return false;
}

BOOL func_36(int iParam0) // Position - 0x10C4 Hash - 0xDA17D690 ^0x72CE747C
{
	float distanceBetweenCoords;
	BOOL flag;
	float num;

	distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1393237.f_11[iParam0 /*30*/].f_3, true);
	flag = func_71(iParam0, distanceBetweenCoords, true);

	if (flag)
		num = 130f;
	else
		num = 100f;

	if (distanceBetweenCoords < num)
		return true;

	return false;
}

BOOL func_37(Vector3 vParam0, var uParam1, var uParam2, int iParam3) // Position - 0x1114 Hash - 0x6F7F60E3 ^0x4D5C0076
{
	int i;
	float distanceBetweenCoords;
	int num;

	if (iLocal_14 == -1)
		iLocal_14 = func_39(vParam0);

	num = func_40(iLocal_14);

	for (i = 0; i < Global_1393237.f_11; i = i + 1)
	{
		if (i != iParam3)
		{
			if (!_IS_NULL_VECTOR(Global_1393237.f_11[i /*30*/].f_3))
			{
				distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, Global_1393237.f_11[i /*30*/].f_3, true);
			
				if (distanceBetweenCoords < func_41(func_5(), num, false))
					return true;
			}
		}
	}

	return false;
}

BOOL func_38(var uParam0, var uParam1, var uParam2, int iParam3, BOOL bParam4) // Position - 0x1197 Hash - 0xD2772B65 ^0xB64779B1
{
	if (func_30(uParam0) || func_14(iParam3, 524288))
		return true;

	if (func_72(iParam3))
		return true;

	if (bParam4)
		if (Global_1393237.f_8 + 1 > Global_1393237.f_6)
			return false;
	else if (Global_1393237.f_7 + 1 > Global_1393237.f_6)
		return false;

	if (func_73(50, false, true))
		return false;

	if (bParam4)
		if (func_16())
			return false;

	return true;
}

int func_39(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x121D Hash - 0x56F0811C ^0x278FB5A
{
	return func_74(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_40(int iParam0) // Position - 0x1233 Hash - 0xEF86270 ^0xEF86270
{
	int num;

	num = func_64(iParam0, func_56(), false, 0);
	return func_75(num);
}

float func_41(int iParam0, int iParam1, BOOL bParam2) // Position - 0x124F Hash - 0x45282B7 ^0x45282B7
{
	if (bParam2)
		return 200f;

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 220f;
			
				case 3:
					return 200f;
			
				default:
					return 300f;
			}
			break;
	}

	return 400f;
}

BOOL func_42(int iParam0, int iParam1) // Position - 0x12AF Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_43() // Position - 0x12BE Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return 0;
}

void func_44(int iParam0, int iParam1) // Position - 0x12C7 Hash - 0x3095F76B ^0x9DAA87F4
{
	if (iParam0 >= 0 && iParam0 < 6)
		Global_1393237.f_11[iParam0 /*30*/].f_24 = iParam1;

	return;
}

int func_45() // Position - 0x12ED Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_46(int iParam0, int iParam1) // Position - 0x12FB Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_47(const char* sParam0) // Position - 0x130A Hash - 0x2124511C ^0xA40AAA4F
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

void func_48(int iParam0) // Position - 0x1344 Hash - 0x22E7EDA ^0x22E7EDA
{
	if (func_46(iParam0, 1))
		func_76(1);

	return;
}

int func_49(int iParam0) // Position - 0x135B Hash - 0xCEAC22E5 ^0x1F8567CD
{
	int num;

	num = Global_1393237.f_11[iParam0 /*30*/];
	func_77(&num, 0, 0, 0, 1, 0, 0, false);
	return num;
}

BOOL func_50(int iParam0) // Position - 0x137E Hash - 0x83DD6E97 ^0x83DD6E97
{
	return Global_1899515 > iParam0;
}

BOOL func_51(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x138D Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
				return true;

	return false;
}

BOOL func_52(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x13E2 Hash - 0x3CD10F27 ^0xAC09280E
{
	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, 0.5f, 0, 0, 16384);
}

int func_53(Volume volParam0, BOOL bParam1) // Position - 0x13FC Hash - 0xEA796703 ^0x695D7925
{
	Volume volLockRequestId;
	int i;

	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return 0;

	!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volParam0);

	for (i = 0; i < Global_1911670; i = i + 1)
	{
		volLockRequestId = Global_1911670[i];
	
		if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId) || volLockRequestId == volParam0)
		{
			Global_1911670[i] = volParam0;
			return 1;
		}
	}

	return 0;
}

int func_54(var uParam0, var uParam1, var uParam2) // Position - 0x1464 Hash - 0xAE09E622 ^0xD3E09CA
{
	int i;

	i = -1;

	for (i = 0; i < 6; i = i + 1)
	{
		if (func_72(i))
			if (func_51(uParam0, Global_1393237.f_11[i /*30*/].f_3, 10f, false))
				return i;
	}

	return -1;
}

int func_55(BOOL bParam0) // Position - 0x14AF Hash - 0x7F08FD3B ^0xE97B69AA
{
	int num;
	int numberOfFollowers;
	var hasLeader;
	int i;
	Ped pedAsGroupMember;

	if (bParam0)
		return func_78(Global_1359489.f_4);

	PED::GET_GROUP_SIZE(func_79(), &hasLeader, &numberOfFollowers);

	if (numberOfFollowers == 0)
		return 0;

	for (i = 0; i < numberOfFollowers; i = i + 1)
	{
		pedAsGroupMember = PED::GET_PED_AS_GROUP_MEMBER(func_79(), i);
	
		if (func_80(pedAsGroupMember))
			num = num + 1;
	}

	return num;
}

BOOL func_56() // Position - 0x150F Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_1() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_57(BOOL bParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5) // Position - 0x1534 Hash - 0x66339389 ^0xE008D891
{
	BOOL flag;

	if (bParam0)
	{
		if (iParam4 == -1)
			iParam4 = func_39(uParam1);
	
		flag = iParam4 == 10;
	
		if (!flag)
			if (Global_1393237.f_1 != 0 && MISC::GET_GAME_TIMER() - Global_1393237.f_1 < func_81(iParam5))
				return false;
		else if (Global_1393237.f_1 != 0 && MISC::GET_GAME_TIMER() - Global_1393237.f_1 < 961920)
			return false;
	
		if (Global_1393237.f_2 != 0)
			if (MISC::GET_GAME_TIMER() - Global_1393237.f_2 < func_82())
				return false;
	}
	else
	{
		if (Global_1393237 != 0 && MISC::GET_GAME_TIMER() - Global_1393237 < func_83())
			return false;
	
		if (Global_1393237.f_2 != 0)
			if (MISC::GET_GAME_TIMER() - Global_1393237.f_2 < func_82())
				return false;
	}

	if (MISC::GET_GAME_TIMER() < Global_1393237.f_4)
		return false;

	return true;
}

BOOL func_58(int iParam0) // Position - 0x1620 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_84(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_85(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_86(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_87(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_88(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_89(iParam0);

	if (num6 < 1 || num6 > func_90(num5, num4))
		return false;

	return true;
}

int func_59() // Position - 0x16FC Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_60(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x1708 Hash - 0x2BEE335D ^0x2BEE335D
{
	func_91(func_59(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

BOOL func_61() // Position - 0x1726 Hash - 0x9DDBD4E1 ^0xED0D5A96
{
	if (Global_1392135.f_3 != -1)
		return true;

	return Global_1392135.f_3 != -1;
}

BOOL func_62(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1744 Hash - 0xC96F6CDF ^0x22B81542
{
	float num;
	BOOL flag;

	num = uParam1.f_2;
	flag = Global_36.f_2;

	if (flag < num - 45f)
		return false;

	return true;
}

BOOL func_63(int iParam0) // Position - 0x176C Hash - 0xDA16D62F ^0x3835782C
{
	float num;
	BOOL num2;

	num = func_92();
	num2 = 1;

	if (num < (float)Global_1392135.f_4)
		num2 = 0;

	if (iParam0 != -1)
		if (num < (float)Global_1392135.f_5[iParam0])
			num2 = 0;

	return num2;
}

int func_64(int iParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x17A9 Hash - 0x338ECF1A ^0x338ECF1A
{
	BOOL flag;

	flag = func_56() && !bParam2;

	switch (iParam0)
	{
		case 0:
		case 11:
			return 2;
	
		case 1:
			if (!flag && !bParam1)
				return 0;
			else
				return 4;
			break;
	
		case 3:
		case 9:
			return 0;
	
		case 4:
		case 12:
			if (flag || bParam1)
				return 3;
			break;
	
		case 5:
			if (flag || bParam1)
				return 3;
			break;
	
		case 10:
			return 1;
	
		case 15:
		case 16:
			return 5;
	}

	return -1;
}

float func_65(int iParam0) // Position - 0x1861 Hash - 0x9EEAC446 ^0x9EEAC446
{
	switch (iParam0)
	{
		case 10:
			return 170f;
	
		default:
		
	}

	return 350f;
}

BOOL func_66(Vector3 vParam0, var uParam1, var uParam2, float fParam3, int iParam4, int iParam5) // Position - 0x1884 Hash - 0x43EBD5CA ^0x361FC829
{
	if (_IS_NULL_VECTOR(vParam0))
		return false;

	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, fParam3, iParam5, iParam4, 16384);
}

float func_67(int iParam0) // Position - 0x18AC Hash - 0x9EEAC446 ^0x9EEAC446
{
	switch (iParam0)
	{
		case 10:
			return 140f;
	
		default:
		
	}

	return 220f;
}

BOOL func_68() // Position - 0x18CF Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_69(int iParam0) // Position - 0x18D8 Hash - 0xBF1DF5C6 ^0xEDF16C34
{
	if (!func_93(iParam0, false))
		return false;

	return Global_40.f_9571[iParam0 /*10*/].f_1 == 5;
}

BOOL func_70(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x18FD Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_94(bParam1, bParam2, bParam3);

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

BOOL func_71(int iParam0, float fParam1, BOOL bParam2) // Position - 0x1A32 Hash - 0x6B37C385 ^0x70086738
{
	if (fParam1 < 180f)
	{
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (CAM::IS_SPHERE_VISIBLE(Global_1393237.f_11[iParam0 /*30*/].f_3 + { 1f, 0f, 0f }, 3f))
				return 1;
		
			if (bParam2)
				if (CAM::IS_SPHERE_VISIBLE(Global_1393237.f_11[iParam0 /*30*/].f_3 + { 5.5f, 0f, 0f }, 3f))
					return 1;
		}
	}

	return 0;
}

BOOL func_72(int iParam0) // Position - 0x1A9C Hash - 0x74D4CFB3 ^0x928B84E
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
		return false;

	return Global_1393237.f_11[iParam0 /*30*/].f_2 != -1;
}

BOOL func_73(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1ACC Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_95())
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
		num = func_96(Global_1898164.f_1[0 /*5*/]);
	
		if (func_97(num) && func_98(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_99(Global_1898164.f_1[0 /*5*/]))
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

int func_74(Hash hParam0) // Position - 0x1CD0 Hash - 0x50573299 ^0x50573299
{
	switch (hParam0)
	{
		case joaat("riobravo"):
			return 14;
	
		case joaat("GaptoothRidge"):
			return 13;
	
		case joaat("scarlettmeadows"):
			return 11;
	
		case joaat("GuarmaD"):
			return 8;
	
		case joaat("GrizzliesEast"):
			return 6;
	
		case joaat("ChollaSprings"):
			return 15;
	
		case joaat("heartlands"):
			return 9;
	
		case joaat("roanoke"):
			return 10;
	
		case joaat("greatplains"):
			return 4;
	
		case joaat("bigvalley"):
			return 1;
	
		case joaat("HennigansStead"):
			return 16;
	
		case joaat("BluewaterMarsh"):
			return 2;
	
		case joaat("GrizzliesWest"):
			return 7;
	
		case joaat("talltrees"):
			return 12;
	
		case joaat("Cumberland"):
			return 3;
	
		case joaat("bayounwa"):
			return 0;
	
		default:
		
	}

	return -1;
}

int func_75(int iParam0) // Position - 0x1D8A Hash - 0xAF09CADA ^0xAF09CADA
{
	switch (iParam0)
	{
		case 0:
			return 2;
	
		case 1:
			return 3;
	
		case 2:
			return 0;
	
		case 3:
			return 1;
	
		default:
		
	}

	return -1;
}

void func_76(int iParam0) // Position - 0x1DC3 Hash - 0x13258647 ^0x7EDD98BE
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		if (iParam0 == 1)
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");

	return;
}

void func_77(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x1E06 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_87(*uParam0);
	i = func_88(*uParam0);
	num2 = func_89(*uParam0);
	j = func_86(*uParam0);
	k = func_85(*uParam0);
	l = func_84(*uParam0);

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

	for (m = func_90(i, num); num2 > m; m = func_90(i, num))
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

	func_100(uParam0, l, k, j, num2, i, num);
	return;
}

int func_78(BOOL bParam0) // Position - 0x1F8E Hash - 0xB9596906 ^0xEA13D3DB
{
	int num;
	BOOL flag;

	flag = bParam0;

	if (flag < false)
	{
		num = 1;
		func_101(&flag, -2147483648);
	}
	else
	{
		num = 0;
	}

	while (flag > false)
	{
		flag = flag && flag - 1;
		num = num + 1;
	}

	return num;
}

int func_79() // Position - 0x1FCE Hash - 0xDED80B4D ^0x98F74967
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

BOOL func_80(Ped pedParam0) // Position - 0x1FDE Hash - 0xCA96D27A ^0x3802A466
{
	int i;
	Ped ped;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (func_1() != -1)
		return false;

	for (i = 0; i < 27; i = i + 1)
	{
		ped = Global_1360165[i /*1157*/];
	
		if (!ENTITY::IS_ENTITY_DEAD(ped) && pedParam0 == ped)
			return true;
	}

	return false;
}

int func_81(int iParam0) // Position - 0x2037 Hash - 0x4C6F6ED1 ^0x54BF6E41
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;

	func_102(&num2, &num3, &num4);

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_1393237.f_11[i /*30*/].f_2 == 0)
			if (func_14(i, num2) || func_14(i, num3))
				if (num < 1083240)
					num = 1083240;
			else if (func_14(i, num4))
				if (num < 720720)
					num = 720720;
	}

	if (num <= 0)
		num = 360360;

	if (iParam0 != -1)
		if (iParam0 == Global_1393237.f_209)
			num = BUILTIN::FLOOR(2f * (float)num);

	return num;
}

int func_82() // Position - 0x20DA Hash - 0x3CF9FC4B ^0x7CA81256
{
	return 240000;
}

int func_83() // Position - 0x20E6 Hash - 0x14265370 ^0x903B3BF0
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;

	func_102(&num2, &num3, &num4);

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_1393237.f_11[i /*30*/].f_2 != 0)
			if (func_14(i, num2))
				num = 2885760;
			else if (func_14(i, num3))
				if (num < 2882880)
					num = 2882880;
			else if (func_14(i, num4))
				if (num < 2880000)
					num = 2880000;
	}

	if (num <= 0)
		num = 1440000;

	return num;
}

int func_84(int iParam0) // Position - 0x2173 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_85(int iParam0) // Position - 0x2185 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_86(int iParam0) // Position - 0x2197 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_87(int iParam0) // Position - 0x21AA Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_88(int iParam0) // Position - 0x21CF Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_89(int iParam0) // Position - 0x21E2 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_90(int iParam0, int iParam1) // Position - 0x21F5 Hash - 0x893AC59E ^0x893AC59E
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

void func_91(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x228F Hash - 0x38DA000F ^0x38DA000F
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_104(iParam0, iParam1, true))
	{
		num = func_88(iParam1);
		num2 = func_87(iParam0);
		num3 = func_87(iParam0) - func_87(iParam1);
		num4 = func_88(iParam0) - func_88(iParam1);
		num5 = func_89(iParam0) - func_89(iParam1);
		num6 = func_86(iParam0) - func_86(iParam1);
		num7 = func_85(iParam0) - func_85(iParam1);
		num8 = func_84(iParam0) - func_84(iParam1);
	}
	else
	{
		num = func_88(iParam0);
		num2 = func_87(iParam1);
		num3 = func_87(iParam1) - func_87(iParam0);
		num4 = func_88(iParam1) - func_88(iParam0);
		num5 = func_89(iParam1) - func_89(iParam0);
		num6 = func_86(iParam1) - func_86(iParam0);
		num7 = func_85(iParam1) - func_85(iParam0);
		num8 = func_84(iParam1) - func_84(iParam0);
	}

	while (num8 < 0)
	{
		num8 = num8 + 60;
		num7 = num7 - 1;
	}

	while (num8 > 59)
	{
		num8 = num8 - 60;
		num7 = num7 + 1;
	}

	while (num7 < 0)
	{
		num7 = num7 + 60;
		num6 = num6 - 1;
	}

	while (num7 > 59)
	{
		num7 = num7 - 60;
		num6 = num6 + 1;
	}

	while (num6 < 0)
	{
		num6 = num6 + 24;
		num5 = num5 - 1;
	}

	while (num6 > 23)
	{
		num6 = num6 - 24;
		num5 = num5 + 1;
	}

	while (num5 < 0)
	{
		while (num4 < 0)
		{
			num4 = num4 + 12;
			num3 = num3 - 1;
		}
	
		num5 = num5 + func_90(num, num2);
		num4 = num4 - 1;
		num = BUILTIN::ROUND(func_105(BUILTIN::TO_FLOAT(num + 1), 0f, 12f));
	}

	while (num4 < 0)
	{
		num4 = num4 + 12;
		num3 = num3 - 1;
	}

	while (num4 > 12)
	{
		num4 = num4 - 12;
		num3 = num3 + 1;
	}

	*uParam2 = num8;
	*uParam3 = num7;
	*uParam4 = num6;
	*uParam5 = num5;
	*uParam6 = num4;
	*uParam7 = num3;
	return;
}

float func_92() // Position - 0x2491 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_93(int iParam0, BOOL bParam1) // Position - 0x24C3 Hash - 0xA712060D ^0xA712060D
{
	if (iParam0 < 0)
		return false;

	if (iParam0 >= 6 && !bParam1 || iParam0 > 10 && bParam1)
		return false;

	return true;
}

BOOL func_94(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x24FB Hash - 0xC9655EC3 ^0x88C9AFE1
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

BOOL func_95() // Position - 0x2599 Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_96(int iParam0) // Position - 0x25EC Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_99(iParam0))
		return -1;

	return func_107(func_106(iParam0));
}

BOOL func_97(int iParam0) // Position - 0x260C Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_98(int iParam0, int iParam1) // Position - 0x2622 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_99(int iParam0) // Position - 0x2631 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

void func_100(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2664 Hash - 0xA65AB937 ^0xA65AB937
{
	func_108(uParam0, iParam6);
	func_109(uParam0, iParam5);
	func_110(uParam0, iParam4);
	func_111(uParam0, iParam3);
	func_112(uParam0, iParam2);
	func_113(uParam0, iParam1);
	return;
}

void func_101(var uParam0, int iParam1) // Position - 0x269C Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_102(var uParam0, var uParam1, var uParam2) // Position - 0x26B1 Hash - 0x69BD406A ^0x360BE94
{
	*uParam0 = 9484;
	*uParam1 = 66;
	*uParam2 = 128;
	return;
}

var func_103(BOOL bParam0, var uParam1, var uParam2) // Position - 0x26C9 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_104(int iParam0, int iParam1, BOOL bParam2) // Position - 0x26E0 Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_58(iParam1) || !func_58(iParam0))
			return true;

	return iParam0 > iParam1;
}

float func_105(float fParam0, float fParam1, float fParam2) // Position - 0x270D Hash - 0xDB08F514 ^0x78C0BF6F
{
	float num;

	if (fParam1 == fParam2)
		return fParam1;

	num = fParam2 - fParam1;
	fParam0 = fParam0 - ((float)BUILTIN::ROUND((fParam0 - fParam1) / num) * num);

	if (fParam0 < fParam1)
		fParam0 = fParam0 + num;

	return fParam0;
}

BOOL func_106(int iParam0) // Position - 0x274F Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_107(BOOL bParam0) // Position - 0x278D Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

void func_108(var uParam0, int iParam1) // Position - 0x27A0 Hash - 0xD05180BA ^0x39589262
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

void func_109(var uParam0, int iParam1) // Position - 0x2826 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_110(var uParam0, int iParam1) // Position - 0x2862 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_88(*uParam0);
	num2 = func_87(*uParam0);

	if (iParam1 < 1 || iParam1 > func_90(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_111(var uParam0, int iParam1) // Position - 0x28B5 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_112(var uParam0, int iParam1) // Position - 0x28F0 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_113(var uParam0, int iParam1) // Position - 0x2929 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

