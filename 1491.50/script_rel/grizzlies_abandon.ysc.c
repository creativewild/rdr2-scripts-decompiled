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
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	Ped pedLocal_18 = 0;
	int iLocal_19 = 0;
	char* sLocal_20 = 0;
	BOOL bLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xB472EC08 ^0xB472EC08
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_19 = -1;
	uLocal_22 = { -1338.1196f, 2434.5225f, 307.2562f };
	func_1();
	iLocal_15 = uScriptParam_0;

	while (true)
	{
		if (func_2())
			func_3();
	
		switch (iLocal_14)
		{
			case 0:
				if (7 == iLocal_15)
				{
					sLocal_20 = "DONT_LEAVE_CAMP";
					func_4(1);
					iLocal_17 = func_5(sLocal_20, 0, 0, true);
				}
			
				iLocal_14 = 1;
				break;
		
			case 1:
				func_6();
			
				if (func_7(Global_35, Global_1897952.f_38, true, 0))
					iLocal_14 = 2;
				break;
		
			case 2:
				if (func_8())
					func_3();
			
				if (!func_7(Global_35, Global_1897952.f_38, true, 0))
					iLocal_14 = 1;
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_3();
	return;
}

void func_1() // Position - 0xC1 Hash - 0x80C10FC2 ^0x907BDC09
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_3();

	return;
}

BOOL func_2() // Position - 0xD7 Hash - 0x1BB06D2F ^0x8291E6BF
{
	if (PED::IS_PED_INJURED(Global_35))
		return true;

	if (func_9(0, false, true))
		return true;

	if (func_10(128))
		return true;

	if (7 == iLocal_15)
		if (func_11(3))
			return true;
	else if (8 == iLocal_15)
		if (!func_11(38) || func_11(43))
			return true;

	return false;
}

void func_3() // Position - 0x13F Hash - 0x9159C3C9 ^0x95E44519
{
	Global_1897952.f_40 = 0;

	if (iLocal_19 != -1)
		func_12(iLocal_19, 128);

	func_4(1);
	MISC::SET_WIND_SPEED(-1f);
	MISC::SET_WIND_DIRECTION(-1f);
	MISC::_SET_SNOW_LEVEL(-1f);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_4(int iParam0) // Position - 0x174 Hash - 0xF6DB87B5 ^0xF6DB87B5
{
	func_13(true);
	return;
}

int func_5(char* sParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x181 Hash - 0x1DB6DA90 ^0x1DB6DA90
{
	return func_14(sParam0, -1, iParam1, iParam2, 0, bParam3);
}

void func_6() // Position - 0x197 Hash - 0xB3F9A8DB ^0xCB409604
{
	Vehicle vehiclePedIsIn;
	float direction;

	if (CAM::IS_SCREEN_FADED_OUT())
		return;

	if (8 == iLocal_15)
	{
		if (PED::IS_PED_IN_ANY_BOAT(Global_35))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
		
			if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(vehiclePedIsIn, true, false);
				VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(vehiclePedIsIn, true);
				VEHICLE::EXPLODE_VEHICLE(vehiclePedIsIn, false, false, 0, 0);
			}
		}
	
		if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_18))
		{
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				pedLocal_18 = PED::GET_MOUNT(Global_35);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_18, true, false);
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(pedLocal_18))
		{
			func_15(pedLocal_18, false, false);
		}
	}
	else if (7 == iLocal_15)
	{
		if (!func_16(iLocal_17))
		{
			func_4(1);
			iLocal_17 = func_5(sLocal_20, 0, 0, true);
		}
	
		direction = func_17(uLocal_22, Global_36);
	
		if (direction < 0f)
			direction = direction + 360f;
	
		MISC::SET_WIND_DIRECTION(direction);
		fLocal_25 = MISC::GET_WIND_SPEED();
		fLocal_25 = fLocal_25 < 100f ? fLocal_25 + 1f : 100f;
		MISC::SET_WIND_SPEED(fLocal_25);
		fLocal_26 = MISC::GET_SNOW_LEVEL();
		fLocal_26 = fLocal_26 < 1f ? fLocal_26 + 0.01f : 1f;
		MISC::_SET_SNOW_LEVEL(fLocal_26);
	
		if (iLocal_16 < MISC::GET_GAME_TIMER())
		{
			ENTITY::SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_HEALTH(Global_35) - 1, 0);
			iLocal_16 = MISC::GET_GAME_TIMER() + 200;
		
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (PED::GET_MOUNT(Global_35) != pedLocal_18)
				{
					pedLocal_18 = PED::GET_MOUNT(Global_35);
					iLocal_19 = func_19(pedLocal_18);
				
					if (iLocal_19 != -1)
						func_20(iLocal_19, 128);
				}
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_18))
			{
				if (ENTITY::IS_ENTITY_DEAD(pedLocal_18))
				{
					if (!bLocal_21)
					{
						func_4(1);
						sLocal_20 = "DONT_LEAVE_CAMP_HORSE_DIED";
						bLocal_21 = true;
					}
				}
				else
				{
					ENTITY::SET_ENTITY_HEALTH(pedLocal_18, ENTITY::GET_ENTITY_HEALTH(pedLocal_18) - 3, 0);
				}
			}
		}
	}

	return;
}

