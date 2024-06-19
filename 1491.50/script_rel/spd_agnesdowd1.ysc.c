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
	ePedType eptLocal_14 = PED_TYPE_PLAYER_0;
	Hash hLocal_15 = 0;
	Hash hLocal_16 = 0;
	var uLocal_17 = 24;
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
	var uLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
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
	AnimScene ansLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	var uLocal_149 = 0;
	BOOL bLocal_150 = 0;
	BOOL bLocal_151 = 0;
	BOOL bLocal_152 = 0;
	BOOL bLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = -1;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 1097859072;
	var uLocal_172 = 1000;
	var uLocal_173 = 1067450368;
	var uLocal_174 = 5000;
	var uLocal_175 = 42;
	var uLocal_176 = 1103626240;
	var uLocal_177 = 1077936128;
	var uLocal_178 = 1106247680;
	var uLocal_179 = 1103101952;
	var uLocal_180 = 1097859072;
	var uLocal_181 = 1103626240;
	var uLocal_182 = 0;
	Ped pedLocal_183 = 0;
	Entity eLocal_184 = 0;
	Entity eLocal_185 = 0;
	Volume volLocal_186 = 0;
	Volume volLocal_187 = 0;
	Volume volLocal_188 = 0;
	int iLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xAF778FD2 ^0xE05AB8EA
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	eptLocal_14 = joaat("cs_agnesdowd");
	hLocal_15 = joaat("p_detonator01x");
	hLocal_16 = joaat("p_cs_noose01x");

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
		func_1();

	while (true)
	{
		BUILTIN::WAIT(0);
		func_2();
		func_3();
		func_4();
		func_5();
		func_6(0, iLocal_200, &pedLocal_183, &uLocal_204, &bLocal_151, 0, 1097859072, false);
		func_7();
		func_8();
		func_9(pedLocal_183, &iLocal_139, 16384, 0, 0);
	
		if (!func_10(iLocal_139, 4194304))
		{
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_183))
			{
				if (AUDIO::_0x131EC9247E7A2903(pedLocal_183))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(pedLocal_183, "special_ped_group", 0);
					func_11(&iLocal_139, 4194304);
				}
			}
		}
	
		if (!func_10(iLocal_139, 8192))
		{
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_183))
			{
				if (!PED::_IS_PED_VISIBILITY_TRACKED(pedLocal_183))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(pedLocal_183);
				}
				else if (bLocal_150 && func_12(pedLocal_183, 80f, -1082130432, -1082130432, -1082130432) || func_10(iLocal_139, 256))
				{
					func_14(0, func_13());
					func_11(&iLocal_139, 8192);
				}
			}
		}
	
		switch (iLocal_115)
		{
			case 0:
				func_15();
				func_16(1);
				break;
		
			case 1:
				if (func_17())
					func_16(2);
				break;
		
			case 2:
				if (func_18())
					if (iLocal_200 < 5)
						func_16(3);
					else
						func_16(4);
				break;
		
			case 3:
				func_19();
				break;
		
			case 4:
				func_21();
				break;
		
			case 5:
				func_20();
				break;
		
			case 6:
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(pedLocal_183) && iLocal_200 != 5)
					func_1();
			
				if (iLocal_200 == 5)
				{
					if (!func_10(iLocal_139, 2097152))
					{
						ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(ansLocal_138, "pbl_IG2_Hanging_Rope");
					
						if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(ansLocal_138, "pbl_IG2_Hanging_Rope"))
						{
							ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(ansLocal_138, "pbl_IG2_Hanging_Rope", true);
							func_11(&iLocal_139, 2097152);
						}
					}
					else if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(ansLocal_138))
					{
						if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(ansLocal_138, false) && ANIMSCENE::GET_ANIM_SCENE_PHASE(ansLocal_138) > 0.9f)
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(ansLocal_138, true);
					}
				}
				break;
		}
	
		if (!func_10(iLocal_139, 1024))
			if (func_22())
				func_11(&iLocal_139, 1024);
		else
			func_23();
	
		if (!func_10(iLocal_139, 1))
		{
			if (iLocal_200 == 5)
			{
				if (func_10(iLocal_139, 256))
					func_11(&iLocal_139, 1);
			}
			else if (func_10(iLocal_139, 8) || bLocal_151)
			{
				func_24(0, &pedLocal_183, &iLocal_139, 32768);
				func_11(&iLocal_139, 1);
			}
		}
	}

	return;
}

void func_1() // Position - 0x290 Hash - 0x7B93F950 ^0x2B96C478
{
	if (iLocal_200 == 5)
		TASK::SET_SCENARIO_GROUP_ENABLED("RARE_ORCHIDS_AGNES_LADYSLIPPER", false);

	if (func_10(iLocal_139, 1))
	{
		iLocal_144 = iLocal_144 + 1;
	
		if (iLocal_144 < func_25(iLocal_200))
		{
			func_26(iLocal_199, iLocal_144);
		}
		else
		{
			iLocal_200 = iLocal_200 + 1;
			func_26(iLocal_199, 0);
		
			if (iLocal_200 > 5)
				func_27(0, 12);
			else
				func_27(0, iLocal_200);
		}
	}

	if (func_10(iLocal_139, 512))
		MISC::CLEAR_WEATHER_TYPE_PERSIST();

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_183) && func_10(iLocal_139, 4194304))
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(pedLocal_183, 0);

	if (AUDIO::_0x580D71DFE0088E34("Spirits", "PDADD_Sounds"))
	{
		AUDIO::_STOP_SOUND_WITH_NAME("Spirits", "PDADD_Sounds");
		AUDIO::_RELEASE_SHARD_SOUNDS("Spirits", "PDADD_Sounds");
	}

	if (AUDIO::_0x580D71DFE0088E34("Drone", "PDADD_Sounds"))
	{
		AUDIO::_STOP_SOUND_WITH_NAME("Drone", "PDADD_Sounds");
		AUDIO::_RELEASE_SHARD_SOUNDS("Drone", "PDADD_Sounds");
	}

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_186))
	{
		func_28(volLocal_186);
		PATHFIND::RESET_ROADS_IN_VOLUME(volLocal_186, false);
		VOLUME::DELETE_VOLUME(volLocal_186);
	}

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_188))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_188);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(volLocal_188);
		VOLUME::DELETE_VOLUME(volLocal_188);
	}

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_187))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_187);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(volLocal_187);
		VOLUME::DELETE_VOLUME(volLocal_187);
	}

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_183))
		PED::DELETE_PED(&pedLocal_183);

	if (func_10(iLocal_139, 2))
	{
		GRAPHICS::_PEDSHOT_FINISH_CLEANUP_DATA();
		GRAPHICS::_PEDSHOT_INIT_CLEANUP_DATA();
	
		if (func_10(iLocal_139, 8388608))
		{
			GRAPHICS::_0x285438C26C732F9D();
			func_29(&iLocal_139, 8388608);
		}
	}

	func_30(&iLocal_117);
	func_31(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_2() // Position - 0x3FF Hash - 0xC2A6F0BE ^0x121CFCA4
{
	if (!VOLUME::DOES_VOLUME_EXIST(Global_1396257[0 /*638*/][func_32(0) /*48*/].f_47))
		func_1();

	if (!func_33(Global_35, 0))
	{
		func_1();
	}
	else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_1396257[0 /*638*/][func_32(0) /*48*/].f_47, true, 0))
	{
		if (!func_34(&uLocal_201))
			func_35(&uLocal_201, false);
		else if (func_36(&uLocal_201) > 10f)
			func_1();
	}
	else if (func_37(0, func_32(0), &iLocal_117, pedLocal_183))
	{
		if (func_10(iLocal_117, 32) && iLocal_200 < 5 && func_10(iLocal_139, 32) || iLocal_200 == 5 && func_38())
		{
			if (!func_10(iLocal_139, 65536))
				func_11(&iLocal_139, 65536);
		
			if (!func_10(iLocal_139, 131072))
				func_11(&iLocal_139, 131072);
		
			if (!func_10(iLocal_139, 262144))
				func_11(&iLocal_139, 262144);
		
			if (!func_10(iLocal_139, 524288))
				func_11(&iLocal_139, 524288);
		
			if (!func_10(iLocal_139, 256))
				func_11(&iLocal_139, 256);
		
			if (!bLocal_152)
				bLocal_152 = true;
		}
		else
		{
			func_1();
		}
	}

	return;
}

void func_3() // Position - 0x54A Hash - 0x540C6618 ^0xCB1FFBA8
{
	if (iLocal_115 == 3)
		if (!PED::IS_PED_HEADTRACKING_ENTITY(pedLocal_183, Global_35))
			TASK::TASK_LOOK_AT_ENTITY(pedLocal_183, Global_35, -1, 0, 51, 0);
	else if (PED::IS_PED_HEADTRACKING_ENTITY(pedLocal_183, Global_35))
		TASK::TASK_CLEAR_LOOK_AT(pedLocal_183);

	return;
}

void func_4() // Position - 0x588 Hash - 0xAB6C0246 ^0xA5CDAF30
{
	if (iLocal_115 == 3 || iLocal_115 == 5 && ENTITY::IS_ENTITY_AT_ENTITY(Global_35, pedLocal_183, 12f, 12f, 12f, false, false, 0))
		if (!PED::IS_PED_HEADTRACKING_ENTITY(Global_35, pedLocal_183))
			TASK::TASK_LOOK_AT_ENTITY(Global_35, pedLocal_183, -1, 0, 51, 0);
	else if (PED::IS_PED_HEADTRACKING_ENTITY(Global_35, pedLocal_183))
		TASK::TASK_CLEAR_LOOK_AT(Global_35);

	return;
}

void func_5() // Position - 0x5F2 Hash - 0x7A349566 ^0x7A652F87
{
	Ped mount;
	Ped mount2;

	if (iLocal_146 < 1)
	{
		mount = PED::GET_MOUNT(Global_35);
	
		if (mount != 0 && func_33(mount, 0))
		{
			PED::SET_PED_RESET_FLAG(mount, 105, true);
		
			if (AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_183))
			{
				TASK::TASK_HORSE_ACTION(mount, 4, 0, 0);
				iLocal_146 = iLocal_146 + 1;
			}
		}
	}

	if (bLocal_150)
	{
		if (!bLocal_153)
		{
			if (func_10(iLocal_139, 2048) && !func_10(iLocal_139, 4096))
			{
				mount2 = PED::GET_MOUNT(Global_35);
			
				if (mount2 != 0 && func_33(mount2, 0))
				{
					PED::SET_PED_RESET_FLAG(mount2, 105, true);
					TASK::TASK_HORSE_ACTION(mount2, 5, 0, 0);
					func_11(&iLocal_139, 4096);
				}
			}
		}
	}

	return;
}

int func_6(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x69A Hash - 0x7BECED45 ^0x18ECA136
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
			Global_40.f_11623[iParam0 /*8*/].f_2 = func_39();
			*uParam4 = 1;
			return 1;
		}
	}

	if (iParam5 == 0f)
		if (!func_40(Global_35, *uParam2, iParam6, true))
			return 0;
	else if (iParam5 > iParam6)
		return 0;

	if (!func_34(uParam3))
	{
		func_41(uParam3, 0f);
	}
	else if (func_36(uParam3) >= 2f)
	{
		if (!func_42(Global_40.f_11623[iParam0 /*8*/].f_2))
		{
			func_43(iParam0);
			*uParam4 = 1;
			func_44(uParam3);
			return 1;
		}
		else
		{
			func_43(iParam0);
			*uParam4 = 1;
			func_44(uParam3);
			return 1;
		}
	}

	return 0;
}

void func_7() // Position - 0x791 Hash - 0x2ACE1680 ^0xFD44917D
{
	float num;
	float heading;

	if (iLocal_115 > 2)
	{
		if (bLocal_150)
		{
			if (!func_10(iLocal_139, 2))
			{
				GRAPHICS::_PEDSHOT_SET_PERSONA_PHOTO_TYPE(0);
				GRAPHICS::_0xFD05B1DDE83749FA("SPD_AGNES_DOWD_01");
				GRAPHICS::_PEDSHOT_PREVIOUS_PERSONA_PHOTO_DATA_CLEANUP();
				GRAPHICS::_PEDSHOT_GENERATE_PERSONA_PHOTO("SPD_AGNES_DOWD_01", pedLocal_183, 0);
				GRAPHICS::_0x402E1A61D2587FCD(0, ENTITY::GET_ENTITY_COORDS(pedLocal_183, true, false), 0f, 0f, ENTITY::GET_ENTITY_HEADING(pedLocal_183));
				func_11(&iLocal_139, 2);
			}
		
			if (iLocal_115 < 6)
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_189))
					iLocal_189 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_ped_ghost_haze_stage1", ENTITY::GET_ENTITY_COORDS(pedLocal_183, true, false), ENTITY::GET_ENTITY_ROTATION(pedLocal_183, 2), 1065353216, false, false, false, false);
				else
					GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(iLocal_189, ENTITY::GET_ENTITY_COORDS(pedLocal_183, true, false), ENTITY::GET_ENTITY_ROTATION(pedLocal_183, 2));
		
			if (iLocal_200 != 5)
			{
				num = { ENTITY::GET_ENTITY_COORDS(pedLocal_183, true, false) - ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
				heading = MISC::ATAN2(num.f_1, num) + 90f;
				ENTITY::SET_ENTITY_HEADING(pedLocal_183, heading);
			}
		}
	}

	return;
}

void func_8() // Position - 0x867 Hash - 0xF8C0B5B7 ^0x12138EFD
{
	if (func_10(iLocal_139, 16) && iLocal_143 >= 8)
		return;

	if (func_45(&pedLocal_183, &uLocal_149, &uLocal_190, &iLocal_143, 8, 0, 7000, 0))
		func_11(&iLocal_139, 16);

	return;
}

void func_9(Ped pedParam0, var uParam1, int iParam2, int iParam3, int iParam4) // Position - 0x8A5 Hash - 0xADE9EDC3 ^0x77996A42
{
	char* audioName;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || Global_1935630.f_12)
		return;

	audioName = func_46(iParam3);

	if (iParam4 == 0f)
	{
		if (func_40(pedParam0, Global_35, 15f, true))
		{
			if (!func_47(*uParam1, iParam2))
				if (AUDIO::_START_AUDIO_SCENESET(audioName, "special_ped_scenes"))
					func_48(uParam1, iParam2);
		}
		else if (func_47(*uParam1, iParam2))
		{
			AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
			func_49(uParam1, iParam2);
		}
	}
	else if (iParam4 <= 15f)
	{
		if (!func_47(*uParam1, iParam2))
			if (AUDIO::_START_AUDIO_SCENESET(audioName, "special_ped_scenes"))
				func_48(uParam1, iParam2);
	}
	else if (func_47(*uParam1, iParam2))
	{
		AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
		func_49(uParam1, iParam2);
	}

	return;
}

BOOL func_10(int iParam0, int iParam1) // Position - 0x972 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_11(var uParam0, int iParam1) // Position - 0x981 Hash - 0xF55E891F ^0xF55E891F
{
	func_48(uParam0, iParam1);
	return;
}

BOOL func_12(Ped pedParam0, float fParam1, int iParam2, int iParam3, int iParam4) // Position - 0x991 Hash - 0x3E30B0B5 ^0x3E30B0B5
{
	int num;

	if (iParam3 > 0f)
		num = iParam3;
	else
		num = func_50(pedParam0, Global_36, true);

	if (iParam2 > 0f)
		if (num < iParam2)
			return 1;

	if (num < fParam1)
		if (PED::_IS_PED_VISIBILITY_TRACKED(pedParam0))
			if (iParam4 > 0f)
				if (PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(pedParam0, iParam4))
					return 1;
			else if (PED::IS_TRACKED_PED_VISIBLE(pedParam0))
				return 1;
		else if (!ENTITY::IS_ENTITY_OCCLUDED(pedParam0))
			if (ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
				return 1;

	return 0;
}

BOOL func_13() // Position - 0xA1A Hash - 0x37EC066 ^0xC9B08D38
{
	if (func_51() != -1)
		return false;

	if (Global_40.f_39 == joaat("Player_Zero"))
		return true;

	return false;
}

void func_14(int iParam0, BOOL bParam1) // Position - 0xA40 Hash - 0xA0394E6F ^0x73A932AF
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
				func_52(joaat("journal_special_peds_agnes_dowd_ar"), 0);
			else
				func_52(joaat("journal_special_peds_agnes_dowd_jn"), 0);
			break;
	
		case 4:
			if (bParam1)
				func_52(joaat("journal_special_peds_cassidy_ar"), 0);
			else
				func_52(joaat("journal_special_peds_cassidy_jn"), 0);
			break;
	
		case 5:
			if (bParam1)
				func_52(joaat("journal_rc_crkpt4_1_ar"), 0);
			else if (func_53(55))
				func_52(joaat("journal_rc_crkpt4_1b_jn"), 0);
			else
				func_52(joaat("journal_rc_crkpt4_1a_jn"), 0);
			break;
	
		case 12:
			if (bParam1)
				func_52(joaat("journal_special_peds_giant_ar"), 0);
			else
				func_52(joaat("journal_special_peds_giant_jn"), 0);
			break;
	
		case 20:
			if (bParam1)
				func_52(joaat("journal_special_peds_philosopher_cave_ar"), 0);
			else
				func_52(joaat("journal_special_peds_philosopher_cave_jn"), 0);
			break;
	
		case 21:
			if (bParam1)
				func_52(joaat("journal_special_peds_tree_monkey_ar"), 0);
			else
				func_52(joaat("journal_special_peds_tree_monkey_jn"), 0);
			break;
	
		case 28:
			if (bParam1)
				func_52(joaat("journal_special_peds_cabin_hermit_ar"), 0);
			else
				func_52(joaat("journal_special_peds_cabin_hermit_jn"), 0);
			break;
	
		default:
			break;
	}

	return;
}

