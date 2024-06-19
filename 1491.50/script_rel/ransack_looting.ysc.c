#region Local Var
	BOOL bLocal_0 = 0;
	Hash hLocal_1 = 0;
	Any anLocal_2 = 0;
	int iLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	Ped pedLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 10;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = -1;
	var uLocal_28 = 2;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 10;
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
	var uLocal_42 = 2;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 10;
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
	var uLocal_56 = 10;
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
	var uLocal_87 = 10;
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
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 3;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 10;
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
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = -1;
	var uLocal_174 = 10;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	int iLocal_185 = 0;
	var uLocal_186 = 10;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	Object obLocal_197 = 0;
	int iLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	int iLocal_202 = 0;
	BOOL bLocal_203 = 0;
	BOOL bLocal_204 = 0;
	BOOL bLocal_205 = 0;
	int iLocal_206 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xE6EF425C ^0x54B44415
{
	bLocal_0 = 1;
	fLocal_12 = 1f;
	fLocal_13 = 1f;
	anLocal_2 = anScriptParam_0;
	iLocal_3 = anScriptParam_0.f_1;
	uLocal_4 = anScriptParam_0.f_2;
	func_1();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_2();

	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED() && func_3())
	{
		func_4();
		func_5();
		func_6();
		BUILTIN::WAIT(0);
	}

	func_2();
	return;
}

void func_1() // Position - 0x5C Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_2() // Position - 0x64 Hash - 0x43FBC4A8 ^0x4278D3E2
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(anLocal_2);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_8();
	else
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

BOOL func_3() // Position - 0x89 Hash - 0x6C387DBE ^0xBAA82875
{
	if (hLocal_1 != 0)
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(hLocal_1) == 0)
			return bLocal_0;
		else
			return true;

	return bLocal_0;
}

void func_4() // Position - 0xB2 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_5() // Position - 0xBA Hash - 0x3D22DF46 ^0xED7FF9EC
{
	int i;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_ERRORS); i = i + 1)
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_ERRORS, i))
		{
			case -843555838:
				func_11(i);
				break;
		
			case -456923784:
				func_10(i);
				break;
		
			case -45008988:
				func_9(i);
				break;
		}
	}

	return;
}

void func_6() // Position - 0x112 Hash - 0xDCBDC6A8 ^0x31E391C3
{
	var buffer;
	var entityCoords;
	var entityRotation;
	var buffer2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_19))
		pedLocal_19 = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_19.f_5))
	{
		func_12(&pedLocal_19);
		bLocal_203 = true;
		pedLocal_19.f_6 = iLocal_3;
		pedLocal_19.f_7 = uLocal_4;
		pedLocal_19.f_5 = TASK::_GET_SCENARIO_POINT_ENTITY(iLocal_3);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_19.f_5))
		{
			obLocal_197 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(pedLocal_19.f_5);
			OBJECT::CREATE_OBJECT_SKELETON(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(pedLocal_19.f_5));
		}
	}

	switch (iLocal_202)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_19.f_5) && OBJECT::CREATE_OBJECT_SKELETON(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(pedLocal_19.f_5)))
			{
				if (!TASK::DOES_SCENARIO_POINT_EXIST(pedLocal_19.f_6))
				{
					bLocal_0 = false;
					return;
				}
			
				if (TASK::_GET_SCENARIO_CONTAINER_OPENING_STATE(pedLocal_19.f_5))
				{
					bLocal_0 = false;
					return;
				}
			
				func_13(&pedLocal_19);
				func_14(&pedLocal_19);
				bLocal_205 = func_15(&pedLocal_19);
			
				if (bLocal_205)
				{
					pedLocal_19.f_3 = !func_16(pedLocal_19.f_5);
				}
				else
				{
					pedLocal_19.f_3 = 1;
					func_17(0, 0f, 0f, 0f, &obLocal_197, 0, 0);
				}
			
				iLocal_198 = func_18(&pedLocal_19, bLocal_205);
				func_19(pedLocal_19.f_5);
				pedLocal_19.f_1 = ENTITY::GET_ENTITY_MODEL(pedLocal_19.f_5);
				func_20(&pedLocal_19);
				func_21(&uLocal_199);
				iLocal_202 = 1;
			}
			break;
	
		case 1:
			if (!TASK::DOES_SCENARIO_POINT_EXIST(pedLocal_19.f_6))
			{
				bLocal_0 = false;
				return;
			}
		
			if (bLocal_203)
			{
				for (iLocal_206 = 0; iLocal_206 < 10; iLocal_206 = iLocal_206 + 1)
				{
					MISC::_INT_TO_STRING(iLocal_206, "%i", &buffer);
					func_23(&uLocal_174[iLocal_206], &pedLocal_19.f_12[iLocal_206], &pedLocal_19, &uLocal_186[iLocal_206], &buffer, pedLocal_19.f_37[iLocal_206 /*3*/], pedLocal_19.f_68[iLocal_206 /*3*/], false, true, true, func_22(&uLocal_199, 2f), pedLocal_19.f_26[iLocal_206]);
				}
			
				if (ENTITY::DOES_ENTITY_EXIST(pedLocal_19.f_5))
				{
					entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_19.f_5, true, false) };
					entityRotation = { ENTITY::GET_ENTITY_ROTATION(pedLocal_19.f_5, 2) };
				}
				else
				{
					entityCoords = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true) };
					entityRotation = { 0f, 0f, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true) };
				}
			
				func_24(&iLocal_185, &iLocal_198, &pedLocal_19, entityCoords, entityRotation);
			}
		
			bLocal_204 = true;
		
			for (iLocal_206 = 0; iLocal_206 < 10; iLocal_206 = iLocal_206 + 1)
			{
				if (uLocal_174[iLocal_206] < 2)
				{
					bLocal_204 = false;
					break;
				}
			}
		
			if (iLocal_185 != 4)
				bLocal_204 = false;
		
			if (bLocal_204)
			{
				func_21(&uLocal_199);
				iLocal_202 = 2;
			}
			break;
	
		case 2:
			if (!TASK::DOES_SCENARIO_POINT_EXIST(pedLocal_19.f_6))
			{
				bLocal_0 = false;
				return;
			}
		
			if (bLocal_203)
			{
				for (iLocal_206 = 0; iLocal_206 < 10; iLocal_206 = iLocal_206 + 1)
				{
					MISC::_INT_TO_STRING(iLocal_206, "%i", &buffer2);
					func_23(&uLocal_174[iLocal_206], &pedLocal_19.f_12[iLocal_206], &pedLocal_19, &uLocal_186[iLocal_206], &buffer2, pedLocal_19.f_37[iLocal_206 /*3*/], pedLocal_19.f_68[iLocal_206 /*3*/], false, true, false, func_22(&uLocal_199, 2f), pedLocal_19.f_26[iLocal_206]);
				}
			}
		
			bLocal_204 = true;
		
			for (iLocal_206 = 0; iLocal_206 < 10; iLocal_206 = iLocal_206 + 1)
			{
				if (uLocal_174[iLocal_206] != 4)
				{
					bLocal_204 = false;
					break;
				}
			}
		
			if (bLocal_204)
			{
				func_25(&uLocal_199);
				iLocal_202 = 3;
			}
			break;
	
		case 3:
			if (!TASK::DOES_SCENARIO_POINT_EXIST(pedLocal_19.f_6) || !PED::IS_PED_USING_THIS_SCENARIO(Global_35, pedLocal_19.f_6))
			{
				bLocal_0 = false;
				return;
			}
			break;
	}

	return;
}

