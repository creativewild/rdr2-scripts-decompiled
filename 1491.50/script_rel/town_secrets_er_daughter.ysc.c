#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 1;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	int iLocal_6 = 0;
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

void main() // Position - 0x0 Hash - 0x6D450A5 ^0x1AEFC79B
{
	int idOfThisThread;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
		func_1(&idOfThisThread);

	while (func_2(&idOfThisThread))
	{
		switch (iLocal_6)
		{
			case 0:
				if (func_3(&idOfThisThread))
					iLocal_6 = 1;
			
				idOfThisThread = SCRIPTS::GET_ID_OF_THIS_THREAD();
				break;
		
			case 1:
				func_4(&idOfThisThread);
			
				if (func_6(func_5()))
					iLocal_6 = 2;
			
				if (idOfThisThread.f_2)
					iLocal_6 = 2;
				break;
		
			case 2:
				func_1(&idOfThisThread);
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1(&idOfThisThread);
	return;
}

void func_1(var uParam0) // Position - 0x88 Hash - 0xEB8FD153 ^0x81DAD274
{
	if (uParam0->f_1)
		return;

	func_7(uParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_2(var uParam0) // Position - 0xA4 Hash - 0x7C7E3F99 ^0x96BAC17B
{
	if (uParam0->f_1)
		return true;

	if (func_8() != func_9())
		return false;

	if (func_10(Global_1935630, 2097152))
		return false;

	return true;
}

BOOL func_3(var uParam0) // Position - 0xDA Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

void func_4(var uParam0) // Position - 0xE3 Hash - 0x949E0A3A ^0x9CEE7B2D
{
	if (iLocal_0 == 4)
	{
		if (func_11(4) || PED::_0x5203038FF8BAE577(iLocal_0.f_1, 25, 5000) || PED::_0x5203038FF8BAE577(iLocal_0.f_1, 55, 5000))
		{
			if (func_13(func_12(), 262.3945f, 2f))
				func_14(5);
		
			func_15(4);
			return;
		}
	}

	if (iLocal_0 >= 3 && iLocal_0.f_5 <= 200)
	{
		iLocal_0.f_5 = iLocal_0.f_5 + 1;
		return;
	}

	iLocal_0.f_5 = 0;

	switch (iLocal_0)
	{
		case 0:
			func_16();
			func_14(1);
			break;
	
		case 1:
			if (func_17())
				func_14(2);
			break;
	
		case 2:
			if (func_18() && func_19())
				if (func_20(func_12(), 0f, false, true))
					func_14(3);
			break;
	
		case 3:
			if (!func_21())
				return;
		
			if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_0.f_2[0], true, 0))
				return;
		
			ENTITY::SET_ENTITY_VISIBLE(iLocal_0.f_1, true);
			func_14(4);
			break;
	
		case 4:
			if (!func_11(1) && func_13(1457.186f, 314.9523f, 92.7676f, 85.4782f, 1065353216))
			{
				func_22();
				func_15(1);
			}
		
			if (func_23())
			{
				func_24();
				func_14(5);
			}
			break;
	
		case 5:
			if (func_20(func_12(), 262.3945f, true, false))
				func_14(6);
			break;
	
		case 6:
			if (!func_11(2) && func_25())
				func_15(2);
		
			if (func_21())
				func_14(0);
			break;
	}

	return;
}

int func_5() // Position - 0x28F Hash - 0x1FFCF868 ^0x1FFCF868
{
	return 2;
}

BOOL func_6(int iParam0) // Position - 0x298 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_26(iParam0, 2);
}

void func_7(var uParam0) // Position - 0x2A7 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

eStackSize func_8() // Position - 0x2AF Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

eStackSize func_9() // Position - 0x2BD Hash - 0xAF7803E4 ^0xAF7803E4
{
	return 69;
}

BOOL func_10(int iParam0, int iParam1) // Position - 0x2C7 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_11(int iParam0) // Position - 0x2D6 Hash - 0x64046C13 ^0x348E7940
{
	return func_27(iLocal_0.f_4, iParam0);
}

Vector3 func_12() // Position - 0x2E8 Hash - 0x21158019 ^0x21158019
{
	return 1460.5403f, 315.1411f, 92.7676f;
}

BOOL func_13(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4) // Position - 0x2FF Hash - 0x8B5CED7 ^0xBF3EFF5C
{
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_0.f_1, 1))
		PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(iLocal_0.f_1);

	if (!func_28(iLocal_0.f_1, fParam0, fParam3, 2f, 20f, true))
	{
		if (!func_29(iLocal_0.f_1, SCRIPT_TASK_GO_STRAIGHT_TO_COORD))
			TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_0.f_1, fParam0, iParam4, -1, fParam3, 1056964608, 0);
	
		return false;
	}

	return true;
}