void func_15() // Position - 0xB6C Hash - 0x22192704 ^0x22192704
{
	Hash weatherType;

	iLocal_200 = func_32(0);
	iLocal_199 = func_55(0, iLocal_200, 9, func_54(0));
	func_56(&iLocal_117);
	iLocal_144 = func_57(iLocal_199);
	iLocal_141 = func_58(iLocal_200, iLocal_144);
	iLocal_142 = iLocal_141 + func_59(iLocal_200, iLocal_144);
	bLocal_150 = func_60(iLocal_200, iLocal_144);

	if (bLocal_150)
		fLocal_148 = 1f;

	func_61();
	HUD::TEXT_BLOCK_REQUEST("SPADAUD");
	STREAMING::REQUEST_MODEL(eptLocal_14, false);
	STREAMING::REQUEST_PTFX_ASSET();

	if (iLocal_200 == 5)
	{
		STREAMING::REQUEST_MODEL(hLocal_15, false);
		STREAMING::REQUEST_MODEL(hLocal_16, false);
	}

	func_62(volLocal_186, "SP_AgnesDowd1_Block", true, 0, 0, false, -1082130432);
	PATHFIND::SET_ROADS_IN_VOLUME(volLocal_186, false, false, false);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_188, 0, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volLocal_188, 0, 0, 0, -1, -1, 0);
	PED::_RESERVE_AMBIENT_PEDS(1);
	weatherType = func_63();

	if (weatherType == joaat("Misty") || weatherType == joaat("Fog"))
	{
		if (!func_10(iLocal_139, 512))
		{
			MISC::SET_WEATHER_TYPE(weatherType, false, true, false, 0, false);
			func_11(&iLocal_139, 512);
		}
	}

	ansLocal_138 = ANIMSCENE::_CREATE_ANIM_SCENE(func_64(iLocal_200), 0, func_65(iLocal_200), false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(ansLocal_138);
	func_66(&uLocal_154);
	func_67(&uLocal_154, true);
	func_68(&uLocal_154, false);
	func_69(&uLocal_154, false);
	func_70(&uLocal_154, false);
	func_71(&uLocal_154, true);
	func_72(&uLocal_154, true);
	func_73(&uLocal_154, true);
	func_74(&uLocal_154, false);
	fLocal_147 = 999999f;
	func_16(1);
	return;
}

void func_16(int iParam0) // Position - 0xCCB Hash - 0xA136A18E ^0xA136A18E
{
	iLocal_115 = iParam0;

	switch (iParam0)
	{
		case 4:
			uLocal_207 = { 70f, 70f, 120f };
			break;
	}

	return;
}

BOOL func_17() // Position - 0xCFB Hash - 0xE987E5E ^0x80119E8D
{
	if (!HUD::TEXT_BLOCK_IS_LOADED("SPADAUD"))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(eptLocal_14))
		return false;

	if (iLocal_200 == 5)
		if (!STREAMING::HAS_MODEL_LOADED(hLocal_16) || !STREAMING::HAS_MODEL_LOADED(hLocal_15))
			return false;

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_138, true, false))
		return false;

	if (!STREAMING::HAS_PTFX_ASSET_LOADED())
		return false;

	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() != 1)
		return false;

	if (!AUDIO::PREPARE_SOUNDSET("PDADD_Sounds", false))
		return false;

	return true;
}

BOOL func_18() // Position - 0xD7A Hash - 0x851AD44B ^0x25C711ED
{
	var unk;
	var unk2;

	unk2 = { func_75(0, iLocal_200, Global_1396257[0 /*638*/].f_633) };

	if (func_76(&unk, unk2, unk2.f_3))
	{
		if (iLocal_200 == 5)
		{
			func_78(&eLocal_184, hLocal_16, func_77(1));
			func_78(&eLocal_185, hLocal_15, func_77(2));
			ENTITY::FREEZE_ENTITY_POSITION(eLocal_185, true);
			ENTITY::SET_ENTITY_COLLISION(eLocal_185, false, false);
			ENTITY::SET_ENTITY_VISIBLE(eLocal_185, false);
			ENTITY::SET_ENTITY_COLLISION(eLocal_184, false, false);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_138, "Noose" /*N.O.O.S.E*/, eLocal_184, 0);
			TASK::SET_SCENARIO_GROUP_ENABLED("RARE_ORCHIDS_AGNES_LADYSLIPPER", true);
		}
	
		func_79(pedLocal_183, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_183, joaat("REL_NO_RELATIONSHIP"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_183, true);
		PED::SET_PED_KEEP_TASK(pedLocal_183, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_183, 6, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(pedLocal_183, false);
		PED::SET_PED_CONFIG_FLAG(pedLocal_183, 277, true);
		ENTITY::SET_ENTITY_COLLISION(pedLocal_183, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(pedLocal_183, true);
		ENTITY::SET_ENTITY_INVINCIBLE(pedLocal_183, true);
		AUDIO::_SET_AMBIENT_ZONE_POSITION("AZ_Agnes_Dowd_01", ENTITY::GET_ENTITY_COORDS(pedLocal_183, true, false), 0f);
		AUDIO::SET_AMBIENT_ZONE_STATE("AZ_Agnes_Dowd_01", true, true);
	
		if (VOLUME::DOES_VOLUME_EXIST(volLocal_187))
		{
			PED::_ATTACH_VOLUME_TO_ENTITY(volLocal_187, pedLocal_183, 0f, 0f, 0f, 0f, 0f, 0f, 2, true);
			POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_187, 0, 0, 0, -1, -1, 0);
			POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volLocal_187, 0, 0, 0, -1, -1, 0);
		}
	
		ENTITY::SET_ENTITY_VISIBLE(pedLocal_183, bLocal_150);
		func_80(pedLocal_183, 0);
		func_81(&uLocal_17, pedLocal_183, "AGNES_DOWD", false);
		func_82(pedLocal_183, -2116139111);
		AUDIO::PLAY_SOUND_FROM_ENTITY("Spirits", pedLocal_183, "PDADD_Sounds", false, 0, 0);
		AUDIO::PLAY_SOUND_FROM_ENTITY("Drone", pedLocal_183, "PDADD_Sounds", false, 0, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_138, "AGNES_DOWD", pedLocal_183, 0);
		ANIMSCENE::START_ANIM_SCENE(ansLocal_138);
		return true;
	}

	return false;
}

void func_19() // Position - 0xEF1 Hash - 0x4E9D8FC0 ^0xC7AD88A8
{
	if (MISC::GET_GAME_TIMER() >= iLocal_140 && iLocal_141 < iLocal_142)
	{
		if (!func_10(iLocal_139, 32))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(Global_35, pedLocal_183, 100f, 100f, 100f, false, false, 0))
			{
				func_11(&iLocal_139, 32);
				func_11(&iLocal_139, 8);
			}
		}
		else if (iLocal_141 > func_58(iLocal_200, iLocal_144))
		{
			if (!func_34(&uLocal_196))
				func_83(&uLocal_196);
			else if (ENTITY::IS_ENTITY_AT_ENTITY(Global_35, pedLocal_183, 35f, 35f, 100f, false, false, 0) || func_84(&uLocal_196) > 20f)
				func_16(5);
		}
		else
		{
			func_16(5);
		}
	}

	return;
}

void func_20() // Position - 0xFA7 Hash - 0x303B4B6E ^0x1E1C610C
{
	char* playlistName;

	playlistName = func_85(iLocal_200, iLocal_141);

	switch (iLocal_116)
	{
		case 0:
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(ansLocal_138, playlistName);
			iLocal_116 = 1;
			break;
	
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(ansLocal_138, playlistName))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(ansLocal_138, playlistName, true);
				iLocal_116 = 2;
			}
			break;
	
		case 2:
			if (!func_10(iLocal_139, 1048576))
			{
				func_86(1, 2, 0, true);
				func_11(&iLocal_139, 1048576);
			}
		
			if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(ansLocal_138, func_87(iLocal_200, iLocal_141), true))
			{
				iLocal_141 = iLocal_141 + 1;
				iLocal_140 = MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 2800);
				iLocal_116 = 0;
				func_11(&iLocal_139, 8);
				func_16(3);
			}
			break;
	}

	return;
}

void func_21() // Position - 0x1058 Hash - 0xA3EF0332 ^0x4D357837
{
	var unk;
	var entityCoords;

	if (!func_10(iLocal_139, 64))
	{
		if (func_88(&pedLocal_183, &eLocal_185, &eLocal_184))
			func_11(&iLocal_139, 64);
	}
	else
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(Global_35, pedLocal_183, 20f, 20f, 30f, false, false, 0))
		{
			if (!AUDIO::_IS_ANY_CONVERSATION_PLAYING(true))
			{
				if (!func_10(iLocal_139, 256))
				{
					TEXT_LABEL_ASSIGN_STRING(&unk, "SPAD_IG1_4_F", 24);
				
					if (func_89(&uLocal_17, unk, false, -1, false, false))
						func_11(&iLocal_139, 256);
				}
			}
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(Global_35, pedLocal_183, 70f, 70f, 120f, false, false, 0))
		{
			if (!AUDIO::_IS_ANY_CONVERSATION_PLAYING(true) && !func_10(iLocal_139, 256))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(Global_35, pedLocal_183, uLocal_207, false, false, 0) || func_84(&uLocal_193) > 10f)
				{
					if (!func_10(iLocal_139, 65536))
					{
						TEXT_LABEL_ASSIGN_STRING(&unk, "SPAD_TOTHETREE", 24);
					
						if (func_89(&uLocal_17, unk, true, 0, false, false))
						{
							uLocal_207 = { 60f, 60f, 120f };
							func_11(&iLocal_139, 65536);
						}
					}
					else if (!func_10(iLocal_139, 131072))
					{
						TEXT_LABEL_ASSIGN_STRING(&unk, "SPAD_TOTHETREE", 24);
					
						if (func_89(&uLocal_17, unk, true, 1, false, false))
						{
							uLocal_207 = { 50f, 50f, 120f };
							func_11(&iLocal_139, 131072);
						}
					}
					else if (!func_10(iLocal_139, 262144))
					{
						TEXT_LABEL_ASSIGN_STRING(&unk, "SPAD_TOTHETREE", 24);
					
						if (func_89(&uLocal_17, unk, true, 2, false, false))
						{
							uLocal_207 = { 40f, 40f, 120f };
							func_11(&iLocal_139, 262144);
						}
					}
					else if (!func_10(iLocal_139, 524288))
					{
						TEXT_LABEL_ASSIGN_STRING(&unk, "SPAD_TOTHETREE", 24);
					
						if (func_89(&uLocal_17, unk, true, 3, false, false))
							func_11(&iLocal_139, 524288);
					}
				}
			}
			else
			{
				func_83(&uLocal_193);
			}
		}
	
		if (PED::CAN_PED_RAGDOLL(pedLocal_183))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_183, true, false) };
			PED::SET_PED_TO_RAGDOLL_WITH_FALL(pedLocal_183, 0, 100, 2, 0f, 0f, 0f, entityCoords.f_2 - 1f, 0f, 0f, 0f, 0f, 0f, 0f);
		}
	}

	return;
}

BOOL func_22() // Position - 0x1271 Hash - 0xD039B0B5 ^0x7DF57DB5
{
	float num;
	float num2;

	if (bLocal_150 && ENTITY::DOES_ENTITY_EXIST(pedLocal_183))
	{
		ENTITY::SET_ENTITY_ALPHA(pedLocal_183, 1, true);
		num = 1f;
		num2 = 0f;
		func_90(&fLocal_148, num, num2, true);
	
		if (fLocal_148 <= 0f)
			return true;
	}

	return false;
}

void func_23() // Position - 0x12AE Hash - 0x936FDC2A ^0x936FDC2A
{
	int num;
	float num2;
	float num3;
	float num4;

	if (iLocal_115 < 6)
	{
		if (!bLocal_153)
		{
			if (bLocal_150)
			{
				if (func_91(pedLocal_183, 0, &uLocal_154, &uLocal_182, 0, 0))
				{
					func_43(0);
					bLocal_153 = true;
				}
			}
		
			if (!bLocal_152)
			{
				if (iLocal_141 >= iLocal_142 && iLocal_200 < 5 || iLocal_200 == 5 && func_10(iLocal_139, 256))
				{
					if (!func_10(iLocal_139, 4))
					{
						func_11(&iLocal_139, 4);
					
						if (iLocal_200 == 5)
							num = 2500;
						else
							num = 1500;
					
						iLocal_145 = MISC::GET_GAME_TIMER() + num;
					}
					else if (MISC::GET_GAME_TIMER() >= iLocal_145)
					{
						bLocal_152 = true;
					}
				}
			}
		}
	
		if (bLocal_150 && ENTITY::DOES_ENTITY_EXIST(pedLocal_183))
		{
			ENTITY::SET_ENTITY_ALPHA(pedLocal_183, 1, true);
			num2 = 0f;
			num3 = 0f;
		
			if (bLocal_153)
			{
				num2 = 2f;
				num3 = 1f;
			}
			else if (bLocal_152)
			{
				num2 = 0.6f;
				num3 = 1f;
			}
			else
			{
				num4 = func_92(Global_35, pedLocal_183, false, false);
			
				if (num4 < fLocal_147)
					fLocal_147 = num4;
			
				if (fLocal_147 <= 8f)
				{
					num2 = 1f;
					num3 = 1f;
				}
				else if (fLocal_147 <= 25f)
				{
					num2 = 0.7f;
					num3 = 1f - ((fLocal_147 - 10f) / 20f);
				}
			}
		
			if (num2 > 0f)
			{
				func_90(&fLocal_148, num2, num3, false);
			
				if (fLocal_148 >= 1f)
				{
					ENTITY::SET_ENTITY_ALPHA(pedLocal_183, 255, false);
					ENTITY::SET_ENTITY_VISIBLE(pedLocal_183, false);
					ENTITY::FREEZE_ENTITY_POSITION(pedLocal_183, true);
					ENTITY::SET_ENTITY_COLLISION(pedLocal_183, false, false);
					GRAPHICS::_PEDSHOT_INIT_CLEANUP_DATA();
					GRAPHICS::_PEDSHOT_FINISH_CLEANUP_DATA();
					GRAPHICS::_0x5C9C3A466B3296A8(0);
				
					if (func_10(iLocal_139, 8388608))
					{
						GRAPHICS::_0x285438C26C732F9D();
						func_29(&iLocal_139, 8388608);
					}
				
					if (ENTITY::DOES_ENTITY_EXIST(pedLocal_183))
						if (iLocal_200 == 5)
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(ansLocal_138, "AGNES_DOWD", pedLocal_183);
				
					GRAPHICS::REMOVE_PARTICLE_FX(iLocal_189, false);
					func_11(&iLocal_139, 2048);
					func_16(6);
				}
			}
		}
		else if (bLocal_152)
		{
			func_16(6);
		}
	}

	return;
}

void func_24(int iParam0, var uParam1, var uParam2, int iParam3) // Position - 0x1478 Hash - 0x3D679EE4 ^0xBD1763F0
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		return;

	if (func_47(*uParam2, iParam3))
		return;

	Global_40.f_11623[iParam0 /*8*/].f_6 = Global_40.f_11623[iParam0 /*8*/].f_6 + 1;

	if (Global_40.f_11623[iParam0 /*8*/].f_6 == 1 && func_94(func_93(joaat("special_ped_interaction"))) < 5)
		func_95(func_93(joaat("special_ped_interaction")), 1);

	Global_40.f_11623[iParam0 /*8*/].f_3 = func_39();
	func_48(uParam2, iParam3);
	Global_1396257[iParam0 /*638*/].f_631 = 1;
	return;
}

int func_25(int iParam0) // Position - 0x150F Hash - 0x496B29CF ^0x496B29CF
{
	switch (iParam0)
	{
		case 0:
			return 3;
	
		case 1:
			return 2;
	
		case 2:
			return 2;
	
		case 3:
			return 4;
	
		case 4:
			return 4;
	
		case 5:
			return 1;
	}

	return 0;
}

void func_26(int iParam0, int iParam1) // Position - 0x156E Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_96(iParam0))
		return;

	func_97(iParam0, iParam1);
	return;
}

void func_27(int iParam0, int iParam1) // Position - 0x158B Hash - 0xDEDCA13F ^0xDEDCA13F
{
	if (Global_40.f_11623[iParam0 /*8*/] != iParam1)
		Global_40.f_11623[iParam0 /*8*/] = iParam1;

	return;
}

void func_28(Volume volParam0) // Position - 0x15AE Hash - 0x4A7DD833 ^0xF771448B
{
	var volumeCoords;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volParam0) };
	func_98(volumeCoords, 0);
	return;
}

void func_29(var uParam0, int iParam1) // Position - 0x15D6 Hash - 0xF55E891F ^0xF55E891F
{
	func_49(uParam0, iParam1);
	return;
}

void func_30(var uParam0) // Position - 0x15E6 Hash - 0xDFB6596B ^0xFDA355C
{
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_18))
		ITEMSET::DESTROY_ITEMSET(uParam0->f_18);

	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_19))
		ITEMSET::DESTROY_ITEMSET(uParam0->f_19);

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_20))
		VOLUME::DELETE_VOLUME(uParam0->f_20);

	if (func_34(&(uParam0->f_13)))
		func_44(&(uParam0->f_13));

	return;
}

void func_31(int iParam0) // Position - 0x163A Hash - 0xE0F13664 ^0x6F64281C
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);

	if (Global_1396257[iParam0 /*638*/].f_631)
		func_99(false, -1);

	func_100();
	Global_1396257[iParam0 /*638*/].f_631 = 0;
	Global_1415398.f_2 = Global_1415398.f_2 - 1;
	Global_1935183.f_28 = 0;
	return;
}

int func_32(int iParam0) // Position - 0x1692 Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11623[iParam0 /*8*/];
}

BOOL func_33(Ped pedParam0, int iParam1) // Position - 0x16A4 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_10(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_10(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_10(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_10(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_10(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_10(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_10(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_10(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

BOOL func_34(var uParam0) // Position - 0x17A3 Hash - 0x5001E582 ^0x5001E582
{
	return func_101(*uParam0, 1);
}

void func_35(var uParam0, BOOL bParam1) // Position - 0x17B3 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_34(uParam0))
		func_83(uParam0);

	return;
}

float func_36(var uParam0) // Position - 0x17D3 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_34(uParam0))
		return uParam0->f_1;

	if (func_102(uParam0))
		return uParam0->f_2;

	return func_103() - uParam0->f_1;
}

