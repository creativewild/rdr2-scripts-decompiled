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
	ePedType eptLocal_15 = PED_TYPE_PLAYER_0;
	var uLocal_16 = 24;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
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
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	Volume volLocal_115 = 0;
	Volume volLocal_116 = 0;
	Volume volLocal_117 = 0;
	Volume volLocal_118 = 0;
	Volume volLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	Ped pedLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x789F492C ^0x3B5234F
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	eptLocal_15 = joaat("a_m_m_armtownfolk_01");
	iLocal_122 = -1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
		func_1();

	while (true)
	{
		BUILTIN::WAIT(0);
		func_2();
		func_3();
		func_4(12, iLocal_14, &pedLocal_146, &uLocal_150, &uLocal_124, 0, 1097859072, false);
		func_5(pedLocal_146, &iLocal_120, 8, 12, 0);
	
		if (iLocal_114 == 4)
			func_6();
	
		switch (iLocal_114)
		{
			case 0:
				func_7();
				func_8(1);
				break;
		
			case 1:
				if (func_9())
					func_8(2);
				break;
		
			case 2:
				if (func_10())
					func_8(3);
				break;
		
			case 3:
				func_11();
				break;
		
			case 4:
				func_12();
				break;
		}
	}

	return;
}

void func_1() // Position - 0xC4 Hash - 0x10115C27 ^0x60710EA5
{
	func_13(12);

	if (iLocal_114 >= 4)
	{
		func_14(12, &pedLocal_146, &iLocal_120, 16);
	
		if (iLocal_14 == 3)
			func_15(12, 12);
		else
			func_15(12, iLocal_14 + 1);
	}

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_146))
		PED::DELETE_PED(&pedLocal_146);

	func_16(&uLocal_125);
	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(true, true, false);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_2() // Position - 0x11E Hash - 0x9803447 ^0x3F837CD8
{
	if (!func_17(Global_35, 0))
		func_1();
	else if (VOLUME::DOES_VOLUME_EXIST(volLocal_117) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_117, true, 0))
		if (!func_18(&uLocal_147))
			func_19(&uLocal_147, false);
		else if (func_20(&uLocal_147) > 10f)
			func_1();
	else if (func_21(12, iLocal_14, &uLocal_125, pedLocal_146))
		func_1();

	return;
}

void func_3() // Position - 0x190 Hash - 0xEFCA40C6 ^0x1B4919E1
{
	if (iLocal_114 == 4 && MISC::GET_GAME_TIMER() >= iLocal_123 + 1000)
		if (!PED::IS_PED_HEADTRACKING_ENTITY(Global_35, pedLocal_146))
			TASK::TASK_LOOK_AT_ENTITY(Global_35, pedLocal_146, -1, SLF_WHILE_NOT_IN_FOV, 51, 0);
	else if (PED::IS_PED_HEADTRACKING_ENTITY(Global_35, pedLocal_146))
		TASK::TASK_CLEAR_LOOK_AT(Global_35);

	return;
}

int func_4(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x1E1 Hash - 0x7BECED45 ^0x18ECA136
{
	if (*uParam4)
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(*uParam2) || Global_1935630.f_12)
		return 0;

	if (bParam7)
	{
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam2))
		{
			Global_40.f_11623[iParam0 /*8*/].f_5 = Global_40.f_11623[iParam0 /*8*/].f_5 + 1;
			Global_40.f_11623[iParam0 /*8*/].f_2 = func_22();
			*uParam4 = 1;
			return 1;
		}
	}

	if (iParam5 == 0f)
		if (!func_23(Global_35, *uParam2, iParam6, true))
			return 0;
	else if (iParam5 > iParam6)
		return 0;

	if (!func_18(uParam3))
	{
		func_24(uParam3, 0f);
	}
	else if (func_20(uParam3) >= 2f)
	{
		if (!func_25(Global_40.f_11623[iParam0 /*8*/].f_2))
		{
			func_26(iParam0);
			*uParam4 = 1;
			func_27(uParam3);
			return 1;
		}
		else
		{
			func_26(iParam0);
			*uParam4 = 1;
			func_27(uParam3);
			return 1;
		}
	}

	return 0;
}

void func_5(Ped pedParam0, var uParam1, int iParam2, int iParam3, int iParam4) // Position - 0x2D8 Hash - 0xADE9EDC3 ^0x77996A42
{
	char* audioName;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || Global_1935630.f_12)
		return;

	audioName = func_28(iParam3);

	if (iParam4 == 0f)
	{
		if (func_23(pedParam0, Global_35, 15f, true))
		{
			if (!func_29(*uParam1, iParam2))
				if (AUDIO::_START_AUDIO_SCENESET(audioName, "special_ped_scenes"))
					func_30(uParam1, iParam2);
		}
		else if (func_29(*uParam1, iParam2))
		{
			AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
			func_31(uParam1, iParam2);
		}
	}
	else if (iParam4 <= 15f)
	{
		if (!func_29(*uParam1, iParam2))
			if (AUDIO::_START_AUDIO_SCENESET(audioName, "special_ped_scenes"))
				func_30(uParam1, iParam2);
	}
	else if (func_29(*uParam1, iParam2))
	{
		AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
		func_31(uParam1, iParam2);
	}

	return;
}

void func_6() // Position - 0x3A1 Hash - 0x6C70EAC ^0xEC6652D5
{
	if (!func_32(iLocal_120, 1))
		if (func_33(&pedLocal_146, 1715123483))
			func_34(&iLocal_120, 1);

	return;
}

void func_7() // Position - 0x3C9 Hash - 0x523752DC ^0x9584800F
{
	iLocal_14 = func_35(12);
	func_36(&uLocal_125);
	HUD::TEXT_BLOCK_REQUEST("SPGATAU");
	STREAMING::REQUEST_MODEL(eptLocal_15, false);
	PED::_RESERVE_AMBIENT_PEDS(1);
	return;
}

void func_8(int iParam0) // Position - 0x3F3 Hash - 0x416A27D2 ^0x8A53561A
{
	iLocal_114 = iParam0;

	switch (iParam0)
	{
		case 4:
			iLocal_123 = MISC::GET_GAME_TIMER();
			break;
	}

	return;
}

BOOL func_9() // Position - 0x416 Hash - 0xA61B725 ^0x7075DD2F
{
	if (!HUD::TEXT_BLOCK_IS_LOADED("SPGATAU"))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(eptLocal_15))
		return false;

	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() != 1)
		return false;

	return true;
}