void func_7() // Position - 0x41D Hash - 0x1341BAFB ^0xF302E673
{
	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_19.f_5))
		if (TASK::_GET_SCENARIO_CONTAINER_OPENING_STATE(pedLocal_19.f_5))
			func_26(pedLocal_19.f_5);

	return;
}

void func_8() // Position - 0x443 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(int iParam0) // Position - 0x44F Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_27(&eventData);
	}

	return;
}

void func_10(int iParam0) // Position - 0x477 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_28(&eventData);
	}

	return;
}

void func_11(int iParam0) // Position - 0x49F Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_29(&eventData);
	}

	return;
}

void func_12(var uParam0) // Position - 0x4C7 Hash - 0x2085A7C1 ^0xFFAEBAC2
{
	int i;

	uParam0->f_1 = 0;
	uParam0->f_154 = -1;
	uParam0->f_7 = 0;
	uParam0->f_8 = -1;

	for (i = 0; i < 3; i = i + 1)
	{
		uParam0->f_99[i] = -1;
	}

	return;
}

void func_13(var uParam0) // Position - 0x4FE Hash - 0x1D3E7011 ^0x65DB6CAE
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		uParam0->f_103[i /*5*/] = -1;
		uParam0->f_103[i /*5*/].f_3 = 0;
		uParam0->f_103[i /*5*/].f_1 = 0;
		uParam0->f_103[i /*5*/].f_2 = 0f;
		uParam0->f_103[i /*5*/].f_4 = 0;
	}

	return;
}

void func_14(var uParam0) // Position - 0x54E Hash - 0x8BF028E8 ^0x8BF028E8
{
	func_30(uParam0);
	func_31(uParam0);
	func_32(uParam0);
	return;
}

BOOL func_15(var uParam0) // Position - 0x568 Hash - 0xDE562307 ^0xC3AF476B
{
	if (DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "loot_allow_random") && DECORATOR::DECOR_GET_BOOL(uParam0->f_5, "loot_allow_random"))
		return 1;

	if (TASK::_IS_SCENARIO_POINT_FLAG_SET(uParam0->f_6, 25))
		return 0;

	if (func_33() == false)
		return 0;

	if (func_34(TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_6, true)))
		return 0;

	if (func_35(0) || func_35(3))
		return 0;

	return 1;
}

BOOL func_16(Entity eParam0) // Position - 0x5D9 Hash - 0xD2203470 ^0x6B2C86D5
{
	if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_empty") || DECORATOR::DECOR_EXIST_ON(eParam0, "loot_money") || DECORATOR::DECOR_EXIST_ON(eParam0, "fLoot_money") || DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_type1") || DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_type2") || DECORATOR::DECOR_EXIST_ON(eParam0, "loot_ammo1_type") || DECORATOR::DECOR_EXIST_ON(eParam0, "loot_ammo2_type") || DECORATOR::DECOR_EXIST_ON(eParam0, "loot_ammo3_type") || DECORATOR::DECOR_EXIST_ON(eParam0, "loot_weapon"))
		return false;

	return true;
}

void func_17(Hash hParam0, float fParam1, float fParam2, float fParam3, var uParam4, int iParam5, Hash hParam6) // Position - 0x66A Hash - 0x3BB2D293 ^0x7119ADA5
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam4))
		*uParam4 = func_36(hParam0, fParam1, iParam5, hParam6);

	if (ENTITY::DOES_ENTITY_EXIST(*uParam4))
		func_37(*uParam4);

	return;
}

int func_18(var uParam0, BOOL bParam1) // Position - 0x69F Hash - 0x568DCCE8 ^0x9431F4EE
{
	int _int;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5) && DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "lootable_interior"))
	{
		_int = DECORATOR::DECOR_GET_INT(uParam0->f_5, "lootable_interior");
	
		if (_int == 0)
			bParam1 = true;
		else
			return _int;
	}

	if (bParam1)
	{
		switch (uParam0->f_8)
		{
			case 0:
				return func_38();
		
			case 1:
				return func_39();
		
			case 16:
				return func_40();
		
			case 17:
				return func_41(uParam0);
		
			default:
			
		}
	}

	return 0;
}

void func_19(Entity eParam0) // Position - 0x726 Hash - 0xA366888 ^0xD1447AF9
{
	int num;
	int value;

	num = OBJECT::_0x250EBB11E81A10BE(eParam0);

	if (num == 0)
		return;

	if (func_42(OBJECT::_0x2BF1953C0C21AC88(num), 1))
	{
		DECORATOR::DECOR_SET_BOOL(eParam0, "loot_empty", true);
		return;
	}

	OBJECT::_0x7D4411D6736CD295(num, &value);

	if (value > 0)
		DECORATOR::DECOR_SET_INT(eParam0, "loot_money", value);

	if (value.f_2 > 0)
	{
		DECORATOR::DECOR_SET_INT(eParam0, "loot_ammo1_type", value.f_1);
		DECORATOR::DECOR_SET_INT(eParam0, "loot_ammo1_amt", value.f_2);
	}

	if (value.f_4 > 0)
	{
		DECORATOR::DECOR_SET_INT(eParam0, "loot_ammo2_type", value.f_3);
		DECORATOR::DECOR_SET_INT(eParam0, "loot_ammo2_amt", value.f_4);
	}

	if (value.f_6 > 0)
	{
		DECORATOR::DECOR_SET_INT(eParam0, "loot_ammo3_type", value.f_5);
		DECORATOR::DECOR_SET_INT(eParam0, "loot_ammo3_amt", value.f_6);
	}

	if (value.f_8 > 0)
	{
		DECORATOR::DECOR_SET_INT(eParam0, "loot_item_type1", value.f_7);
		DECORATOR::DECOR_SET_INT(eParam0, "loot_item_amt1", value.f_8);
	}

	if (value.f_9 != 0)
		DECORATOR::DECOR_SET_INT(eParam0, "loot_weapon", value.f_9);

	return;
}

void func_20(var uParam0) // Position - 0x81C Hash - 0xC79A3456 ^0x5AD17FEE
{
	int num;
	int i;
	Hash hash;

	if (uParam0->f_3 && func_43(uParam0->f_5))
		return;

	num.f_1 = 10;
	num.f_12 = 10;

	if (!func_44(uParam0->f_5))
		MISC::_LOOT_TABLES_GET_INFO(*uParam0, true, true, uParam0->f_1, &num, 0);

	if (num <= 0 && !uParam0->f_3)
		return;

	if (uParam0->f_3)
		func_45(uParam0, &num, 10);

	if (uParam0->f_2 > 10)
		uParam0->f_2 = 10;

	for (i = 0; i < uParam0->f_2; i = i + 1)
	{
		uParam0->f_26[i] = num.f_1[i];
	
		if (uParam0->f_103[i /*5*/].f_4 != 0)
		{
			uParam0->f_12[i] = uParam0->f_103[i /*5*/].f_4;
		}
		else
		{
			hash = TASK::_FIND_MODEL_FOR_ITEM(num.f_1[i]);
		
			if (hash == 0 && uParam0->f_26[i] != 0)
				uParam0->f_12[i] = joaat("scriptedball");
			else
				uParam0->f_12[i] = hash;
		}
	}

	return;
}

void func_21(var uParam0) // Position - 0x922 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_46(uParam0, 0f);
	return;
}

BOOL func_22(var uParam0, float fParam1) // Position - 0x931 Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_47(uParam0))
		return false;

	if (func_48(uParam0) > fParam1)
		return true;

	return false;
}

