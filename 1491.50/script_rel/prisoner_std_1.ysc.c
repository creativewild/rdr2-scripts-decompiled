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
	BOOL bLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = -1;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 1097859072;
	var uLocal_35 = 1000;
	var uLocal_36 = 1067450368;
	var uLocal_37 = 5000;
	var uLocal_38 = 42;
	var uLocal_39 = 1103626240;
	var uLocal_40 = 1077936128;
	var uLocal_41 = 1106247680;
	var uLocal_42 = 1103101952;
	var uLocal_43 = 1097859072;
	var uLocal_44 = 1103626240;
	var uLocal_45 = 0;
	Volume volLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = -1;
	var uLocal_58 = 0;
	var uLocal_59 = -1;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = -1;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 1073741824;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 1;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 2;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 570;
	var uLocal_81 = 1065353216;
	var uLocal_82 = -1082130432;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 2;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 570;
	var uLocal_98 = 1065353216;
	var uLocal_99 = -1082130432;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 2;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	int iScriptParam_0 = 0;
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

void main() // Position - 0x0 Hash - 0x36B2008 ^0xEEB96D44
{
	BOOL flag;
	int num;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_47 = iScriptParam_0;
	iLocal_47.f_1 = iScriptParam_0.f_1;
	iLocal_47.f_4 = iScriptParam_0.f_2;
	iLocal_47.f_2 = func_1(iLocal_47.f_4, iLocal_47.f_1);
	iLocal_47.f_7 = Global_40.f_9829[iScriptParam_0 /*4*/].f_3;
	iLocal_47.f_71 = 0;

	if (func_2())
	{
		PED::_RESERVE_AMBIENT_PEDS(1);
	}
	else
	{
		iLocal_47.f_3 = func_3(iLocal_47.f_2);
		iLocal_47.f_71 = 1;
	}

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_4();

	func_5(&(iLocal_47.f_67), false);

	while (true)
	{
		num = func_6(&iLocal_47);
	
		if (func_7(&iLocal_47, num))
			func_4();
	
		if (!iLocal_47.f_71)
		{
			if (PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
			{
				iLocal_47.f_3 = func_8(iLocal_47.f_2, false, false, false, true, true);
				iLocal_47.f_71 = 1;
			}
		}
	
		if (iLocal_47.f_71)
		{
			if (func_9(&(iLocal_47.f_67)) >= 1f)
			{
				if (func_10(iLocal_47.f_3, iLocal_47))
					func_11(&iLocal_47, 2);
			
				flag = true;
				func_12(&(iLocal_47.f_67));
			}
		
			switch (num)
			{
				case 0:
					WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_47.f_3, true, true);
				
					if (func_13(iLocal_47, 128))
					{
						if (iLocal_47.f_7 != 2)
						{
						}
						else
						{
							PED::REMOVE_TAG_FROM_META_PED(iLocal_47.f_3, joaat("eyewear"), 1);
						}
					
						func_14(iLocal_47.f_3, 1, true);
					}
				
					if (func_15(iLocal_47.f_7) > 0)
					{
						PED::SET_PED_CONFIG_FLAG(iLocal_47.f_3, 130, true);
						func_16(iLocal_47, 4);
						func_17(iLocal_47, 8);
					}
				
					func_11(&iLocal_47, 1);
					break;
			
				case 1:
					func_18(&iLocal_47);
					PED::SET_PED_RESET_FLAG(iLocal_47.f_3, 184, true);
					break;
			
				case 2:
					if (!flag)
						func_10(iLocal_47.f_3, iLocal_47);
					break;
			
				default:
					func_4();
					break;
			}
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

int func_1(int iParam0, int iParam1) // Position - 0x1AD Hash - 0x25D84CF8 ^0x366468F
{
	int num;

	num = -1;

	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 0:
					num = 281;
					break;
			
				case 1:
					num = 282;
					break;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 0:
					num = 499;
					break;
			
				case 1:
					num = 500;
					break;
			}
			break;
	
		case 38:
			switch (iParam1)
			{
				case 0:
					num = 511;
					break;
			
				case 1:
					num = 512;
					break;
			}
			break;
	
		case 76:
			switch (iParam1)
			{
				case 0:
					num = 25;
					break;
			
				case 1:
					num = 26;
					break;
			}
			break;
	
		case 78:
			switch (iParam1)
			{
				case 0:
					num = 430;
					break;
			
				case 1:
					num = 431;
					break;
			}
			break;
	
		case 105:
			switch (iParam1)
			{
				case 0:
					num = 127;
					break;
			}
			break;
	
		case 115:
			switch (iParam1)
			{
				case 0:
					num = 364;
					break;
			
				case 1:
					num = 363;
					break;
			
				case 2:
					num = 362;
					break;
			
				case 3:
					num = 361;
					break;
			
				case 4:
					num = 360;
					break;
			
				case 5:
					num = 359;
					break;
			}
			break;
	}

	num == -1;
	return num;
}

BOOL func_2() // Position - 0x32A Hash - 0x8835C565 ^0x148D7E93
{
	if (iLocal_47.f_7 == 11 || iLocal_47.f_7 == 13 || iLocal_47.f_7 == 12 || iLocal_47.f_7 == 9)
		return true;

	return false;
}

Ped func_3(int iParam0) // Position - 0x368 Hash - 0x9E175D46 ^0xBCF88463
{
	PersChar persChar;

	persChar = func_19(iParam0);

	if (persChar == 0)
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
}

void func_4() // Position - 0x396 Hash - 0x32ED63DE ^0x554F854B
{
	if (func_2() && iLocal_47.f_71)
		func_20(iLocal_47.f_2, false, true, false, false);

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_5(var uParam0, BOOL bParam1) // Position - 0x3BE Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_21(uParam0))
		func_12(uParam0);

	return;
}

int func_6(var uParam0) // Position - 0x3DE Hash - 0xD73B9827 ^0x6B2CFE8C
{
	return uParam0->f_5;
}

BOOL func_7(var uParam0, int iParam1) // Position - 0x3EA Hash - 0xF0AFC71 ^0xF0B36545
{
	if (iParam1 > 0)
	{
		if (uParam0->f_4 != func_22())
		{
			AUDIO::STOP_PED_SPEAKING(Global_35, false);
			return true;
		}
	}

	if (uParam0->f_71 && PED::IS_PED_INJURED(uParam0->f_3))
	{
		AUDIO::STOP_PED_SPEAKING(Global_35, false);
		return true;
	}

	return false;
}

Ped func_8(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x430 Hash - 0x816A3A36 ^0x24211010
{
	Ped ped;
	PersChar persChar;

	if (!func_23(iParam0, true))
		return 0;

	if (func_25(func_24(iParam0)))
	{
		persChar = func_19(iParam0);
	
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
			return 0;
	
		if (bParam1)
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar))
				PERSCHAR::_REVIVE_PERSCHAR(persChar);
	
		PERSCHAR::_0x6759BEE6762E140B(persChar);
		ped = PERSCHAR::_FORCE_SPAWN_PERSCHAR(persChar, false);
	
		if (!ENTITY::DOES_ENTITY_EXIST(ped))
			return 0;
	}

	if (bParam4 && !func_26(iParam0) && !ENTITY::IS_ENTITY_DEAD(ped))
	{
		PED::SET_PED_CONFIG_FLAG(ped, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ped, true, true);
	}

	func_27(iParam0, true);
	func_28(iParam0);

	if (bParam3)
		func_27(iParam0, 16);

	!bParam2;
	return ped;
}

float func_9(var uParam0) // Position - 0x4ED Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_21(uParam0))
		return uParam0->f_1;

	if (func_29(uParam0))
		return uParam0->f_2;

	return func_30() - uParam0->f_1;
}

BOOL func_10(Ped pedParam0, int iParam1) // Position - 0x522 Hash - 0x24DEFFFD ^0x5BB9D04D
{
	Hash hash;

	hash = Global_1396116.f_98[iParam1 /*2*/];

	if (func_31(hash))
	{
		if (!func_32(pedParam0, 518218985))
			TASK::TASK_SMART_FLEE_COORD(pedParam0, func_33(hash), 100f, -1, 0, 1077936128);
	
		return true;
	}

	return false;
}

void func_11(var uParam0, int iParam1) // Position - 0x56B Hash - 0x62FFBD90 ^0xE99B5AAB
{
	if (uParam0->f_5 != iParam1)
		uParam0->f_5 = iParam1;

	return;
}

void func_12(var uParam0) // Position - 0x582 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_34(uParam0, 0f);
	return;
}

BOOL func_13(int iParam0, int iParam1) // Position - 0x591 Hash - 0x8D310C3C ^0xC693F2C8
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
		return false;

	return func_35(Global_40.f_9829[iParam0 /*4*/].f_2, iParam1);
}

void func_14(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x5C5 Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

int func_15(int iParam0) // Position - 0x5F5 Hash - 0xD85F9884 ^0xD85F9884
{
	switch (iParam0)
	{
		case 1:
			return 0;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 3;
	
		case 5:
			return 3;
	
		case 6:
			return 2;
	
		case 7:
			return 3;
	
		case 8:
			return 3;
	
		case 9:
			return 3;
	
		case 10:
			return 3;
	
		case 11:
			return 3;
	
		case 12:
			return 3;
	
		case 13:
			return 3;
	
		case 14:
			return 3;
	
		case 15:
			return 3;
	
		default:
		
	}

	return 0;
}

void func_16(int iParam0, int iParam1) // Position - 0x69C Hash - 0x5EA34FE1 ^0xDEE8F37E
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
		return;

	func_36(&(Global_40.f_9829[iParam0 /*4*/].f_2), iParam1);
	return;
}

void func_17(int iParam0, int iParam1) // Position - 0x6CF Hash - 0x5EA34FE1 ^0xDEE8F37E
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
		return;

	func_37(&(Global_40.f_9829[iParam0 /*4*/].f_2), iParam1);
	return;
}

void func_18(var uParam0) // Position - 0x702 Hash - 0x15307647 ^0x15307647
{
	var playbackListName;

	if (iLocal_14 == 0)
		func_38(uParam0);

	if (iLocal_14 >= 2)
		func_39(uParam0);

	switch (iLocal_14)
	{
		case 1:
			if (func_13(*uParam0, 4))
			{
				if (!func_13(*uParam0, 8))
				{
					if (func_40(uParam0->f_3, 1))
					{
						func_41(uParam0);
						func_16(*uParam0, 8);
					}
				}
				else if (func_40(uParam0->f_3, 0))
				{
					func_41(uParam0);
				}
				else
				{
					func_42(uParam0);
				}
			}
			else if (!func_13(*uParam0, 1))
			{
				if (func_40(uParam0->f_3, 1))
					if (func_43(uParam0, -1))
						func_16(*uParam0, 1);
			}
			else if (!func_40(uParam0->f_3, 1))
			{
				func_17(*uParam0, 1);
			}
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&playbackListName, "PBL_DIA_0", 16);
		
			if (func_44(uParam0))
			{
				uParam0->f_65 = uParam0->f_65 + 1;
				iLocal_15 = uParam0->f_65 + 2;
			
				if (uParam0->f_65 <= 2)
				{
					TEXT_LABEL_APPEND_INT(&playbackListName, iLocal_15, 16);
					uParam0->f_6 = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@bountyhunting@lemoyneraider@lindsey_cell", 4, &playbackListName, false, true);
					ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_6);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_6, "LINDSEY", uParam0->f_3, 0);
					iLocal_14 = 3;
				}
				else
				{
					iLocal_14 = 7;
				}
			}
			else
			{
				uParam0->f_6 = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@bountyhunting@lemoyneraider@lindsey_cell", 4, "PBL_DIA_01", false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_6);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_6, "LINDSEY", uParam0->f_3, 0);
				iLocal_14 = 3;
			}
			break;
	
		case 3:
			if (func_40(uParam0->f_3, 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_6, "SEATED_BOOL", true, false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_6, "STANDING_BOOL", true, false);
				iLocal_14 = 4;
			}
			break;
	
		case 4:
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_6, false))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_6, "PBL_DIA_01") || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_6, "PBL_DIA_03") || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_6, "PBL_DIA_04"))
				{
					if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_6, "dia_01", true) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_6, "dia_03", true) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_6, "dia_04", true))
					{
						if (ANIMSCENE::GET_ANIM_SCENE_BOOL(uParam0->f_6, "SEATED_BOOL") == true)
							ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_6, "SEATED_BOOL", false, false);
					
						if (ANIMSCENE::GET_ANIM_SCENE_BOOL(uParam0->f_6, "STANDING_BOOL") == true)
							ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_6, "STANDING_BOOL", false, false);
					
						iLocal_14 = 5;
					}
				}
			}
			break;
	
		case 5:
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_6, false))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_6, "PBL_DIA_01") || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_6, "PBL_DIA_03") || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_6, "PBL_DIA_04"))
				{
					if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_6, "seated_base", true) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_6, "standing_base", true))
					{
						if (func_13(*uParam0, 4))
						{
							if (!func_13(*uParam0, 8))
							{
								if (func_40(uParam0->f_3, 1))
								{
									func_41(uParam0);
									func_16(*uParam0, 8);
								}
							}
							else if (func_40(uParam0->f_3, 0))
							{
								func_41(uParam0);
							}
							else
							{
								func_45(uParam0);
								func_42(uParam0);
							}
						}
						else if (!func_13(*uParam0, 1))
						{
							if (func_40(uParam0->f_3, 1))
								if (func_43(uParam0, -1))
									func_16(*uParam0, 1);
						}
						else if (!func_40(uParam0->f_3, 0))
						{
							func_17(*uParam0, 1);
						}
					}
					else if (!func_13(*uParam0, 1))
					{
						if (func_40(uParam0->f_3, 1))
							func_16(*uParam0, 1);
					}
					else if (!func_40(uParam0->f_3, 0))
					{
						func_45(uParam0);
						func_17(*uParam0, 1);
					}
				}
			}
			break;
	
		case 7:
			break;
	}

	return;
}

PersChar func_19(int iParam0) // Position - 0xA92 Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_46(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/].f_1;
}

void func_20(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xAB2 Hash - 0x9D6C88B4 ^0x9D6C88B4
{
	PersChar persChar;
	Ped perscharPedIndex;

	if (!func_46(iParam0))
		return;

	if (!func_47(iParam0, 1))
		return;

	if (!func_47(iParam0, 2))
		return;

	if (!bParam4 && !func_26(iParam0) && func_48(iParam0))
		return;

	func_49(iParam0, 1);
	func_50(iParam0);

	if (func_25(func_24(iParam0)))
	{
		persChar = func_19(iParam0);
	
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
			return;
	
		PERSCHAR::_0xBB68908CD11AEBDC(persChar);
		PERSCHAR::_0xB65E7F733956CF25(persChar);
	
		if (bParam2 && !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar))
			PERSCHAR::_RETASK_PERSISTENT_CHARACTER(persChar);
	
		perscharPedIndex = PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
	
		if (!PED::IS_PED_INJURED(perscharPedIndex))
			PED::SET_PED_CONFIG_FLAG(perscharPedIndex, 171, false);
	
		if (bParam1)
			PERSCHAR::_FORCE_DESPAWN_PERSCHAR(persChar);
	
		func_49(iParam0, 16);
	}

	if (func_47(iParam0, 128) && !bParam3)
		func_51(iParam0, false);

	return;
}

BOOL func_21(var uParam0) // Position - 0xB9E Hash - 0x5001E582 ^0x5001E582
{
	return func_52(*uParam0, 1);
}

eStackSize func_22() // Position - 0xBAE Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_23(int iParam0, BOOL bParam1) // Position - 0xBBC Hash - 0x5C4302E7 ^0x5C4302E7
{
	if (!func_46(iParam0))
		return false;

	if (func_47(iParam0, true) && !func_26(iParam0) && func_48(iParam0))
		return false;

	if (!func_47(iParam0, 2))
		return false;

	if (!bParam1)
		if (!func_53(iParam0, false))
			return false;

	return true;
}

Hash func_24(int iParam0) // Position - 0xC1C Hash - 0xB7A722DE ^0xB7A722DE
{
	if (!func_46(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/];
}

BOOL func_25(Hash hParam0) // Position - 0xC3A Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

BOOL func_26(int iParam0) // Position - 0xC46 Hash - 0x9BC71541 ^0x89F7971
{
	if (!func_46(iParam0))
		return false;

	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_27(int iParam0, BOOL bParam1) // Position - 0xC6B Hash - 0x61515A20 ^0x61515A20
{
	if (func_54() != -1)
		return;

	if (!func_46(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] || bParam1;
	return;
}

void func_28(int iParam0) // Position - 0xC9C Hash - 0x5A948764 ^0xFC1342AE
{
	if (!func_46(iParam0))
		return;

	Global_1895087[iParam0 /*3*/].f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	return;
}

BOOL func_29(var uParam0) // Position - 0xCBF Hash - 0x39705408 ^0x39705408
{
	return func_52(*uParam0, 2);
}

float func_30() // Position - 0xCCF Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_31(Hash hParam0) // Position - 0xD01 Hash - 0x783D8692 ^0xC2190628
{
	func_55(hParam0, false, false);

	if (func_56(hParam0))
		return !OBJECT::IS_DOOR_CLOSED(hParam0);

	return false;
}

BOOL func_32(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0xD29 Hash - 0x37FB14EB ^0x7E496A4A
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

Vector3 func_33(Hash hParam0) // Position - 0xD52 Hash - 0x34D25890 ^0x7B9C5400
{
	if (ENTITY::DOES_ENTITY_EXIST(func_57(hParam0, 0)))
		return ENTITY::GET_ENTITY_COORDS(func_57(hParam0, 0), false, false);

	return 0f, 0f, 0f;
}

void func_34(var uParam0, float fParam1) // Position - 0xD7B Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_30() - fParam1;
	func_58(uParam0, 1);
	func_59(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_35(int iParam0, int iParam1) // Position - 0xDA1 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_36(int iParam0, int iParam1) // Position - 0xDB0 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

void func_37(int iParam0, int iParam1) // Position - 0xDC1 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_38(var uParam0) // Position - 0xDD6 Hash - 0xC38C24DE ^0x82CE3A7A
{
	if (uParam0->f_7 == 9)
	{
		volLocal_46 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2504.735f, -1308.8309f, 49.06328f, 0f, 0f, 0f, 22.436237f, 17.01578f, 3.468709f, "SD Sheriff Office");
		func_60(&uLocal_17);
		iLocal_14 = 2;
	}
	else
	{
		iLocal_14 = 1;
	}

	return;
}

void func_39(var uParam0) // Position - 0xE20 Hash - 0xE1F6EE46 ^0xBDF96D9A
{
	if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_6, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(uParam0->f_6, "PBL_BREAKOUT_SEATED") && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_6, "PBL_BREAKOUT_SEATED"))
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_6, "PBL_BREAKOUT_SEATED");
	
		if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(uParam0->f_6, "PBL_BREAKOUT_STAND") && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_6, "PBL_BREAKOUT_STAND"))
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_6, "PBL_BREAKOUT_STAND");
	}

	if (!bLocal_16)
		if (VOLUME::IS_POINT_IN_VOLUME(volLocal_46, Global_36) && PED::IS_PED_SHOOTING(Global_35) || func_61(uParam0->f_3, 0, &uLocal_17, &uLocal_45, 0, 0))
			bLocal_16 = true;
	else
		func_62(uParam0);

	return;
}

BOOL func_40(Ped pedParam0, int iParam1) // Position - 0xECD Hash - 0xDD93B4F3 ^0x6AEE47CE
{
	float num;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(pedParam0) == Global_1935630.f_5)
		{
			if (iParam1 == 0)
				return true;
		
			num = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(pedParam0, true, false));
		
			if (num < 4f)
				return true;
		}
	}

	return false;
}