BOOL func_10() // Position - 0x448 Hash - 0xD161F2AE ^0x7AF70DC
{
	var unk;

	if (func_37(&unk, 1706.7322f, 2183.457f, 323.2325f, 177f))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_146, joaat("PLAYER"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_146, true);
		PED::SET_PED_KEEP_TASK(pedLocal_146, true);
		PED::SET_PED_CAN_RAGDOLL(pedLocal_146, false);
		ENTITY::FREEZE_ENTITY_POSITION(pedLocal_146, true);
		ENTITY::SET_ENTITY_COLLISION(pedLocal_146, false, false);
		ENTITY::SET_ENTITY_VISIBLE(pedLocal_146, false);
		AUDIO::STOP_PED_SPEAKING(pedLocal_146, true);
		func_38(pedLocal_146, 0);
		func_39(pedLocal_146, 12);
	
		if (func_40())
			func_41(&uLocal_16, Global_35, "JOHN", false);
		else
			func_41(&uLocal_16, Global_35, "ARTHUR", false);
	
		func_41(&uLocal_16, pedLocal_146, "GIANT", false);
		volLocal_115 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1705f, 2171f, 324f, 0f, 0f, 0f, 15f, 21f, 8f, "giant_speak");
		volLocal_116 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1705f, 2171f, 320f, 0f, 0f, 0f, 35f, 40f, 8f, "giant_stop");
		volLocal_117 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1710f, 2148f, 319f, 0f, 0f, 0f, 160f, 160f, 80f, "giant_end");
		volLocal_119 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1705f, 2171f, 320f, 0f, 0f, 0f, 26f, 32f, 8f, "m_volStayAway");
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_119, 0, 0, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volLocal_119, 0, 0, 0, -1, -1, 0);
		volLocal_118 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(1710f, 2148f, 319f, 0f, 0f, 0f, 110f, 110f, 110f, "m_volRandomEventBlock");
		func_42(volLocal_118, "SP_Giant_Block", true, 0, 0, false, -1082130432);
		return true;
	}

	return false;
}

void func_11() // Position - 0x5EB Hash - 0xFC9C4D2A ^0x1206B1E
{
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_115, true, 0))
		func_8(4);

	return;
}

void func_12() // Position - 0x606 Hash - 0x622E6D43 ^0x2F57BC03
{
	char* str;
	BOOL flag;
	int num;

	if (iLocal_121 < func_43())
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_116, true, 0))
		{
			str = "";
			flag = false;
			num = -1;
			str = func_44(iLocal_121, &num);
		
			if (num < 0)
			{
				if (func_45(str))
				{
					flag = true;
					iLocal_121 = iLocal_121 + 1;
				}
			}
			else if (func_46(str, num))
			{
				flag = true;
				iLocal_121 = iLocal_121 + 1;
			}
		
			if (!func_32(iLocal_120, 4))
			{
				if (flag)
				{
					func_48(12, func_47());
					func_34(&iLocal_120, 4);
				}
			}
		}
		else if (!func_32(iLocal_120, 2))
		{
			AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(true, true, false);
			iLocal_121 = func_43();
			func_34(&iLocal_120, 2);
		}
	}
	else if (!func_49(true))
	{
		if (iLocal_122 < 0)
			iLocal_122 = MISC::GET_GAME_TIMER() + 1100;
		else if (MISC::GET_GAME_TIMER() >= iLocal_122)
			func_1();
	}

	return;
}

void func_13(int iParam0) // Position - 0x6D7 Hash - 0xE0F13664 ^0x6F64281C
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);

	if (Global_1396257[iParam0 /*638*/].f_631)
		func_50(false, -1);

	func_51();
	Global_1396257[iParam0 /*638*/].f_631 = 0;
	Global_1415398.f_2 = Global_1415398.f_2 - 1;
	Global_1935183.f_28 = 0;
	return;
}

void func_14(int iParam0, var uParam1, var uParam2, int iParam3) // Position - 0x72F Hash - 0x3D679EE4 ^0xBD1763F0
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		return;

	if (func_29(*uParam2, iParam3))
		return;

	Global_40.f_11623[iParam0 /*8*/].f_6 = Global_40.f_11623[iParam0 /*8*/].f_6 + 1;

	if (Global_40.f_11623[iParam0 /*8*/].f_6 == 1 && func_53(func_52(joaat("special_ped_interaction"))) < 5)
		func_54(func_52(joaat("special_ped_interaction")), 1);

	Global_40.f_11623[iParam0 /*8*/].f_3 = func_22();
	func_30(uParam2, iParam3);
	Global_1396257[iParam0 /*638*/].f_631 = 1;
	return;
}

void func_15(int iParam0, int iParam1) // Position - 0x7C6 Hash - 0xDEDCA13F ^0xDEDCA13F
{
	if (Global_40.f_11623[iParam0 /*8*/] != iParam1)
		Global_40.f_11623[iParam0 /*8*/] = iParam1;

	return;
}

void func_16(var uParam0) // Position - 0x7E9 Hash - 0xDFB6596B ^0xFDA355C
{
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_18))
		ITEMSET::DESTROY_ITEMSET(uParam0->f_18);

	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_19))
		ITEMSET::DESTROY_ITEMSET(uParam0->f_19);

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_20))
		VOLUME::DELETE_VOLUME(uParam0->f_20);

	if (func_18(&(uParam0->f_13)))
		func_27(&(uParam0->f_13));

	return;
}

BOOL func_17(Ped pedParam0, int iParam1) // Position - 0x83D Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_32(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_32(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_32(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_32(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_32(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_32(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_32(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_32(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

BOOL func_18(var uParam0) // Position - 0x93C Hash - 0x5001E582 ^0x5001E582
{
	return func_55(*uParam0, 1);
}

void func_19(var uParam0, BOOL bParam1) // Position - 0x94C Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_18(uParam0))
		func_56(uParam0);

	return;
}

float func_20(var uParam0) // Position - 0x96C Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_18(uParam0))
		return uParam0->f_1;

	if (func_57(uParam0))
		return uParam0->f_2;

	return func_58() - uParam0->f_1;
}