void func_23(var uParam0, var uParam1, var uParam2, var uParam3, const char* sParam4, Vector3 vParam5, var uParam6, var uParam7, Vector3 vParam8, var uParam9, var uParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14, Hash hParam15) // Position - 0x958 Hash - 0xD17E947E ^0x113097DC
{
	Vector3 offsetFromCoordAndHeadingInWorldCoords;
	Vector3 worldPositionOfEntityBone;
	int boneIndex;
	int num;

	switch (*uParam0)
	{
		case 0:
			if (*uParam1 != 0)
			{
				STREAMING::REQUEST_MODEL(*uParam1, false);
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 4;
			}
			break;
	
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(*uParam1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_5))
				{
					if (uParam2->f_154 != -1)
					{
						worldPositionOfEntityBone = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam2->f_5, uParam2->f_154) };
						offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(worldPositionOfEntityBone, ENTITY::GET_ENTITY_HEADING(uParam2->f_5), vParam5) };
					}
					else
					{
						offsetFromCoordAndHeadingInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam2->f_5, vParam5) };
					}
				}
				else if (TASK::DOES_SCENARIO_POINT_EXIST(uParam2->f_6))
				{
					offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(uParam2->f_6, true), TASK::_GET_SCENARIO_POINT_HEADING(uParam2->f_6, true), vParam5) };
				}
				else
				{
					break;
				}
			
				*uParam3 = OBJECT::CREATE_OBJECT(*uParam1, offsetFromCoordAndHeadingInWorldCoords, true, true, false, false, bParam11);
				ENTITY::SET_ENTITY_INVINCIBLE(*uParam3, true);
				OBJECT::_MAKE_ITEM_CARRIABLE(*uParam3);
			
				if (bParam12)
				{
					boneIndex = uParam2->f_4 ? uParam2->f_154 : 0;
					offsetFromCoordAndHeadingInWorldCoords = { func_50(uParam2->f_4, vParam5, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam2->f_5, ENTITY::GET_ENTITY_COORDS(*uParam3, true, false))) };
					ENTITY::ATTACH_ENTITY_TO_ENTITY(*uParam3, uParam2->f_5, boneIndex, offsetFromCoordAndHeadingInWorldCoords, vParam8, false, false, false, false, 2, true, false, false);
				}
				else
				{
					ENTITY::SET_ENTITY_ROTATION(*uParam3, vParam8, 2, true);
				}
			
				*uParam0 = 2;
			}
			else if (bParam14)
			{
			}
			break;
	
		case 2:
			if (!bParam13)
			{
				if (hParam15 != 0)
					num = 3;
				else
					num = 4;
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					*uParam0 = num;
				else if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
					*uParam0 = num;
				else if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam2->f_6))
					*uParam0 = num;
				else if (TASK::_ASSOCIATE_PROP_WITH_SCENARIO(uParam2->f_6, *uParam3, sParam4, true))
					*uParam0 = num;
				else if (bParam14)
					*uParam0 = num;
			}
			break;
	
		case 3:
			if (hParam15 != 0)
			{
				TASK::_0xA6A76D666A281F2D(*uParam3, hParam15);
				*uParam0 = 4;
			}
			break;
	
		case 4:
			break;
	}

	return;
}

void func_24(var uParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0xB51 Hash - 0xC482FA79 ^0xE67AF484
{
	Object entity1;
	int boneIndex;

	switch (*uParam0)
	{
		case 0:
			if (*uParam1 != 0)
			{
				STREAMING::REQUEST_MODEL(*uParam1, false);
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 4;
			}
			break;
	
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(*uParam1))
			{
				if (*uParam1 == joaat("p_dressinglcmhay01x"))
					vParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam3, uParam6.f_2, 0f, 0f, 0.08f) };
			
				entity1 = OBJECT::CREATE_OBJECT(*uParam1, vParam3, true, true, false, false, false);
			
				if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_5))
				{
					boneIndex = uParam2->f_4 ? uParam2->f_154 : 0;
					ENTITY::ATTACH_ENTITY_TO_ENTITY(entity1, uParam2->f_5, boneIndex, 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, true, false);
				}
				else
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(entity1, vParam3, uParam6.f_2, false, true);
				}
			
				*uParam0 = 4;
			}
			break;
	
		case 4:
			break;
	}

	return;
}

void func_25(var uParam0) // Position - 0xC20 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_26(Entity eParam0) // Position - 0xC36 Hash - 0x83AB1910 ^0xA0A7E74
{
	if (ENTITY::DOES_ENTITY_EXIST(eParam0))
		DECORATOR::DECOR_SET_BOOL(eParam0, "chest_open", true);

	if (NETWORK::NETWORK_IS_IN_SESSION())
		func_52(func_51(joaat("chests_looted")), 1);
	else
		func_52(func_51(joaat("chests_searched")), 1);

	return;
}

void func_27(var uParam0) // Position - 0xC78 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_28(var uParam0) // Position - 0xC80 Hash - 0x53C7965B ^0x35CF92C
{
	if (uParam0->f_1 != pedLocal_19)
		return;

	if (TASK::_GET_SCENARIO_CONTAINER_OPENING_STATE(pedLocal_19.f_5))
		if (!func_53(pedLocal_19.f_5))
			func_26(pedLocal_19.f_5);

	return;
}

