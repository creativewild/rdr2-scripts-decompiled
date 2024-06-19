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
	var uLocal_13 = 3;
	var uLocal_14 = 0;
	var uLocal_15 = 6;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 6;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 6;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	Any anLocal_48 = 0;
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xDD700803 ^0x789DFDB6
{
	anLocal_48 = anScriptParam_0;
	iLocal_49.f_1 = anScriptParam_0.f_1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
		func_1();

	if (!TASK::DOES_SCENARIO_POINT_EXIST(anScriptParam_0.f_1))
		func_1();

	while (func_2())
	{
		switch (iLocal_47)
		{
			case 0:
				if (func_3(&iLocal_49))
					iLocal_47 = 1;
				break;
		
			case 1:
				func_4();
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1();
	return;
}

void func_1() // Position - 0x6F Hash - 0xDA8AE6B0 ^0x741E4B8C
{
	func_5();
	SCRIPTS::_0xE7282390542F570D(anLocal_48);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_2() // Position - 0x86 Hash - 0x5C23286E ^0xFDEB700F
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		return false;

	return true;
}

BOOL func_3(var uParam0) // Position - 0x9A Hash - 0xEEA7ABA1 ^0x2FBE5551
{
	Hash scenarioPointType;

	if (iLocal_49 == 0)
	{
		scenarioPointType = TASK::_GET_SCENARIO_POINT_TYPE(uParam0->f_1);
		iLocal_49 = func_6(scenarioPointType);
		return false;
	}

	return true;
}

void func_4() // Position - 0xBF Hash - 0x3A94FF69 ^0xA2BA0094
{
	int i;
	int num;
	int j;
	BOOL isPedOnMount;
	Ped mount;
	int k;

	uLocal_13.f_32 = NETWORK::GET_CLOUD_TIME_AS_INT();

	for (i = 0; i <= 2; i = i + 1)
	{
		num = i;
	
		if (!func_7(num))
			return;
	
		if (func_8(Global_33, uLocal_13[i /*10*/].f_1[2], true, 0))
		{
			for (j = 3; j <= 5; j = j + 1)
			{
				if (func_8(Global_33, uLocal_13[i /*10*/].f_1[j], true, 0))
				{
					uLocal_13.f_31 = j;
					isPedOnMount = PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID());
				
					if (isPedOnMount)
						mount = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
				
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) || isPedOnMount && ENTITY::IS_ENTITY_IN_WATER(mount))
						if (!func_9())
							func_10(1);
					else if (func_9())
						func_10(0);
				}
				else if (func_9() && uLocal_13.f_31 == j)
				{
					func_10(0);
				}
			}
		}
	
		switch (uLocal_13[i /*10*/])
		{
			case 0:
				func_11(&uLocal_13[i /*10*/], 1);
				break;
		
			case 1:
				STREAMING::REQUEST_PTFX_ASSET();
			
				if (!STREAMING::HAS_PTFX_ASSET_LOADED())
					return;
			
				func_11(&uLocal_13[i /*10*/], 2);
				break;
		
			case 2:
				for (k = 0; k <= 5; k = k + 1)
				{
					if (!func_13(&uLocal_13[i /*10*/].f_1[k], func_12(num, k)))
						return;
				}
			
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_13[i /*10*/].f_8))
					uLocal_13[i /*10*/].f_8 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("ent_amb_steam_geyser", func_14(num), 0f, 0f, 0f, 1065353216, false, false, false, false);
			
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_13[i /*10*/].f_8))
					return;
			
				if (func_11(&uLocal_13[i /*10*/], func_15(num)))
					func_16(num, uLocal_13[i /*10*/]);
				break;
		
			case 3:
			case 4:
			case 5:
			case 6:
				func_17(num);
			
				if (func_11(&uLocal_13[i /*10*/], func_15(num)))
					func_16(num, uLocal_13[i /*10*/]);
				break;
		
			case 7:
				break;
		}
	}

	return;
}