BOOL func_37(int iParam0, int iParam1, var uParam2, Ped pedParam3) // Position - 0x1808 Hash - 0x540B5813 ^0x255543BD
{
	eStackSize stackSize;
	eStackSize stackSize2;
	eStackSize stackSize3;
	BOOL flag;

	if (MISC::GET_FRAME_COUNT() % 10 == 0)
	{
		if (uParam2->f_1)
			if (func_104(0) == 1 || func_104(0) == 2 || func_104(0) == 8 || func_105(Global_1935630, 2048))
				func_11(uParam2, 2);
	
		if (uParam2->f_2)
			if (func_104(0) == 11)
				func_11(uParam2, 4);
	
		if (uParam2->f_4)
			if (func_104(0) == 6)
				func_11(uParam2, 8);
	
		if (uParam2->f_5)
			if (Global_1394141.f_1328)
				func_11(uParam2, 16);
	}

	if (MISC::GET_FRAME_COUNT() % 30 == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_106(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && func_106(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				stackSize = func_39();
				stackSize2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				stackSize3 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
			
				if (func_106(stackSize3) > func_106(stackSize2))
					if (func_106(stackSize) > func_106(stackSize3) + 1 || func_106(stackSize) < func_106(stackSize2))
						func_11(uParam2, 32);
				else if (func_106(stackSize) > func_106(stackSize3) + 1 && func_106(stackSize) < func_106(stackSize2))
					func_11(uParam2, 32);
			}
		}
	
		if (uParam2->f_7)
		{
			flag = false;
		
			if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40 != 4)
			{
				if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0] != -1 || Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1] != -1)
					if (func_107(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || func_107(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]) || func_108(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || func_108(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
						flag = true;
			
				if (!flag)
					if (!func_109(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
						func_11(uParam2, 64);
			}
		}
	
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (func_110(&pedParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_111(&pedParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!func_34(&(uParam2->f_13)))
					{
						func_41(&(uParam2->f_13), 0f);
					}
					else if (func_112(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_44(&(uParam2->f_13));
						func_11(uParam2, 512);
					}
				
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (func_34(&(uParam2->f_13)))
						func_44(&(uParam2->f_13));
				
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
	
		if (uParam2->f_9)
			if (func_113())
				func_11(uParam2, 1024);
	
		if (uParam2->f_10)
			if (func_114())
				func_11(uParam2, 2048);
	
		if (func_105(Global_1935630, 16384) || Global_1430231.f_4)
			func_11(uParam2, 128);
	
		if (func_115(&(Global_1396257[iParam0 /*638*/].f_626), 2048))
			func_11(uParam2, 256);
	}

	if (func_10(*uParam2, 2) || func_10(*uParam2, 4) || func_10(*uParam2, 8) || func_10(*uParam2, 16) || func_10(*uParam2, 32) || func_10(*uParam2, 64) || func_10(*uParam2, 128) || func_10(*uParam2, 256) || func_10(*uParam2, 512) || func_10(*uParam2, 1024) || func_10(*uParam2, 2048))
		return true;

	return false;
}

BOOL func_38() // Position - 0x1C26 Hash - 0x2E2934CD ^0x4E6E4299
{
	if (func_10(iLocal_139, 65536) || func_10(iLocal_139, 131072) || func_10(iLocal_139, 262144) || func_10(iLocal_139, 524288) || func_10(iLocal_139, 256))
		return true;

	return false;
}

eStackSize func_39() // Position - 0x1C7F Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

BOOL func_40(Ped pedParam0, Ped pedParam1, int iParam2, BOOL bParam3) // Position - 0x1C8B Hash - 0x6DF7EDD6 ^0x5000CFB6
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return false;

	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(pedParam1, bParam3, false)) <= iParam2 * iParam2)
		return true;

	return false;
}

void func_41(var uParam0, float fParam1) // Position - 0x1CD3 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_103() - fParam1;
	func_116(uParam0, 1);
	func_117(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_42(Hash hParam0) // Position - 0x1CF9 Hash - 0xD02571D6 ^0x9878B86D
{
	return hParam0 != -15;
}

void func_43(int iParam0) // Position - 0x1D07 Hash - 0x866B8C3 ^0xA8518BD7
{
	Global_40.f_11623[iParam0 /*8*/].f_5 = Global_40.f_11623[iParam0 /*8*/].f_5 + 1;
	Global_40.f_11623[iParam0 /*8*/].f_2 = func_39();
	return;
}

void func_44(var uParam0) // Position - 0x1D39 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_45(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, Hash hParam5, int iParam6, int iParam7) // Position - 0x1D4F Hash - 0xA44B948 ^0xA44B948
{
	if (*uParam3 >= iParam4)
		return false;

	if (*uParam1)
	{
		if (!func_34(uParam2))
		{
			func_41(uParam2, 0f);
			return false;
		}
		else if (func_112(uParam2) > iParam6)
		{
			func_44(uParam2);
			*uParam3 = *uParam3 + 1;
			*uParam1 = 0;
			return false;
		}
		else
		{
			return false;
		}
	}

	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
	{
		if (iParam7 == 0f)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
				return false;
		
			iParam7 = func_92(*uParam0, Global_35, true, true);
		}
	
		if (hParam5 == 0)
			if (iParam7 >= 0f && iParam7 < 10f)
				hParam5 = 249295937;
			else if (iParam7 >= 10f && iParam7 < 20f)
				hParam5 = 1715123483;
			else if (iParam7 >= 20f && iParam7 < 30f)
				hParam5 = 1891783641;
			else if (iParam7 >= 30f && iParam7 < 50f)
				hParam5 = joaat("SONAR_OVERHEARD_BEAT_BIG");
			else
				hParam5 = 1515458263;
	
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(hParam5, *uParam0);
		*uParam1 = 1;
		return true;
	}

	return false;
}

char* func_46(int iParam0) // Position - 0x1E92 Hash - 0x933CE56F ^0x6FC14575
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

BOOL func_47(int iParam0, int iParam1) // Position - 0x202B Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_48(var uParam0, int iParam1) // Position - 0x203A Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_49(var uParam0, int iParam1) // Position - 0x204B Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

int func_50(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x2060 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

BOOL func_51() // Position - 0x2088 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

void func_52(int iParam0, int iParam1) // Position - 0x2096 Hash - 0xF5E9551B ^0xF5E9551B
{
	int i;

	if (iParam1 == 1)
	{
		func_118(iParam0, 0);
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
	
		func_119(1);
		Global_40.f_11922[0] = iParam0;
	}

	return;
}

BOOL func_53(int iParam0) // Position - 0x20EE Hash - 0xBF2B4762 ^0xBF2B4762
{
	return Global_40.f_490.f_402[iParam0] & true != 0;
}

Hash func_54(int iParam0) // Position - 0x2107 Hash - 0xB8EC44B7 ^0x6DBAB464
{
	switch (iParam0)
	{
		case 0:
			return 1005861726;
	
		case 1:
			return 1472102294;
	
		case 2:
			return -26239347;
	
		case 3:
			return 813446076;
	
		case 4:
			return joaat("spid_blind_man_cassidy");
	
		case 5:
			return 1809158435;
	
		case 6:
			return -161610929;
	
		case 7:
			return 419383665;
	
		case 8:
			return 698747486;
	
		case 9:
			return 399829678;
	
		case 10:
			return -1767525506;
	
		case 11:
			return 1533318556;
	
		case 12:
			return 846763582;
	
		case 13:
			return 974338564;
	
		case 14:
			return 860809165;
	
		case 15:
			return -1682386507;
	
		case 16:
			return 420952075;
	
		case 17:
			return 1340251064;
	
		case 18:
			return -1417023286;
	
		case 19:
			return 237608522;
	
		case 20:
			return 1487910336;
	
		case 21:
			return 129290505;
	
		case 22:
			return 1231488843;
	
		case 23:
			return -499580940;
	
		case 24:
			return 1953535365;
	
		case 25:
			return -315419568;
	
		case 26:
			return -1708806962;
	
		case 27:
			return 1405526353;
	
		case 28:
			return -1903564707;
	
		case 29:
			return -1132839335;
	
		default:
		
	}

	return 0;
}

int func_55(int iParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x22BC Hash - 0x71EF3E96 ^0x557A7961
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	BOOL flag;
	int num5;

	num3 = iParam0;
	num4 = iParam1;

	if (Global_1572887.f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				num = 1;
				num2 = 100;
				hParam3 = MISC::GET_HASH_KEY(&(Global_1835011[iParam0 /*74*/].f_8));
				break;
		
			case 2:
				num = 101;
				num2 = 170;
				break;
		
			case 3:
				num = 171;
				num2 = 190;
				break;
		
			case 4:
				num = 191;
				num2 = 230;
				break;
		
			case 5:
				num = 231;
				num2 = 260;
				break;
		
			case 6:
				num = 261;
				num2 = 290;
				break;
		
			case 7:
				num = 291;
				num2 = 370;
				break;
		
			case 8:
				num = 371;
				num2 = 570;
				hParam3 = MISC::GET_HASH_KEY(&(Global_1347702[iParam0 /*49*/].f_3));
				break;
		
			case 9:
				num = 571;
				num2 = 650;
				break;
		
			case 10:
				return -1;
		
			case 11:
				num = 651;
				num2 = 750;
				break;
		
			case 12:
				return -1;
		
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				num = 1;
				num2 = 200;
				break;
		
			case 2:
				num = 201;
				num2 = 15700;
				break;
		
			case 4:
				num = 15701;
				num2 = 16200;
				break;
		
			case 6:
				return -1;
		
			case 7:
				return -1;
		
			case 8:
				return -1;
		
			case 10:
				num = 19201;
				num2 = 20000;
				break;
		
			case 12:
				num = 16201;
				num2 = 19200;
				break;
		
			default:
				return -1;
		}
	}

	if (num2 >= func_120())
		num2 = func_120();

	flag = func_121(num3, num4, iParam2);

	if (Global_1572887.f_12 == -1)
	{
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			num5 = i;
		
			if (func_122(num5) == flag)
				return num5;
		
			if (func_122(num5) == false)
				return func_123(num3, num4, iParam2, i, hParam3);
		}
	
		num = 751;
		num2 = 770;
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			num5 = i;
		
			if (func_122(num5) == flag)
				return num5;
		
			if (func_122(num5) == false)
				return func_123(num3, num4, iParam2, i, hParam3);
		}
	}
	else
	{
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			if (Global_1058888.f_428[i /*2*/] == flag)
				return i;
		}
	
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			if (Global_1058888.f_428[i /*2*/] == false)
				return func_123(num3, num4, iParam2, i, 0);
		}
	}

	return -1;
}

void func_56(var uParam0) // Position - 0x2577 Hash - 0xA450C620 ^0xFB35EBED
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 1;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
	return;
}

int func_57(int iParam0) // Position - 0x25C6 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_96(iParam0))
		return -1;

	return func_124(iParam0);
}

int func_58(int iParam0, int iParam1) // Position - 0x25E2 Hash - 0xB3101EB2 ^0xB3101EB2
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 2;
			
				case 2:
					return 4;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 1;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 1;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 1;
			
				case 2:
					return 4;
			
				case 3:
					return 6;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 1;
			
				case 2:
					return 4;
			
				case 3:
					return 5;
			}
			break;
	
		case 5:
			return 0;
	}

	return 0;
}

int func_59(int iParam0, int iParam1) // Position - 0x2718 Hash - 0x65A94BA1 ^0x65A94BA1
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2;
			
				case 1:
					return 2;
			
				case 2:
					return 2;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
			
				case 1:
					return 2;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1;
			
				case 1:
					return 1;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
			
				case 1:
					return 3;
			
				case 2:
					return 2;
			
				case 3:
					return 2;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1;
			
				case 1:
					return 3;
			
				case 2:
					return 1;
			
				case 3:
					return 3;
			}
			break;
	
		case 5:
			return 1;
	}

	return 1;
}

BOOL func_60(int iParam0, int iParam1) // Position - 0x284E Hash - 0x3DFC405E ^0x3DFC405E
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 1;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 1;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 1;
			
				case 2:
					return 0;
			
				case 3:
					return 1;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 1;
			
				case 2:
					return 0;
			
				case 3:
					return 1;
			}
			break;
	
		case 5:
			return 1;
	}

	return 0;
}

void func_61() // Position - 0x2984 Hash - 0xDEF05778 ^0x4A70BCFD
{
	Hash volumeType;
	var unk11;
	Vector3 vector;

	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_186))
	{
		volumeType = { func_125() };
		vector = { func_75(0, iLocal_200, Global_1396257[0 /*638*/].f_633) };
		volLocal_186 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(volumeType, vector, volumeType.f_4, volumeType.f_7, volumeType.f_10);
	}

	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_187))
	{
		volumeType = { func_126() };
		volLocal_187 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(volumeType, volumeType.f_1, volumeType.f_4, volumeType.f_7, volumeType.f_10);
	}

	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_188))
	{
		unk11 = { func_127(0, iLocal_200, 0, 0) };
		volLocal_188 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(unk11.f_1, unk11.f_2, unk11.f_5, unk11.f_8, unk11.f_11);
	}

	return;
}

Volume func_62(Volume volParam0, char* sParam1, BOOL bParam2, Entity eParam3, int iParam4, BOOL bParam5, int iParam6) // Position - 0x2A3A Hash - 0x6F9FCD12 ^0xB17393EA
{
	var volumeCoords;
	float volumeScale;
	Volume volume;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return 0;

	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volParam0) };
	volumeScale = { VOLUME::GET_VOLUME_SCALE(volParam0) };
	volume = func_128(volumeCoords, volumeScale, sParam1, bParam2, eParam3, iParam4, bParam5, iParam6);
	return volume;
}

Hash func_63() // Position - 0x2A7E Hash - 0x1372AFBD ^0xAE723118
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

char* func_64(int iParam0) // Position - 0x2AA8 Hash - 0x7AF54176 ^0xE2A51D59
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return "script@specialped@pdadd_agnes_dowd@ig@ig_2@ig_2";
	
		default:
			return "script@specialped@pdadd_agnes_dowd@ig@ig_1@ig_1";
	}

	return "INVALID";
}

char* func_65(int iParam0) // Position - 0x2ADC Hash - 0x312A2832 ^0x9F03F988
{
	switch (iParam0)
	{
		case 4:
			return "pbl_base_reset";
	
		case 5:
			return "pbl_IG2_Hanging";
	
		default:
		
	}

	return "pbl_BASE01_reset";
}

void func_66(BOOL bParam0) // Position - 0x2B14 Hash - 0xD2F4094 ^0xD2F4094
{
	func_67(bParam0, false);
	func_74(bParam0, false);
	func_129(bParam0, true);
	func_130(bParam0, true);
	func_131(bParam0, false);
	func_132(bParam0, true);
	func_133(bParam0, true, true, true);
	return;
}

void func_67(BOOL bParam0, BOOL bParam1) // Position - 0x2B4F Hash - 0x97140DD8 ^0xF9889272
{
	if (bParam1)
		func_134(&(bParam0->f_1), 16384);
	else
		func_135(&(bParam0->f_1), 16384);

	return;
}

void func_68(var uParam0, BOOL bParam1) // Position - 0x2B75 Hash - 0x76250B73 ^0xFF9F293B
{
	if (bParam1)
		func_134(&(uParam0->f_1), 131072);
	else
		func_135(&(uParam0->f_1), 131072);

	return;
}

void func_69(BOOL bParam0, BOOL bParam1) // Position - 0x2B9D Hash - 0x57EE9974 ^0x57EE9974
{
	if (bParam1)
		func_135(bParam0, 4);
	else
		func_134(bParam0, 4);

	return;
}

void func_70(BOOL bParam0, BOOL bParam1) // Position - 0x2BBB Hash - 0xCB123803 ^0xCB123803
{
	if (bParam1)
		func_135(bParam0, 2);
	else
		func_134(bParam0, 2);

	return;
}

void func_71(var uParam0, BOOL bParam1) // Position - 0x2BD9 Hash - 0xF7B0944E ^0xC84C2F80
{
	if (bParam1)
		func_134(&(uParam0->f_1), 2);
	else
		func_135(&(uParam0->f_1), 2);

	return;
}

void func_72(var uParam0, BOOL bParam1) // Position - 0x2BFB Hash - 0x6418D0A4 ^0x15BADFF8
{
	if (bParam1)
		func_134(&(uParam0->f_1), 8);
	else
		func_135(&(uParam0->f_1), 8);

	return;
}

void func_73(var uParam0, BOOL bParam1) // Position - 0x2C1F Hash - 0xB272A69C ^0x2A37F53B
{
	if (bParam1)
		func_134(&(uParam0->f_1), 4);
	else
		func_135(&(uParam0->f_1), 4);

	return;
}

void func_74(BOOL bParam0, BOOL bParam1) // Position - 0x2C41 Hash - 0x97140DD8 ^0xBDBF7A5
{
	if (bParam1)
		func_134(&(bParam0->f_1), 2048);
	else
		func_135(&(bParam0->f_1), 2048);

	return;
}

struct<4> func_75(int iParam0, int iParam1, int iParam2) // Position - 0x2C67 Hash - 0xDBE3FCBC ^0x303D1AC0
{
	var unk;

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
					switch (iParam2)
					{
						case 0:
							unk = { 1992.4779f, -370.79572f, 40.79723f };
							unk.f_3 = 0f;
							break;
					
						case 1:
							unk = { 2015.3519f, -327.90005f, 40.61312f };
							unk.f_3 = 0f;
							break;
					
						case 2:
							unk = { 2048.9727f, -308.35455f, 40.71767f };
							unk.f_3 = 0f;
							break;
					
						case 3:
							unk = { 1988.4011f, -327.90463f, 40.52593f };
							unk.f_3 = 0f;
							break;
					
						case 4:
							unk = { 2043.4733f, -299.7293f, 40.62843f };
							unk.f_3 = 0f;
							break;
					}
					break;
			