void func_29(var uParam0) // Position - 0xCB6 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_30(var uParam0) // Position - 0xCBE Hash - 0xFBCF268E ^0x43935850
{
	switch (uParam0->f_7)
	{
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENLOCKED_TIGHT_0m0"):
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENLOCKED_0m80"):
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENUNLOCKED_0m60"):
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENLOCKED_TIGHT_0m45"):
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENUNLOCKED_0m45"):
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENLOCKED_0m60"):
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENLOCKED_0m45"):
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENUNLOCKED_0m80"):
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENUNLOCKED_0m0"):
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENLOCKED_0m0"):
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENLOCKED_TIGHT_0m60"):
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENLOCKED_TIGHT_0m80"):
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENLOCKED_1m05"):
		case joaat("RANSACK_PROP_LOCKBOX_MED_OPENUNLOCKED_1m05"):
			uParam0->f_8 = 14;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
	
		case joaat("RANSACK_PROP_DRAWER_SINGLE_4_OPEN"):
			uParam0->f_8 = 16;
			uParam0->f_154 = func_54(uParam0, 3);
			uParam0->f_4 = 1;
			break;
	
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENUNLOCKED_0m45"):
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENLOCKED_1m05"):
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENUNLOCKED_0m60"):
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENUNLOCKED_0m80"):
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENLOCKED_TIGHT_0m60"):
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENLOCKED_TIGHT_0m80"):
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENLOCKED_0m80"):
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENLOCKED_0m0"):
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENUNLOCKED_0m0"):
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENLOCKED_TIGHT_0m45"):
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENLOCKED_0m45"):
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENUNLOCKED_1m05"):
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENLOCKED_TIGHT_0m0"):
		case joaat("RANSACK_PROP_LOCKBOX_SML_OPENLOCKED_0m60"):
			uParam0->f_8 = 15;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
	
		case joaat("RANSACK_PROP_DRAWER_DOUBLE_4_OPEN"):
			uParam0->f_8 = 17;
			uParam0->f_154 = func_54(uParam0, 7);
			uParam0->f_4 = 1;
			break;
	
		case joaat("RANSACK_PROP_CHEST_LARGE_OPEN"):
			uParam0->f_8 = 1;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
	
		case joaat("RANSACK_PROP_CUPBOARD_NARROW_MID_OPEN"):
			uParam0->f_8 = 5;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
	
		case joaat("RANSACK_ATTACHED_DD_123"):
		case joaat("ransack_attached_dd_234"):
		case joaat("RANSACK_ATTACHED_DD_1234"):
		case joaat("RANSACK_ATTACHED_DD_34"):
			uParam0->f_8 = 17;
			uParam0->f_154 = func_54(uParam0, 4);
			uParam0->f_4 = 1;
			break;
	
		case joaat("RANSACK_ATTACHED_DS_12"):
		case joaat("RANSACK_ATTACHED_DS_234"):
		case joaat("RANSACK_ATTACHED_DS_23"):
		case joaat("RANSACK_ATTACHED_DS_123"):
			uParam0->f_8 = 16;
			uParam0->f_154 = func_54(uParam0, 0);
			uParam0->f_4 = 1;
			break;
	
		case joaat("RANSACK_PROP_DRAWER_SINGLE_3_OPEN"):
			uParam0->f_8 = 16;
			uParam0->f_154 = func_54(uParam0, 2);
			uParam0->f_4 = 1;
			break;
	
		case joaat("RANSACK_PROP_CUPBOARD_NARROW_LOW_OPEN_B"):
		case joaat("RANSACK_PROP_CUPBOARD_NARROW_LOW_OPEN_A"):
			uParam0->f_8 = 6;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
	
		case joaat("RANSACK_PROP_DRAWER_SINGLE_2_OPEN"):
			uParam0->f_8 = 16;
			uParam0->f_154 = func_54(uParam0, 1);
			uParam0->f_4 = 1;
			break;
	
		case joaat("RANSACK_PROP_DRAWER_DOUBLE_2_OPEN"):
			uParam0->f_8 = 17;
			uParam0->f_154 = func_54(uParam0, 5);
			uParam0->f_4 = 1;
			break;
	
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENLOCKED_TIGHT_0m60"):
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENUNLOCKED_1m05"):
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENLOCKED_TIGHT_0m45"):
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENUNLOCKED_0m60"):
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENLOCKED_TIGHT_0m80"):
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENLOCKED_TIGHT_0m0"):
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENLOCKED_0m80"):
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENUNLOCKED_0m0"):
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENLOCKED_0m45"):
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENLOCKED_1m05"):
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENUNLOCKED_0m45"):
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENLOCKED_0m60"):
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENUNLOCKED_0m80"):
		case joaat("RANSACK_PROP_LOCKBOX_LRG_OPENLOCKED_0m0"):
			uParam0->f_8 = 13;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
	
		case joaat("RANSACK_PROP_CUPBOARD_WIDE_HIGH_OPEN"):
			uParam0->f_8 = 4;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
	
		case joaat("RANSACK_PROP_CHEST_MEDIUM_OPEN"):
			uParam0->f_8 = 0;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
	
		case joaat("RANSACK_PROP_CUPBOARD_WIDE_LOW_OPEN"):
			uParam0->f_8 = 10;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
	
		case joaat("RANSACK_PROP_DRAWER_DOUBLE_3_OPEN"):
			uParam0->f_8 = 17;
			uParam0->f_154 = func_54(uParam0, 6);
			uParam0->f_4 = 1;
			break;
	
		case joaat("RANSACK_PROP_CUPBOARD_WIDE_LOW_RIGHT_OPEN"):
			uParam0->f_8 = 12;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
	
		case joaat("RANSACK_PROP_CUPBOARD_NARROW_LOW_RIGHT_OPEN"):
			uParam0->f_8 = 8;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
	
		case joaat("RANSACK_PROP_CUPBOARD_WIDE_MID_OPEN"):
			uParam0->f_8 = 9;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
	
		case joaat("RANSACK_PROP_CUPBOARD_NARROW_HIGH_OPEN_B"):
		case joaat("RANSACK_PROP_CUPBOARD_NARROW_HIGH_OPEN_A"):
			if (ENTITY::GET_ENTITY_MODEL(uParam0->f_5) == joaat("p_medicinechest01x"))
				uParam0->f_8 = 2;
			else
				uParam0->f_8 = 3;
		
			uParam0->f_154 = func_54(uParam0, -1);
			break;
	
		case joaat("RANSACK_PROP_DRAWER_DOUBLE_1_OPEN"):
			uParam0->f_8 = 17;
			uParam0->f_154 = func_54(uParam0, 4);
			uParam0->f_4 = 1;
			break;
	
		case joaat("RANSACK_PROP_CUPBOARD_WIDE_LOW_LEFT_OPEN"):
			uParam0->f_8 = 11;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
	
		case joaat("RANSACK_PROP_DRAWER_SINGLE_1_OPEN"):
			uParam0->f_8 = 16;
			uParam0->f_154 = func_54(uParam0, 0);
			uParam0->f_4 = 1;
			break;
	
		case joaat("RANSACK_PROP_CUPBOARD_NARROW_LOW_LEFT_OPEN"):
			uParam0->f_8 = 7;
			uParam0->f_154 = func_54(uParam0, -1);
			break;
	
		default:
			uParam0->f_8 = -1;
			break;
	}

	return;
}

void func_31(var uParam0) // Position - 0x10BF Hash - 0xC543C804 ^0xAB89D9C1
{
	switch (uParam0->f_8)
	{
		case 0:
			uParam0->f_99[0] = 10;
			break;
	
		case 1:
			uParam0->f_99[0] = 10;
			break;
	
		case 2:
			uParam0->f_99[0] = 150;
			break;
	
		case 3:
			uParam0->f_99[0] = 105;
			uParam0->f_99[1] = 150;
			break;
	
		case 4:
			uParam0->f_99[0] = 105;
			uParam0->f_99[1] = 150;
			break;
	
		case 5:
			uParam0->f_99[0] = 105;
			uParam0->f_99[1] = 150;
			break;
	
		case 6:
			uParam0->f_99[0] = 10;
			break;
	
		case 7:
			uParam0->f_99[0] = 10;
			break;
	
		case 8:
			uParam0->f_99[0] = 10;
			break;
	
		case 9:
			uParam0->f_99[0] = 80;
			uParam0->f_99[1] = 105;
			uParam0->f_99[2] = 150;
			break;
	
		case 10:
			uParam0->f_99[0] = 10;
			break;
	
		case 11:
			uParam0->f_99[0] = 10;
			break;
	
		case 12:
			uParam0->f_99[0] = 10;
			break;
	
		case 13:
			uParam0->f_99[0] = 5;
			break;
	
		case 14:
			uParam0->f_99[0] = 5;
			break;
	
		case 15:
			uParam0->f_99[0] = 5;
			break;
	
		case 16:
			break;
	
		case 17:
			break;
	}

	return;
}