BOOL func_21(int iParam0, int iParam1, var uParam2, Ped pedParam3) // Position - 0x9A1 Hash - 0x540B5813 ^0x255543BD
{
	eStackSize stackSize;
	eStackSize stackSize2;
	eStackSize stackSize3;
	BOOL flag;

	if (MISC::GET_FRAME_COUNT() % 10 == 0)
	{
		if (uParam2->f_1)
			if (func_59(0) == 1 || func_59(0) == 2 || func_59(0) == 8 || func_60(Global_1935630, 2048))
				func_34(uParam2, 2);
	
		if (uParam2->f_2)
			if (func_59(0) == 11)
				func_34(uParam2, 4);
	
		if (uParam2->f_4)
			if (func_59(0) == 6)
				func_34(uParam2, 8);
	
		if (uParam2->f_5)
			if (Global_1394141.f_1328)
				func_34(uParam2, 16);
	}

	if (MISC::GET_FRAME_COUNT() % 30 == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_61(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && func_61(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				stackSize = func_22();
				stackSize2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				stackSize3 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
			
				if (func_61(stackSize3) > func_61(stackSize2))
					if (func_61(stackSize) > func_61(stackSize3) + 1 || func_61(stackSize) < func_61(stackSize2))
						func_34(uParam2, 32);
				else if (func_61(stackSize) > func_61(stackSize3) + 1 && func_61(stackSize) < func_61(stackSize2))
					func_34(uParam2, 32);
			}
		}
	
		if (uParam2->f_7)
		{
			flag = false;
		
			if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40 != 4)
			{
				if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0] != -1 || Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1] != -1)
					if (func_62(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || func_62(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]) || func_63(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || func_63(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
						flag = true;
			
				if (!flag)
					if (!func_64(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
						func_34(uParam2, 64);
			}
		}
	
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (func_65(&pedParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_66(&pedParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!func_18(&(uParam2->f_13)))
					{
						func_24(&(uParam2->f_13), 0f);
					}
					else if (func_67(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_27(&(uParam2->f_13));
						func_34(uParam2, 512);
					}
				
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (func_18(&(uParam2->f_13)))
						func_27(&(uParam2->f_13));
				
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
	
		if (uParam2->f_9)
			if (func_68())
				func_34(uParam2, 1024);
	
		if (uParam2->f_10)
			if (func_69())
				func_34(uParam2, 2048);
	
		if (func_60(Global_1935630, 16384) || Global_1430231.f_4)
			func_34(uParam2, 128);
	
		if (func_70(&(Global_1396257[iParam0 /*638*/].f_626), 2048))
			func_34(uParam2, 256);
	}

	if (func_32(*uParam2, 2) || func_32(*uParam2, 4) || func_32(*uParam2, 8) || func_32(*uParam2, 16) || func_32(*uParam2, 32) || func_32(*uParam2, 64) || func_32(*uParam2, 128) || func_32(*uParam2, 256) || func_32(*uParam2, 512) || func_32(*uParam2, 1024) || func_32(*uParam2, 2048))
		return true;

	return false;
}

eStackSize func_22() // Position - 0xDBF Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

BOOL func_23(Ped pedParam0, Ped pedParam1, int iParam2, BOOL bParam3) // Position - 0xDCB Hash - 0x6DF7EDD6 ^0x5000CFB6
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return false;

	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(pedParam1, bParam3, false)) <= iParam2 * iParam2)
		return true;

	return false;
}

void func_24(var uParam0, float fParam1) // Position - 0xE13 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_58() - fParam1;
	func_71(uParam0, 1);
	func_72(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_25(Hash hParam0) // Position - 0xE39 Hash - 0xD02571D6 ^0x9878B86D
{
	return hParam0 != -15;
}

void func_26(int iParam0) // Position - 0xE47 Hash - 0x866B8C3 ^0xA8518BD7
{
	Global_40.f_11623[iParam0 /*8*/].f_5 = Global_40.f_11623[iParam0 /*8*/].f_5 + 1;
	Global_40.f_11623[iParam0 /*8*/].f_2 = func_22();
	return;
}

void func_27(var uParam0) // Position - 0xE79 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

char* func_28(int iParam0) // Position - 0xE8F Hash - 0x709B7FA1 ^0x709B7FA1
{
	switch (iParam0)
	{
		case 0:
			return "agnes_dowd";
	
		case 1:
			return "anders_helgerson";
	
		case 2:
			return "armadillo_town_crier";
	
		case 3:
			return "bland_preacher";
	
		case 4:
			return "blind_man_cassidy";
	
		case 5:
			return "crackpot_robot";
	
		case 6:
			return "chelonian_master";
	
		case 7:
			return "civil_war_commando";
	
		case 8:
			return "dorothea_wicklow";
	
		case 9:
			return "endless_strainer";
	
		case 10:
			return "early_eugenics_proponent";
	
		case 11:
			return "gavins_friend";
	
		case 12:
			return "giant";
	
		case 13:
			return "grizzeld_jon";
	
		case 14:
			return "joe_butler";
	
		case 15:
			return "john_the_baptising_madman";
	
		case 16:
			return "lillian_powell";
	
		case 17:
			return "mad_scientist";
	
		case 18:
			return "mayor_of_strawberry";
	
		case 19:
			return "bum_civil_war_vet";
	
		case 20:
			return "philosopher_in_cave";
	
		case 21:
			return "poor_joe";
	
		case 22:
			return "sheriff_of_tumbleweed";
	
		case 23:
			return "soothsayer";
	
		case 24:
			return "sun_worshipper";
	
		case 25:
			return "swamp_weirdo_sonny";
	
		case 26:
			return "thomas_downe";
	
		case 27:
			return "timothy_donahue";
	
		case 28:
			return "tiny_hermit_in_cabin";
	
		case 29:
			return "vampire";
	
		default:
		
	}

	return "speci";
}

BOOL func_29(int iParam0, int iParam1) // Position - 0x1021 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_30(var uParam0, int iParam1) // Position - 0x1030 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_31(var uParam0, int iParam1) // Position - 0x1041 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_32(int iParam0, int iParam1) // Position - 0x1056 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_33(var uParam0, Hash hParam1) // Position - 0x1065 Hash - 0x422D70EB ^0x571EC93B
{
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
	{
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(hParam1, *uParam0);
		return true;
	}

	return false;
}

void func_34(var uParam0, int iParam1) // Position - 0x108F Hash - 0xF55E891F ^0xF55E891F
{
	func_30(uParam0, iParam1);
	return;
}

int func_35(int iParam0) // Position - 0x109F Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11623[iParam0 /*8*/];
}

void func_36(var uParam0) // Position - 0x10B1 Hash - 0xF1BCCAC6 ^0x1CB2916A
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
	return;
}

BOOL func_37(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0x1100 Hash - 0x355F0538 ^0xD7FE2286
{
	if (*uParam0)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_146))
		return true;

	pedLocal_146 = func_73(eptLocal_15, fParam1, fParam4, false, true, 0, true, true, true, false, false, false, false);

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_146))
	{
		*uParam0 = 1;
		return true;
	}

	return false;
}

