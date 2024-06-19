#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	Entity eLocal_2 = 0;
	Vehicle veLocal_3 = 0;
	Entity eLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	BOOL bLocal_11 = 0;
	int iLocal_12 = 0;
	Entity eScriptParam_0 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x6F2EDB3 ^0x89D23B9B
{
	uLocal_5 = { 2941.7922f, 1377.9688f, 43.1f };
	uLocal_8 = { 2314.0107f, -1512.9186f, 44.9053f };
	iLocal_12 = -1;
	eLocal_2 = eScriptParam_0;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	while (!func_2())
	{
		BUILTIN::WAIT(0);
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_1() // Position - 0x5C Hash - 0x23394F4A ^0x3B77881
{
	int i;

	func_3(7, 512);

	if (bLocal_11)
		func_4(7);

	for (i = 0; i <= 4; i = i + 1)
	{
		func_3(i, 16384);
	}

	return true;
}

BOOL func_2() // Position - 0x93 Hash - 0x438DC293 ^0x438DC293
{
	int i;
	int junctionIndex;
	float num;

	if (iLocal_0 > 0 && iLocal_0 < 6)
		if (func_5())
			iLocal_0 = 6;

	switch (iLocal_0)
	{
		case 0:
			if (!func_6())
			{
				iLocal_0 = 6;
				return false;
			}
		
			for (i = 0; i <= 4; i = i + 1)
			{
				func_4(i);
				func_7(i, 16384);
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(eLocal_2))
			{
				iLocal_0 = 6;
				return false;
			}
		
			if (!VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[7 /*373*/].f_1))
			{
				iLocal_0 = 6;
				return false;
			}
		
			if (func_8(7, 2))
			{
				iLocal_0 = 6;
				return false;
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(veLocal_3))
			{
				veLocal_3 = VEHICLE::_GET_TRAIN_VEHICLE_FROM_TRACK_INDEX(Global_1425371[7 /*373*/].f_1);
				return false;
			}
		
			iLocal_12 = AUDIO::GET_SOUND_ID();
			func_9(eLocal_2, false, iLocal_12);
			iLocal_1 = 2;
			iLocal_0 = 1;
			break;
	
		case 1:
			func_9(eLocal_2, false, iLocal_12);
		
			if (func_10(veLocal_3, Global_35, true) < 2500f)
			{
				if (VEHICLE::_GET_TRAIN_TRACK_JUNCTION_AT_COORDS(joaat("trains_intersection1_ann"), 2940.988f, 1374.5f, 43.1838f, &junctionIndex))
					VEHICLE::_0x3ABFA128F5BF5A70(joaat("trains_intersection1_ann"), junctionIndex, true);
			
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(veLocal_3, true);
				VEHICLE::_0xA7966807953A18EE(Global_1425371[7 /*373*/].f_1, 0.5f);
				VEHICLE::_0x15206E88FF7617DF(Global_1425371[7 /*373*/].f_1, 0.5f);
				VEHICLE::_TRIGGER_TRAIN_WHISTLE(veLocal_3, "DANGER", true, false);
				eLocal_4 = VEHICLE::GET_TRAIN_CARRIAGE(veLocal_3, iLocal_1);
				func_7(7, 512);
				bLocal_11 = true;
				iLocal_0 = 2;
			}
			break;
	
		case 2:
			func_9(eLocal_2, false, iLocal_12);
		
			if (!ENTITY::DOES_ENTITY_EXIST(eLocal_4))
			{
				VEHICLE::_TRIGGER_TRAIN_WHISTLE(veLocal_3, "ACKNOWLEDGE", true, false);
				VEHICLE::_0x15206E88FF7617DF(Global_1425371[7 /*373*/].f_1, func_11(0));
				VEHICLE::_SET_TRAIN_STOPS_FOR_STATIONS(veLocal_3, false);
				func_12();
				func_3(7, 512);
				iLocal_0 = 4;
				return false;
			}
		
			if (func_13(eLocal_4, uLocal_5, true) < 0.25f)
			{
				VEHICLE::_0x15206E88FF7617DF(Global_1425371[7 /*373*/].f_1, 0f);
				VEHICLE::_TRIGGER_TRAIN_WHISTLE(veLocal_3, "ACKNOWLEDGE", true, false);
				iLocal_0 = 3;
			}
			break;
	
		case 3:
			num = func_9(eLocal_2, true, iLocal_12);
		
			if (num >= 0.999f)
			{
				VEHICLE::_0x15206E88FF7617DF(Global_1425371[7 /*373*/].f_1, 0.5f);
				VEHICLE::_TRIGGER_TRAIN_WHISTLE(veLocal_3, "DANGER", true, false);
				iLocal_1 = iLocal_1 + 1;
				eLocal_4 = VEHICLE::GET_TRAIN_CARRIAGE(veLocal_3, iLocal_1);
				iLocal_0 = 2;
			}
			break;
	
		case 4:
			if (func_13(veLocal_3, uLocal_8, true) < 160000f)
			{
				VEHICLE::_0x15206E88FF7617DF(Global_1425371[7 /*373*/].f_1, 5f);
				iLocal_0 = 5;
			}
			break;
	
		case 5:
			if (func_13(veLocal_3, uLocal_8, true) < 1f)
			{
				VEHICLE::_0x15206E88FF7617DF(Global_1425371[7 /*373*/].f_1, 0f);
				iLocal_0 = 6;
			}
			break;
	
		case 6:
			if (func_5())
				if (func_1())
					return true;
			break;
	}

	return false;
}

void func_3(int iParam0, BOOL bParam1) // Position - 0x34C Hash - 0x1A79E98B ^0x1A79E98B
{
	if (!func_14(iParam0))
		return;

	Global_40.f_11029[iParam0 /*5*/] = Global_40.f_11029[iParam0 /*5*/] - Global_40.f_11029[iParam0 /*5*/] && bParam1;
	return;
}

int func_4(int iParam0) // Position - 0x383 Hash - 0x781E8327 ^0x9B5B7D3D
{
	if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1))
	{
		VEHICLE::_0xA230A5DDE12ED374(Global_1425371[iParam0 /*373*/].f_1);
		Global_1425371[iParam0 /*373*/].f_1 = 0;
	}

	return 1;
}