void func_14(int iParam0) // Position - 0x361 Hash - 0x28DF00E8 ^0x28DF00E8
{
	iLocal_0 = iParam0;
	return;
}

void func_15(int iParam0) // Position - 0x36D Hash - 0x30DC3044 ^0xE43B7841
{
	if (!func_27(iLocal_0.f_4, iParam0))
		func_30(&(iLocal_0.f_4), iParam0);

	return;
}

void func_16() // Position - 0x38D Hash - 0x1FFFC74C ^0x1FFFC74C
{
	func_31(1);
	func_31(2);
	return;
}

BOOL func_17() // Position - 0x39F Hash - 0xFB3468D3 ^0x5F841335
{
	STREAMING::REQUEST_MODEL(func_32(), false);
	PED::_RESERVE_AMBIENT_PEDS(1);

	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() == 1 && STREAMING::HAS_MODEL_LOADED(func_32()))
		return true;

	return false;
}

int func_18() // Position - 0x3D0 Hash - 0x5E176133 ^0x2FE2B014
{
	int i;
	int num;
	Vector3 vector;

	for (i = 0; i <= 1 - 1; i = i + 1)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(iLocal_0.f_2[i]))
		{
			num = i;
			vector = { func_33(num) };
			iLocal_0.f_2[i] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(vector.f_10, vector, vector.f_3, vector.f_6, vector.f_9);
		}
	}

	return 1;
}

int func_19() // Position - 0x430 Hash - 0x5A712109 ^0x263B1C64
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_0.f_1))
	{
		iLocal_0.f_1 = func_35(func_32(), func_12(), func_34(), true, true, true, 0);
		return 0;
	}

	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_0.f_1, true);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_0.f_1, false);
	return 1;
}

BOOL func_20(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4, BOOL bParam5) // Position - 0x473 Hash - 0x17D6E435 ^0x2208E263
{
	if (!func_29(iLocal_0.f_1, SCRIPT_TASK_START_SCENARIO_AT_POSITION))
		TASK::TASK_START_SCENARIO_AT_POSITION(iLocal_0.f_1, joaat("world_human_sleep_ground_arm"), vParam0, fParam3, 0, bParam4, bParam5, 0, -1082130432, false);

	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_0.f_1, 0))
		return true;

	return false;
}

BOOL func_21() // Position - 0x4BC Hash - 0x360A16AE ^0x5C56ECCC
{
	int clockDayOfWeek;
	int clockHours;

	clockDayOfWeek = CLOCK::GET_CLOCK_DAY_OF_WEEK();

	if (clockDayOfWeek != 0 && clockDayOfWeek != 3 && clockDayOfWeek != 5)
		return false;

	clockHours = CLOCK::GET_CLOCK_HOURS();

	if (!func_36(clockHours, 9, 12) && !func_36(clockHours, 21, 0))
		return false;

	return true;
}

void func_22() // Position - 0x50E Hash - 0x5E1D566A ^0x87271609
{
	if (!func_29(iLocal_0.f_1, SCRIPT_TASK_LOOK_AT_ENTITY))
		TASK::TASK_LOOK_AT_ENTITY(iLocal_0.f_1, Global_35, 0, 0, 51, 1);

	return;
}

BOOL func_23() // Position - 0x537 Hash - 0x3AB74DBD ^0x3AB74DBD
{
	if (func_11(1) && !func_21())
		return true;

	return false;
}

void func_24() // Position - 0x556 Hash - 0x17A1040D ^0xCA203D7E
{
	if (func_29(iLocal_0.f_1, SCRIPT_TASK_LOOK_AT_ENTITY))
		TASK::TASK_CLEAR_LOOK_AT(iLocal_0.f_1);

	return;
}

BOOL func_25() // Position - 0x576 Hash - 0x2B753E10 ^0x19D6730F
{
	int i;

	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_32());

	if (ENTITY::DOES_ENTITY_EXIST(iLocal_0.f_1))
		PED::DELETE_PED(&(iLocal_0.f_1));

	for (i = 0; i <= 1 - 1; i = i + 1)
	{
		if (VOLUME::DOES_VOLUME_EXIST(iLocal_0.f_2[i]))
			VOLUME::DELETE_VOLUME(iLocal_0.f_2[i]);
	}

	PED::_UNRESERVE_AMBIENT_PEDS(1);
	return true;
}