void func_32(var uParam0) // Position - 0x122D Hash - 0x5C55AEBB ^0x723FA369
{
	int i;
	int endRange;
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	int num9;
	int num10;
	int num11;
	var unk;

	num9 = 1;
	num10 = 1;
	num11 = 1;
	unk = 10;

	switch (uParam0->f_8)
	{
		case 0:
			func_59(uParam0);
			return;
	
		case 1:
			num = -0.55f;
			num2 = 0.55f;
			num3 = -0.2f;
			num4 = 0.2f;
			break;
	
		case 2:
			num = 0.14f;
			num2 = 0.56f;
			num3 = 0.05f;
			num4 = 0.16f;
			num8 = 1.6f;
			break;
	
		case 3:
			num = 0.07f;
			num2 = 0.63f;
			num3 = 0.05f;
			num4 = 0.4f;
			num8 = 1.6f;
			break;
	
		case 4:
			num = 0.07f;
			num2 = 1.13f;
			num3 = 0.05f;
			num4 = 0.4f;
			num8 = 1.6f;
			break;
	
		case 5:
			func_55(uParam0);
			return;
	
		case 6:
			func_56(uParam0);
			return;
	
		case 7:
			num = 0.12f;
			num2 = 0.21f;
			num3 = 0.05f;
			num4 = 0.25f;
			num8 = 0.45f;
			break;
	
		case 8:
			num = -1f * 0.21f;
			num2 = -1f * 0.12f;
			num3 = 0.05f;
			num4 = 0.25f;
			num8 = 0.45f;
			break;
	
		case 9:
			num = 0.07f;
			num2 = 1.13f;
			num3 = 0.05f;
			num4 = 0.4f;
			num8 = 1.3f;
			break;
	
		case 10:
			num = 0.07f;
			num2 = 1.13f;
			num3 = 0.05f;
			num4 = 0.25f;
			num8 = 0.45f;
			break;
	
		case 11:
			num = 0.12f;
			num2 = 0.48f;
			num3 = 0.05f;
			num4 = 0.25f;
			num8 = 0.45f;
			break;
	
		case 12:
			num = -1f * 0.48f;
			num2 = -1f * 0.12f;
			num3 = 0.05f;
			num4 = 0.25f;
			num8 = 0.45f;
			break;
	
		case 13:
			func_60(uParam0);
			return;
	
		case 14:
			func_61(uParam0);
			return;
	
		case 15:
			func_62(uParam0);
			return;
	
		case 16:
			func_57(uParam0);
			return;
	
		case 17:
			func_58(uParam0);
			return;
	}

	num6 = num3;
	num4 = num4;

	for (i = 0; i < 3; i = i + 1)
	{
		if (uParam0->f_99[i] != -1)
			endRange = endRange + 1;
	}

	func_63(&unk, 10, true);

	for (i = 0; i < 10; i = i + 1)
	{
		num5 = func_64(num5, num, num2, 0.15f, 0.25f, &num10);
	
		if (num9 != num10)
		{
			num6 = func_64(num6, num3, num4, 0.13f, 0.13f, &num11);
			num9 = num10;
		}
	
		if (endRange > 0)
			num7 = (BUILTIN::TO_FLOAT(uParam0->f_99[MISC::GET_RANDOM_INT_IN_RANGE(0, endRange)]) / 100f) - num8;
	
		uParam0->f_37[unk[i] /*3*/] = { num5, num6, num7 };
	}

	return;
}

BOOL func_33() // Position - 0x1550 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_34(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x155E Hash - 0xFA2BBA1 ^0xB0883B47
{
	Interior interiorFromCollision;

	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
	{
		interiorFromCollision = INTERIOR::GET_INTERIOR_FROM_COLLISION(vParam0);
	
		if (INTERIOR::IS_VALID_INTERIOR(interiorFromCollision))
			return true;
	}

	return false;
}

BOOL func_35(int iParam0) // Position - 0x158A Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_65(Global_1835011[iParam0 /*74*/].f_1);
}

Object func_36(Hash hParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, Hash hParam5) // Position - 0x15B6 Hash - 0xE4787339 ^0xA7C2245A
{
	Object objectIndexFromEntityIndex;
	Entity propForScenarioPoint;

	STREAMING::REQUEST_MODEL(hParam0, false);

	if (!STREAMING::HAS_MODEL_LOADED(hParam0))
		return 0;

	if (!TASK::DOES_SCENARIO_POINT_EXIST(iParam4) && hParam5 != 0)
		iParam4 = TASK::FIND_SCENARIO_OF_TYPE_HASH(vParam1, hParam5, 1f, 0, false);

	if (TASK::DOES_SCENARIO_POINT_EXIST(iParam4))
	{
		if (TASK::_DOES_SCENARIO_POINT_HAVE_PROPS(iParam4))
		{
			propForScenarioPoint = TASK::GET_PROP_FOR_SCENARIO_POINT(iParam4, "CONTAINER");
		
			if (ENTITY::IS_ENTITY_AN_OBJECT(propForScenarioPoint))
				objectIndexFromEntityIndex = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(propForScenarioPoint);
		}
	}
	else
	{
		objectIndexFromEntityIndex = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(vParam1, 0.5f, hParam0, false, false, true);
	}

	return objectIndexFromEntityIndex;
}

void func_37(Entity eParam0) // Position - 0x163F Hash - 0x69119FA3 ^0xFC9F27E1
{
	if (ENTITY::DOES_ENTITY_EXIST(eParam0))
	{
		DECORATOR::DECOR_SET_BOOL(eParam0, "scripted_loot_only", true);
		ENTITY::SCRIPT_OVERRIDE_ENTITY_LOOT_TABLE_PERMANENT(eParam0, joaat("empty"));
	}

	return;
}

int func_38() // Position - 0x1667 Hash - 0x9F572D68 ^0xAD4ADBD2
{
	return joaat("p_dressinglcmhay01x");
}

int func_39() // Position - 0x1674 Hash - 0x8F9CD265 ^0x8CDD2EF
{
	int randomIntInRange;
	int num;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	num = 0;

	switch (randomIntInRange)
	{
		case 0:
			num = joaat("s_lootablebedchest_a");
			break;
	
		case 1:
			num = joaat("s_lootablebedchest_b");
			break;
	
		case 2:
			num = joaat("s_lootablebedchest_c");
			break;
	
		case 3:
			num = joaat("s_lootablebedchest_d");
			break;
	}

	return 0;
}

int func_40() // Position - 0x16D0 Hash - 0x7F9E60E7 ^0x44BFCEE4
{
	int num;

	num = 0;

	if (func_35(0))
		num = joaat("p_adl_drwsng01x");

	return num;
}

int func_41(var uParam0) // Position - 0x16EC Hash - 0x4D523389 ^0x7F8DD2FD
{
	int num;

	num = 0;

	if (func_35(3) && ENTITY::GET_ENTITY_MODEL(uParam0->f_5) == joaat("p_desk09bx"))
		num = joaat("p_wnt4_drwdressing01x");

	return num;
}

BOOL func_42(int iParam0, int iParam1) // Position - 0x171B Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_43(Entity eParam0) // Position - 0x172A Hash - 0xCCE1E589 ^0x51DF8EC8
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_empty"))
		return 1;

	return 0;
}

BOOL func_44(Entity eParam0) // Position - 0x1751 Hash - 0x50B7F4E6 ^0x5F76ECF6
{
	if (ENTITY::DOES_ENTITY_EXIST(eParam0) && DECORATOR::DECOR_EXIST_ON(eParam0, "scripted_loot_only") && DECORATOR::DECOR_GET_BOOL(eParam0, "scripted_loot_only"))
		return true;

	return false;
}

void func_45(var uParam0, var uParam1, int iParam2) // Position - 0x1783 Hash - 0xD41EEF1 ^0x475E4692
{
	Hash hash;
	var unk;
	var unk2;
	var unk5;
	int num;
	var unk8;
	var unk9;
	var unk10;

	while (!func_16(uParam0->f_5) && num < iParam2)
	{
		hash = func_66(uParam0->f_5, &unk8, &unk, &unk9, &unk10, &unk2, &unk5);
	
		if (func_67(hash, 0))
		{
			func_68(uParam0, unk, unk2, unk5, hash, unk8, unk9, unk10);
			uParam1->f_1[num] = hash;
			num = num + 1;
		}
	}

	return;
}

void func_46(var uParam0, float fParam1) // Position - 0x17EC Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_69() - fParam1;
	func_70(uParam0, 1);
	func_71(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_47(var uParam0) // Position - 0x1812 Hash - 0x5001E582 ^0x5001E582
{
	return func_72(*uParam0, 1);
}

float func_48(var uParam0) // Position - 0x1822 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_47(uParam0))
		return uParam0->f_1;

	if (func_73(uParam0))
		return uParam0->f_2;

	return func_69() - uParam0->f_1;
}