BOOL func_5() // Position - 0x3B9 Hash - 0x7E9E524D ^0xD33892C1
{
	if (func_15(0, false, true))
		return true;

	if (!VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[7 /*373*/].f_1))
		return true;

	if (func_8(7, 2))
		return true;

	if (!ENTITY::DOES_ENTITY_EXIST(veLocal_3))
		return true;

	return false;
}

BOOL func_6() // Position - 0x401 Hash - 0xDC539B2E ^0xDC539B2E
{
	int i;

	if (func_15(0, false, true))
		return false;

	if (func_16(54) || func_17(54) || func_18(54))
		return false;

	if (func_19(69, false) || func_20(69) || func_21(69))
		return false;

	if (func_22(0, 2))
		return false;

	for (i = 0; i <= 4; i = i + 1)
	{
		if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[i /*373*/].f_1))
			if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::_GET_TRAIN_VEHICLE_FROM_TRACK_INDEX(Global_1425371[i /*373*/].f_1)))
				return false;
	}

	return true;
}

void func_7(int iParam0, BOOL bParam1) // Position - 0x4AE Hash - 0x9A8E96E6 ^0x9A8E96E6
{
	if (!func_14(iParam0))
		return;

	Global_40.f_11029[iParam0 /*5*/] = Global_40.f_11029[iParam0 /*5*/] || bParam1;
	return;
}

BOOL func_8(int iParam0, BOOL bParam1) // Position - 0x4DA Hash - 0xA750EBE5 ^0xA750EBE5
{
	if (!func_14(iParam0))
		return false;

	return Global_40.f_11029[iParam0 /*5*/] && bParam1 != false;
}

float func_9(Entity eParam0, BOOL bParam1, int iParam2) // Position - 0x4FF Hash - 0x7EB48607 ^0xB1E0C571
{
	float entityAnimCurrentTime;
	var entityCoords;

	entityAnimCurrentTime = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(eParam0, "props_misc@annesburg_coal", "annchute01_full");

	if (bParam1)
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(eParam0, true, false) };
		ENTITY::_SET_ENTITY_ANIM_SPEED(eParam0, "props_misc@annesburg_coal", "annchute01_full", 1.5f);
	
		if (entityAnimCurrentTime >= 0.125f && entityAnimCurrentTime < 0.21f)
		{
			GRAPHICS::_0x4FB67D172C4476F3(eParam0, "AMB_ANN_COAL_CHUTE_DIVE", "EMIT", 1f);
			func_23(iParam2, entityCoords);
		}
		else if (entityAnimCurrentTime >= 0.485f && entityAnimCurrentTime < 0.52f)
		{
			GRAPHICS::_0x4FB67D172C4476F3(eParam0, "AMB_ANN_COAL_CHUTE", "EMIT", 1f);
			func_23(iParam2, entityCoords);
		}
		else if (entityAnimCurrentTime >= 0.64f && entityAnimCurrentTime < 0.73f)
		{
			GRAPHICS::_0x4FB67D172C4476F3(eParam0, "AMB_ANN_COAL_CHUTE_DIVE", "EMIT", 1f);
			func_23(iParam2, entityCoords);
		}
		else
		{
			GRAPHICS::_0x4FB67D172C4476F3(eParam0, "AMB_ANN_COAL_CHUTE", "EMIT", 0f);
			GRAPHICS::_0x4FB67D172C4476F3(eParam0, "AMB_ANN_COAL_CHUTE_DIVE", "EMIT", 0f);
			func_24(iParam2);
		}
	}
	else
	{
		if (entityAnimCurrentTime != 0f)
		{
			ENTITY::_SET_ENTITY_ANIM_CURRENT_TIME(eParam0, "props_misc@annesburg_coal", "annchute01_full", 0f);
			ENTITY::_SET_ENTITY_ANIM_SPEED(eParam0, "props_misc@annesburg_coal", "annchute01_full", 0f);
		}
	
		GRAPHICS::_0x4FB67D172C4476F3(eParam0, "AMB_ANN_COAL_CHUTE", "EMIT", 0f);
		GRAPHICS::_0x4FB67D172C4476F3(eParam0, "AMB_ANN_COAL_CHUTE_DIVE", "EMIT", 0f);
		func_24(iParam2);
		entityAnimCurrentTime = 0f;
	}

	return entityAnimCurrentTime;
}