				case 5:
					unk = { 2008.711f, -330.3677f, 40.6611f };
					unk.f_3 = 0f;
					break;
			}
			break;
	
		case 1:
			unk = { 2434.052f, -1224.9409f, 45.8519f };
			unk.f_3 = -118f;
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					unk = { -3704.056f, -2618.0237f, -14.9192f };
					unk.f_3 = 23.3026f;
					break;
			
				case 1:
					switch (iParam2)
					{
						case 0:
							unk = { -3644.6743f, -2615.9246f, -14.8451f };
							unk.f_3 = 349.841f;
							break;
					
						case 1:
							unk = { -3644.6743f, -2615.9246f, -14.8451f };
							unk.f_3 = 349.841f;
							break;
					
						case 2:
							unk = { -3704.056f, -2618.0237f, -14.9192f };
							unk.f_3 = 23.3026f;
							break;
					
						case 3:
							unk = { -3704.056f, -2618.0237f, -14.9192f };
							unk.f_3 = 23.3026f;
							break;
					}
					break;
			}
			break;
	
		case 3:
			unk = { -1791.8064f, -422.4149f, 154.8645f };
			unk.f_3 = 205.9765f;
			break;
	
		case 4:
			switch (func_136(4))
			{
				case 3:
					unk = { 502.0502f, 1284.9785f, 181.4051f };
					unk.f_3 = 114.5882f;
					break;
			
				case 4:
					unk = { -1208.5542f, -1229.6831f, 74.7918f };
					unk.f_3 = 19.5942f;
					break;
			
				case 9:
					unk = { 414.5646f, 412.7333f, 107.6299f };
					unk.f_3 = 352.4153f;
					break;
			
				case 10:
					unk = { 2794.1572f, 1406.6195f, 82.3539f };
					unk.f_3 = 65.0766f;
					break;
			
				case 13:
					unk = { -5342.929f, -2947.815f, 0.80696f };
					unk.f_3 = 20.08f;
					break;
			}
			break;
	
		case 5:
			unk = { -1502.0983f, 2458.125f, 417.4865f };
			unk.f_3 = 160.0872f;
			break;
	
		case 6:
			switch (iParam1)
			{
				case 0:
					unk = { 888.6843f, 1276.6118f, 234.0975f };
					unk.f_3 = 321.3007f;
					break;
			
				case 1:
					unk = { 865.601f, 1248.8201f, 179.7602f };
					unk.f_3 = 321.3007f;
					break;
			}
			break;
	
		case 7:
			unk = { 2016.2605f, 623.0106f, 158.6706f };
			unk.f_3 = -167.98f;
			break;
	
		case 8:
			switch (iParam1)
			{
				case 0:
					unk = { 2547.3772f, -1216.0457f, 52.3168f };
					unk.f_3 = 87.45f;
					break;
			
				case 1:
					unk = { 2547.3772f, -1216.0457f, 52.3168f };
					unk.f_3 = 87.45f;
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
					unk = { -326.079f, 765.2856f, 121.6327f };
					unk.f_3 = 352.3531f;
					break;
			}
			break;
	
		case 10:
			unk = { 2673.4602f, -1391.2594f, 47.508163f };
			unk.f_3 = 316.45f;
			break;
	
		case 11:
			switch (func_137(11))
			{
				case 5:
					unk = { 2563.8354f, -1378.4235f, 45.1925f };
					unk.f_3 = 346.5068f;
					return unk;
			
				case 38:
					unk = { -773.2449f, -1329.0819f, 42.6291f };
					unk.f_3 = 191.3503f;
					return unk;
			
				case 105:
					unk = { 1423.4384f, -1381.8009f, 80.8106f };
					unk.f_3 = 352.6983f;
					return unk;
			
				case 126:
					unk = { -2378.4746f, -2378.6206f, 61.1724f };
					unk.f_3 = 185.2923f;
					return unk;
			}
		
			switch (func_136(11))
			{
				case 10:
					unk = { 2428.8643f, 1015.7285f, 85.6131f };
					unk.f_3 = 304.652f;
					break;
			
				case 11:
					unk = { 1295.8018f, -200.3015f, 99.0642f };
					unk.f_3 = 1.8815f;
					break;
			
				case 12:
					unk = { -2338.2102f, -1271.3617f, 147.062f };
					unk.f_3 = 356.6931f;
					break;
			
				case 15:
					unk = { -3157.477f, -2981.991f, 4.6224f };
					unk.f_3 = 86.239f;
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					unk = { 1702.7361f, 2168.0957f, 318.91913f };
					unk.f_3 = 180.6669f;
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 0:
					unk = { -312.9856f, 808.8508f, 117.9822f };
					unk.f_3 = 197.2573f;
					break;
			}
			break;
	
		case 14:
			unk = { 1320.7445f, -1291.7386f, 75.14026f };
			unk.f_3 = 68.748f;
			break;
	
		case 15:
			switch (func_136(15))
			{
				case 1:
					unk = { -1891.265f, -289.866f, 176.457f };
					unk.f_3 = 266.9828f;
					break;
			
				case 7:
				case 9:
					unk = { -727.395f, 686.1953f, 58.2244f };
					unk.f_3 = 177.0399f;
					break;
			
				case 10:
					unk = { 2183.3484f, 1502.8187f, 83.6009f };
					unk.f_3 = 0f;
					break;
			
				case 13:
					unk = { -6122.2007f, -3803.7512f, -35.2455f };
					unk.f_3 = 181.815f;
					break;
			
				default:
					unk = { -1891.265f, -289.866f, 176.457f };
					unk.f_3 = 266.9828f;
					break;
			}
			break;
	
		case 16:
			unk = { 2636.429f, -1229.5375f, 52.3795f };
			unk.f_3 = 358.7895f;
			break;
	
		case 17:
			unk = { 2943.5876f, 1336.9988f, 43.22713f };
			unk.f_3 = 76.2778f;
			break;
	
		case 18:
			switch (iParam1)
			{
				case 0:
					unk = { -1812.1855f, -367.3066f, 161.8834f };
					unk.f_3 = 167.5016f;
					break;
			
				case 1:
					unk = { -1807.8899f, -371.5062f, 161.8662f };
					unk.f_3 = 167.5016f;
					break;
			
				case 2:
					unk = { -1800.857f, -357.3966f, 162.96312f };
					unk.f_3 = 167.5016f;
					break;
			}
			break;
	
		case 19:
			switch (iParam2)
			{
				case 0:
					unk = { -256.365f, 753.5781f, 116.0851f };
					unk.f_3 = 284.0192f;
					break;
			
				case 1:
					unk = { -192.9274f, 625.6254f, 113.5786f };
					unk.f_3 = 145.05f;
					break;
			
				default:
					unk = { -256.365f, 753.5781f, 116.0851f };
					unk.f_3 = 284.0192f;
					break;
			}
			break;
	
		case 20:
			unk = { -2725.2773f, 709.9713f, 173.0266f };
			unk.f_3 = 359.6814f;
			break;
	
		case 21:
			unk = { 2706.2825f, 2369.8271f, 170.23364f };
			unk.f_3 = 359.6814f;
			break;
	
		case 22:
			switch (iParam1)
			{
				case 0:
					unk = { -5511.039f, -2929.552f, -3.278f };
					unk.f_3 = -131.907f;
					break;
			
				case 1:
					unk = { -5497.666f, -2957.426f, -1.708f };
					unk.f_3 = 12.912f;
					break;
			
				case 2:
					unk = { -5493.435f, -2940.703f, -1.471f };
					unk.f_3 = 124.069f;
					break;
			}
			break;
	
		case 23:
			switch (func_136(23))
			{
				case 0:
					unk = { 1784.0885f, -946.648f, 40.7225f };
					unk.f_3 = 254.7072f;
					break;
			
				case 2:
					unk = { 2445.8406f, -463.2956f, 41.1018f };
					unk.f_3 = 126.5562f;
					break;
			}
			break;
	
		case 24:
			switch (iParam1)
			{
				case 0:
					unk = { -2233.6016f, -2850.5166f, 62.7628f };
					unk.f_3 = 208.7791f;
					break;
			
				case 1:
					unk = { -3198.9988f, -2538.554f, 66.5911f };
					unk.f_3 = 292.1099f;
					break;
			
				case 2:
					unk = { -2927.1196f, -2860.494f, 85.7312f };
					unk.f_3 = 123.2795f;
					break;
			
				case 3:
					unk = { -3267.86f, -3416.6768f, 39.5041f };
					unk.f_3 = 332.5893f;
					break;
			
				case 4:
					unk = { -3572.7944f, -3565.2222f, 33.505f };
					unk.f_3 = 260.2986f;
					break;
			
				case 5:
					unk = { -4399.393f, -3606.7456f, 48.6452f };
					unk.f_3 = 348.5519f;
					break;
			
				case 6:
					unk = { -4988.6763f, -4060.9917f, 1.0884f };
					unk.f_3 = 163.9257f;
					break;
			
				case 7:
					unk = { -5333.3174f, -3534.5693f, 2.0586f };
					unk.f_3 = 306.198f;
					break;
			
				case 8:
					unk = { -5374.994f, -4053.294f, -6.2292f };
					unk.f_3 = 170.3096f;
					break;
			
				case 9:
					unk = { -5413.131f, -2606.1558f, 2.5597f };
					unk.f_3 = 255.0981f;
					break;
			
				case 10:
					unk = { -4956.249f, -3198.202f, 26.3575f };
					unk.f_3 = 292.8281f;
					break;
			
				case 11:
					unk = { -4594.695f, -3045.0408f, 6.5776f };
					unk.f_3 = 4.7478f;
					break;
			}
			break;
	
		case 25:
			unk = { 2368.5884f, -859.9452f, 42.0223f };
			unk.f_3 = 198.7042f;
			break;
	
		case 26:
			unk = { -345.2797f, 794.6578f, 115.1777f };
			unk.f_3 = 28.0552f;
			break;
	
		case 27:
			unk = { 2644.4434f, -1207.9456f, 52.3368f };
			unk.f_3 = 199.0776f;
			break;
	
		case 28:
			unk = { 3025.5566f, 1779.6986f, 83.2056f };
			unk.f_3 = 142.8609f;
			break;
	
		case 29:
			unk = { 2778.292f, -1313.2737f, 45.89664f };
			unk.f_3 = 216.3798f;
			break;
	}

	return unk;
}

BOOL func_76(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0x3893 Hash - 0x355F0538 ^0xD7FE2286
{
	if (*uParam0)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_183))
		return true;

	pedLocal_183 = func_138(eptLocal_14, uParam1, fParam4, false, true, 0, true, true, true, false, false, false, false);

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_183))
	{
		*uParam0 = 1;
		return true;
	}

	return false;
}

Vector3 func_77(int iParam0) // Position - 0x38DC Hash - 0x8BB0B56F ^0x8BB0B56F
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk = { 2008.85f, -329.84f, 41.602f };
			break;
	
		case 1:
			unk = { 2008.85f, -329.84f, 41.602f };
			break;
	
		case 2:
			unk = { 2008.85f, -329.84f, 41.602f };
			break;
	}

	return unk;
}

int func_78(var uParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4) // Position - 0x3944 Hash - 0xB83681D5 ^0x2836D87A
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = OBJECT::CREATE_OBJECT(hParam1, vParam2, true, true, false, false, true);
		return 0;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return 0;

	return 1;
}

void func_79(Ped pedParam0, int iParam1) // Position - 0x397D Hash - 0x729F5BA5 ^0xE496EDAE
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

void func_80(Ped pedParam0, int iParam1) // Position - 0x39CE Hash - 0x9F3718A3 ^0x4D3B8F25
{
	BOOL _int;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(pedParam0, "honor_block"))
			_int = DECORATOR::DECOR_GET_INT(pedParam0, "honor_block");
	
		_int = _int || func_139(iParam1);
		DECORATOR::DECOR_SET_INT(pedParam0, "honor_block", _int);
	}

	return;
}

void func_81(var uParam0, Ped pedParam1, char* sParam2, BOOL bParam3) // Position - 0x3A10 Hash - 0x5AD955B5 ^0x43BD5215
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (func_140(uParam0, pedParam1, sParam2))
		if (!PED::IS_PED_INJURED(pedParam1))
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam1))
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam1, bParam3);

	return;
}

void func_82(Ped pedParam0, Hash hParam1) // Position - 0x3A6D Hash - 0xEA1C858E ^0xF1B7CCA2
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_141(pedParam0, hParam1))
		{
			if (func_142(pedParam0, hParam1))
			{
				if (func_143(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_144(pedParam0);
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

void func_83(var uParam0) // Position - 0x3B17 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_41(uParam0, 0f);
	return;
}

float func_84(var uParam0) // Position - 0x3B26 Hash - 0x5E6CC847 ^0xFCFB84EF
{
	if (!func_34(uParam0))
		return 0f;

	if (func_102(uParam0))
		return uParam0->f_2;

	return func_103() - uParam0->f_1;
}

char* func_85(int iParam0, int iParam1) // Position - 0x3B58 Hash - 0x56C6ED69 ^0xDD61C153
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "pbl_P1_T01_ACTION_A";
			
				case 1:
					return "pbl_P1_T01_ACTION_B";
			
				case 2:
					return "pbl_P1_T01_ACTION_C";
			
				case 3:
					return "pbl_P1_T01_ACTION_D";
			
				case 4:
					return "pbl_P1_T02_ACTION_B_ALT";
			
				case 5:
					return "pbl_P1_T02_ACTION_C";
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return "pbl_P2_T01_ACTION_A";
			
				case 1:
					return "pbl_P2_T03_ACTION_A";
			
				case 2:
					return "pbl_P2_T03_ACTION_B";
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return "pbl_P3_T04_ACTION_A";
			
				case 1:
					return "pbl_P3_T06_ACTION_A";
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return "pbl_P4_T03_ACTION_A";
			
				case 1:
					return "pbl_P4_T04_ACTION_A";
			
				case 2:
					return "pbl_P4_T04_ACTION_B";
			
				case 3:
					return "pbl_P4_T04_ACTION_C";
			
				case 4:
					return "pbl_P4_T04_ACTION_D";
			
				case 5:
					return "pbl_P4_T04_ACTION_E";
			
				case 6:
					return "pbl_P4_T04_ACTION_F";
			
				case 7:
					return "pbl_P4_T04_ACTION_G";
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return "pbl_T01_Action_A";
			
				case 1:
					return "pbl_T01_Action_B";
			
				case 2:
					return "pbl_T01_Action_C";
			
				case 3:
					return "pbl_T01_Action_D";
			
				case 4:
					return "pbl_T01_Action_E";
			
				case 5:
					return "pbl_T02_Action_A";
			
				case 6:
					return "pbl_T02_Action_B";
			
				case 7:
					return "pbl_T02_Action_C";
			}
			break;
	}

	return "INVALID";
}

void func_86(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x3D71 Hash - 0xB7DFAC0B ^0xE8A27630
{
	int i;
	int num;

	for (i = 0; i < 120; i = i + 1)
	{
		num = 0;
	
		if (func_145(Global_1310750[i /*111*/], iParam0))
		{
			if (!func_146(i))
				num = 1;
			else if (iParam0 == 16777216)
				if (func_147(i) < func_148(iParam1))
					num = 1;
		
			func_149(i, iParam1, 1f, num || iParam2, bParam3);
		}
	}

	return;
}

char* func_87(int iParam0, int iParam1) // Position - 0x3DE1 Hash - 0xD7955FB1 ^0xEA224D4C
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 >= 4)
				return "s_BASE02_end";
			else
				return "s_BASE01_end";
			break;
	
		case 1:
			if (iParam1 == 0)
				return "s_BASE03_end";
			else
				return "s_BASE03_end";
			break;
	
		case 2:
			return "s_BASE04_end";
	
		case 3:
			return "s_BASE04_end";
	
		case 4:
			return "s_BASE_end";
	}

	return "INVALID";
}

BOOL func_88(var uParam0, var uParam1, var uParam2) // Position - 0x3E65 Hash - 0x4DAF0EDB ^0x2D53A20A
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam2))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return false;

	if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(*uParam2))
	{
		ENTITY::SET_ENTITY_COLLISION(*uParam0, true, false);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(ansLocal_138, func_77(0), 0f, 0f, 45f, 2);
		return true;
	}

	return false;
}

BOOL func_89(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x3EC8 Hash - 0x4863E989 ^0xB2E91EEF
{
	BOOL flag;

	if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&uParam1))
		flag = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&uParam1);
	else
		flag = true;

	if (flag)
	{
		func_150(uParam1, uParam0);
	
		if (bParam6)
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
		else
			AUDIO::START_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
	
		if (bParam4)
			AUDIO::_0x40CA665AB9D8D505(&uParam1, iParam5);
	}

	return flag;
}

void func_90(var uParam0, float fParam1, float fParam2, BOOL bParam3) // Position - 0x3F22 Hash - 0x27C3EDF9 ^0xAEEC51F4
{
	if (bParam3)
		*uParam0 = *uParam0 - (fParam1 * BUILTIN::TIMESTEP());
	else
		*uParam0 = *uParam0 + (fParam1 * BUILTIN::TIMESTEP());

	if (func_10(iLocal_139, 8388608))
	{
		GRAPHICS::_0x285438C26C732F9D();
		func_29(&iLocal_139, 8388608);
	}

	if (!func_10(iLocal_139, 8388608))
	{
		GRAPHICS::_0xA15CCAB8AD038291(pedLocal_183, 0, 1, *uParam0);
		func_11(&iLocal_139, 8388608);
	}

	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_189))
		GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_189, "intensity", *uParam0, false);

	if (bParam3)
		if (*uParam0 <= fParam2)
			*uParam0 = fParam2;
	else if (*uParam0 >= fParam2)
		*uParam0 = fParam2;

	return;
}