void func_5() // Position - 0x2D1 Hash - 0x8BD0CBA1 ^0x221A9549
{
	int i;
	int j;

	for (i = 0; i <= 2; i = i + 1)
	{
		for (j = 0; j <= 5; j = j + 1)
		{
			func_18(&uLocal_13[i /*10*/].f_1[j]);
		}
	}

	EVENT::REMOVE_SHOCKING_EVENT(uLocal_13.f_33);
	return;
}

int func_6(Hash hParam0) // Position - 0x316 Hash - 0xE65A3A10 ^0x8E4B9AA3
{
	switch (hParam0)
	{
		case joaat("WB_DISCO_GEYSER"):
			return 1351526287;
	
		default:
		
	}

	return 0;
}

BOOL func_7(int iParam0) // Position - 0x335 Hash - 0x7234A7DD ^0x7234A7DD
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			return true;
	
		case 2:
			return true;
	}

	return false;
}

BOOL func_8(Ped pedParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0x36D Hash - 0x6735ACA9 ^0xD6205CC6
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, bParam2, iParam3);
}

BOOL func_9() // Position - 0x3A3 Hash - 0xC7A0A0FD ^0xFFB17F52
{
	if (func_19())
		return false;

	return Global_1956875.f_1431.f_96 == 0;
}

void func_10(int iParam0) // Position - 0x3C1 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1956875.f_1431 = iParam0;
	return;
}

BOOL func_11(var uParam0, int iParam1) // Position - 0x3D2 Hash - 0x7D63344 ^0x7D63344
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		return true;
	}

	return false;
}

struct<11> func_12(int iParam0, int iParam1) // Position - 0x3EC Hash - 0xE3657618 ^0xE0EDA566
{
	var unk;

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					unk = { 224.44362f, 1906.5245f, 207.20734f };
					unk.f_3 = { 0f, 0f, 0f };
					unk.f_6 = { 2.5f, 2.5f, 4f };
					unk.f_9 = "DISCO_GEYSER_KNOCK_BACK";
					unk.f_10 = joaat("volCylinder");
					break;
			
				case 1:
					unk = { 224.43282f, 1906.6709f, 203.57024f };
					unk.f_3 = { 0f, 0f, 0f };
					unk.f_6 = { 1.25f, 1.25f, 3f };
					unk.f_9 = "DISCO_GEYSER_KILL_PLAYER";
					unk.f_10 = joaat("volCylinder");
					break;
			
				case 2:
					unk = { 224.53282f, 1922.5292f, 203.57024f };
					unk.f_3 = { 0f, 0f, 0f };
					unk.f_6 = { 40f, 40f, 25f };
					unk.f_9 = "DISCO_GEYSER_LOCATION1";
					unk.f_10 = joaat("volCylinder");
					break;
			
				case 3:
					unk = { 251.9829f, 1909.1924f, 204.0304f };
					unk.f_3 = { 0f, 0f, 0f };
					unk.f_6 = { 7f, 7f, 10f };
					unk.f_9 = "DISCO_GEYSER_SMALL_SPRING";
					unk.f_10 = joaat("volCylinder");
					break;
			
				case 4:
					unk = { 234.7751f, 1939.7185f, 203.83307f };
					unk.f_3 = { 0f, 0f, 0f };
					unk.f_6 = { 18f, 18f, 10f };
					unk.f_9 = "DISCO_GEYSER_LARGE_SPRING";
					unk.f_10 = joaat("volCylinder");
					break;
			
				case 5:
					unk = { 197.23544f, 1911.4867f, 203.83307f };
					unk.f_3 = { 0f, 0f, 0f };
					unk.f_6 = { 8f, 8f, 10f };
					unk.f_9 = "DISCO_GEYSER_ODD_SHAPED_SPING";
					unk.f_10 = joaat("volCylinder");
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					unk = { 191.66599f, 1831.29f, 202.46141f };
					unk.f_3 = { 0f, 0f, 0f };
					unk.f_6 = { 2.5f, 2.5f, 4f };
					unk.f_9 = "DISCO_GEYSER_KNOCK_BACK";
					unk.f_10 = joaat("volCylinder");
					break;
			