void func_41(var uParam0) // Position - 0xF17 Hash - 0x7AB23D16 ^0xB6B36312
{
	var unk;
	var unk4;
	var unk7;
	var unk10;
	var unk13;
	var unk16;

	switch (uParam0->f_8)
	{
		case 0:
			if (func_63(uParam0))
			{
				if (!func_13(*uParam0, 16))
				{
					uParam0->f_65 = 0;
				}
				else if (!func_13(*uParam0, 32))
				{
					uParam0->f_65 = 1;
				}
				else if (!func_13(*uParam0, 64))
				{
					uParam0->f_65 = 2;
				}
				else
				{
					uParam0->f_8 = 8;
					return;
				}
			
				if (uParam0->f_65 < func_15(uParam0->f_7))
				{
					HUD::TEXT_BLOCK_REQUEST(func_64(uParam0->f_7, 1));
					PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 448, true);
					AUDIO::STOP_PED_SPEAKING(Global_35, true);
					uParam0->f_8 = 1;
				}
				else
				{
					uParam0->f_8 = 8;
				}
			}
			break;
	
		case 1:
			if (HUD::TEXT_BLOCK_IS_LOADED(func_64(uParam0->f_7, 1)))
			{
				unk = { func_65(uParam0->f_7, uParam0->f_65, 0) };
				func_66(&Global_1396116, uParam0->f_3, func_64(uParam0->f_7, 0), false);
			
				if (func_67())
					func_66(&Global_1396116, Global_35, "JOHN", false);
				else
					func_66(&Global_1396116, Global_35, "ARTHUR", false);
			
				if (func_68(uParam0->f_7, uParam0->f_65))
				{
					func_45(uParam0);
					uParam0->f_8 = 2;
				}
				else if (MISC::ARE_STRINGS_EQUAL(func_69(unk), ""))
				{
					uParam0->f_8 = 2;
				}
				else if (func_70(&Global_1396116, unk, false, -1, false, false))
				{
					func_45(uParam0);
					uParam0->f_8 = 2;
				}
			}
			break;
	
		case 2:
			if (!func_71(true))
			{
				func_72(&uParam0->f_30[0 /*17*/], "INTERACT_GREET", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, true, 0);
				func_72(&uParam0->f_30[1 /*17*/], "INTERACT_INSULT", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, true, 0);
				uParam0->f_66 = -1;
				uParam0->f_8 = 3;
			}
			break;
	
		case 3:
			if (uParam0->f_66 == -1)
			{
				uParam0->f_66 = func_73(&(uParam0->f_3), &(uParam0->f_9), 7f, &(uParam0->f_30), 0, 1, 1, 0, 2520, 0, 0, 2, -1082130432);
			
				if (uParam0->f_66 == 0)
				{
					func_74(&uParam0->f_30[0 /*17*/], false, false);
					func_74(&uParam0->f_30[1 /*17*/], false, false);
					func_73(&(uParam0->f_3), &(uParam0->f_9), 7f, &(uParam0->f_30), 0, 1, 1, 0, 2520, 0, 0, 2, -1082130432);
					func_45(uParam0);
				}
				else if (uParam0->f_66 == 1)
				{
					func_74(&uParam0->f_30[0 /*17*/], false, false);
					func_74(&uParam0->f_30[1 /*17*/], false, false);
					func_73(&(uParam0->f_3), &(uParam0->f_9), 7f, &(uParam0->f_30), 0, 1, 1, 0, 2520, 0, 0, 2, -1082130432);
					func_45(uParam0);
				}
			}
		
			if (uParam0->f_66 == 0)
				if (func_70(&Global_1396116, func_65(uParam0->f_7, uParam0->f_65, 1), false, -1, false, false))
					uParam0->f_8 = 4;
			else if (uParam0->f_66 == 1)
				if (func_70(&Global_1396116, func_65(uParam0->f_7, uParam0->f_65, 2), false, -1, false, false))
					uParam0->f_8 = 4;
			break;
	
		case 4:
			if (!func_71(true))
			{
				if (uParam0->f_66 == 0)
				{
					unk4 = { func_65(uParam0->f_7, uParam0->f_65, 3) };
				
					if (MISC::ARE_STRINGS_EQUAL(func_69(unk4), ""))
					{
						if (func_75(uParam0))
							uParam0->f_8 = 7;
						else
							uParam0->f_8 = 8;
					
						func_76(&(uParam0->f_3));
						func_77(&(uParam0->f_30), 0, false, true, false);
						uParam0->f_8 = 8;
					}
					else if (func_70(&Global_1396116, unk4, false, -1, false, false))
					{
						uParam0->f_8 = 5;
					}
				}
				else if (uParam0->f_66 == 1)
				{
					unk7 = { func_65(uParam0->f_7, uParam0->f_65, 5) };
				
					if (MISC::ARE_STRINGS_EQUAL(func_69(unk7), ""))
					{
						if (func_75(uParam0))
							uParam0->f_8 = 7;
						else
							uParam0->f_8 = 8;
					
						func_76(&(uParam0->f_3));
						func_77(&(uParam0->f_30), 0, false, true, false);
						uParam0->f_8 = 8;
					}
					else if (func_70(&Global_1396116, unk7, false, -1, false, false))
					{
						uParam0->f_8 = 5;
					}
				}
			}
			break;
	
		case 5:
			if (!func_71(true))
			{
				if (uParam0->f_66 == 0)
				{
					unk10 = { func_65(uParam0->f_7, uParam0->f_65, 4) };
				
					if (MISC::ARE_STRINGS_EQUAL(func_69(unk10), ""))
					{
						if (func_75(uParam0))
							uParam0->f_8 = 7;
						else
							uParam0->f_8 = 8;
					
						func_76(&(uParam0->f_3));
						func_77(&(uParam0->f_30), 0, false, true, false);
					}
					else if (func_70(&Global_1396116, unk10, false, -1, false, false))
					{
						uParam0->f_8 = 6;
					}
				}
				else if (uParam0->f_66 == 1)
				{
					unk13 = { func_65(uParam0->f_7, uParam0->f_65, 6) };
				
					if (MISC::ARE_STRINGS_EQUAL(func_69(unk13), ""))
					{
						if (func_75(uParam0))
							uParam0->f_8 = 7;
						else
							uParam0->f_8 = 8;
					
						func_76(&(uParam0->f_3));
						func_77(&(uParam0->f_30), 0, false, true, false);
					}
					else if (func_70(&Global_1396116, unk13, false, -1, false, false))
					{
						uParam0->f_8 = 6;
					}
				}
			}
			break;
	
		case 6:
			if (!func_71(true))
			{
				if (func_75(uParam0))
					uParam0->f_8 = 7;
				else
					uParam0->f_8 = 8;
			
				func_76(&(uParam0->f_3));
				func_77(&(uParam0->f_30), 0, false, true, false);
			}
			break;
	
		case 7:
			if (func_78(uParam0))
			{
				unk16 = { func_65(uParam0->f_7, uParam0->f_65, 7) };
			
				if (func_70(&Global_1396116, unk16, false, -1, false, false))
					uParam0->f_8 = 8;
			}
			break;
	
		case 8:
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 448, false);
			AUDIO::STOP_PED_SPEAKING(Global_35, false);
			break;
	}

	return;
}

void func_42(var uParam0) // Position - 0x1483 Hash - 0x47563C56 ^0xB40EBCD6
{
	if (uParam0->f_8 == 3)
	{
		func_76(&(uParam0->f_3));
		func_77(&(uParam0->f_30), 0, false, true, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 448, false);
		AUDIO::STOP_PED_SPEAKING(Global_35, false);
	}

	return;
}

BOOL func_43(var uParam0, int iParam1) // Position - 0x14BB Hash - 0xD19A668E ^0x77BB4E10
{
	if (func_71(true))
		return false;

	switch (uParam0->f_7)
	{
		case 1:
			func_79(uParam0->f_3, "NPE_PRIS_GREET", joaat("SPEECH_PARAMS_ADD_BLIP"), 0, 1, 0, 0, 1);
			return true;
	}

	return false;
}

BOOL func_44(var uParam0) // Position - 0x14FE Hash - 0xCD720625 ^0x7AD5E29E
{
	if (func_13(*uParam0, 64))
	{
		uParam0->f_65 = 2;
		return true;
	}
	else if (func_13(*uParam0, 32))
	{
		uParam0->f_65 = 1;
		return true;
	}
	else if (func_13(*uParam0, 16))
	{
		uParam0->f_65 = 0;
		return true;
	}

	return false;
}

void func_45(var uParam0) // Position - 0x154C Hash - 0x727A72BA ^0xDFF642D6
{
	if (uParam0->f_65 == 0)
		func_16(*uParam0, 16);
	else if (uParam0->f_65 == 1)
		func_16(*uParam0, 32);
	else if (uParam0->f_65 == 2)
		func_16(*uParam0, 64);

	return;
}

BOOL func_46(int iParam0) // Position - 0x158D Hash - 0x958B152F ^0x174871D
{
	return iParam0 > -1 && iParam0 < 954;
}

BOOL func_47(int iParam0, BOOL bParam1) // Position - 0x15A4 Hash - 0x3F05A93A ^0x3F05A93A
{
	if (func_54() != -1)
		return false;

	if (!func_46(iParam0))
		return false;

	return Global_24887[iParam0 /*2*/] && bParam1 != false;
}

BOOL func_48(int iParam0) // Position - 0x15D2 Hash - 0xC37911D0 ^0x7051484B
{
	if (!func_46(iParam0))
		return false;

	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_49(int iParam0, BOOL bParam1) // Position - 0x15F6 Hash - 0x452DF11A ^0x452DF11A
{
	if (func_54() != -1)
		return;

	if (!func_46(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] - Global_24887[iParam0 /*2*/] && bParam1;
	return;
}

void func_50(int iParam0) // Position - 0x162F Hash - 0x6CFD5248 ^0x5A80A028
{
	Ped ped;

	if (!func_46(iParam0))
		return;

	ped = func_3(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(ped, false))
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);

	Global_1895087[iParam0 /*3*/].f_2 = 0;
	return;
}

int func_51(int iParam0, BOOL bParam1) // Position - 0x1673 Hash - 0x4B9D82B ^0x1C7581CD
{
	if (!func_46(iParam0))
		return 0;

	if (!func_47(iParam0, 2))
		return 0;

	if (func_24(iParam0) == 0)
		return 1;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_19(iParam0)))
		return 1;

	if (func_47(iParam0, true) && !bParam1)
	{
		func_27(iParam0, 128);
		return 1;
	}

	func_49(iParam0, 129);
	func_50(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_19(iParam0));
	func_80(iParam0, 0);
	return 1;
}

BOOL func_52(int iParam0, int iParam1) // Position - 0x16F6 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_53(int iParam0, BOOL bParam1) // Position - 0x1705 Hash - 0xB10222FA ^0xCD9754C3
{
	if (func_54() != -1)
		return false;

	if (!func_46(iParam0))
		return false;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_19(iParam0)))
		return false;

	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_3(iParam0)))
		return false;

	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_19(iParam0));
}

BOOL func_54() // Position - 0x175D Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

Hash func_55(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x176B Hash - 0xEC5804B5 ^0x15A1D925
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0))
		if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0]) && bParam1)
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		else
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, false, false, 0, 0, false);
	else if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0]) && bParam1)
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(hParam0))
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051081.f_15[0], 0, false);

	if (bParam2)
		OBJECT::_DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED(hParam0, true);

	return hParam0;
}

BOOL func_56(Hash hParam0) // Position - 0x180F Hash - 0xCD60E05 ^0x368E4BC
{
	if (func_81(hParam0))
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0);

	return false;
}

Entity func_57(Hash hParam0, int iParam1) // Position - 0x182A Hash - 0x3D4C4025 ^0x9DFFA56D
{
	Entity entityByDoorhash;

	func_55(hParam0, false, false);

	if (func_56(hParam0))
	{
		entityByDoorhash = ENTITY::_GET_ENTITY_BY_DOORHASH(hParam0, iParam1);
	
		if (ENTITY::DOES_ENTITY_EXIST(entityByDoorhash))
			return entityByDoorhash;
	}

	return 0;
}

void func_58(var uParam0, int iParam1) // Position - 0x1860 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_59(var uParam0, int iParam1) // Position - 0x1871 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_60(int iParam0) // Position - 0x1886 Hash - 0xD2F4094 ^0xD2F4094
{
	func_82(iParam0, false);
	func_83(iParam0, false);
	func_84(iParam0, true);
	func_85(iParam0, true);
	func_86(iParam0, false);
	func_87(iParam0, true);
	func_88(iParam0, true, true, true);
	return;
}

BOOL func_61(Ped pedParam0, Entity eParam1, int iParam2, var uParam3, int iParam4, int iParam5) // Position - 0x18C1 Hash - 0xED93B9E0 ^0x288D4ED6
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();

	if (frameCount > iParam2->f_5)
		func_89(iParam2, true, frameCount);

	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (iParam5 > 0f)
			iParam2->f_12 = iParam5;
		else
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(pedParam0, true, false));
	
		if (!(iParam2->f_1 & 128 != 0))
		{
			if (func_90(pedParam0, iParam2))
			{
				*uParam3 = 128;
				func_91(pedParam0, iParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_27)
		{
			if (!(iParam2->f_1 & 8 != 0))
			{
				if (func_92(pedParam0, iParam2))
				{
					*uParam3 = 8;
					func_91(pedParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_93(pedParam0, eParam1, iParam2))
				{
					*uParam3 = 8;
					func_91(pedParam0, iParam2, *uParam3);
					return true;
				}
			}
		
			if (*iParam2 & 32 != 0)
			{
				if (func_94(pedParam0, iParam2))
				{
					*uParam3 = 64;
					func_91(pedParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1935630.f_26 && func_95(PLAYER::PLAYER_ID(), false, true, iParam2->f_1 & 524288 == 0))
		{
			if (!(iParam2->f_1 & 16384 != 0))
			{
				*uParam3 = 16384;
				func_91(pedParam0, iParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_25)
		{
			if (func_96(iParam2, 1065353216))
			{
				if (!(iParam2->f_1 & 4 != 0))
				{
					if (func_97(Global_35, pedParam0, iParam2))
					{
						*uParam3 = 4;
						func_91(pedParam0, iParam2, *uParam3);
						return true;
					}
				}
			
				if (!(iParam2->f_1 & 256 != 0))
				{
					if (func_98(Global_35, pedParam0, iParam2))
					{
						*uParam3 = 256;
						func_91(pedParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(iParam2->f_1 & 16 != 0))
		{
			if (iParam2->f_5 - Global_1935630.f_29 < 300)
			{
				if (func_99(Global_35, pedParam0, iParam2, false))
				{
					*uParam3 = 16;
					func_91(pedParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_99(Global_35, pedParam0, iParam2, true))
			{
				*uParam3 = 16;
				func_91(pedParam0, iParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_100(pedParam0, iParam2))
				{
					*uParam3 = 32;
					func_91(pedParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (func_101(&pedParam0, iParam2))
				{
					*uParam3 = 4096;
					func_91(pedParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!(iParam2->f_1 & 2 != 0))
			{
				if (func_102(iParam2, 4000))
				{
					if (func_103(pedParam0, Global_1935630.f_41, *iParam2 & 128 != 0, false, *iParam2 & 256 != 0) && func_104(iParam2, pedParam0) && func_105(iParam2, pedParam0))
					{
						*uParam3 = 2;
						func_91(pedParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(iParam2->f_1 & 2 != 0))
		{
			if (iParam2->f_12 < 4f)
			{
				if (func_103(pedParam0, Global_1935630.f_41, *iParam2 & 128 != 0, true, *iParam2 & 256 != 0) && func_104(iParam2, pedParam0) && func_105(iParam2, pedParam0))
				{
					*uParam3 = 2;
					func_91(pedParam0, iParam2, *uParam3);
					return true;
				}
			
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_106(pedParam0, Global_1935630.f_41))
							{
								func_107();
								*uParam3 = 2;
								func_91(pedParam0, iParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (func_106(pedParam0, Global_1935630.f_41))
						{
							func_107();
							*uParam3 = 2;
							func_91(pedParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		
			if (iParam2->f_12 < 10f)
			{
				if (func_108(iParam2, pedParam0) || iParam2->f_9 > 0 && func_109() - iParam2->f_9 < 2000)
				{
					if (PED::IS_PED_RAGDOLL(pedParam0))
					{
						func_107();
						*uParam3 = 2;
						func_91(pedParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_110())
					{
						if (func_106(pedParam0, Global_1935630.f_42))
						{
							func_107();
							*uParam3 = 2;
							func_91(pedParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
	
		if (!(iParam2->f_1 & 1024 != 0))
		{
			if (func_111(iParam2, pedParam0))
			{
				*uParam3 = 1024;
				func_91(pedParam0, iParam2, *uParam3);
				return true;
			}
		}
	
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!(iParam2->f_1 & 2048 != 0))
			{
				if (func_112(pedParam0, eParam1, iParam2))
				{
					*uParam3 = 2048;
					func_91(pedParam0, iParam2, *uParam3);
					return true;
				}
			}
		
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_113(pedParam0, iParam2))
					{
						*uParam3 = 8192;
						func_91(pedParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (*iParam2 & 64 != 0)
			{
				if (func_114(pedParam0, iParam2))
				{
					*uParam3 = 32768;
					func_91(pedParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_115(iParam2, 4000))
				{
					if (func_116(&pedParam0, iParam2))
					{
						*uParam3 = 512;
						func_91(pedParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_117(pedParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					func_91(pedParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!(iParam2->f_1 & 1 != 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		{
			if (func_118(iParam2, pedParam0))
			{
				*uParam3 = 1;
				func_91(pedParam0, iParam2, *uParam3);
				return true;
			}
		}
	}

	return false;
}

void func_62(var uParam0) // Position - 0x1EEA Hash - 0x35A05920 ^0x10D8AC5A
{
	if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_6, false))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_6, "PBL_DIA_01"))
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_6) > 28.9f && ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_6) < 48f)
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_6, "PBL_BREAKOUT_STAND") && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_6, "PBL_BREAKOUT_STAND"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_6, "STANDING_BOOL", true, false);
					ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_6, "PBL_BREAKOUT_STAND", true);
					iLocal_14 = 7;
				}
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_6, "PBL_BREAKOUT_SEATED"))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_6, "PBL_BREAKOUT_SEATED"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_6, "SEATED_BOOL", true, false);
					ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_6, "PBL_BREAKOUT_SEATED", true);
					iLocal_14 = 7;
				}
			}
		}
		else if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_6, "PBL_DIA_03"))
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_6) > 13.67f && ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_6) < 19.7f)
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_6, "PBL_BREAKOUT_STAND") && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_6, "PBL_BREAKOUT_STAND"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_6, "STANDING_BOOL", true, false);
					ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_6, "PBL_BREAKOUT_STAND", true);
					iLocal_14 = 7;
				}
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_6, "PBL_BREAKOUT_SEATED"))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_6, "PBL_BREAKOUT_SEATED"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_6, "SEATED_BOOL", true, false);
					ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_6, "PBL_BREAKOUT_SEATED", true);
					iLocal_14 = 7;
				}
			}
		}
		else if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_6, "PBL_DIA_04"))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_6, "PBL_BREAKOUT_SEATED"))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_6, "SEATED_BOOL", true, false);
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_6, "PBL_BREAKOUT_SEATED", true);
				iLocal_14 = 7;
			}
		}
	}

	return;
}

BOOL func_63(var uParam0) // Position - 0x208E Hash - 0xEDEF0818 ^0x5DCD1BEB
{
	Hash entityModel;
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(uParam0->f_3);
		num = func_119(entityModel);
	
		if (num == 1)
		{
			return true;
		}
		else if (num != uParam0->f_7)
		{
			uParam0->f_7 = num;
			return true;
		}
		else
		{
			return true;
		}
	}
	else
	{
		return false;
	}

	return false;
}