void func_38(Ped pedParam0, int iParam1) // Position - 0x1149 Hash - 0x9F3718A3 ^0xF5DFBAE7
{
	BOOL _int;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(pedParam0, "honor_block"))
			_int = DECORATOR::DECOR_GET_INT(pedParam0, "honor_block");
	
		_int = _int || func_74(iParam1);
		DECORATOR::DECOR_SET_INT(pedParam0, "honor_block", _int);
	}

	return;
}

void func_39(Ped pedParam0, int iParam1) // Position - 0x118B Hash - 0x729F5BA5 ^0x4DA67B14
{
	if (!(iParam1 > -1 && iParam1 <= 29))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	DECORATOR::DECOR_SET_BOOL(pedParam0, "bIsSpecialPed", true);
	DECORATOR::DECOR_SET_INT(pedParam0, "iSpecialPedID", iParam1);
	Global_1396257[iParam1 /*638*/].f_636 = pedParam0;
	return;
}

BOOL func_40() // Position - 0x11DC Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_75() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

void func_41(var uParam0, Ped pedParam1, char* sParam2, BOOL bParam3) // Position - 0x1201 Hash - 0x5AD955B5 ^0x43BD5215
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (func_76(uParam0, pedParam1, sParam2))
		if (!PED::IS_PED_INJURED(pedParam1))
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam1))
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam1, bParam3);

	return;
}

Volume func_42(Volume volParam0, char* sParam1, BOOL bParam2, Entity eParam3, int iParam4, BOOL bParam5, int iParam6) // Position - 0x125E Hash - 0x6F9FCD12 ^0xB17393EA
{
	var volumeCoords;
	float volumeScale;
	Volume volume;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return 0;

	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volParam0) };
	volumeScale = { VOLUME::GET_VOLUME_SCALE(volParam0) };
	volume = func_77(volumeCoords, volumeScale, sParam1, bParam2, eParam3, iParam4, bParam5, iParam6);
	return volume;
}

int func_43() // Position - 0x12A2 Hash - 0x4C32E23C ^0x4C32E23C
{
	switch (iLocal_14)
	{
		case 0:
			return 6;
	
		case 1:
			return 15;
	
		case 2:
			return 2;
	
		case 3:
			return 5;
	}

	return 1;
}

char* func_44(int iParam0, var uParam1) // Position - 0x12E8 Hash - 0x7259A69D ^0x256F67B1
{
	char* str;

	str = "";

	switch (iLocal_14)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					str = "SPGAT_CNV1_ART";
					*uParam1 = -1;
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					str = "SPGAT_CNV2_ART";
					*uParam1 = -1;
					break;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 0:
					str = "SPGAT_CNV3_JHN";
					*uParam1 = -1;
					break;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 0:
					str = "SPGAT_CNV4_JHN";
					*uParam1 = -1;
					break;
			}
			break;
	}

	return str;
}

BOOL func_45(char* sParam0) // Position - 0x138F Hash - 0x926D03 ^0x926D03
{
	var unk;

	if (!func_49(true))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, sParam0, 24);
		return func_78(&uLocal_16, unk, false, -1, false, false);
	}

	return false;
}

BOOL func_46(char* sParam0, int iParam1) // Position - 0x13B8 Hash - 0x517B2D0E ^0x517B2D0E
{
	var unk;

	if (!func_49(true))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, sParam0, 24);
		return func_78(&uLocal_16, unk, true, iParam1, false, false);
	}

	return false;
}

BOOL func_47() // Position - 0x13E2 Hash - 0x37EC066 ^0xC9B08D38
{
	if (func_75() != -1)
		return false;

	if (Global_40.f_39 == joaat("Player_Zero"))
		return true;

	return false;
}

void func_48(int iParam0, BOOL bParam1) // Position - 0x1408 Hash - 0xA0394E6F ^0x73A932AF
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
				func_79(joaat("journal_special_peds_agnes_dowd_ar"), 0);
			else
				func_79(joaat("journal_special_peds_agnes_dowd_jn"), 0);
			break;
	
		case 4:
			if (bParam1)
				func_79(joaat("journal_special_peds_cassidy_ar"), 0);
			else
				func_79(joaat("journal_special_peds_cassidy_jn"), 0);
			break;
	
		case 5:
			if (bParam1)
				func_79(joaat("journal_rc_crkpt4_1_ar"), 0);
			else if (func_80(55))
				func_79(joaat("journal_rc_crkpt4_1b_jn"), 0);
			else
				func_79(joaat("journal_rc_crkpt4_1a_jn"), 0);
			break;
	
		case 12:
			if (bParam1)
				func_79(joaat("journal_special_peds_giant_ar"), 0);
			else
				func_79(joaat("journal_special_peds_giant_jn"), 0);
			break;
	
		case 20:
			if (bParam1)
				func_79(joaat("journal_special_peds_philosopher_cave_ar"), 0);
			else
				func_79(joaat("journal_special_peds_philosopher_cave_jn"), 0);
			break;
	
		case 21:
			if (bParam1)
				func_79(joaat("journal_special_peds_tree_monkey_ar"), 0);
			else
				func_79(joaat("journal_special_peds_tree_monkey_jn"), 0);
			break;
	
		case 28:
			if (bParam1)
				func_79(joaat("journal_special_peds_cabin_hermit_ar"), 0);
			else
				func_79(joaat("journal_special_peds_cabin_hermit_jn"), 0);
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_49(BOOL bParam0) // Position - 0x1534 Hash - 0xD6E12BEB ^0xEB8894D
{
	return AUDIO::_IS_ANY_CONVERSATION_PLAYING(bParam0);
}

void func_50(BOOL bParam0, int iParam1) // Position - 0x1542 Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_81(&Global_0, 8);

	if (!func_82() || func_75() != -1)
		return;

	func_81(&Global_0, 1);
	return;
}

void func_51() // Position - 0x1588 Hash - 0x4CF2FAEE ^0x259722F7
{
	AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
	return;
}

struct<2> func_52(int iParam0) // Position - 0x1596 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

int func_53(var uParam0, var uParam1) // Position - 0x15A6 Hash - 0x3AAD93D4 ^0x6348F3E3
{
	int unk;

	STATS::STAT_ID_GET_INT(&uParam0, &unk);
	return unk;
}

void func_54(var uParam0, var uParam1, int iParam2) // Position - 0x15B9 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

BOOL func_55(int iParam0, int iParam1) // Position - 0x15C9 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_56(var uParam0) // Position - 0x15D8 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_24(uParam0, 0f);
	return;
}