				case 1:
					unk = { 191.76599f, 1831.39f, 198.46141f };
					unk.f_3 = { 0f, 0f, 0f };
					unk.f_6 = { 1.25f, 1.25f, 3f };
					unk.f_9 = "DISCO_GEYSER_KILL_PLAYER";
					unk.f_10 = joaat("volCylinder");
					break;
			
				case 2:
					unk = { 188.2542f, 1819.4564f, 198.46141f };
					unk.f_3 = { 0f, 0f, 0f };
					unk.f_6 = { 28f, 28f, 25f };
					unk.f_9 = "DISCO_GEYSER_LOCATION2";
					unk.f_10 = joaat("volCylinder");
					break;
			
				case 3:
					unk = { 173.5744f, 1836.1235f, 200.02051f };
					unk.f_3 = { 0f, 0f, 0f };
					unk.f_6 = { 4f, 4f, 10f };
					unk.f_9 = "DISCO_GEYSER_SMALL_SPRING";
					unk.f_10 = joaat("volCylinder");
					break;
			
				case 4:
					unk = { 176.46878f, 1813.2474f, 200.01965f };
					unk.f_3 = { 0f, 0f, 0f };
					unk.f_6 = { 12f, 12f, 10f };
					unk.f_9 = "DISCO_GEYSER_LARGE_SPRING";
					unk.f_10 = joaat("volCylinder");
					break;
			
				case 5:
					unk = { 208.21832f, 1821.6113f, 200.01965f };
					unk.f_3 = { 0f, 0f, 0f };
					unk.f_6 = { 5.5f, 5.5f, 10f };
					unk.f_9 = "DISCO_GEYSER_ODD_SHAPED_SPING";
					unk.f_10 = joaat("volCylinder");
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					unk = { 129.10696f, 1878.3724f, 201.1505f };
					unk.f_3 = { 0f, 0f, 0f };
					unk.f_6 = { 2.5f, 2.5f, 4f };
					unk.f_9 = "DISCO_GEYSER_KNOCK_BACK";
					unk.f_10 = joaat("volCylinder");
					break;
			
				case 1:
					unk = { 129.10696f, 1878.3724f, 198.1505f };
					unk.f_3 = { 0f, 0f, 0f };
					unk.f_6 = { 1.25f, 1.25f, 3f };
					unk.f_9 = "DISCO_GEYSER_KILL_PLAYER";
					unk.f_10 = joaat("volCylinder");
					break;
			
				case 2:
					unk = { 139.02994f, 1875.5708f, 198.1505f };
					unk.f_3 = { 0f, 0f, 0f };
					unk.f_6 = { 25f, 25f, 25f };
					unk.f_9 = "DISCO_GEYSER_LOCATION3";
					unk.f_10 = joaat("volCylinder");
					break;
			
				case 3:
					unk = { 125.80968f, 1865.035f, 200.31738f };
					unk.f_3 = { 0f, 0f, 0f };
					unk.f_6 = { 2.5f, 2.5f, 10f };
					unk.f_9 = "DISCO_GEYSER_SMALL_SPRING";
					unk.f_10 = joaat("volCylinder");
					break;
			
				case 4:
					unk = { 143.73712f, 1866.6562f, 200.21986f };
					unk.f_3 = { 0f, 0f, 0f };
					unk.f_6 = { 9f, 9f, 10f };
					unk.f_9 = "DISCO_GEYSER_LARGE_SPRING";
					unk.f_10 = joaat("volCylinder");
					break;
			
				case 5:
					unk = { 136.35904f, 1890.5602f, 200.21986f };
					unk.f_3 = { 0f, 0f, 0f };
					unk.f_6 = { 4f, 4f, 10f };
					unk.f_9 = "DISCO_GEYSER_ODD_SHAPED_SPING";
					unk.f_10 = joaat("volCylinder");
					break;
			}
			break;
	}

	return unk;
}

BOOL func_13(var uParam0, Vector3 vParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x938 Hash - 0xC822A061 ^0xC4A17121
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
		*uParam0 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(vParam1.f_10, vParam1, vParam1.f_3, vParam1.f_6, vParam1.f_9);

	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
		return false;

	return true;
}