char* func_64(int iParam0, int iParam1) // Position - 0x20E2 Hash - 0xC80021A8 ^0xB4D92758
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return "BOU1_BOUNTY";
			
				case 1:
					return "BOU1AUD";
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET5";
			
				case 1:
					return "BT05AUD";
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return "RBDU_TARGET";
			
				case 1:
					return "BDULAUD";
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					return "CAVANAUGH";
			
				case 1:
					return "BT03AUD";
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 0:
					return "RBRA_TARGET";
			
				case 1:
					return "BRANAUD";
			
				default:
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET12";
			
				case 1:
					return "BT12AUD";
			
				default:
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET14";
			
				case 1:
					return "BT14AUD";
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 0:
					return "RBCO_TARGET";
			
				case 1:
					return "BCONAUD";
			
				default:
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET15";
			
				case 1:
					return "BT15AUD";
			
				default:
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET20";
			
				case 1:
					return "BT20AUD";
			
				default:
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET18";
			
				case 1:
					return "BT18AUD";
			
				default:
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET21";
			
				case 1:
					return "BT21AUD";
			
				default:
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET22";
			
				case 1:
					return "BT22AUD";
			
				default:
					break;
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 0:
					return "RBH_TARGET23";
			
				case 1:
					return "BT23AUD";
			
				default:
					break;
			}
			break;
	}

	return "";
}

Vector3 func_65(int iParam0, int iParam1, int iParam2) // Position - 0x234F Hash - 0x5A715C3 ^0x36030F16
{
	char* str;
	var unk;

	str = "";

	switch (iParam0)
	{
		case 2:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "BOU1_PERS1CELL";
						break;
				
					case 1:
						str = "BOU1_PERS1POS";
						break;
				
					case 2:
						str = "BOU1_PERS1NEG";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "BOU1_PERS2CELL";
						break;
				
					case 1:
						str = "BOU1_PERS2POS";
						break;
				
					case 2:
						str = "BOU1_PERS2NEG";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 1:
						str = "BOU1_PERS3POS";
						break;
				
					case 2:
						str = "BOU1_PERS3NEG";
						break;
				}
			}
			break;
	
		case 3:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT05_CELL1";
						break;
				
					case 1:
						str = func_120("RBT05_CELL1POSJ", "RBT05_CELL1POSA");
						break;
				
					case 2:
						str = func_120("RBT05_CELL1NEGJ", "RBT05_CELL1NEGA");
						break;
				
					case 3:
						str = func_120("RBT05_CELL1BPSJ", "RBT05_CELL1BPSA");
						break;
				
					case 5:
						str = func_120("RBT05_CELL1BNGJ", "RBT05_CELL1NEGA");
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT05_CELL2";
						break;
				
					case 1:
						str = func_120("RBT05_CELL2POSJ", "RBT05_CELL2POSA");
						break;
				
					case 2:
						str = func_120("RBT05_CELL2NEGJ", "RBT05_CELL2NEGA");
						break;
				
					case 3:
						str = func_120("RBT05_CELL2BPSJ", "RBT05_CELL2BPSA");
						break;
				
					case 5:
						str = func_120("RBT05_CELL2BNGJ", "RBT05_CELL2BNGA");
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT05_CELL3";
						break;
				
					case 1:
						str = func_120("RBT05_CELL3POSJ", "RBT05_CELL3POSA");
						break;
				
					case 2:
						str = func_120("RBT05_CELL3NEGJ", "RBT05_CELL3NEGA");
						break;
				
					case 3:
						str = func_120("RBT05_CELL3BPSJ", "RBT05_CELL3BPSA");
						break;
				
					case 5:
						str = func_120("RBT05_CELL3BNGJ", "RBT05_CELL3BNGA");
						break;
				}
			}
			break;
	
		case 4:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "BDUL_RE_CELL";
						break;
				
					case 1:
						str = func_120("RBDULCELL1POSJ", "RBDULCELL1POSA");
						break;
				
					case 2:
						str = func_120("RBDULCELL1NEGJ", "RBDULCELL1NEGA");
						break;
				
					case 7:
						str = "BDUL_BYE";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "BDUL_RE_CELL";
						break;
				
					case 1:
						str = func_120("RBDULCELL2POSJ", "RBDULCELL2POSA");
						break;
				
					case 2:
						str = func_120("RBDULCELL2NEGJ", "RBDULCELL2NEGA");
						break;
				
					case 7:
						str = "BDUL_BYE";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						str = "BDUL_RE_CELL";
						break;
				
					case 1:
						str = func_120("RBDULCELL3POSJ", "RBDULCELL3POSA");
						break;
				
					case 2:
						str = func_120("RBDULCELL3NEGJ", "RBDULCELL3NEGA");
						break;
				
					case 7:
						str = "BDUL_BYE";
						break;
				}
			}
			break;
	
		case 5:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT03_CELL1";
						break;
				
					case 1:
						str = "RBT03_CELL1POS";
						break;
				
					case 2:
						str = "RBT03_CELL1NEG";
						break;
				
					case 3:
						str = "RBT03_CELL1POSR";
						break;
				
					case 5:
						str = "RBT03_CELL1NEGR";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT03_CELL2";
						break;
				
					case 1:
						str = "RBT03_CELL2POS";
						break;
				
					case 2:
						str = "RBT03_CELL2NEG";
						break;
				
					case 3:
						str = "RBT03_CELL2POSR";
						break;
				
					case 5:
						str = "RBT03_CELL2NEGR";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT03_CELL3";
						break;
				
					case 1:
						str = "RBT03_CELL3POS";
						break;
				
					case 2:
						str = "RBT03_CELL3NEG";
						break;
				
					case 3:
						str = "RBT03_CELL3POSR";
						break;
				
					case 5:
						str = "RBT03_CELL3NEGR";
						break;
				}
			}
			break;
	
		case 6:
			if (func_121(13, 8))
			{
				if (iParam1 == 0)
				{
					switch (iParam2)
					{
						case 0:
							str = "BRA_CELL1_FK";
							break;
					
						case 1:
							str = func_120("BRA_CELL1P_FK_J", "BRA_CELL1P_FK_A");
							break;
					
						case 2:
							str = func_120("BRA_CELL1N_FK_J", "BRA_CELL1N_FK_A");
							break;
					
						case 3:
							str = "BRA_CELL1PR_FK";
							break;
					
						case 5:
							str = "BRA_CELL1NR_FK";
							break;
					}
				}
				else if (iParam1 == 1)
				{
					switch (iParam2)
					{
						case 0:
							str = "BRA_CELL1_FK";
							break;
					
						case 1:
							str = func_120("BRA_CELL2P_FK_J", "BRA_CELL2P_FK_A");
							break;
					
						case 2:
							str = func_120("BRA_CELL2N_FK_J", "BRA_CELL2N_FK_A");
							break;
					
						case 3:
							str = "BRA_CELL2PR_FK";
							break;
					
						case 5:
							str = "BRA_CELL2NR_FK";
							break;
					}
				}
			}
			else if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "BRA_CELL1_FA";
						break;
				
					case 1:
						str = func_120("BRA_CELL1P_FA_J", "BRA_CELL1P_FA_A");
						break;
				
					case 2:
						str = func_120("BRA_CELL1N_FA_J", "BRA_CELL1N_FA_A");
						break;
				
					case 3:
						str = "BRA_CELL1PR_FA";
						break;
				
					case 5:
						str = "BRA_CELL1NR_FA";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "BRA_CELL1_FA";
						break;
				
					case 1:
						str = func_120("BRA_CELL2P_FA_J", "BRA_CELL2P_FA_A");
						break;
				
					case 2:
						str = func_120("BRA_CELL2N_FA_J", "BRA_CELL2N_FA_A");
						break;
				
					case 3:
						str = "BRA_CELL2PR_FA";
						break;
				
					case 5:
						str = "BRA_CELL2NR_FA";
						break;
				}
			}
			break;
	
		case 7:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT12PERSCELL1";
						break;
				
					case 1:
						str = func_120("RBT12CELL1POSJ", "RBT12CELL1POSA");
						break;
				
					case 2:
						str = func_120("RBT12CELL1NEGJ", "RBT12CELL1NEGA");
						break;
				
					case 3:
						str = "RBT12CELL1PREP";
						break;
				
					case 5:
						str = "RBT12CELL1PNEG";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT12PERSCELL2";
						break;
				
					case 1:
						str = func_120("RBT12CELL2POSJ", "RBT12CELL2POSA");
						break;
				
					case 2:
						str = func_120("RBT12CELL2NEGJ", "RBT12CELL2NEGA");
						break;
				
					case 3:
						str = "RBT12CELL2PREP";
						break;
				
					case 5:
						str = "RBT12CELL2NREP";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT12PERSCELL3";
						break;
				
					case 1:
						str = func_120("RBT12CELL3POSJ", "RBT12CELL3POSA");
						break;
				
					case 2:
						str = func_120("RBT12CELL3NEGJ", "RBT12CELL3NEGA");
						break;
				
					case 3:
						str = "RBT12CELL3PREP";
						break;
				
					case 5:
						str = "RBT12CELL3NREP";
						break;
				}
			}
			break;
	
		case 8:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT14_TINCELL";
						break;
				
					case 1:
						str = func_120("RBT14_CELL1POSJ", "RBT14_CELL1POSA");
						break;
				
					case 2:
						str = func_120("RBT14_CELL1NEGJ", "RBT14_CELL1NEGA");
						break;
				
					case 3:
						str = func_120("RBT14_C1POSJRSP", "RBT14_C1POSARSP");
						break;
				
					case 5:
						str = func_120("RBT14_C1NEGJRSP", "RBT14_C1NEGARSP");
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT14_TINCELL";
						break;
				
					case 1:
						str = func_120("RBT14_CELL2POSJ", "RBT14_CELL2POSA");
						break;
				
					case 2:
						str = func_120("RBT14_CELL2NEGJ", "RBT14_CELL2NEGA");
						break;
				
					case 3:
						str = func_120("RBT14_C2POSJRSP", "RBT14_C2POSARSP");
						break;
				
					case 5:
						str = func_120("RBT14_C2NEGJRSP", "RBT14_C2NEGARSP");
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT14_TINCELL";
						break;
				
					case 1:
						str = func_120("RBT14_CELL3POSJ", "RBT14_CELL3POSA");
						break;
				
					case 2:
						str = func_120("RBT14_CELL3NEGJ", "RBT14_CELL3NEGA");
						break;
				
					case 3:
						str = func_120("RBT14_C3POSJRSP", "RBT14_C3POSARSP");
						break;
				
					case 5:
						str = func_120("RBT14_C3NEGJRSP", "RBT14_C3NEGARSP");
						break;
				}
			}
			break;
	
		case 9:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "";
						break;
				
					case 1:
						str = func_120("RBCON_CELL1POSJ", "RBCON_CELL1POSA");
						break;
				
					case 2:
						str = func_120("RBCON_CELL1NEGJ", "RBCON_CELL1NEGA");
						break;
				
					case 3:
						str = func_120("RBCONCELL1POSRJ", "RBCON_CELL1POSR");
						break;
				
					case 5:
						str = func_120("RBCONCELL1NEGRJ", "RBCON_CELL1NEGR");
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "";
						break;
				
					case 1:
						str = func_120("RBCON_CELL2POSJ", "RBCON_CELL2POSA");
						break;
				
					case 2:
						str = func_120("RBCON_CELL2NEGJ", "RBCON_CELL2NEGA");
						break;
				
					case 3:
						str = func_120("RBCONCELL2POSRJ", "RBCON_CELL2POSR");
						break;
				
					case 5:
						str = func_120("RBCONCELL2NEGRJ", "RBCON_CELL2NEGR");
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						str = "";
						break;
				
					case 1:
						str = func_120("RBCON_CELL3POSJ", "RBCON_CELL3POSA");
						break;
				
					case 2:
						str = func_120("RBCON_CELL3NEGJ", "RBCON_CELL3NEGA");
						break;
				
					case 3:
						str = func_120("RBCONCELL3POSRJ", "RBCON_CELL3POSR");
						break;
				
					case 5:
						str = func_120("RBCONCELL3NEGRJ", "RBCON_CELL3NEGR");
						break;
				}
			}
			break;
	
		case 10:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT15_CELL1";
						break;
				
					case 1:
						str = "RBT15_CELL1POS";
						break;
				
					case 2:
						str = "RBT15_CELL1NEG";
						break;
				
					case 3:
						str = "RBT15_CELL1POSR";
						break;
				
					case 5:
						str = "RBT15_CELL1NEGR";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT15_CELL2";
						break;
				
					case 1:
						str = "RBT15_CELL2POS";
						break;
				
					case 2:
						str = "RBT15_CELL2NEG";
						break;
				
					case 3:
						str = "RBT15_CELL2POSR";
						break;
				
					case 5:
						str = "RBT15_CELL2NEGR";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT15_CELL3";
						break;
				
					case 1:
						str = "RBT15_CELL3POS";
						break;
				
					case 2:
						str = "RBT15_CELL3NEG";
						break;
				
					case 3:
						str = "RBT15_CELL3POSR";
						break;
				
					case 5:
						str = "RBT15_CELL3NEGR";
						break;
				}
			}
			break;
	
		case 11:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT20CELL1";
						break;
				
					case 1:
						str = "RBT20CELL1POS";
						break;
				
					case 2:
						str = "RBT20CELL1NEG";
						break;
				
					case 3:
						str = "RBT20CELL1PREP";
						break;
				
					case 5:
						str = "RBT20CELL1PNEG";
						break;
				
					case 7:
						str = "RBT20CELL_LEAVE";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT20CELL1";
						break;
				
					case 1:
						str = "RBT20CELL2POS";
						break;
				
					case 2:
						str = "RBT20CELL2NEG";
						break;
				
					case 3:
						str = "RBT20CELL2PREP";
						break;
				
					case 5:
						str = "RBT20CELL2NREP";
						break;
				
					case 7:
						str = "RBT20CELL_LEAVE";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT20CELL1";
						break;
				
					case 1:
						str = "RBT20CELL3POS";
						break;
				
					case 2:
						str = "RBT20CELL3NEG";
						break;
				
					case 3:
						str = "RBT20CELL3PREP";
						break;
				
					case 5:
						str = "RBT20CELL3NREP";
						break;
				
					case 7:
						str = "RBT20CELL_LEAVE";
						break;
				}
			}
			break;
	
		case 12:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT18_CELL1";
						break;
				
					case 1:
						str = "RBT18_CELL1POS";
						break;
				
					case 2:
						str = "RBT18_CELL1NEG";
						break;
				
					case 3:
						str = "RBT18_CELL1POSR";
						break;
				
					case 5:
						str = "RBT18_CELL1NEGR";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT18_CELL2";
						break;
				
					case 1:
						str = "RBT18_CELL2POS";
						break;
				
					case 2:
						str = "RBT18_CELL2NEG";
						break;
				
					case 3:
						str = "RBT18_CELL2POSR";
						break;
				
					case 5:
						str = "RBT18_CELL2NEGR";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT18_CELL3";
						break;
				
					case 1:
						str = "RBT18_CELL3POS";
						break;
				
					case 2:
						str = "RBT18_CELL3NEG";
						break;
				
					case 3:
						str = "RBT18_CELL3POSR";
						break;
				
					case 5:
						str = "RBT18_CELL3NEGR";
						break;
				}
			}
			break;
	
		case 13:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT21_CELL1";
						break;
				
					case 1:
						str = "RBT21_CELL1POS";
						break;
				
					case 2:
						str = "RBT21_CELL1NEG";
						break;
				
					case 3:
						str = "RBT21_CELL1POSR";
						break;
				
					case 4:
						str = "RBT21_CELL1BPOS";
						break;
				
					case 5:
						str = "RBT21_CELL1NEGR";
						break;
				
					case 6:
						str = "RBT21_CELL1BNEG";
						break;
				
					case 7:
						str = "RBT21_LEAVENOW";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT21_CELL2";
						break;
				
					case 1:
						str = "RBT21_CELL2POS";
						break;
				
					case 2:
						str = "RBT21_CELL2NEG";
						break;
				
					case 3:
						str = "RBT21_CELL2POSR";
						break;
				
					case 4:
						str = "RBT21_CELL2BPOS";
						break;
				
					case 5:
						str = "RBT21_CELL2NEGR";
						break;
				
					case 6:
						str = "RBT21_CELL2BNEG";
						break;
				
					case 7:
						str = "RBT21_LEAVENOW";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT21_CELL3";
						break;
				
					case 1:
						str = "RBT21_CELL3POS";
						break;
				
					case 2:
						str = "RBT21_CELL3NEG";
						break;
				
					case 3:
						str = "RBT21_CELL3POSR";
						break;
				
					case 4:
						str = "RBT21_CELL3BPOS";
						break;
				
					case 5:
						str = "RBT21_CELL3NEGR";
						break;
				
					case 6:
						str = "RBT21_CELL3BNEG";
						break;
				
					case 7:
						str = "RBT21_LEAVENOW";
						break;
				}
			}
			break;
	
		case 14:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT22_CELL1";
						break;
				
					case 1:
						str = "RBT22_CELL1POSJ";
						break;
				
					case 2:
						str = "RBT22_CELL1NEGJ";
						break;
				
					case 3:
						str = "RBT22_CELL1PREP";
						break;
				
					case 5:
						str = "RBT22_CELL1PNEG";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT22_CELL2";
						break;
				
					case 1:
						str = "RBT22_CELL2POSJ";
						break;
				
					case 2:
						str = "RBT22_CELL2NEGJ";
						break;
				
					case 3:
						str = "RBT22_CELL2PREP";
						break;
				
					case 5:
						str = "RBT22_CELL2NREP";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 1:
						str = "RBT22_CELL3POSJ";
						break;
				
					case 2:
						str = "RBT22_CELL3NEGJ";
						break;
				}
			}
			break;
	
		case 15:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT23CELL1";
						break;
				
					case 1:
						str = "RBT23CELL1POSJ";
						break;
				
					case 2:
						str = "RBT23CELL1NEGJ";
						break;
				
					case 3:
						str = "RBT23CELL1POSR";
						break;
				
					case 5:
						str = "RBT23CELL1NEGR";
						break;
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT23CELL1";
						break;
				
					case 1:
						str = "RBT23CELL2POSJ";
						break;
				
					case 2:
						str = "RBT23CELL2NEGJ";
						break;
				
					case 3:
						str = "RBT23CELL2POSR";
						break;
				
					case 5:
						str = "RBT23CELL2NEGR";
						break;
				}
			}
			else if (iParam1 == 2)
			{
				switch (iParam2)
				{
					case 0:
						str = "RBT23CELL1";
						break;
				
					case 1:
						str = "RBT23CELL13POSJ";
						break;
				
					case 2:
						str = "RBT23CELL3NEGJ";
						break;
				
					case 3:
						str = "RBT23CELL3POSR";
						break;
				
					case 4:
						str = "RBT23CELL3POS2J";
						break;
				
					case 5:
						str = "RBT23CELL3NEGR";
						break;
				}
			}
			break;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, str, 24);
	return unk;
}

void func_66(var uParam0, Ped pedParam1, char* sParam2, BOOL bParam3) // Position - 0x34FD Hash - 0x5AD955B5 ^0x43BD5215
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (func_122(uParam0, pedParam1, sParam2))
		if (!PED::IS_PED_INJURED(pedParam1))
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam1))
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam1, bParam3);

	return;
}

BOOL func_67() // Position - 0x355A Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_54() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_68(int iParam0, var uParam1) // Position - 0x357F Hash - 0x1FCCC7D5 ^0x1FCCC7D5
{
	switch (iParam0)
	{
		case 9:
			return true;
	}

	return false;
}

const char* func_69(var uParam0, var uParam1, var uParam2) // Position - 0x359D Hash - 0xE300744B ^0x46E4843E
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

BOOL func_70(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x35B1 Hash - 0x4863E989 ^0xB2E91EEF
{
	BOOL flag;

	if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&uParam1))
		flag = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&uParam1);
	else
		flag = true;

	if (flag)
	{
		func_123(uParam1, uParam0);
	
		if (bParam6)
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
		else
			AUDIO::START_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
	
		if (bParam4)
			AUDIO::_0x40CA665AB9D8D505(&uParam1, iParam5);
	}

	return flag;
}

BOOL func_71(BOOL bParam0) // Position - 0x360B Hash - 0xD6E12BEB ^0xD87564B0
{
	return AUDIO::_0xFE5C6177064BD390(bParam0);
}