var func_49(BOOL bParam0, var uParam1, var uParam2) // Position - 0x1857 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

Vector3 func_50(BOOL bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x186E Hash - 0x6B64B100 ^0x6B64B100
{
	if (bParam0)
		return uParam1;

	return uParam4;
}

struct<2> func_51(int iParam0) // Position - 0x1889 Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

void func_52(var uParam0, var uParam1, int iParam2) // Position - 0x189B Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

BOOL func_53(Entity eParam0) // Position - 0x18AB Hash - 0xA5E33381 ^0x904C303F
{
	if (ENTITY::DOES_ENTITY_EXIST(eParam0))
		return DECORATOR::DECOR_EXIST_ON(eParam0, "chest_open");

	return false;
}

int func_54(var uParam0, int iParam1) // Position - 0x18C9 Hash - 0x1079038B ^0x9D04484F
{
	int entityBoneIndexByName;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_74(uParam0, iParam1)))
	{
		entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_5, func_74(uParam0, iParam1));
		return entityBoneIndexByName;
	}

	return 0;
}

void func_55(var uParam0) // Position - 0x18F9 Hash - 0xBEF9BEBB ^0xBEF9BEBB
{
	var unk;
	var unk32;
	int i;

	unk = 10;
	unk32 = 10;
	unk[0 /*3*/] = { 0.05f, 0.07f, 0.2f };
	unk[1 /*3*/] = { 0.17f, 0.21f, 0.2f };
	unk[2 /*3*/] = { 0.28f, 0.07f, 0.2f };
	unk[3 /*3*/] = { 0.39f, 0.23f, 0.2f };
	unk[4 /*3*/] = { 0.41f, 0.08f, 0.2f };
	unk[5 /*3*/] = { 0.08f, 0.08f, -0.25f };
	unk[6 /*3*/] = { 0.22f, 0.19f, -0.25f };
	unk[7 /*3*/] = { 0.35f, 0.09f, -0.25f };
	unk[8 /*3*/] = { 0.49f, 0.19f, -0.25f };
	unk[9 /*3*/] = { 0.63f, 0.08f, -0.25f };
	func_63(&unk32, 10, true);

	for (i = 0; i < 9; i = i + 1)
	{
		uParam0->f_37[i /*3*/] = { unk[unk32[i] /*3*/] };
	}

	return;
}

void func_56(var uParam0) // Position - 0x1A1D Hash - 0xBEF9BEBB ^0xBEF9BEBB
{
	var unk;
	var unk32;
	int i;

	unk = 10;
	unk32 = 10;
	unk[0 /*3*/] = { 0.08f, 0.08f, 0.15f };
	unk[1 /*3*/] = { 0.22f, 0.19f, 0.15f };
	unk[2 /*3*/] = { 0.35f, 0.09f, 0.15f };
	unk[3 /*3*/] = { 0.49f, 0.19f, 0.15f };
	unk[4 /*3*/] = { 0.63f, 0.08f, 0.15f };
	unk[5 /*3*/] = { 0.08f, 0.08f, -0.35f };
	unk[6 /*3*/] = { 0.22f, 0.19f, -0.35f };
	unk[7 /*3*/] = { 0.35f, 0.09f, -0.35f };
	unk[8 /*3*/] = { 0.49f, 0.19f, -0.35f };
	unk[9 /*3*/] = { 0.63f, 0.08f, -0.35f };
	func_63(&unk32, 10, true);

	for (i = 0; i < 9; i = i + 1)
	{
		uParam0->f_37[i /*3*/] = { unk[unk32[i] /*3*/] };
	}

	return;
}

void func_57(var uParam0) // Position - 0x1B41 Hash - 0xBEF9BEBB ^0xBEF9BEBB
{
	var unk;
	var unk32;
	int i;

	unk = 10;
	unk32 = 10;
	unk[0 /*3*/] = { 0.15f, 0.07f, -0.06f };
	unk[1 /*3*/] = { 0.07f, 0.12f, -0.06f };
	unk[2 /*3*/] = { 0f, 0.08f, -0.06f };
	unk[3 /*3*/] = { -0.09f, 0.13f, -0.06f };
	unk[4 /*3*/] = { -0.15f, 0.08f, -0.06f };
	unk[5 /*3*/] = { -0.16f, 0.24f, -0.06f };
	unk[6 /*3*/] = { -0.1f, 0.29f, -0.06f };
	unk[7 /*3*/] = { 0f, 0.23f, -0.06f };
	unk[8 /*3*/] = { 0.08f, 0.29f, -0.06f };
	unk[9 /*3*/] = { 0.14f, 0.21f, -0.06f };
	func_63(&unk32, 10, true);

	for (i = 0; i < 9; i = i + 1)
	{
		uParam0->f_37[i /*3*/] = { unk[unk32[i] /*3*/] };
	}

	return;
}

void func_58(var uParam0) // Position - 0x1C5D Hash - 0xBEF9BEBB ^0xBEF9BEBB
{
	var unk;
	var unk32;
	int i;

	unk = 10;
	unk32 = 10;
	unk[0 /*3*/] = { 0.04f, 0.17f, -0.04f };
	unk[1 /*3*/] = { -0.13f, 0.22f, -0.04f };
	unk[2 /*3*/] = { -0.26f, 0.13f, -0.04f };
	unk[3 /*3*/] = { -0.4f, 0.23f, -0.04f };
	unk[4 /*3*/] = { -0.57f, 0.18f, -0.04f };
	unk[5 /*3*/] = { -0.56f, 0.33f, -0.04f };
	unk[6 /*3*/] = { -0.41f, 0.37f, -0.04f };
	unk[7 /*3*/] = { -0.23f, 0.36f, -0.04f };
	unk[8 /*3*/] = { -0.05f, 0.38f, -0.04f };
	unk[9 /*3*/] = { 0.08f, 0.34f, -0.04f };
	func_63(&unk32, 10, true);

	for (i = 0; i < 9; i = i + 1)
	{
		uParam0->f_37[i /*3*/] = { unk[unk32[i] /*3*/] };
	}

	return;
}

void func_59(var uParam0) // Position - 0x1D81 Hash - 0xBEF9BEBB ^0xBEF9BEBB
{
	var unk;
	var unk32;
	int i;

	unk = 10;
	unk32 = 10;
	unk[0 /*3*/] = { -0.34f, -0.11f, 0.11f };
	unk[1 /*3*/] = { -0.32f, -0.02f, 0.11f };
	unk[2 /*3*/] = { -0.19f, -0.14f, 0.11f };
	unk[3 /*3*/] = { -0.1f, -0.01f, 0.11f };
	unk[4 /*3*/] = { -0.32f, 0.17f, 0.11f };
	unk[5 /*3*/] = { -0.15f, 0.18f, 0.11f };
	unk[6 /*3*/] = { 0.06f, 0.13f, 0.11f };
	unk[7 /*3*/] = { 0.13f, 0.03f, 0.11f };
	unk[8 /*3*/] = { 0.27f, 0.12f, 0.11f };
	unk[9 /*3*/] = { 0.28f, -0.03f, 0.11f };
	func_63(&unk32, 10, true);

	for (i = 0; i < 10; i = i + 1)
	{
		uParam0->f_68[i /*3*/] = { 0f, 0f, 90f };
		uParam0->f_37[i /*3*/] = { unk[unk32[i] /*3*/] };
	}

	return;
}