BOOL func_57(var uParam0) // Position - 0x15E7 Hash - 0x39705408 ^0x39705408
{
	return func_55(*uParam0, 2);
}

float func_58() // Position - 0x15F7 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

int func_59(int iParam0) // Position - 0x1629 Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

BOOL func_60(int iParam0, int iParam1) // Position - 0x163D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_61(eStackSize essParam0) // Position - 0x164C Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 12) & 31;
}

BOOL func_62(eStackSize essParam0) // Position - 0x165F Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(essParam0 > -1 && essParam0 <= 80))
		return false;

	return func_83(Global_1835011[essParam0 /*74*/].f_1);
}

BOOL func_63(eStackSize essParam0) // Position - 0x168B Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(essParam0 > -1 && essParam0 <= 80))
		return false;

	return func_84(Global_1835011[essParam0 /*74*/].f_1);
}

BOOL func_64(int iParam0) // Position - 0x16B7 Hash - 0x1EF5D3F8 ^0x1EF5D3F8
{
	int num;

	num = func_85();

	switch (iParam0)
	{
		case 0:
			switch (num)
			{
				case joaat("highpressure"):
				case joaat("SUNNY"):
					return true;
			
				default:
					return false;
			}
			break;
	
		case 1:
			switch (num)
			{
				case joaat("OVERCAST"):
				case joaat("highpressure"):
				case joaat("overcastdark"):
				case joaat("clouds"):
				case joaat("SUNNY"):
					return true;
			
				default:
					return false;
			}
			break;
	
		case 2:
			switch (num)
			{
				case joaat("DRIZZLE"):
				case joaat("OVERCAST"):
				case joaat("Fog"):
				case joaat("highpressure"):
				case joaat("overcastdark"):
				case joaat("SNOWLIGHT"):
				case joaat("clouds"):
				case joaat("Misty"):
				case joaat("SUNNY"):
				case joaat("snowclearing"):
					return true;
			
				default:
					return false;
			}
			break;
	
		case 3:
			switch (num)
			{
				case joaat("DRIZZLE"):
				case joaat("THUNDER"):
				case joaat("OVERCAST"):
				case joaat("Fog"):
				case joaat("Shower"):
				case joaat("snow"):
				case joaat("highpressure"):
				case joaat("sleet"):
				case joaat("overcastdark"):
				case joaat("clouds"):
				case joaat("rain"):
				case joaat("Misty"):
				case joaat("SUNNY"):
				case joaat("snowclearing"):
					return true;
			
				default:
					return false;
			}
			break;
	
		case 4:
			return true;
	
		case 5:
			switch (num)
			{
				case joaat("Fog"):
				case joaat("Misty"):
					return true;
			}
			break;
	}

	return false;
}

int func_65(var uParam0, var uParam1, float fParam2, float fParam3) // Position - 0x1835 Hash - 0xEC5EE76 ^0xF05CBEF1
{
	var entityForwardVector;
	var unk3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return 0;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	unk3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + (entityForwardVector * { fParam2, fParam2, fParam2 }) };

	if (func_86(uParam1, unk3, fParam3))
		return 1;

	return 0;
}

int func_66(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5) // Position - 0x1881 Hash - 0x6D0071AD ^0xDBED4C65
{
	float scaleX;
	Ped ped;
	var entityForwardVector;
	Vector3 vector;
	var entityCoords;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(*uParam1);
			POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(*uParam1);
			VOLUME::DELETE_VOLUME(*uParam1);
		}
	
		return 0;
	}

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vector = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + (entityForwardVector * { fParam3, fParam3, fParam3 }) };

	if (!func_87(uParam2, &ped, vector, fParam3, fParam4))
	{
		if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(*uParam1);
			POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(*uParam1);
			VOLUME::DELETE_VOLUME(*uParam1);
		}
	
		return 0;
	}
	else
	{
		if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			scaleX = fParam4 + 1f;
			*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vector, 0f, 0f, 0f, scaleX, scaleX, scaleX, "SPDClearWagonsMount");
			POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(*uParam1, iParam5 | 2228255, 0, 0, -1, -1, 10);
			POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(*uParam1, iParam5, 0, 0, -1, -1, 0);
		}
	
		entityCoords = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
	
		if (!func_88(ped, false))
			func_89(&ped, entityCoords, 1083179008);
	
		return 1;
	}

	return 0;
}

int func_67(var uParam0) // Position - 0x1989 Hash - 0xE440ADBD ^0x7BE35012
{
	if (!func_18(uParam0))
		return BUILTIN::ROUND(uParam0->f_1 * 1000f);

	if (func_57(uParam0))
		return BUILTIN::ROUND(uParam0->f_2 * 1000f);

	return func_90() - BUILTIN::ROUND(uParam0->f_1 * 1000f);
}

BOOL func_68() // Position - 0x19DC Hash - 0x4228A1C2 ^0x341213A7
{
	return Global_1392040.f_6;
}

BOOL func_69() // Position - 0x19EA Hash - 0xD6D2CD3 ^0x182E32DD
{
	if (Global_1914319.f_18941.f_17)
		return true;

	return false;
}

BOOL func_70(BOOL bParam0, int iParam1) // Position - 0x1A03 Hash - 0x320397CF ^0x320397CF
{
	return func_91(*bParam0, iParam1);
}

void func_71(var uParam0, int iParam1) // Position - 0x1A14 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_72(var uParam0, int iParam1) // Position - 0x1A25 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