void func_72(int* piParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8) // Position - 0x3619 Hash - 0x77C6B9D1 ^0xC3EDC08A
{
	piParam0->f_5 = sParam1;
	piParam0->f_7 = iParam3;
	piParam0->f_8 = iParam6;
	piParam0->f_13 = sParam2;
	piParam0->f_15 = iParam8;
	piParam0->f_11 = iParam4;
	piParam0->f_12 = iParam5;

	if (bParam7)
	{
		if (func_124(piParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*piParam0, 1))
				func_125(piParam0->f_6, piParam0->f_5, piParam0->f_14, false);
			else
				func_126(piParam0->f_6, piParam0->f_5, false);
		
			func_127(piParam0->f_6, false, true);
		}
		else
		{
			MISC::SET_BIT(piParam0, 14);
		}
	
		MISC::SET_BIT(piParam0, 0);
	}
	else
	{
		func_128(piParam0, piParam0->f_5);
	
		if (!MISC::IS_BIT_SET(*piParam0, 13))
			MISC::SET_BIT(piParam0, 0);
	}

	MISC::SET_BIT(piParam0, 15);
	return;
}

int func_73(var uParam0, int* piParam1, float fParam2, var uParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, Volume volParam9, int iParam10, int iParam11, int iParam12) // Position - 0x36CC Hash - 0x66907D63 ^0x41228033
{
	int num;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	int num2;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_129(&iParam8);
		num = -1;
		flag = false;
		flag2 = volParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(volParam9) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volParam9, false, 0);
		flag3 = iParam8 & 32 != 0;
		flag4 = iParam8 & 524288 != 0;
		flag5 = iParam8 & 16777216 != 0;
		flag6 = iParam8 & 16777216 != 0;
		flag7 = AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0);
		num2 = iParam12 >= 0f ? iParam12 : BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false));
	
		if (!(iParam8 & 2097152 != 0))
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
	
		if (iParam8 & 8388608 != 0)
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
	
		if (flag5)
			flag = AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35);
	
		if (flag7 || flag5 && flag)
			func_12(&(piParam1->f_13));
	
		if (func_131(*uParam0, piParam1, uParam3))
			return -1;
	
		switch (piParam1->f_2)
		{
			case 0:
				if (flag2)
				{
					if (func_132(uParam0, piParam1, uParam3, fParam2, iParam8, sParam7, iParam11, num2))
					{
						piParam1->f_1 = -1;
						piParam1->f_2 = 1;
						return func_73(uParam0, piParam1, fParam2, uParam3, iParam4, iParam5, iParam6, sParam7, iParam8, volParam9, iParam10, iParam11, iParam12);
					}
				}
				break;
		
			case 1:
				if (!flag2 || !(num2 <= fParam2 + 5f))
				{
					func_76(uParam0);
					piParam1->f_2 = 0;
					return -1;
				}
			
				if (!(iParam8 & 33554432 != 0))
					if (iParam8 & 18 != 0)
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
							func_133(*uParam0, true, true);
					else if (func_134(piParam1, 22))
						func_133(*uParam0, false, true);
			
				if (func_135(uParam0, iParam8, volParam9, MISC::IS_BIT_SET(*piParam1, 4)))
				{
					func_136(uParam0, true, piParam1, fParam2, uParam3, flag3, iParam4, iParam5, iParam6, sParam7, iParam8, volParam9, iParam10, iParam11, flag4);
					func_137(iParam8);
				
					if (func_138(uParam0, piParam1, num2, fParam2, uParam3, flag3, iParam4, iParam5, iParam6, sParam7, iParam8, volParam9, iParam10, iParam11, flag4, flag7, flag5, flag, false))
					{
						if (piParam1->f_2 != 2 && piParam1->f_2 != 3)
						{
							if (piParam1->f_1 > -1 && piParam1->f_1 < *uParam3)
								if (MISC::IS_BIT_SET(uParam3->[piParam1->f_1 /*17*/], 20))
									func_139(uParam3);
						
							return piParam1->f_1;
						}
					}
					else if (piParam1->f_2 != 2)
					{
						if (piParam1->f_1 != -1)
							piParam1->f_1 = -1;
					}
				}
				else
				{
					func_140(piParam1, uParam3, num2);
				
					if (func_141(*uParam0, piParam1, uParam3))
						return piParam1->f_1;
				
					if (MISC::IS_BIT_SET(*piParam1, 1))
					{
						func_77(uParam3, 0, false, true, true);
						MISC::CLEAR_BIT(piParam1, 1);
					}
				}
				break;
		
			case 2:
				if (func_135(uParam0, iParam8, volParam9, MISC::IS_BIT_SET(*piParam1, 4)))
				{
					func_143(*uParam0, piParam1, uParam3, fParam2, iParam5, iParam6, iParam10, flag3);
					func_138(uParam0, piParam1, num2, fParam2, uParam3, flag3, iParam4, iParam5, iParam6, sParam7, iParam8, volParam9, iParam10, iParam11, flag4, flag7, flag5, flag, true);
					func_136(uParam0, func_135(uParam0, iParam8, volParam9, false), piParam1, fParam2, uParam3, flag3, iParam4, iParam5, iParam6, sParam7, iParam8, volParam9, iParam10, iParam11, flag4);
					func_137(iParam8);
				}
				else if (MISC::IS_BIT_SET(*piParam1, 1))
				{
					if (!flag4)
						func_77(uParam3, 0, false, true, true);
				
					func_144(piParam1, 1);
				}
			
				func_140(piParam1, uParam3, num2);
			
				if (func_142(uParam0, piParam1, iParam4, flag6))
				{
					if (iParam8 & 512 != 0)
						piParam1->f_2 = 0;
					else
						piParam1->f_2 = 1;
				
					num = piParam1->f_1;
					piParam1->f_9 = 0;
					piParam1->f_1 = -1;
					return num;
				}
				break;
		
			case 3:
				break;
		
			case 4:
				if (func_142(uParam0, piParam1, iParam4, flag6))
				{
					num = piParam1->f_1;
					piParam1->f_9 = 0;
					piParam1->f_1 = -1;
					return num;
				}
				break;
		}
	}
	else if (!(iParam8 & 1024 != 0))
	{
		if (!MISC::IS_BIT_SET(*piParam1, 3))
		{
			func_145(piParam1, uParam3);
			MISC::SET_BIT(piParam1, 3);
		}
	}

	return -1;
}

void func_74(int* piParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3B10 Hash - 0xAC8CE43 ^0x1A2D07F
{
	if (bParam1 && !func_146(piParam0, 13))
		func_147(piParam0, 0);
	else
		func_148(piParam0, 0);

	if (func_124(piParam0->f_6))
		if (bParam2)
			func_149(&(piParam0->f_6), false, true);

	return;
}

BOOL func_75(var uParam0) // Position - 0x3B56 Hash - 0x79E27FFF ^0x43744348
{
	if (uParam0->f_7 == 4 || uParam0->f_7 == 13 || uParam0->f_7 == 11)
		return true;

	return false;
}

void func_76(var uParam0) // Position - 0x3B86 Hash - 0x43696AC2 ^0x4C06F87D
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}

	return;
}

void func_77(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x3BAC Hash - 0x5EBCB35A ^0x47D35D05
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (bParam3)
		{
			if (func_124(uParam0->[i /*17*/].f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0->[i /*17*/], 11))
				{
				}
				else
				{
					func_149(&(uParam0->[i /*17*/].f_6), true, true);
				
					if (bParam2)
					{
						uParam0->[i /*17*/].f_7 = 0;
						uParam0->[i /*17*/] = 0;
						uParam0->[i /*17*/].f_5 = "";
						uParam0->[i /*17*/].f_14 = 0;
						uParam0->[i /*17*/].f_13 = "";
						uParam0->[i /*17*/].f_15 = 0;
						uParam0->[i /*17*/].f_11 = "";
						uParam0->[i /*17*/].f_12 = "";
					}
				}
			}
		}
	
		if (bParam2)
		{
			uParam0->[i /*17*/].f_7 = 0;
			uParam0->[i /*17*/] = 0;
			uParam0->[i /*17*/].f_5 = "";
			uParam0->[i /*17*/].f_14 = 0;
			uParam0->[i /*17*/].f_13 = "";
			uParam0->[i /*17*/].f_15 = 0;
			uParam0->[i /*17*/].f_11 = "";
			uParam0->[i /*17*/].f_12 = "";
		}
	}

	return;
}

BOOL func_78(var uParam0) // Position - 0x3C57 Hash - 0xF490F975 ^0x19C69C8E
{
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_70))
		func_150(uParam0->f_4, &(uParam0->f_70));
	else if (!func_151(Global_35, uParam0->f_70, true, 0))
		return true;

	return false;
}

BOOL func_79(Ped pedParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x3C90 Hash - 0x281BDD5E ^0x8899ECCD
{
	char* str;

	str.f_5 = 1;
	str.f_6 = 1;
	str = sParam1;
	str.f_1 = iParam5;
	str.f_2 = iParam6;
	str.f_3 = iParam2;
	str.f_4 = iParam3;
	str.f_5 = iParam4;
	str.f_6 = iParam7;
	return func_152(pedParam0, &str);
}

void func_80(int iParam0, int iParam1) // Position - 0x3CD7 Hash - 0x9642AD01 ^0x291C3DA3
{
	if (!func_46(iParam0))
		return;

	Global_1895087[iParam0 /*3*/].f_1 = iParam1;
	return;
}

BOOL func_81(Hash hParam0) // Position - 0x3CF8 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

void func_82(int iParam0, BOOL bParam1) // Position - 0x3D04 Hash - 0x97140DD8 ^0xF9889272
{
	if (bParam1)
		func_37(&(iParam0->f_1), 16384);
	else
		func_36(&(iParam0->f_1), 16384);

	return;
}

void func_83(int iParam0, BOOL bParam1) // Position - 0x3D2A Hash - 0x97140DD8 ^0xBDBF7A5
{
	if (bParam1)
		func_37(&(iParam0->f_1), 2048);
	else
		func_36(&(iParam0->f_1), 2048);

	return;
}

void func_84(int iParam0, BOOL bParam1) // Position - 0x3D50 Hash - 0x97140DD8 ^0x96C23302
{
	if (bParam1)
		func_37(&(iParam0->f_1), 256);
	else
		func_36(&(iParam0->f_1), 256);

	return;
}

void func_85(int iParam0, BOOL bParam1) // Position - 0x3D76 Hash - 0x6E38DCCC ^0x27E8693B
{
	if (bParam1)
	{
		func_36(iParam0, 16);
	}
	else
	{
		func_37(iParam0, 67108864);
		func_37(iParam0, 16);
	}

	return;
}

void func_86(int iParam0, BOOL bParam1) // Position - 0x3DA1 Hash - 0x32CE93C6 ^0x60BFF41C
{
	if (bParam1)
		func_37(&(iParam0->f_1), 128);
	else
		func_36(&(iParam0->f_1), 128);

	return;
}

void func_87(int iParam0, BOOL bParam1) // Position - 0x3DC5 Hash - 0x9CA625A6 ^0xD96D8959
{
	if (bParam1)
		func_36(iParam0, 256);
	else
		func_37(iParam0, 256);

	return;
}

void func_88(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3DE7 Hash - 0x3145AA70 ^0xBCD5B3EB
{
	if (!bParam1)
		func_36(iParam0, 268435456);
	else
		func_37(iParam0, 268435456);

	if (!bParam2)
		func_36(iParam0, 1073741824);
	else
		func_37(iParam0, 1073741824);

	if (!bParam3)
		func_36(iParam0, 536870912);
	else
		func_37(iParam0, 536870912);

	return;
}

void func_89(int iParam0, BOOL bParam1, int iParam2) // Position - 0x3E4C Hash - 0x37D64B11 ^0xE7060A9E
{
	func_153(iParam2);

	if (Global_1572887.f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
			return;
	
		if (Global_1935630.f_12)
			return;
	}
	else
	{
		if (!Global_1224589.f_6)
			return;
	
		if (Global_1224589.f_7)
			return;
	}

	if (bParam1)
		iParam0->f_10 = 0;

	iParam0->f_5 = iParam2;

	if (Global_1572887.f_12 == -1)
		iParam0->f_13 = Global_1935630.f_44;
	else
		iParam0->f_13 = func_154(0);

	switch (iParam0->f_6)
	{
		case 0:
			if (*iParam0 & 16 != 0)
				if (!(*iParam0 & 33554432 != 0))
					if (iParam0->f_13 == joaat("weapon_thrown_dynamite"))
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
							func_36(iParam0, 33554432);
					else if (!(*iParam0 & 8192 != 0))
						if (func_155(true))
							func_36(iParam0, 33554432);
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && !func_155(true) || *iParam0 & 8192 != 0)
					func_37(iParam0, 33554432);
			break;
	
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	}

	if (!(iParam0->f_1 & 1024 != 0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
		{
			if (func_156(iParam0))
				iParam0->f_15 = func_109();
		}
		else if (iParam0->f_15 > 0)
		{
			if (func_109() - iParam0->f_15 > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(iParam0->f_14))
				{
					iParam0->f_14 = 0;
					iParam0->f_15 = 0;
				}
			}
		}
	}

	iParam0->f_6 = iParam0->f_6 + 1;

	if (iParam0->f_6 >= 4)
	{
		iParam0->f_6 = 0;
		iParam0->f_7 = iParam0->f_7 + 1;
	
		if (iParam0->f_7 > 4)
			iParam0->f_7 = 0;
	}

	func_157(iParam0);
	return;
}

BOOL func_90(Ped pedParam0, int iParam1) // Position - 0x4018 Hash - 0x3A755B4E ^0xDBAC23C2
{
	Hash recentEvent;
	Entity sourceEntityFromEvent;
	Ped pedIndexFromEntityIndex;

	if (!EVENT::_0x1D1B448D719415AB(pedParam0))
		return false;

	recentEvent = EVENT::_EVENT_GET_RECENT_EVENT(pedParam0, 0, 0);

	if (recentEvent == 0)
		return false;

	switch (recentEvent)
	{
		case joaat("event_acquaintance_ped_dead"):
		case joaat("event_ped_seen_dead_ped"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("event_dead_ped_found"):
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
		
			if (!ENTITY::IS_ENTITY_A_PED(sourceEntityFromEvent))
				return false;
		
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sourceEntityFromEvent);
		
			if (!PED::IS_PED_HUMAN(pedIndexFromEntityIndex))
				return false;
		
			if (DECORATOR::DECOR_EXIST_ON(pedIndexFromEntityIndex, "bIgnoreDamageChecking"))
				return false;
		
			if (pedIndexFromEntityIndex == Global_1935630.f_33)
				return false;
		
			if (pedIndexFromEntityIndex == Global_1935630.f_32)
				return false;
		
			if (!func_158(pedParam0, iParam1, pedIndexFromEntityIndex))
				return false;
		
			if (func_159(pedParam0, pedIndexFromEntityIndex) <= func_160(iParam1))
				return true;
			break;
	}

	return false;
}

void func_91(Ped pedParam0, int iParam1, int iParam2) // Position - 0x40F0 Hash - 0x7B438605 ^0x99F8E9DA
{
	if (iParam2 != 16384)
		iParam1->f_10 = pedParam0;

	if (func_161(iParam2, 1, 1, 1, 0))
		func_36(iParam1, 2048);

	iParam1->f_16 = iParam2;
	func_162(iParam1, true);
	func_163();
	return;
}

BOOL func_92(Ped pedParam0, int iParam1) // Position - 0x412D Hash - 0x48FE638E ^0x6AD20F95
{
	float num;
	float num2;
	int num3;
	int num4;

	num = 85f;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_164(pedParam0, !(*iParam1 & 268435456 != 0), !(*iParam1 & 536870912 != 0), !(*iParam1 & 1073741824 != 0), 0, false))
		{
			if (iParam1->f_12 < 5f)
				num = 95f;
			else if (iParam1->f_12 < 15f)
				num = 90f;
		
			num2 = func_165(iParam1);
		
			if (func_166(iParam1, pedParam0, num, num2))
			{
				if (iParam1->f_2 == 0)
					iParam1->f_2 = MISC::GET_GAME_TIMER();
			
				num3 = MISC::GET_GAME_TIMER() - iParam1->f_2;
				num4 = func_167(iParam1);
			
				if (iParam1->f_2 != 0)
				{
					if (num3 > num4)
					{
						func_162(iParam1, true);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (num3 > 500)
						{
							func_162(iParam1, true);
							return true;
						}
					}
				}
			}
		}
	}

	return false;
}

BOOL func_93(Ped pedParam0, Entity eParam1, int iParam2) // Position - 0x4214 Hash - 0x899101A2 ^0xBCA80002
{
	float num;
	float num2;

	if (eParam1 == 0)
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(eParam1))
		return false;

	num = 85f;

	if (func_168(eParam1, !(*iParam2 & 268435456 != 0), !(*iParam2 & 536870912 != 0), !(*iParam2 & 1073741824 != 0), 0))
	{
		if (iParam2->f_12 < 5f)
			num = 95f;
		else if (iParam2->f_12 < 15f)
			num = 90f;
	
		num2 = func_165(iParam2);
	
		if (func_166(iParam2, pedParam0, num, num2))
		{
			if (iParam2->f_2 == 0)
				iParam2->f_2 = MISC::GET_GAME_TIMER();
		
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2 > func_167(iParam2))
				{
					func_162(iParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_94(Ped pedParam0, int iParam1) // Position - 0x42EA Hash - 0xC62373A5 ^0xD1ADE674
{
	Entity entity;
	Ped pedIndexFromEntityIndex;
	Entity outEntity;
	float customDistance;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &entity))
		return false;

	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, false, false))
		if (outEntity == entity)
			return false;

	if (!ENTITY::IS_ENTITY_A_PED(entity))
		return false;

	if (Global_1935630.f_40 != 0)
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == pedParam0)
			return false;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entity);

	if (func_158(pedParam0, iParam1, pedIndexFromEntityIndex))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3 > func_167(iParam1))
		{
			customDistance = func_165(iParam1);
		
			if (iParam1->f_12 < customDistance)
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, pedIndexFromEntityIndex, 17))
					if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, customDistance, -1082130432, -1082130432) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, pedIndexFromEntityIndex, -1082130432, customDistance, -1082130432, -1082130432))
						return true;
		}
	}

	return false;
}

BOOL func_95(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x43F3 Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_169(bParam1, bParam2, bParam3);

	if (Global_1572887.f_12 != -1)
		if (plParam0 == Global_1224589.f_5)
			if (!Global_1224589.f_6)
				return 0;
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
			return 0;
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
		return 0;

	if (LAW::IS_LAW_INCIDENT_ACTIVE(plParam0))
	{
		LAW::_0xCBFB4951F2E3934C(plParam0, &data);
	
		if (bParam3 || data.f_10 > 0 || PLAYER::GET_PLAYER_WANTED_LEVEL(plParam0) > 0)
			return 1;
	}
	else if (bParam2 && !(LAW::_0x148E7AC8141C9E64(plParam0) == 1370593166))
	{
		return 0;
	}

	for (i = 0; i < 24; i = i + 1)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(plParam0, i, &crimeType))
			if (crimeType.f_10 && bParam3 || LAW::_0xDAEFDFDB2AEECE37(crimeType, crimeType.f_7) > 0)
				return 1;
	}

	if (bParam1)
		if (LAW::ARE_WITNESSES_ACTIVE(plParam0) || LAW::_ARE_INVESTIGATORS_ACTIVE(plParam0, false, 0))
			if (bParam3 || LAW::_0xE083BEDA81709891(plParam0) > 0)
				return 1;

	return 0;
}

BOOL func_96(int iParam0, int iParam1) // Position - 0x4528 Hash - 0x7EB9A53B ^0xCA234572
{
	int num;
	int num2;

	if (iParam0->f_8 <= 0)
		return true;

	num = func_109();
	num2 = num - iParam0->f_8;

	if ((float)num2 > iParam1 * 1000f)
		return true;

	return false;
}