Vector3 func_14(int iParam0) // Position - 0x97A Hash - 0x2C1A0145 ^0x2C1A0145
{
	switch (iParam0)
	{
		case 0:
			return 224.44362f, 1906.5245f, 206.08434f;
	
		case 1:
			return 191.66599f, 1831.29f, 200.46141f;
	
		case 2:
			return 129.10696f, 1878.3724f, 200.1505f;
	}

	return 0f, 0f, 0f;
}

int func_15(int iParam0) // Position - 0x9DE Hash - 0x8D558926 ^0x8D558926
{
	if (func_20(iParam0))
		return 3;

	if (func_21(iParam0))
		return 4;

	if (func_22(iParam0))
		return 5;

	if (func_23(iParam0))
		return 6;

	return 2;
}

void func_16(int iParam0, int iParam1) // Position - 0xA1B Hash - 0x5E9A073F ^0xF8557FD1
{
	switch (iParam1)
	{
		case 3:
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_13[iParam0 /*10*/].f_8))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_13[iParam0 /*10*/].f_8, "Steam", 0.25f, false);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_13[iParam0 /*10*/].f_8, "Erupt", 0f, false);
			
				if (uLocal_13.f_33 != 0)
				{
					EVENT::REMOVE_SHOCKING_EVENT(uLocal_13.f_33);
					uLocal_13.f_33 = 0;
				}
			
				uLocal_13[iParam0 /*10*/].f_9 = 0;
			}
			break;
	
		case 4:
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_13[iParam0 /*10*/].f_8))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_13[iParam0 /*10*/].f_8, "Steam", 1f, false);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_13[iParam0 /*10*/].f_8, "Erupt", 0f, false);
			
				if (uLocal_13.f_33 != 0)
				{
					EVENT::REMOVE_SHOCKING_EVENT(uLocal_13.f_33);
					uLocal_13.f_33 = 0;
				}
			
				uLocal_13[iParam0 /*10*/].f_9 = 0;
			}
			break;
	
		case 5:
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_13[iParam0 /*10*/].f_8))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_13[iParam0 /*10*/].f_8, "Steam", 0.5f, false);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_13[iParam0 /*10*/].f_8, "Erupt", 1f, false);
			
				if (uLocal_13.f_33 == 0)
					uLocal_13.f_33 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_ALARMING_NEW"), func_14(iParam0), -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 3, 1);
			
				if (ENTITY::DOES_ENTITY_EXIST(PED::GET_MOUNT(Global_33)) && !ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(Global_33)))
					PED::_0x23BDE06596A22CEC(PED::GET_MOUNT(Global_33), 1, 0.15f, 0);
			
				PED::_0x23BDE06596A22CEC(Global_33, 1, 1f, 0);
				uLocal_13[iParam0 /*10*/].f_9 = 0;
			}
			break;
	
		case 6:
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_13[iParam0 /*10*/].f_8))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_13[iParam0 /*10*/].f_8, "Steam", 0.75f, false);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_13[iParam0 /*10*/].f_8, "Erupt", 1f, false);
			
				if (uLocal_13.f_33 == 0)
					uLocal_13.f_33 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_ALARMING_NEW"), func_14(iParam0), -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 3, 1);
			
				if (ENTITY::DOES_ENTITY_EXIST(PED::GET_MOUNT(Global_33)) && !ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(Global_33)))
					PED::_0x23BDE06596A22CEC(PED::GET_MOUNT(Global_33), 1, 0.15f, 0);
			
				PED::_0x23BDE06596A22CEC(Global_33, 1, 1f, 0);
				uLocal_13[iParam0 /*10*/].f_9 = 0;
			}
			break;
	}

	return;
}