Ped func_73(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x1A3A Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_92(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

BOOL func_74(int iParam0) // Position - 0x1A7C Hash - 0xA05361F6 ^0xF8A0FD3E
{
	switch (iParam0)
	{
		case joaat("honor_event_abandon_animals"):
			return 16384;
	
		case joaat("honor_event_antagonize"):
			return 65536;
	
		case joaat("honor_event_steal_wagon"):
			return 8192;
	
		case joaat("honor_event_trampled_innocent"):
			return 4096;
	
		case joaat("honor_event_kill_vermin"):
			return 64;
	
		case joaat("honor_event_kill_farm_animal"):
			return 128;
	
		case joaat("honor_event_long_absence"):
			return 4194304;
	
		case 0:
			return -1;
	
		case joaat("honor_event_wanted_in_camp"):
			return 524288;
	
		case joaat("honor_event_animal_bleedout"):
			return 32768;
	
		case joaat("honor_event_steal_mule"):
			return 2048;
	
		case joaat("honor_event_theft"):
			return 131072;
	
		case joaat("honor_event_kill_horse"):
			return 256;
	
		case joaat("honor_event_steal_donkey"):
			return 1024;
	
		case joaat("honor_event_steal_horse"):
			return 512;
	
		case joaat("honor_event_ambient_kill"):
			return 2;
	
		case joaat("honor_event_item_request"):
			return 2097152;
	
		case joaat("honor_event_ambient_ko"):
			return 4;
	
		case joaat("honor_event_intervened"):
			return 262144;
	
		case joaat("honor_event_scare"):
			return 32;
	
		case joaat("honor_event_donated_game"):
			return 1048576;
	
		case joaat("honor_event_loot_innocent"):
			return 1;
	
		default:
		
	}

	return 0;
}

BOOL func_75() // Position - 0x1B92 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_76(var uParam0, Ped pedParam1, char* sParam2) // Position - 0x1BA0 Hash - 0xFB1C2C0E ^0x6794528D
{
	BOOL flag;
	int i;

	flag = false;

	for (i = 0; i < uParam0->f_97 && !flag; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(uParam0->[i /*4*/].f_1)))
		{
			uParam0->[i /*4*/] = pedParam1;
			flag = true;
		}
	}

	if (!flag)
	{
		if (uParam0->f_97 < 24)
		{
			uParam0->[uParam0->f_97 /*4*/] = pedParam1;
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->[uParam0->f_97 /*4*/].f_1), sParam2, 24);
			uParam0->f_97 = uParam0->f_97 + 1;
			flag = true;
		}
	}

	return flag;
}

Volume func_77(Vector3 vParam0, var uParam1, var uParam2, float fParam3, char* sParam4, BOOL bParam5, Entity eParam6, int iParam7, BOOL bParam8, int iParam9) // Position - 0x1C1E Hash - 0xC1E3A062 ^0xD42263D3
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
		if (func_94(vParam0))
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

	func_95(volume, bParam8);
	return volume;
}

BOOL func_78(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x1CD8 Hash - 0x4863E989 ^0xB2E91EEF
{
	BOOL flag;

	if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&uParam1))
		flag = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&uParam1);
	else
		flag = true;

	if (flag)
	{
		func_96(uParam1, uParam0);
	
		if (bParam6)
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
		else
			AUDIO::START_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
	
		if (bParam4)
			AUDIO::_0x40CA665AB9D8D505(&uParam1, iParam5);
	}

	return flag;
}

void func_79(int iParam0, int iParam1) // Position - 0x1D32 Hash - 0xF5E9551B ^0xF5E9551B
{
	int i;

	if (iParam1 == 1)
	{
		func_97(iParam0, 0);
	}
	else
	{
		for (i = 0; i < 20; i = i + 1)
		{
			if (Global_40.f_11922[i] == 0)
			{
				Global_40.f_11922[i] = iParam0;
				return;
			}
		}
	
		func_98(1);
		Global_40.f_11922[0] = iParam0;
	}

	return;
}

BOOL func_80(int iParam0) // Position - 0x1D8A Hash - 0xBF2B4762 ^0xBF2B4762
{
	return Global_40.f_490.f_402[iParam0] & true != 0;
}

void func_81(Hash hParam0, int iParam1) // Position - 0x1DA3 Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_82() // Position - 0x1DB6 Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_83(int iParam0) // Position - 0x1DD5 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_99(iParam0);
	return num == 3 || num == 4;
}

BOOL func_84(int iParam0) // Position - 0x1DF3 Hash - 0x8EF26C67 ^0x9855652A
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
	
		num = func_100(iParam0);
	}

	if (num == 1)
		return 1;

	if (num == 2)
		return 1;

	return 0;
}

var func_85() // Position - 0x1E5E Hash - 0x1372AFBD ^0xAE723118
{
	var weatherType1;
	var weatherType2;
	float percentWeather2;
	var unk;

	MISC::GET_CURR_WEATHER_STATE(&weatherType1, &weatherType2, &percentWeather2);

	if (percentWeather2 < 0.75f)
		unk = weatherType1;
	else
		unk = weatherType2;

	return unk;
}

BOOL func_86(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4) // Position - 0x1E88 Hash - 0x51EADDF ^0xFEE9A233
{
	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);

	if (ENTITY::_GET_ENTITIES_NEAR_POINT(vParam1, fParam4, *uParam0, 2) > 0)
	{
		ITEMSET::_CLEAR_ITEMSET(*uParam0);
		return true;
	}

	ITEMSET::_CLEAR_ITEMSET(*uParam0);
	return false;
}

BOOL func_87(var uParam0, var uParam1, Vector3 vParam2, var uParam3, var uParam4, float fParam5, float fParam6) // Position - 0x1EC8 Hash - 0x34D99C7D ^0x8190E5BB
{
	ScrHandle indexedItemInItemset;
	int i;
	int entitiesNearPoint;

	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);

	entitiesNearPoint = ENTITY::_GET_ENTITIES_NEAR_POINT(vParam2, fParam6, *uParam0, 1);

	for (i = 0; i < entitiesNearPoint; i = i + 1)
	{
		indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, *uParam0);
		*uParam1 = indexedItemInItemset;
	
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
			{
				if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(*uParam1)))
				{
					if (func_101(Global_35, *uParam1, false))
					{
					}
					else
					{
						ITEMSET::_CLEAR_ITEMSET(*uParam0);
						return true;
					}
				}
			}
		}
	}

	ITEMSET::_CLEAR_ITEMSET(*uParam0);
	return false;
}

BOOL func_88(Ped pedParam0, BOOL bParam1) // Position - 0x1F5D Hash - 0x4B9AB644 ^0x1F788987
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (bParam1)
			return PED::IS_PED_DEAD_OR_DYING(pedParam0, true);
		else
			return ENTITY::IS_ENTITY_DEAD(pedParam0);

	return true;
}

void func_89(var uParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4) // Position - 0x1F8A Hash - 0x186008F8 ^0xE9F0BC58
{
	if (!func_102(*uParam0, 518218985))
	{
		TASK::CLEAR_PED_TASKS(*uParam0, true, false);
		TASK::TASK_FLEE_COORD(*uParam0, vParam1, 6, 0, iParam4, -1, 0);
	}

	return;
}

int func_90() // Position - 0x1FBC Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