void func_60(var uParam0) // Position - 0x1EB6 Hash - 0xA0117F3A ^0xA0117F3A
{
	var unk;
	var unk32;
	int i;

	unk = 10;
	unk32 = 10;
	unk[0 /*3*/] = { 0f, 0.07f, 0.02f };
	unk[1 /*3*/] = { 0f, -0.07f, 0.02f };
	unk[2 /*3*/] = { -0.16f, -0.07f, 0.02f };
	unk[3 /*3*/] = { 0.16f, -0.07f, 0.02f };
	unk[4 /*3*/] = { -0.16f, 0.07f, 0.02f };
	unk[5 /*3*/] = { 0.16f, 0.07f, 0.02f };
	uParam0->f_2 = 6;
	func_63(&unk32, uParam0->f_2, true);

	for (i = 0; i < uParam0->f_2; i = i + 1)
	{
		uParam0->f_68[i /*3*/] = { 0f, 0f, 90f };
		uParam0->f_37[i /*3*/] = { unk[unk32[i] /*3*/] };
	}

	return;
}

void func_61(var uParam0) // Position - 0x1F92 Hash - 0xBEF9BEBB ^0xBEF9BEBB
{
	var unk;
	var unk32;
	int i;

	unk = 10;
	unk32 = 10;
	unk[0 /*3*/] = { -0.11f, 0.07f, 0.02f };
	unk[1 /*3*/] = { 0.11f, 0.07f, 0.02f };
	unk[2 /*3*/] = { -0.11f, -0.07f, 0.02f };
	unk[3 /*3*/] = { 0.11f, -0.07f, 0.02f };
	unk[4 /*3*/] = { 0f, 0f, 0.02f };
	uParam0->f_2 = 5;
	func_63(&unk32, uParam0->f_2, true);

	for (i = 0; i < uParam0->f_2; i = i + 1)
	{
		uParam0->f_68[i /*3*/] = { 0f, 0f, 90f };
		uParam0->f_37[i /*3*/] = { unk[unk32[i] /*3*/] };
	}

	return;
}

void func_62(var uParam0) // Position - 0x2058 Hash - 0xCAF534CE ^0xCAF534CE
{
	var unk;
	var unk32;
	float num;
	int i;

	unk = 10;
	unk32 = 10;
	num = 0.005f;

	for (i = 0; i < 9; i = i + 1)
	{
		unk[i /*3*/] = { 0f, 0f, num };
		num = num + 0.02f;
		uParam0->f_68[i /*3*/] = { 0f, 0f, 90f };
	}

	uParam0->f_2 = 2;
	func_63(&unk32, uParam0->f_2, true);

	for (i = 0; i < uParam0->f_2; i = i + 1)
	{
		uParam0->f_37[i /*3*/] = { unk[unk32[i] /*3*/] };
	}

	return;
}

void func_63(var uParam0, int iParam1, BOOL bParam2) // Position - 0x20E8 Hash - 0xD58BF130 ^0xD58BF130
{
	var unk;
	int randomIntInRange;
	int i;

	i = 0;

	if (bParam2)
	{
		for (i = 0; i <= iParam1 - 1; i = i + 1)
		{
			uParam0->[i] = i;
		}
	}

	i = iParam1 - 1;

	for (i = iParam1 - 1; i >= 0; i = i + -1)
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, i);
		unk = uParam0->[i];
		uParam0->[i] = uParam0->[randomIntInRange];
		uParam0->[randomIntInRange] = unk;
	}

	return;
}

float func_64(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, var uParam5) // Position - 0x2155 Hash - 0x564781C0 ^0x564781C0
{
	float num;
	float num2;

	if (fParam1 == fParam2)
		return fParam1;

	num = func_75() ? fParam3 : fParam4;

	if (*uParam5)
	{
		if (num + fParam0 > fParam2)
		{
			*uParam5 = 0;
			num2 = fParam2 - MISC::ABSF((num + fParam0) - fParam2);
		}
		else
		{
			num2 = num + fParam0;
		}
	}
	else if (fParam0 - num < fParam1)
	{
		*uParam5 = 1;
		num2 = fParam1 + MISC::ABSF(fParam0 - num - fParam1);
	}
	else
	{
		num2 = fParam0 - num;
	}

	return num2;
}

BOOL func_65(int iParam0) // Position - 0x21D7 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_77(iParam0);
	return num == 3 || num == 4;
}

Hash func_66(Entity eParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x21F5 Hash - 0xE9530F34 ^0x2F8E2145
{
	Hash ammoTypeForWeapon;
	Hash _int;
	float _float;
	float _float2;
	float _float3;
	int i;
	var unk;
	var propertyName;
	var propertyName2;
	Hash _int2;
	Hash _int3;

	ammoTypeForWeapon = 0;
	_int = 0;
	*uParam1 = 0;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_empty"))
		return 0;

	*uParam1 = 1;

	if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_money"))
	{
		*uParam1 = DECORATOR::DECOR_GET_INT(eParam0, "loot_money");
		DECORATOR::DECOR_REMOVE(eParam0, "loot_money");
		*uParam2 = 0;
		return joaat("currency_cash");
	}

	if (DECORATOR::DECOR_EXIST_ON(eParam0, "fLoot_money"))
	{
		*uParam3 = DECORATOR::DECOR_GET_FLOAT(eParam0, "fLoot_money");
		DECORATOR::DECOR_REMOVE(eParam0, "fLoot_money");
		*uParam2 = 0;
		return func_78(*uParam3);
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "loot_ammo", 16);

	for (i = 1; i <= 3; i = i + 1)
	{
		propertyName = { unk };
		propertyName2 = { unk };
		TEXT_LABEL_APPEND_INT(&propertyName, i, 16);
		TEXT_LABEL_APPEND_INT(&propertyName2, i, 16);
		TEXT_LABEL_APPEND_STRING(&propertyName, "_type", 16);
		TEXT_LABEL_APPEND_STRING(&propertyName2, "_amt", 16);
	
		if (DECORATOR::DECOR_EXIST_ON(eParam0, &propertyName))
		{
			_int = DECORATOR::DECOR_GET_INT(eParam0, &propertyName);
		
			if (_int != 0)
			{
				ammoTypeForWeapon = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(_int);
				DECORATOR::DECOR_REMOVE(eParam0, &propertyName);
			
				if (DECORATOR::DECOR_EXIST_ON(eParam0, &propertyName2))
				{
					*uParam1 = DECORATOR::DECOR_GET_INT(eParam0, &propertyName2);
					DECORATOR::DECOR_REMOVE(eParam0, &propertyName2);
					*uParam2 = 2;
				}
			
				return ammoTypeForWeapon;
			}
		}
	}

	if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_weapon"))
	{
		_int = DECORATOR::DECOR_GET_INT(eParam0, "loot_weapon");
	
		if (_int != 0)
		{
			DECORATOR::DECOR_REMOVE(eParam0, "loot_weapon");
			*uParam2 = 3;
			return func_79(_int);
		}
	}

	if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_type1"))
	{
		if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_amt1"))
		{
			*uParam1 = DECORATOR::DECOR_GET_INT(eParam0, "loot_item_amt1");
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_amt1");
		}
	
		if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_model1"))
		{
			*uParam4 = DECORATOR::DECOR_GET_INT(eParam0, "loot_item_model1");
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_model1");
		}
	
		if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_offset1x") && DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_offset1y") && DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_offset1z"))
		{
			_float = DECORATOR::DECOR_GET_FLOAT(eParam0, "loot_item_offset1x");
			_float2 = DECORATOR::DECOR_GET_FLOAT(eParam0, "loot_item_offset1y");
			_float3 = DECORATOR::DECOR_GET_FLOAT(eParam0, "loot_item_offset1z");
			*uParam5 = { _float, _float2, _float3 };
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_offset1x");
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_offset1y");
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_offset1z");
		}
	
		if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_orient1x") && DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_orient1y") && DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_orient1z"))
		{
			_float = DECORATOR::DECOR_GET_FLOAT(eParam0, "loot_item_orient1x");
			_float2 = DECORATOR::DECOR_GET_FLOAT(eParam0, "loot_item_orient1y");
			_float3 = DECORATOR::DECOR_GET_FLOAT(eParam0, "loot_item_orient1z");
			*uParam6 = { _float, _float2, _float3 };
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_orient1x");
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_orient1y");
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_orient1z");
		}
	
		_int2 = DECORATOR::DECOR_GET_INT(eParam0, "loot_item_type1");
		DECORATOR::DECOR_REMOVE(eParam0, "loot_item_type1");
		*uParam2 = 1;
		return _int2;
	}

	if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_type2"))
	{
		if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_amt2"))
		{
			*uParam1 = DECORATOR::DECOR_GET_INT(eParam0, "loot_item_amt2");
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_amt2");
		}
	
		if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_model2"))
		{
			*uParam4 = DECORATOR::DECOR_GET_INT(eParam0, "loot_item_model2");
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_model2");
		}
	
		if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_offset2x") && DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_offset2y") && DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_offset2z"))
		{
			_float = DECORATOR::DECOR_GET_FLOAT(eParam0, "loot_item_offset2x");
			_float2 = DECORATOR::DECOR_GET_FLOAT(eParam0, "loot_item_offset2y");
			_float3 = DECORATOR::DECOR_GET_FLOAT(eParam0, "loot_item_offset2z");
			*uParam5 = { _float, _float2, _float3 };
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_offset2x");
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_offset2y");
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_offset2z");
		}
	
		if (DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_orient2x") && DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_orient2y") && DECORATOR::DECOR_EXIST_ON(eParam0, "loot_item_orient2z"))
		{
			_float = DECORATOR::DECOR_GET_FLOAT(eParam0, "loot_item_orient2x");
			_float2 = DECORATOR::DECOR_GET_FLOAT(eParam0, "loot_item_orient2y");
			_float3 = DECORATOR::DECOR_GET_FLOAT(eParam0, "loot_item_orient2z");
			*uParam6 = { _float, _float2, _float3 };
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_orient2x");
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_orient2y");
			DECORATOR::DECOR_REMOVE(eParam0, "loot_item_orient2z");
		}
	
		_int3 = DECORATOR::DECOR_GET_INT(eParam0, "loot_item_type2");
		DECORATOR::DECOR_REMOVE(eParam0, "loot_item_type2");
		*uParam2 = 1;
		return _int3;
	}

	return 0;
}