BOOL func_91(Ped pedParam0, Entity eParam1, BOOL bParam2, var uParam3, int iParam4, int iParam5) // Position - 0x3FC9 Hash - 0xA6A8DD54 ^0x5E6EC30E
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();

	if (frameCount > bParam2->f_5)
		func_151(bParam2, true, frameCount);

	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (iParam5 > 0f)
			bParam2->f_12 = iParam5;
		else
			bParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(pedParam0, true, false));
	
		if (!(bParam2->f_1 & 128 != 0))
		{
			if (func_152(pedParam0, bParam2))
			{
				*uParam3 = 128;
				func_153(pedParam0, bParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_27)
		{
			if (!(bParam2->f_1 & 8 != 0))
			{
				if (func_154(pedParam0, bParam2))
				{
					*uParam3 = 8;
					func_153(pedParam0, bParam2, *uParam3);
					return true;
				}
				else if (func_155(pedParam0, eParam1, bParam2))
				{
					*uParam3 = 8;
					func_153(pedParam0, bParam2, *uParam3);
					return true;
				}
			}
		
			if (*bParam2 & 32 != 0)
			{
				if (func_156(pedParam0, bParam2))
				{
					*uParam3 = 64;
					func_153(pedParam0, bParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1935630.f_26 && func_157(PLAYER::PLAYER_ID(), false, true, bParam2->f_1 & 524288 == 0))
		{
			if (!(bParam2->f_1 & 16384 != 0))
			{
				*uParam3 = 16384;
				func_153(pedParam0, bParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_25)
		{
			if (func_158(bParam2, 1065353216))
			{
				if (!(bParam2->f_1 & 4 != 0))
				{
					if (func_159(Global_35, pedParam0, bParam2))
					{
						*uParam3 = 4;
						func_153(pedParam0, bParam2, *uParam3);
						return true;
					}
				}
			
				if (!(bParam2->f_1 & 256 != 0))
				{
					if (func_160(Global_35, pedParam0, bParam2))
					{
						*uParam3 = 256;
						func_153(pedParam0, bParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(bParam2->f_1 & 16 != 0))
		{
			if (bParam2->f_5 - Global_1935630.f_29 < 300)
			{
				if (func_161(Global_35, pedParam0, bParam2, false))
				{
					*uParam3 = 16;
					func_153(pedParam0, bParam2, *uParam3);
					return true;
				}
			}
			else if (func_161(Global_35, pedParam0, bParam2, true))
			{
				*uParam3 = 16;
				func_153(pedParam0, bParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_39 > 0)
		{
			if (*bParam2 & 8 != 0)
			{
				if (func_162(pedParam0, bParam2))
				{
					*uParam3 = 32;
					func_153(pedParam0, bParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (*bParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || bParam2->f_12 < 20f)
			{
				if (func_163(&pedParam0, bParam2))
				{
					*uParam3 = 4096;
					func_153(pedParam0, bParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!(bParam2->f_1 & 2 != 0))
			{
				if (func_164(bParam2, 4000))
				{
					if (func_165(pedParam0, Global_1935630.f_41, *bParam2 & 128 != 0, false, *bParam2 & 256 != 0) && func_166(bParam2, pedParam0) && func_167(bParam2, pedParam0))
					{
						*uParam3 = 2;
						func_153(pedParam0, bParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(bParam2->f_1 & 2 != 0))
		{
			if (bParam2->f_12 < 4f)
			{
				if (func_165(pedParam0, Global_1935630.f_41, *bParam2 & 128 != 0, true, *bParam2 & 256 != 0) && func_166(bParam2, pedParam0) && func_167(bParam2, pedParam0))
				{
					*uParam3 = 2;
					func_153(pedParam0, bParam2, *uParam3);
					return true;
				}
			
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*bParam2 & 131072 == 0)
						{
							if (func_168(pedParam0, Global_1935630.f_41))
							{
								func_169();
								*uParam3 = 2;
								func_153(pedParam0, bParam2, *uParam3);
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
					if (*bParam2 & 131072 == 0)
					{
						if (func_168(pedParam0, Global_1935630.f_41))
						{
							func_169();
							*uParam3 = 2;
							func_153(pedParam0, bParam2, *uParam3);
							return true;
						}
					}
				}
			}
		
			if (bParam2->f_12 < 10f)
			{
				if (func_170(bParam2, pedParam0) || bParam2->f_9 > 0 && func_171() - bParam2->f_9 < 2000)
				{
					if (PED::IS_PED_RAGDOLL(pedParam0))
					{
						func_169();
						*uParam3 = 2;
						func_153(pedParam0, bParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (Global_1935630.f_42 != 0)
			{
				if (*bParam2 & 131072 == 0)
				{
					if (func_172())
					{
						if (func_168(pedParam0, Global_1935630.f_42))
						{
							func_169();
							*uParam3 = 2;
							func_153(pedParam0, bParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
	
		if (!(bParam2->f_1 & 1024 != 0))
		{
			if (func_173(bParam2, pedParam0))
			{
				*uParam3 = 1024;
				func_153(pedParam0, bParam2, *uParam3);
				return true;
			}
		}
	
		if (bParam2->f_12 < bParam2->f_26)
		{
			if (!(bParam2->f_1 & 2048 != 0))
			{
				if (func_174(pedParam0, eParam1, bParam2))
				{
					*uParam3 = 2048;
					func_153(pedParam0, bParam2, *uParam3);
					return true;
				}
			}
		
			if (*bParam2 & 16 != 0)
			{
				if (bParam2->f_6 == 2)
				{
					if (func_175(pedParam0, bParam2))
					{
						*uParam3 = 8192;
						func_153(pedParam0, bParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (*bParam2 & 64 != 0)
			{
				if (func_176(pedParam0, bParam2))
				{
					*uParam3 = 32768;
					func_153(pedParam0, bParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (bParam2->f_12 < 12f)
		{
			if (*bParam2 & 1048576 != 0)
			{
				if (func_177(bParam2, 4000))
				{
					if (func_178(&pedParam0, bParam2))
					{
						*uParam3 = 512;
						func_153(pedParam0, bParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (bParam2->f_12 < bParam2->f_19)
		{
			if (*bParam2 & 1024 != 0)
			{
				if (func_179(pedParam0, bParam2))
				{
					*uParam3 = 65536;
					bParam2->f_4 = 0;
					func_153(pedParam0, bParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!(bParam2->f_1 & 1 != 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		{
			if (func_180(bParam2, pedParam0))
			{
				*uParam3 = 1;
				func_153(pedParam0, bParam2, *uParam3);
				return true;
			}
		}
	}

	return false;
}

int func_92(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x45F3 Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

struct<2> func_93(int iParam0) // Position - 0x463B Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

int func_94(var uParam0, var uParam1) // Position - 0x464B Hash - 0x3AAD93D4 ^0x6348F3E3
{
	int unk;

	STATS::STAT_ID_GET_INT(&uParam0, &unk);
	return unk;
}

void func_95(var uParam0, var uParam1, int iParam2) // Position - 0x465E Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

BOOL func_96(int iParam0) // Position - 0x466E Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

void func_97(int iParam0, int iParam1) // Position - 0x46A1 Hash - 0xB1BDF10D ^0xB21C30B2
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_3 = iParam1;
	return;
}

void func_98(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x46C1 Hash - 0x303BFB8D ^0xBCF80455
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
		
			if (func_182(vector, uParam0, 2f, true))
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

void func_99(BOOL bParam0, int iParam1) // Position - 0x4745 Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_183(&Global_0, 8);

	if (!func_184() || func_51() != -1)
		return;

	func_183(&Global_0, 1);
	return;
}

void func_100() // Position - 0x478B Hash - 0x497F81E ^0x3DCA4F91
{
	AUDIO::_STOP_AUDIO_SCENESET("special_ped_scenes");
	return;
}

BOOL func_101(int iParam0, int iParam1) // Position - 0x479A Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_102(var uParam0) // Position - 0x47A9 Hash - 0x39705408 ^0x39705408
{
	return func_101(*uParam0, 2);
}

float func_103() // Position - 0x47B9 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

int func_104(int iParam0) // Position - 0x47EB Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

BOOL func_105(int iParam0, int iParam1) // Position - 0x47FF Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_106(eStackSize essParam0) // Position - 0x480E Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 12) & 31;
}

BOOL func_107(eStackSize essParam0) // Position - 0x4821 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(essParam0 > -1 && essParam0 <= 80))
		return false;

	return func_185(Global_1835011[essParam0 /*74*/].f_1);
}

BOOL func_108(eStackSize essParam0) // Position - 0x484D Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(essParam0 > -1 && essParam0 <= 80))
		return false;

	return func_186(Global_1835011[essParam0 /*74*/].f_1);
}

BOOL func_109(int iParam0) // Position - 0x4879 Hash - 0x1EF5D3F8 ^0x1EF5D3F8
{
	int num;

	num = func_63();

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

int func_110(var uParam0, var uParam1, float fParam2, float fParam3) // Position - 0x49F7 Hash - 0xEC5EE76 ^0xF05CBEF1
{
	var entityForwardVector;
	var unk3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return 0;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	unk3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + (entityForwardVector * { fParam2, fParam2, fParam2 }) };

	if (func_187(uParam1, unk3, fParam3))
		return 1;

	return 0;
}

int func_111(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5) // Position - 0x4A43 Hash - 0x6D0071AD ^0xDBED4C65
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

	if (!func_188(uParam2, &ped, vector, fParam3, fParam4))
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
	
		if (!func_189(ped, false))
			func_190(&ped, entityCoords, 1083179008);
	
		return 1;
	}

	return 0;
}

int func_112(var uParam0) // Position - 0x4B4B Hash - 0xE440ADBD ^0x7BE35012
{
	if (!func_34(uParam0))
		return BUILTIN::ROUND(uParam0->f_1 * 1000f);

	if (func_102(uParam0))
		return BUILTIN::ROUND(uParam0->f_2 * 1000f);

	return func_171() - BUILTIN::ROUND(uParam0->f_1 * 1000f);
}

BOOL func_113() // Position - 0x4B9E Hash - 0x4228A1C2 ^0x341213A7
{
	return Global_1392040.f_6;
}

BOOL func_114() // Position - 0x4BAC Hash - 0xD6D2CD3 ^0x182E32DD
{
	if (Global_1914319.f_18941.f_17)
		return true;

	return false;
}

BOOL func_115(BOOL bParam0, int iParam1) // Position - 0x4BC5 Hash - 0x320397CF ^0x320397CF
{
	return func_191(*bParam0, iParam1);
}

void func_116(var uParam0, int iParam1) // Position - 0x4BD6 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_117(var uParam0, int iParam1) // Position - 0x4BE7 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_118(int iParam0, int iParam1) // Position - 0x4BFC Hash - 0xC0D8FAC3 ^0xE4233006
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);

	if (iParam1 == 1)
		func_192(true);

	return;
}

void func_119(int iParam0) // Position - 0x4C15 Hash - 0x23AE6B73 ^0x23AE6B73
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
	
		func_118(Global_40.f_11922[i], 0);
		Global_40.f_11922[i] = 0;
		num = 1;
	}

	if (num == 1)
		func_192(true);

	return;
}

int func_120() // Position - 0x4C83 Hash - 0x44329226 ^0x73277375
{
	if (Global_1572887.f_12 == -1)
		return 771;

	return 20001;
}

BOOL func_121(int iParam0, int iParam1, int iParam2) // Position - 0x4C9E Hash - 0x932A04D5 ^0x39A8988D
{
	return iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & &func_2, 5) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15);
}

BOOL func_122(int iParam0) // Position - 0x4CC4 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_123(int iParam0, int iParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0x4D02 Hash - 0x4E72835D ^0x57C5ACE0
{
	BOOL flag;
	int num;

	if (!func_193(iParam2))
		return -1;

	if (iParam0 < 0 || iParam0 > 511)
		return -1;

	if (iParam1 < 0 || iParam1 > 255)
		return -1;

	if (iParam3 < 0 || iParam3 > func_120())
		return -1;

	flag = func_121(iParam0, iParam1, iParam2);
	num = iParam3;
	func_194(num, 0);
	func_195(num, 0);
	func_97(num, 0);
	func_196(num, 0);
	func_197(num, flag);

	if (hParam4 != 0)
		func_198(num, hParam4);

	return num;
}

int func_124(int iParam0) // Position - 0x4DA1 Hash - 0xB1EC3C9 ^0x256D499C
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_3;

	return 0;
}

struct<11> func_125() // Position - 0x4DC0 Hash - 0xA308E209 ^0x4078B19A
{
	int num;

	num = joaat("volSphere");
	num.f_1 = { 2021.4762f, -293.6755f, 40.64257f };
	num.f_4 = { 0f, 0f, -35f };
	num.f_7 = { 150f, 150f, 20f };
	num.f_10 = "EventBlock_01";
	return num;
}

struct<11> func_126() // Position - 0x4E13 Hash - 0xB98A5F15 ^0xA0637BD1
{
	int num;

	num = joaat("volBox");
	num.f_1 = { func_199(PLAYER::GET_PLAYER_INDEX()) };
	num.f_4 = { 0f, 0f, 0f };
	num.f_7 = { 10f, 10f, 10f };
	num.f_10 = "StayAway";
	return num;
}

struct<12> func_127(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x4E5B Hash - 0x1A38A7AC ^0x2F3F0CC0
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk.f_1 = joaat("volCylinder");
			unk.f_2 = { 2041.7712f, -301.8179f, 40.64257f };
			unk.f_5 = { 0f, 0f, -35f };
			unk.f_8 = { 125f, 200f, 20f };
			unk.f_11 = "AgnesDowdInit";
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
				case 1:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { 2434.052f, -1224.9409f, 45.8519f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "AndersHelgersonInit";
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
					switch (iParam3)
					{
						case 0:
							unk.f_1 = joaat("volCylinder");
							unk.f_2 = { -3671.981f, -2610.041f, -15.387f };
							unk.f_5 = { 0f, 0f, 0f };
							unk.f_8 = { 160f, 160f, 24f };
							unk.f_11 = "ArmadilloTownCrierInit";
							break;
					
						case 1:
							unk.f_1 = joaat("volCylinder");
							unk.f_2 = { -3671.981f, -2610.041f, -15.387f };
							unk.f_5 = { 0f, 0f, 0f };
							unk.f_8 = { 160f, 160f, 24f };
							unk.f_11 = "ArmadilloTownCrierInit";
							break;
					
						case 2:
							unk.f_1 = joaat("volCylinder");
							unk.f_2 = { -3671.981f, -2610.041f, -15.387f };
							unk.f_5 = { 0f, 0f, 0f };
							unk.f_8 = { 160f, 160f, 24f };
							unk.f_11 = "ArmadilloTownCrierInit";
							break;
					
						case 3:
							unk.f_1 = joaat("volCylinder");
							unk.f_2 = { -3671.981f, -2610.041f, -15.387f };
							unk.f_5 = { 0f, 0f, 0f };
							unk.f_8 = { 160f, 160f, 24f };
							unk.f_11 = "ArmadilloTownCrierInit";
							break;
					}
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -1791.8064f, -422.4149f, 154.8645f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "BlandPreacherInit";
					break;
			}
			break;
	
		case 4:
			switch (iParam2)
			{
				case 3:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { 502.0502f, 1284.9785f, 181.4051f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 190f, 190f, 60f };
					unk.f_11 = "BlindManCassidy4Init";
					break;
			
				case 4:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -1208.5542f, -1229.6831f, 74.7918f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 190f, 190f, 60f };
					unk.f_11 = "BlindManCassidy8Init";
					break;
			
				case 9:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { 414.5646f, 412.7333f, 107.6299f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 190f, 190f, 60f };
					unk.f_11 = "BlindManCassidy5Init";
					break;
			
				case 10:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { 2794.1572f, 1406.6195f, 82.3539f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 190f, 190f, 60f };
					unk.f_11 = "BlindManCassidy6Init";
					break;
			
				case 13:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -5342.7354f, -2948.7083f, 0.8175f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 190f, 190f, 60f };
					unk.f_11 = "BlindManCassidy7Init";
					break;
			
				default:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -1208.5542f, -1229.6831f, 74.7918f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 190f, 190f, 60f };
					unk.f_11 = "BlindManCassidy8Init";
					break;
			}
			break;
	
		case 5:
			unk.f_1 = joaat("volCylinder");
			unk.f_2 = { -1504.0757f, 2458.0076f, 417.758f };
			unk.f_5 = { 0f, 0f, 0f };
			unk.f_8 = { 201.28473f, 200f, 120f };
			unk.f_11 = "CrackpotRobotInit";
			break;
	
		case 6:
			switch (iParam1)
			{
				case 0:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { 888.6843f, 1276.6118f, 234.0975f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 120f };
					unk.f_11 = "ChelonianMasterInit";
					break;
			
				case 1:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { 865.601f, 1248.8201f, 179.7602f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 180f, 180f, 120f };
					unk.f_11 = "ChelonianMaster2Init";
					break;
			}
			break;
	
		case 7:
			unk.f_1 = joaat("volCylinder");
			unk.f_2 = { 2013.9379f, 621.85724f, 160.19417f };
			unk.f_5 = { 0f, 0f, 0f };
			unk.f_8 = { 140f, 140f, 120f };
			unk.f_11 = "CivilWarCommandoInit";
			break;
	
		case 8:
			switch (iParam1)
			{
				case 0:
				case 1:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { 2537.9106f, -1205.5299f, 56.904884f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "DorotheaWicklowInit";
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -323.78284f, 767.84515f, 121.6327f };
					unk.f_5 = { 0f, 0f, 9.428618f };
					unk.f_8 = { 29f, 32.5f, 10f };
					unk.f_11 = "EndlessStrainerInit";
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					unk.f_1 = joaat("volBox");
					unk.f_2 = { 2691.4392f, -1379.2151f, 45.538147f };
					unk.f_5 = { 0f, 0f, 40.276646f };
					unk.f_8 = { 160f, 220f, 70f };
					unk.f_11 = "EugenicsProponentInit";
					break;
			}
			break;
	
		case 11:
			switch (func_200())
			{
				case 5:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { 2563.8354f, -1378.4235f, 45.1925f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "GavinSaintDenisInit";
					return unk;
			
				case 38:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -773.2449f, -1329.0819f, 42.6291f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "GavinBlackwaterInit";
					return unk;
			
				case 105:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { 1407.764f, -1377.079f, 79.702f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "GavinRhodesInit";
					return unk;
			
				case 126:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -2378.4746f, -2378.6206f, 61.1724f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "GavinMacfarlaneInit";
					return unk;
			}
		
			switch (iParam2)
			{
				case 0:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { 2563.8354f, -1378.4235f, 45.1925f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "GavinBayouInit";
					return unk;
			
				case 10:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { 2428.8643f, 1015.7285f, 85.6131f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "GavinRoanokeInit";
					break;
			
				case 12:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -2338.2102f, -1271.3617f, 147.062f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "GavinTallTreesInit";
					break;
			
				case 15:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -3157.477f, -2981.991f, 4.6224f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "GavinChollaInit";
					break;
			
				default:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -2338.2102f, -1271.3617f, 147.062f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "GavinTallTreesInit";
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { 1710f, 2148f, 319f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 70f };
					unk.f_11 = "GiantInit";
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 0:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -312.9856f, 808.8508f, 117.9822f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 60f, 60f, 20f };
					unk.f_11 = "GrizzledJonInit";
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { 1320.7445f, -1291.7386f, 75.14026f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "JoeButlerInit";
					break;
			}
			break;
	
		case 15:
			switch (iParam2)
			{
				case 1:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -1891.265f, -289.866f, 176.457f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 100f, 140f, 52.073f };
					unk.f_11 = "JohnMadmanStrawberryInit";
					break;
			
				case 7:
				case 9:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -727.395f, 686.1953f, 58.2244f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 57.863f };
					unk.f_11 = "JohnMadmanHeartlandsInit";
					break;
			
				case 10:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { 2183.3484f, 1502.8187f, 83.6009f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 108.806f };
					unk.f_11 = "JohnMadmanRoanokeInit";
					break;
			
				case 13:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -6122.2007f, -3803.7512f, -35.2455f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 66.553f };
					unk.f_11 = "JohnMadmanGaptoothInit";
					break;
			
				default:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -1891.265f, -289.866f, 176.457f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 52.073f };
					unk.f_11 = "JohnMadmanGeneralInit";
					break;
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { 2627.9768f, -1225.3069f, 69.61133f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "LillianPowellInit";
					break;
			}
			break;
	
		case 17:
			unk.f_1 = joaat("volCylinder");
			unk.f_2 = { 2943.5876f, 1336.9988f, 43.22713f };
			unk.f_5 = { 0f, 0f, 36.131332f };
			unk.f_8 = { 160f, 160f, 40f };
			unk.f_11 = "MadScientistInit";
			break;
	
		case 18:
			switch (iParam1)
			{
				case 0:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -1812.1855f, -367.3066f, 161.8834f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "MayorStrawberryInit";
					break;
			
				case 1:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -1807.8899f, -371.5062f, 161.8662f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "MayorStrawberryInit";
					break;
			
				case 2:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -1800.857f, -357.3966f, 162.96312f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 100f, 100f, 20f };
					unk.f_11 = "MayorStrawberryInit";
					break;
			}
			break;
	
		case 19:
			switch (iParam3)
			{
				case 0:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -257.3543f, 753.7379f, 116.1329f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 150f, 150f, 40f };
					unk.f_11 = "BumMickyInit";
					break;
			
				case 1:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -192.9274f, 625.6254f, 113.5786f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 150f, 150f, 40f };
					unk.f_11 = "BumMickyInit";
					break;
			
				default:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -257.3543f, 753.7379f, 116.1329f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 150f, 150f, 40f };
					unk.f_11 = "BumMickyInit";
					break;
			}
			break;
	
		case 20:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -2725.2773f, 709.9713f, 173.0266f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "PhilosopherInit";
					break;
			}
			break;
	
		case 21:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { 2706.158f, 2370.946f, 165.3596f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "PoorJoeInit";
					break;
			}
			break;
	
		case 22:
			unk.f_1 = joaat("volCylinder");
			unk.f_2 = { -5511.87f, -2945.988f, -1.198f };
			unk.f_5 = { 0f, 0f, 0f };
			unk.f_8 = { 140f, 140f, 30f };
			unk.f_11 = "SheriffInit";
			break;
	
		case 23:
			switch (iParam2)
			{
				case 0:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { 1784.0885f, -946.648f, 40.7225f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "SoothsayerInit";
					break;
			
				case 2:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { 2440.4556f, -462.537f, 40.9104f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "SoothsayerInit";
					break;
			
				default:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { 2922.8945f, 636.0865f, 52.2682f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "SoothsayerInit";
					break;
			}
			break;
	
		case 24:
			switch (iParam1)
			{
				case 0:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -2233.6016f, -2850.5166f, 62.7628f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "SunWorshipper1Init";
					break;
			
				case 1:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -3198.9988f, -2538.554f, 66.5911f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "SunWorshipper2Init";
					break;
			
				case 2:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -2913.073f, -2849.159f, 38.867027f };
					unk.f_5 = { 0f, 0f, 135f };
					unk.f_8 = { 200f, 120f, 40f };
					unk.f_11 = "SunWorshipper3Init";
					break;
			
				case 3:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -3267.86f, -3416.6768f, 39.5041f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "SunWorshipper4Init";
					break;
			
				case 4:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -3572.7944f, -3565.2222f, 33.505f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "SunWorshipper5Init";
					break;
			
				case 5:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -4399.393f, -3587.901f, 19.910158f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "SunWorshipper6Init";
					break;
			
				case 6:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -4988.6763f, -4060.9917f, 1.0884f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "SunWorshipper7Init";
					break;
			
				case 7:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -5333.3174f, -3534.5693f, -22.772165f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "SunWorshipper8Init";
					break;
			
				case 8:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -5374.994f, -4053.294f, -6.2292f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "SunWorshipper9Init";
					break;
			
				case 9:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -5413.131f, -2606.1558f, 2.5597f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "SunWorshipper10Init";
					break;
			
				case 10:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -4956.249f, -3198.202f, -4.254218f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "SunWorshipper11Init";
					break;
			
				case 11:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -4594.695f, -3125.4941f, -1.754162f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 20f };
					unk.f_11 = "SunWorshipper12Init";
					break;
			}
			break;
	
		case 25:
			switch (iParam1)
			{
				case 0:
				case 1:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { 2371.7756f, -861.4393f, 49.7588f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 160f, 160f, 20f };
					unk.f_11 = "SwampWeirdoInit";
					break;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 0:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { -345.2797f, 794.6578f, 115.1777f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 40f };
					unk.f_11 = "ThomasDowneInit";
					break;
			}
			break;
	
		case 27:
			switch (iParam1)
			{
				case 0:
				case 1:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { 2647.4465f, -1208.4159f, 55.346855f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 100f, 100f, 30f };
					unk.f_11 = "TimothyDonahueInit";
					break;
			}
			break;
	
		case 28:
			switch (iParam1)
			{
				case 0:
					unk.f_1 = joaat("volCylinder");
					unk.f_2 = { 3025.5566f, 1779.6986f, 83.2056f };
					unk.f_5 = { 0f, 0f, 0f };
					unk.f_8 = { 140f, 140f, 30f };
					unk.f_11 = "TinyHermitInit";
					break;
			}
			break;
	
		case 29:
			unk.f_1 = joaat("volCylinder");
			unk.f_2 = { 2778.292f, -1313.2737f, 45.89664f };
			unk.f_5 = { 0f, 0f, 0f };
			unk.f_8 = { 100f, 100f, 20f };
			unk.f_11 = "VampireInit";
			break;
	}

	return unk;
}

Volume func_128(Vector3 vParam0, var uParam1, var uParam2, float fParam3, char* sParam4, BOOL bParam5, Entity eParam6, int iParam7, BOOL bParam8, int iParam9) // Position - 0x655D Hash - 0xC1E3A062 ^0xD42263D3
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
		if (func_201(vParam0))
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

	func_202(volume, bParam8);
	return volume;
}

void func_129(BOOL bParam0, BOOL bParam1) // Position - 0x6617 Hash - 0x97140DD8 ^0x96C23302
{
	if (bParam1)
		func_134(&(bParam0->f_1), 256);
	else
		func_135(&(bParam0->f_1), 256);

	return;
}

void func_130(BOOL bParam0, BOOL bParam1) // Position - 0x663D Hash - 0x6E38DCCC ^0x27E8693B
{
	if (bParam1)
	{
		func_135(bParam0, 16);
	}
	else
	{
		func_134(bParam0, 67108864);
		func_134(bParam0, 16);
	}

	return;
}

void func_131(BOOL bParam0, BOOL bParam1) // Position - 0x6668 Hash - 0x32CE93C6 ^0x60BFF41C
{
	if (bParam1)
		func_134(&(bParam0->f_1), 128);
	else
		func_135(&(bParam0->f_1), 128);

	return;
}

void func_132(BOOL bParam0, BOOL bParam1) // Position - 0x668C Hash - 0x9CA625A6 ^0xD96D8959
{
	if (bParam1)
		func_135(bParam0, 256);
	else
		func_134(bParam0, 256);

	return;
}

void func_133(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x66AE Hash - 0x3145AA70 ^0xBCD5B3EB
{
	if (!bParam1)
		func_135(bParam0, 268435456);
	else
		func_134(bParam0, 268435456);

	if (!bParam2)
		func_135(bParam0, 1073741824);
	else
		func_134(bParam0, 1073741824);

	if (!bParam3)
		func_135(bParam0, 536870912);
	else
		func_134(bParam0, 536870912);

	return;
}

void func_134(BOOL bParam0, int iParam1) // Position - 0x6713 Hash - 0x9815F445 ^0x9815F445
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

void func_135(BOOL bParam0, int iParam1) // Position - 0x6728 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

int func_136(int iParam0) // Position - 0x6739 Hash - 0xB4824F7F ^0xB4824F7F
{
	switch (iParam0)
	{
		case 0:
			switch (func_203())
			{
				case 0:
					return 0;
			
				case 2:
					return 2;
			
				case 10:
					return 10;
			
				case 11:
					return 11;
			
				default:
				
			}
		
			return -1;
	
		case 1:
			return 0;
	
		case 2:
			return 15;
	
		case 3:
			return 1;
	
		case 4:
			switch (func_203())
			{
				case 3:
					return 3;
			
				case 4:
					return 4;
			
				case 9:
					return 9;
			
				case 10:
					return 10;
			
				case 13:
					return 13;
			
				default:
				
			}
		
			return -1;
	
		case 5:
			return 7;
	
		case 6:
			switch (func_203())
			{
				case 3:
					return 3;
			
				case 6:
					return 6;
			
				default:
				
			}
		
			return -1;
	
		case 7:
			return 10;
	
		case 8:
			return 0;
	
		case 9:
			return 9;
	
		case 10:
			return 0;
	
		case 11:
			switch (func_203())
			{
				case 0:
					return 0;
			
				case 1:
					return 1;
			
				case 10:
					return 10;
			
				case 11:
					return 11;
			
				case 12:
					return 12;
			
				case 15:
					return 15;
			
				case 16:
					return 16;
			
				default:
				
			}
		
			return -1;
	
		case 12:
			return 6;
	
		case 13:
			return 9;
	
		case 14:
			return 11;
	
		case 15:
			switch (func_203())
			{
				case 1:
					return 1;
			
				case 7:
					return 7;
			
				case 9:
					return 9;
			
				case 10:
					return 10;
			
				case 13:
					return 13;
			
				default:
				
			}
		
			return -1;
	
		case 16:
			return 0;
	
		case 17:
			return 10;
	
		case 18:
			return 1;
	
		case 19:
			return 9;
	
		case 20:
			return 1;
	
		case 21:
			return 10;
	
		case 22:
			return 13;
	
		case 23:
			switch (func_203())
			{
				case 0:
					return 0;
			
				case 2:
					return 2;
			
				default:
				
			}
		
			return -1;
	
		case 24:
			switch (func_203())
			{
				case 13:
					return 13;
			
				case 14:
					return 14;
			
				case 15:
					return 15;
			
				case 16:
					return 16;
			
				default:
				
			}
		
			return -1;
	
		case 25:
			return 0;
	
		case 26:
			return 9;
	
		case 27:
			return 0;
	
		case 28:
			return 10;
	
		case 29:
			return 0;
	}

	return -1;
}

int func_137(int iParam0) // Position - 0x6A0F Hash - 0x37AF4FA3 ^0x37AF4FA3
{
	switch (iParam0)
	{
		case 0:
			return -1;
	
		case 1:
			return 5;
	
		case 2:
			return 120;
	
		case 3:
			return 26;
	
		case 4:
			return -1;
	
		case 5:
			return -1;
	
		case 6:
			return -1;
	
		case 7:
			return -1;
	
		case 8:
			return 5;
	
		case 9:
			return 76;
	
		case 10:
			return 5;
	
		case 11:
			switch (func_200())
			{
				case 5:
					return 5;
			
				case 38:
					return 38;
			
				case 105:
					return 105;
			
				case 126:
					return 126;
			
				default:
				
			}
		
			return -1;
	
		case 12:
			return -1;
	
		case 13:
			return 76;
	
		case 14:
			return 105;
	
		case 15:
			return -1;
	
		case 16:
			return 5;
	
		case 17:
			return 78;
	
		case 18:
			return 26;
	
		case 19:
			return 76;
	
		case 20:
			return -1;
	
		case 21:
			return -1;
	
		case 22:
			return 115;
	
		case 23:
			return -1;
	
		case 24:
			return -1;
	
		case 25:
			return -1;
	
		case 26:
			return 76;
	
		case 27:
			return 5;
	
		case 28:
			return -1;
	
		case 29:
			return 5;
	}

	return -1;
}

Ped func_138(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x6B8E Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_204(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

BOOL func_139(int iParam0) // Position - 0x6BD0 Hash - 0xA05361F6 ^0xF8A0FD3E
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

BOOL func_140(var uParam0, Ped pedParam1, char* sParam2) // Position - 0x6CE6 Hash - 0xFB1C2C0E ^0x6794528D
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

BOOL func_141(Ped pedParam0, Hash hParam1) // Position - 0x6D64 Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_142(Ped pedParam0, Hash hParam1) // Position - 0x6D92 Hash - 0xA54F3032 ^0x30C7B44B
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

BOOL func_143(Ped pedParam0, Hash hParam1) // Position - 0x6DE3 Hash - 0xA54F3032 ^0x30C7B44B
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_141(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_144(Ped pedParam0) // Position - 0x6E55 Hash - 0x446F1BDD ^0x599855C3
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

BOOL func_145(int iParam0, int iParam1) // Position - 0x6E73 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_146(int iParam0) // Position - 0x6E82 Hash - 0xBC0CCBA5 ^0x80D3F3F5
{
	if (!func_205(iParam0))
		return true;

	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

int func_147(int iParam0) // Position - 0x6EA5 Hash - 0xA8723863 ^0xEBF84F39
{
	if (func_205(iParam0))
		return Global_17504.f_42[iParam0 /*8*/].f_4;

	return 0;
}

int func_148(int iParam0) // Position - 0x6EC5 Hash - 0x2117305A ^0x2117305A
{
	float num;
	float num2;
	float num3;
	float num4;
	int num5;

	num = 0f;
	num2 = 0f;
	num3 = 0f;
	num4 = 0f;

	switch (iParam0)
	{
		case 0:
			num2 = 30f;
			break;
	
		case 1:
			num3 = 1f;
			break;
	
		case 2:
			num3 = 2f;
			break;
	
		case 3:
			num3 = 3f;
			break;
	
		case 4:
			num3 = 4f;
			break;
	
		case 5:
			num3 = 6f;
			break;
	
		case 6:
			num3 = 8f;
			break;
	
		case 7:
			num3 = 12f;
			break;
	
		case 8:
			num4 = 1f;
			break;
	
		case 9:
			num4 = 2f;
			break;
	
		case 10:
			num4 = 3f;
			break;
	
		case 11:
			num4 = 4f;
			break;
	
		case 12:
			num4 = 5f;
			break;
	
		case 13:
			num4 = 6f;
			break;
	
		case 14:
			num4 = 7f;
			break;
	
		case 15:
			num4 = 8f;
			break;
	
		case 16:
			num4 = 10f;
			break;
	
		case 17:
			num4 = 12f;
			break;
	
		case 18:
			num4 = 15f;
			break;
	
		case 19:
			num4 = 18f;
			break;
	
		case 20:
			num4 = 20f;
			break;
	
		case 21:
			num4 = 25f;
			break;
	
		case 22:
			num3 = -1f;
			break;
	
		case 23:
			num4 = -5f;
			break;
	
		case 24:
			num4 = -7f;
			break;
	
		case 25:
			num4 = -8f;
			break;
	}

	num5 = BUILTIN::ROUND(num + (60f * num2) + (3600f * num3) + (86400f * num4));
	return num5;
}

void func_149(int iParam0, int iParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x7072 Hash - 0x191FF204 ^0x191FF204
{
	float num;
	float num2;
	float num3;
	float num4;

	num = 0f;
	num2 = 0f;
	num3 = 0f;
	num4 = 0f;

	switch (iParam1)
	{
		case 0:
			num2 = 30f;
			break;
	
		case 1:
			num3 = 1f;
			break;
	
		case 2:
			num3 = 2f;
			break;
	
		case 3:
			num3 = 3f;
			break;
	
		case 4:
			num3 = 4f;
			break;
	
		case 5:
			num3 = 6f;
			break;
	
		case 6:
			num3 = 8f;
			break;
	
		case 7:
			num3 = 12f;
			break;
	
		case 8:
			num4 = 1f;
			break;
	
		case 9:
			num4 = 2f;
			break;
	
		case 10:
			num4 = 3f;
			break;
	
		case 11:
			num4 = 4f;
			break;
	
		case 12:
			num4 = 5f;
			break;
	
		case 13:
			num4 = 6f;
			break;
	
		case 14:
			num4 = 7f;
			break;
	
		case 15:
			num4 = 8f;
			break;
	
		case 16:
			num4 = 10f;
			break;
	
		case 17:
			num4 = 12f;
			break;
	
		case 18:
			num4 = 15f;
			break;
	
		case 19:
			num4 = 18f;
			break;
	
		case 20:
			num4 = 20f;
			break;
	
		case 21:
			num4 = 25f;
			break;
	
		case 22:
			num3 = -1f;
			break;
	
		case 23:
			num4 = -5f;
			break;
	
		case 24:
			num4 = -7f;
			break;
	
		case 25:
			num4 = -8f;
			break;
	}

	func_206(iParam0, bParam3, BUILTIN::ROUND(num * fParam2), BUILTIN::ROUND(num2 * fParam2), BUILTIN::ROUND(num3 * fParam2), BUILTIN::ROUND(num4 * fParam2), bParam4, true);
	return;
}

void func_150(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x7229 Hash - 0xFDACD718 ^0x658C9335
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

void func_151(BOOL bParam0, BOOL bParam1, int iParam2) // Position - 0x727B Hash - 0x37D64B11 ^0xE7060A9E
{
	func_207(iParam2);

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
		bParam0->f_10 = 0;

	bParam0->f_5 = iParam2;

	if (Global_1572887.f_12 == -1)
		bParam0->f_13 = Global_1935630.f_44;
	else
		bParam0->f_13 = func_208(0);

	switch (bParam0->f_6)
	{
		case 0:
			if (*bParam0 & 16 != 0)
				if (!(*bParam0 & 33554432 != 0))
					if (bParam0->f_13 == joaat("weapon_thrown_dynamite"))
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
							func_135(bParam0, 33554432);
					else if (!(*bParam0 & 8192 != 0))
						if (func_209(true))
							func_135(bParam0, 33554432);
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && !func_209(true) || *bParam0 & 8192 != 0)
					func_134(bParam0, 33554432);
			break;
	
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	}

	if (!(bParam0->f_1 & 1024 != 0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(bParam0->f_14))
		{
			if (func_210(bParam0))
				bParam0->f_15 = func_171();
		}
		else if (bParam0->f_15 > 0)
		{
			if (func_171() - bParam0->f_15 > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(bParam0->f_14))
				{
					bParam0->f_14 = 0;
					bParam0->f_15 = 0;
				}
			}
		}
	}

	bParam0->f_6 = bParam0->f_6 + 1;

	if (bParam0->f_6 >= 4)
	{
		bParam0->f_6 = 0;
		bParam0->f_7 = bParam0->f_7 + 1;
	
		if (bParam0->f_7 > 4)
			bParam0->f_7 = 0;
	}

	func_211(bParam0);
	return;
}

BOOL func_152(Ped pedParam0, BOOL bParam1) // Position - 0x7446 Hash - 0x3A755B4E ^0xDBAC23C2
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
		
			if (!func_212(pedParam0, bParam1, pedIndexFromEntityIndex))
				return false;
		
			if (func_213(pedParam0, pedIndexFromEntityIndex) <= func_214(bParam1))
				return true;
			break;
	}

	return false;
}

void func_153(Ped pedParam0, BOOL bParam1, int iParam2) // Position - 0x751E Hash - 0x7B438605 ^0x99F8E9DA
{
	if (iParam2 != 16384)
		bParam1->f_10 = pedParam0;

	if (func_215(iParam2, 1, 1, 1, 0))
		func_135(bParam1, 2048);

	bParam1->f_16 = iParam2;
	func_216(bParam1, true);
	func_217();
	return;
}

BOOL func_154(Ped pedParam0, BOOL bParam1) // Position - 0x755B Hash - 0x48FE638E ^0x6AD20F95
{
	float num;
	float num2;
	int num3;
	int num4;

	num = 85f;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_218(pedParam0, !(*bParam1 & 268435456 != 0), !(*bParam1 & 536870912 != 0), !(*bParam1 & 1073741824 != 0), 0, false))
		{
			if (bParam1->f_12 < 5f)
				num = 95f;
			else if (bParam1->f_12 < 15f)
				num = 90f;
		
			num2 = func_219(bParam1);
		
			if (func_220(bParam1, pedParam0, num, num2))
			{
				if (bParam1->f_2 == 0)
					bParam1->f_2 = MISC::GET_GAME_TIMER();
			
				num3 = MISC::GET_GAME_TIMER() - bParam1->f_2;
				num4 = func_221(bParam1);
			
				if (bParam1->f_2 != 0)
				{
					if (num3 > num4)
					{
						func_216(bParam1, true);
						return true;
					}
					else if (bParam1->f_12 < 3.5f)
					{
						if (num3 > 500)
						{
							func_216(bParam1, true);
							return true;
						}
					}
				}
			}
		}
	}

	return false;
}

BOOL func_155(Ped pedParam0, Entity eParam1, BOOL bParam2) // Position - 0x7642 Hash - 0x899101A2 ^0xBCA80002
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

	if (func_222(eParam1, !(*bParam2 & 268435456 != 0), !(*bParam2 & 536870912 != 0), !(*bParam2 & 1073741824 != 0), 0))
	{
		if (bParam2->f_12 < 5f)
			num = 95f;
		else if (bParam2->f_12 < 15f)
			num = 90f;
	
		num2 = func_219(bParam2);
	
		if (func_220(bParam2, pedParam0, num, num2))
		{
			if (bParam2->f_2 == 0)
				bParam2->f_2 = MISC::GET_GAME_TIMER();
		
			if (bParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - bParam2->f_2 > func_221(bParam2))
				{
					func_216(bParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_156(Ped pedParam0, BOOL bParam1) // Position - 0x7718 Hash - 0xC62373A5 ^0xD1ADE674
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

	if (func_212(pedParam0, bParam1, pedIndexFromEntityIndex))
	{
		if (bParam1->f_3 == 0)
		{
			bParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - bParam1->f_3 > func_221(bParam1))
		{
			customDistance = func_219(bParam1);
		
			if (bParam1->f_12 < customDistance)
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, pedIndexFromEntityIndex, 17))
					if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, customDistance, -1082130432, -1082130432) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, pedIndexFromEntityIndex, -1082130432, customDistance, -1082130432, -1082130432))
						return true;
		}
	}

	return false;
}

BOOL func_157(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x7821 Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_223(bParam1, bParam2, bParam3);

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

BOOL func_158(BOOL bParam0, int iParam1) // Position - 0x7956 Hash - 0x7EB9A53B ^0xCA234572
{
	int num;
	int num2;

	if (bParam0->f_8 <= 0)
		return true;

	num = func_171();
	num2 = num - bParam0->f_8;

	if ((float)num2 > iParam1 * 1000f)
		return true;

	return false;
}

BOOL func_159(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x798D Hash - 0xCE2053EC ^0x1CC9B32D
{
	float num;
	int shotNearRecentlyTime;
	float num2;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			num = func_224(bParam2);
		
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
			if (func_167(bParam2, pedParam1))
			{
				func_216(bParam2, true);
				return true;
			}
		}
	}

	return false;
}

BOOL func_160(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x7A94 Hash - 0x7A43493E ^0x1475EBFE
{
	var weaponHash;

	if (bParam2->f_12 < (float)func_225(bParam2))
	{
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &weaponHash))
		{
			if (func_167(bParam2, pedParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(pedParam0) <= 1f)
				{
					func_216(bParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_161(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x7AFF Hash - 0x8CBDE6BD ^0xE1F008CE
{
	Vector3 entityCoords;
	int num;
	var outCoords;
	var outCoords2;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, false, true) };
	num = func_226(bParam2);

	if (!bParam3)
	{
		switch (num)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), entityCoords, bParam2->f_22))
				{
					func_216(bParam2, true);
					return true;
				}
				break;
		
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), entityCoords, bParam2->f_27))
				{
					func_216(bParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, bParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), bParam2->f_26, &outCoords, false, false);
				
					if (func_227(pedParam1, entityCoords, outCoords))
					{
						func_216(bParam2, true);
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
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), entityCoords, bParam2->f_22))
				{
					func_216(bParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, bParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), bParam2->f_26, &outCoords2, false, false);
				
					if (func_227(pedParam1, entityCoords, outCoords2))
					{
						func_216(bParam2, true);
						return true;
					}
				}
				break;
		}
	}

	return false;
}

BOOL func_162(Ped pedParam0, BOOL bParam1) // Position - 0x7C47 Hash - 0xEB9C0B04 ^0x4A60CD30
{
	int i;
	float num;
	var unk;
	Vector3 entityCoords;
	BOOL flag;
	BOOL flag2;

	unk = 2;
	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	flag = *bParam1 & 4096 != 0;

	for (i = 0; i < Global_1935630.f_39; i = i + 1)
	{
		if (!func_212(pedParam0, bParam1, Global_1935630.f_34[i]) || pedParam0 == Global_1935630.f_34[i])
		{
		}
		else
		{
			flag2 = func_228(Global_1935630.f_34[i]);
			num = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false), entityCoords);
		
			if (func_229(Global_1935630.f_34[i]))
			{
				if (num < 35f)
				{
					if (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[i], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamA") || DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[i], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamB"))
					{
						unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
						unk[1 /*3*/] = { entityCoords };
						bParam1->f_10 = pedParam0;
						return true;
					}
				}
			}
		
			if (func_230(bParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				bParam1->f_10 = pedParam0;
				return true;
			}
			else if (func_231(bParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				bParam1->f_10 = pedParam0;
				return true;
			}
			else if (func_232(bParam1, pedParam0, num, i))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				bParam1->f_10 = pedParam0;
				return true;
			}
		}
	}

	return false;
}

BOOL func_163(var uParam0, BOOL bParam1) // Position - 0x7E27 Hash - 0xF223CED2 ^0xA472D0A4
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

BOOL func_164(BOOL bParam0, int iParam1) // Position - 0x7E9F Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (bParam0->f_8 <= 0)
		return true;

	num = func_171();
	num2 = num - bParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

int func_165(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x7ECE Hash - 0x8119700D ^0x42D5A76B
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
		if (func_233(entity2, &entity))
			if (PED::IS_PED_RAGDOLL(pedParam0) || PED::_0x947E43F544B6AB34(pedParam0, PLAYER::PLAYER_ID(), 10, 1000) || !bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
				return 1;
	}

	if (!bParam2)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (func_234(entity2, pedParam0))
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

int func_166(BOOL bParam0, Ped pedParam1) // Position - 0x8055 Hash - 0x42A83B1F ^0x3DA8D3
{
	int _int;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam1, "iDamageFrame"))
		return 1;

	_int = DECORATOR::DECOR_GET_INT(pedParam1, "iDamageFrame");

	if (_int < 0)
		DECORATOR::DECOR_SET_INT(pedParam1, "iDamageFrame", bParam0->f_5);
	else if (bParam0->f_5 > _int + 10)
		return 1;

	return 0;
}

BOOL func_167(BOOL bParam0, Ped pedParam1) // Position - 0x80A5 Hash - 0xA4C024EF ^0xFFB65FFB
{
	if (func_235(bParam0))
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

BOOL func_168(Ped pedParam0, Ped pedParam1) // Position - 0x8142 Hash - 0xB0548679 ^0x1C6DC58A
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, pedParam1, true, true))
			return true;
	
		if (func_92(pedParam0, pedParam1, true, true) < 4f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedParam0, pedParam1) && PED::IS_PED_RAGDOLL(pedParam0))
				return true;
	}

	return false;
}

void func_169() // Position - 0x818F Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_170(BOOL bParam0, Ped pedParam1) // Position - 0x8197 Hash - 0x6BE02E92 ^0x188EF1A2
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
	
		if (func_236(vehiclePedIsUsing, pedParam1, entityCoords))
		{
			bParam0->f_9 = func_171();
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
						if (func_50(pedInDraftHarness, entityCoords, true) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedInDraftHarness, pedParam1))
							{
								bParam0->f_9 = func_171();
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

int func_171() // Position - 0x8258 Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

BOOL func_172() // Position - 0x8276 Hash - 0xAD122F0E ^0xC8AE0775
{
	if (Global_1935630.f_42 == 0)
		return false;

	if (Global_1935630.f_42 == Global_1935630.f_40)
		return false;

	if (Global_1935630.f_43 <= 0)
		return false;

	if (func_171() - Global_1935630.f_43 >= 10000)
		return false;

	return true;
}

BOOL func_173(BOOL bParam0, Ped pedParam1) // Position - 0x82C3 Hash - 0xD0836592 ^0x2A09A5E1
{
	float num;
	int num2;
	int num3;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0->f_14))
		return false;

	if (!PED::IS_PED_HUMAN(pedParam1))
		return false;

	num = func_214(bParam0);

	if (bParam0->f_12 > func_237(bParam0) && bParam0->f_12 > num)
		return false;

	num3 = func_238(pedParam1);
	num2 = func_239(bParam0->f_14);

	if (num3 == num2 || num3 == 2 || num2 == 2)
		if (bParam0->f_12 <= num || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_35, 17) && PED::CAN_PED_SEE_ENTITY(pedParam1, Global_35, true, false) == 1 || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, bParam0->f_14, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, bParam0->f_14, 17) && PED::CAN_PED_SEE_ENTITY(pedParam1, bParam0->f_14, true, false) == 1)
			return true;

	return false;
}

BOOL func_174(Ped pedParam0, Entity eParam1, BOOL bParam2) // Position - 0x83DF Hash - 0xE4FFEDE ^0xE432D572
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (bParam2->f_12 > 4f)
		return false;

	flag = *bParam2 & 256 != 0;
	flag2 = *bParam2 & 524288 != 0;
	flag3 = *bParam2 & 128 != 0;
	return func_240(pedParam0, eParam1, flag, flag3, bParam2->f_12, flag2);
}

BOOL func_175(Ped pedParam0, BOOL bParam1) // Position - 0x8427 Hash - 0x23BB3370 ^0x36BD6CCF
{
	Ped jackTarget;
	Hash recentEvent;
	Entity sourceEntityFromEvent;
	Entity tar;
	Ped pedIndexFromEntityIndex;
	Ped pedIndexFromEntityIndex2;

	if (*bParam1 & 67108864 != 0)
		return true;

	if (Global_1935630.f_24)
		return true;

	if (*bParam1 & 33554432 != 0)
	{
		if (func_241(pedParam0, bParam1, true))
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
					if (!func_242(bParam1, pedParam0))
						if (func_50(pedIndexFromEntityIndex, Global_36, true) < 7f)
							return true;
			break;
	}

	return false;
}

BOOL func_176(Ped pedParam0, BOOL bParam1) // Position - 0x8680 Hash - 0xB0E3CEF5 ^0x6602867A
{
	if (!func_243(0))
		return false;

	if (PED::IS_PED_FACING_PED(pedParam0, Global_35, 90f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
			return true;

	return false;
}

BOOL func_177(BOOL bParam0, int iParam1) // Position - 0x86B9 Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (bParam0->f_8 <= 0)
		return true;

	num = func_171();
	num2 = num - bParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

BOOL func_178(var uParam0, BOOL bParam1) // Position - 0x86E8 Hash - 0x7B43AD8E ^0x2B906BDE
{
	return PED::_GET_IS_PED_BEING_ROBBED(*uParam0, PLAYER::PLAYER_ID(), false);
}

BOOL func_179(Ped pedParam0, BOOL bParam1) // Position - 0x86FC Hash - 0xA06525EC ^0x3DA5C48E
{
	if (!PED::IS_PED_HUMAN(pedParam0))
		return false;

	if (bParam1->f_4 == 0)
		bParam1->f_4 = func_171();
	else if (func_171() - bParam1->f_4 > func_244(bParam1))
		return func_245(pedParam0, bParam1, false, -1082130432);

	return false;
}

BOOL func_180(BOOL bParam0, Ped pedParam1) // Position - 0x8749 Hash - 0x2978E171 ^0x851955A3
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

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x879D Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_182(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x87C7 Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
				return true;

	return false;
}

void func_183(Hash hParam0, int iParam1) // Position - 0x881C Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_184() // Position - 0x882F Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_185(int iParam0) // Position - 0x884E Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_246(iParam0);
	return num == 3 || num == 4;
}

BOOL func_186(int iParam0) // Position - 0x886C Hash - 0x8EF26C67 ^0x9855652A
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
	
		num = func_247(iParam0);
	}

	if (num == 1)
		return 1;

	if (num == 2)
		return 1;

	return 0;
}

BOOL func_187(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4) // Position - 0x88D7 Hash - 0x51EADDF ^0xFEE9A233
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

BOOL func_188(var uParam0, var uParam1, Vector3 vParam2, var uParam3, var uParam4, float fParam5, float fParam6) // Position - 0x8917 Hash - 0x34D99C7D ^0x8190E5BB
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
					if (func_248(Global_35, *uParam1, false))
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

BOOL func_189(Ped pedParam0, BOOL bParam1) // Position - 0x89AC Hash - 0x4B9AB644 ^0x1F788987
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (bParam1)
			return PED::IS_PED_DEAD_OR_DYING(pedParam0, true);
		else
			return ENTITY::IS_ENTITY_DEAD(pedParam0);

	return true;
}

void func_190(var uParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4) // Position - 0x89D9 Hash - 0x186008F8 ^0xE9F0BC58
{
	if (!func_249(*uParam0, 518218985))
	{
		TASK::CLEAR_PED_TASKS(*uParam0, true, false);
		TASK::TASK_FLEE_COORD(*uParam0, vParam1, 6, 0, iParam4, -1, 0);
	}

	return;
}

BOOL func_191(int iParam0, int iParam1) // Position - 0x8A0B Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_192(BOOL bParam0) // Position - 0x8A1A Hash - 0xED2925F ^0xCA812B62
{
	if (bParam0)
		func_135(&(Global_40.f_12019.f_42), 1);
	else
		func_134(&(Global_40.f_12019.f_42), 1);

	return;
}

BOOL func_193(int iParam0) // Position - 0x8A44 Hash - 0x2BF73E21 ^0x2BF73E21
{
	return iParam0 > 0 && iParam0 < 13;
}

void func_194(int iParam0, int iParam1) // Position - 0x8A5A Hash - 0x298D544D ^0x6D9BD009
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}

	if (iParam1 == 0 || iParam1 == -1)
		func_250(iParam0);
	else
		func_251(iParam0, iParam1);

	func_252();
	return;
}

void func_195(int iParam0, int iParam1) // Position - 0x8AA2 Hash - 0xB1BDF10D ^0x396318CE
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_2 = iParam1;
	return;
}

void func_196(int iParam0, int iParam1) // Position - 0x8AC2 Hash - 0xB1BDF10D ^0x44EF8C18
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_4 = iParam1;
	return;
}

void func_197(int iParam0, BOOL bParam1) // Position - 0x8AE2 Hash - 0x5CF9514E ^0x8B449709
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = bParam1;
		return;
	}

	Global_1058888.f_428[iParam0 /*2*/] = bParam1;
	return;
}

void func_198(int iParam0, Hash hParam1) // Position - 0x8B0D Hash - 0x634DE727 ^0xC7F71E9D
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = hParam1;
		return;
	}

	Global_1058888.f_428[iParam0 /*2*/].f_1 = hParam1;
	return;
}