float func_10(Vehicle veParam0, Ped pedParam1, BOOL bParam2) // Position - 0x636 Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(veParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false));

	return func_25(ENTITY::GET_ENTITY_COORDS(veParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false));
}

float func_11(int iParam0) // Position - 0x68D Hash - 0x83D20521 ^0x83D20521
{
	switch (iParam0)
	{
		case 0:
			return 11f;
	
		case 1:
			return 11f;
	
		case 2:
			return 11f;
	
		case 3:
			return 11f;
	
		case 4:
			return 11f;
	
		case 5:
			return 0f;
	
		case 6:
			return 0f;
	
		case 7:
			return 0f;
	
		case 8:
			return 3.5f;
	
		case 9:
			return 3.5f;
	
		case 10:
			return 3.5f;
	
		case 11:
			return 3.5f;
	
		case 12:
			return 3.5f;
	
		default:
		
	}

	return 5f;
}

void func_12() // Position - 0x748 Hash - 0xD9B927EA ^0x6AA49D9E
{
	int junctionIndex;
	Hash trainTrack;

	junctionIndex = 0;
	trainTrack = joaat("freight_group");

	if (VEHICLE::_GET_TRAIN_TRACK_JUNCTION_AT_COORDS(trainTrack, 2855.288f, -1314.8256f, 45.0838f, &junctionIndex))
		VEHICLE::_0x3ABFA128F5BF5A70(trainTrack, junctionIndex, true);

	junctionIndex = 0;
	trainTrack = joaat("trains_nb1");

	if (VEHICLE::_GET_TRAIN_TRACK_JUNCTION_AT_COORDS(trainTrack, 2748.4f, -1434.3f, 45f, &junctionIndex))
		VEHICLE::_0x3ABFA128F5BF5A70(trainTrack, junctionIndex, true);

	junctionIndex = 0;
	trainTrack = joaat("trains_nb1");

	if (VEHICLE::_GET_TRAIN_TRACK_JUNCTION_AT_COORDS(trainTrack, 2624.2f, -1477.2f, 45f, &junctionIndex))
		VEHICLE::_0x3ABFA128F5BF5A70(trainTrack, junctionIndex, true);

	junctionIndex = 0;
	trainTrack = joaat("freight_group");

	if (VEHICLE::_GET_TRAIN_TRACK_JUNCTION_AT_COORDS(trainTrack, 2520.5508f, -1482.2212f, 45.2577f, &junctionIndex))
		VEHICLE::_0x3ABFA128F5BF5A70(trainTrack, junctionIndex, false);

	return;
}

float func_13(Vehicle veParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x804 Hash - 0x1A58F423 ^0x2317B76D
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(veParam0))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(veParam0, true, false) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(veParam0, false, false) };

	if (bParam4)
		return BUILTIN::VDIST2(entityCoords, vParam1);

	return func_25(entityCoords, vParam1);
}

BOOL func_14(int iParam0) // Position - 0x854 Hash - 0xB32B029D ^0xB32B029D
{
	if (iParam0 <= -1 || iParam0 >= 13)
		return false;

	return true;
}

BOOL func_15(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x873 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_26())
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
		num = func_27(Global_1898164.f_1[0 /*5*/]);
	
		if (func_28(num) && func_29(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_30(Global_1898164.f_1[0 /*5*/]))
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

int func_16(int iParam0) // Position - 0xA77 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return 0;

	return func_31(Global_1835011[iParam0 /*74*/].f_1);
}

int func_17(eStackSize essParam0) // Position - 0xAA3 Hash - 0x1D38F5CA ^0xC923C5D1
{
	eStackSize i;

	if (!func_32(essParam0))
		return 0;

	for (i = 0; i < Global_1879534.f_7300; i = i + 1)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[i /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[i /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[i /*4*/].f_1 /*3*/])
				{
					case -2093459088:
						if (Global_1879534.f_1911[Global_1879534.f_7301.f_2[i /*4*/].f_1 /*3*/].f_2 == essParam0)
							return 1;
						break;
				}
			}
		}
	}

	return 0;
}