BOOL func_97(Ped pedParam0, Ped pedParam1, int iParam2) // Position - 0x455F Hash - 0xCE2053EC ^0x1CC9B32D
{
	float num;
	int shotNearRecentlyTime;
	float num2;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			num = func_170(iParam2);
		
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED"))
				PED::_0xD355E2F1BB41087E(pedParam1, num);
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630.f_46))
				PED::_0xD355E2F1BB41087E(pedParam1, 5f);
			else
				PED::_0xD355E2F1BB41087E(pedParam1, num);
		}
	
		if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED") || WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46))
		{
			num2 = 3f;
			shotNearRecentlyTime = 3000;
		}
		else
		{
			num2 = 1f;
			shotNearRecentlyTime = 1000;
		}
	
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), pedParam1, shotNearRecentlyTime) && PED::TIME_SINCE_PED_LAST_SHOT(pedParam0) <= num2)
		{
			if (func_105(iParam2, pedParam1))
			{
				func_162(iParam2, true);
				return true;
			}
		}
	}

	return false;
}

BOOL func_98(Ped pedParam0, Ped pedParam1, int iParam2) // Position - 0x4666 Hash - 0x7A43493E ^0x1475EBFE
{
	var weaponHash;

	if (iParam2->f_12 < (float)func_171(iParam2))
	{
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &weaponHash))
		{
			if (func_105(iParam2, pedParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(pedParam0) <= 1f)
				{
					func_162(iParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_99(Ped pedParam0, Ped pedParam1, int iParam2, BOOL bParam3) // Position - 0x46D1 Hash - 0x8CBDE6BD ^0xE1F008CE
{
	Vector3 entityCoords;
	int num;
	var outCoords;
	var outCoords2;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, false, true) };
	num = func_172(iParam2);

	if (!bParam3)
	{
		switch (num)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), entityCoords, iParam2->f_22))
				{
					func_162(iParam2, true);
					return true;
				}
				break;
		
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), entityCoords, iParam2->f_27))
				{
					func_162(iParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), iParam2->f_26, &outCoords, false, false);
				
					if (func_173(pedParam1, entityCoords, outCoords))
					{
						func_162(iParam2, true);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (num)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), entityCoords, iParam2->f_22))
				{
					func_162(iParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), iParam2->f_26, &outCoords2, false, false);
				
					if (func_173(pedParam1, entityCoords, outCoords2))
					{
						func_162(iParam2, true);
						return true;
					}
				}
				break;
		}
	}

	return false;
}

BOOL func_100(Ped pedParam0, int iParam1) // Position - 0x4819 Hash - 0xEB9C0B04 ^0x4A60CD30
{
	int i;
	float num;
	var unk;
	Vector3 entityCoords;
	BOOL flag;
	BOOL flag2;

	unk = 2;
	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	flag = *iParam1 & 4096 != 0;

	for (i = 0; i < Global_1935630.f_39; i = i + 1)
	{
		if (!func_158(pedParam0, iParam1, Global_1935630.f_34[i]) || pedParam0 == Global_1935630.f_34[i])
		{
		}
		else
		{
			flag2 = func_174(Global_1935630.f_34[i]);
			num = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false), entityCoords);
		
			if (func_175(Global_1935630.f_34[i]))
			{
				if (num < 35f)
				{
					if (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[i], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamA") || DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[i], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamB"))
					{
						unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
						unk[1 /*3*/] = { entityCoords };
						iParam1->f_10 = pedParam0;
						return true;
					}
				}
			}
		
			if (func_176(iParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				iParam1->f_10 = pedParam0;
				return true;
			}
			else if (func_177(iParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				iParam1->f_10 = pedParam0;
				return true;
			}
			else if (func_178(iParam1, pedParam0, num, i))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				iParam1->f_10 = pedParam0;
				return true;
			}
		}
	}

	return false;
}

BOOL func_101(var uParam0, int iParam1) // Position - 0x49F9 Hash - 0xF223CED2 ^0xA472D0A4
{
	Hash recentEvent;
	Entity sourceEntityFromEvent;
	Entity tar;
	var entityCoords;
	var entityCoords2;

	if (!EVENT::_0x1D1B448D719415AB(*uParam0))
		return false;

	recentEvent = EVENT::_EVENT_GET_RECENT_EVENT(*uParam0, 0, 0);

	switch (recentEvent)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("event_shocking_window_smashed"):
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(*uParam0, recentEvent, 0, 0);
			tar = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(*uParam0, recentEvent, 0, 0);
			entityCoords = { ENTITY::GET_ENTITY_COORDS(sourceEntityFromEvent, false, false) };
			entityCoords2 = { ENTITY::GET_ENTITY_COORDS(tar, false, false) };
			EVENT::_0x1A5C5D350068A673(*uParam0, 0);
			return true;
	}

	return false;
}

BOOL func_102(int iParam0, int iParam1) // Position - 0x4A71 Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (iParam0->f_8 <= 0)
		return true;

	num = func_109();
	num2 = num - iParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

int func_103(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x4AA0 Hash - 0x8119700D ^0x42D5A76B
{
	Ped entity2;
	Vehicle playersLastVehicle;
	Entity entity;

	entity2 = PLAYER::PLAYER_PED_ID();

	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(pedParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(pedParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, entity2, true, true))
				return 1;
		
			playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		
			if (!ENTITY::IS_ENTITY_DEAD(playersLastVehicle))
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, playersLastVehicle, true, true))
					return 1;
		
			if (PED::IS_PED_ON_MOUNT(entity2))
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(entity2)))
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, PED::GET_MOUNT(entity2), true, true))
						return 1;
			else if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
				if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, pedParam1, true, true))
						return 1;
		}
	}
	else if (!bParam2)
	{
		if (func_179(entity2, &entity))
			if (PED::IS_PED_RAGDOLL(pedParam0) || PED::_0x947E43F544B6AB34(pedParam0, PLAYER::PLAYER_ID(), 10, 1000) || !bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
				return 1;
	}

	if (!bParam2)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (func_180(entity2, pedParam0))
		return 1;

	if (PED::_GET_PED_GRAPPLER(PLAYER::PLAYER_PED_ID()) == pedParam0)
		if (PED::GET_PED_IS_GRAPPLING(PLAYER::PLAYER_PED_ID()))
			return 1;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (PED::IS_PED_BEING_JACKED(pedParam0))
			if (PED::GET_PEDS_JACKER(pedParam0) == entity2)
				return 1;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(entity2, 8, 0))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(pedParam0))
			return 1;

	return 0;
}

int func_104(int iParam0, Ped pedParam1) // Position - 0x4C26 Hash - 0x42A83B1F ^0xE85D9DC4
{
	int _int;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam1, "iDamageFrame"))
		return 1;

	_int = DECORATOR::DECOR_GET_INT(pedParam1, "iDamageFrame");

	if (_int < 0)
		DECORATOR::DECOR_SET_INT(pedParam1, "iDamageFrame", iParam0->f_5);
	else if (iParam0->f_5 > _int + 10)
		return 1;

	return 0;
}

BOOL func_105(int iParam0, Ped pedParam1) // Position - 0x4C76 Hash - 0xA4C024EF ^0xFFB65FFB
{
	if (func_181(iParam0))
		return true;

	if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam1, 400))
		return true;

	if (PED::IS_PED_DEAD_OR_DYING(pedParam1, true))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(pedParam1, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(pedParam1))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(pedParam1, 10, true))
		return false;

	if (PED::_GET_LASSO_TARGET(Global_35) != 0)
		return true;

	if (!PED::IS_PED_RAGDOLL(pedParam1))
		return true;

	return false;
}

BOOL func_106(Ped pedParam0, Ped pedParam1) // Position - 0x4D13 Hash - 0xB0548679 ^0x1C6DC58A
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, pedParam1, true, true))
			return true;
	
		if (func_182(pedParam0, pedParam1, true, true) < 4f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedParam0, pedParam1) && PED::IS_PED_RAGDOLL(pedParam0))
				return true;
	}

	return false;
}

void func_107() // Position - 0x4D60 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_108(int iParam0, Ped pedParam1) // Position - 0x4D68 Hash - 0x6BE02E92 ^0x188EF1A2
{
	Vehicle vehiclePedIsUsing;
	var entityCoords;
	int actual;
	int expected;
	int i;
	Ped pedInDraftHarness;

	vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_35);

	if (vehiclePedIsUsing != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(vehiclePedIsUsing)))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, false, false) };
	
		if (func_183(vehiclePedIsUsing, pedParam1, entityCoords))
		{
			iParam0->f_9 = func_109();
			return true;
		}
		else if (VEHICLE::GET_DRAFT_ANIMAL_COUNT(vehiclePedIsUsing, &expected, &actual))
		{
			if (expected <= 0)
			{
				return false;
			}
			else if (actual == expected)
			{
				for (i = 0; i < actual; i = i + 1)
				{
					pedInDraftHarness = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(vehiclePedIsUsing, i);
				
					if (ENTITY::DOES_ENTITY_EXIST(pedInDraftHarness))
					{
						if (func_184(pedInDraftHarness, entityCoords, true) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedInDraftHarness, pedParam1))
							{
								iParam0->f_9 = func_109();
								return true;
							}
						}
					}
				}
			}
		}
	}

	return false;
}

int func_109() // Position - 0x4E29 Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

BOOL func_110() // Position - 0x4E47 Hash - 0xAD122F0E ^0xC8AE0775
{
	if (Global_1935630.f_42 == 0)
		return false;

	if (Global_1935630.f_42 == Global_1935630.f_40)
		return false;

	if (Global_1935630.f_43 <= 0)
		return false;

	if (func_109() - Global_1935630.f_43 >= 10000)
		return false;

	return true;
}

BOOL func_111(int iParam0, Ped pedParam1) // Position - 0x4E94 Hash - 0xD0836592 ^0x2A09A5E1
{
	float num;
	int num2;
	int num3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
		return false;

	if (!PED::IS_PED_HUMAN(pedParam1))
		return false;

	num = func_160(iParam0);

	if (iParam0->f_12 > func_185(iParam0) && iParam0->f_12 > num)
		return false;

	num3 = func_186(pedParam1);
	num2 = func_187(iParam0->f_14);

	if (num3 == num2 || num3 == 2 || num2 == 2)
		if (iParam0->f_12 <= num || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_35, 17) && PED::CAN_PED_SEE_ENTITY(pedParam1, Global_35, true, false) == 1 || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, iParam0->f_14, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, iParam0->f_14, 17) && PED::CAN_PED_SEE_ENTITY(pedParam1, iParam0->f_14, true, false) == 1)
			return true;

	return false;
}

BOOL func_112(Ped pedParam0, Entity eParam1, int iParam2) // Position - 0x4FB0 Hash - 0xE4FFEDE ^0xE432D572
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (iParam2->f_12 > 4f)
		return false;

	flag = *iParam2 & 256 != 0;
	flag2 = *iParam2 & 524288 != 0;
	flag3 = *iParam2 & 128 != 0;
	return func_188(pedParam0, eParam1, flag, flag3, iParam2->f_12, flag2);
}

BOOL func_113(Ped pedParam0, int iParam1) // Position - 0x4FF8 Hash - 0x23BB3370 ^0x36BD6CCF
{
	Ped jackTarget;
	Hash recentEvent;
	Entity sourceEntityFromEvent;
	Entity tar;
	Ped pedIndexFromEntityIndex;
	Ped pedIndexFromEntityIndex2;

	if (*iParam1 & 67108864 != 0)
		return true;

	if (Global_1935630.f_24)
		return true;

	if (*iParam1 & 33554432 != 0)
	{
		if (func_189(pedParam0, iParam1, true))
			return true;
	
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17) && PED::CAN_PED_SEE_ENTITY(pedParam0, Global_35, true, false) == 1)
			return true;
	}

	jackTarget = PED::GET_JACK_TARGET(Global_35);

	if (ENTITY::DOES_ENTITY_EXIST(jackTarget) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(jackTarget, true))
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
			return true;

	if (!EVENT::_0x1D1B448D719415AB(pedParam0))
		return false;

	recentEvent = EVENT::_EVENT_GET_RECENT_EVENT(pedParam0, 0, 0);

	if (recentEvent == 0)
		return false;

	switch (recentEvent)
	{
		case joaat("event_shocking_seen_ped_robbed"):
		case joaat("event_shocking_seen_ped_intimidated"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("event_shocking_mount_stolen"):
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
			tar = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
		
			if (!ENTITY::IS_ENTITY_A_PED(sourceEntityFromEvent) || !ENTITY::IS_ENTITY_A_PED(tar))
			{
				EVENT::_0x1A5C5D350068A673(pedParam0, 0);
				return false;
			}
		
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sourceEntityFromEvent);
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(tar);
		
			if (pedIndexFromEntityIndex != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(pedParam0, 0);
				return false;
			}
		
			if (ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(pedIndexFromEntityIndex2))
			{
				EVENT::_0x1A5C5D350068A673(pedParam0, 0);
				return false;
			}
		
			return true;
	
		case joaat("event_shocking_entity_hogtied"):
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
			tar = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
		
			if (!ENTITY::IS_ENTITY_A_PED(sourceEntityFromEvent) || !ENTITY::IS_ENTITY_A_PED(tar))
			{
				EVENT::_0x1A5C5D350068A673(pedParam0, 0);
				return false;
			}
		
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sourceEntityFromEvent);
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(tar);
		
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, pedIndexFromEntityIndex, -1082130432, -1082130432, -1082130432, -1082130432) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, pedIndexFromEntityIndex, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
					if (!func_190(iParam1, pedParam0))
						if (func_184(pedIndexFromEntityIndex, Global_36, true) < 7f)
							return true;
			break;
	}

	return false;
}

BOOL func_114(Ped pedParam0, int iParam1) // Position - 0x5251 Hash - 0xB0E3CEF5 ^0x6602867A
{
	if (!func_191(0))
		return false;

	if (PED::IS_PED_FACING_PED(pedParam0, Global_35, 90f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
			return true;

	return false;
}

BOOL func_115(int iParam0, int iParam1) // Position - 0x528A Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (iParam0->f_8 <= 0)
		return true;

	num = func_109();
	num2 = num - iParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

BOOL func_116(var uParam0, int iParam1) // Position - 0x52B9 Hash - 0x7B43AD8E ^0x2B906BDE
{
	return PED::_GET_IS_PED_BEING_ROBBED(*uParam0, PLAYER::PLAYER_ID(), false);
}

BOOL func_117(Ped pedParam0, int iParam1) // Position - 0x52CD Hash - 0xA06525EC ^0x3DA5C48E
{
	if (!PED::IS_PED_HUMAN(pedParam0))
		return false;

	if (iParam1->f_4 == 0)
		iParam1->f_4 = func_109();
	else if (func_109() - iParam1->f_4 > func_192(iParam1))
		return func_193(pedParam0, iParam1, false, -1082130432);

	return false;
}

BOOL func_118(int iParam0, Ped pedParam1) // Position - 0x531A Hash - 0x2978E171 ^0xDAD9750E
{
	Entity pedSourceOfDeath;
	Ped pedIndexFromEntityIndex;

	pedSourceOfDeath = PED::GET_PED_SOURCE_OF_DEATH(pedParam1);

	if (!ENTITY::DOES_ENTITY_EXIST(pedSourceOfDeath))
		return false;

	if (DECORATOR::DECOR_EXIST_ON(pedParam1, "bIgnoreDamageChecking"))
		return false;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedSourceOfDeath);

	if (Global_35 == pedIndexFromEntityIndex || Global_1935630.f_40 == pedIndexFromEntityIndex)
		return true;

	return false;
}

int func_119(Hash hParam0) // Position - 0x536E Hash - 0xA10EBB5C ^0xA10EBB5C
{
	switch (hParam0)
	{
		case joaat("u_m_m_bht_shackescape"):
			return 8;
	
		case joaat("u_m_m_bht_skinnersearch"):
			return 11;
	
		case joaat("u_m_m_htlrancherbounty_01"):
			return 6;
	
		case joaat("u_m_m_bht_blackwaterhunt"):
			return 13;
	
		case joaat("u_m_m_bht_banditoshack"):
			return 14;
	
		case joaat("u_m_m_bht_banditomine"):
			return 15;
	
		case joaat("cs_antonyforemen"):
			return 10;
	
		case joaat("u_m_m_bht_laramiesleeping"):
			return 5;
	
		case joaat("u_m_m_uniexconfedsbounty_01"):
			return 9;
	
		case joaat("u_m_m_bht_benedictallbright"):
			return 2;
	
		case joaat("u_f_m_bht_wife"):
			return 3;
	
		case joaat("u_m_m_bht_exconfedcampreturn"):
			return 7;
	
		case joaat("u_m_m_bht_strawberryduel"):
			return 4;
	
		case joaat("u_m_m_bht_skinnerbrother"):
			return 12;
	
		default:
		
	}

	return 1;
}

char* func_120(char* sParam0, char* sParam1) // Position - 0x5413 Hash - 0x17C60719 ^0x17C60719
{
	if (func_67())
		return sParam0;

	return sParam1;
}

BOOL func_121(int iParam0, int iParam1) // Position - 0x5429 Hash - 0xC3DE0614 ^0x9804EDD5
{
	int num;

	num = func_194(Global_1347702[iParam0 /*49*/].f_15);

	if (func_195(num, iParam1))
		return true;

	return false;
}

BOOL func_122(var uParam0, Entity eParam1, char* sParam2) // Position - 0x5451 Hash - 0xFB1C2C0E ^0x6794528D
{
	BOOL flag;
	int i;

	flag = false;

	for (i = 0; i < uParam0->f_97 && !flag; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(uParam0->[i /*4*/].f_1)))
		{
			uParam0->[i /*4*/] = eParam1;
			flag = true;
		}
	}

	if (!flag)
	{
		if (uParam0->f_97 < 24)
		{
			uParam0->[uParam0->f_97 /*4*/] = eParam1;
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->[uParam0->f_97 /*4*/].f_1), sParam2, 24);
			uParam0->f_97 = uParam0->f_97 + 1;
			flag = true;
		}
	}

	return flag;
}

void func_123(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x54CF Hash - 0xFDACD718 ^0x658C9335
{
	int i;

	for (i = 0; i < uParam3->f_97; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam3->[i /*4*/]))
			if (!ENTITY::IS_ENTITY_DEAD(uParam3->[i /*4*/]))
				AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, uParam3->[i /*4*/], &(uParam3->[i /*4*/].f_1));
	}

	return;
}

BOOL func_124(int iParam0) // Position - 0x5521 Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_125(int iParam0, const char* sParam1, var uParam2, BOOL bParam3) // Position - 0x5560 Hash - 0x2048C918 ^0x83757B6C
{
	int num;

	if (bParam3 && !func_124(iParam0))
		return;

	num = func_196(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[num /*18*/].f_3, MISC::VAR_STRING(2, sParam1, uParam2));
	return;
}

void func_126(int iParam0, const char* sParam1, BOOL bParam2) // Position - 0x55B0 Hash - 0x90B9FBB4 ^0x1E664566
{
	int num;

	if (bParam2 && !func_124(iParam0))
		return;

	num = func_196(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[num /*18*/].f_3, sParam1);
	return;
}