BOOL func_91(int iParam0, int iParam1) // Position - 0x1FDA Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_92(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x1FE9 Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_103(eptParam1))
		{
			func_104(pedParam0, joaat("META_OUTFIT_DEFAULT"));
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(pedParam0, true);
			flag = true;
		}
	}

	if (PED::IS_PED_HUMAN(pedParam0))
	{
		if (bParam6)
			WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(pedParam0, WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(eptParam1));
	
		if (PED::IS_PED_MALE(pedParam0) && !bParam3)
			func_105(pedParam0, 0, true);
	
		PED::SET_PED_CONFIG_FLAG(pedParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(pedParam0)))
	{
		if (!bParam5)
		{
			PED::_EQUIP_META_PED_OUTFIT_PRESET(pedParam0, 0, false);
			flag = true;
		}
	
		if (bParam4)
		{
			func_106(pedParam0, false);
			flag = true;
		}
	
		func_107(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x20CA Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_94(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x20F4 Hash - 0x3CD10F27 ^0xAC09280E
{
	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, 0.5f, 0, 0, 16384);
}

int func_95(Volume volParam0, BOOL bParam1) // Position - 0x210E Hash - 0xEA796703 ^0x695D7925
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

void func_96(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x2176 Hash - 0xFDACD718 ^0x658C9335
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

void func_97(int iParam0, int iParam1) // Position - 0x21C8 Hash - 0xC0D8FAC3 ^0xE4233006
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);

	if (iParam1 == 1)
		func_108(true);

	return;
}

void func_98(int iParam0) // Position - 0x21E1 Hash - 0x23AE6B73 ^0x23AE6B73
{
	int i;
	int num;

	num = 0;

	if (iParam0 == 0 && Global_43891 == true)
		return;

	for (i = 0; i < 20; i = i + 1)
	{
		if (Global_40.f_11922[i] == 0)
			break;
	
		func_97(Global_40.f_11922[i], 0);
		Global_40.f_11922[i] = 0;
		num = 1;
	}

	if (num == 1)
		func_108(true);

	return;
}

int func_99(int iParam0) // Position - 0x224F Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_109(iParam0))
		return -1;

	return func_100(iParam0);
}

int func_100(int iParam0) // Position - 0x226B Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_110(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_101(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x22AC Hash - 0xF928BABC ^0xEB0637CA
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1) && !ENTITY::IS_ENTITY_DEAD(pedParam1))
			if (bParam2)
				return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true) && PED::GET_MOUNT(pedParam0) == pedParam1;
			else
				return PED::IS_PED_ON_MOUNT(pedParam0) && PED::GET_MOUNT(pedParam0) == pedParam1;

	return false;
}