void func_17(int iParam0) // Position - 0xC51 Hash - 0xFE16F491 ^0xB15C5D25
{
	Vector3 vector;
	var entityCoords;
	var unk5;

	if (uLocal_13[iParam0 /*10*/].f_9)
		return;

	if (!VOLUME::DOES_VOLUME_EXIST(uLocal_13[iParam0 /*10*/].f_1[0]))
		return;

	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_33, uLocal_13[iParam0 /*10*/].f_1[0], true, 0))
		return;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(Global_33, true, false) };
	unk5 = { func_14(iParam0) };
	unk5.f_2 = entityCoords.f_2;
	vector = { entityCoords - unk5 };
	vector = { func_24(vector) };
	PED::SET_PED_TO_RAGDOLL_WITH_FALL(Global_33, 3000, 5000, 0, vector, 204f, 0f, 0f, 0f, 0f, 0f, 0f);
	ENTITY::APPLY_FORCE_TO_ENTITY(Global_33, 1, vector * { 6f, 6f, 6f }, 0f, 0f, 0f, 0, false, false, true, false, true);
	uLocal_13[iParam0 /*10*/].f_9 = 1;
	return;
}

void func_18(var uParam0) // Position - 0xD0F Hash - 0xBC16CD98 ^0xD54744FF
{
	if (VOLUME::DOES_VOLUME_EXIST(*uParam0))
		VOLUME::DELETE_VOLUME(*uParam0);

	return;
}

BOOL func_19() // Position - 0xD28 Hash - 0xA84EDD52 ^0x62087878
{
	return Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE");
}

BOOL func_20(int iParam0) // Position - 0xD4D Hash - 0x9798074 ^0xEB6BE06A
{
	int num;

	num = uLocal_13.f_32 % func_25(iParam0);

	if (num >= 0 && num < func_26(iParam0))
		return true;

	return false;
}

BOOL func_21(int iParam0) // Position - 0xD7C Hash - 0x3D91E1DC ^0xC8D1FCCE
{
	int num;

	num = uLocal_13.f_32 % func_25(iParam0);

	if (num >= func_26(iParam0) && num < func_26(iParam0) + func_27(iParam0))
		return true;

	return false;
}

BOOL func_22(int iParam0) // Position - 0xDB7 Hash - 0x8F56DC63 ^0xA2E93968
{
	int num;

	num = uLocal_13.f_32 % func_25(iParam0);

	if (num >= func_26(iParam0) + func_27(iParam0) && num < func_26(iParam0) + func_27(iParam0) + func_28(iParam0))
		return true;

	return false;
}

BOOL func_23(int iParam0) // Position - 0xE00 Hash - 0x12A08074 ^0x62DD09DD
{
	int num;

	num = uLocal_13.f_32 % func_25(iParam0);

	if (num >= func_26(iParam0) + func_27(iParam0) + func_28(iParam0) && num < func_26(iParam0) + func_27(iParam0) + func_28(iParam0) + func_29(iParam0))
		return true;

	return false;
}

Vector3 func_24(float fParam0, var uParam1, var uParam2) // Position - 0xE57 Hash - 0xFB6A39D2 ^0x80C9C759
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

int func_25(int iParam0) // Position - 0xE96 Hash - 0x8DB6E43B ^0x8DB6E43B
{
	return func_26(iParam0) + func_27(iParam0) + func_28(iParam0) + func_29(iParam0);
}

int func_26(int iParam0) // Position - 0xEB9 Hash - 0x994060E1 ^0x994060E1
{
	switch (iParam0)
	{
		case 0:
			return 30;
	
		case 1:
			return 42;
	
		case 2:
			return 57;
	
		default:
		
	}

	return 0;
}

int func_27(int iParam0) // Position - 0xEEB Hash - 0xBDFCC159 ^0xBDFCC159
{
	switch (iParam0)
	{
		case 0:
			return 15;
	
		case 1:
			return 12;
	
		case 2:
			return 7;
	
		default:
		
	}

	return 0;
}

int func_28(int iParam0) // Position - 0xF1C Hash - 0x77283EFD ^0x77283EFD
{
	switch (iParam0)
	{
		case 0:
			return 4;
	
		case 1:
			return 3;
	
		case 2:
			return 2;
	
		default:
		
	}

	return 0;
}

int func_29(int iParam0) // Position - 0xF4B Hash - 0x5A8F1108 ^0x5A8F1108
{
	switch (iParam0)
	{
		case 0:
			return 3;
	
		case 1:
			return 5;
	
		case 2:
			return 7;
	
		default:
		
	}

	return 0;
}