Vector3 func_199(Player plParam0) // Position - 0x8B3C Hash - 0xFD8C75C2 ^0xB4859571
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

eStackSize func_200() // Position - 0x8B50 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_201(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x8B5E Hash - 0x3CD10F27 ^0xAC09280E
{
	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, 0.5f, 0, 0, 16384);
}

int func_202(Volume volParam0, BOOL bParam1) // Position - 0x8B78 Hash - 0xEA796703 ^0x695D7925
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

int func_203() // Position - 0x8BE0 Hash - 0x4228A1C2 ^0xB47FB21D
{
	return Global_1897952.f_41;
}

void func_204(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x8BEE Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_253(eptParam1))
		{
			func_82(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_254(pedParam0, 0, true);
	
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
			func_255(pedParam0, false);
			flag = true;
		}
	
		func_256(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

BOOL func_205(int iParam0) // Position - 0x8CCF Hash - 0xC80B63B8 ^0xC80B63B8
{
	return iParam0 > -1 && iParam0 < 120;
}

void func_206(int iParam0, BOOL bParam1, int iParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x8CE5 Hash - 0x4654DD91 ^0x21FEF3E7
{
	int num;

	num = iParam2 + (60 * iParam3) + (3600 * iParam4) + (86400 * iParam5);

	if (func_257(iParam0) == 1 && bParam7)
		return;

	if (bParam6)
		if (Global_17504.f_42[iParam0 /*8*/].f_4 > num)
			return;

	if (bParam1 || bParam6 || func_51() != -1)
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;

	Global_17504.f_42[iParam0 /*8*/].f_4 = Global_17504.f_42[iParam0 /*8*/].f_4 + num;
	return;
}

void func_207(int iParam0) // Position - 0x8D71 Hash - 0xE5B9C958 ^0xF9A51EF
{
	int num;
	Hash* weaponHash;

	if (Global_22 & 4 != 0)
		return;

	num = iParam0 - Global_1935630.f_38;
	Global_1935630.f_27 = func_258();

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
			func_259(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_208(int iParam0) // Position - 0x8EDD Hash - 0x85F4CB4C ^0x85F4CB4C
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

BOOL func_209(BOOL bParam0) // Position - 0x8EF0 Hash - 0xBA1E2285 ^0xBA1E2285
{
	var unk;
	var unk2;

	if (func_260(bParam0, &unk, &unk2))
		return true;

	return false;
}

BOOL func_210(BOOL bParam0) // Position - 0x8F0A Hash - 0xA6E07A0A ^0x31605A1E
{
	Ped ped;

	ped = Global_1935630.f_40;

	if (func_51() == -1)
		if (Global_1935630.f_40 == 0)
			ped = func_261(bParam0);
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
		ped = func_261(bParam0);

	if (ped == 0)
		return false;

	if (func_239(ped) == -1)
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(ped, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(ped, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return false;

	bParam0->f_14 = ped;
	return true;
}

void func_211(BOOL bParam0) // Position - 0x8FA4 Hash - 0x256C27DD ^0x256C27DD
{
	if (*bParam0 & 8 != 0 || *bParam0 & 16 != 0)
		func_262(bParam0);

	return;
}

BOOL func_212(Ped pedParam0, BOOL bParam1, Ped pedParam2) // Position - 0x8FCB Hash - 0x7FBD27D8 ^0x4C0BB7C4
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
		num2 = func_239(pedParam2);
	else
		num2 = func_238(pedParam2);

	if (!PED::IS_PED_HUMAN(pedParam0))
		num = func_239(pedParam0);
	else
		num = func_238(pedParam0);

	if (num2 == num)
		if (num2 != -1)
			return true;

	if (func_191(*bParam1, 8388608))
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

int func_213(Ped pedParam0, Ped pedParam1) // Position - 0x90C4 Hash - 0xF9959663 ^0xF9959663
{
	return func_92(pedParam0, pedParam1, true, true);
}

float func_214(BOOL bParam0) // Position - 0x90D6 Hash - 0xD73B9827 ^0xDE12990D
{
	return bParam0->f_26;
}

BOOL func_215(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x90E2 Hash - 0x5A9E12AC ^0x5A9E12AC
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

void func_216(BOOL bParam0, BOOL bParam1) // Position - 0x9147 Hash - 0x562373AA ^0xDBA63849
{
	if (bParam1)
		func_135(bParam0, 134217728);
	else
		func_134(bParam0, 134217728);

	return;
}

void func_217() // Position - 0x916D Hash - 0x66B46B05 ^0x51003404
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		CAM::STOP_GAMEPLAY_HINT(false);

	return;
}

BOOL func_218(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x9181 Hash - 0x7ED53456 ^0xD7A590DD
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
		if (WEAPON::IS_PED_ARMED(ped, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0) && func_92(ped, pedParam0, true, true) <= 4f)
			return true;

	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0))
		if (bParam1 && WEAPON::IS_PED_ARMED(ped, 4) || bParam2 && WEAPON::IS_PED_ARMED(ped, 2))
			return true;

	if (PLAYER::IS_PLAYER_FREE_AIMING(playerIndex))
		if (WEAPON::_IS_WEAPON_SNIPER(func_263(ped, 0)))
			if (func_264(pedParam0, 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

float func_219(BOOL bParam0) // Position - 0x92E1 Hash - 0xD73B9827 ^0x8CE07B2A
{
	return bParam0->f_17;
}

BOOL func_220(BOOL bParam0, Ped pedParam1, float fParam2, float fParam3) // Position - 0x92ED Hash - 0x8FF3FF1B ^0x45FC6EEC
{
	float num;

	if (bParam0->f_12 > fParam3)
		return false;

	num = -1f;

	if (!func_191(*bParam0, 4194304))
		num = fParam3;

	if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_35, -1f, fParam3, -1f, num))
		return true;

	if (*bParam0 & 32768 != 0)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_35, 17))
			return true;

	return false;
}

int func_221(BOOL bParam0) // Position - 0x934E Hash - 0xD73B9827 ^0x372EC0B
{
	return bParam0->f_18;
}

BOOL func_222(Entity eParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x935A Hash - 0x838BDEFB ^0xB1D5C032
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_263(ped, 0)))
			if (func_265(ENTITY::GET_ENTITY_COORDS(eParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

int func_223(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x941C Hash - 0xC9655EC3 ^0x88C9AFE1
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

float func_224(BOOL bParam0) // Position - 0x94BA Hash - 0xD73B9827 ^0x9F7F0764
{
	return bParam0->f_23;
}

int func_225(BOOL bParam0) // Position - 0x94C6 Hash - 0xD73B9827 ^0x303D0BA3
{
	return bParam0->f_21;
}

int func_226(BOOL bParam0) // Position - 0x94D2 Hash - 0xB202FF2A ^0xFD1BAB10
{
	int num;

	switch (bParam0->f_7)
	{
		case 0:
			switch (bParam0->f_6)
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
			switch (bParam0->f_6)
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
			switch (bParam0->f_6)
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
			switch (bParam0->f_6)
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
			switch (bParam0->f_6)
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

	if (*bParam0 & 16777216 != 0)
		if (num == 2)
			num = 0;

	return num;
}

BOOL func_227(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6) // Position - 0x960F Hash - 0xB38C72E2 ^0xD400E0B7
{
	if (func_266(pedParam0, vParam4, 0.5f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(pedParam0, vParam4, 17))
			return true;

	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
		return true;

	return false;
}

BOOL func_228(Ped pedParam0) // Position - 0x9652 Hash - 0x4A20E6BA ^0x550F792B
{
	if (PED::GET_PED_CONFIG_FLAG(pedParam0, 9, false))
	{
		if (Global_1935630.f_44 == joaat("WEAPON_UNARMED"))
			return 1;
	
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46))
			if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_46) || WEAPON::IS_WEAPON_BOW(Global_1935630.f_46))
				return 1;
	}

	if (func_267(pedParam0, 200, false, true))
		return 1;

	return 0;
}

BOOL func_229(Ped pedParam0) // Position - 0x96B8 Hash - 0x966B8CCF ^0xFAFF1653
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (PED::_IS_THIS_MODEL_A_HORSE(entityModel))
		return true;

	return false;
}

BOOL func_230(BOOL bParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x96E4 Hash - 0xF74D67F4 ^0x88DBF437
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_268(pedParam1))
			return false;

	num = 5f;

	if (*bParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_231(BOOL bParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x972B Hash - 0xA25E5C03 ^0xFB206DE4
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_268(pedParam1))
			return false;

	num = 10f;

	if (*bParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_232(BOOL bParam0, Ped pedParam1, float fParam2, int iParam3) // Position - 0x9776 Hash - 0xBD53E6FC ^0x2E9374BE
{
	float num;

	num = 40f;

	if (func_268(pedParam1))
		return false;

	if (*bParam0 & 65536 != 0)
		num = PED::_0x2BA9D7BF629F920C(pedParam1);

	if (fParam2 < num)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_1935630.f_34[iParam3], 17))
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_1935630.f_34[iParam3], -1082130432, -1082130432, -1082130432, -1082130432))
				return true;

	return false;
}

BOOL func_233(Ped pedParam0, var uParam1) // Position - 0x97EF Hash - 0x64FF5121 ^0xD9ABCD76
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

BOOL func_234(Ped pedParam0, Ped pedParam1) // Position - 0x983C Hash - 0x32A55AFE ^0x7FDC2FE
{
	if (PED::_GET_LASSO_TARGET(pedParam0) == pedParam1)
		return true;

	if (func_269(pedParam0, true, 0, false) != joaat("WEAPON_LASSO"))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(pedParam0, 16, 0))
		if (PED::GET_MELEE_TARGET_FOR_PED(pedParam0) == pedParam1)
			return true;

	return false;
}

BOOL func_235(BOOL bParam0) // Position - 0x9884 Hash - 0x21EEA2C5 ^0x21EEA2C5
{
	return !(*bParam0 & 2 != 0);
}

BOOL func_236(Vehicle veParam0, Ped pedParam1, var uParam2, var uParam3, var uParam4) // Position - 0x9894 Hash - 0x94A6C6F0 ^0xC51111A6
{
	int num;

	num = func_50(veParam0, uParam2, true);

	if (num < 4f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(veParam0, pedParam1))
			return true;

	return false;
}

float func_237(BOOL bParam0) // Position - 0x98C0 Hash - 0xD73B9827 ^0x4905FA06
{
	return bParam0->f_24;
}

int func_238(Ped pedParam0) // Position - 0x98CC Hash - 0xEB445B10 ^0xC52A692C
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedParam0, true))
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamB"))
		return 1;

	return -1;
}