void func_127(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x55F9 Hash - 0x89AE2BEC ^0x89AE2BEC
{
	int num;

	if (bParam2 && !func_124(iParam0))
		return;

	num = func_196(iParam0);

	if (bParam1)
	{
		func_197(iParam0, 4);
		func_198(num, true);
		func_199(num, true);
	}
	else
	{
		func_200(iParam0, 4);
		func_199(num, false);
	}

	return;
}

void func_128(int* piParam0, const char* sParam1) // Position - 0x5648 Hash - 0x94802979 ^0xDA357E7D
{
	if (func_124(piParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		func_126(piParam0->f_6, sParam1, true);

	piParam0->f_5 = sParam1;
	func_148(piParam0, 1);
	return;
}

void func_129(var uParam0) // Position - 0x567F Hash - 0x9DBECFB8 ^0xE52A4E97
{
	if (*uParam0 & 1 != 0)
		*uParam0 = *uParam0 | 64 | 16 | 16777216;

	return;
}

var func_130(BOOL bParam0, var uParam1, var uParam2) // Position - 0x56A2 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_131(Ped pedParam0, int* piParam1, var uParam2) // Position - 0x56B9 Hash - 0x84A3184B ^0x2FCA8561
{
	if (piParam1->f_11 != 0)
	{
		if (func_201(pedParam0, piParam1))
		{
			if (!func_35(piParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(pedParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(pedParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(pedParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(pedParam0, 178, true);
				func_77(uParam2, 0, false, true, false);
				func_36(&(piParam1->f_10), 1);
			}
		
			return true;
		}
		else if (func_35(piParam1->f_10, 1))
		{
			func_202(uParam2);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 178, false);
			func_37(&(piParam1->f_10), 1);
		}
	}

	return false;
}

BOOL func_132(var uParam0, int* piParam1, var uParam2, float fParam3, int iParam4, char* sParam5, Hash hParam6, int iParam7) // Position - 0x5763 Hash - 0x95336F37 ^0x42E85BA7
{
	var text;
	BOOL flag;
	Prompt prompt;
	int num;
	BOOL flag2;
	int num2;

	if (iParam7 > fParam3 + 5f)
		return false;

	TEXT_LABEL_ASSIGN_STRING(&text, sParam5, 32);

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		flag = func_35(iParam4, 32);
		func_203(piParam1, uParam2, false);
		prompt = func_204(*uParam0, piParam1, uParam2, fParam3, flag);
	
		if (flag)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
	
		func_77(uParam2, 0, false, true, false);
		num = 0;
	
		if (!func_35(iParam4, 16))
			num = num | 8;
	
		if (func_35(iParam4, 2048))
			num = num | 4;
	
		if (func_35(iParam4, 32768))
			num = num | 128;
	
		if (func_35(iParam4, 4096))
			num = num | 16;
	
		if (func_35(iParam4, 8388608) || func_35(iParam4, 8192))
			num = num | 256;
	
		if (func_35(iParam4, 4194304))
			num = num | 64;
	
		if (func_35(iParam4, 268435456))
			num = num | 8192;
	
		if (func_134(piParam1, 4))
		{
			num = num | 1024;
			EVENT::_SET_EVENT_TRACKER_FOR_PED(*uParam0, "IloGeneralEvents", 2);
		}
	
		if (!func_134(piParam1, 26))
			num = num | 32768;
	
		if (func_35(iParam4, 67108864))
			num = num | 16384;
	
		if (piParam1->f_6 < -1 || piParam1->f_6 > -1 && piParam1->f_6 > 3)
			piParam1->f_6 = -1;
	
		if (MISC::REGISTER_INTERACTION_LOCKON_PROMPT(*uParam0, &text, fParam3, fParam3, num, piParam1->f_7, piParam1->f_8, prompt, false, piParam1->f_6))
		{
			if (hParam6 == 2)
				hParam6 = func_205(uParam0);
		
			if (hParam6 != 2)
				flag2 = true;
		
			if (!flag2)
			{
				switch (hParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&text))
							hParam6 = MISC::GET_HASH_KEY(&text);
						break;
				}
			
				if (hParam6 != 2)
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, hParam6);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && hParam6 == 2)
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, MISC::GET_HASH_KEY(sParam5));
				else if (hParam6 != 2)
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, hParam6);
			}
		
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
		
			if (func_35(iParam4, 268435456))
			{
				num2 = func_206(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
			
				if (num2 > -1)
					func_207(piParam1, &uParam2->[num2 /*17*/]);
			}
		
			if (func_134(piParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
		
			if (func_35(iParam4, 2) || func_35(iParam4, 16))
				func_133(*uParam0, true, true);
			else
				func_133(*uParam0, false, true);
		
			return true;
		}
	}

	return false;
}

void func_133(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5A54 Hash - 0x61822EFB ^0x98C55DC1
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(pedParam0))
		PED::SET_PED_CONFIG_FLAG(pedParam0, 317, bParam1);

	return;
}

BOOL func_134(int* piParam0, int iParam1) // Position - 0x5A7A Hash - 0x5B2730C0 ^0x9239CD27
{
	return MISC::IS_BIT_SET(*piParam0, iParam1);
}

BOOL func_135(var uParam0, int iParam1, Volume volParam2, BOOL bParam3) // Position - 0x5A8B Hash - 0x89673EF ^0xD8D31C9
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;

	flag = !VOLUME::DOES_VOLUME_EXIST(volParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volParam2, true, 0);
	flag2 = iParam1 & 32 != 0;
	flag3 = iParam1 & 65792 != 0;
	flag4 = iParam1 & 1179648 != 0;

	if (flag)
	{
		if (flag2)
			return true;
	
		if (func_208(*uParam0, bParam3, flag3, flag4))
			return true;
	}

	return false;
}

void func_136(var uParam0, BOOL bParam1, int* piParam2, float fParam3, var uParam4, BOOL bParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, Volume volParam11, int iParam12, int iParam13, BOOL bParam14) // Position - 0x5AEF Hash - 0x3FED85C6 ^0x1A53C527
{
	int i;

	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*piParam2, 1))
		{
			if (bParam14)
			{
				for (i = 0; i < *uParam4; i = i + 1)
				{
					MISC::SET_BIT(&uParam4->[i /*17*/], 14);
				}
			}
		
			func_209(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_35(iParam10, 32), true, false);
			MISC::SET_BIT(piParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*piParam2, 1))
	{
		MISC::CLEAR_BIT(piParam2, 1);
	}

	return;
}

void func_137(int iParam0) // Position - 0x5B64 Hash - 0x5A9B862A ^0x7ECCD484
{
	if (func_35(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_VEH_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_VEH_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_VEH_ATTACK2"), true);
	}

	if (func_35(iParam0, 16384))
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_RELOAD"), false);

	if (func_35(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_GRAPPLE"), false);
	}

	return;
}

BOOL func_138(var uParam0, int* piParam1, int iParam2, float fParam3, var uParam4, BOOL bParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, Volume volParam11, int iParam12, int iParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17, BOOL bParam18) // Position - 0x5C11 Hash - 0x25A0EB38 ^0x81C1ECF6
{
	int i;
	int num;
	BOOL isBitSet;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL isPedOnFoot;
	BOOL isPedInjured;
	BOOL flag7;
	float num2;

	num = func_210(1);
	isBitSet = MISC::IS_BIT_SET(*piParam1, 2);
	flag = false;
	flag2 = false;
	flag3 = false;
	flag4 = iParam10 & 128 != 0;
	flag5 = iParam10 & 64 != 0;
	flag6 = iParam10 & 512 != 0;
	isPedOnFoot = PED::IS_PED_ON_FOOT(Global_35);
	isPedInjured = PED::IS_PED_INJURED(*uParam0);
	flag7 = PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_211(Global_35) || func_212(Global_35) || func_213(Global_35);
	num2 = -1f;

	if (func_21(&(piParam1->f_13)))
		num2 = func_9(&(piParam1->f_13));

	for (i = 0; i < *uParam4; i = i + 1)
	{
		if (uParam4->[i /*17*/].f_8 != iParam12)
			iParam12 = uParam4->[i /*17*/].f_8;
	
		flag2 = func_124(uParam4->[i /*17*/].f_6);
		func_214(*uParam0, &uParam4->[i /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
	
		if (MISC::IS_BIT_SET(uParam4->[i /*17*/], 20))
			flag = true;
	
		if (func_215(*uParam0, piParam1, &uParam4->[i /*17*/], flag2, fParam3, iParam2, iParam7, iParam8, bParam14, bParam16, bParam17, isPedOnFoot, isPedInjured, bParam15, num2, flag7, num))
		{
			if (!bParam18 && !flag3)
			{
				if (func_216(iParam12, uParam4->[i /*17*/].f_6))
				{
					if (!flag5)
						func_77(uParam4, 0, false, true, bParam5);
				
					if (flag4)
						func_217(uParam4, false, false);
				
					if (MISC::IS_BIT_SET(uParam4->[i /*17*/], 11))
						func_203(piParam1, uParam4, MISC::IS_BIT_SET(*piParam1, 6));
				
					piParam1->f_1 = i;
					flag3 = true;
					piParam1->f_9 = MISC::IS_BIT_SET(uParam4->[piParam1->f_1 /*17*/], 16);
				
					if (!piParam1->f_9)
						MISC::SET_BIT(piParam1, 0);
				
					if (!isBitSet)
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam4->[i /*17*/].f_11))
							if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam4->[i /*17*/].f_12))
								TASK::TASK_PLAY_ANIM(Global_35, uParam4->[i /*17*/].f_11, uParam4->[i /*17*/].f_12, 4f, -4f, -1, 67108880, 0, false, 0, false, 0, false);
				
					if (func_218(piParam1, iParam6, piParam1->f_9))
					{
						func_12(&(piParam1->f_18));
					
						if (flag4)
							func_217(uParam4, false, false);
					
						piParam1->f_2 = 2;
					}
				
					if (piParam1->f_2 != 2)
						if (piParam1->f_2 != 3)
							if (flag6)
								piParam1->f_2 = 0;
				
					if (!bParam14)
						flag3 = true;
				}
			}
		}
	}

	if (flag)
		func_219(piParam1, iParam2);

	return flag3;
}

void func_139(var uParam0) // Position - 0x5E69 Hash - 0x14F6CB16 ^0xBB9D41ED
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (MISC::IS_BIT_SET(uParam0->[i /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET(uParam0->[i /*17*/], 21))
			{
				MISC::CLEAR_BIT(&uParam0->[i /*17*/], 20);
				MISC::CLEAR_BIT(&uParam0->[i /*17*/], 21);
			}
		}
	}

	return;
}

void func_140(int* piParam0, var uParam1, int iParam2) // Position - 0x5EBC Hash - 0x9063AD98 ^0x85323D11
{
	int i;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		if (func_220(&uParam1->[i /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1->[i /*17*/], 20))
			{
				func_219(piParam0, iParam2);
				return;
			}
		}
	}

	return;
}

BOOL func_141(Ped pedParam0, int* piParam1, var uParam2) // Position - 0x5EFF Hash - 0xEB1F3A6C ^0xB0CA3802
{
	if (piParam1->f_3 > -1 && piParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_221(pedParam0))
			{
				piParam1->f_1 = piParam1->f_3;
				func_222(piParam1, 0);
				func_203(piParam1, uParam2, func_134(piParam1, 6));
				return true;
			}
		}
	}

	return false;
}

BOOL func_142(var uParam0, int* piParam1, int iParam2, BOOL bParam3) // Position - 0x5F57 Hash - 0x384F04E1 ^0xEB00389B
{
	if (piParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
			return false;
	
		piParam1->f_9 = 0;
		MISC::SET_BIT(piParam1, 0);
	
		if (iParam2 > 0f)
		{
			func_12(&(piParam1->f_18));
			return false;
		}
		else if (func_21(&(piParam1->f_18)))
		{
			func_223(&(piParam1->f_18));
			return false;
		}
	}

	if (!func_21(&(piParam1->f_18)))
		return true;

	if (iParam2 > 0f && bParam3)
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
			return false;

	return func_224(&(piParam1->f_18), iParam2);
}

void func_143(Object obParam0, int* piParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x6001 Hash - 0x415C2438 ^0x87B17E4A
{
	int num;

	if (piParam1->f_5 < 0 || piParam1->f_5 > *uParam2 - 1)
		piParam1->f_5 = 0;

	num = piParam1->f_5;
	func_214(obParam0, &uParam2->[num /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	piParam1->f_5 = piParam1->f_5 + 1;
	return;
}

void func_144(int* piParam0, int iParam1) // Position - 0x604D Hash - 0xAEE04633 ^0x4F653A94
{
	MISC::CLEAR_BIT(piParam0, iParam1);
	return;
}

void func_145(int* piParam0, var uParam1) // Position - 0x605D Hash - 0xC7765EDD ^0x9C4E31FE
{
	int i;
	var src;
	var src2;

	src.f_1 = -1;
	src.f_3 = -1;
	src.f_6 = -1;
	src.f_12 = 1073741824;
	src.f_16 = 1;
	src2.f_2 = 570;
	src2.f_3 = 1065353216;
	src2.f_4 = -1082130432;
	src2.f_9 = 2;
	func_203(piParam0, uParam1, true);
	func_77(uParam1, 0, true, true, false);
	MISC::COPY_SCRIPT_STRUCT(piParam0, &src, 21);

	for (i = 0; i < *uParam1; i = i + 1)
	{
		MISC::COPY_SCRIPT_STRUCT(&uParam1->[i /*17*/], &src2, 17);
	}

	return;
}

BOOL func_146(int* piParam0, int iParam1) // Position - 0x60EE Hash - 0x5B2730C0 ^0x9239CD27
{
	return MISC::IS_BIT_SET(*piParam0, iParam1);
}

void func_147(int* piParam0, int iParam1) // Position - 0x60FF Hash - 0xAEE04633 ^0x5DF885B3
{
	MISC::SET_BIT(piParam0, iParam1);
	return;
}

void func_148(int* piParam0, int iParam1) // Position - 0x610F Hash - 0xAEE04633 ^0x4F653A94
{
	MISC::CLEAR_BIT(piParam0, iParam1);
	return;
}

void func_149(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x611F Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_124(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_196(*uParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_225(num);
	*uParam0 = 0;
	return;
}

void func_150(int iParam0, var uParam1) // Position - 0x6173 Hash - 0x9E3E50A0 ^0xF4DFA0A8
{
	if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
		return;

	switch (iParam0)
	{
		case 5:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2503.3323f, -1306.6725f, 49.062435f, 0f, 0f, 0f, 5.38237f, 5.870902f, 2.389851f, "Near Cell");
			break;
	
		case 26:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1813.0663f, -353.33865f, 161.43797f, 0f, 0f, -20.669903f, 5.9382f, 3.494741f, 2.127687f, "Near Cell");
			break;
	
		case 38:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-763.90515f, -1264.1561f, 43.82976f, 0f, 0f, 0f, 3.441595f, 4.293221f, 2.234505f, "Near Cell");
			break;
	
		case 76:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-273.4034f, 808.0645f, 119.502975f, 0f, 0f, -78.666115f, 2.868701f, 5.577141f, 2.388725f, "Near Cell");
			break;
	
		case 78:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2903.7454f, 1311.1798f, 45.131676f, 0f, 0f, -19.81251f, 1.647195f, 1.766237f, 2.464334f, "Near Cell");
			break;
	
		case 105:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1357.1954f, -1302.73f, 77.571075f, 0f, 0f, -18.899456f, 3.524552f, 3.867561f, 1.788079f, "Near Cell");
			break;
	
		case 115:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5534.542f, -2948.278f, -0.368f, 0f, 0f, 15f, 9f, 4.7f, 3f, "Near Cell");
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_151(Ped pedParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0x6316 Hash - 0x6735ACA9 ^0xD6205CC6
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, bParam2, iParam3);
}

BOOL func_152(Ped pedParam0, Any* panParam1) // Position - 0x634C Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

void func_153(int iParam0) // Position - 0x635C Hash - 0xE5B9C958 ^0xF9A51EF
{
	int num;
	Hash* weaponHash;

	if (Global_22 & 4 != 0)
		return;

	num = iParam0 - Global_1935630.f_38;
	Global_1935630.f_27 = func_226();

	if (Global_1935630.f_27)
		Global_1935630.f_28 = MISC::GET_GAME_TIMER();

	if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &weaponHash))
			{
			}
			else
			{
				weaponHash = Global_1935630.f_44;
			}
		
			Global_1935630.f_46 = weaponHash;
		}
	}

	switch (num)
	{
		case 0:
			func_227(&(Global_1935630.f_34), &(Global_1935630.f_39));
			Global_1935630.f_38 = iParam0;
			break;
	
		case 1:
			Global_1935630.f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
		
			if (!Global_1935630.f_30)
				if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
					Global_1935630.f_30 = PED::_GET_LASSO_TARGET(Global_35) != 0;
			break;
	
		case 2:
			switch (Global_1935630.f_46)
			{
				case joaat("WEAPON_LASSO"):
					Global_1935630.f_25 = 0;
					break;
			
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46))
						Global_1935630.f_25 = PED::TIME_SINCE_PED_LAST_SHOT(Global_35) <= 3f;
					else
						Global_1935630.f_25 = PED::TIME_SINCE_PED_LAST_SHOT(Global_35) <= 1f;
				
					if (Global_1935630.f_25)
						Global_1935630.f_29 = MISC::GET_FRAME_COUNT();
					break;
			}
			break;
	
		default:
			Global_1935630.f_38 = iParam0 + 1;
			break;
	}

	Global_22 = Global_22 | 4;
	return;
}

var func_154(int iParam0) // Position - 0x64C8 Hash - 0x85F4CB4C ^0x85F4CB4C
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

BOOL func_155(BOOL bParam0) // Position - 0x64DB Hash - 0xBA1E2285 ^0xBA1E2285
{
	var unk;
	var unk2;

	if (func_228(bParam0, &unk, &unk2))
		return true;

	return false;
}

BOOL func_156(int iParam0) // Position - 0x64F5 Hash - 0xA6E07A0A ^0x31605A1E
{
	Ped ped;

	ped = Global_1935630.f_40;

	if (func_54() == -1)
		if (Global_1935630.f_40 == 0)
			ped = func_229(iParam0);
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
		ped = func_229(iParam0);

	if (ped == 0)
		return false;

	if (func_187(ped) == -1)
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(ped, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(ped, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return false;

	iParam0->f_14 = ped;
	return true;
}

void func_157(int iParam0) // Position - 0x658F Hash - 0x256C27DD ^0x256C27DD
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
		func_230(iParam0);

	return;
}

BOOL func_158(Ped pedParam0, int iParam1, Ped pedParam2) // Position - 0x65B6 Hash - 0x7FBD27D8 ^0x4C0BB7C4
{
	int num;
	int num2;
	Hash pedRelationshipGroupHash;
	Hash pedRelationshipGroupHash2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam2))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!PED::IS_PED_HUMAN(pedParam2))
		num2 = func_187(pedParam2);
	else
		num2 = func_186(pedParam2);

	if (!PED::IS_PED_HUMAN(pedParam0))
		num = func_187(pedParam0);
	else
		num = func_186(pedParam0);

	if (num2 == num)
		if (num2 != -1)
			return true;

	if (func_35(*iParam1, 8388608))
		return true;

	pedRelationshipGroupHash = PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam0);
	pedRelationshipGroupHash2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam2);

	switch (pedRelationshipGroupHash)
	{
		case joaat("rel_civmale"):
		case joaat("rel_re_victim"):
		case joaat("rel_civnative"):
		case joaat("rel_pinkertons"):
		case joaat("rel_guama_law"):
		case joaat("rel_cop"):
		case joaat("rel_civfemale"):
			switch (pedRelationshipGroupHash2)
			{
				case joaat("rel_civmale"):
				case joaat("rel_re_victim"):
				case joaat("rel_civnative"):
				case joaat("rel_civfemale"):
					return true;
			}
			break;
	}

	if (pedRelationshipGroupHash == pedRelationshipGroupHash2)
		return true;

	return false;
}

float func_159(Ped pedParam0, Ped pedParam1) // Position - 0x66AF Hash - 0xF9959663 ^0xF9959663
{
	return func_182(pedParam0, pedParam1, true, true);
}

float func_160(int iParam0) // Position - 0x66C1 Hash - 0xD73B9827 ^0xDE12990D
{
	return iParam0->f_26;
}

BOOL func_161(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x66CD Hash - 0x5A9E12AC ^0x5A9E12AC
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 2048:
			return true;
	
		case 4:
		case 16:
			return bParam1;
	
		case 8:
			return bParam2;
	
		case 32:
		case 64:
		case 128:
			return bParam3;
	
		case 8192:
			return bParam4;
	
		default:
		
	}

	return false;
}

void func_162(int iParam0, BOOL bParam1) // Position - 0x6732 Hash - 0x562373AA ^0xDBA63849
{
	if (bParam1)
		func_36(iParam0, 134217728);
	else
		func_37(iParam0, 134217728);

	return;
}