BOOL func_26(int iParam0, int iParam1) // Position - 0x5CE Hash - 0xA750EBE5 ^0xA750EBE5
{
	if (!func_37(iParam0))
		return false;

	return Global_40.f_9020[iParam0] && iParam1 != false;
}

BOOL func_27(int iParam0, int iParam1) // Position - 0x5F3 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_28(Entity eParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, BOOL bParam7) // Position - 0x602 Hash - 0x995BD73A ^0x723FD09
{
	float num;

	num = func_38(ENTITY::GET_ENTITY_HEADING(eParam0));
	fParam4 = func_38(fParam4);

	if (ENTITY::IS_ENTITY_AT_COORD(eParam0, vParam1, fParam5, fParam5, 2f, false, bParam7, 0) && MISC::ABSF(num - fParam4) <= fParam6)
		return true;

	return false;
}

BOOL func_29(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x64A Hash - 0xBA023B92 ^0x16E0B707
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (!PED::IS_PED_INJURED(pedParam0))
		{
			if (esthParam1 == SCRIPT_TASK_DRIVE_BY && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(pedParam0))
				return true;
		
			if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 0)
				return true;
		}
	}

	return false;
}

void func_30(var uParam0, int iParam1) // Position - 0x6A3 Hash - 0xF55E891F ^0xF55E891F
{
	func_39(uParam0, iParam1);
	return;
}

void func_31(int iParam0) // Position - 0x6B3 Hash - 0x138C39A2 ^0x5C098EF2
{
	if (func_27(iLocal_0.f_4, iParam0))
		func_40(&(iLocal_0.f_4), iParam0);

	return;
}

ePedType func_32() // Position - 0x6D2 Hash - 0x9F572D68 ^0x2EF734DD
{
	return joaat("u_f_m_emrdaughter_01");
}

struct<11> func_33(int iParam0) // Position - 0x6DF Hash - 0x19E1B771 ^0xA521A56C
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk = { 1443.915f, 319.475f, 88.464f };
			unk.f_3 = { 0f, 0f, -0.207f };
			unk.f_6 = { 20.418f, 27f, 4.659f };
			unk.f_9 = "TS_ERD_SPAWN_TRIGGER";
			unk.f_10 = joaat("volBox");
			break;
	}

	return unk;
}

float func_34() // Position - 0x741 Hash - 0x22FB54B8 ^0x22FB54B8
{
	return 90.68f;
}

Ped func_35(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, int iParam8) // Position - 0x74E Hash - 0x12C6A9B7 ^0xD5EBF256
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam6, bParam7, false, false);

	if (bParam5)
		PED::_SET_RANDOM_OUTFIT_VARIATION(ped, true);

	return ped;
}

BOOL func_36(int iParam0, int iParam1, int iParam2) // Position - 0x778 Hash - 0xD8381BE7 ^0xD8381BE7
{
	BOOL flag;
	int num;
	int num2;

	if (iParam1 == 24)
		iParam1 = 0;

	if (iParam1 < 0 || iParam1 >= 24)
		return false;

	if (iParam2 == 24)
		iParam2 = 0;

	if (iParam2 < 0 || iParam2 >= 24)
		return false;

	if (iParam1 == iParam2)
		return true;

	flag = iParam2 < iParam1;
	num = iParam1;
	num2 = iParam2;

	if (flag)
		num2 = 24;

	if (iParam0 >= num && iParam0 < num2)
		return true;

	if (!flag)
		return false;

	num = 0;
	num2 = iParam2;

	if (iParam0 >= num && iParam0 < num2)
		return true;

	return false;
}

BOOL func_37(int iParam0) // Position - 0x821 Hash - 0x75AD7F8B ^0x75AD7F8B
{
	return iParam0 > -1 && iParam0 < 4;
}

float func_38(float fParam0) // Position - 0x836 Hash - 0xAEA651F2 ^0xAEA651F2
{
	float num;

	num = fParam0;

	if (fParam0 < 0f)
		num = num + 360f;
	else if (fParam0 >= 360f)
		num = num - 360f;

	return num;
}

void func_39(var uParam0, int iParam1) // Position - 0x86D Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_40(var uParam0, int iParam1) // Position - 0x87E Hash - 0xF55E891F ^0xF55E891F
{
	func_41(uParam0, iParam1);
	return;
}

void func_41(var uParam0, int iParam1) // Position - 0x88E Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