int func_239(Ped pedParam0) // Position - 0x9924 Hash - 0x6E063231 ^0x75E979F7
{
	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(pedParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamB"))
		return 1;

	return -1;
}

BOOL func_240(Ped pedParam0, Entity eParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x9994 Hash - 0x89708384 ^0x6760E23F
{
	BOOL flag;
	Entity entity;
	int num;

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
			if (func_233(Global_35, &entity))
				if (iParam4 < 4f)
					if (PED::IS_PED_RAGDOLL(pedParam0) || !bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
						return 1;
	}

	if (bParam3)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (iParam4 <= 0f)
		num = func_92(pedParam0, PLAYER::PLAYER_PED_ID(), false, true);
	else
		num = iParam4;

	if (num < 1f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0))
			if (!bParam2)
				return 1;
			else if (PED::IS_PED_RAGDOLL(pedParam0))
				return 1;

	if (flag)
		if (func_92(pedParam0, Global_1935630.f_40, false, true) < 2.5f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630.f_40, pedParam0))
				if (!bParam2)
					return 1;
				else if (PED::IS_PED_RAGDOLL(pedParam0))
					return 1;

	return 0;
}

BOOL func_241(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x9B04 Hash - 0x3E8B6245 ^0x84E29058
{
	Ped ped;
	Ped ped2;

	func_260(true, &ped, &ped2);

	if (!ENTITY::DOES_ENTITY_EXIST(ped) && !ENTITY::DOES_ENTITY_EXIST(ped2))
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ped != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
					if (!bParam2 || !func_242(bParam1, ped))
						return true;

	if (ENTITY::DOES_ENTITY_EXIST(ped2))
		if (ped2 != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
				if (!bParam2 || !func_242(bParam1, ped2))
					if (func_50(ped2, Global_36, true) < 5f)
						return true;

	return false;
}

BOOL func_242(BOOL bParam0, Ped pedParam1) // Position - 0x9BF2 Hash - 0x27FC2906 ^0x98743568
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

BOOL func_243(int iParam0) // Position - 0x9C68 Hash - 0x548D1D18 ^0x4AC0DF7D
{
	if (func_270())
		return false;

	return func_271(Global_1347702[58 /*49*/].f_15, true);
}

int func_244(BOOL bParam0) // Position - 0x9C8A Hash - 0xD73B9827 ^0xAC2E3C80
{
	return bParam0->f_20;
}

BOOL func_245(Ped pedParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x9C96 Hash - 0x9E17B061 ^0x19F2F061
{
	if (!bParam2)
		if (bParam1->f_4 == 0)
			return 0;

	if (iParam3 < 0f)
		iParam3 = bParam1->f_12;

	if (PED::IS_PED_FACING_PED(pedParam0, Global_35, 90f))
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
			return 1;
	else if (iParam3 < 1.5f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedParam0, Global_35))
			return 1;

	return 0;
}

int func_246(int iParam0) // Position - 0x9D11 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_96(iParam0))
		return -1;

	return func_247(iParam0);
}

int func_247(int iParam0) // Position - 0x9D2D Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_272(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_248(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x9D6E Hash - 0xF928BABC ^0xEB0637CA
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1) && !ENTITY::IS_ENTITY_DEAD(pedParam1))
			if (bParam2)
				return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true) && PED::GET_MOUNT(pedParam0) == pedParam1;
			else
				return PED::IS_PED_ON_MOUNT(pedParam0) && PED::GET_MOUNT(pedParam0) == pedParam1;

	return false;
}