BOOL func_18(int iParam0) // Position - 0xB47 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_33(Global_1835011[iParam0 /*74*/].f_1);
}

BOOL func_19(eStackSize essParam0, BOOL bParam1) // Position - 0xB73 Hash - 0xAA3DFEB ^0xAA3DFEB
{
	int i;

	if (func_34() != -1)
		return false;

	for (i = 0; i <= Global_40.f_1094 - 1; i = i + 1)
	{
		if (Global_40.f_450[i] == essParam0)
			if (!bParam1 || Global_1347702[i /*49*/].f_13 & 16384 == 0)
				return true;
	}

	return false;
}

BOOL func_20(int iParam0) // Position - 0xBD0 Hash - 0xAD2044D7 ^0xA119206F
{
	if (func_34() != -1)
		return 0;

	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iParam0 /*49*/].f_42, false) && !func_33(Global_1347702[iParam0 /*49*/].f_15) && !func_35(Global_1347702[iParam0 /*49*/].f_13, 4))
		return 1;

	return 0;
}

BOOL func_21(eStackSize essParam0) // Position - 0xC24 Hash - 0x4F7B6ED9 ^0x9CBC7C7
{
	if (!func_28(essParam0))
		return false;

	if (!func_19(essParam0, false))
		return false;

	if (func_35(Global_1347702[essParam0 /*49*/].f_13, 64))
		return true;

	return false;
}

BOOL func_22(int iParam0, int iParam1) // Position - 0xC61 Hash - 0xEAFDC4D ^0xFF7479F8
{
	int i;

	if (!func_36(iParam0))
		return false;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_40.f_11206[iParam0 /*26*/][i /*5*/].f_3 == iParam1)
			return true;
	}

	return false;
}

void func_23(int iParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0xCA3 Hash - 0x67A306FD ^0xD9EE696
{
	if (iParam0 == -1)
		return;

	if (AUDIO::PREPARE_SOUND("Coal_Fall", "Annesburg_Coal_Chute_Sounds", -2) && AUDIO::_HAS_SOUND_ID_FINISHED(iParam0))
		AUDIO::_PLAY_SOUND_FROM_POSITION_WITH_ID(iParam0, "Coal_Fall", vParam1, "Annesburg_Coal_Chute_Sounds", false, 0, true);

	return;
}

void func_24(int iParam0) // Position - 0xCE2 Hash - 0x34465A46 ^0xAE85167E
{
	if (iParam0 == -1)
		return;

	if (!AUDIO::_HAS_SOUND_ID_FINISHED(iParam0))
		AUDIO::_STOP_SOUND_WITH_ID(iParam0);

	return;
}

float func_25(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0xD03 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

BOOL func_26() // Position - 0xD21 Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_27(int iParam0) // Position - 0xD74 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_30(iParam0))
		return -1;

	return func_38(func_37(iParam0));
}

BOOL func_28(eStackSize essParam0) // Position - 0xD94 Hash - 0x5A094C43 ^0x5A094C43
{
	return essParam0 > -1 && essParam0 < 200;
}

BOOL func_29(int iParam0, int iParam1) // Position - 0xDAA Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_30(int iParam0) // Position - 0xDB9 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_31(int iParam0) // Position - 0xDEC Hash - 0x8EF26C67 ^0x9855652A
{
	int num;

	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
			return 0;
	
		num = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
			return 0;
	
		num = func_39(iParam0);
	}

	if (num == 1)
		return 1;

	if (num == 2)
		return 1;

	return 0;
}

BOOL func_32(int iParam0) // Position - 0xE57 Hash - 0x77BA7B03 ^0x77BA7B03
{
	return iParam0 > -1 && iParam0 <= 80;
}

BOOL func_33(int iParam0) // Position - 0xE6D Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_40(iParam0);
	return num == 3 || num == 4;
}

BOOL func_34() // Position - 0xE8B Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_35(int iParam0, int iParam1) // Position - 0xE99 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_36(int iParam0) // Position - 0xEA8 Hash - 0xDC21AF4A ^0xDC21AF4A
{
	if (iParam0 != -1)
		return true;

	return false;
}

BOOL func_37(int iParam0) // Position - 0xEBB Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_38(BOOL bParam0) // Position - 0xEF9 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

int func_39(int iParam0) // Position - 0xF0C Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_41(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

int func_40(int iParam0) // Position - 0xF4D Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_30(iParam0))
		return -1;

	return func_39(iParam0);
}

int func_41(int iParam0) // Position - 0xF69 Hash - 0x6EC15CF9 ^0xE613EBE0
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