BOOL func_7(Ped pedParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0x33A Hash - 0x6735ACA9 ^0xD6205CC6
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, bParam2, iParam3);
}

BOOL func_8() // Position - 0x370 Hash - 0x39CB010B ^0x32A2DD2F
{
	if (func_16(iLocal_17))
		func_4(1);

	if (7 == iLocal_15)
	{
		fLocal_25 = MISC::GET_WIND_SPEED();
		fLocal_25 = fLocal_25 > 0f ? fLocal_25 - 0.5f : 0f;
		MISC::SET_WIND_SPEED(fLocal_25);
		fLocal_26 = MISC::GET_SNOW_LEVEL();
		fLocal_26 = fLocal_26 > 0f ? fLocal_26 - 0.01f : 0f;
		MISC::_SET_SNOW_LEVEL(fLocal_26);
	
		if (fLocal_25 > 5f)
			return false;
	}

	return true;
}

BOOL func_9(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3D6 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_21())
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
		num = func_22(Global_1898164.f_1[0 /*5*/]);
	
		if (func_23(num) && func_24(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_25(Global_1898164.f_1[0 /*5*/]))
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

BOOL func_10(int iParam0) // Position - 0x5DA Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_11(int iParam0) // Position - 0x5ED Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_26(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

void func_12(int iParam0, int iParam1) // Position - 0x64C Hash - 0x20A81385 ^0xDDACAB07
{
	iParam0 = func_27(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_24 = Global_1900383[iParam0 /*45*/].f_24 - Global_1900383[iParam0 /*45*/].f_24 && iParam1;
	return;
}

void func_13(BOOL bParam0) // Position - 0x690 Hash - 0x6C3953AD ^0xF72D6E5A
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
	return;
}

int func_14(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x6A0 Hash - 0x8EBD6187 ^0x42F0F0AC
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

void func_15(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6DB Hash - 0xC26AC0FE ^0xFF80BBA5
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (bParam1)
			AUDIO::DISABLE_PED_PAIN_AUDIO(pedParam0, true);
	
		if (bParam2)
			PED::SET_PED_CONFIG_FLAG(pedParam0, 243, true);
	
		Global_35 == pedParam0;
		ENTITY::SET_ENTITY_HEALTH(pedParam0, 0, 0);
	}

	return;
}

BOOL func_16(int iParam0) // Position - 0x717 Hash - 0x10B6ADF3 ^0x5434DDBE
{
	int messageState;

	messageState = 6;

	if (func_28(iParam0))
		messageState = UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0);

	return messageState != 6;
}

float func_17(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x737 Hash - 0x1BC5A4AA ^0xA078651A
{
	float num;

	num = { uParam3 - uParam0 };

	if (num.f_1 == 0f)
		if (num < 0f)
			return -90f;
		else
			return 90f;

	return MISC::ATAN2(num, num.f_1);
}

var func_18(BOOL bParam0, var uParam1, var uParam2) // Position - 0x779 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_19(Ped pedParam0) // Position - 0x790 Hash - 0xD44AE303 ^0xA29D7F05
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

void func_20(int iParam0, int iParam1) // Position - 0x7D5 Hash - 0xFDFFDD51 ^0x74BA7635
{
	iParam0 = func_27(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_24 = Global_1900383[iParam0 /*45*/].f_24 || iParam1;
	return;
}

BOOL func_21() // Position - 0x80E Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_22(int iParam0) // Position - 0x861 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_25(iParam0))
		return -1;

	return func_30(func_29(iParam0));
}

BOOL func_23(int iParam0) // Position - 0x881 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_24(int iParam0, int iParam1) // Position - 0x897 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_25(int iParam0) // Position - 0x8A6 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

BOOL func_26(int iParam0, BOOL bParam1) // Position - 0x8D9 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_31(iParam0))
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

int func_27(int iParam0) // Position - 0x90A Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

BOOL func_28(int iParam0) // Position - 0x923 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return iParam0 != 0;
}

BOOL func_29(int iParam0) // Position - 0x92F Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_30(BOOL bParam0) // Position - 0x96D Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

int func_31(int iParam0) // Position - 0x980 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_25(iParam0))
		return -1;

	return func_32(iParam0);
}

int func_32(int iParam0) // Position - 0x99C Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_33(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

int func_33(int iParam0) // Position - 0x9DD Hash - 0x6EC15CF9 ^0xE613EBE0
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