BOOL func_102(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x2316 Hash - 0xBA023B92 ^0x16E0B707
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

BOOL func_103(ePedType eptParam0) // Position - 0x236F Hash - 0x5000025C ^0x5000025C
{
	switch (eptParam0)
	{
		case joaat("cs_sistercalderon"):
		case joaat("cs_strsheriff_01"):
		case joaat("cs_mud2bigguy"):
		case joaat("cs_rainsfall"):
		case joaat("cs_penelopebraithwaite"):
		case joaat("cs_swampweirdosonny"):
		case joaat("cs_unidusterjail_01"):
		case joaat("cs_iangray"):
		case joaat("cs_tinyhermit"):
		case joaat("cs_timothydonahue"):
		case joaat("cs_princessisabeau"):
		case joaat("cs_leviticuscornwall"):
		case joaat("cs_didsbury"):
		case joaat("cs_featherstonchambers"):
		case joaat("cs_featsofstrength"):
		case joaat("cs_bandpianist"):
		case joaat("cs_escapeartistassistant"):
		case joaat("cs_garethbraithwaite"):
		case joaat("cs_creoleguy"):
		case joaat("cs_leighgray"):
		case joaat("cs_strawberryoutlaw_02"):
		case joaat("cs_gloria"):
		case joaat("cs_warvet"):
		case joaat("cs_jockgray"):
		case joaat("cs_davidgeddes"):
		case joaat("cs_guidomartelli"):
		case joaat("cs_duncangeddes"):
		case joaat("cs_dusterinformant_01"):
		case joaat("cs_pinkertongoon"):
		case joaat("cs_mickey"):
		case joaat("cs_twinbrother_02"):
		case joaat("cs_hestonjameson"):
		case joaat("cs_strdeputy_01"):
		case joaat("cs_abe"):
		case joaat("cs_oddfellowspinhead"):
		case joaat("cs_swampfreak"):
		case joaat("cs_mradler"):
		case joaat("cs_aberdeenpigfarmer"):
		case joaat("cs_hobartcrawley"):
		case joaat("cs_formyartbigwoman"):
		case joaat("cs_norrisforsythe"):
		case joaat("cs_jules"):
		case joaat("cs_tomdickens"):
		case joaat("cs_geraldbraithwaite"):
		case joaat("cs_paytah"):
		case joaat("cs_cancan_03"):
		case joaat("cs_grizzledjon"):
		case joaat("cs_wrobel"):
		case joaat("cs_meredith"):
		case joaat("cs_creepyoldlady"):
		case joaat("cs_nbxreceptionist_01"):
		case joaat("cs_nbxpolicechiefformal"):
		case joaat("cs_cornwalltrainconductor"):
		case joaat("cs_rhodeputy_01"):
		case joaat("cs_drmalcolmmacintosh"):
		case joaat("cs_leon"):
		case joaat("cs_sheriffowens"):
		case joaat("cs_sddoctor_01"):
		case joaat("cs_scottgray"):
		case joaat("cs_cancan_01"):
		case joaat("cs_creolecaptain"):
		case joaat("cs_brontesbutler"):
		case joaat("cs_janson"):
		case joaat("cs_forgivenwife_01"):
		case joaat("cs_tigerhandler"):
		case joaat("cs_frenchartist"):
		case joaat("cs_genstorymale"):
		case joaat("cs_clay"):
		case joaat("cs_strdeputy_02"):
		case joaat("cs_famousgunslinger_03"):
		case joaat("cs_bivcoachdriver"):
		case joaat("cs_braithwaitebutler"):
		case joaat("cs_cleet"):
		case joaat("cs_joe"):
		case joaat("cs_slavecatcher"):
		case joaat("cs_braithwaitemaid"):
		case joaat("cs_twingroupie_02"):
		case joaat("cs_mrsgeddes"):
		case joaat("cs_samaritan"):
		case joaat("cs_exconfedinformant"):
		case joaat("cs_frenchman_01"):
		case joaat("cs_bandsinger"):
		case joaat("cs_baptiste"):
		case joaat("cs_angusgeddes"):
		case joaat("cs_mysteriousstranger"):
		case joaat("cs_famousgunslinger_01"):
		case joaat("cs_bartholomewbraithwaite"):
		case joaat("cs_mixedracekid"):
		case joaat("cs_beatenupcaptain"):
		case joaat("cs_edgarross"):
		case joaat("cs_twingroupie_01"):
		case joaat("cs_mrsweathers"):
		case joaat("cs_jamie"):
		case joaat("cs_karensjohn_01"):
		case joaat("cs_thomasdown"):
		case joaat("cs_obediahhinton"):
		case joaat("cs_agnesdowd"):
		case joaat("cs_cavehermit"):
		case joaat("cs_brynntildon"):
		case joaat("cs_germanson"):
		case joaat("cs_brendacrawley"):
		case joaat("cs_colfavours"):
		case joaat("cs_rhodeskidnapvictim"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("cs_cancan_04"):
		case joaat("cs_towncrier"):
		case joaat("cs_famousgunslinger_04"):
		case joaat("cs_dalemaroney"):
		case joaat("cs_angryhusband"):
		case joaat("cs_lillianpowell"):
		case joaat("cs_andershelgerson"):
		case joaat("cs_poorjoe"):
		case joaat("cs_braithwaiteservant"):
		case joaat("cs_brotherdorkins"):
		case joaat("cs_albertmason"):
		case joaat("cs_famousgunslinger_05"):
		case joaat("cs_balloonoperator"):
		case joaat("cs_albertcakeesquire"):
		case joaat("cs_mrsfellows"):
		case joaat("cs_cancanman_01"):
		case joaat("cs_poisonwellshaman"):
		case joaat("cs_cancan_02"):
		case joaat("cs_meredithsmother"):
		case joaat("cs_angel"):
		case joaat("cs_archerfordham"):
		case joaat("cs_disguisedduster_01"):
		case joaat("cs_chelonianmaster"):
		case joaat("cs_twinbrother_01"):
		case joaat("cs_germandaughter"):
		case joaat("cs_lemiuxassistant"):
		case joaat("cs_creoledoctor"):
		case joaat("cs_crackpotrobot"):
		case joaat("cs_bandbassist"):
		case joaat("cs_genstoryfemale"):
		case joaat("cs_marylinton"):
		case joaat("cs_valprayingman"):
		case joaat("cs_johnthebaptisingmadman"):
		case joaat("cs_mrs_calhoun"):
		case joaat("cs_theodorelevin"):
		case joaat("cs_nicholastimmins"):
		case joaat("cs_disguisedduster_03"):
		case joaat("cs_dinoboneslady"):
		case joaat("cs_beaugray"):
		case joaat("cs_strawberryoutlaw_01"):
		case joaat("cs_crackpotinventor"):
		case joaat("cs_hercule"):
		case joaat("cs_gavin"):
		case joaat("cs_levisimon"):
		case joaat("cs_londonderryson"):
		case joaat("cs_captainmonroe"):
		case joaat("cs_famousgunslinger_02"):
		case joaat("cs_mrslondonderry"):
		case joaat("cs_soothsayer"):
		case joaat("cs_tavishgray"):
		case joaat("cs_joebutler"):
		case joaat("cs_banddrummer"):
		case joaat("cs_lillymillet"):
		case joaat("cs_ansel_atherton"):
		case joaat("cs_rhodeputy_02"):
		case joaat("cs_edmundlowry"):
		case joaat("cs_disguisedduster_02"):
		case joaat("cs_magnifico"):
		case joaat("cs_artappraiser"):
		case joaat("cs_forgivenhusband_01"):
		case joaat("cs_reverendfortheringham"):
		case joaat("cs_daveycallender"):
		case joaat("cs_desmond"):
		case joaat("cs_adamgray"):
		case joaat("cs_jimcalloway"):
		case joaat("cs_sdsaloondrunk_01"):
		case joaat("cs_nbxdrunk"):
		case joaat("cs_germanmother"):
		case joaat("cs_ringmaster"):
		case joaat("cs_lucanapoli"):
		case joaat("cs_rhodesassistant"):
		case joaat("cs_aberdeensister"):
		case joaat("cs_nbxexecuted"):
		case joaat("cs_famousgunslinger_06"):
		case joaat("cs_johnweathers"):
		case joaat("cs_professorbell"):
		case joaat("cs_rhodessaloonbouncer"):
			return true;
	
		default:
		
	}

	return false;
}

void func_104(Ped pedParam0, Hash hParam1) // Position - 0x27C2 Hash - 0xEA1C858E ^0x6E3B33CF
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_111(pedParam0, hParam1))
		{
			if (func_112(pedParam0, hParam1))
			{
				if (func_113(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_114(pedParam0);
				}
			}
			else
			{
				PED::_EQUIP_META_PED_OUTFIT(pedParam0, hParam1);
				PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);
			}
		
			PED::_SET_PED_DIRT_CLEANED(pedParam0, 0f, -1, true, true);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 9);
		}
	}

	return;
}

void func_105(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x286C Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_106(Ped pedParam0, BOOL bParam1) // Position - 0x289C Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_107(Ped pedParam0, int iParam1) // Position - 0x28E1 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

void func_108(BOOL bParam0) // Position - 0x2908 Hash - 0xED2925F ^0xCA812B62
{
	if (bParam0)
		func_115(&(Global_40.f_12019.f_42), 1);
	else
		func_116(&(Global_40.f_12019.f_42), 1);

	return;
}

BOOL func_109(int iParam0) // Position - 0x2932 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_110(int iParam0) // Position - 0x2965 Hash - 0x6EC15CF9 ^0xE613EBE0
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

BOOL func_111(Ped pedParam0, Hash hParam1) // Position - 0x29E6 Hash - 0x902FAF7B ^0x852CA371
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	flag = PED::_DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL(hParam1, ENTITY::GET_ENTITY_MODEL(pedParam0));

	if (flag)
	{
	}

	return flag;
}

BOOL func_112(Ped pedParam0, Hash hParam1) // Position - 0x2A14 Hash - 0xA54F3032 ^0xB859B8E
{
	Hash _int;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (_int == hParam1)
		return true;

	return false;
}

BOOL func_113(Ped pedParam0, Hash hParam1) // Position - 0x2A65 Hash - 0xA54F3032 ^0xB859B8E
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_111(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_114(Ped pedParam0) // Position - 0x2AD7 Hash - 0x446F1BDD ^0xCAB2E983
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

void func_115(BOOL bParam0, int iParam1) // Position - 0x2AF5 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

void func_116(BOOL bParam0, int iParam1) // Position - 0x2B06 Hash - 0x9815F445 ^0x9815F445
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