BOOL func_67(Hash hParam0, int iParam1) // Position - 0x2623 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

void func_68(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, Hash hParam8, var uParam9, var uParam10, var uParam11) // Position - 0x263D Hash - 0x68B0C33C ^0x43F64BDF
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (uParam0->f_103[i /*5*/] == -1)
		{
			uParam0->f_103[i /*5*/] = uParam1;
			uParam0->f_103[i /*5*/].f_3 = hParam8;
			uParam0->f_103[i /*5*/].f_1 = uParam9;
			uParam0->f_103[i /*5*/].f_2 = uParam10;
			uParam0->f_103[i /*5*/].f_4 = uParam11;
		
			if (!_IS_NULL_VECTOR(uParam2))
				uParam0->f_37[i /*3*/] = { uParam2 };
		
			if (!_IS_NULL_VECTOR(uParam5))
				uParam0->f_68[i /*3*/] = { uParam5 };
		
			break;
		}
	}

	return;
}

float func_69() // Position - 0x26D5 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_70(var uParam0, int iParam1) // Position - 0x2707 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_71(var uParam0, int iParam1) // Position - 0x2718 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_72(int iParam0, int iParam1) // Position - 0x272D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_73(var uParam0) // Position - 0x273C Hash - 0x39705408 ^0x39705408
{
	return func_72(*uParam0, 2);
}

char* func_74(var uParam0, int iParam1) // Position - 0x274C Hash - 0xB56546C0 ^0x942A20A1
{
	switch (uParam0->f_8)
	{
		case -1:
			return "";
	
		case 0:
			return "Root_p_CHEST_MED";
	
		case 1:
			return "Root_p_CHEST_LRG";
	
		case 2:
		case 3:
			return "p_CUPBOARDS_NARROW_TalL";
	
		case 4:
			return "p_CUPBOARDS_WIDE_TalL";
	
		case 5:
			return "p_CUPBOARDS_NARROW_MedL";
	
		case 6:
			return "p_CUPBOARDS_NARROW_LowL";
	
		case 7:
			return "p_CUPBOARDS_NARROW_LowL";
	
		case 8:
			return "p_CUPBOARDS_NARROW_LowR";
	
		case 9:
			return "p_CUPBOARDS_WIDE_MedL";
	
		case 10:
			return "p_CUPBOARDS_WIDE_LowL";
	
		case 11:
			return "p_CUPBOARDS_WIDE_LowL";
	
		case 12:
			return "p_CUPBOARDS_WIDE_LowR";
	
		case 13:
			return "Root_p_LOCKBOX_LRG";
	
		case 14:
			return "Root_p_LOCKBOX_MED";
	
		case 15:
			return "Root_p_LOCKBOX_SML";
	
		case 16:
			return func_81(iParam1);
	
		case 17:
			return func_81(iParam1);
	}

	return "";
}

BOOL func_75() // Position - 0x288C Hash - 0xEE877ACE ^0xCCE9C802
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
		return true;

	return false;
}

var func_76(BOOL bParam0, var uParam1, var uParam2) // Position - 0x28AD Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_77(int iParam0) // Position - 0x28C4 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_82(iParam0))
		return -1;

	return func_83(iParam0);
}

Hash func_78(var uParam0) // Position - 0x28E0 Hash - 0x54008D23 ^0xC03DD4C8
{
	int num;
	float randomFloatInRange;

	randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(0, 1065353216);
	randomFloatInRange = randomFloatInRange + uParam0;

	if (randomFloatInRange > 0.75f)
		num = joaat("money_billstack");
	else if (randomFloatInRange > 0.5f)
		num = joaat("money_moneyclip");
	else if (randomFloatInRange > 0.25f)
		num = joaat("money_coinpurse");
	else
		num = joaat("money_coin");

	return num;
}

Hash func_79(Hash hParam0) // Position - 0x2943 Hash - 0x4783D617 ^0x244410F7
{
	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return hParam0;

	return 0;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x295A Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

char* func_81(int iParam0) // Position - 0x2984 Hash - 0xE6862179 ^0xCDF3BFD3
{
	switch (iParam0)
	{
		case 0:
			return "p_DRAWER_SGL_Drawer1";
	
		case 1:
			return "p_DRAWER_SGL_Drawer2";
	
		case 2:
			return "p_DRAWER_SGL_Drawer3";
	
		case 3:
			return "p_DRAWER_SGL_Drawer4";
	
		case 4:
			return "p_DRAWER_DBL_Drawer1_NUB";
	
		case 5:
			return "p_DRAWER_DBL_Drawer2_NUB";
	
		case 6:
			return "p_DRAWER_DBL_Drawer3_NUB";
	
		case 7:
			return "p_DRAWER_DBL_Drawer4_NUB";
	}

	return "";
}

BOOL func_82(int iParam0) // Position - 0x2A18 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_83(int iParam0) // Position - 0x2A4B Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_84(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

int func_84(int iParam0) // Position - 0x2A8C Hash - 0x6EC15CF9 ^0xE613EBE0
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