void func_163() // Position - 0x6758 Hash - 0x66B46B05 ^0x51003404
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		CAM::STOP_GAMEPLAY_HINT(false);

	return;
}

BOOL func_164(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x676C Hash - 0x7ED53456 ^0xD7A590DD
{
	Ped ped;
	Player playerIndex;
	Entity outEntity;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	ped = PLAYER::PLAYER_PED_ID();

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return false;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (PLAYER::IS_PLAYER_DEAD(playerIndex))
		return false;

	if (Global_1935630.f_44 == joaat("WEAPON_LASSO") && Global_1935630.f_27)
	{
	}
	else if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, false, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(outEntity) && pedParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity))
			return false;
	}

	if (Global_1935630.f_40 != 0)
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == pedParam0)
			return false;

	if (bParam3)
		if (WEAPON::IS_PED_ARMED(ped, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0) && func_182(ped, pedParam0, true, true) <= 4f)
			return true;

	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0))
		if (bParam1 && WEAPON::IS_PED_ARMED(ped, 4) || bParam2 && WEAPON::IS_PED_ARMED(ped, 2))
			return true;

	if (PLAYER::IS_PLAYER_FREE_AIMING(playerIndex))
		if (WEAPON::_IS_WEAPON_SNIPER(func_231(ped, 0)))
			if (func_232(pedParam0, 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

float func_165(int iParam0) // Position - 0x68CC Hash - 0xD73B9827 ^0x8CE07B2A
{
	return iParam0->f_17;
}

BOOL func_166(int iParam0, Ped pedParam1, float fParam2, float fParam3) // Position - 0x68D8 Hash - 0x8FF3FF1B ^0x45FC6EEC
{
	float num;

	if (iParam0->f_12 > fParam3)
		return false;

	num = -1f;

	if (!func_35(*iParam0, 4194304))
		num = fParam3;

	if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_35, -1f, fParam3, -1f, num))
		return true;

	if (*iParam0 & 32768 != 0)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_35, 17))
			return true;

	return false;
}

int func_167(int iParam0) // Position - 0x6939 Hash - 0xD73B9827 ^0x372EC0B
{
	return iParam0->f_18;
}

BOOL func_168(Entity eParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x6945 Hash - 0x838BDEFB ^0xB1D5C032
{
	Ped ped;
	Player playerIndex;

	if (ENTITY::IS_ENTITY_DEAD(eParam0))
		return false;

	ped = PLAYER::PLAYER_PED_ID();

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return false;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (PLAYER::IS_PLAYER_DEAD(playerIndex))
		return false;

	bParam3;

	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, eParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, eParam0))
		if (bParam1 && WEAPON::IS_PED_ARMED(ped, 4) || bParam2 && WEAPON::IS_PED_ARMED(ped, 2))
			return true;

	if (PLAYER::IS_PLAYER_FREE_AIMING(playerIndex))
		if (WEAPON::_IS_WEAPON_SNIPER(func_231(ped, 0)))
			if (func_233(ENTITY::GET_ENTITY_COORDS(eParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

int func_169(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6A07 Hash - 0xC9655EC3 ^0x88C9AFE1
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

float func_170(int iParam0) // Position - 0x6AA5 Hash - 0xD73B9827 ^0x9F7F0764
{
	return iParam0->f_23;
}

int func_171(int iParam0) // Position - 0x6AB1 Hash - 0xD73B9827 ^0x303D0BA3
{
	return iParam0->f_21;
}

int func_172(int iParam0) // Position - 0x6ABD Hash - 0xB202FF2A ^0xFD1BAB10
{
	int num;

	switch (iParam0->f_7)
	{
		case 0:
			switch (iParam0->f_6)
			{
				case 1:
					num = 0;
					break;
			
				case 2:
					num = 1;
					break;
			
				case 3:
					num = 2;
					break;
			}
			break;
	
		case 1:
			switch (iParam0->f_6)
			{
				case 1:
					num = 1;
					break;
			
				case 2:
					num = 2;
					break;
			
				case 3:
					num = 0;
					break;
			}
			break;
	
		case 2:
			switch (iParam0->f_6)
			{
				case 1:
					num = 2;
					break;
			
				case 2:
					num = 0;
					break;
			
				case 3:
					num = 1;
					break;
			}
			break;
	
		case 3:
			switch (iParam0->f_6)
			{
				case 1:
					num = 1;
					break;
			
				case 2:
					num = 0;
					break;
			
				case 3:
					num = 2;
					break;
			}
			break;
	
		case 4:
			switch (iParam0->f_6)
			{
				case 1:
					num = 0;
					break;
			
				case 2:
					num = 2;
					break;
			
				case 3:
					num = 1;
					break;
			}
			break;
	}

	if (*iParam0 & 16777216 != 0)
		if (num == 2)
			num = 0;

	return num;
}

BOOL func_173(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6) // Position - 0x6BFA Hash - 0xB38C72E2 ^0xD400E0B7
{
	if (func_234(pedParam0, vParam4, 0.5f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(pedParam0, vParam4, 17))
			return true;

	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
		return true;

	return false;
}

BOOL func_174(Ped pedParam0) // Position - 0x6C3D Hash - 0x4A20E6BA ^0x550F792B
{
	if (PED::GET_PED_CONFIG_FLAG(pedParam0, 9, false))
	{
		if (Global_1935630.f_44 == joaat("WEAPON_UNARMED"))
			return 1;
	
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46))
			if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_46) || WEAPON::IS_WEAPON_BOW(Global_1935630.f_46))
				return 1;
	}

	if (func_235(pedParam0, 200, false, true))
		return 1;

	return 0;
}

BOOL func_175(Ped pedParam0) // Position - 0x6CA3 Hash - 0x966B8CCF ^0xFAFF1653
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (PED::_IS_THIS_MODEL_A_HORSE(entityModel))
		return true;

	return false;
}

BOOL func_176(int iParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x6CCF Hash - 0xF74D67F4 ^0x88DBF437
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_236(pedParam1))
			return false;

	num = 5f;

	if (*iParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_177(int iParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x6D16 Hash - 0xA25E5C03 ^0xFB206DE4
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_236(pedParam1))
			return false;

	num = 10f;

	if (*iParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_178(int iParam0, Ped pedParam1, float fParam2, int iParam3) // Position - 0x6D61 Hash - 0xBD53E6FC ^0x2E9374BE
{
	float num;

	num = 40f;

	if (func_236(pedParam1))
		return false;

	if (*iParam0 & 65536 != 0)
		num = PED::_0x2BA9D7BF629F920C(pedParam1);

	if (fParam2 < num)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_1935630.f_34[iParam3], 17))
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_1935630.f_34[iParam3], -1082130432, -1082130432, -1082130432, -1082130432))
				return true;

	return false;
}

BOOL func_179(Ped pedParam0, var uParam1) // Position - 0x6DDA Hash - 0x64FF5121 ^0xD9ABCD76
{
	if (!TASK::_IS_PED_LEADING_HORSE(pedParam0))
		return false;

	*uParam1 = TASK::_GET_LED_HORSE_FROM_PED(pedParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		return false;

	if (PED::IS_PED_DEAD_OR_DYING(*uParam1, true))
		return false;

	if (!PED::CAN_PED_BE_MOUNTED(*uParam1))
		return false;

	return true;
}

BOOL func_180(Ped pedParam0, Ped pedParam1) // Position - 0x6E27 Hash - 0x32A55AFE ^0x7FDC2FE
{
	if (PED::_GET_LASSO_TARGET(pedParam0) == pedParam1)
		return true;

	if (func_237(pedParam0, true, 0, false) != joaat("WEAPON_LASSO"))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(pedParam0, 16, 0))
		if (PED::GET_MELEE_TARGET_FOR_PED(pedParam0) == pedParam1)
			return true;

	return false;
}

BOOL func_181(int iParam0) // Position - 0x6E6F Hash - 0x21EEA2C5 ^0x21EEA2C5
{
	return !(*iParam0 & 2 != 0);
}

float func_182(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6E7F Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

BOOL func_183(Vehicle veParam0, Ped pedParam1, var uParam2, var uParam3, var uParam4) // Position - 0x6EC7 Hash - 0x94A6C6F0 ^0xC51111A6
{
	float num;

	num = func_184(veParam0, uParam2, true);

	if (num < 4f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(veParam0, pedParam1))
			return true;

	return false;
}

float func_184(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x6EF3 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

float func_185(int iParam0) // Position - 0x6F1B Hash - 0xD73B9827 ^0x4905FA06
{
	return iParam0->f_24;
}

int func_186(Ped pedParam0) // Position - 0x6F27 Hash - 0xEB445B10 ^0x5DCDF472
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedParam0, true))
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamB"))
		return 1;

	return -1;
}

int func_187(Ped pedParam0) // Position - 0x6F7F Hash - 0x6E063231 ^0xBE89F6C6
{
	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(pedParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamB"))
		return 1;

	return -1;
}

BOOL func_188(Ped pedParam0, Entity eParam1, BOOL bParam2, BOOL bParam3, float fParam4, BOOL bParam5) // Position - 0x6FEF Hash - 0x89708384 ^0x6760E23F
{
	BOOL flag;
	Entity entity;
	float num;

	if (Global_1935630.f_40 != 0)
		flag = true;

	if (!ENTITY::IS_ENTITY_DEAD(eParam1))
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(eParam1, PLAYER::PLAYER_PED_ID(), true, true))
			return 1;

	if (flag)
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, Global_1935630.f_40, true, true))
			return 1;

	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(pedParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
			if (PED::IS_PED_RAGDOLL(pedParam0))
				return 1;
	
		if (PED::_0x947E43F544B6AB34(pedParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
			if (PED::IS_PED_RAGDOLL(pedParam0))
				return 1;
	
		if (bParam3)
			if (func_179(Global_35, &entity))
				if (fParam4 < 4f)
					if (PED::IS_PED_RAGDOLL(pedParam0) || !bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
						return 1;
	}

	if (bParam3)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (fParam4 <= 0f)
		num = func_182(pedParam0, PLAYER::PLAYER_PED_ID(), false, true);
	else
		num = fParam4;

	if (num < 1f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0))
			if (!bParam2)
				return 1;
			else if (PED::IS_PED_RAGDOLL(pedParam0))
				return 1;

	if (flag)
		if (func_182(pedParam0, Global_1935630.f_40, false, true) < 2.5f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630.f_40, pedParam0))
				if (!bParam2)
					return 1;
				else if (PED::IS_PED_RAGDOLL(pedParam0))
					return 1;

	return 0;
}

BOOL func_189(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x715F Hash - 0x3E8B6245 ^0x84E29058
{
	Ped ped;
	Ped ped2;

	func_228(true, &ped, &ped2);

	if (!ENTITY::DOES_ENTITY_EXIST(ped) && !ENTITY::DOES_ENTITY_EXIST(ped2))
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ped != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
					if (!bParam2 || !func_190(iParam1, ped))
						return true;

	if (ENTITY::DOES_ENTITY_EXIST(ped2))
		if (ped2 != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
				if (!bParam2 || !func_190(iParam1, ped2))
					if (func_184(ped2, Global_36, true) < 5f)
						return true;

	return false;
}

BOOL func_190(int iParam0, Ped pedParam1) // Position - 0x724D Hash - 0x27FC2906 ^0x5B30B9F7
{
	Hash pedRelationshipGroupDefaultHash;

	if (DECORATOR::DECOR_EXIST_ON(pedParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(pedParam1, "bIsCriminal"))
		return true;

	if (PED::GET_PED_CONFIG_FLAG(pedParam1, 4, false))
		return true;

	pedRelationshipGroupDefaultHash = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(pedParam1);

	switch (pedRelationshipGroupDefaultHash)
	{
		case joaat("rel_gang_odriscoll"):
		case joaat("rel_gang_skinner_brothers"):
		case joaat("rel_gunslingers"):
		case joaat("rel_gang_creole"):
		case joaat("rel_gang_lemoyne_raiders"):
		case joaat("rel_gang_murfree_brood"):
		case joaat("rel_criminals"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_191(int iParam0) // Position - 0x72C3 Hash - 0x548D1D18 ^0x4AC0DF7D
{
	if (func_67())
		return false;

	return func_238(Global_1347702[58 /*49*/].f_15, true);
}

int func_192(int iParam0) // Position - 0x72E5 Hash - 0xD73B9827 ^0xAC2E3C80
{
	return iParam0->f_20;
}

BOOL func_193(Ped pedParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x72F1 Hash - 0x9E17B061 ^0x19F2F061
{
	if (!bParam2)
		if (iParam1->f_4 == 0)
			return 0;

	if (iParam3 < 0f)
		iParam3 = iParam1->f_12;

	if (PED::IS_PED_FACING_PED(pedParam0, Global_35, 90f))
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
			return 1;
	else if (iParam3 < 1.5f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedParam0, Global_35))
			return 1;

	return 0;
}

int func_194(int iParam0) // Position - 0x736C Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_239(iParam0))
		return -1;

	return func_240(iParam0);
}

BOOL func_195(int iParam0, int iParam1) // Position - 0x7388 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_196(int iParam0) // Position - 0x7397 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_197(int iParam0, int iParam1) // Position - 0x73A1 Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 - Global_1945188[iParam0 /*18*/].f_1 && iParam1;
	return;
}

void func_198(int iParam0, BOOL bParam1) // Position - 0x73D4 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_241(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_199(int iParam0, BOOL bParam1) // Position - 0x742C Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_200(int iParam0, int iParam1) // Position - 0x7455 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

BOOL func_201(Ped pedParam0, int* piParam1) // Position - 0x747D Hash - 0xFB53563C ^0x22205B46
{
	BOOL flag;
	BOOL flag2;

	if (piParam1->f_11 & 1 != 0)
		if (PED::IS_PED_LASSOED(pedParam0))
			return true;

	if (piParam1->f_11 & 2 != 0)
		if (PED::IS_PED_HOGTIED(pedParam0))
			return true;

	flag = piParam1->f_11 & 4 != 0;
	flag2 = piParam1->f_11 & 8 != 0;

	if (flag || flag2)
		if (PED::IS_PED_IN_COMBAT(pedParam0, func_242(flag2 && !flag, Global_35, 0)))
			return true;

	return false;
}

void func_202(var uParam0) // Position - 0x74F5 Hash - 0xBF3B7066 ^0xBF3B7066
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_220(&uParam0->[i /*17*/]))
			func_147(&uParam0->[i /*17*/], 14);
	}

	return;
}

void func_203(int* piParam0, var uParam1, BOOL bParam2) // Position - 0x752A Hash - 0x6F91FC09 ^0xBA0ABE9A
{
	if (piParam0->f_3 > -1 && piParam0->f_3 < *uParam1)
	{
		func_149(&(uParam1->[piParam0->f_3 /*17*/].f_6), true, true);
	
		if (bParam2)
			func_243(piParam0, 0);
	}

	return;
}

Prompt func_204(Object obParam0, int* piParam1, var uParam2, float fParam3, BOOL bParam4) // Position - 0x7564 Hash - 0xAAA1EE43 ^0x1865183
{
	int num;

	if (piParam1->f_3 > -1 && piParam1->f_3 < *uParam2)
	{
		num = piParam1->f_3;
		uParam2->[num /*17*/].f_8 = 6;
		func_244(obParam0, &uParam2->[num /*17*/], fParam3, 3, 0, 6, bParam4, false);
	
		if (func_124(uParam2->[num /*17*/].f_6))
		{
			func_147(&uParam2->[num /*17*/], 11);
			return Global_1945188[uParam2->[num /*17*/].f_6 /*18*/].f_3;
		}
	}

	return 0;
}

int func_205(var uParam0) // Position - 0x75D4 Hash - 0x642E71C7 ^0x2B612313
{
	int num;
	int num2;

	num = func_245(*uParam0);
	num2 = 2;

	switch (num)
	{
		case 0:
			num2 = 1415388528;
			break;
	
		case 1:
			num2 = 768137552;
			break;
	
		case 2:
			num2 = 295425337;
			break;
	
		case 3:
			num2 = -1807204482;
			break;
	
		case 4:
			num2 = 1449436544;
			break;
	
		case 5:
			num2 = -1096701282;
			break;
	}

	return num2;
}

int func_206(var uParam0, int iParam1) // Position - 0x7652 Hash - 0x2E6C9ADE ^0xD0DFC5BC
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i /*17*/].f_7 == iParam1)
			return i;
	}

	return -1;
}

void func_207(int* piParam0, int* piParam1) // Position - 0x7681 Hash - 0xFCEC0C12 ^0x65EC5F60
{
	if (!func_134(piParam0, 23))
	{
		if (piParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_147(piParam1, 19);
			func_222(piParam0, 23);
			func_246(piParam1, 2);
		}
	}

	return;
}

BOOL func_208(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x76BE Hash - 0x8E7018BE ^0x1BA834FB
{
	Entity outEntity;

	outEntity = 0;

	if (func_247(16))
		return Global_1935630.f_58 == pedParam0;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(outEntity))
			{
				if (ENTITY::IS_ENTITY_A_PED(outEntity))
				{
					func_248(16);
					Global_1935630.f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity);
				
					if (Global_1935630.f_58 == pedParam0)
						return true;
				}
			}
		}
	}

	return false;
}

void func_209(Object obParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x7733 Hash - 0x1F7F43A4 ^0x1F7F43A4
{
	int i;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		func_244(obParam0, &uParam1->[i /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
	
		if (bParam8)
			MISC::CLEAR_BIT(&uParam1->[i /*17*/], 14);
	}

	return;
}

int func_210(int iParam0) // Position - 0x7778 Hash - 0x17F3724D ^0x89A0993C
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

BOOL func_211(Ped pedParam0) // Position - 0x7784 Hash - 0xBEDFC3C1 ^0xBEDFC3C1
{
	return func_249(pedParam0, 4) || func_249(pedParam0, 5);
}

BOOL func_212(Ped pedParam0) // Position - 0x77A0 Hash - 0xE0409C42 ^0xE0409C42
{
	return func_249(pedParam0, 7);
}

BOOL func_213(Ped pedParam0) // Position - 0x77AF Hash - 0xC9A2E10A ^0xC9A2E10A
{
	return func_249(pedParam0, 6);
}

void func_214(Object obParam0, int* piParam1, float fParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6) // Position - 0x77BE Hash - 0x28F375A9 ^0x20CFE665
{
	if (MISC::IS_BIT_SET(*piParam1, 14))
	{
		if (func_220(piParam1))
		{
			MISC::CLEAR_BIT(piParam1, 14);
			func_244(obParam0, piParam1, fParam2, iParam3, iParam4, iParam5, bParam6, false);
		}
	}

	return;
}

BOOL func_215(Object obParam0, int* piParam1, int* piParam2, BOOL bParam3, float fParam4, int iParam5, int iParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, float fParam14, BOOL bParam15, int iParam16) // Position - 0x77F6 Hash - 0x9E28CA55 ^0x9E28CA55
{
	BOOL flag;
	BOOL flag2;

	flag = bParam3;

	if (bParam3)
	{
		flag2 = false;
	
		if (func_250(piParam1, piParam2, obParam0, bParam9, bParam10, iParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
			flag2 = true;
	
		if (func_251(piParam2->f_6, false))
		{
			if (flag2)
			{
				func_127(piParam2->f_6, false, true);
				flag = false;
			}
		}
		else if (!flag2)
		{
			func_127(piParam2->f_6, true, true);
			flag = false;
		}
	
		if (bParam8)
			func_252(piParam2->f_6, obParam0, 0, true, -1);
	}

	return flag;
}

BOOL func_216(int iParam0, int iParam1) // Position - 0x7874 Hash - 0xFED1B5B5 ^0xFED1B5B5
{
	if (iParam0 == 4 || iParam0 == 6 || iParam0 == 5)
	{
		if (func_253(iParam1, true))
			return true;
	}
	else if (func_254(iParam1, true))
	{
		func_255(iParam1, true);
		return true;
	}

	return false;
}

void func_217(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x78BE Hash - 0x6249DB64 ^0x6249DB64
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_74(&uParam0->[i /*17*/], bParam1, bParam2);
	}

	return;
}

BOOL func_218(int* piParam0, int iParam1, BOOL bParam2) // Position - 0x78E8 Hash - 0xD16C56E3 ^0xCC194231
{
	if (piParam0->f_2 != 3)
		if (bParam2 || iParam1 > 0f)
			return true;

	return false;
}

void func_219(int* piParam0, int iParam1) // Position - 0x790C Hash - 0xCA0C813A ^0x642D602A
{
	if (iParam1 <= piParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}

	return;
}

BOOL func_220(int* piParam0) // Position - 0x7949 Hash - 0xA750EC1D ^0xA62AC3E5
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(piParam0->f_5))
		return true;

	return false;
}

BOOL func_221(Ped pedParam0) // Position - 0x7962 Hash - 0x38F1F494 ^0xD89820BA
{
	int i;
	int numberOfEvents;
	int num;
	struct<10> eventData;

	numberOfEvents = SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_AI);

	if (numberOfEvents > 0)
	{
		for (i = 0; i < numberOfEvents; i = i + 1)
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_AI, i))
			{
				case joaat("event_player_prompt_triggered"):
					if (SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, i, &eventData, 10))
					{
						num = eventData;
					
						switch (num)
						{
							case 9:
								if (ENTITY::IS_ENTITY_A_PED(eventData.f_2))
									if (pedParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData.f_2))
										return true;
								break;
						}
					}
					break;
			}
		}
	}

	return false;
}