BOOL func_249(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x9DD8 Hash - 0xBA023B92 ^0x16E0B707
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

int func_250(int iParam0) // Position - 0x9E31 Hash - 0x4084F232 ^0x4084F232
{
	int num;

	num = func_272(iParam0);

	if (num < 0)
		return 0;

	return func_273(num);
}

int func_251(int iParam0, int iParam1) // Position - 0x9E51 Hash - 0xF3EA5EAF ^0xA48F5774
{
	int num;
	int num2;

	if (*Global_1058888.f_40431 >= 32)
		return -1;

	num = -1;
	num = iParam0;
	num.f_1 = iParam1;

	if (*Global_1058888.f_40431 == 0)
	{
		Global_1058888.f_40431.f_1[*Global_1058888.f_40431 /*2*/] = { num };
		Global_1058888.f_40431 = *Global_1058888.f_40431 + 1;
		return 0;
	}

	num2 = 0;

	while (num2 < *Global_1058888.f_40431)
	{
		if (iParam0 == Global_1058888.f_40431.f_1[num2 /*2*/])
		{
			Global_1058888.f_40431.f_1[num2 /*2*/] = { num };
			return num2;
		}
		else if (iParam0 > Global_1058888.f_40431.f_1[num2 /*2*/])
		{
			num2 = num2 + 1;
		}
		else if (iParam0 < Global_1058888.f_40431.f_1[num2 /*2*/])
		{
			func_274(num2);
			Global_1058888.f_40431.f_1[num2 /*2*/] = { num };
			return num2;
		}
	}

	if (*Global_1058888.f_40431 < 31)
	{
		num2 = *Global_1058888.f_40431;
		Global_1058888.f_40431.f_1[num2 /*2*/] = { num };
		Global_1058888.f_40431 = *Global_1058888.f_40431 + 1;
	
		if (*Global_1058888.f_40431 > 32)
			Global_1058888.f_40431 = 32;
	
		return num2;
	}

	return -1;
}

void func_252() // Position - 0x9FC1 Hash - 0x9BD813B0 ^0x6F082E60
{
	int i;

	for (i = 0; i < *Global_1058888.f_40431; i = i + 1)
	{
	}

	return;
}

BOOL func_253(ePedType eptParam0) // Position - 0x9FE4 Hash - 0x5000025C ^0x5000025C
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

void func_254(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0xA437 Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_255(Ped pedParam0, BOOL bParam1) // Position - 0xA467 Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_256(Ped pedParam0, int iParam1) // Position - 0xA4AC Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

int func_257(int iParam0) // Position - 0xA4D3 Hash - 0x69AF6CF8 ^0x64DBA37A
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

BOOL func_258() // Position - 0xA4E6 Hash - 0x60155C48 ^0x6CED0E68
{
	if (func_275())
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

void func_259(int iParam0, int iParam1) // Position - 0xA53C Hash - 0x787BB1AC ^0x11099E69
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

BOOL func_260(BOOL bParam0, var uParam1, var uParam2) // Position - 0xA5E7 Hash - 0x2A9340EF ^0xAD765E32
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

Ped func_261(BOOL bParam0) // Position - 0xA6AE Hash - 0xF229F24F ^0x47381422
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

	if (bParam0->f_6 == 3)
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

void func_262(BOOL bParam0) // Position - 0xA756 Hash - 0x59730BCA ^0xE779676B
{
	int i;

	if (Global_1935630.f_38 == 0)
	{
		func_134(bParam0, 67108864);
	
		for (i = 0; i < Global_1935630.f_39; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[i]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[i]))
				{
					func_135(bParam0, 67108864);
					break;
				}
			}
		}
	}

	return;
}

Hash func_263(Ped pedParam0, int iParam1) // Position - 0xA7BB Hash - 0xB13A3864 ^0x7FBAE642
{
	Hash weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, iParam1, false);
	return weaponHash;
}

BOOL func_264(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0xA7D2 Hash - 0x2C51465B ^0x98B13A1D
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (func_265(ENTITY::GET_ENTITY_COORDS(pedParam0, true, false), fParam1, fParam2, fParam3, fParam4))
			return true;

	return false;
}

BOOL func_265(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6) // Position - 0xA800 Hash - 0xBF2250D5 ^0x34592C3E
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

BOOL func_266(Ped pedParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0xA84A Hash - 0xE63CB60C ^0x5133A9E3
{
	float entityForwardVector;
	Vector3 vector;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	vector = { uParam1 - ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	return ((entityForwardVector * vector) + (entityForwardVector.f_1 * vector.f_1)) / BUILTIN::VDIST(vector, 0f, 0f, 0f) > fParam4;
}

BOOL func_267(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xA88B Hash - 0x1D055735 ^0x5D260F19
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

BOOL func_268(Ped pedParam0) // Position - 0xA904 Hash - 0xF2F988FE ^0xA63CD631
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

int func_269(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0xA9EC Hash - 0xDD2F88C2 ^0x29E97850
{
	int weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

BOOL func_270() // Position - 0xAA2E Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_51() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_271(int iParam0, BOOL bParam1) // Position - 0xAA53 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_246(iParam0))
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

int func_272(int iParam0) // Position - 0xAA84 Hash - 0x6EC15CF9 ^0xE613EBE0
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

int func_273(int iParam0) // Position - 0xAB05 Hash - 0x78E19743 ^0x6ACC64F5
{
	int i;
	var unk;

	for (i = iParam0; i < *Global_1058888.f_40431; i = i + 1)
	{
		if (i + 1 < 32)
			Global_1058888.f_40431.f_1[i /*2*/] = { Global_1058888.f_40431.f_1[i + 1 /*2*/] };
	}

	unk = -1;

	if (*Global_1058888.f_40431 < 32)
		Global_1058888.f_40431.f_1[*Global_1058888.f_40431 /*2*/] = { unk };

	Global_1058888.f_40431 = *Global_1058888.f_40431 - 1;

	if (*Global_1058888.f_40431 < 0)
		Global_1058888.f_40431 = 0;

	return 1;
}

int func_274(int iParam0) // Position - 0xABB9 Hash - 0x6DD34799 ^0x352A62D8
{
	int num;
	var unk;

	num = *Global_1058888.f_40431 - 1;
	unk = -1;

	while (num >= iParam0)
	{
		if (num + 1 < 32)
			Global_1058888.f_40431.f_1[num + 1 /*2*/] = { Global_1058888.f_40431.f_1[num /*2*/] };
	
		num = num - 1;
	}

	Global_1058888.f_40431.f_1[iParam0 /*2*/] = { unk };
	Global_1058888.f_40431 = *Global_1058888.f_40431 + 1;

	if (*Global_1058888.f_40431 > 32)
		Global_1058888.f_40431 = 32;

	return 1;
}

BOOL func_275() // Position - 0xAC5A Hash - 0x50F36DAB ^0xF55A49EF
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