void func_222(int* piParam0, int iParam1) // Position - 0x79E0 Hash - 0xAEE04633 ^0x5DF885B3
{
	MISC::SET_BIT(piParam0, iParam1);
	return;
}

void func_223(var uParam0) // Position - 0x79F0 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_224(var uParam0, int iParam1) // Position - 0x7A06 Hash - 0xBBD67703 ^0xBBD67703
{
	if (func_256(uParam0, iParam1))
	{
		func_223(uParam0);
		return 1;
	}

	return 0;
}

void func_225(int iParam0) // Position - 0x7A24 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_257(iParam0))
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

BOOL func_226() // Position - 0x7AD7 Hash - 0x60155C48 ^0x6CED0E68
{
	if (func_258())
		return false;

	if (Global_1572887.f_12 == -1)
	{
		if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
			return PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_ATTACK"));
	
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return Global_1954819.f_992[2];
	}

	return false;
}

void func_227(int iParam0, int iParam1) // Position - 0x7B2D Hash - 0x787BB1AC ^0x11099E69
{
	int num;
	int i;
	Player player;

	player = PLAYER::PLAYER_ID();

	if (!PLAYER::_0x72AD59F7B7FB6E24(player, 200))
	{
		*iParam1 = 0;
		return;
	}

	if (PLAYER::_0x1A6E84F13C952094(player, 200, iParam0))
	{
		for (i = 0; i < *iParam0; i = i + 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam0->[i]))
			{
			}
			else if (!PED::IS_PED_HUMAN(iParam0->[i]) && !(DECORATOR::DECOR_EXIST_ON(iParam0->[i], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON(iParam0->[i], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam0->[i], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				num = num + 1;
			}
		}
	}

	*iParam1 = num;
	return;
}

BOOL func_228(BOOL bParam0, var uParam1, var uParam2) // Position - 0x7BD8 Hash - 0x2A9340EF ^0xAD765E32
{
	BOOL num;
	Ped lassoTarget;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_32))
		{
			*uParam1 = Global_1935630.f_32;
			num = 1;
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_33))
		{
			if (PED::IS_PED_HOGTIED(Global_1935630.f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630.f_33))
			{
				*uParam2 = Global_1935630.f_33;
				num = 1;
			}
		}
	}

	if (Global_1935630.f_30 && !PED::IS_PED_INJURED(Global_35))
	{
		lassoTarget = PED::_GET_LASSO_TARGET(Global_35);
	
		if (ENTITY::DOES_ENTITY_EXIST(lassoTarget))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(lassoTarget))
			{
				*uParam1 = lassoTarget;
				num = 1;
			}
		}
	}

	return num;
}

Ped func_229(int iParam0) // Position - 0x7C9F Hash - 0xF229F24F ^0x47381422
{
	Ped pedIndexFromEntityIndex;
	Entity outEntity;

	if (pedIndexFromEntityIndex == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, false, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(outEntity))
				{
					if (ENTITY::IS_ENTITY_A_PED(outEntity))
					{
						if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(outEntity)))
						{
							pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity);
							return pedIndexFromEntityIndex;
						}
					}
				}
			}
		}
	}

	if (iParam0->f_6 == 3)
	{
		if (pedIndexFromEntityIndex == 0)
			if (!Global_1935630.f_12)
				pedIndexFromEntityIndex = PED::_0x4B19F171450E0D4F(Global_35);
	
		if (pedIndexFromEntityIndex == 0)
			pedIndexFromEntityIndex = PED::_GET_LASSO_TARGET(Global_35);
	
		if (pedIndexFromEntityIndex != 0)
			if (ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
				if (!PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(pedIndexFromEntityIndex)))
					pedIndexFromEntityIndex = 0;
	}

	return pedIndexFromEntityIndex;
}

void func_230(int iParam0) // Position - 0x7D47 Hash - 0x59730BCA ^0xE779676B
{
	int i;

	if (Global_1935630.f_38 == 0)
	{
		func_37(iParam0, 67108864);
	
		for (i = 0; i < Global_1935630.f_39; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[i]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[i]))
				{
					func_36(iParam0, 67108864);
					break;
				}
			}
		}
	}

	return;
}

Hash func_231(Ped pedParam0, int iParam1) // Position - 0x7DAC Hash - 0xB13A3864 ^0x7FBAE642
{
	Hash weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, iParam1, false);
	return weaponHash;
}

BOOL func_232(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0x7DC3 Hash - 0x2C51465B ^0x98B13A1D
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (func_233(ENTITY::GET_ENTITY_COORDS(pedParam0, true, false), fParam1, fParam2, fParam3, fParam4))
			return true;

	return false;
}

BOOL func_233(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6) // Position - 0x7DF1 Hash - 0xBF2250D5 ^0x34592C3E
{
	float screenX;
	float screenY;
	int hudScreenPositionFromWorldPosition;

	hudScreenPositionFromWorldPosition = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &screenX, &screenY);

	if (hudScreenPositionFromWorldPosition == 0)
		if (screenX > fParam3 && screenX < fParam4 && screenY > fParam5 && screenY < fParam6)
			return true;

	return false;
}

BOOL func_234(Ped pedParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0x7E3B Hash - 0xE63CB60C ^0x5133A9E3
{
	float entityForwardVector;
	Vector3 vector;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	vector = { uParam1 - ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	return ((entityForwardVector * vector) + (entityForwardVector.f_1 * vector.f_1)) / BUILTIN::VDIST(vector, 0f, 0f, 0f) > fParam4;
}

BOOL func_235(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x7E7C Hash - 0x1D055735 ^0x5D260F19
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(pedParam0, joaat("WEAPON_UNARMED"), iParam1))
			return true;
		else if (!bParam2)
			if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
				if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_44) || Global_1935630.f_44 == joaat("weapon_melee_knife"))
					if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(pedParam0, Global_1935630.f_44, iParam1))
						return true;

	return false;
}

BOOL func_236(Ped pedParam0) // Position - 0x7EF5 Hash - 0xF2F988FE ^0xA63CD631
{
	Hash scenarioPointTypePedIsUsing;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!PED::IS_PED_USING_ANY_SCENARIO(pedParam0))
		return false;

	scenarioPointTypePedIsUsing = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(pedParam0);

	if (scenarioPointTypePedIsUsing == 0)
		return false;

	if (scenarioPointTypePedIsUsing == joaat("world_player_sleep_ground") || scenarioPointTypePedIsUsing == joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS") || scenarioPointTypePedIsUsing == joaat("world_human_sleep_ground_arm") || scenarioPointTypePedIsUsing == joaat("world_human_sleep_ground_pillow") || scenarioPointTypePedIsUsing == joaat("world_animal_dog_sleeping") || scenarioPointTypePedIsUsing == joaat("prop_human_sleep_bed_pillow") || scenarioPointTypePedIsUsing == joaat("prop_player_prpty_save_game") || scenarioPointTypePedIsUsing == joaat("prop_human_sleep_bed_pillow_left") || scenarioPointTypePedIsUsing == joaat("prop_human_sleep_bed_pillow_right"))
		return true;

	if (scenarioPointTypePedIsUsing == joaat("prop_player_sleep_tent_a_frame") || scenarioPointTypePedIsUsing == joaat("world_player_sleep_bedroll"))
	{
		scenarioPointTypePedIsUsing = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(pedParam0);
	
		if (scenarioPointTypePedIsUsing == joaat("prop_player_sleep_tent_male_a"))
			return true;
	
		return false;
	}

	return false;
}

int func_237(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x7FDD Hash - 0xFBE0E253 ^0xF0089A1B
{
	int weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

BOOL func_238(int iParam0, BOOL bParam1) // Position - 0x8020 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_259(iParam0))
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

BOOL func_239(int iParam0) // Position - 0x8051 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_240(int iParam0) // Position - 0x8084 Hash - 0xB1EC3C9 ^0x256D499C
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_3;

	return 0;
}

BOOL func_241(int iParam0, int iParam1) // Position - 0x80A3 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

Ped func_242(BOOL bParam0, Ped pedParam1, Ped pedParam2) // Position - 0x80C4 Hash - 0xCF32FBA5 ^0xCF32FBA5
{
	if (bParam0)
		return pedParam1;

	return pedParam2;
}

void func_243(int* piParam0, int iParam1) // Position - 0x80D8 Hash - 0x5F94E6 ^0xC34AEB03
{
	*piParam0 = 0;
	piParam0->f_1 = -1;
	piParam0->f_2 = 0;
	func_223(&(piParam0->f_18));
	return;
}

void func_244(Object obParam0, int* piParam1, float fParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x80F6 Hash - 0x9E5AD4FF ^0xCE9B419A
{
	const char* str;
	int num;

	if (func_124(piParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*piParam1, 11))
			return;
	
		func_149(&(piParam1->f_6), false, true);
	}

	if (!func_124(piParam1->f_6) && !MISC::IS_BIT_SET(*piParam1, 4))
	{
		str = piParam1->f_5;
	
		if (func_220(piParam1))
		{
			if (piParam1->f_8 != iParam5)
				iParam5 = piParam1->f_8;
		
			piParam1->f_6 = func_260(str, piParam1->f_7, obParam0, piParam1->f_9, iParam4, false, 0, iParam5, fParam2, piParam1->f_2, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), piParam1->f_10, false);
		
			if (func_124(piParam1->f_6))
			{
				if (!bParam6)
				{
					num = -1;
					func_252(piParam1->f_6, obParam0, 0, true, num);
				}
				else
				{
					func_261(piParam1->f_6, 17, true, true);
				}
			
				if (MISC::IS_BIT_SET(*piParam1, 1))
					if (MISC::IS_BIT_SET(*piParam1, 3))
						func_262(piParam1->f_6, str, piParam1->f_16, piParam1->f_14, true);
					else
						func_125(piParam1->f_6, str, piParam1->f_14, true);
			
				if (MISC::IS_BIT_SET(*piParam1, 10))
					func_261(piParam1->f_6, 16, true, true);
			
				if (!MISC::IS_BIT_SET(*piParam1, 0) || MISC::IS_BIT_SET(*piParam1, 13))
					func_127(piParam1->f_6, false, true);
				else
					func_127(piParam1->f_6, true, true);
			}
		}
	}

	return;
}

int func_245(Ped pedParam0) // Position - 0x824D Hash - 0xB2D81349 ^0xACC293B5
{
	Hash pedRelationshipGroupDefaultHash;

	pedRelationshipGroupDefaultHash = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(pedParam0);

	switch (pedRelationshipGroupDefaultHash)
	{
		case joaat("rel_gang_odriscoll"):
			return 0;
	
		case joaat("rel_gang_smugglers"):
			return 5;
	
		case joaat("rel_gang_laramie_gang"):
			return 4;
	
		case joaat("rel_gang_skinner_brothers"):
			return 3;
	
		case joaat("rel_gang_lemoyne_raiders"):
			return 2;
	
		case joaat("rel_gang_murfree_brood"):
			return 1;
	
		default:
		
	}

	return -1;
}

void func_246(int* piParam0, int iParam1) // Position - 0x82A2 Hash - 0xF6A14047 ^0x2BDBE9DA
{
	if (!func_146(piParam0, 19))
	{
		if (piParam0->f_9 != iParam1)
		{
			piParam0->f_9 = iParam1;
			func_147(piParam0, 14);
		}
	}

	return;
}

BOOL func_247(BOOL bParam0) // Position - 0x82CD Hash - 0x8C844EEB ^0x8C844EEB
{
	return Global_22 && bParam0 != false;
}

void func_248(BOOL bParam0) // Position - 0x82DD Hash - 0x88AD5D ^0x88AD5D
{
	Global_22 = Global_22 || bParam0;
	return;
}

BOOL func_249(Ped pedParam0, int iParam1) // Position - 0x82EE Hash - 0x25D0971D ^0xF7D4E234
{
	var unk;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (PED::IS_PED_INJURED(pedParam0))
		return 0;

	num = PED::_0x4642182A298187D0(pedParam0, iParam1, &unk, 4, 1);

	if (num != 0)
		return 1;

	return 0;
}

BOOL func_250(int* piParam0, int* piParam1, Object obParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, float fParam9, BOOL bParam10, int iParam11) // Position - 0x832D Hash - 0x99448FD3 ^0x2F09ABA3
{
	BOOL flag;
	BOOL flag2;

	flag = MISC::IS_BIT_SET(*piParam1, 0) && !MISC::IS_BIT_SET(*piParam1, 4);

	if (MISC::IS_BIT_SET(*piParam1, 13))
		return true;

	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*piParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*piParam0, 25))
				MISC::SET_BIT(piParam0, 24);
		
			return true;
		}
	}

	if (MISC::IS_BIT_SET(*piParam1, 9))
	{
		MISC::CLEAR_BIT(piParam1, 9);
		return true;
	}

	if (bParam6)
		if (MISC::IS_BIT_SET(*piParam1, 6))
			return true;
	else if (MISC::IS_BIT_SET(*piParam1, 5))
		return true;

	if (MISC::IS_BIT_SET(*piParam1, 7))
		if (iParam5 > piParam1->f_4)
			return true;

	if (!MISC::IS_BIT_SET(*piParam1, 17))
		if (bParam3)
			if (bParam4)
				return true;

	if (!MISC::IS_BIT_SET(*piParam1, 18))
	{
		if (MISC::IS_BIT_SET(*piParam1, 8))
		{
			flag2 = 0;
		
			if (fParam9 > -1f)
				if (fParam9 < piParam1->f_3)
					flag2 = 1;
		
			if (!bParam7)
				if (bParam8 || flag2)
					return true;
		}
	}

	if (!MISC::IS_BIT_SET(*piParam1, 2))
		if (MISC::IS_BIT_SET(*piParam1, 1))
			if (iParam11 < piParam1->f_14)
				return true;

	return !flag;
}

BOOL func_251(int iParam0, BOOL bParam1) // Position - 0x8467 Hash - 0xC074CB7F ^0xC074CB7F
{
	if (bParam1 && !func_124(iParam0))
		return false;

	return !func_241(iParam0, 4);
}

void func_252(int iParam0, Object obParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x848C Hash - 0x8A4F30F0 ^0xE1CE78DB
{
	int num;

	if (bParam3 && !func_124(iParam0))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(obParam1))
		return;

	num = func_196(iParam0);
	func_261(iParam0, 18, false, true);
	func_261(iParam0, 17, false, true);

	if (iParam4 == -1)
		iParam4 = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(obParam1);

	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[num /*18*/].f_3, iParam4, iParam2);
	return;
}

BOOL func_253(int iParam0, BOOL bParam1) // Position - 0x84F1 Hash - 0x4D69B900 ^0x415C6741
{
	int num;

	if (bParam1 && !func_124(iParam0))
		return false;

	num = func_196(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);
}

BOOL func_254(int iParam0, BOOL bParam1) // Position - 0x8549 Hash - 0xAAB142C4 ^0xBB29AF2
{
	int num;

	if (bParam1 && !func_124(iParam0))
		return false;

	num = func_196(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[num /*18*/].f_3);
}

void func_255(int iParam0, BOOL bParam1) // Position - 0x857C Hash - 0x23556CE7 ^0xE508C6D9
{
	int num;

	if (bParam1 && !func_124(iParam0))
		return;

	num = func_196(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[num /*18*/].f_3);
	return;
}

BOOL func_256(var uParam0, int iParam1) // Position - 0x85AE Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_21(uParam0))
		return false;

	if (func_9(uParam0) > iParam1)
		return true;

	return false;
}

BOOL func_257(int iParam0) // Position - 0x85D5 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_241(iParam0, 2);
}

BOOL func_258() // Position - 0x85E4 Hash - 0x50F36DAB ^0xF55A49EF
{
	switch (Global_1935630.f_44)
	{
		case joaat("weapon_melee_lantern"):
		case joaat("weapon_kit_binoculars"):
		case joaat("weapon_melee_lantern_electric"):
		case joaat("weapon_melee_davy_lantern"):
			return true;
	
		default:
		
	}

	return false;
}

int func_259(int iParam0) // Position - 0x8615 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_239(iParam0))
		return -1;

	return func_263(iParam0);
}

// Unhandled jump detected. Output should be considered invalid
int func_260(const char* sParam0, Hash hParam1, Object obParam2, int iParam3, int iParam4, BOOL bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, Hash hParam14, BOOL bParam15, BOOL bParam16) // Position - 0x8631 Hash - 0xA9244E74 ^0xC0A4C4ED
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(obParam2))
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_241(i, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (obParam2 == Global_1945188[i /*18*/].f_11 && hParam1 == Global_1945188[i /*18*/].f_4)
					if (iParam3 <= Global_1945188[i /*18*/])
						return i;
			
				goto 0x8C;
			}
		}
	
		if (num == 0)
			num = i;
	}

	if (num != 0)
	{
		func_264(num, hParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, obParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, false, bParam5, 0, hParam14, bParam16);
		return num;
	}

	return 0;
}

void func_261(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x8708 Hash - 0x4C8DF022 ^0x193FDB49
{
	int num;

	if (bParam3 && !func_124(iParam0))
		return;

	num = func_196(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[num /*18*/].f_3, iParam1, bParam2);
	return;
}

void func_262(int iParam0, const char* sParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x8753 Hash - 0x3019E4B2 ^0x1E9F9706
{
	int num;

	if (bParam4 && !func_124(iParam0))
		return;

	num = func_196(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[num /*18*/].f_3, MISC::VAR_STRING(10, sParam1, uParam2, uParam3));
	return;
}

int func_263(int iParam0) // Position - 0x87A6 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_265(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

void func_264(int iParam0, Hash hParam1, const char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Object obParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x87E7 Hash - 0x1B501888 ^0x6546232B
{
	Prompt prompt;

	Global_1945188[iParam0 /*18*/].f_4 = hParam1;
	Global_1945188[iParam0 /*18*/] = iParam4;
	Global_1945188[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945188[iParam0 /*18*/].f_2 = iParam5;
	Global_1945188[iParam0 /*18*/].f_6 = { fParam6 };
	Global_1945188[iParam0 /*18*/].f_9 = fParam9;
	Global_1945188[iParam0 /*18*/].f_10 = volParam10;
	Global_1945188[iParam0 /*18*/].f_11 = obParam11;
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
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, obParam11);
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
	func_198(iParam0, true);
	func_199(iParam0, true);
	func_200(iParam0, 128);
	return;
}

int func_265(int iParam0) // Position - 0x8A8D Hash - 0x6EC15CF9 ^0xE613EBE0
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

