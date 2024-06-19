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
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	Hash hScriptParam_0 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x361BDFCB ^0xD389A741
{
	var unk;
	int eventData;
	BOOL pedCrouchMovement;
	BOOL flag;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_1(&unk);
	func_2();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
		func_3(&unk);

	func_4(true);
	func_5();
	func_6();

	while (Global_1940085.f_80.f_4)
	{
		func_6();
		BUILTIN::WAIT(0);
	}

	func_7(1);
	pedCrouchMovement = PED::GET_PED_CROUCH_MOVEMENT(Global_33);
	flag = func_8(2);

	while (true)
	{
		if (PED::IS_PED_FALLING(Global_33) || PED::IS_PED_FALLING_OVER(Global_33) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::GET_PLAYER_INDEX(), true) || PED::IS_PED_HOGTIED(Global_33))
			func_9(false, 0);
	
		HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(0);
	
		if (PED::GET_PED_CROUCH_MOVEMENT(Global_33) != pedCrouchMovement && !Global_1940252.f_7 && func_10(Global_1940252.f_11588, 1224357681) != 0)
		{
			func_11(func_10(Global_1940252.f_11588, 1224357681));
			pedCrouchMovement = !pedCrouchMovement;
		}
	
		if (flag && !func_12(Global_33))
		{
			func_5();
			func_4(true);
			func_6();
			flag = false;
		}
	
		if (Global_1940252.f_5)
		{
			func_13();
			func_14();
			func_15(Global_1940252.f_11587);
		
			if (Global_1940252.f_37 != 0)
				func_11(Global_1940252.f_37);
		
			func_2();
		
			if (Global_1940252.f_11596 != 0 && !func_16())
				if (func_17(Global_1940252.f_11588, 0))
					func_18(Global_1940252.f_11596, &(eventData.f_3), 0);
				else if (func_17(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(eventData.f_3, "item"), 0) && func_19(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(eventData.f_3, "item"), 1816455607))
					func_18(Global_1940252.f_11596, &(eventData.f_3), 1);
				else
					func_20(Global_1940252.f_36, &(eventData.f_3));
		
			Global_1940252.f_5 = 0;
			Global_1940252.f_37 = 0;
		}
	
		func_21();
	
		if (func_22(&(eventData.f_3)))
		{
			if (func_17(Global_1940252.f_11588, 0) || func_23(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940252.f_11613, Global_1940252.f_11596), "label")))
				func_18(Global_1940252.f_11596, &(eventData.f_3), 0);
			else if (func_17(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(eventData.f_3, "item"), 0) && func_19(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(eventData.f_3, "item"), 1816455607))
				func_18(Global_1940252.f_11596, &(eventData.f_3), 1);
			else
				func_20(Global_1940252.f_36, &(eventData.f_3));
		
			func_2();
			func_24(0);
			Global_1940252.f_7 = 0;
		}
	
		while (UIEVENTS::EVENTS_UI_IS_PENDING(hScriptParam_0))
		{
			if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(hScriptParam_0, &eventData))
			{
				Global_1940252.f_7 = 0;
			
				switch (eventData)
				{
					case -2075827635:
						func_7(8);
						UIEVENTS::EVENTS_UI_POP_MESSAGE(hScriptParam_0);
						break;
				
					case -1740156697:
						Global_1940252.f_11596 = eventData.f_1;
					
						if (!func_16())
						{
							switch (eventData.f_2)
							{
								case joaat("folder_item"):
									ATTRIBUTE::STOP_ITEM_PREVIEW();
								
									if (Global_1940252.f_11647 != 0)
										break;
								
									func_20(eventData.f_1, &(eventData.f_3));
									break;
							
								case joaat("usable_item"):
								case 1086195311:
									ATTRIBUTE::STOP_ITEM_PREVIEW();
									func_18(eventData.f_1, &(eventData.f_3), 0);
									break;
							
								case -1287062382:
									func_25(eventData.f_1, &(eventData.f_3));
									break;
							}
						}
						else
						{
							func_2();
							ATTRIBUTE::STOP_ITEM_PREVIEW();
						}
					
						func_26();
						func_27(eventData.f_2);
						func_7(2);
						UIEVENTS::EVENTS_UI_POP_MESSAGE(hScriptParam_0);
						break;
				
					case -1203660660:
						switch (eventData.f_2)
						{
							case joaat("usable_item"):
							case joaat("BREAKABLE_ITEM"):
							case 1086195311:
								if (func_29() || func_30())
								{
									if (func_31(Global_1940252.f_11588, false, 0, 0, true, false, false))
										func_9(false, 0);
								}
								else if (func_32())
								{
								}
								else if (!func_33(false))
								{
									func_34(&(eventData.f_3));
								}
							
								func_7(4);
								break;
						
							case joaat("DROP_ITEM"):
								func_35(Global_1940252.f_11588, 1);
								break;
						
							case joaat("DISCARD_ALL"):
								if (func_33(false))
									func_7(32);
								else
									func_36(Global_1940252.f_11588);
								break;
						
							case joaat("SEND_ALL"):
								func_7(64);
								break;
						}
					
						UIEVENTS::EVENTS_UI_POP_MESSAGE(hScriptParam_0);
						break;
				
					case -722926211:
					case 703281244:
						func_28();
						func_2();
						ATTRIBUTE::STOP_ITEM_PREVIEW();
						UIEVENTS::EVENTS_UI_POP_MESSAGE(hScriptParam_0);
						break;
				
					case 922460030:
						func_7(16);
						UIEVENTS::EVENTS_UI_POP_MESSAGE(hScriptParam_0);
						break;
				
					default:
						UIEVENTS::EVENTS_UI_POP_MESSAGE(hScriptParam_0);
						break;
				}
			}
		}
	
		BUILTIN::WAIT(0);
	}

	func_3(&unk);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

int func_1(var uParam0) // Position - 0x47F Hash - 0x9463FF45 ^0x9463FF45
{
	if (func_37() == -1)
		func_38();

	Global_1913580[0 /*11*/] = 0;
	func_39(uParam0);
	return 1;
}

void func_2() // Position - 0x4A3 Hash - 0x865A29E0 ^0x1BEB75DC
{
	if (func_16())
	{
		ATTRIBUTE::STOP_ITEM_PREVIEW();
		INVENTORY::_0x75CFAC49301E134F(Global_1940252.f_11627, false, false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940252.f_11618, func_40(Global_1940252.f_11587));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940252.f_11620, func_41(Global_1940252.f_11587));
		func_42();
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11640, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11636, false);
	
		if (func_33(false) || func_43())
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11622, "");
	
		if (func_44(29))
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, HUD::GET_STRING_FROM_HASH_KEY(818738914));
		else
			func_45(Global_1940252.f_11587);
	}

	return;
}

void func_3(var uParam0) // Position - 0x557 Hash - 0x372B2C55 ^0x8BA24157
{
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	Global_1940252.f_7 = 0;
	Global_1940252.f_41 = 0;
	Global_1940252.f_36 = -1;
	Global_1940252.f_37 = 0;
	Global_1940252.f_11592 = 0;
	Global_1940252.f_11591 = 0;
	func_46(822208792);
	func_47(0);
	func_48(0);
	func_49(uParam0);

	if (!TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_33))
		func_50(0);

	func_51(1);
	func_52();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_4(BOOL bParam0) // Position - 0x5C6 Hash - 0x31286532 ^0xB518335A
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	func_53();
	flag = func_54(1);

	if (func_56(1, &func_55) != flag)
		if (!Global_1940085.f_80.f_1)
			Global_1940085.f_80.f_1 = 1;

	flag = func_54(2);

	if (func_56(2, &func_57) != flag)
		if (!Global_1940085.f_80.f_1)
			Global_1940085.f_80.f_1 = 1;

	flag = func_54(65536);

	if (func_56(65536, &func_58) != flag)
		if (!Global_1940085.f_80.f_1)
			Global_1940085.f_80.f_1 = 1;

	flag = func_54(1048576);

	if (func_56(1048576, &func_59) != flag)
		if (!Global_1940085.f_80.f_1)
			Global_1940085.f_80.f_1 = 1;

	flag = func_54(4) || func_54(8);

	if (!func_60())
	{
		func_61(4);
		func_61(8);
		flag = false;
	}
	else
	{
		flag2 = false;
		flag3 = 0;
	
		if (func_62(81053684) || func_63(4))
			func_61(4);
		else
			flag2 = true;
	
		if (func_62(-525676072) || func_63(8))
			func_61(8);
		else
			flag3 = 1;
	
		if (flag2 || flag3)
		{
			if (func_65(false, func_64()))
			{
				if (!flag)
					Global_1940085.f_80.f_1 = 1;
			
				if (flag2)
					func_66(4);
			
				if (flag3)
					func_66(8);
			}
			else
			{
				func_61(4);
				func_61(8);
			
				if (flag)
					Global_1940085.f_80.f_1 = 1;
			}
		}
	}

	flag = func_54(16);

	if (func_56(16, &func_67) != flag)
		if (!Global_1940085.f_80.f_1)
			Global_1940085.f_80.f_1 = 1;

	flag = func_54(256);

	if (func_56(256, &func_68) != flag)
		if (!Global_1940085.f_80.f_1)
			Global_1940085.f_80.f_1 = 1;

	flag = func_54(512);

	if (func_56(512, &func_69) != flag)
		if (!Global_1940085.f_80.f_1)
			Global_1940085.f_80.f_1 = 1;

	flag = func_54(2097152);

	if (func_56(2097152, &func_70) != flag)
		if (!Global_1940085.f_80.f_1)
			Global_1940085.f_80.f_1 = 1;

	flag = func_54(1024);

	if (func_56(1024, &func_71) != flag)
		if (!Global_1940085.f_80.f_1)
			Global_1940085.f_80.f_1 = 1;

	if (func_72() || func_73() || func_74() || func_75() || func_76() || bParam0)
	{
		flag = func_54(8192);
	
		if (func_56(8192, &func_77) != flag)
			if (!Global_1940085.f_80.f_1)
				Global_1940085.f_80.f_1 = 1;
	
		flag = func_54(64);
	
		if (func_56(64, &func_78) != flag)
			if (!Global_1940085.f_80.f_1)
				Global_1940085.f_80.f_1 = 1;
	
		flag = func_54(131072);
	
		if (func_56(131072, &func_78) != flag)
			if (!Global_1940085.f_80.f_1)
				Global_1940085.f_80.f_1 = 1;
	
		flag = func_54(32);
	
		if (func_56(32, &func_79) != flag)
			if (!Global_1940085.f_80.f_1)
				Global_1940085.f_80.f_1 = 1;
	
		flag = func_54(128);
	
		if (func_56(128, &func_80) != flag)
			if (!Global_1940085.f_80.f_1)
				Global_1940085.f_80.f_1 = 1;
	
		flag = func_54(262144);
	
		if (func_56(262144, &func_81) != flag)
			if (!Global_1940085.f_80.f_1)
				Global_1940085.f_80.f_1 = 1;
	
		flag = func_54(2048);
	
		if (func_56(2048, &func_82) != flag)
			if (!Global_1940085.f_80.f_1)
				Global_1940085.f_80.f_1 = 1;
	
		flag = func_54(32768);
	
		if (func_56(32768, &func_83) != flag)
			if (!Global_1940085.f_80.f_1)
				Global_1940085.f_80.f_1 = 1;
	
		flag = func_54(4096);
	
		if (func_56(4096, &func_84) != flag)
			if (!Global_1940085.f_80.f_1)
				Global_1940085.f_80.f_1 = 1;
	
		flag = func_54(524288);
	
		if (func_56(524288, &func_85) != flag)
			if (!Global_1940085.f_80.f_1)
				Global_1940085.f_80.f_1 = 1;
	}

	func_86();
	return;
}

void func_5() // Position - 0xA46 Hash - 0x74108BFE ^0x4CB02429
{
	Global_1940085.f_80.f_4 = 0;
	Global_1940085.f_80 = 0;
	return;
}

void func_6() // Position - 0xA5E Hash - 0x61155FAF ^0xD3A8B09D
{
	BOOL flag;

	if (MISC::GET_FRAME_COUNT() % 3 == 0 || Global_1940085.f_80)
		if (func_76() || func_72() || func_73() || func_74() || func_75())
			flag = true;

	if (!Global_1940085.f_80.f_4 && !Global_1940085.f_80)
	{
		if (flag)
		{
			Global_1940085.f_80.f_4 = 1;
			Global_1940085.f_80 = 0;
			Global_1940085.f_80.f_3 = MISC::GET_FRAME_COUNT();
		}
	}

	if (Global_1940085.f_80.f_4 || Global_1940085.f_80)
	{
		if (!Global_1940085.f_80)
		{
			if (Global_1940085.f_80.f_4)
			{
				if (func_87())
				{
					Global_1940085.f_80.f_4 = 0;
					Global_1940085.f_80 = 1;
				
					if (Global_1940085.f_80.f_1)
						func_88(1, true, 0);
				
					Global_1940085.f_80.f_1 = 0;
					Global_1940085.f_80.f_2 = 0;
					Global_1940085.f_80.f_3 = MISC::GET_FRAME_COUNT();
				}
			}
		}
		else if (!flag)
		{
			if (func_52())
			{
				Global_1940085.f_80 = 0;
				Global_1940085.f_80.f_1 = 0;
				Global_1940085.f_80.f_2 = 0;
			}
		}
		else
		{
			Global_1940085.f_80.f_3 = MISC::GET_FRAME_COUNT();
		}
	}

	return;
}

void func_7(int iParam0) // Position - 0xB93 Hash - 0x3A524DDA ^0x3A524DDA
{
	Global_1940252.f_11561 = Global_1940252.f_11561 || iParam0;
	return;
}

BOOL func_8(int iParam0) // Position - 0xBAC Hash - 0xA059D395 ^0xE5C5C571
{
	return func_89(Global_1940085.f_7, iParam0);
}

void func_9(BOOL bParam0, int iParam1) // Position - 0xBC0 Hash - 0xCC16269 ^0xB563FF97
{
	if (bParam0)
	{
		Global_1940252 = 1;
		Global_1940252.f_1 = iParam1;
	}
	else
	{
		Global_1940252 = 2;
	}

	return;
}

int func_10(Hash hParam0, int iParam1) // Position - 0xBE2 Hash - 0x7A1C2599 ^0xFF9B5634
{
	var outData;
	int outIndex;
	int i;

	outData = 20;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(hParam0, &outData, &outIndex, 20))
	{
		for (i = 0; i < outIndex; i = i + 1)
		{
			if (outData[i /*2*/].f_1 == iParam1)
				return outData[i /*2*/];
		}
	}

	return 0;
}

void func_11(Hash hParam0) // Position - 0xC2C Hash - 0x225824D2 ^0xD7209937
{
	int num;

	num = hParam0;
	Global_1940252.f_11595 = 0;
	func_91(&Global_1940252.f_11578[func_90(Global_1940252.f_11587) /*2*/], hParam0);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1940252.f_11614, Global_1940252.f_11595);
	func_92(Global_1940252.f_36);
	Global_1940252.f_11586 = num;
	return;
}

BOOL func_12(Ped pedParam0) // Position - 0xC7F Hash - 0x8F7DFED5 ^0x8768F0B4
{
	var lootTarget;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 0, &lootTarget, 1, 1) != 0)
		return true;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 2, &lootTarget, 1, 1) != 0)
		return true;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 1, &lootTarget, 1, 1) != 0)
		return true;

	if (PED::_0x758F081DB204DDDE(pedParam0))
		return true;

	return false;
}

void func_13() // Position - 0xCE9 Hash - 0xE90766CA ^0x6950FBA3
{
	int num;
	Any dataContainerFromPath;
	BOOL flag;

	Global_1940252.f_11595 = 0;

	if (Global_1940252.f_11586 != -1)
	{
		num = Global_1940252.f_11586;
		func_91(&Global_1940252.f_11578[func_90(Global_1940252.f_11587) /*2*/], num);
		DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1940252.f_11614, Global_1940252.f_11595);
	}

	dataContainerFromPath = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("Satchel");
	flag = Global_1940252.f_11595 <= 0;
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(dataContainerFromPath, "FolderEmpty", flag);
	return;
}

BOOL func_14() // Position - 0xD59 Hash - 0x4FDE2EAA ^0x1BBB2470
{
	if (func_93() || func_95(Global_33, func_94(7), true) || !(func_96(7) || func_97(7)) && func_33(false))
		return func_98(0, joaat("SLOTID_NONE")) && func_98(1, 724026534);

	return func_98(0, joaat("SLOTID_NONE"));
}

void func_15(int iParam0) // Position - 0xDC5 Hash - 0x6841FE97 ^0x6841FE97
{
	func_99(0);
	Global_1940252.f_11644 = iParam0;
	return;
}

BOOL func_16() // Position - 0xDDB Hash - 0x10E0BCB0 ^0x7BFFAF2
{
	return Global_1940252.f_41.f_203 <= 0;
}

BOOL func_17(Hash hParam0, int iParam1) // Position - 0xDED Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

void func_18(int iParam0, var uParam1, int iParam2) // Position - 0xE07 Hash - 0xB2CF128F ^0xC79899E1
{
	Hash hash;
	Any dataContainerFromChildIndex;

	func_100(iParam2);

	if (func_22(uParam1))
	{
		func_24(0);
	
		if (Global_1940252.f_7)
		{
			dataContainerFromChildIndex = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940252.f_11614, Global_1940252.f_11596);
			hash = func_101(&dataContainerFromChildIndex);
		}
		else
		{
			dataContainerFromChildIndex = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940252.f_11613, Global_1940252.f_11596);
		}
	
		if (!func_17(hash, 0))
			hash = func_102(dataContainerFromChildIndex);
	}
	else
	{
		if (Global_1940252.f_7)
			hash = func_101(uParam1);
	
		if (!func_17(hash, 0))
			hash = func_102(*uParam1);
	}

	func_103(hash, uParam1);
	func_104(0, hash);
	func_100(0);
	func_92(iParam0);
	return;
}

BOOL func_19(Hash hParam0, Hash hParam1) // Position - 0xEB4 Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_17(hParam0, 0))
		return func_106(func_105(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

void func_20(int iParam0, var uParam1) // Position - 0xEF5 Hash - 0x235DFF4D ^0xE74B9E99
{
	Hash hash;
	Hash hash2;
	Hash hash3;
	var unk;
	const char* str;
	int num;

	Global_1940252.f_36 = iParam0;
	hash = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam1, "label");
	func_107(hash, uParam1);
	hash2 = hash;

	if (Global_1940252.f_11587 == 1061777683 && hash2 == 1816455607)
		func_108();
	else
		func_11(hash2);

	if (func_17(Global_1940252.f_11588, 0) || func_23(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940252.f_11613, Global_1940252.f_11596), "label")))
	{
		if (Global_1940252.f_11587 == 1783698482 || func_19(Global_1940252.f_11588, 474910316))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, "");
			func_109(Global_1940252.f_11588, joaat("ANTIQUE_BOTTLES"));
			func_109(Global_1940252.f_11588, joaat("Arrowheads"));
			func_109(Global_1940252.f_11588, joaat("BIRD_EGGS"));
			func_109(Global_1940252.f_11588, joaat("coins"));
			func_109(Global_1940252.f_11588, joaat("FAMILY_HEIRLOOMS"));
			func_109(Global_1940252.f_11588, joaat("LOST_JEWELRY_BRACELETS"));
			func_109(Global_1940252.f_11588, joaat("LOST_JEWELRY_EARRINGS"));
			func_109(Global_1940252.f_11588, joaat("LOST_JEWELRY_NECKLACES"));
			func_109(Global_1940252.f_11588, joaat("LOST_JEWELRY_RINGS"));
			func_109(Global_1940252.f_11588, joaat("TAROT_CARDS_CUPS"));
			func_109(Global_1940252.f_11588, joaat("TAROT_CARDS_PENTACLES"));
			func_109(Global_1940252.f_11588, joaat("TAROT_CARDS_SWORDS"));
			func_109(Global_1940252.f_11588, joaat("TAROT_CARDS_WANDS"));
			func_109(Global_1940252.f_11588, joaat("WILD_FLOWERS"));
			func_109(Global_1940252.f_11588, 773314749);
			func_109(Global_1940252.f_11588, -246025274);
			func_109(Global_1940252.f_11588, -41527693);
		}
	}
	else if (Global_1940252.f_11587 == 1783698482 || Global_1940252.f_11587 == -693134279)
	{
		hash3 = hash;
	
		if (hash3 != 0)
		{
			if (Global_1940252.f_11587 != -693134279)
				func_110();
		
			unk.f_2 = 5;
			unk.f_18 = 8;
			func_111(hash3, &unk);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940252.f_11620, unk.f_1);
		
			if (!func_33(false) && hash3 == STATS::WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD(joaat("FEATURE_PM_WEEKLY_COLLECTIBLES"), 0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11630, false);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11631, false);
			}
		}
	}
	else if (hash == 1816455607)
	{
		if (func_112(2097152))
		{
			num = func_113();
			str = MISC::VAR_STRING(2, "SATCHEL_TIP_MISSION_DROP_FOLDER", num);
		}
		else if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		{
			str = MISC::VAR_STRING(2, "SATCHEL_TIP_MISSION_DROP_FOLDER_UNAVAILABLE_POSSE");
		}
		else if (PED::IS_PED_ON_MOUNT(Global_33))
		{
			str = MISC::VAR_STRING(2, "SATCHEL_TIP_MISSION_DROP_FOLDER_UNAVAILABLE_HORSE");
		}
		else
		{
			str = MISC::VAR_STRING(2, "SATCHEL_TIP_MISSION_DROP_FOLDER_UNAVAILABLE");
		}
	
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, str);
	}

	return;
}

void func_21() // Position - 0x11DF Hash - 0xB596CF2D ^0x48A3B0D7
{
	int num;
	var unk;
	var unk3;

	num = Global_1940252.f_11644;

	if (num == 822208792)
		return;

	unk = { Global_1940252.f_11578[Global_1940252.f_11585 /*2*/] };
	unk3.f_9 = joaat("SLOTID_NONE");

	switch (Global_1940252.f_11645)
	{
		case 0:
			if (!func_114())
				func_115(0);
		
			Global_1940252.f_11594 = 0;
			Global_1940252.f_41.f_203 = 0;
		
			if (Global_1940252.f_11597)
			{
				DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1940252.f_11613, Global_1940252.f_11594);
				Global_1940252.f_11597 = 0;
			}
		
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940252.f_11624, func_40(num));
		
			if (!func_33(false) && !func_43())
				func_116(func_90(num), &unk, &unk3, num);
		
			func_117();
		
			if (Global_1940252.f_11587 == -283002878)
			{
				func_118();
			}
			else if (Global_1940252.f_11587 == -889932290)
			{
				func_119();
			}
			else if (Global_1940252.f_11587 == -693134279)
			{
				func_120();
			}
			else
			{
				if (Global_1940252.f_11587 == -182626652 || Global_1940252.f_11587 == 1783698482)
					if (Global_1915656.f_20241 == 38 || Global_1915656.f_20241 == 2 && func_33(false))
						func_120();
			
				func_99(1);
				Global_1940252.f_11646 = unk;
				return;
			}
		
			DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1940252.f_11613, Global_1940252.f_11594);
			func_92(0);
			Global_1940252.f_11644 = 822208792;
			func_99(0);
			break;
	
		case 1:
			if (func_121(func_90(num), &unk, &unk3, num))
			{
				func_99(2);
				Global_1940252.f_11646 = unk;
			}
			break;
	
		case 2:
			if (Global_1940252.f_11587 == -182626652 && Global_1915656.f_20241 == 10 || Global_1915656.f_20241 == 16 || Global_1915656.f_20241 == 15 || Global_1915656.f_20241 == 29 || Global_1940252.f_11587 == -693134279 && Global_1915656.f_20241 == 2)
			{
				if (func_93())
				{
					unk = { Global_1940252.f_11578[1 /*2*/] };
				
					if (!func_121(1, &unk, &unk3, num))
						return;
				}
				else if (func_122())
				{
					unk = { Global_1940252.f_11578[2 /*2*/] };
				
					if (!func_121(2, &unk, &unk3, num))
						return;
				}
			}
		
			func_123();
			func_118();
			func_119();
			func_124();
			DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1940252.f_11613, Global_1940252.f_11594);
			func_92(0);
			Global_1940252.f_11644 = 822208792;
			func_99(0);
			break;
	}

	return;
}

BOOL func_22(var uParam0) // Position - 0x14AB Hash - 0x3222A9F ^0xD1819498
{
	Hash hash;
	Any dataContainerFromChildIndex;
	Hash hash2;
	Hash hash3;

	if (Global_1940252.f_11)
		return true;

	if (MISC::GET_FRAME_COUNT() % 10 == 0)
	{
		hash = func_102(*uParam0);
		dataContainerFromChildIndex = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940252.f_11613, Global_1940252.f_11596);
		hash2 = func_102(dataContainerFromChildIndex);
	
		if (Global_1940252.f_7)
		{
			dataContainerFromChildIndex = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940252.f_11614, Global_1940252.f_11596);
			hash3 = func_101(&dataContainerFromChildIndex);
		
			if (func_17(hash3, 0))
				return func_101(uParam0) != hash3;
		}
	
		if (func_17(hash, 0) && func_17(hash2, 0))
		{
			if (hash != hash2)
				return true;
		
			if (hash2 != Global_1940252.f_11588)
				return true;
		}
	}

	return false;
}

BOOL func_23(Hash hParam0) // Position - 0x155D Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

void func_24(int iParam0) // Position - 0x1569 Hash - 0x29A8F290 ^0x82294867
{
	Global_1940252.f_11 = iParam0;
	return;
}

void func_25(int iParam0, var uParam1) // Position - 0x1579 Hash - 0x39729151 ^0x39729151
{
	if (iParam0 != Global_1940252.f_11585)
		func_125(iParam0, uParam1);

	return;
}

void func_26() // Position - 0x1595 Hash - 0x2E2A822C ^0xC16D9339
{
	int i;
	int num;
	Hash dataContainerFromChildIndex;
	int num2;
	int num3;

	if (Global_1940252.f_11647 == 0)
		return;

	num2 = Global_1940252.f_11594;

	for (i = 0; i < num2; i = i + 1)
	{
		dataContainerFromChildIndex = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940252.f_11613, i);
	
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(dataContainerFromChildIndex))
		{
			num3 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(dataContainerFromChildIndex, "label");
		
			if (num3 == Global_1940252.f_11647)
			{
				num = 1;
				func_20(i, &dataContainerFromChildIndex);
				UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(joaat("satchel"), joaat("to_folder"));
				break;
			}
		}
	}

	Global_1940252.f_11647 = 0;
	return;
}

void func_27(int iParam0) // Position - 0x161A Hash - 0xBF476A51 ^0x9D82F3C8
{
	if (iParam0 != joaat("folder_item"))
		Global_1940252.f_11586 = -1;

	return;
}

void func_28() // Position - 0x1634 Hash - 0xA502F211 ^0xA502F211
{
	int num;

	num = Global_1940252.f_11563;
	func_126(num);
	return;
}

BOOL func_29() // Position - 0x164B Hash - 0x776DDE2 ^0x628739AB
{
	if (func_127(Global_33, 0))
		if (PED::IS_PED_USING_SCENARIO_HASH(Global_33, joaat("PROP_PLAYER_OPEN_CASHBOX")))
			return true;

	return false;
}

BOOL func_30() // Position - 0x1672 Hash - 0x85414BC8 ^0x5EF38AB5
{
	if (Global_1940252.f_39 == 3)
		return true;

	return false;
}

BOOL func_31(Hash hParam0, BOOL bParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1689 Hash - 0xDA2A1E8C ^0x19FF9E67
{
	int num;
	var unk10;
	Hash scriptHash;
	var unk26;
	BOOL flag;
	BOOL num2;
	BOOL flag2;
	BOOL flag3;
	Hash hash;

	if (func_30())
	{
		Global_1940252.f_11589 = hParam0;
		func_128(hParam0, 1, -142743235, 0, false);
		return false;
	}

	if (!func_129(hParam0, bParam4))
		return false;

	if (func_130(hParam0))
		return false;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 108107462))
		return false;

	flag = true;
	num2 = 1;
	num.f_4 = iParam3;
	num.f_5 = 1;

	if (hParam0 == -418848773)
		UIAPPS::LAUNCH_UIAPP_WITH_ENTRY("player_menu", "mp_moonshine_selection");

	if (func_131(hParam0))
	{
		Global_1913442 = hParam0;
		Global_1913633 = MISC::GET_GAME_TIMER();
		Global_1913443 = MISC::GET_GAME_TIMER() + 3000;
		return true;
	}

	if (func_19(hParam0, -2081717885))
		func_132(hParam0, unk10, num, unk26, flag, num2);
	else if (func_19(hParam0, -1909684001))
		func_133(hParam0, unk10, num, flag, num2);
	else if (func_19(hParam0, 587975446))
		func_134(hParam0, unk10);
	else if (func_19(hParam0, 566155764))
		if (!func_135(hParam0))
			return false;

	if (func_136(hParam0))
	{
		Global_1913442 = hParam0;
		Global_1913633 = MISC::GET_GAME_TIMER();
		return true;
	}

	if (func_137(hParam0, bParam5, bParam6, bParam1))
	{
		Global_1913442 = hParam0;
		Global_1913633 = MISC::GET_GAME_TIMER();
		return true;
	}

	if (func_19(hParam0, -1227898937))
	{
		num.f_2 = hParam0;
		unk10 = { num };
		TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "doc_newspaper", 32);
		unk10.f_14 = 1024;
		unk10.f_15 = 1;
		func_138(unk10, 1);
		num2 = 0;
		flag = false;
	}
	else if (func_19(hParam0, -1472964441) || func_19(hParam0, -228153877) || func_19(hParam0, 566155764))
	{
	}
	else if (func_19(hParam0, 1919582297))
	{
		if (func_139() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) || TASK::IS_PED_EXITING_SCENARIO(Global_33, true) || !PED::IS_PED_ON_FOOT(Global_33))
			return false;
	
		switch (hParam0)
		{
			case joaat("consumable_predator_bait"):
			case joaat("consumable_potent_predator_bait"):
				TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "item_bait_predator", 32);
				break;
		
			case -252071901:
				TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "item_legendary_animal_pheromone", 32);
				break;
		
			case joaat("consumable_herbivore_bait"):
			case joaat("consumable_potent_herbivore_bait"):
				TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "item_bait_herbivore", 32);
				break;
		}
	
		num.f_1 = hParam0;
		num.f_3 = bParam1;
		unk10 = { num };
		unk10.f_14 = 512;
		unk10.f_15 = 1;
		func_138(unk10, 0);
		flag = false;
	}
	else if (func_140(hParam0))
	{
		num.f_3 = 0;
		num.f_1 = hParam0;
		num.f_2 = 0;
		num = func_141(Global_1072759.f_28313.f_25.f_67);
		unk10 = { num };
		TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "net_player_wheel_item_use", 32);
		unk10.f_14 = 512;
		unk10.f_15 = 1;
		func_138(unk10, 0);
		num2 = 1;
	}
	else if (func_142(hParam0) == joaat("CLOTHING"))
	{
		if (!func_143(hParam0))
		{
			func_144("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, true);
			return num2;
		}
	
		hash = func_145(hParam0);
	
		switch (hash)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				flag2 = func_146();
				break;
		
			default:
				flag2 = true;
				break;
		}
	
		if (!flag2)
		{
			if (func_147(PLAYER::PLAYER_ID()))
				func_144("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, true);
			else
				func_144("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, true);
		
			return num2;
		}
	
		if (hash == -999503751)
		{
			if (Global_1953292.f_1676 != hParam0)
				func_148(20, hParam0, 0, 0, false);
		}
		else
		{
			switch (hash)
			{
				case -2061583405:
					func_150(hParam0);
					func_148(35, 0, 0, 0, false);
					return true;
			
				case -1719060085:
					if (hParam0 == Global_1953292.f_1676.f_1[23 /*3*/])
					{
						func_151(Global_33, 260271636, 0, -358215195, true, true, true, true, false, true, true, false);
						PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayUnequipGlovesFidget", true, 15);
						func_152(hParam0, false, false);
						return true;
					}
					else
					{
						PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayEquipGlovesFidget", true, 15);
						func_152(hParam0, true, false);
					}
					break;
			
				case -525676072:
				case -68128151:
				case 81053684:
					func_149(hParam0, false);
					return num2;
			
				case 119907797:
				case 1388798186:
					if (hParam0 == Global_1953292.f_1676.f_1[10 /*3*/])
					{
						func_151(Global_33, Global_1953292.f_83[10 /*12*/], 0, -358215195, true, true, true, true, false, true, true, false);
						func_152(hParam0, false, false);
						return true;
					}
					else
					{
						func_152(hParam0, true, false);
						func_153(-2061583405, false);
					
						if (hash == 1388798186)
							func_153(119907797, false);
						else if (hash == 119907797)
							func_153(1388798186, false);
					}
					break;
			
				default:
					if (!func_19(hParam0, 160827531))
						break;
				
					func_149(hParam0, false);
					break;
			}
		
			func_151(Global_33, hParam0, 0, -358215195, true, true, true, false, false, true, true, false);
		}
	}
	else
	{
		switch (hParam0)
		{
			case joaat("kit_shaving_kit"):
				break;
		
			case joaat("upgrade_upg_mortar_pestle"):
			case -1448210800:
				func_165(true);
				break;
		
			case joaat("kit_camp"):
			case joaat("kit_camp_simple"):
				if (func_143(joaat("kit_camp")))
				{
					if (func_157(1, 1))
					{
						func_158(2, true);
					}
					else if (func_159(1))
					{
						func_144("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, true);
					}
					else if (func_160())
					{
						func_144("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, true);
					}
					else
					{
						if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
							func_161();
						else
							func_144("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, true);
					
						func_162(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
					}
				}
				else if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
				{
					func_144("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, true);
					func_162(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
				}
				else if (func_160())
				{
					func_144("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, true);
				}
				else
				{
					func_144("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, true);
				}
				break;
		
			case joaat("kit_collectors_bag"):
				UIAPPS::LAUNCH_UIAPP_BY_HASH(joaat("Collectors"));
			
				if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("Collectors")) > 0)
				{
				}
				else
				{
					num.f_1 = hParam0;
					unk10 = { num };
					TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "collectors_bag", 32);
					unk10.f_14 = 1024;
					func_138(unk10, 0);
				}
			
				return true;
		
			case -1115561122:
				if (Global_1148185[PLAYER::PLAYER_ID() /*10*/].f_4)
					func_144("NET_WCAMP_OWNER_CAMP_RUNNING", 10000, 0, 0, 0, true);
				else
					func_166();
			
				return true;
		
			case joaat("weapon_kit_camera"):
			case 332793555:
				if (func_163(Global_33, true, 0, false) != hParam0)
					WEAPON::SET_CURRENT_PED_WEAPON(Global_33, hParam0, false, 0, false, false);
			
				return true;
		
			case joaat("kit_gun_oil"):
			case joaat("upgrade_upg_coffee_kit"):
				func_164(535, true);
				break;
		
			case joaat("kit_wardrobe"):
				if (func_37() != -1)
					break;
			
				if (!func_143(hParam0))
				{
					func_144("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, true);
					break;
				}
			
				flag2 = func_154(7, hParam0);
				flag3 = func_154(1, hParam0);
			
				if (flag3 && !flag2)
				{
					if (MAP::DOES_BLIP_EXIST(Global_17339))
						MAP::REMOVE_BLIP(&Global_17339);
				
					Global_17339 = MAP::_BLIP_ADD_FOR_STYLE(joaat("BLIP_STYLE_PLAYER_HORSE"));
					MAP::BLIP_ADD_MODIFIER(Global_17339, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
					func_144(MISC::VAR_STRING(0, -1680440926, Global_17339), 10000, 0, 0, 0, true);
					break;
				}
			
				if (!func_155(7))
				{
					func_144("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, true);
					break;
				}
			
				if (!flag2)
				{
					if (func_95(Global_33, func_94(7), false))
					{
						func_144("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, true);
					}
					else
					{
						if (MAP::DOES_BLIP_EXIST(Global_17339))
							MAP::REMOVE_BLIP(&Global_17339);
					
						Global_17339 = MAP::_BLIP_ADD_FOR_STYLE(joaat("BLIP_STYLE_PLAYER_HORSE"));
						MAP::BLIP_ADD_MODIFIER(Global_17339, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
						func_144(MISC::VAR_STRING(0, -482898802, Global_17339), 10000, 0, 0, 0, true);
					}
				
					break;
				}
			
				scriptHash = joaat("player_wardrobe");
			
				if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(scriptHash) > 0)
				{
				}
				else
				{
					num.f_1 = hParam0;
					num.f_2 = 51499045;
					unk10 = { num };
					TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "player_wardrobe", 32);
					unk10.f_14 = 1024;
					unk10.f_15 = 1;
					func_138(unk10, 0);
				}
				break;
		
			case joaat("document_player_journal"):
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("document_player_journal"), 1928812891, 1, 0, -1082130432);
				flag = false;
				return true;
		
			case joaat("weapon_kit_binoculars"):
			case joaat("weapon_kit_binoculars_improved"):
				if (!WEAPON::_IS_WEAPON_BINOCULARS(func_163(Global_33, true, 0, false)))
					WEAPON::SET_CURRENT_PED_WEAPON(Global_33, hParam0, false, 0, false, false);
			
				return true;
		
			case 1259508039:
				func_9(true, 0);
				break;
		
			case 1401465909:
				UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("satchel"));
			
				if (SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() == joaat("satchel_ui_event_handler"))
					UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(1976336482, 1261159557);
				else
					UIAPPS::LAUNCH_UIAPP_BY_HASH(1976336482);
			
				if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(698150113) > 0)
				{
				}
				else
				{
					num.f_1 = hParam0;
					num.f_3 = !(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() != joaat("satchel_ui_event_handler"));
					unk10 = { num };
					TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "field_guide", 32);
					unk10.f_14 = 1024;
					func_138(unk10, 0);
				}
			
				return true;
		
			case joaat("KIT_HANDHELD_CATALOG"):
				func_156();
				break;
		
			default:
				num2 = false;
				break;
		}
	}

	if (flag)
		HUD::_0xBFFF81E12A745A5F();

	return num2;
}

BOOL func_32() // Position - 0x2019 Hash - 0xB0C1FB82 ^0x26211674
{
	if (Global_1940252.f_39 == 1 || Global_1940252.f_39 == 2)
		return true;

	return false;
}

BOOL func_33(BOOL bParam0) // Position - 0x203F Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

void func_34(var uParam0) // Position - 0x206F Hash - 0xFC98F4C8 ^0x79096653
{
	Hash hash;
	Hash hash2;
	BOOL flag;
	var unk;
	var unk6;
	BOOL flag2;

	hash = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "item");
	hash2 = hash;

	if (func_17(hash2, 0) && !func_17(Global_1940252.f_11588, 0) || hash2 != Global_1940252.f_11588)
		Global_1940252.f_11588 = hash2;

	if (func_142(Global_1940252.f_11588) == joaat("consumable"))
		Global_1940085.f_41 = Global_1940252.f_11588;
	else
		Global_1940085.f_42 = Global_1940252.f_11588;

	flag = true;

	if (func_145(Global_1940252.f_11588) == -854348463)
	{
		unk = { func_167(Global_1940252.f_11588, false, 0) };
		unk6 = { func_168(Global_1940252.f_11588, unk, unk.f_4, false) };
		func_169(unk6, true, false);
		flag2 = func_170(false);
	
		if (func_37() == 0)
			flag2 = true;
	
		if (Global_1940252.f_11587 == -156634416)
			func_88(flag2, false, joaat("CI_TAG_FOLDER_KIT_WATCHES"));
		else
			func_88(flag2, true, 0);
	
		flag = true;
	}
	else if (Global_1940252.f_11588 == joaat("kit_gun_oil"))
	{
		func_171();
		flag = false;
	}
	else if (func_145(Global_1940252.f_11588) == 81053684 || func_145(Global_1940252.f_11588) == -525676072 || func_19(Global_1940252.f_11588, 160827531))
	{
		func_149(Global_1940252.f_11588, false);
		flag = false;
	}
	else if (func_19(Global_1940252.f_11588, 316290104))
	{
		if (func_172(Global_1940252.f_11588, 0, false) >= 0)
			flag = true;
	}
	else if (func_173(Global_1940252.f_11588, true, false))
	{
	}
	else if (func_19(Global_1940252.f_11588, -1242251796))
	{
		func_176(Global_1940252.f_11588, func_175(func_174(0)));
	}
	else if (func_19(Global_1940252.f_11588, -1472964441) && func_177(Global_1940252.f_11588) && func_178() && !func_179(Global_1940252.f_11588))
	{
		func_180();
		func_181(Global_17418.f_2992.f_17, 1, false, -142743235);
	
		if (func_31(Global_1940252.f_11588, false, 0, 0, true, false, false))
			flag = false;
	}
	else if (func_31(Global_1940252.f_11588, false, 0, 0, true, false, false))
	{
		flag = false;
	}

	if (func_30())
		flag = false;

	Global_1940252.f_11589 = Global_1940252.f_11588;
	func_9(flag, 0);
	func_115(0);
	return;
}

void func_35(Hash hParam0, int iParam1) // Position - 0x22F5 Hash - 0x12F31F28 ^0x61AE7833
{
	if (!func_17(hParam0, 0))
		return;

	if (func_19(hParam0, -1472964441) && func_177(hParam0) && func_178() && func_179(hParam0))
	{
		func_180();
	
		if (func_182() == 1061777683)
		{
			func_13();
		
			if (Global_1940252.f_11595 <= 0)
			{
				Global_1940252.f_11597 = 1;
				func_15(1061777683);
				UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(joaat("satchel"), joaat("exit"));
			}
		}
	}

	if (!func_183(hParam0, iParam1, func_174(0), false, -327174699))
	{
		if (!func_184(hParam0, iParam1, false, true, -327174699))
		{
		}
	}

	func_88(true, true, func_10(hParam0, 1224357681));
	return;
}

void func_36(Hash hParam0) // Position - 0x23B8 Hash - 0xB6172AFD ^0xB6172AFD
{
	func_35(hParam0, func_185(func_174(0), hParam0, false, true, true));
	return;
}

int func_37() // Position - 0x23D4 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

void func_38() // Position - 0x23E2 Hash - 0x8F476B52 ^0xC00987D8
{
	func_186(-893403924, &(Global_1940252.f_11641), 600, -1, false, false);
	func_187();
	return;
}

int func_39(var uParam0) // Position - 0x2405 Hash - 0x21436F34 ^0x5527ECCB
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Hash data;
	Hash hash;
	Hash hash2;
	int num;

	flag = func_33(false);
	flag2 = func_43();
	flag3 = false;

	if (!flag && !flag2 && Global_1940252.f_11587 != -156634416 && Global_1940252.f_11587 != 1061777683)
		flag3 = true;

	Global_1940252.f_11597 = 1;
	Global_1940252.f_11613 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_menu_items");
	Global_1940252.f_11614 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_list_items");
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Satchel");
	Global_1940252.f_11629 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptSelectLabel", -31549930);
	Global_1940252.f_11630 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSelectEnabled", true);
	Global_1940252.f_11631 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSelectVisible", true);
	Global_1940252.f_11632 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptHoldSelectLabel", joaat("SATCHEL_PROMPT_BREAKDOWN"));
	Global_1940252.f_11633 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptHoldSelectEnabled", false);
	Global_1940252.f_11634 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptHoldSelectVisible", false);
	Global_1940252.f_11637 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "PromptDiscardAllLabel", HUD::GET_STRING_FROM_HASH_KEY(joaat("SATCHEL_PROMPT_DISCARD_ALL")));
	Global_1940252.f_11635 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDiscardAllEnabled", flag3);
	Global_1940252.f_11636 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDiscardAllVisible", flag3);
	Global_1940252.f_11640 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDropVisibile", flag3);
	Global_1940252.f_11638 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptSendLabel", -31549930);

	if (func_37() == -1 && func_33(false) && Global_1915656.f_20241 == 2)
		Global_1940252.f_11639 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSendAllVisible", true);
	else
		Global_1940252.f_11639 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSendAllVisible", false);

	data = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, "Selected");
	Global_1940252.f_11618 = DATABINDING::_DATABINDING_ADD_DATA_HASH(data, "Name", 0);
	Global_1940252.f_11619 = DATABINDING::_DATABINDING_ADD_DATA_STRING(data, "NameAsString", "");
	Global_1940252.f_11620 = DATABINDING::_DATABINDING_ADD_DATA_HASH(data, "Description", 0);
	Global_1940252.f_11621 = DATABINDING::_DATABINDING_ADD_DATA_STRING(data, "DescriptionAsString", "");

	if (func_33(false) || func_29())
		Global_1940252.f_11622 = DATABINDING::_DATABINDING_ADD_DATA_STRING(data, "Price", "");
	else
		Global_1940252.f_11622 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(data, "Price", false);

	if (func_37() == -1 && func_33(false) && Global_1915656.f_20241 == 2)
		Global_1940252.f_11623 = DATABINDING::_DATABINDING_ADD_DATA_STRING(data, "PriceLabel", "SHOP_SEND");
	else if (Global_1915656.f_20241 == 29)
		Global_1940252.f_11623 = DATABINDING::_DATABINDING_ADD_DATA_STRING(data, "PriceLabel", "MATERIAL_VALUE");
	else
		Global_1940252.f_11623 = DATABINDING::_DATABINDING_ADD_DATA_STRING(data, "PriceLabel", "SHOP_VALUE");

	Global_1940252.f_11624 = DATABINDING::_DATABINDING_ADD_DATA_HASH(data, "Category", 0);
	Global_1940252.f_11616 = DATABINDING::_DATABINDING_ADD_DATA_INT(data, "DefaultCategoryIndex", 0);
	Global_1940252.f_11617 = DATABINDING::_DATABINDING_ADD_DATA_INT(data, "CategoryIndex", func_188());
	Global_1940252.f_11615 = DATABINDING::_DATABINDING_ADD_DATA_INT(data, "CategoryCount", 0);
	Global_1940252.f_11625 = DATABINDING::_DATABINDING_ADD_DATA_STRING(data, "IndexDescription", "");
	Global_1940252.f_11626 = DATABINDING::_DATABINDING_ADD_DATA_STRING(data, "Tip", "");
	Global_1940252.f_11627 = INVENTORY::_0x9D21B185ABC2DBC4(data, "effects", false, false);
	Global_1940252.f_11628 = DATABINDING::_DATABINDING_ADD_DATA_HASH(data, "Folder", 0);
	Global_1940252.f_11612 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_category_items");
	func_189(Global_1940252.f_11612);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1940252.f_11612, Global_1940252.f_11562);
	hash = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "Collections");
	hash2 = joaat("SATCHEL_TITLE");

	if (func_190(joaat("clothing_hl_player_satchel_008_1")))
		hash2 = -1401261769;

	num = func_191(hash, "player", hash2, "ALL SATCHEL EXCLUDING CLOTHING", joaat("SLOTID_NONE"));

	if (num < 0)
		return 0;

	if (func_93() || func_95(Global_33, func_94(7), true) || !(func_96(7) || func_97(7)) && func_33(false))
		func_191(hash, "saddle", -1186165261, "ALL EXCLUDING CLOTHING", 724026534);

	func_125(num, &data);

	if (Global_1940252.f_9)
	{
		func_192(Global_1940252.f_11587);
		func_193(Global_1940252.f_11587, &data, false);
		func_88(1, false, 0);
	}
	else
	{
		func_88(func_194(), false, 0);
	}

	Global_1940252.f_9 = 0;
	return 1;
}

Hash func_40(int iParam0) // Position - 0x2863 Hash - 0xBA965109 ^0xB940C203
{
	switch (iParam0)
	{
		case -2074770370:
			return 1643818657;
	
		case -1666604090:
			return 991808728;
	
		case -1559802791:
			return -352057134;
	
		case -1268291907:
			return 845736308;
	
		case -889932290:
			return joaat("hwagon_title");
	
		case -693134279:
			return -1077706770;
	
		case -283002878:
			return 262409577;
	
		case -182626652:
			if (Global_1915656.f_20638 || Global_1915656.f_22504.f_1 && Global_1915656.f_20241 == 16 || Global_1915656.f_20241 == 29)
				return joaat("shop_pearson_donate");
			else
				return -161395681;
			break;
	
		case -156634416:
			return 2047707540;
	
		case -96974025:
			return -2057617490;
	
		case 0:
			return 1346594033;
	
		case 1061777683:
			return -36657802;
	
		case 1561961676:
			return -92112048;
	
		case 1783698482:
			return -1236163301;
	}

	return 0;
}

Hash func_41(int iParam0) // Position - 0x29A5 Hash - 0xBA965109 ^0x6B29E8B0
{
	switch (iParam0)
	{
		case -2074770370:
			return 89311517;
	
		case -1666604090:
			return 92275361;
	
		case -1559802791:
			return -1694952718;
	
		case -1268291907:
			return 1510785758;
	
		case -889932290:
			return -1875341370;
	
		case -693134279:
			return 1001811369;
	
		case -283002878:
			return -1202687131;
	
		case -182626652:
			if (Global_1915656.f_20241 == 29)
				return 89311517;
			else
				return 288697952;
			break;
	
		case -156634416:
			return -1579183876;
	
		case -96974025:
			return 392871877;
	
		case 0:
			return 1315938069;
	
		case 1061777683:
			return -419081072;
	
		case 1561961676:
			return 983460938;
	
		case 1783698482:
			return 2061483699;
	}

	return 0;
}

void func_42() // Position - 0x2ABB Hash - 0x2658DFA9 ^0xC7A7B020
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11619, "");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11621, "");
	return;
}

BOOL func_43() // Position - 0x2ADF Hash - 0xA3BA916B ^0x5774CB64
{
	if (Global_1940252.f_39 == 1 || Global_1940252.f_39 == 2 || func_29() || func_30())
		return 1;

	return 0;
}

BOOL func_44(int iParam0) // Position - 0x2B19 Hash - 0xEFF1F628 ^0xEFF1F628
{
	if (func_195())
		if (Global_1915656.f_20241 == iParam0)
			return true;

	return false;
}

int func_45(int iParam0) // Position - 0x2B39 Hash - 0x2565A2EE ^0x46E06806
{
	switch (iParam0)
	{
		case -2074770370:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, HUD::GET_STRING_FROM_HASH_KEY(818738914));
			break;
	
		case -693134279:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, HUD::GET_STRING_FROM_HASH_KEY(-402412948));
			break;
	
		case -182626652:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, HUD::GET_STRING_FROM_HASH_KEY(-456150746));
			break;
	
		default:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, "");
			break;
	}

	return 0;
}

void func_46(int iParam0) // Position - 0x2BB2 Hash - 0x29A8F290 ^0x30794E3
{
	Global_1940252.f_40 = iParam0;
	return;
}

void func_47(int iParam0) // Position - 0x2BC2 Hash - 0x29A8F290 ^0x636D91BC
{
	Global_1940252.f_39 = iParam0;
	return;
}

void func_48(int iParam0) // Position - 0x2BD2 Hash - 0x29A8F290 ^0x8D3AE984
{
	Global_1940252.f_12 = iParam0;
	return;
}

void func_49(var uParam0) // Position - 0x2BE2 Hash - 0x89A1E9AA ^0xB6719340
{
	int num;

	MAP::DISPLAY_RADAR(true);
	Global_1940252.f_2 = 0;
	func_196();
	func_197(uParam0);
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	HUD::_SHOW_PLAYER_CORES(false);
	HUD::_SHOW_HORSE_CORES(false);

	if (func_37() == -1)
	{
	}
	else
	{
		while (!func_198(false, false) && num < 15)
		{
			num = num + 1;
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_ATTACK"), false);
			BUILTIN::WAIT(0);
		}
	}

	return;
}

void func_50(int iParam0) // Position - 0x2C46 Hash - 0xBD578226 ^0x58965C2C
{
	Global_1913614[iParam0 /*6*/].f_1 = 3;
	Global_1913614[iParam0 /*6*/] = 0;
	Global_1913614[iParam0 /*6*/].f_5 = 0;
	return;
}

void func_51(int iParam0) // Position - 0x2C6D Hash - 0xB89DF92F ^0xB89DF92F
{
	Global_1940252.f_11561 = Global_1940252.f_11561 - Global_1940252.f_11561 && iParam0;
	return;
}

BOOL func_52() // Position - 0x2C8E Hash - 0x17304366 ^0x17304366
{
	int num;

	num = func_199(false);

	if (func_200(num, true, false, false))
	{
		func_201(num);
		return true;
	}

	return false;
}

void func_53() // Position - 0x2CB4 Hash - 0x75302749 ^0xA0E32064
{
	float num;
	Player player;

	if (ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		if (func_202(Global_33))
			Global_1940085.f_7 = Global_1940085.f_7 | 1;
		else
			Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 1;
	
		if (func_12(Global_33))
			Global_1940085.f_7 = Global_1940085.f_7 | 2;
		else
			Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 2;
	
		if (func_203(Global_33, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD))
			Global_1940085.f_7 = Global_1940085.f_7 | 4;
		else
			Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 4;
	
		if (func_204(Global_33))
			Global_1940085.f_7 = Global_1940085.f_7 | 8;
		else
			Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 8;
	
		if (func_37() == 0)
		{
			if (func_157(1, 1))
				Global_1940085.f_7 = Global_1940085.f_7 | 16;
			else
				Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 16;
		
			if (func_205(false))
				Global_1940085.f_7 = Global_1940085.f_7 | 268435456;
			else
				Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 268435456;
		}
		else if (func_206(0, 1))
		{
			Global_1940085.f_7 = Global_1940085.f_7 | 16;
		}
		else
		{
			Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 16;
		}
	
		if (!func_207(false))
			Global_1940085.f_7 = Global_1940085.f_7 | 32;
		else
			Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 32;
	
		if (!func_208(false))
			Global_1940085.f_7 = Global_1940085.f_7 | 512;
		else
			Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 512;
	
		if (!func_209(false))
			Global_1940085.f_7 = Global_1940085.f_7 | 8192;
		else
			Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 8192;
	
		if (PED::IS_PED_IN_COVER(Global_33, false, true))
			Global_1940085.f_7 = Global_1940085.f_7 | 16384;
		else
			Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 16384;
	
		if (PED::GET_PED_CROUCH_MOVEMENT(Global_33))
			Global_1940085.f_7 = Global_1940085.f_7 | 32768;
		else
			Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 32768;
	
		if (func_37() == 0 && PED::IS_PED_INCAPACITATED(Global_33))
			Global_1940085.f_7 = Global_1940085.f_7 | 131072;
		else
			Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 131072;
	
		if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 108107462))
			Global_1940085.f_7 = Global_1940085.f_7 | 256;
		else if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_33))
			Global_1940085.f_7 = Global_1940085.f_7 | 256;
		else
			Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 256;
	
		num = 30f;
	
		if (func_210() || func_211())
			num = 50f;
	
		if (Global_1940199.f_18 || TASK::_IS_PED_DUELLING(Global_33) || func_212(num, 1024))
			Global_1940085.f_7 = Global_1940085.f_7 | 1024;
		else
			Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 1024;
	
		if (TASK::IS_PED_RUNNING(Global_33))
			Global_1940085.f_7 = Global_1940085.f_7 | 4096;
		else
			Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 4096;
	
		if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1) || func_203(Global_33, 1369124074))
			Global_1940085.f_7 = Global_1940085.f_7 | 128;
		else
			Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 128;
	
		if (TASK::IS_PED_GETTING_UP(Global_33))
			Global_1940085.f_7 = Global_1940085.f_7 | 1048576;
		else
			Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 1048576;
	
		if (PED::IS_PED_MALE(Global_33))
			Global_1940085.f_7 = Global_1940085.f_7 | 16777216;
		else
			Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 16777216;
	
		if (func_213())
			Global_1940085.f_7 = Global_1940085.f_7 | 33554432;
		else
			Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 33554432;
	
		if (func_214(false))
			Global_1940085.f_7 = Global_1940085.f_7 | 524288;
		else
			Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 524288;
	
		if (func_215(false))
			Global_1940085.f_7 = Global_1940085.f_7 | 262144;
		else
			Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 262144;
	
		if (func_216(Global_33))
			Global_1940085.f_7 = Global_1940085.f_7 | 4194304;
		else
			Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 4194304;
	}
	else
	{
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 1;
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 2;
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 4;
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 8;
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 16;
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 32;
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 512;
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 8192;
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 16384;
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 32768;
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 131072;
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 256;
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 1024;
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 4096;
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 128;
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 1048576;
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 16777216;
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 33554432;
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 524288;
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 262144;
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 4194304;
	}

	if (CAM::IS_CINEMATIC_CAM_RENDERING())
		Global_1940085.f_7 = Global_1940085.f_7 | 65536;
	else
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 65536;

	if (CAM::_0x1204EB53A5FBC63D())
		Global_1940085.f_7 = Global_1940085.f_7 | 64;
	else
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 64;

	player = HUD::_0x0501D52D24EA8934(1);

	if (ENTITY::DOES_ENTITY_EXIST(player))
	{
		if (func_217(player))
		{
			switch (ENTITY::GET_ENTITY_MODEL(player))
			{
				case joaat("a_c_horsemule_01"):
				case joaat("a_c_horsemulepainted_01"):
				case joaat("a_c_donkey_01"):
					Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 8388608;
					break;
			
				default:
					Global_1940085.f_7 = Global_1940085.f_7 | 8388608;
					break;
			}
		}
	
		if (PED::_IS_META_PED_USING_COMPONENT(player, 149557334))
			Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 8388608;
	
		if (!PED::IS_PED_RAGDOLL(player) && PED::IS_PED_ON_VEHICLE(player, false))
			Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 8388608;
	}
	else
	{
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 8388608;
	}

	if (func_218() || func_219() || func_220(0, false, true) && !func_221())
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 2097152;
	else
		Global_1940085.f_7 = Global_1940085.f_7 | 2097152;

	if (func_222())
		Global_1940085.f_7 = Global_1940085.f_7 | 67108864;
	else
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 67108864;

	if (Global_1940199.f_52)
		Global_1940085.f_7 = Global_1940085.f_7 | 134217728;
	else
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 134217728;

	if (Global_1048577)
		Global_1940085.f_7 = Global_1940085.f_7 | 536870912;
	else
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 536870912;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		Global_1940085.f_7 = Global_1940085.f_7 | 1073741824;
	else
		Global_1940085.f_7 = Global_1940085.f_7 - Global_1940085.f_7 & 1073741824;

	return;
}

BOOL func_54(int iParam0) // Position - 0x3654 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_112(iParam0);
}

int func_55() // Position - 0x3662 Hash - 0x9F572D68 ^0x30183CC8
{
	return 1039655040;
}

BOOL func_56(int iParam0, function funcParam1) // Position - 0x366F Hash - 0xB0986352 ^0xB0986352
{
	if (func_63(iParam0))
	{
		func_61(iParam0);
		return false;
	}
	else
	{
		funcParam1(0);
	
		if (func_65(StackVal, StackVal))
		{
			func_66(iParam0);
			return true;
		}
		else
		{
			func_61(iParam0);
			return false;
		}
	}

	return false;
}

int func_57() // Position - 0x36B0 Hash - 0x9F572D68 ^0x6DDEACEC
{
	return 1039645911;
}

int func_58() // Position - 0x36BD Hash - 0x9F572D68 ^0x5EC3F4ED
{
	return 1031256086;
}

int func_59() // Position - 0x36CA Hash - 0x9F572D68 ^0xFE069B44
{
	return 1011329046;
}

BOOL func_60() // Position - 0x36D7 Hash - 0xBA2FE0DB ^0xBA2FE0DB
{
	return func_223();
}

void func_61(int iParam0) // Position - 0x36E3 Hash - 0x44C39101 ^0x6D8A5BDD
{
	func_224(&(Global_1940085.f_38), iParam0);
	return;
}

BOOL func_62(Hash hParam0) // Position - 0x36F7 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_226(func_225(hParam0));
}

BOOL func_63(int iParam0) // Position - 0x3709 Hash - 0xC67CC87B ^0x9378BD33
{
	return Global_1940085.f_39 && iParam0 != false;
}

int func_64() // Position - 0x371C Hash - 0xBA2FE0DB ^0xBA2FE0DB
{
	return func_227();
}

BOOL func_65(BOOL bParam0, int iParam1) // Position - 0x3728 Hash - 0xDE6C34D8 ^0x4950B3D1
{
	Ped mount;

	if (Global_1940199.f_6 || PED::IS_PED_DEAD_OR_DYING(Global_33, true) || ENTITY::IS_ENTITY_DEAD(Global_33))
		return false;

	if (func_37() == 0)
		if (func_8(131072))
			return false;

	if (!func_228(iParam1, 1))
		if (func_8(1024))
			return false;

	if (Global_1940199.f_16)
		return false;

	if (!func_228(iParam1, 2) && func_8(32))
		return false;

	if (!func_228(iParam1, 4))
		if (func_8(4096))
			return false;

	if (!func_228(iParam1, 8) && func_8(512))
		return false;

	if (!func_228(iParam1, 512) && !func_229(bParam0))
		return false;

	if (!func_228(iParam1, 262144) && !func_230(bParam0, func_228(iParam1, 524288)))
		return false;

	if (!func_228(iParam1, 64) && !func_231(bParam0, iParam1, true))
		return false;

	if (!func_228(iParam1, 128))
	{
		if (func_232(Global_33, SCRIPT_TASK_MOUNT_ANIMAL) || PED::IS_PED_ON_MOUNT(Global_33))
		{
			if (bParam0)
				func_144("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, true);
		
			return false;
		}
	}

	if (!func_228(iParam1, 16))
	{
		if (func_233(Global_33))
		{
			mount = PED::GET_MOUNT(Global_33);
		
			if (!func_234(mount, true))
			{
				if (bParam0)
					func_144("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, true);
			
				return false;
			}
		}
	}

	if (!func_228(iParam1, 256) && func_8(8192))
		return false;

	if (!func_228(iParam1, 1024) && func_8(65536))
	{
		if (bParam0)
			func_144("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (!func_228(iParam1, 2048))
		if (func_8(32768))
			return false;

	if (!func_228(iParam1, 4096))
		if (func_8(16384))
			return false;

	if (!func_228(iParam1, 8192))
		if (!func_8(16))
			return false;

	if (!func_228(iParam1, 67108864))
		if (!func_8(268435456))
			return false;

	if (!func_228(iParam1, 16384))
		if (func_8(256))
			return false;

	if (!func_228(iParam1, 32768))
	{
		if (func_76())
		{
			if (bParam0)
				func_144("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, true);
		
			return false;
		}
	}

	if (!func_228(iParam1, 131072))
		if (!func_8(524288))
			return false;

	if (!func_228(iParam1, 65536))
		if (!func_8(262144))
			return false;

	if (!func_228(iParam1, 1048576))
		if (!func_8(2097152))
			return false;

	if (!func_228(iParam1, 2097152))
		if (!func_8(8388608))
			return false;

	if (!func_228(iParam1, 4194304))
		if (!func_8(16777216))
			return false;

	if (!func_228(iParam1, 8388608))
		if (func_8(33554432))
			return false;

	if (!func_228(iParam1, 16777216))
		if (func_8(67108864))
			return false;

	if (!func_228(iParam1, 33554432))
		if (func_8(134217728))
			return false;

	if (func_8(64))
		return false;
	else if (func_8(128))
		return false;
	else if (func_8(1048576))
		return false;
	else if (func_8(4))
		return false;

	if (!func_228(iParam1, 134217728))
		if (func_235(256))
			return false;

	if (!func_228(iParam1, 268435456))
		if (func_8(536870912))
			return false;

	if (!func_228(iParam1, 536870912))
		if (func_8(1073741824))
			return false;

	return true;
}

void func_66(int iParam0) // Position - 0x3B64 Hash - 0x44C39101 ^0x6D8A5BDD
{
	func_236(&(Global_1940085.f_38), iParam0);
	return;
}

int func_67() // Position - 0x3B78 Hash - 0x9F572D68 ^0xA5345381
{
	return 1039392896;
}

int func_68() // Position - 0x3B85 Hash - 0x9F572D68 ^0x8E00D7CB
{
	return 1037746167;
}

int func_69() // Position - 0x3B92 Hash - 0x9F572D68 ^0xCC7CA376
{
	return 1037647863;
}

int func_70() // Position - 0x3B9F Hash - 0x9F572D68 ^0x2EEFC18B
{
	return 225949718;
}

int func_71() // Position - 0x3BAC Hash - 0x9F572D68 ^0x3C6E2171
{
	return 1037713383;
}

BOOL func_72() // Position - 0x3BB9 Hash - 0x4228A1C2 ^0x5DCAFF22
{
	return Global_1940085.f_10;
}

BOOL func_73() // Position - 0x3BC7 Hash - 0x4228A1C2 ^0x4EB570BC
{
	return Global_1940085.f_11;
}

BOOL func_74() // Position - 0x3BD5 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1940085.f_12;
}

BOOL func_75() // Position - 0x3BE3 Hash - 0x4228A1C2 ^0x1EB92889
{
	return Global_1940085.f_13;
}

BOOL func_76() // Position - 0x3BF1 Hash - 0xC24BA3AE ^0xA4363903
{
	return Global_1940252.f_2 || Global_1940252 == 1;
}

int func_77() // Position - 0x3C0B Hash - 0x9F572D68 ^0xCF492FF4
{
	return 1039902720;
}

int func_78() // Position - 0x3C18 Hash - 0x9F572D68 ^0x84B652A2
{
	return 1039907016;
}

int func_79() // Position - 0x3C25 Hash - 0x9F572D68 ^0xB45F52D0
{
	return 1039902864;
}

int func_80() // Position - 0x3C32 Hash - 0x9F572D68 ^0x62D4A844
{
	return 1022861303;
}

int func_81() // Position - 0x3C3F Hash - 0x9F572D68 ^0x32AFB64F
{
	return 955497620;
}

int func_82() // Position - 0x3C4C Hash - 0x9F572D68 ^0x3F507FB0
{
	return 1038298244;
}

int func_83() // Position - 0x3C59 Hash - 0x9F572D68 ^0xB45F52D0
{
	return 1039902864;
}

int func_84() // Position - 0x3C66 Hash - 0x9F572D68 ^0x5429ED30
{
	return 905165831;
}

int func_85() // Position - 0x3C73 Hash - 0x9F572D68 ^0x8D56AEC6
{
	return 1039657088;
}

void func_86() // Position - 0x3C80 Hash - 0x54676713 ^0xCB8085B3
{
	Global_1940085.f_39 = 0;
	return;
}

BOOL func_87() // Position - 0x3C8F Hash - 0x7207AD59 ^0x7207AD59
{
	int num;

	if (func_33(false) || func_43())
		return true;

	num = func_199(false);

	if (func_200(num, false, false, false))
	{
		func_201(num);
		return true;
	}

	return false;
}

void func_88(BOOL bParam0, BOOL bParam1, int iParam2) // Position - 0x3CCB Hash - 0x2B098F6F ^0x2F7D859F
{
	Global_1940252.f_5 = bParam0;
	Global_1940252.f_37 = iParam2;

	if (bParam1 || func_237() && iParam2 == 0)
	{
		func_24(1);
		func_238(1);
	}

	return;
}

BOOL func_89(int iParam0, int iParam1) // Position - 0x3D05 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_90(int iParam0) // Position - 0x3D14 Hash - 0xD9EA8C02 ^0xD9EA8C02
{
	switch (iParam0)
	{
		case -889932290:
			return 2;
	
		case -283002878:
			return 1;
	
		default:
		
	}

	return 0;
}

void func_91(int* piParam0, int iParam1) // Position - 0x3D39 Hash - 0xCC6481EA ^0x6433047D
{
	var unk;
	int i;

	unk.f_9 = joaat("SLOTID_NONE");
	i = 0;

	for (i = *piParam0 - 1; i >= 0; i = i + -1)
	{
		if (!func_239(&unk, i, func_90(Global_1940252.f_11587), *piParam0))
		{
		}
		else if (func_240(unk.f_9))
		{
		}
		else if (!func_241(unk.f_4, iParam1))
		{
		}
		else if (!func_242(unk.f_4))
		{
		}
		else
		{
			if (func_33(false))
			{
				if (!func_17(unk.f_4, 0) || unk.f_11 <= 0)
				{
				}
				else
				{
					if (Global_1940252.f_11588 == 0)
						func_115(unk.f_4);
				
					func_243(unk);
				}
			}
		
			if (Global_1940252.f_11588 == 0)
				func_115(unk.f_4);
		
			func_243(unk);
		}
	}

	return;
}

void func_92(int iParam0) // Position - 0x3DF2 Hash - 0xCF9F0DB1 ^0xB66F6B19
{
	if (Global_1940252.f_41.f_203 > 16)
		if (Global_1940252.f_7)
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11625, MISC::VAR_STRING(2, "ENTRY_COUNTER", iParam0 + 1, Global_1940252.f_11595));
		else
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11625, MISC::VAR_STRING(2, "ENTRY_COUNTER", iParam0 + 1, Global_1940252.f_41.f_203));
	else
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11625, "");

	return;
}

BOOL func_93() // Position - 0x3E63 Hash - 0xD0A3277C ^0xE9D2C21C
{
	Ped mount;

	if (func_33(false))
	{
		mount = func_174(0);
	
		if (!ENTITY::DOES_ENTITY_EXIST(mount) || ENTITY::IS_ENTITY_DEAD(mount) || PED::IS_PED_INJURED(mount) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(mount))
			return false;
	
		if (!func_244(Global_1915656.f_20241.f_1))
			return false;
	
		if (func_245(Global_1915656.f_20241.f_1, mount))
			return true;
	}
	else
	{
		if (func_37() == -1)
			if (func_246(Global_33))
				mount = PED::GET_MOUNT(Global_33);
			else if (func_247(-283002878))
				return true;
		else
			mount = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
	
		if (!ENTITY::DOES_ENTITY_EXIST(mount) || ENTITY::IS_ENTITY_DEAD(mount) || PED::IS_PED_INJURED(mount) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(mount))
			return false;
	
		if (func_248(mount, false, true) < 1.7f || func_247(-283002878))
			return true;
	}

	return false;
}

Ped func_94(int iParam0) // Position - 0x3F6E Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_249(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1902887[iParam0 /*43*/];
}

BOOL func_95(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x3F9A Hash - 0xF928BABC ^0xEB0637CA
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1) && !ENTITY::IS_ENTITY_DEAD(pedParam1))
			if (bParam2)
				return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true) && PED::GET_MOUNT(pedParam0) == pedParam1;
			else
				return PED::IS_PED_ON_MOUNT(pedParam0) && PED::GET_MOUNT(pedParam0) == pedParam1;

	return false;
}

int func_96(int iParam0) // Position - 0x4004 Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_249(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_250(iParam0))
		return 0;

	ped = func_94(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return 1;

	return 0;
}

int func_97(int iParam0) // Position - 0x4058 Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;
	var entityCoords;
	var entityCoords2;

	iParam0 = func_249(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_250(iParam0))
		return 0;

	ped = func_94(iParam0);
	ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped);
	ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33);
	entityCoords = { ENTITY::GET_ENTITY_COORDS(ped, true, false) };
	entityCoords2 = { ENTITY::GET_ENTITY_COORDS(Global_33, true, false) };

	if (func_251(entityCoords, entityCoords2) > func_252(iParam0))
		return 1;

	return 0;
}

BOOL func_98(int iParam0, Hash hParam1) // Position - 0x40F2 Hash - 0xB1D801CA ^0xA245EE67
{
	if (!func_253(Global_1940252.f_11578[iParam0 /*2*/].f_1))
		return false;

	return func_254("ALL EXCLUDING CLOTHING", &(Global_1940252.f_11578[iParam0 /*2*/].f_1), &Global_1940252.f_11578[iParam0 /*2*/], hParam1, false);
}

void func_99(int iParam0) // Position - 0x4136 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1940252.f_11645 = iParam0;
	return;
}

void func_100(int iParam0) // Position - 0x4147 Hash - 0x1B4614B0 ^0x73E476F0
{
	if (!func_17(Global_1940252.f_11588, 0))
		Global_1940252.f_7 = iParam0;
	else if (func_10(Global_1940252.f_11588, 1224357681) != 0 && Global_1940252.f_11587 != 0 && Global_1940252.f_11587 != -2074770370 && !Global_1915656.f_20638 && !Global_1915656.f_22504.f_1)
		Global_1940252.f_7 = 1;
	else
		Global_1940252.f_7 = 0;

	return;
}

Hash func_101(var uParam0) // Position - 0x41CC Hash - 0x2CCA4A6E ^0x628F64C8
{
	Hash hash;
	Hash hash2;

	hash = Global_1940252.f_11588;
	hash2 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "item");

	if (!func_17(Global_1940252.f_11588, 0) || hash2 != Global_1940252.f_11588)
		hash = hash2;

	if (func_19(hash, -189374246))
	{
		func_255();
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940252.f_11618, DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "label"));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940252.f_11620, func_256(hash));
		func_42();
	}

	return hash;
}

Hash func_102(Any anParam0) // Position - 0x4249 Hash - 0xCD47E03A ^0xB8328BCB
{
	Any any;

	any = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(anParam0, "label");
	return any;
}

void func_103(Hash hParam0, var uParam1) // Position - 0x425D Hash - 0x2B78D06A ^0x1C6896C3
{
	BOOL flag;
	int num;
	int num2;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	int i;
	int num10;
	BOOL flag7;
	float value;
	float value2;
	Hash award;
	var unk;
	int j;
	float value3;
	var outData;
	Hash hash;

	flag = true;

	if (func_17(hParam0, 0) && !func_19(hParam0, 1816455607))
	{
		if (func_19(hParam0, 1147021565))
		{
			if (Global_1940252.f_11587 == -283002878)
				num = 2;
			else
				num = 1;
		
			if (!func_33(false))
			{
				num2 = func_257(hParam0);
			
				if (func_19(hParam0, 1573112293) && !func_258(num2))
				{
					flag = false;
					ATTRIBUTE::STOP_ITEM_PREVIEW();
				}
				else
				{
					ATTRIBUTE::_START_ITEM_PREVIEW(hParam0, num);
				}
			}
		}
	
		func_259(hParam0, uParam1);
		flag2 = false;
		flag3 = func_260(hParam0);
		flag4 = false;
		flag5 = false;
		flag6 = false;
		num3 = 0;
	
		if (func_19(hParam0, -1472964441) && func_177(hParam0) && !func_33(false))
		{
			flag4 = true;
		
			if (func_178())
			{
				if (func_179(hParam0))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11631, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11630, false);
				
					if (!func_261())
					{
						flag3 = true;
						flag5 = true;
					}
				}
				else
				{
					num3 = func_262(hParam0, true);
				
					if (num3 == 0 || num3 == 2)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11631, false);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940252.f_11632, -31549930);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11633, true);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11634, true);
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11630, false);
					}
				
					flag6 = true;
				}
			}
			else
			{
				num3 = func_262(hParam0, true);
			
				if (num3 != 0)
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11630, false);
			}
		}
	
		if (func_10(hParam0, 1224357681) == joaat("CI_TAG_FOLDER_SKILL_PAMPHLETS") || func_10(hParam0, 1224357681) == joaat("CI_TAG_FOLDER_SATCHEL_PAMPHLETS"))
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940252.f_11629, joaat("Read"));
	
		num4 = 0;
		num5 = 0;
		num6 = 0;
		num8 = 0;
		num9 = 0;
		num4 = func_263(hParam0, false, false, false);
	
		if (func_93())
		{
			num5 = func_264(PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID()), hParam0);
		
			if (num5 > 0)
			{
				for (i = 0; i < 3; i = i + 1)
				{
					if (Global_1903838.f_113[i /*96*/].f_1 == hParam0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Global_1290271.f_1171.f_245[i /*4*/].f_3))
						{
							num8 = num8 + 1;
						
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1290271.f_1171.f_245[i /*4*/].f_3))
								num9 = num9 + 1;
						}
					}
				}
			}
		}
	
		if (func_122())
			num6 = func_265(hParam0, true);
	
		if (hParam0 == Global_1940252.f_11591)
		{
			num4 = num4 + 1;
			num8 = num8 + 1;
		
			if (ENTITY::DOES_ENTITY_EXIST(Global_1940252.f_11592))
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1940252.f_11592))
					num9 = num9 + 1;
		}
	
		num7 = num4 + num5 + num6;
		num10 = func_266(hParam0, false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940252.f_11618, func_267(hParam0, false));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940252.f_11620, func_256(hParam0));
		func_42();
	
		if (flag3)
		{
			if (num9 > 0 || num8 <= 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11640, true);
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11640, false);
				flag3 = false;
			}
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11640, false);
		}
	
		if (flag3 && num7 > 1)
			flag2 = true;
	
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11636, flag2);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11635, flag2 && num9 == num8);
		flag7 = true;
	
		if (func_33(false) || func_43())
		{
			value = BUILTIN::TO_FLOAT(func_268(hParam0)) / 100f;
			value2 = BUILTIN::TO_FLOAT(func_270(func_269(hParam0), 770694722)) / 100f;
		
			if (func_19(hParam0, 1064293907) || INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, 1073741824) || func_19(hParam0, -1257428961) || func_19(hParam0, 173360570))
				if (func_271())
					value2 = value2 * 1.25f;
			else if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, 268435456) || INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, 134217728) || func_19(hParam0, 1888974372))
				value2 = value2 * 0.4f;
			else if (func_19(hParam0, 1286414894) || func_19(hParam0, 1686880204))
				value2 = value2 * 0.6f;
		
			if (Global_1915656.f_20241 == 2)
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11622, MISC::VAR_STRING(10, "SEND_ITEM_VALUE", func_272(MISC::_GET_STRING_FROM_FLOAT(value, 2), joaat("COLOR_PURE_WHITE"))));
			else if (Global_1915656.f_20241 == 29)
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11622, func_272(MISC::_GET_STRING_FROM_FLOAT(value2, 2), joaat("COLOR_PURE_WHITE")));
			else
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11622, MISC::VAR_STRING(10, "SHOP_ITEM_VALUE", func_272(MISC::_GET_STRING_FROM_FLOAT(value, 2), joaat("COLOR_PURE_WHITE"))));
		
			if (!func_273(hParam0, Global_1915656.f_20241.f_1) && !func_43())
				flag7 = false;
		
			if (func_274() == 29 && func_275(hParam0))
				flag7 = false;
		}
	
		func_42();
	
		if (flag4)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_UNIQUE"));
		
			if (flag5)
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_COLLECTORS_MAP_DISCARD"));
			else if (flag6)
				if (num3 == 0 || num3 == 2)
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_COLLECTORS_MAP"));
				else
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, MISC::VAR_STRING(2, func_276(num3)));
			else if (num3 != 0)
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, MISC::VAR_STRING(2, func_276(num3)));
		}
		else if (-492264119 == hParam0 && !func_277())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_CANT_READ_LETTER"));
		}
		else if (flag7)
		{
			if (num10 > 1)
			{
				if (func_274() == 38 && func_17(hParam0, 0) && func_19(hParam0, 474910316))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, "");
					func_109(hParam0, joaat("ANTIQUE_BOTTLES"));
					func_109(hParam0, joaat("Arrowheads"));
					func_109(hParam0, joaat("BIRD_EGGS"));
					func_109(hParam0, joaat("coins"));
					func_109(hParam0, joaat("FAMILY_HEIRLOOMS"));
					func_109(hParam0, joaat("LOST_JEWELRY_BRACELETS"));
					func_109(hParam0, joaat("LOST_JEWELRY_EARRINGS"));
					func_109(hParam0, joaat("LOST_JEWELRY_NECKLACES"));
					func_109(hParam0, joaat("LOST_JEWELRY_RINGS"));
					func_109(hParam0, joaat("TAROT_CARDS_CUPS"));
					func_109(hParam0, joaat("TAROT_CARDS_PENTACLES"));
					func_109(hParam0, joaat("TAROT_CARDS_SWORDS"));
					func_109(hParam0, joaat("TAROT_CARDS_WANDS"));
					func_109(hParam0, joaat("WILD_FLOWERS"));
					func_109(hParam0, 773314749);
					func_109(hParam0, -246025274);
					func_109(hParam0, -41527693);
				}
				else if (num7 >= num10)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_CAPACITY_FULL", num7, num10));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_CAPACITY", num7, num10));
				}
			}
			else if (num10 == 1)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_UNIQUE"));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_INFINITE", num7));
			}
		}
		else if (func_274() == 2)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, "");
		}
		else if (func_274() == 29)
		{
			if (func_275(hParam0))
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, MISC::VAR_STRING(2, "SHOP_H_NOT_SKINNED_ITEM"));
			else
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, MISC::VAR_STRING(2, "SHOP_H_NOT_ACCEPTED_CRIPPS"));
		}
		else if (func_278(func_274()) && ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_92[func_274() /*75*/].f_20) && !PED::IS_PED_MALE(Global_1051832.f_92[func_274() /*75*/].f_20))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, MISC::VAR_STRING(2, "SHOP_H_NOT_ACCEPTED_ITEM_F"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, MISC::VAR_STRING(2, "SHOP_H_NOT_ACCEPTED_ITEM"));
		}
	}
	else
	{
		award = hParam0;
	
		if (func_17(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam1, "item"), 0) && func_19(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam1, "item"), 1816455607))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, DATABINDING::_DATABINDING_READ_DATA_STRING_FROM_PARENT(*uParam1, "label_as_string"), 32);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11619, &unk);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940252.f_11618, 0);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940252.f_11629, joaat("Read"));
		
			for (j = 0; j < 32; j = j + 1)
			{
				if (MISC::ARE_STRINGS_EQUAL(&Global_265213.f_107995[j /*4*/], DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1940252.f_11619)))
				{
					Global_1940252.f_1556.f_8925.f_25 = 0;
					Global_1940252.f_1556.f_8925.f_24 = Global_265213.f_107995.f_257[j];
					break;
				}
			}
		
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_MISSION_DROP_TELEGRAM_TIP"));
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11640, false);
		}
		else if (ITEMDATABASE::_ITEMDATABASE_GET_PRIORITY_ACCESS_AWARD(award))
		{
			value3 = BUILTIN::TO_FLOAT(func_279(award)) / 100f;
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940252.f_11618, award);
			outData.f_2 = 5;
			outData.f_18 = 8;
		
			if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUY_AWARD_UI_DATA(award, &outData))
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940252.f_11620, outData.f_1);
			else
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940252.f_11620, 0);
		
			if (func_33(false))
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11622, MISC::VAR_STRING(10, "SHOP_ITEM_VALUE", func_272(MISC::_GET_STRING_FROM_FLOAT(value3, 2), joaat("COLOR_PURE_WHITE"))));
			else
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11622, "");
		
			if (award == STATS::WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD(joaat("FEATURE_PM_WEEKLY_COLLECTIBLES"), 0))
			{
				func_110();
			}
			else
			{
				hash = COLLECTION::_0x9ADEE485726025D4(award);
			
				if (hash != 0)
					func_280(award);
			}
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940252.f_11618, func_40(Global_1940252.f_11587));
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940252.f_11620, func_41(Global_1940252.f_11587));
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, "");
		}
	}

	if (!flag)
		INVENTORY::_0x75CFAC49301E134F(Global_1940252.f_11627, false, false);
	else
		INVENTORY::_0x75CFAC49301E134F(Global_1940252.f_11627, hParam0, false);

	func_115(hParam0);
	return;
}

void func_104(int iParam0, Hash hParam1) // Position - 0x4C8B Hash - 0x6166124B ^0x346C850E
{
	if (!func_17(hParam1, 0))
		return;

	if (!func_19(hParam1, 747873593) && !func_19(hParam1, joaat("CI_TAG_FOLDER_LETTERS")) && !func_19(hParam1, joaat("CI_TAG_FOLDER_NOTES")))
		return;

	if (hParam1 != Global_1913614[iParam0 /*6*/])
	{
		Global_1913614[iParam0 /*6*/].f_1 = 3;
		Global_1913614[iParam0 /*6*/] = hParam1;
		Global_1913614[iParam0 /*6*/].f_5 = 0;
	}

	return;
}

Hash func_105(Hash hParam0) // Position - 0x4D02 Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

BOOL func_106(Hash hParam0, Hash hParam1) // Position - 0x4D0C Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_281(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

void func_107(Hash hParam0, var uParam1) // Position - 0x4D42 Hash - 0x44E4F0E2 ^0x715778D8
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940252.f_11618, hParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940252.f_11620, func_282(hParam0));
	func_42();
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940252.f_11628, hParam0);
	func_115(0);
	INVENTORY::_0x75CFAC49301E134F(Global_1940252.f_11627, false, false);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11640, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11636, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11635, false);
	func_283(uParam1);
	return;
}

int func_108() // Position - 0x4DC3 Hash - 0x814EE178 ^0xF0AC220F
{
	var unk;
	int num;
	int num2;
	int i;
	int j;
	Hash hash;
	var unk11;
	Hash hash2;
	int num3;
	BOOL flag;

	if (func_33(false))
		return 0;

	if (!func_284())
		return 0;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_8 = -1;
	unk = { func_285(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0, 0, -1, 1816455607, 0) };

	if (func_286(unk, &num, &num2, 0))
	{
		if (num2 > 0)
		{
			Global_1940252.f_11595 = 0;
			unk11 = 3;
		
			for (i = 0; i < num2; i = i + 1)
			{
				hash = func_287(i, num);
			
				if (!func_288(hash))
				{
				}
				else
				{
					hash2 = func_289(hash);
					num3 = func_290(func_289(hash));
				
					if (num3 == -1)
					{
					}
					else if (hash2 == Global_265213.f_107995.f_13575[num3])
					{
						if (func_291(Global_265213.f_107995.f_14293[num3], 1))
							unk11[0] = hash;
					
						if (func_291(Global_265213.f_107995.f_14293[num3], 2))
							unk11[1] = hash;
					
						if (func_291(Global_265213.f_107995.f_14293[num3], 4))
							unk11[2] = hash;
					}
				}
			}
		
			for (j = 0; j < 3; j = j + 1)
			{
				if (func_17(unk11[j], 0))
					func_292(unk11[j]);
			}
		
			for (i = 0; i < num2; i = i + 1)
			{
				hash = func_287(i, num);
			
				if (!func_288(hash))
				{
				}
				else
				{
					hash2 = func_289(hash);
					flag = false;
				
					for (j = 0; j < 3; j = j + 1)
					{
						if (unk11[j] == hash)
						{
							flag = true;
							break;
						}
					}
				
					if (flag)
					{
					}
					else
					{
						func_292(hash);
					}
				}
			}
		
			DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1940252.f_11614, Global_1940252.f_11595);
			func_92(Global_1940252.f_36);
			Global_1940252.f_11586 = 1816455607;
		}
	
		func_293(num);
		return 1;
	}

	return 0;
}

int func_109(Hash hParam0, Hash hParam1) // Position - 0x4FDC Hash - 0x12D20D57 ^0x1EF41B93
{
	Hash categoryItemSetBuyAward;
	var unk;
	int num;
	int i;
	int num2;
	int num3;
	BOOL flag;

	categoryItemSetBuyAward = COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(hParam1, 0);

	if (categoryItemSetBuyAward == 0)
		return 0;

	unk = 15;

	if (!func_294(categoryItemSetBuyAward, -489628648, &unk, &num, false, true))
		return 0;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0)
			break;
	
		if (unk[i /*2*/] == hParam0)
			flag = true;
	}

	if (!flag)
		return 0;

	for (i = 0; i < num; i = i + 1)
	{
		if (func_295(unk[i /*2*/], 1))
			num2 = num2 + 1;
	
		num3 = num3 + 1;
	}

	if (num2 >= num3)
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_COLLECTION_COMPLETE", num2, num3));
	else
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_COLLECTION", num2, num3));

	return 1;
}

int func_110() // Position - 0x50B6 Hash - 0x4DA21C08 ^0x581F21E9
{
	Hash itemSetBuyAward;
	var unk;
	int num;
	int i;
	int num2;
	int num3;

	itemSetBuyAward = STATS::WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD(joaat("FEATURE_PM_WEEKLY_COLLECTIBLES"), 0);

	if (itemSetBuyAward == 0)
		return 0;

	unk = 15;

	if (!func_294(itemSetBuyAward, -489628648, &unk, &num, false, true))
		return 0;

	for (i = 0; i < num; i = i + 1)
	{
		if (func_295(unk[i /*2*/], 1))
			num2 = num2 + 1;
	
		num3 = num3 + 1;
	}

	if (num2 >= num3)
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_COLLECTION_COMPLETE", num2, num3));
	else
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_COLLECTION", num2, num3));

	return 1;
}

BOOL func_111(Hash hParam0, Any* panParam1) // Position - 0x515B Hash - 0x2ACCF512 ^0x1B77ACCF
{
	return ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUY_AWARD_UI_DATA(hParam0, panParam1);
}

BOOL func_112(int iParam0) // Position - 0x516B Hash - 0xA059D395 ^0x8E0849E2
{
	return func_89(Global_1940085.f_38, iParam0);
}

int func_113() // Position - 0x517F Hash - 0x8434ACA5 ^0xF0383B7D
{
	var unk;
	Hash hash;
	int num;
	int num2;
	int num3;
	int i;
	int j;
	var unk11;
	var unk12;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_8 = -1;
	unk = { func_285(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0, 0, -1, 1816455607, 0) };

	if (func_286(unk, &num, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			hash = func_287(i, num);
		
			if (func_296(hash))
			{
				if (num3 == 0)
				{
					if (func_17(hash, 0) && func_19(hash, 1816455607))
					{
						for (j = 0; j < 32; j = j + 1)
						{
							func_297(hash, &unk11, &unk12);
						
							if (MISC::ARE_STRINGS_EQUAL(func_298(Global_265213.f_107995[j /*4*/]), func_298(unk12)))
							{
								Global_1940252.f_1556.f_8925.f_24 = Global_265213.f_107995.f_257[j];
								Global_1940252.f_1556.f_8925.f_25 = 1;
								break;
							}
						}
					}
				}
			
				num3 = num3 + 1;
			}
		}
	}

	func_293(num);
	return num3;
}

BOOL func_114() // Position - 0x52AE Hash - 0x4228A1C2 ^0x5DCAFF22
{
	return Global_1940252.f_10;
}

void func_115(Hash hParam0) // Position - 0x52BC Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1940252.f_11588 = hParam0;
	return;
}

void func_116(int iParam0, var uParam1, Any* panParam2, int iParam3) // Position - 0x52CD Hash - 0x242DE36D ^0x242DE36D
{
	int i;
	int num;

	if (Global_1940252.f_11587 == 0)
		return;

	num = 0;

	if (iParam3 == 0 && *uParam1 > 16)
		num = *uParam1 - 16;

	for (i = 0; i < Global_1940252.f_41.f_1; i = i + 1)
	{
		Global_1940252.f_41.f_2[i /*2*/] = 0;
		Global_1940252.f_41.f_2[i /*2*/].f_1 = 0;
	}

	Global_1940252.f_41.f_1 = 0;
	i = 0;

	if (*uParam1 > 0)
	{
		for (i = *uParam1 - 1; i >= num; i = i + -1)
		{
			if (!func_239(panParam2, i, uParam1->f_1, *uParam1))
			{
			}
			else if (!func_299(panParam2, iParam3))
			{
			}
			else
			{
				func_300(panParam2->f_4);
			}
		}
	}

	return;
}

void func_117() // Position - 0x538C Hash - 0x6F97BAA4 ^0xEC598021
{
	Entity entityFromItem;
	Hash hash;
	ItemSet itemset;
	int itemsetSize;
	int i;

	Global_1940252.f_11592 = 0;
	Global_1940252.f_11591 = 0;

	if (func_301())
	{
		if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
		{
			itemset = ITEMSET::CREATE_ITEMSET(false);
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_33, itemset);
		
			if (ITEMSET::IS_ITEMSET_VALID(itemset))
			{
				itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);
			
				for (i = 0; i < itemsetSize; i = i + 1)
				{
					entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
				
					if (!ENTITY::DOES_ENTITY_EXIST(entityFromItem))
					{
					}
					else
					{
						hash = func_302(entityFromItem);
					
						if (func_242(hash))
						{
							Global_1940252.f_11592 = entityFromItem;
							Global_1940252.f_11591 = hash;
						}
					}
				}
			
				ITEMSET::DESTROY_ITEMSET(itemset);
			}
		}
	}

	return;
}

void func_118() // Position - 0x5430 Hash - 0xAA032694 ^0xAA032694
{
	BOOL flag;
	BOOL flag2;
	int num;

	flag = false;
	flag2 = false;

	if (func_33(false))
	{
		num = func_274();
	
		if (num == 10 || num == 15 || num == 29 || num == 16)
			if (Global_1940252.f_11587 == -283002878 || Global_1940252.f_11587 == -182626652 && func_93())
				flag = true;
		else if (func_274() == 16)
			if (Global_1940252.f_11587 == -283002878 || Global_1940252.f_11587 == -182626652)
				flag = true;
		else if (func_274() == 2 && Global_1940252.f_11587 == -693134279)
			flag = true;
	
		if (flag)
			flag2 = true;
	}
	else if (Global_1940252.f_11587 == -283002878)
	{
		flag = true;
	}

	if (flag)
		if (func_37() == 0)
			func_303(1, flag2);
		else if (func_274() == 16)
			func_304(true, true);
		else
			func_303(1, true);

	return;
}

void func_119() // Position - 0x5546 Hash - 0x8737E519 ^0x8737E519
{
	BOOL flag;
	int num;

	flag = false;

	if (func_33(false))
	{
		num = func_274();
	
		if (num == 10 || num == 15 || num == 29 || num == 16)
			if (Global_1940252.f_11587 == -889932290 || Global_1940252.f_11587 == -182626652 && func_122())
				flag = true;
		else if (func_274() == 16)
			if (Global_1940252.f_11587 == -889932290 || Global_1940252.f_11587 == -182626652)
				flag = true;
		else if (func_274() == 2 && Global_1940252.f_11587 == -693134279)
			flag = true;
	}
	else if (Global_1940252.f_11587 == -889932290)
	{
		flag = true;
	}

	if (flag)
		if (func_37() == 0)
			func_305(true);

	return;
}

void func_120() // Position - 0x5632 Hash - 0x766FB642 ^0xA91D4FC6
{
	if (Global_1940252.f_11587 == 1783698482 || Global_1940252.f_11587 == -693134279 || Global_1915656.f_20241 == 38 && func_33(false) && Global_1940252.f_11587 == -182626652)
		if (func_306(0) && COLLECTION::_0x6BAB7ACED1017204(joaat("WEEKLY_COLLECTABLES"), 0))
			func_307(STATS::WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD(joaat("FEATURE_PM_WEEKLY_COLLECTIBLES"), 0));

	if (func_308(joaat("ANTIQUE_BOTTLES")))
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("ANTIQUE_BOTTLES"), 0));

	if (func_308(joaat("BIRD_EGGS")))
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("BIRD_EGGS"), 0));

	if (func_308(joaat("Arrowheads")))
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("Arrowheads"), 0));

	if (func_308(joaat("FAMILY_HEIRLOOMS")))
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("FAMILY_HEIRLOOMS"), 0));

	if (func_308(joaat("WILD_FLOWERS")))
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("WILD_FLOWERS"), 0));

	if (func_308(joaat("coins")))
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("coins"), 0));

	if (func_308(joaat("LOST_JEWELRY_RINGS")))
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("LOST_JEWELRY_RINGS"), 0));

	if (func_308(joaat("LOST_JEWELRY_BRACELETS")))
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("LOST_JEWELRY_BRACELETS"), 0));

	if (func_308(joaat("LOST_JEWELRY_EARRINGS")))
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("LOST_JEWELRY_EARRINGS"), 0));

	if (func_308(joaat("LOST_JEWELRY_NECKLACES")))
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("LOST_JEWELRY_NECKLACES"), 0));

	if (func_308(joaat("TAROT_CARDS_CUPS")))
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("TAROT_CARDS_CUPS"), 0));

	if (func_308(joaat("TAROT_CARDS_PENTACLES")))
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("TAROT_CARDS_PENTACLES"), 0));

	if (func_308(joaat("TAROT_CARDS_SWORDS")))
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("TAROT_CARDS_SWORDS"), 0));

	if (func_308(joaat("TAROT_CARDS_WANDS")))
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("TAROT_CARDS_WANDS"), 0));

	if (func_308(773314749))
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(773314749, 0));

	if (func_308(-246025274))
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-246025274, 0));

	if (func_308(-41527693))
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-41527693, 0));

	return;
}

BOOL func_121(int iParam0, var uParam1, Any* panParam2, int iParam3) // Position - 0x5866 Hash - 0xF44934B0 ^0xF44934B0
{
	int i;
	int num;

	if (iParam3 == 0)
	{
		func_309(panParam2, iParam3);
	}
	else
	{
		num = 0;
	
		if (Global_1940252.f_11646 > 0)
		{
			for (i = Global_1940252.f_11646 - 1; i >= 0; i = i + -1)
			{
				if (!func_239(panParam2, i, uParam1->f_1, *uParam1))
				{
				}
				else if (!func_299(panParam2, iParam3))
				{
				}
				else
				{
					func_310(*panParam2, false);
					num = num + 1;
				
					if (num >= 25)
					{
						Global_1940252.f_11646 = i;
						return false;
					}
				}
			}
		}
	}

	return true;
}

BOOL func_122() // Position - 0x58F1 Hash - 0x5B99AB53 ^0xC3FA04E5
{
	Vehicle vehicleOwnedByPlayer;

	if (func_37() == -1)
		return false;

	if (!func_311())
		return false;

	vehicleOwnedByPlayer = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());

	if (!ENTITY::DOES_ENTITY_EXIST(vehicleOwnedByPlayer))
		return false;

	if (func_312(vehicleOwnedByPlayer))
		return false;

	if (func_33(false))
		if (func_313(Global_1915656.f_20241.f_1, vehicleOwnedByPlayer))
			return true;
	else if (func_248(vehicleOwnedByPlayer, false, true) < 3.7f || func_247(-889932290))
		return true;

	return false;
}

void func_123() // Position - 0x5982 Hash - 0xF96FED5A ^0xF96FED5A
{
	switch (Global_1940252.f_11587)
	{
		case -156634416:
			func_314();
			break;
	
		case 1061777683:
			func_315();
			break;
	
		case 1561961676:
			break;
	}

	return;
}

void func_124() // Position - 0x59BB Hash - 0xA0E9B59C ^0xA0E9B59C
{
	if (func_17(Global_1940252.f_11591, 0) && !func_93() || func_185(func_174(0), Global_1940252.f_11591, false, true, true) == 0)
		func_316(Global_1940252.f_11591, false, true);

	return;
}

void func_125(int iParam0, var uParam1) // Position - 0x5A04 Hash - 0x115F7A65 ^0x86442AC9
{
	Global_1940252.f_11585 = iParam0;

	if (func_30())
		if (PED::IS_PED_CARRYING_SOMETHING(Global_33) == false)
			func_192(-1559802791);

	if (func_29())
		func_192(-2074770370);

	func_193(Global_1940252.f_11587, uParam1, false);
	return;
}

void func_126(int iParam0) // Position - 0x5A4E Hash - 0x73F19454 ^0xBBE80908
{
	int num;
	Any dataContainerFromChildIndex;
	Any dataContainerFromChildIndex2;
	int i;
	Any dataContainerFromChildIndex3;
	BOOL flag;
	BOOL flag2;

	Global_1940252.f_11563 = DATABINDING::DATABINDING_READ_INT(Global_1940252.f_11617);
	num = Global_1940252.f_11564[Global_1940252.f_11563];

	if (num != Global_1940252.f_11587)
	{
		Global_1940252.f_41.f_203 = 0;
		Global_1940252.f_11585 = func_90(num);
		dataContainerFromChildIndex = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940252.f_11612, iParam0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(dataContainerFromChildIndex, "CurrentCategory", false);
		dataContainerFromChildIndex2 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940252.f_11612, Global_1940252.f_11563);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(dataContainerFromChildIndex2, "CurrentCategory", true);
		func_193(num, &dataContainerFromChildIndex2, false);
	}
	else
	{
		for (i = 0; i < Global_1940252.f_11562; i = i + 1)
		{
			dataContainerFromChildIndex3 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940252.f_11612, i);
			flag = DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(dataContainerFromChildIndex3, "CurrentCategory");
			flag2 = !(Global_1940252.f_11564[i] != Global_1940252.f_11587);
		
			if (flag != flag2)
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(dataContainerFromChildIndex3, "CurrentCategory", flag2);
		}
	
		Global_1940252.f_11585 = func_90(Global_1940252.f_11587);
	}

	return;
}

BOOL func_127(Ped pedParam0, int iParam1) // Position - 0x5B4F Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_89(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_89(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_89(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_89(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_89(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_89(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_89(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_89(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

BOOL func_128(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x5C4E Hash - 0xDDC024C0 ^0x60000BA4
{
	int num;
	var unk;
	var unk6;

	if (!func_17(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	num = func_317(hParam0, joaat("DEFAULT"));

	if (num != 0)
		return func_318(hParam0, iParam1, hParam2, bParam3, bParam4);

	unk = { func_167(hParam0, bParam4, 0) };
	unk6 = { func_168(hParam0, unk, unk.f_4, bParam4) };
	return func_319(hParam0, &unk6, &unk, iParam1, hParam2, bParam3, bParam4);
}

BOOL func_129(Hash hParam0, BOOL bParam1) // Position - 0x5CC6 Hash - 0xF243367B ^0xCF999DBB
{
	BOOL flag;
	int num;

	flag = func_19(hParam0, 1816455607);

	if (!func_17(hParam0, 0))
		if (!flag)
			return false;

	if (Global_1940252.f_8)
		return false;

	if (hParam0 != 1259508039 && hParam0 != joaat("kit_camp") && hParam0 != joaat("kit_camp_simple") && bParam1)
	{
		num = func_320(hParam0);
	
		if (func_19(hParam0, 1147021565))
			num = num | 64;
	
		if (!func_65(true, num))
			return false;
	}

	if (hParam0 == -1448210800 || hParam0 == joaat("upgrade_upg_mortar_pestle"))
		if (func_218())
			return false;

	if (!flag && !func_295(hParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	return true;
}

BOOL func_130(Hash hParam0) // Position - 0x5D98 Hash - 0x601AA14C ^0xEF1C7FBC
{
	if (func_140(hParam0))
		return false;

	if (!INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_199(false), hParam0, func_33(false)))
		return false;

	switch (hParam0)
	{
		case joaat("kit_camp"):
		case joaat("kit_camp_simple"):
			func_206(1, 1);
			TELEMETRY::_TELEMETRY_CAMP_CREATED(0);
			return true;
	
		case joaat("KIT_HANDHELD_CATALOG"):
			if (func_321() != -1)
			{
				func_144(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_321()), 10000, 0, 0, 0, true);
				func_323(-1);
			}
			break;
	}

	return true;
}

BOOL func_131(Hash hParam0) // Position - 0x5E17 Hash - 0xBD978834 ^0x88D9EE8D
{
	var unk;

	if (hParam0 == 17745825)
	{
		TEXT_LABEL_ASSIGN_STRING(&(unk.f_10), "legendary_animal_map", 32);
		unk.f_14 = 512;
		func_138(unk, 0);
		return true;
	}

	return false;
}

void func_132(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, BOOL bParam28, int iParam29) // Position - 0x5E49 Hash - 0x5A3F4CC0 ^0x5A3F4CC0
{
	return;
}

void func_133(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, BOOL bParam27, int iParam28) // Position - 0x5E51 Hash - 0x3A6CFA ^0x3A6CFA
{
	return;
}

void func_134(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) // Position - 0x5E59 Hash - 0x3087D828 ^0x3087D828
{
	return;
}

BOOL func_135(Hash hParam0) // Position - 0x5E61 Hash - 0xCA7B09D7 ^0xF7DA61BA
{
	if (func_37() == 0 && func_325(func_324(hParam0), true, false) != 0)
	{
		func_144("NET_ALOOT_HELP_OPEN_FAIL", 10000, 0, 0, 0, true);
		return false;
	}

	return true;
}

BOOL func_136(Hash hParam0) // Position - 0x5E9A Hash - 0xC4C130FB ^0xC8101E3B
{
	if (func_10(hParam0, joaat("TAG_ITEM_PROPERTY")) == 1816455607)
	{
		func_326(0);
		func_327(func_289(hParam0));
		return true;
	}

	return false;
}

BOOL func_137(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5EC9 Hash - 0xD49E510D ^0x2607D5E4
{
	if (func_328(hParam0, bParam1, false, 0, -1082130432))
	{
		Global_1913443 = MISC::GET_GAME_TIMER() + 3000;
		return true;
	}

	switch (func_10(hParam0, -949239683))
	{
		case -1919515848:
			if (!bParam1)
			{
				func_342(hParam0);
				return true;
			}
			break;
	
		case -1915958659:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
					func_331(hParam0);
				else
					func_336(hParam0);
			
				return true;
			}
			break;
	
		case -1337515701:
			if (!bParam1)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, joaat("pocket_watch_inspect_unholster"), 1, 0, -1082130432);
				return true;
			}
			break;
	
		case -1239610997:
			if (!bParam2)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, 280850861, 1, 0, -1082130432);
			}
			else
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, 1087288635, 1, 0, 0f);
			
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
			}
		
			Global_1913443 = MISC::GET_GAME_TIMER() + 3000;
			return true;
	
		case -809056541:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
					func_331(hParam0);
				else
					func_339(hParam0);
			
				return true;
			}
			break;
	
		case -793205628:
			if (!bParam2)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, 1834614641, 1, 0, -1082130432);
			}
			else
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, 136592566, 1, 0, 0f);
			
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
			}
		
			Global_1913443 = MISC::GET_GAME_TIMER() + 3000;
			return true;
	
		case -273840653:
			if (!bParam1)
			{
				func_333(hParam0, true);
				return true;
			}
			break;
	
		case -262371497:
			if (!bParam1)
			{
				func_340(hParam0);
				return true;
			}
			break;
	
		case 89124942:
			if (!bParam1)
			{
				func_331(hParam0);
				return true;
			}
			break;
	
		case 238865292:
			if (!bParam1)
			{
				func_343(hParam0, bParam3);
				return true;
			}
			break;
	
		case 632545869:
			if (!bParam2)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, -268993254, 1, 0, -1082130432);
			}
			else
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, -1401979141, 1, 0, 0f);
			
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
			}
		
			Global_1913443 = MISC::GET_GAME_TIMER() + 3000;
			return true;
	
		case 845883585:
			if (!bParam1)
			{
				if (!func_329())
				{
					if (func_330(&Global_33))
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, joaat("apply_pomade_with_hat"), 1, 0, -1082130432);
					else
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, joaat("apply_pomade_with_no_hat"), 1, 0, -1082130432);
				
					return true;
				}
				else
				{
					func_144("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, true);
				}
			}
			break;
	
		case 881567935:
			if (!bParam1)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, 1245009814, 1, 0, -1082130432);
				return true;
			}
			break;
	
		case 999632878:
			if (!bParam1)
			{
				func_334(hParam0, true);
				return true;
			}
			break;
	
		case 1130235258:
			if (!bParam1)
			{
				func_335(hParam0);
				return true;
			}
			break;
	
		case 1177617310:
			if (!bParam1)
			{
				func_344(hParam0, bParam3);
				return true;
			}
			break;
	
		case 1443104131:
			if (!bParam1)
			{
				func_341(hParam0);
				return true;
			}
			break;
	
		case 1451036371:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
					func_331(hParam0);
				else
					func_332(hParam0);
			
				return true;
			}
			break;
	
		case 1859991422:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
					func_331(hParam0);
				else
					func_337(hParam0);
			
				return true;
			}
			break;
	
		case 1891031775:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
					func_331(hParam0);
				else
					func_338(hParam0);
			
				return true;
			}
			break;
	}

	return false;
}

void func_138(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16) // Position - 0x62E6 Hash - 0x72903DA6 ^0xEF9AE14A
{
	int i;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0.f_10)))
		return;

	if (Global_1939434.f_161 >= 10)
		return;

	if (!func_345(iParam16, 2))
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(uParam0.f_10))) > 0 || func_346(&(uParam0.f_10)))
			return;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1939434[i /*16*/].f_10)))
		{
			Global_1939434[i /*16*/] = { uParam0 };
			Global_1939434.f_161 = Global_1939434.f_161 + 1;
			func_347(iParam16);
			return;
		}
	}

	return;
}

BOOL func_139() // Position - 0x6382 Hash - 0x3AC12039 ^0x3AC12039
{
	return Global_1893611 & 2 != 0;
}

BOOL func_140(Hash hParam0) // Position - 0x6392 Hash - 0xE969B321 ^0x8C585BB9
{
	if (!func_17(hParam0, 0))
		return false;

	if (func_142(hParam0) == joaat("emote"))
		return true;

	return false;
}

int func_141(var uParam0) // Position - 0x63BC Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_348(uParam0);
}

int func_142(Hash hParam0) // Position - 0x63CA Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_17(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_143(Hash hParam0) // Position - 0x63F5 Hash - 0xA0AC1BF ^0x3B7AC8C7
{
	if (hParam0 == 0)
		return false;

	if (func_142(hParam0) == joaat("CLOTHING"))
		func_145(hParam0) == -999503751;

	return true;
}

int func_144(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x6424 Hash - 0x8EBD6187 ^0x42F0F0AC
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

Hash func_145(Hash hParam0) // Position - 0x645F Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_17(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_146() // Position - 0x648A Hash - 0x94D65CA6 ^0x4569CEBD
{
	Player player;
	Ped mountOwnedByPlayer;
	Ped playerPed;
	Vector3 entityCoords;
	Vector3 entityCoords2;

	player = PLAYER::PLAYER_ID();
	mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(player);
	playerPed = PLAYER::GET_PLAYER_PED(player);

	if (!ENTITY::DOES_ENTITY_EXIST(mountOwnedByPlayer))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(mountOwnedByPlayer) || PED::IS_PED_INJURED(mountOwnedByPlayer))
		return 0;

	if (PED::IS_PED_SWIMMING(playerPed) || PED::IS_PED_SWIMMING(mountOwnedByPlayer))
		return 0;

	if (PED::IS_PED_ON_MOUNT(playerPed))
		if (PED::_GET_RIDER_OF_MOUNT(mountOwnedByPlayer, false) != playerPed)
			return 0;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(playerPed, false, false) };
	entityCoords2 = { ENTITY::GET_ENTITY_COORDS(mountOwnedByPlayer, false, false) };

	if (MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, entityCoords2, true) < 2f && PED::IS_ANIMAL_INTERACTION_POSSIBLE(playerPed, mountOwnedByPlayer))
		return 1;

	return 0;
}

BOOL func_147(Player plParam0) // Position - 0x653D Hash - 0xBF9BE0C1 ^0x883CF463
{
	Ped playerPed;
	Ped mountOwnedByPlayer;

	playerPed = PLAYER::GET_PLAYER_PED(plParam0);
	mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(plParam0);

	if (PED::IS_PED_ON_MOUNT(playerPed))
		if (PED::_GET_RIDER_OF_MOUNT(mountOwnedByPlayer, false) == playerPed)
			return true;

	return false;
}

void func_148(int iParam0, Hash hParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0x656F Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_349(16384);

	num = iParam0;
	num.f_1 = hParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_350(num);
	return;
}

int func_149(Hash hParam0, BOOL bParam1) // Position - 0x65A1 Hash - 0x26B1C24E ^0x1E715211
{
	int num;

	if (!func_223())
		return 0;

	if (!func_351(hParam0))
		return 0;

	if (func_352(hParam0))
	{
		num = 0;
	
		if (func_145(hParam0) == 81053684 || func_19(hParam0, 160827531) && !func_19(hParam0, -1303648999))
			if (bParam1)
				func_236(&num, 2);
	
		return func_353(hParam0, num);
	}

	return 0;
}

void func_150(Hash hParam0) // Position - 0x6618 Hash - 0x6BEB4307 ^0xBF10EB4F
{
	int num;
	Hash hash;

	num = 10;
	hash = Global_1953292.f_1676.f_1[num /*3*/];

	if (hash == hParam0)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayUnequipHatFidget", true, 15);
		func_151(Global_33, -2065815962, 0, -358215195, true, true, true, true, false, true, true, true);
		func_152(hParam0, false, false);
		return;
	}

	PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayEquipHatFidget", true, 15);
	func_151(Global_33, hParam0, 0, -358215195, true, true, true, true, false, true, true, true);

	if (func_354(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_33, false, true, false, true);
		func_355();
		func_349(128);
		return;
	}

	if (hash == Global_1953292.f_83[num /*12*/])
	{
		func_152(hParam0, true, false);
		return;
	}

	if (func_356(-2061583405, false))
	{
		if (func_190(hash))
			func_152(hash, false, false);
		else
			func_357(hash, true, true, false, false, false);
	
		func_152(hParam0, true, false);
		return;
	}

	if (func_190(hash))
	{
		func_152(hash, false, false);
		func_152(hParam0, true, false);
	}
	else if (func_190(hParam0))
	{
		if (hParam0 != func_358(0))
		{
			func_359(hParam0, hash, false, false, false);
			func_152(hParam0, false, false);
			func_152(hash, false, false);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_33, false, true, false, true);
			func_349(128);
			func_152(hParam0, true, false);
		}
	}

	return;
}

int func_151(Ped pedParam0, Hash hParam1, Hash hParam2, Hash hParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11) // Position - 0x676E Hash - 0x31745379 ^0x5F342BAB
{
	var unk;
	int num;

	if (hParam3 == -358215195)
	{
		unk = { func_167(hParam1, true, 0) };
		hParam3 = func_360(unk.f_4);
	
		if (hParam3 == -358215195)
			return 0;
	}

	if (!func_362(hParam1, hParam2, func_361(hParam3, 1), bParam4, true, false, true))
		return 0;

	func_363(true, bParam5, bParam9, true, bParam11);

	if (bParam10)
		if (func_364(hParam1, false))
			func_365(Global_1953292.f_1676.f_1[func_361(hParam3, 1) /*3*/], false, false);
		else
			func_365(hParam1, true, false);

	switch (hParam3)
	{
		case 1108822547:
			if (func_354(32768))
			{
				func_355();
				func_148(21, hParam3, 256, 0, false);
			}
		
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 2);
			break;
	
		case 1145151482:
		case 1742327865:
			if (bParam7 && hParam1 != Global_1953292.f_83[func_361(hParam3, 1) /*12*/])
				func_148(27, 0, 0, 0, false);
			break;
	}

	if (!bParam6)
		return 1;

	num = func_366(hParam3);

	if (bParam4)
		num = num | 2;

	if (bParam8)
		func_367(&num, 4);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		func_148(19, 0, num, 0, false);
	}
	else
	{
		num = num | 1;
		func_148(19, 0, num, pedParam0, false);
	}

	return 1;
}

void func_152(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x68C7 Hash - 0x9789B209 ^0xF02FDDD
{
	var unk;
	var guid;

	unk = { func_167(hParam0, bParam2, 0) };
	guid = { func_168(hParam0, unk, unk.f_4, bParam2) };

	if (func_368(hParam0, unk, unk.f_4, bParam2, false, false) <= 0)
		return;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_199(bParam2), &guid, bParam1);
	return;
}

Hash func_153(Hash hParam0, BOOL bParam1) // Position - 0x6917 Hash - 0xC283C021 ^0x9CE4FF09
{
	int i;
	Hash hash;
	Hash hash2;
	var guid;
	Hash outSlotId;
	var unk4;

	hash2 = 0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return 0;

	unk4 = { func_168(joaat("WARDROBE"), func_369(bParam1), joaat("SLOTID_WARDROBE"), bParam1) };

	for (i = 0; i < Global_1953292.f_3352.f_26; i = i + 1)
	{
		hash = Global_1953292.f_3352[i];
	
		if (func_145(hash) == hParam0 || hParam0 == 81053684 && func_19(hash, 160827531))
		{
			guid = { func_168(hash, unk4, outSlotId, bParam1) };
		
			if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IN_USE(func_199(bParam1), &guid))
			{
				hash2 = hash;
				INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_199(bParam1), &guid, false);
			}
		}
	}

	return hash2;
}

BOOL func_154(int iParam0, Hash hParam1) // Position - 0x69D2 Hash - 0xC8DEF152 ^0xBE9C015A
{
	Ped mount;

	iParam0 = func_249(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	mount = func_94(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(mount))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(mount) || PED::IS_PED_INJURED(mount))
		return 0;

	if (PED::IS_PED_SWIMMING(Global_33) || PED::IS_PED_SWIMMING(mount))
		return 0;

	if (PED::IS_PED_ON_MOUNT(Global_33))
		if (PED::_GET_RIDER_OF_MOUNT(mount, false) == Global_33)
			if (hParam1 == joaat("kit_wardrobe"))
				return 0;
		else
			return 0;

	if (func_370(iParam0))
		return 1;

	return 0;
}

BOOL func_155(int iParam0) // Position - 0x6A79 Hash - 0x9F2526C ^0x74A3693D
{
	Ped ped;

	iParam0 = func_249(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	ped = func_94(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
	{
		if (iParam0 == func_371())
			return true;
	
		return false;
	}

	if (ped == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
		return true;

	return false;
}

void func_156() // Position - 0x6AD2 Hash - 0x3118984E ^0x9DD7A6C6
{
	int num;

	if (func_372())
		return;

	if (func_373(8))
	{
		switch (Global_1051832.f_3649)
		{
			case 0:
				if (func_373(16))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
					{
						PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Global_33);
						TASK::CLEAR_PED_TASKS(Global_33, true, false);
					}
				
					func_374(16);
				}
			
				func_375(1);
				break;
		
			case 1:
				if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
					break;
			
				func_374(8);
				func_375(0);
				break;
		}
	
		return;
	}

	if (func_376())
	{
		TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("KIT_HANDHELD_CATALOG"), joaat("MP_CATALOGUE_UNHOLSTER_S1"), 1, 0, -1082130432);
		Global_1915656.f_22504.f_1 = 1;
		Global_1051832.f_43 = 0;
		func_377();
	}
	else
	{
		num = func_379(func_378());
	
		if (num != -1)
		{
			func_144(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(num), 10000, 0, 0, 0, true);
			Global_1051832.f_3648 = 0;
			Global_1051832.f_3649 = 0;
			func_380(0);
			func_323(-1);
		}
	}

	return;
}

BOOL func_157(int iParam0, int iParam1) // Position - 0x6BC9 Hash - 0x5D65A4D7 ^0x7C5646CA
{
	Any gangId;

	if (!func_381() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
		return false;

	if (!func_382(16))
		return false;

	if (func_383())
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_CAMP")))
			return false;

	if (!func_384())
		return false;

	if (func_385(16))
		return false;

	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	if (iParam1 == 1 && !GANG::NETWORK_IS_GANG_ID_VALID(gangId) || !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		return false;

	if (iParam0 == 1 && func_89(Global_1147183.f_8, 1))
		return false;

	if (func_160())
		return false;

	return true;
}

int func_158(int iParam0, BOOL bParam1) // Position - 0x6C89 Hash - 0x31DB738A ^0x31DB738A
{
	if (bParam1)
		func_386();

	if (!func_387(bParam1, bParam1, !bParam1))
		return 0;

	func_388(iParam0);
	Global_1896762.f_356 = 1;
	Global_1896762.f_357 = bParam1;
	return 1;
}

BOOL func_159(int iParam0) // Position - 0x6CC5 Hash - 0xA059D395 ^0xAFACF28D
{
	return func_89(Global_1147183.f_8, iParam0);
}

BOOL func_160() // Position - 0x6CD9 Hash - 0x1BB0EADA ^0xDD84C79B
{
	int num;

	num = func_389(PLAYER::PLAYER_ID());

	if (num != -1)
		if (Global_1141332[num /*27*/].f_18.f_1 != 0 && func_89(Global_1141332[num /*27*/].f_18, 1))
			return true;

	return false;
}

void func_161() // Position - 0x6D1B Hash - 0xEA92AA44 ^0xD024142D
{
	int num;
	int num2;

	num = { func_390(0) };

	if (func_391(num))
	{
		if (num == 6)
		{
			num2 = func_392(PLAYER::PLAYER_ID(), false);
		
			if (num2 != -1)
				if (func_393(num2) == joaat("posse_versus"))
					func_144("GC_SELECT_FAIL_POSSE_VERSUS", 10000, 0, 0, 0, true);
				else if (num2 == 1)
					func_144("GC_SELECT_FAIL_CHALLENGE", 10000, 0, 0, 0, true);
				else
					func_144("GC_SELECT_FAIL_EVENT", 10000, 0, 0, 0, true);
		}
		else
		{
			func_144("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, true);
		}
	}

	return;
}

void func_162(Any anParam0) // Position - 0x6DAB Hash - 0x89B6E65 ^0xA9E218C2
{
	var unk;

	unk.f_12 = -1;
	unk.f_12.f_1 = -1;
	unk.f_14 = 255;
	unk.f_15 = 255;
	unk.f_6 = anParam0;
	unk.f_4 = 56;
	func_395(unk, func_394(0, 8), false, false);
	return;
}

Hash func_163(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x6DF0 Hash - 0xDD2F88C2 ^0x29E97850
{
	Hash weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

void func_164(int iParam0, BOOL bParam1) // Position - 0x6E32 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_396(iParam0, &num, &num2);

	if (!func_397(iParam0, num, num2, bParam1))
		return;

	func_398(num, num2);
	return;
}

void func_165(BOOL bParam0) // Position - 0x6E5F Hash - 0x5C051E8E ^0x5C051E8E
{
	if (func_37() != -1 || !bParam0 || func_246(Global_33))
	{
		func_399();
		return;
	}

	return;
}

void func_166() // Position - 0x6E8D Hash - 0x84DD5872 ^0x184C819C
{
	Player player;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(-741705372))
	{
		player = PLAYER::PLAYER_ID();
		func_400(1, player);
	}

	return;
}

struct<5> func_167(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x6EAE Hash - 0xFD1D83A6 ^0x412BEE1D
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_369(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	num = func_142(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_406(hParam0, -1823706425))
			{
				unk = { func_168(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_406(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_168(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_168(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
			else if (func_406(hParam0, -1653629781))
			{
				unk = { func_168(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = joaat("SLOTID_NONE");
			unk = { func_405(bParam1) };
		
			switch (func_145(hParam0))
			{
				case joaat("CI_CATEGORY_EMOTE_TAUNTS"):
					unk.f_4 = -268116367;
					break;
			
				case -1070622585:
					unk.f_4 = -6796437;
					break;
			
				case -1057349201:
					unk.f_4 = 1473261684;
					break;
			
				case joaat("CI_CATEGORY_EMOTE_GREETS"):
					unk.f_4 = -241855024;
					break;
			}
			break;
	
		case joaat("CLOTHING"):
			unk = { func_168(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_401(bParam1) };
		
			if (iParam2 && func_402(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_403(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_403(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_404(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else
					unk.f_4 = joaat("SLOTID_WEAPON_1");
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WEAPON_0");
			}
			break;
	
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_SATCHEL")))
			{
				unk.f_4 = joaat("SLOTID_SATCHEL");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_WARDROBE")))
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_CURRENCY")))
			{
				unk28.f_9 = joaat("SLOTID_NONE");
			
				if (!func_407(unk, &unk28, bParam1, false, -1))
				{
					unk.f_4 = 0;
				}
				else
				{
					unk = { unk28.f_5 };
					unk.f_4 = joaat("SLOTID_CURRENCY");
				}
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -718417579))
			{
				unk.f_4 = -718417579;
			}
			else if (func_406(hParam0, -1653629781))
			{
				unk = { func_168(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			else
			{
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("character"));
				unk.f_4 == 0;
			}
			break;
	}

	return unk;
}

struct<4> func_168(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x7222 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_17(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_199(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_169(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x7253 Hash - 0x7D75927B ^0xD259228E
{
	var unk;

	if (!func_170(false))
		return func_408(&uParam0, bParam4, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_407(uParam0, &unk, bParam5, false, -1))
		return false;

	if (unk.f_10 == bParam4)
		return true;

	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_199(bParam5), &uParam0, bParam4))
		return false;

	return true;
}

BOOL func_170(BOOL bParam0) // Position - 0x72C7 Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_37() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_199(bParam0));
}

void func_171() // Position - 0x72E5 Hash - 0x556B3943 ^0x41CEB2D9
{
	Hash pedWorstWeapon;

	if (!func_65(true, 124032))
		return;

	pedWorstWeapon = WEAPON::_GET_PED_WORST_WEAPON(Global_33, false, false, false);

	if (func_409(pedWorstWeapon))
		func_411(1, pedWorstWeapon, func_410());
	else
		func_144("HELP_CANNOT_USE_GUN_OIL", 10000, 0, 0, 0, true);

	return;
}

int func_172(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x7330 Hash - 0xC397F4D3 ^0xB04EEF70
{
	int num;
	int num2;
	Hash hash;
	var unk;
	var unk6;
	int num3;
	int num4;

	num = -1;
	num2 = func_412(hParam0);
	hash = func_413(hParam0);

	if (hash != 0)
	{
		if (!func_170(false) || func_414())
		{
			if (bParam2)
			{
				func_416(func_415(joaat("broken_down"), joaat("small_animals")), 1);
				return func_417(hash, num2, hParam0, iParam1);
			}
		
			unk = { func_167(hParam0, true, 0) };
			unk6 = { func_168(hParam0, unk, unk.f_4, true) };
			num3 = func_418(hParam0, &unk6, 1, -142743235, false, true);
		
			if (num3 != -1)
			{
				num4.f_7 = -142743235;
				num4.f_16 = -1;
				num4 = 1;
				num4.f_3 = 1;
				func_419(num3, num4);
			}
		
			return 0;
		}
	
		if (func_181(hParam0, 1, true, -142743235))
			num = func_417(hash, num2, hParam0, iParam1);
	}

	return num;
}

BOOL func_173(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x740C Hash - 0x2455E605 ^0xEE0FF043
{
	if (hParam0 == joaat("provision_rotten_meat") || hParam0 == joaat("consumable_cornedbeef_can"))
		return false;

	if (func_19(hParam0, joaat("ci_tag_item_meat_animal")) || func_19(hParam0, -839724752))
		if (bParam2)
			return func_19(hParam0, -1238310989);
		else if (bParam1)
			return !func_19(hParam0, -1238310989);
		else
			return true;

	return false;
}

Ped func_174(int iParam0) // Position - 0x7482 Hash - 0x829B7265 ^0xE21C4F30
{
	return PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
}

Ped func_175(Ped pedParam0) // Position - 0x7492 Hash - 0xC9D82232 ^0xC9D82232
{
	return pedParam0;
}

int func_176(Hash hParam0, Ped pedParam1) // Position - 0x749C Hash - 0xC2CD620C ^0xC2CD620C
{
	if (func_37() == -1)
	{
		if (func_420(hParam0, pedParam1))
			return 1;
	
		return 0;
	}

	if (func_37() == 0)
	{
		if (func_420(hParam0, pedParam1))
			return 1;
	
		return 0;
	}

	return 1;
}

BOOL func_177(Hash hParam0) // Position - 0x74DB Hash - 0xFE4CB542 ^0x4BB17F50
{
	if (func_19(hParam0, 566155764))
		return 0;

	if (func_19(hParam0, 2028734248))
		return 1;

	return 0;
}

BOOL func_178() // Position - 0x7508 Hash - 0xC5B83CF5 ^0x4BCE47C
{
	return Global_17418.f_2992.f_21;
}

BOOL func_179(Hash hParam0) // Position - 0x7518 Hash - 0xECCC7EB5 ^0x35F3C057
{
	if (Global_17418.f_2992.f_17 == hParam0)
		return true;

	return false;
}

void func_180() // Position - 0x7532 Hash - 0xBE2108C1 ^0xBE2108C1
{
	func_421(&(Global_17418.f_2992), 3);
	return;
}

BOOL func_181(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x7545 Hash - 0x6E56F3C0 ^0x23695AE
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Hash ammoType;
	int pedAmmoByType;
	var statId;
	var unk2;

	if (!func_17(hParam0, 0))
		return false;

	if (hParam3 == -142743235)
		if (func_422(hParam0))
			hParam3 = 562618531;

	flag = hParam3 == 562618531;
	flag2 = hParam3 == 1992602754;
	flag3 = hParam3 == -1387038764;
	ammoType = func_423(hParam0, 1);

	if (ammoType != 0)
	{
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
		pedAmmoByType = pedAmmoByType - iParam1;
	
		if (pedAmmoByType < 0)
			return false;
	
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_33, ammoType, iParam1, hParam3);
	
		if (!bParam2)
			func_424(hParam0, -iParam1, flag, flag2, flag3, false, false);
	
		return false;
	}

	if (!func_295(hParam0, 1))
		return false;

	statId = { func_425(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_263(hParam0, false, false, false) - iParam1 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);
		}
		else if (func_263(hParam0, false, false, false) - iParam1 < 0)
		{
			func_181(hParam0, func_263(hParam0, false, false, false), bParam2, hParam3);
			return false;
		}
	}

	if (func_142(hParam0) == joaat("WEAPON"))
	{
		if (!func_426(hParam0, iParam1, false, hParam3))
			return false;
	}
	else if (!func_128(hParam0, iParam1, hParam3, bParam2, false))
	{
		return false;
	}
	else
	{
		unk2 = { func_167(hParam0, false, 0) };
	
		if (func_170(false) && unk2.f_4 == joaat("SLOTID_SATCHEL"))
			func_88(1, false, 0);
	}

	if (hParam0 == joaat("document_player_journal"))
		Global_1940085.f_21 = 0;

	if (!func_170(false))
		bParam2 = true;

	if (!bParam2 && hParam0 != 1309979101)
		func_424(hParam0, -iParam1, flag, flag2, flag3, false, false);

	return true;
}

int func_182() // Position - 0x76F7 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1940252.f_11587;
}

BOOL func_183(Hash hParam0, int iParam1, Ped pedParam2, BOOL bParam3, Hash hParam4) // Position - 0x7706 Hash - 0x789B46BC ^0x72B9E423
{
	iParam1 = func_427(hParam0, iParam1, pedParam2, true, true, -142743235, 0, 1);

	if (iParam1 <= 0)
		return true;

	return func_428(hParam0, iParam1, bParam3, hParam4);
}

BOOL func_184(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, Hash hParam4) // Position - 0x7739 Hash - 0xD3297CA9 ^0xD3297CA9
{
	if (hParam0 == 0)
		return false;

	if (iParam1 < 1)
		return false;

	if (bParam3)
		if (!func_311())
			return false;

	if (!func_429(hParam0, iParam1, hParam4, bParam2, true))
		return false;

	func_430();
	return true;
}

int func_185(Ped pedParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x7780 Hash - 0x586BF778 ^0x586BF778
{
	int num;

	num = func_263(hParam1, bParam2, false, false);
	num = num + func_264(pedParam0, hParam1);

	if (bParam3)
		num = num + func_265(hParam1, bParam4);

	return num;
}

int func_186(Hash hParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5) // Position - 0x77B5 Hash - 0x4B151EFD ^0xA82386D1
{
	int num;
	BOOL flag;

	num = 0;

	if (iParam2 < 1)
		iParam2 = 10;

	flag = false;
	*iParam1 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(hParam0);

	while (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(*iParam1) && num < iParam2 && !flag)
	{
		if (Global_1572887.f_14 != -1)
			flag = func_198(bParam4, bParam5);
	
		num = num + 1;
		BUILTIN::WAIT(0);
	}

	if (Global_1572887.f_14 != -1)
		flag = func_198(bParam4, bParam5);

	if (flag)
		func_431();

	if (num >= iParam2)
	{
		num = 0;
		return 0;
	}

	num = 0;
	return 1;
}

void func_187() // Position - 0x7844 Hash - 0xDBC09BE2 ^0x41DDC89A
{
	if (func_37() == -1)
		if (!func_432(18, &(Global_1940252.f_11641)))
			return;

	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1940252.f_11641, 0, "satchel_elements/name(id=%x):texture0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1940252.f_11641, 1, "satchel_elements/name(id=%x):texturedictionary0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1940252.f_11641, 2, "satchel_elements/name(id=%x):name0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1940252.f_11641, 3, "satchel_elements/name(id=%x):description0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1940252.f_11641, 4, "satchel_elements/name(id=%x):category0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1940252.f_11641, 5, "satchel_elements/name(id=%x):colorid0");
	return;
}

Hash func_188() // Position - 0x78CE Hash - 0xE121FB43 ^0xE121FB43
{
	Hash i;

	for (i = 0; i < 12; i = i + 1)
	{
		if (Global_1940252.f_11564[i] == Global_1940252.f_11587)
			return i;
	}

	return 0;
}

void func_189(Hash hParam0) // Position - 0x7904 Hash - 0x98110865 ^0xC55D992B
{
	Global_1940252.f_11562 = 0;

	if (!Global_1940252.f_9)
	{
		func_192(0);
		func_433();
	}
	else if (Global_1940252.f_11587 != -2074770370 && Global_1940252.f_11587 != -283002878 && Global_1940252.f_11587 != -889932290 && Global_1940252.f_11587 != 822208792 && Global_1940252.f_11587 != -182626652 && Global_1940252.f_11587 != -693134279)
	{
		func_46(Global_1940252.f_11587);
	}
	else
	{
		func_192(0);
		func_433();
	}

	func_434(hParam0, 0, "ALL EXCLUDING CLOTHING", joaat("satchel_nav_all"));
	func_434(hParam0, -1666604090, "Provisions", joaat("satchel_nav_provisions"));
	func_434(hParam0, -96974025, "Remedies", joaat("satchel_nav_remedies"));
	func_434(hParam0, -1268291907, "Ingredients", joaat("satchel_nav_ingredients"));
	func_434(hParam0, -1559802791, "Materials", joaat("satchel_nav_materials"));
	func_434(hParam0, -156634416, "Kit", joaat("satchel_nav_kit"));
	func_434(hParam0, 1561961676, "Valuables", joaat("satchel_nav_valuables"));
	func_434(hParam0, 1061777683, "Documents", joaat("satchel_nav_documents"));

	if (func_295(joaat("kit_collectors_bag"), 1))
		func_434(hParam0, 1783698482, "Collections", -1401643540);

	func_435(hParam0);
	func_436(hParam0);
	func_437(hParam0);

	if (func_33(false))
		if (func_274() == 2)
			func_192(-693134279);
		else
			func_192(-182626652);
	else if (func_247(-283002878))
		func_192(-283002878);

	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940252.f_11615, Global_1940252.f_11562);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940252.f_11617, func_188());
	return;
}

BOOL func_190(Hash hParam0) // Position - 0x7AD8 Hash - 0x4F6A761A ^0x4F6A761A
{
	var unk;

	return func_438(hParam0, &unk);
}

int func_191(Hash hParam0, char* sParam1, Hash hParam2, char* sParam3, Hash hParam4) // Position - 0x7AE8 Hash - 0x15FD351B ^0x33CFE349
{
	int num;
	Hash hash;

	num = Global_1940252.f_11577;

	if (num >= 3)
		return -1;

	if (!func_254(sParam3, &(Global_1940252.f_11578[num /*2*/].f_1), &Global_1940252.f_11578[num /*2*/], hParam4, false))
		return -1;

	Global_1940252.f_11577 = Global_1940252.f_11577 + 1;
	hash = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(hParam0, sParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "label", hParam2);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(hParam0, -1, -1287062382, hash);
	return num;
}

void func_192(int iParam0) // Position - 0x7B61 Hash - 0xD400177 ^0x917DE313
{
	Hash hash;

	if (Global_1940252.f_11587 != iParam0)
	{
		Global_1940252.f_11587 = iParam0;
		Global_1940252.f_11597 = 1;
	}

	hash = func_188();
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940252.f_11617, hash);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940252.f_11616, hash);
	func_439(Global_1940252.f_11587 != -283002878 && Global_1940252.f_11587 != -889932290);
	return;
}

void func_193(int iParam0, var uParam1, BOOL bParam2) // Position - 0x7BC9 Hash - 0xC59351E7 ^0xC59351E7
{
	func_192(iParam0);

	if (!bParam2)
		func_15(iParam0);

	return;
}

int func_194() // Position - 0x7BE3 Hash - 0x9F95332D ^0xEE439935
{
	int num;
	int num2;

	if (Global_1940252.f_40 == 0)
	{
		Global_1940252.f_11563 = 0;
	}
	else
	{
		num = Global_1940252.f_11563;
		num2 = Global_1940252.f_11562 - 1;
	
		switch (Global_1940252.f_40)
		{
			case -2074770370:
			case -693134279:
			case -182626652:
				Global_1940252.f_11563 = num2;
				break;
		}
	
		if (Global_1940252.f_40 == -283002878)
			if (func_33(false))
				Global_1940252.f_11563 = num2 - 1;
			else
				Global_1940252.f_11563 = num2;
	
		func_126(num);
		return 1;
	}

	return 0;
}

BOOL func_195() // Position - 0x7C76 Hash - 0x7AD82543 ^0x1E438C72
{
	return Global_1915656.f_20637 || Global_1915656.f_22504.f_1;
}

void func_196() // Position - 0x7C94 Hash - 0xC672FBE7 ^0xBD32E6D8
{
	if (Global_1572887.f_14 == -1)
		return;

	Global_1072759.f_2 = 0;
	return;
}

void func_197(var uParam0) // Position - 0x7CB0 Hash - 0xC36F4037 ^0xF700179F
{
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(*uParam0);

	while (Global_1940252.f_11577 > 0)
	{
		Global_1940252.f_11577 = Global_1940252.f_11577 - 1;
		func_253(Global_1940252.f_11578[Global_1940252.f_11577 /*2*/].f_1);
	}

	return;
}

BOOL func_198(BOOL bParam0, BOOL bParam1) // Position - 0x7CF4 Hash - 0x8CDC02F2 ^0xDB4E8541
{
	int i;

	if (Global_1572887.f_13)
		return 0;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::NETWORK_SESSION_IS_TRANSITIONING())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && Global_1572887 < 39)
		{
		}
		else
		{
			return 1;
		}
	}

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return 1;

	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
		{
			case 0:
				return 1;
		
			case 1:
				return 1;
		
			case 2:
				if (!bParam0)
					return 1;
				break;
		
			case 3:
				return 1;
		
			case 4:
				return 1;
		
			default:
				return 1;
		}
	}

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i) == 1976253964)
			return 1;
	}

	return 0;
}

int func_199(BOOL bParam0) // Position - 0x7DD4 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_37() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_200(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x7E15 Hash - 0x4C66E068 ^0x110655B4
{
	int num;
	int size;
	int i;
	var unk;
	var unk15;
	int num2;

	if (func_440(Global_33))
		bParam2 = true;

	num = -1;
	i = 0;
	unk.f_9 = joaat("SLOTID_NONE");

	if (Global_1940085.f_80.f_2 == 0)
	{
		num = INVENTORY::_INVENTORY_CREATE_SORTED_COLLECTION(func_199(false), 32, &size);
	
		if (num < 0)
		{
		}
		else
		{
			if (size > 0)
			{
				for (i = 0; i < 32; i = i + 1)
				{
					if (!func_239(&unk, i, num, size))
					{
					}
					else if (!func_441(unk))
					{
					}
					else
					{
						if (unk.f_4 == -1115561122)
						{
							if (Global_1110244.f_21.f_127)
							{
							}
							else if (bParam1)
							{
								func_442(iParam0, unk.f_4, true);
							}
							else if (bParam2)
							{
								func_442(iParam0, unk.f_4, false);
							}
							else if (unk.f_4 != 1259508039)
							{
								func_442(iParam0, unk.f_4, func_443(unk.f_4));
							}
						}
					
						if (bParam1)
							func_442(iParam0, unk.f_4, true);
						else if (bParam2)
							func_442(iParam0, unk.f_4, false);
						else if (unk.f_4 != 1259508039)
							func_442(iParam0, unk.f_4, func_443(unk.f_4));
					}
				}
			}
		
			func_253(num);
		}
	}

	unk15 = { func_444(0, joaat("SLOTID_SATCHEL"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (func_445(&unk15, &num, &size, bParam3))
	{
		if (Global_1940085.f_80.f_2 > size)
		{
			func_253(num);
			return true;
		}
	
		num2 = 0;
	
		for (i = Global_1940085.f_80.f_2; i <= size - 1; i = i + 1)
		{
			num2 = num2 + 1;
		
			if (num2 > 100)
			{
				Global_1940085.f_80.f_2 = i;
				func_253(num);
				return false;
			}
		
			if (func_239(&unk, i, num, size))
			{
				if (!func_441(unk))
				{
				}
				else
				{
					if (unk.f_4 == -1115561122)
					{
						if (Global_1110244.f_21.f_127)
						{
						}
						else if (bParam1)
						{
							func_442(iParam0, unk.f_4, true);
						}
						else if (bParam2)
						{
							func_442(iParam0, unk.f_4, false);
						}
						else if (unk.f_4 != 1259508039)
						{
							func_442(iParam0, unk.f_4, func_443(unk.f_4));
						}
					}
				
					if (bParam1)
						func_442(iParam0, unk.f_4, true);
					else if (bParam2)
						func_442(iParam0, unk.f_4, false);
					else if (unk.f_4 != 1259508039)
						func_442(iParam0, unk.f_4, func_443(unk.f_4));
				}
			}
		}
	
		func_253(num);
	}

	return true;
}

void func_201(int iParam0) // Position - 0x800B Hash - 0xDB2B008E ^0xE38E911C
{
	func_442(iParam0, joaat("weapon_kit_binoculars"), func_54(32));
	func_442(iParam0, joaat("weapon_kit_binoculars_improved"), func_54(32));
	func_442(iParam0, joaat("weapon_kit_camera"), func_54(64));
	func_442(iParam0, 332793555, func_54(131072));
	func_442(iParam0, joaat("kit_horse_brush"), func_54(1024));
	func_442(iParam0, joaat("weapon_kit_metal_detector"), func_54(32768) && !func_235(256));
	func_442(iParam0, 1401465909, func_54(524288));
	func_446(iParam0, func_54(8192));
	func_447(iParam0, func_54(128));

	if (!Global_1110244.f_21.f_127)
		func_442(iParam0, -1115561122, func_54(262144));

	func_448(iParam0, func_54(4));
	func_449(iParam0, func_54(8));
	func_450(iParam0, func_54(1));
	return;
}

BOOL func_202(Ped pedParam0) // Position - 0x80F8 Hash - 0xBEDFC3C1 ^0xBEDFC3C1
{
	return func_451(pedParam0, 4) || func_451(pedParam0, 5);
}

BOOL func_203(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x8114 Hash - 0x37FB14EB ^0x7E496A4A
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

BOOL func_204(Ped pedParam0) // Position - 0x813D Hash - 0xF2F988FE ^0xA63CD631
{
	Hash scenarioPointTypePedIsUsing;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!PED::IS_PED_USING_ANY_SCENARIO(pedParam0))
		return false;

	scenarioPointTypePedIsUsing = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(pedParam0);

	if (scenarioPointTypePedIsUsing == 0)
		return false;

	if (scenarioPointTypePedIsUsing == joaat("world_player_sleep_ground") || scenarioPointTypePedIsUsing == joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS") || scenarioPointTypePedIsUsing == joaat("world_human_sleep_ground_arm") || scenarioPointTypePedIsUsing == joaat("world_human_sleep_ground_pillow") || scenarioPointTypePedIsUsing == joaat("world_animal_dog_sleeping") || scenarioPointTypePedIsUsing == joaat("prop_human_sleep_bed_pillow") || scenarioPointTypePedIsUsing == joaat("prop_player_prpty_save_game") || scenarioPointTypePedIsUsing == joaat("prop_human_sleep_bed_pillow_left") || scenarioPointTypePedIsUsing == joaat("prop_human_sleep_bed_pillow_right") || scenarioPointTypePedIsUsing == joaat("prop_player_sleep_tent_a_frame"))
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

BOOL func_205(BOOL bParam0) // Position - 0x8233 Hash - 0x61C895A6 ^0xAA5E261A
{
	Player player;
	Player player2;

	player = PLAYER::PLAYER_ID();
	player2 = player;

	if (Global_1148185[player2 /*10*/].f_4)
	{
		if (bParam0)
			func_144("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_IN_COMBAT(Global_33, 0))
	{
		if (bParam0)
			func_144("CAMP_UNUSABLE_IN_COMBAT", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_452(PLAYER::PLAYER_ID(), true, true, false))
	{
		if (bParam0)
			func_144("CAMP_UNUSABLE_WANTED", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1))
	{
		if (bParam0)
			func_144("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_453(joaat("simple_crafting")) || SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("simple_crafting")) > 0)
	{
		if (bParam0)
			func_144("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		if (bParam0)
			func_144("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(Global_33, false) || !PED::IS_PED_RAGDOLL(Global_33) && PED::IS_PED_ON_VEHICLE(Global_33, false) || PED::IS_PED_IN_ANY_BOAT(Global_33) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()) || PED::IS_PED_JACKING(Global_33))
	{
		if (bParam0)
			func_144("CAMP_UNUSABLE_ON_VEHICLE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_220(0, true, true) && !func_454(1))
	{
		if (bParam0)
			func_144("CAMP_UNUSABLE_MISSIONS", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_455())
	{
		if (bParam0)
			func_144("CAMP_UNUSABLE_CAMERA", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_235(8))
	{
		if (bParam0)
			func_144("CAMP_UNUSABLE_ALREADY_IN_A_CAMP", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_12(Global_33))
	{
		if (bParam0)
			func_144("CAMP_UNUSABLE_LOOTING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_ANY_HOSTILE_PED_NEAR_POINT(Global_33, Global_34, 10f))
	{
		if (bParam0)
			func_144("CAMP_UNUSABLE_HOSTILE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_456())
	{
		if (bParam0)
			func_144("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (INTERIOR::IS_INTERIOR_SCENE())
	{
		if (bParam0)
			func_144("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (Global_1915656.f_20637 || Global_1915656.f_22504.f_1)
	{
		if (bParam0)
			func_144("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_206(int iParam0, int iParam1) // Position - 0x84CA Hash - 0x2C0BA169 ^0xDCFC749C
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940252.f_1556.f_44.f_87);
}

BOOL func_207(BOOL bParam0) // Position - 0x84E1 Hash - 0xC93D526E ^0x5F9AA778
{
	if (PED::IS_PED_HOGTIED(Global_33))
	{
		if (bParam0)
			func_144("ITEM_UNUSABLE_HOGTIED", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_HOGTYING(Global_33))
	{
		if (bParam0)
			func_144("ITEM_UNUSABLE_HOGTYING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_LASSOED(Global_33))
	{
		if (bParam0)
			func_144("ITEM_UNUSABLE_LASSOED", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_BEING_DRAGGED(Global_33))
		return false;

	if (!(PED::_GET_LASSO_TARGET(Global_33) == 0))
		return false;

	if (PED::_IS_PED_DRAGGING(Global_33))
		return false;

	if (PED::GET_PED_IS_BEING_GRAPPLED(Global_33))
		return false;

	if (PED::GET_PED_IS_GRAPPLING(Global_33) || PED::IS_PED_PERFORMING_MELEE_ACTION(Global_33, 4096, 0))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_33, 32768, 0))
		return false;

	return true;
}

BOOL func_208(BOOL bParam0) // Position - 0x85C0 Hash - 0xC93D526E ^0x5B8BB0B9
{
	if (PED::_IS_PED_SLIDING(Global_33))
	{
		if (bParam0)
			func_144("ITEM_UNUSABLE_SLIDING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_SWIMMING(Global_33))
	{
		if (bParam0)
			func_144("ITEM_UNUSABLE_SWIMMING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_CLIMBING(Global_33))
	{
		if (bParam0)
			func_144("ITEM_UNUSABLE_CLIMBING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_204(Global_33))
	{
		if (bParam0)
			func_144("ITEM_UNUSABLE_SLEEPING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_FALLING(Global_33))
	{
		if (bParam0)
			func_144("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_FALLING_OVER(Global_33))
	{
		if (bParam0)
			func_144("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_RAGDOLL(Global_33))
	{
		if (bParam0)
			func_144("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_VAULTING(Global_33))
	{
		if (bParam0)
			func_144("ITEM_UNUSABLE_JUMPING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_JUMPING(Global_33))
	{
		if (bParam0)
			func_144("ITEM_UNUSABLE_JUMPING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (TASK::IS_PED_GETTING_UP(Global_33))
	{
		if (bParam0)
			func_144("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_209(BOOL bParam0) // Position - 0x8727 Hash - 0x135152DF ^0x60FAC03C
{
	if (PED::IS_PED_HANGING_ON_TO_VEHICLE(Global_33))
	{
		if (bParam0)
			func_144("ITEM_UNUSABLE_HANGING_ON_VEHICLE", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_210() // Position - 0x8753 Hash - 0x9D650775 ^0xA87234F9
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_391(Global_1051268) && Global_1572887.f_8 & true != 0)
		return true;

	return false;
}

BOOL func_211() // Position - 0x87AB Hash - 0xC2ABD0AE ^0xC2ABD0AE
{
	return Global_1235687.f_9478 != -1;
}

BOOL func_212(int iParam0, int iParam1) // Position - 0x87BC Hash - 0x3ABC69C ^0xFF17F115
{
	if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::IS_PED_IN_MELEE_COMBAT(Global_33) || func_228(iParam1, 1024) && PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(Global_33, Global_34, iParam0, iParam1) > 0)
		return true;

	return false;
}

BOOL func_213() // Position - 0x8807 Hash - 0xFE68D5E0 ^0xEE663C0
{
	return PED::_GET_PLAYER_PED_WATER_DEPTH(Global_33) >= 1f;
}

BOOL func_214(BOOL bParam0) // Position - 0x8818 Hash - 0x3178AE96 ^0xE656FC67
{
	Player animal;

	animal = _INVALID_PLAYER_INDEX();

	if (TASK::_0x756C7B4C43DF0422(1))
		animal = TASK::_0x351F74ED6177EBE7();
	else
		animal = HUD::_0x0501D52D24EA8934(1);

	if (!ENTITY::DOES_ENTITY_EXIST(animal))
	{
		if (bParam0)
			func_144("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (!func_217(animal))
	{
		if (bParam0)
			func_144("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (!ENTITY::IS_ENTITY_DEAD(animal) && !TASK::IS_PED_IN_WRITHE(animal))
	{
		if (bParam0)
			func_144("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_33, animal))
	{
		if (bParam0)
			func_144("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_215(BOOL bParam0) // Position - 0x88DA Hash - 0x32194903 ^0x62D6D268
{
	Player outEntity;
	Player horse;

	if (PED::IS_PED_ON_MOUNT(Global_33))
	{
		return true;
	}
	else if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::GET_PLAYER_INDEX(), &outEntity, false, false))
	{
		if (!func_217(outEntity))
		{
			if (bParam0)
				func_144("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, true);
		
			return false;
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(PED::_GET_VEHICLE_DRAFT_HORSE_IS_ATTACHED_TO(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity))))
		{
			if (bParam0)
				func_144("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, true);
		
			return false;
		}
	
		if (TASK::IS_PED_IN_WRITHE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity)))
		{
			if (bParam0)
				func_144("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, true);
		
			return false;
		}
	
		if (func_248(outEntity, true, true) > 2f)
		{
			if (bParam0)
				func_144("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, true);
		
			return false;
		}
	
		if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_33, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity)))
		{
			if (bParam0)
				func_144("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, true);
		
			return false;
		}
	
		return true;
	}

	horse = HUD::_0x0501D52D24EA8934(1);

	if (!func_217(horse))
	{
		if (bParam0)
			func_144("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (TASK::IS_PED_IN_WRITHE(horse))
	{
		if (bParam0)
			func_144("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (ENTITY::DOES_ENTITY_EXIST(PED::_GET_VEHICLE_DRAFT_HORSE_IS_ATTACHED_TO(horse)))
	{
		if (bParam0)
			func_144("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_33, horse))
	{
		if (bParam0)
			func_144("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_216(Ped pedParam0) // Position - 0x8A62 Hash - 0xE0409C42 ^0xE0409C42
{
	return func_451(pedParam0, 7);
}

BOOL func_217(Player plParam0) // Position - 0x8A71 Hash - 0x7410A97D ^0x34EB7DBA
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(plParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(plParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(entityModel);
}

BOOL func_218() // Position - 0x8AA3 Hash - 0xC1143497 ^0x6DF3C037
{
	int scenarioPointTypePedIsUsing;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return false;

	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_33))
	{
		scenarioPointTypePedIsUsing = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33);
		num = scenarioPointTypePedIsUsing;
	
		if (num != joaat("world_player_dynamic_kneel") && num != joaat("WORLD_PLAYER_MP_STEW_POT_DONATION"))
			return true;
	}

	return false;
}

BOOL func_219() // Position - 0x8AEE Hash - 0x68C4D93B ^0x1CEB8A28
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return 0;

	if (!PED::IS_PED_IN_ANY_TRAIN(Global_33))
		return 0;

	return 0;
}

BOOL func_220(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x8B15 Hash - 0xB13E2226 ^0x3E0E04BA
{
	if (Global_1572887.f_14 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1900460.f_67;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1900460.f_68;
	
		if (func_210())
			return true;
	
		if (Global_1072759.f_3 && !Global_1572887.f_10)
			if (Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_481 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
				return true;
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
			return Global_1900460.f_67;
		else
			return Global_1900460.f_68;
	}

	if (iParam0 == 0 && func_391(func_390(0)))
		return true;

	if (Global_1940199 && 81919 & -1 - iParam0 != false)
		return true;

	if (!bParam1)
		if (MISC::GET_GAME_TIMER() - 5000 < Global_1900595)
			return true;

	switch (func_458(func_390(0)))
	{
		case -1:
			return false;
	
		case 2:
			return iParam0 & 1 == 0;
	
		case 3:
			return iParam0 & 16 == 0;
	
		case 4:
			return iParam0 & 32 == 0;
	
		case 5:
			return iParam0 & 2 == 0;
	
		case 7:
			return iParam0 & 1024 == 0;
	
		default:
		
	}

	return false;
}

BOOL func_221() // Position - 0x8C8B Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1913634.f_1578;
}

BOOL func_222() // Position - 0x8C9A Hash - 0xDF34329C ^0xA25E1085
{
	if (func_210() || Global_1572887.f_72.f_40 > 10 || func_459())
		if (!func_460() && Global_265213.f_122484.f_80.f_16.f_2 != -504335712 && !func_461(Global_265213.f_122484.f_80.f_16.f_3))
			return true;

	return false;
}

BOOL func_223() // Position - 0x8D04 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1953292.f_3502;
}

void func_224(int iParam0, int iParam1) // Position - 0x8D13 Hash - 0xF55E891F ^0xF55E891F
{
	func_462(iParam0, iParam1);
	return;
}

int func_225(int iParam0) // Position - 0x8D23 Hash - 0xFFB858B2 ^0xFFB858B2
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
	
		case -1719060085:
			return 16;
	
		case -999503751:
			return 1;
	
		case -525676072:
			return 4;
	
		case 81053684:
			return 8;
	
		case 119907797:
			return 32;
	
		case 1388798186:
			return 64;
	
		default:
		
	}

	return 0;
}

BOOL func_226(int iParam0) // Position - 0x8D7E Hash - 0x8364EAF ^0x20FEFCB3
{
	return Global_1953292.f_3352.f_33.f_6 && iParam0 != false;
}

int func_227() // Position - 0x8D96 Hash - 0x9F572D68 ^0x10089971
{
	return 1039645941;
}

BOOL func_228(int iParam0, int iParam1) // Position - 0x8DA3 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_229(BOOL bParam0) // Position - 0x8DB2 Hash - 0x4C19DF92 ^0xC4409E58
{
	Entity entity;

	if (func_8(1))
	{
		if (bParam0)
			func_144("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_8(2) && MISC::GET_GAME_TIMER() >= Global_17395)
	{
		if (bParam0)
		{
			entity = func_463(Global_33);
		
			if (entity != 0)
			{
				if (ENTITY::GET_IS_ANIMAL(entity))
				{
					func_144("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, true);
					return false;
				}
			}
		
			func_144("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, true);
		}
	
		return false;
	}

	if (func_8(4194304))
		return false;

	return true;
}

BOOL func_230(BOOL bParam0, BOOL bParam1) // Position - 0x8E45 Hash - 0xDC513764 ^0x4FAA6BE0
{
	var unk;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		PED::_0x6B67320E0D57856A(Global_33, &unk, 2, false);
	
		if (bParam1)
		{
			switch (unk.f_1)
			{
				case 4:
					return true;
			
				default:
				
			}
		}
	
		if (bParam0)
			func_144("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_231(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x8E95 Hash - 0xB3520FCB ^0xE74487EC
{
	Vehicle vehiclePedIsUsing;
	Hash entityModel;

	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(Global_33))
	{
		return false;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_33, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
			return false;
	
		vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_33);
		entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsUsing);
	
		switch (entityModel)
		{
			case joaat("breach_cannon"):
			case joaat("gatling_gun"):
			case joaat("gatlingmaxim02"):
			case joaat("hotchkiss_cannon"):
				if (bParam0)
					func_144("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, true);
			
				return false;
		
			case joaat("rowboat"):
			case joaat("handcart"):
				if (bParam0)
					func_144("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, true);
			
				return false;
		}
	
		if (!func_228(iParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_33))
			if (bParam2 || VEHICLE::GET_DRIVER_OF_VEHICLE(vehiclePedIsUsing) == Global_33)
				return false;
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_33))
	{
		return false;
	}

	return true;
}

BOOL func_232(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x8F82 Hash - 0xBA023B92 ^0x16E0B707
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

BOOL func_233(Ped pedParam0) // Position - 0x8FDB Hash - 0x28235D58 ^0x5BD1001B
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true);

	return false;
}

BOOL func_234(Ped pedParam0, BOOL bParam1) // Position - 0x8FF8 Hash - 0x6BE4D4B ^0xC7F6BBCD
{
	float entitySpeed;
	float num;

	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
			return false;
	
		if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
			return false;
	}

	entitySpeed = ENTITY::GET_ENTITY_SPEED(pedParam0);
	num = PED::_0xCA95924C893A0C91(pedParam0, entitySpeed);

	if (num <= 1.5f)
		return true;

	return false;
}

BOOL func_235(BOOL bParam0) // Position - 0x904E Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1958675 && bParam0 != false;
}

void func_236(int iParam0, int iParam1) // Position - 0x905F Hash - 0xF55E891F ^0xF55E891F
{
	func_464(iParam0, iParam1);
	return;
}

BOOL func_237() // Position - 0x906F Hash - 0xA30B23E7 ^0xAB29D7A2
{
	if (Global_1940252.f_11596 != Global_1940252.f_41.f_203 - 1 || func_185(func_174(0), Global_1940252.f_11588, false, true, true) > 0 || Global_1940252.f_11596 == 15)
		return true;

	func_100(0);

	if (Global_1940252.f_7)
		return true;

	return false;
}

void func_238(int iParam0) // Position - 0x90CE Hash - 0x29A8F290 ^0x1CB9B41C
{
	Global_1940252.f_10 = iParam0;
	return;
}

BOOL func_239(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x90DE Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_240(int iParam0) // Position - 0x9119 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case -1649851713:
		case -997505963:
		case 1005272:
		case 348853959:
		case 359221401:
		case 1045621973:
		case 1463321587:
		case 1583044470:
		case 1651573695:
			return true;
	}

	return false;
}

BOOL func_241(Hash hParam0, int iParam1) // Position - 0x9167 Hash - 0x930C4241 ^0x2C8F95BA
{
	return iParam1 == func_10(hParam0, 1224357681);
}

BOOL func_242(Hash hParam0) // Position - 0x917D Hash - 0xA5F6DAC7 ^0xB374C77C
{
	int i;

	if (Global_1940252.f_17.f_16 > 0)
	{
		for (i = 0; i < Global_1940252.f_17.f_16; i = i + 1)
		{
			if (Global_1940252.f_17[i /*3*/] != hParam0)
			{
			}
			else if (Global_1940252.f_17[i /*3*/].f_1 & 1 != 0)
			{
				return false;
			}
		}
	}

	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY"):
			return false;
	}

	if (func_19(hParam0, 1989861793) && func_368(func_465(hParam0), func_369(true), joaat("SLOTID_SATCHEL"), false, false, false) > 0)
		return false;

	if (func_33(false))
	{
		if (Global_1940252.f_11587 == -182626652 && !func_273(hParam0, Global_1915656.f_20241.f_1))
			return false;
	
		if (Global_1940252.f_11587 == 0 && ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0) || func_466(hParam0))
			return false;
	
		switch (Global_1915656.f_20241)
		{
			case 2:
				if (!func_467(hParam0))
					return false;
				break;
		}
	}

	if (func_19(hParam0, -805003139))
		if (!UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
			return false;

	if (func_142(hParam0) == joaat("UPGRADE"))
		if (!func_19(hParam0, -1540973036) && !func_19(hParam0, 1192444843))
			return false;
		else if (hParam0 == 1872063208 || hParam0 == 1309979101)
			return false;

	return true;
}

void func_243(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) // Position - 0x930E Hash - 0x5DC20BFF ^0xB83B9BC0
{
	Hash hash;
	Hash dataContainerFromChildIndex;
	Hash hash2;
	BOOL flag;
	int num;
	int num2;

	if (func_17(uParam0.f_4, 0))
	{
		hash = func_468(uParam0.f_4);
	
		if (hash == 0)
			hash = func_267(uParam0.f_4, false);
	
		dataContainerFromChildIndex = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940252.f_11614, Global_1940252.f_11595);
	
		if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(dataContainerFromChildIndex))
			return;
	
		hash2 = dataContainerFromChildIndex;
		flag = func_469(uParam0.f_4);
	
		if (func_19(uParam0.f_4, 1397200408))
			uParam0.f_10 = 1;
	
		if (func_317(uParam0.f_4, joaat("DEFAULT")) != 0)
		{
			num = func_368(uParam0.f_4, uParam0.f_5, uParam0.f_9, false, false, false);
		
			if (uParam0.f_9 != joaat("SLOTID_SATCHEL") && num > uParam0.f_11)
				return;
		
			uParam0.f_11 = num;
		}
	
		num2 = joaat("COLOR_PURE_WHITE");
	
		if (func_470(uParam0.f_4))
			if (func_19(uParam0.f_4, 1816585950))
				num2 = joaat("color_yellow");
		else if (func_471(uParam0.f_4))
			num2 = joaat("color_yellow");
	
		DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(32768, hash2, hash, uParam0.f_11, uParam0.f_10, flag, num2, uParam0.f_4, "");
		Global_1940252.f_11595 = Global_1940252.f_11595 + 1;
	}

	return;
}

BOOL func_244(int iParam0) // Position - 0x943E Hash - 0x8858DE32 ^0x8858DE32
{
	return iParam0 > -1 && iParam0 < 180;
}

BOOL func_245(int iParam0, Ped pedParam1) // Position - 0x9454 Hash - 0x1BBE1A8B ^0x2123968C
{
	int num;
	var unk;
	float num2;
	float num3;

	num = func_472(iParam0);

	if (!func_278(num))
		return false;

	unk = { Global_1051832.f_92[num /*75*/].f_3 };

	if (iParam0 == 154)
		unk = { func_473(PLAYER::GET_PLAYER_INDEX()) };

	if (_IS_NULL_VECTOR(unk))
		return false;

	num2 = func_475(iParam0);

	if (num == 10 || num == 15 || num == 29)
	{
		num3 = func_476(pedParam1, unk, false);
	
		if (num3 < num2)
			return true;
	}
	else if (num == 2)
	{
		if (func_476(pedParam1, unk, false) < num2)
			return true;
	}

	return false;
}

BOOL func_246(Ped pedParam0) // Position - 0x9504 Hash - 0x6D7E69FC ^0x1FD723DA
{
	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	return PED::IS_PED_ON_MOUNT(pedParam0);
}

BOOL func_247(int iParam0) // Position - 0x951F Hash - 0x5E96C64E ^0x9919C25E
{
	if (iParam0 == Global_1940252.f_40)
		return 1;

	return 0;
}

float func_248(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x9537 Hash - 0x2753566D ^0x575C60D0
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(plParam0))
		return -1f;

	return func_477(Global_33, plParam0, bParam1, bParam2);
}

int func_249(int iParam0) // Position - 0x9560 Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_38.f_289;

	return iParam0;
}

BOOL func_250(int iParam0) // Position - 0x9579 Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_249(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1902887[iParam0 /*43*/]))
		return true;

	return false;
}

float func_251(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x95B1 Hash - 0x6A10E689 ^0x100E8618
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_252(int iParam0) // Position - 0x95CF Hash - 0x9BB7FBA3 ^0xA973C68A
{
	Ped model;
	int num;
	int defaultMaxAttributeRank;
	float num2;
	Any any;
	int num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	float num9;
	float num10;

	iParam0 = func_249(iParam0);

	if (iParam0 == -1)
		return -1f;

	if (iParam0 >= 7)
		return -1f;

	model = func_478(iParam0);

	if (!STREAMING::IS_MODEL_VALID(model))
		return -1f;

	num = func_479(iParam0);
	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(model, 7);
	num2 = TASK::_0xEB67D4E056C85A81(num);
	any = TASK::_0x78D8C1D4EB80C588(num);

	if (num >= defaultMaxAttributeRank)
		return num2;

	num3 = func_479(iParam0) + 1;
	num4 = func_480(iParam0);
	num5 = BUILTIN::TO_FLOAT(func_481(model, num));
	num6 = BUILTIN::TO_FLOAT(func_481(model, num3));
	num7 = num4 - num5;
	num8 = num6 - num5;
	num9 = num7 / num8;
	num10 = func_482(num2, any, num9);
	return num10;
}

BOOL func_253(int iParam0) // Position - 0x9687 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return false;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return false;

	return true;
}

BOOL func_254(char* sParam0, int iParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x96A8 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_199(bParam4), sParam0, hParam3, piParam2);

	if (*iParam1 >= 0)
		return true;

	return false;
}

void func_255() // Position - 0x96CF Hash - 0xFBE678B9 ^0x8656B441
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11634, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11633, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11630, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11631, false);
	return;
}

Hash func_256(Hash hParam0) // Position - 0x9707 Hash - 0x2587337E ^0x705E4559
{
	int num;

	num = func_257(hParam0);

	if (num != 0 && !func_483(func_257(hParam0)) && !func_484(func_257(hParam0)))
		if (!func_258(num))
			return -1994084079;

	return func_289(hParam0);
}

int func_257(Hash hParam0) // Position - 0x9756 Hash - 0x4DAA6E6F ^0x4DAA6E6F
{
	switch (hParam0)
	{
		case joaat("consumable_herb_common_bulrush"):
			return 11;
	
		case joaat("consumable_herb_oleander_sage"):
			return 27;
	
		case joaat("consumable_herb_parasol_mushroom"):
			return 29;
	
		case joaat("consumable_herb_black_berry"):
			return 5;
	
		case joaat("provision_wldflwr_cardinal_flower"):
			return 44;
	
		case joaat("consumable_herb_sage"):
			return 35;
	
		case joaat("provision_wldflwr_creek_plum"):
			return 46;
	
		case joaat("consumable_herb_evergreen_huckleberry"):
			return 16;
	
		case joaat("consumable_herb_english_mace"):
			return 15;
	
		case joaat("consumable_herb_bay_bolete"):
			return 4;
	
		case joaat("provision_wldflwr_blood_flower"):
			return 43;
	
		case joaat("consumable_herb_chanterelles"):
			return 8;
	
		case joaat("consumable_herb_rams_head"):
			return 32;
	
		case joaat("consumable_herb_wintergreen_berry"):
			return 52;
	
		case joaat("consumable_herb_indian_tobacco"):
			return 21;
	
		case joaat("provision_wldflwr_chocolate_daisy"):
			return 45;
	
		case joaat("consumable_herb_yarrow"):
			return 53;
	
		case joaat("consumable_herb_wild_mint"):
			return 51;
	
		case joaat("consumable_herb_burdock_root"):
			return 7;
	
		case joaat("provision_wldflwr_wisteria"):
			return 48;
	
		case joaat("consumable_herb_violet_snowdrop"):
			return 39;
	
		case joaat("provision_wldflwr_texas_blue_bonnet"):
			return 41;
	
		case joaat("consumable_herb_milkweed"):
			return 24;
	
		case joaat("consumable_herb_prairie_poppy"):
			return 30;
	
		case joaat("consumable_herb_oregano"):
			return 28;
	
		case joaat("consumable_herb_red_raspberry"):
			return 34;
	
		case joaat("consumable_herb_wild_feverfew"):
			return 50;
	
		case joaat("consumable_herb_currant"):
			return 6;
	
		case joaat("provision_wldflwr_bitterweed"):
			return 42;
	
		case joaat("consumable_herb_wild_carrots"):
			return 49;
	
		case joaat("provision_wldflwr_agarita"):
			return 40;
	
		case joaat("consumable_herb_ginseng"):
			return 2;
	
		case joaat("provision_wldflwr_wild_rhubarb"):
			return 47;
	
		case joaat("consumable_herb_vanilla_flower"):
			return 38;
	
		case joaat("consumable_herb_creeping_thyme"):
			return 12;
	}

	return 0;
}

BOOL func_258(int iParam0) // Position - 0x9931 Hash - 0x49EE3EAE ^0x49EE3EAE
{
	if (!func_485(iParam0))
		return false;

	return func_486(iParam0, 4, true);
}

void func_259(Hash hParam0, var uParam1) // Position - 0x994F Hash - 0x781E5051 ^0xE6B400F0
{
	if (func_43())
	{
		func_487(true);
	
		if (func_29())
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_488(), 75706034);
		else
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_488(), -31549930);
	
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11634, true);
	}
	else if (func_33(false) || func_43())
	{
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940252.f_11631))
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11630, DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "focusable"));
	}
	else
	{
		func_489(hParam0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_488(), func_490(hParam0));
		func_491(hParam0, uParam1);
	}

	return;
}

BOOL func_260(Hash hParam0) // Position - 0x99EB Hash - 0x335E1728 ^0x335E1728
{
	if (func_261())
		return 0;

	if (Global_1940252.f_11590 == hParam0)
		return 0;

	if (!func_33(false) && !func_43())
	{
		if (func_266(hParam0, false) == 1 || func_19(hParam0, 1291597743) || func_19(hParam0, -928967997) || func_19(hParam0, 747873593) || func_19(hParam0, -189374246))
			return 0;
	
		return 1;
	}

	return 0;
}

BOOL func_261() // Position - 0x9A7A Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1940252.f_12;
}

int func_262(Hash hParam0, BOOL bParam1) // Position - 0x9A88 Hash - 0x7A949BFB ^0xDA5FE858
{
	if (!func_177(hParam0))
		return 0;

	if (func_220(0, false, true))
		return 1;

	if (hParam0 == -171130052)
		if (!func_295(joaat("kit_collector_spade"), 1))
			return 3;
	else if (hParam0 == 1133082501 || hParam0 == -944411166 || hParam0 == 1850181232)
		if (!func_295(joaat("weapon_kit_metal_detector"), 1))
			return 4;

	if (hParam0 == -1820411463)
		if (!func_295(joaat("weapon_kit_metal_detector"), 1))
			return 4;
		else if (!func_492())
			return 5;

	if (bParam1)
		if (Global_17418.f_2992 > 0)
			return 2;

	return 0;
}

int func_263(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x9B43 Hash - 0x68EBB232 ^0xEAD633B4
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_17(hParam0, 0))
		return 0;

	num = func_142(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_423(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_493(hParam0, false);
	}

	if (func_317(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_199(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_494(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_199(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

int func_264(Ped pedParam0, Hash hParam1) // Position - 0x9C05 Hash - 0x83F00AF7 ^0x32031FF8
{
	int num;
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (func_495(hParam1))
		{
			num = 0;
		
			for (i = 0; i < 3; i = i + 1)
			{
				if (Global_1903838.f_113[i /*96*/].f_1 == hParam1)
					num = num + 1;
			}
		
			return num;
		}
		else
		{
			return func_496(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0), hParam1);
		}
	}

	return 0;
}

int func_265(Hash hParam0, BOOL bParam1) // Position - 0x9C63 Hash - 0x19ACB934 ^0xDEF82372
{
	if (!bParam1 || func_311())
		return func_368(hParam0, func_369(true), -2015960939, true, true, false);

	return 0;
}

int func_266(Hash hParam0, BOOL bParam1) // Position - 0x9C92 Hash - 0x71A176E6 ^0x71A176E6
{
	var unk;

	unk = { func_167(hParam0, false, 0) };
	return func_497(hParam0, &unk, false, bParam1);
}

Hash func_267(Hash hParam0, BOOL bParam1) // Position - 0x9CB1 Hash - 0x88397BA6 ^0x88397BA6
{
	Hash hash;

	if (!func_17(hParam0, 0))
		return 0;

	hash = func_498(hParam0, bParam1);

	if (hash != 0)
		return hash;

	return hParam0;
}

int func_268(Hash hParam0) // Position - 0x9CDF Hash - 0x226546DE ^0x3A90FAA0
{
	int num;
	Hash award;
	float num2;
	float num3;
	int num4;
	int num5;
	float value;
	int value2;

	if (!func_17(hParam0, 0))
		return 0;

	num = 0;

	if (func_37() == 0)
	{
		award = 0;
	
		if (func_145(hParam0) == -1553950009)
		{
			award = func_499(hParam0, true);
		}
		else
		{
			switch (Global_1915656.f_20241)
			{
				case 10:
					if (func_19(hParam0, 1010929620))
						award = func_500(hParam0);
					break;
			
				case 15:
					award = func_501(hParam0);
					break;
			}
		}
	
		if (award != 0 && ITEMDATABASE::_ITEMDATABASE_GET_PRIORITY_ACCESS_AWARD(award))
			num = func_270(award, joaat("currency_cash"));
		else
			num = func_502(hParam0, 816454899, true, false);
	}
	else
	{
		num2 = 1f;
		num3 = 1f;
		num4 = Global_1915656.f_20241.f_1;
		num5 = Global_1915656.f_20241;
	
		if (func_244(num4) && func_278(num5))
		{
			if (num5 == 10 || num5 == 15)
				num3 = func_503(num4, hParam0);
		
			num2 = func_504(&(Global_1915656.f_3[num5 /*447*/].f_36), hParam0);
		}
	
		value = num2 + num3;
	
		if (num2 <= 0f)
			return 0;
	
		value = value - (float)BUILTIN::FLOOR(value);
		value2 = func_502(hParam0, 816454899, true, false);
		num = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value2) + (BUILTIN::TO_FLOAT(value2) * value));
	}

	if (num <= 0)
		return 0;

	return num;
}

Hash func_269(Hash hParam0) // Position - 0x9E3E Hash - 0xB8EC44B7 ^0x3F989E4C
{
	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return 362062697;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
			return 1622797153;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
			return 251523924;
	
		case -2102079544:
			return 2068018854;
	
		case -2092697195:
			return -1884018016;
	
		case joaat("provision_pelican_feather"):
			return 74265533;
	
		case joaat("PROVISION_IGUANA_SKIN_POOR"):
			return 1828340319;
	
		case joaat("provision_beaver_fur"):
			return -1583116953;
	
		case joaat("PROVISION_EAGLE_FEATHER"):
			return 1606360364;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return -523607607;
	
		case -2043601589:
			return 2049850175;
	
		case -2040849706:
			return 2129552482;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return -409309194;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return -795926005;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return 117556329;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
			return 195131818;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return 1766735806;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
			return -179784009;
	
		case joaat("PROVISION_BLUEJAY_FEATHER"):
			return -202898890;
	
		case -1946740647:
			return 700750583;
	
		case -1932727774:
			return -1655807359;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return 1521192478;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return 117556329;
	
		case -1924159110:
			return 2065655105;
	
		case joaat("PROVISION_MUSKRAT_FUR_POOR"):
			return -1273558742;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
			return 708951363;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
			return 489332694;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
			return -48308129;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return 2032362047;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
			return -1608525320;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return -2084641708;
	
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 439094686;
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return 727714355;
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return -972505668;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return -252750557;
	
		case joaat("provision_deer_hide"):
			return -1334624683;
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return 1699761828;
	
		case -1821314478:
			return 683975656;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return 1521192478;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return -549843543;
	
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 1467162138;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
			return 708951363;
	
		case -1787430524:
			return -605083879;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return 1445465787;
	
		case joaat("PROVISION_WOLF_HEART"):
			return -742266708;
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return 1176634776;
	
		case joaat("PROVISION_SKUNK_FUR_POOR"):
			return 1854095100;
	
		case joaat("PROVISION_BUFFALO_FUR_POOR"):
			return -1508151163;
	
		case joaat("PROVISION_ARMADILLO_SKIN_POOR"):
			return 144513283;
	
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
			return -1517999735;
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return 2103138183;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return -352732121;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return -729503995;
	
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 1684561350;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return -1925097470;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
			return 2032362047;
	
		case -1638839614:
			return 865783200;
	
		case joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE"):
			return 709722347;
	
		case -1624242931:
			return -1797419634;
	
		case -1621144167:
			return 1825917101;
	
		case joaat("provision_buffalo_horn"):
			return 970250315;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return -252750557;
	
		case joaat("PROVISION_SQUIRREL_PELT_PRISTINE"):
			return -885435577;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
			return -557557374;
	
		case -1572330336:
			return 751785819;
	
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return -1583116953;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return -855155400;
	
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 711086189;
	
		case -1548204069:
			return -1885772129;
	
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return -1028335922;
	
		case joaat("provision_fish_muskie"):
			return 998459086;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return 1662628197;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return -2084641708;
	
		case joaat("provision_fish_bluegill_legendary"):
			return -1900245017;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return -1882667332;
	
		case -1475338121:
			return 2068018854;
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return 1743453709;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return -71380070;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
			return -68530554;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return 513869240;
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return 1743453709;
	
		case -1434083213:
			return -99694979;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return -1925097470;
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return 1943206759;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
			return 340488205;
	
		case joaat("provision_vulture_feather"):
			return 753992067;
	
		case joaat("provision_bear_claw"):
			return -1749311280;
	
		case joaat("provision_javelina_skin"):
			return 344414895;
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return 1943206759;
	
		case -1378208045:
			return -672378045;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return -1466769106;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return -348997013;
	
		case joaat("PROVISION_ELK_FUR_PRISTINE"):
			return 2118150058;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
			return -1260301848;
	
		case joaat("provision_sheep_wool"):
			return -1896091463;
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return 727714355;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return 128689452;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return -158140634;
	
		case -1283104686:
			return -1156529631;
	
		case -1282621313:
			return -393778206;
	
		case -1262044528:
			return -1798573899;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return -795926005;
	
		case -1249752300:
			return -1395009678;
	
		case -1243878166:
			return 2068018854;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return -185670568;
	
		case joaat("PROVISION_LOON_FEATHER"):
			return 1324361660;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return -234392368;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return -409309194;
	
		case -1220574585:
			return -1836028969;
	
		case -1218522879:
			return -618837959;
	
		case -1195518864:
			return -183098420;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return -549843543;
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return -1389099466;
	
		case -1182590809:
			return 1590950150;
	
		case joaat("provision_raven_feather"):
			return -1777044066;
	
		case joaat("provision_raccoon_fur"):
			return 212330241;
	
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return -2083991045;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			return 2032362047;
	
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 1871609823;
	
		case -1087205695:
			return -700390032;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return -1552076723;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return 621465116;
	
		case joaat("provision_owl_feather"):
			return -1114206422;
	
		case joaat("provision_bull_horns"):
			return 913562114;
	
		case -1061362634:
			return 1303473658;
	
		case -1061253029:
			return 1593945350;
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return 556997951;
	
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return -1334624683;
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return -1634769991;
	
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
			return -1517999735;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return 714611525;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return 1272884971;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return -1125378664;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return 251523924;
	
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return -1028335922;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return -795926005;
	
		case -963027403:
			return 872099605;
	
		case joaat("PROVISION_CONDOR_FEATHER"):
			return -324172879;
	
		case -940052481:
			return -633621963;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return 2084847747;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return 1445465787;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return 513869240;
	
		case joaat("provision_rabbit_pelt_pristine"):
			return 172698521;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return 469453151;
	
		case -907373381:
			return 2094711074;
	
		case -906131571:
			return 878987858;
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return -1910050550;
	
		case joaat("PROVISION_ROBIN_FEATHER"):
			return -862133853;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return -334414989;
	
		case joaat("provision_squirrel_pelt"):
			return -885435577;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return -409309194;
	
		case -885592109:
			return -1170632889;
	
		case joaat("provision_boar_tusk"):
			return 1234479911;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return -2079514583;
	
		case joaat("provision_buck_fur"):
			return 1069834732;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return 2145928766;
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return 1699761828;
	
		case joaat("PROVISION_BUCK_ANTLER_LEGENDARY"):
			return -2054061821;
	
		case -857265622:
			return -932263476;
	
		case joaat("provision_fish_lake_sturgeon"):
			return 49841414;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return 547453549;
	
		case joaat("PROVISION_COW_HIDE_PRISTINE"):
			return 1322026128;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
			return 340488205;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return -557557374;
	
		case joaat("provision_booby_feather"):
			return -427774472;
	
		case -827518870:
			return -330669109;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return 714611525;
	
		case joaat("provision_alligator_skin"):
			return 709722347;
	
		case joaat("provision_bat_wing"):
			return -591134272;
	
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 711086189;
	
		case joaat("provision_muskrat_fur"):
			return -1273558742;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return 362062697;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
			return -179784009;
	
		case joaat("PROVISION_ELK_ANTLER_LEGENDARY"):
			return -276530555;
	
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 1069834732;
	
		case joaat("PROVISION_PHEASANT_FEATHER"):
			return -1687205102;
	
		case -675142890:
			return 1144711679;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return -185670568;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return 547453549;
	
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return -1334624683;
	
		case joaat("PROVISION_TURKEY_FEATHER"):
			return -977684174;
	
		case -634716689:
			return -427089681;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
			return -71380070;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
			return 195131818;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return -549843543;
	
		case -591844128:
			return 708589058;
	
		case joaat("provision_buffalo_fur"):
			return -1508151163;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return 1662628197;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return 714611525;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return 513869240;
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return 1699761828;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
			return -1260301848;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return -600158588;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return -348997013;
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return -482152318;
	
		case joaat("provision_ram_hide"):
			return 1995645004;
	
		case joaat("provision_opossum_fur_pristine"):
			return -401745683;
	
		case joaat("provision_badger_pelt"):
			return -78603574;
	
		case joaat("provision_badger_pelt_pristine"):
			return -78603574;
	
		case -420237085:
			return 115722091;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return 621465116;
	
		case joaat("provision_rat_fur"):
			return -555536739;
	
		case joaat("provision_elk_antlers"):
			return -276530555;
	
		case joaat("provision_panther_fur"):
			return -2096730839;
	
		case joaat("PROVISION_RAT_FUR_POOR"):
			return -555536739;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return 469453151;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
			return -158140634;
	
		case joaat("provision_bull_hide"):
			return 854098596;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
			return 1656226638;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return -329015022;
	
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 1871609823;
	
		case -308200059:
			return -853038002;
	
		case joaat("provision_raccoon_fur_pristine"):
			return 212330241;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			return -71380070;
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return -482152318;
	
		case joaat("PROVISION_RAT_FUR_PRISTINE"):
			return -555536739;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return -729503995;
	
		case -260181673:
			return 732434481;
	
		case -251416414:
			return -364133422;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return -600158588;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			return 195131818;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return 128689452;
	
		case joaat("PROVISION_BUFFALO_FUR_PRISTINE"):
			return -1508151163;
	
		case -229670230:
			return 1438015400;
	
		case joaat("PROVISION_HERON_FEATHER"):
			return -817814915;
	
		case joaat("PROVISION_MOOSE_FUR_PRISTINE"):
			return -1875079046;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return 1272884971;
	
		default:
		
	}

	return 0;
}

int func_270(Hash hParam0, Hash hParam1) // Position - 0xB8B9 Hash - 0xC99DAA1A ^0x34467B57
{
	int i;
	Hash outData;
	int awardItemCount;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_PRIORITY_ACCESS_AWARD(hParam0))
		return 0;

	if (!func_17(hParam1, 0))
		return 0;

	awardItemCount = ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ITEM_COUNT(hParam0);

	for (i = 0; i < awardItemCount; i = i + 1)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_AWARD_ITEM_INFO(hParam0, i, &outData))
		{
		}
		else if (outData == hParam1)
		{
			return outData.f_1;
		}
	}

	return 0;
}

BOOL func_271() // Position - 0xB919 Hash - 0xB6E09ED8 ^0xA943D439
{
	return Global_1156111.f_21645[64 /*209*/].f_208;
}

const char* func_272(const char* sParam0, int iParam1) // Position - 0xB92E Hash - 0xB0CFF0C3 ^0x53FADDD0
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);

	return func_505(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

BOOL func_273(Hash hParam0, int iParam1) // Position - 0xB964 Hash - 0x503679EB ^0x503679EB
{
	if (iParam1 == 119)
		return func_506(hParam0);

	return func_507(hParam0, iParam1);
}

int func_274() // Position - 0xB987 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1915656.f_20241;
}

BOOL func_275(Hash hParam0) // Position - 0xB996 Hash - 0x29F6367D ^0x230C67BF
{
	var unk;
	Hash hash;
	var unk2;
	Ped mountOwnedByPlayer;
	int num;
	int i;

	if (func_508(hParam0, &unk))
		return true;

	if (!func_509(hParam0))
		return false;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		unk2 = 1;
		func_510(Global_33, &unk2, 1);
		hash = func_511(unk2[0]);
	
		if (hash == hParam0)
			if (ENTITY::_IS_ENTITY_FULLY_LOOTED(unk2[0]))
				return true;
			else
				return false;
	}

	mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());

	if (ENTITY::DOES_ENTITY_EXIST(mountOwnedByPlayer) && !ENTITY::IS_ENTITY_DEAD(mountOwnedByPlayer) && PED::IS_PED_CARRYING_SOMETHING(mountOwnedByPlayer))
	{
		num = 3;
		func_510(mountOwnedByPlayer, &num, 3);
	
		for (i = 0; i < num; i = i + 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(num[i]))
			{
			}
			else
			{
				hash = func_512(&num[i]);
			
				if (hash == hParam0)
					if (ENTITY::_IS_ENTITY_FULLY_LOOTED(num[i]))
						return true;
			}
		}
	}

	return false;
}

char* func_276(int iParam0) // Position - 0xBA80 Hash - 0x965887CC ^0x66679403
{
	switch (iParam0)
	{
		case 1:
			return "COLLECTIBLE_MAP_ON_MISSION";
	
		case 2:
			return "COLLECTIBLE_MAP_ACTIVE_MAP";
	
		case 3:
			return "COLLECTIBLE_MAP_SPADE_MISSING";
	
		case 4:
			return "COLLECTIBLE_MAP_METAL_DETECTOR_MISSING";
	
		case 5:
			return "COLLECTIBLE_MAP_SEARCH_ITEMS_NOT_AVAILABLE";
	}

	return "NET_COLLECTIBLE_OPEN_MAP_RESULT_NONE";
}

BOOL func_277() // Position - 0xBAE1 Hash - 0xC2798ED2 ^0x6BCAC0
{
	Any gangId;

	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	if (GANG::NETWORK_IS_GANG_ID_VALID(gangId))
		if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
			return false;

	if (!func_513(PLAYER::PLAYER_ID(), false))
		return false;

	return true;
}

BOOL func_278(int iParam0) // Position - 0xBB1E Hash - 0xDFD519AF ^0xDFD519AF
{
	return iParam0 > -1 && iParam0 < 40;
}

int func_279(Hash hParam0) // Position - 0xBB34 Hash - 0xD47FBCD ^0x33C1B0B3
{
	return func_270(hParam0, joaat("currency_cash"));
}

int func_280(Hash hParam0) // Position - 0xBB47 Hash - 0x8A75486A ^0x87B802E6
{
	var unk;
	int num;
	int i;
	int num2;
	int num3;

	unk = 15;

	if (!func_294(hParam0, -489628648, &unk, &num, false, true))
		return 0;

	for (i = 0; i < num; i = i + 1)
	{
		if (func_295(unk[i /*2*/], 1))
			num2 = num2 + 1;
	
		num3 = num3 + 1;
	}

	if (num2 >= num3)
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_COLLECTION_COMPLETE", num2, num3));
	else
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_COLLECTION", num2, num3));

	return 1;
}

BOOL func_281(Hash hParam0, int iParam1) // Position - 0xBBD6 Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

Hash func_282(Hash hParam0) // Position - 0xBBF0 Hash - 0x1F5BA88D ^0x1C6C332D
{
	int num;
	Hash num2;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1940252.f_11641))
		return 0;

	num = Global_1940252.f_11641;
	num.f_2 = 3;
	num.f_3 = hParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num2, &num);
	return num2;
}

void func_283(var uParam0) // Position - 0xBC2A Hash - 0x1172975C ^0xE2735AD7
{
	func_487(false);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_488(), joaat("SATCHEL_PROMPT_OPEN"));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(func_514(), DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam0, "focusable"));
	return;
}

BOOL func_284() // Position - 0xBC57 Hash - 0x77F1FEBE ^0x77F1FEBE
{
	return func_515(true);
}

struct<10> func_285(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0xBC64 Hash - 0x440EE211 ^0xAE2816F9
{
	int num;

	num = -1;
	num.f_1 = -1;
	num.f_2 = -1;
	num.f_3 = -1;
	num.f_4 = -1;
	num.f_5 = -1;
	num.f_6 = -1;
	num.f_7 = -1;
	num.f_8 = -1;

	if (iParam0 != 0 && iParam0 != joaat("SLOTID_NONE"))
		num = iParam0;

	if (iParam1 != 0 && iParam1 != joaat("SLOTID_NONE"))
		num.f_1 = iParam1;

	if (iParam2 != 0 && iParam2 != -1)
		num.f_2 = iParam2;

	if (iParam3 != 0)
		num.f_3 = iParam3;

	if (iParam4 != 0)
		num.f_4 = iParam4;

	if (iParam5 != 0)
		num.f_5 = iParam5;

	if (iParam6 != -1)
		num.f_6 = iParam6;

	if (iParam7 != 0)
		num.f_8 = iParam7;

	if (iParam8 != 0)
		num.f_7 = iParam8;

	return num;
}

BOOL func_286(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int* piParam11, int iParam12) // Position - 0xBD38 Hash - 0xB0933807 ^0x5CBA43FF
{
	*uParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, piParam11, iParam12);

	if (*uParam10 >= 0)
		return true;

	return false;
}

Hash func_287(int iParam0, int iParam1) // Position - 0xBD59 Hash - 0x3644D28E ^0x6DB2088F
{
	int outKey;

	if (iParam1 < 0)
		return 0;

	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_ITEMDATABASE_GET_COLLECTION_SIZE(iParam1))
		return 0;

	outKey = 0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iParam1, iParam0, &outKey))
		return 0;

	return outKey;
}

BOOL func_288(Hash hParam0) // Position - 0xBD9C Hash - 0xC615E269 ^0xEEDEEE6D
{
	Hash award;

	if (hParam0 == 0)
		return false;

	award = func_499(hParam0, false);

	if (!ITEMDATABASE::_ITEMDATABASE_GET_PRIORITY_ACCESS_AWARD(award))
		return false;

	if (!func_296(hParam0))
		return false;

	return true;
}

Hash func_289(Hash hParam0) // Position - 0xBDD4 Hash - 0x33F7D399 ^0x18C3F003
{
	if (!func_17(hParam0, 0))
		return 0;

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_DESCRIPTION_HASH(hParam0);
}

int func_290(Hash hParam0) // Position - 0xBDF1 Hash - 0xC765AA15 ^0x4A8005DD
{
	int i;

	for (i = 0; i < 64; i = i + 1)
	{
		if (hParam0 == Global_265213.f_107995.f_13575[i])
			return i;
	}

	return -1;
}

BOOL func_291(int iParam0, int iParam1) // Position - 0xBE27 Hash - 0x2ACCF512 ^0x4D8BE70B
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

void func_292(Hash hParam0) // Position - 0xBE37 Hash - 0xDFA862CF ^0x7E1EABA6
{
	 Var0;
	var unk;
	int dataContainerFromChildIndex;
	int num;
	int num2;
	int num3;

	if (!func_297(hParam0, &Var0, &unk))
		return;

	dataContainerFromChildIndex = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940252.f_11614, Global_1940252.f_11595);
	num = dataContainerFromChildIndex;
	num2 = 1;
	num3 = joaat("COLOR_PURE_WHITE");

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(32768, num, 0, 1, 0, num2, num3, hParam0, &unk);
	else
		DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(32768, num, Var0, 1, 0, num2, num3, hParam0, "");

	Global_1940252.f_11595 = Global_1940252.f_11595 + 1;
	return;
}

int func_293(int iParam0) // Position - 0xBEBB Hash - 0x6B3C6310 ^0x9A4DF434
{
	if (iParam0 < 0)
		return 0;

	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_294(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0xBEDC Hash - 0x8AAE9761 ^0xF5D9C5DD
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_516(hParam0))
		return false;

	*uParam3 = ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_COUNT_FROM_COST_TYPE(hParam0, hParam1);

	if (*uParam3 == 0)
	{
		!bParam4;
		return false;
	}

	!bParam4;

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_AWARD_ACQUIRE_COST(hParam0, hParam1, i, &uParam2->[i /*2*/]))
			goto 0x70;
	
		!bParam4;
	}

	if (bParam5)
		func_517(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

BOOL func_295(Hash hParam0, int iParam1) // Position - 0xBF6B Hash - 0x764CD05F ^0xC5F6D4B8
{
	int num;

	if (!func_17(hParam0, 0))
		return false;

	num = func_142(hParam0);

	switch (num)
	{
		case joaat("CLOTHING"):
			if (func_519(hParam0))
				return true;
			break;
	
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
				return true;
			else
				return false;
			break;
	
		case joaat("AMMO"):
			if (!func_518(hParam0, 1))
				return false;
			break;
	}

	return func_263(hParam0, false, false, false) >= iParam1;
}

BOOL func_296(Hash hParam0) // Position - 0xBFEE Hash - 0x20732D2A ^0x7DAFC416
{
	return NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(func_499(hParam0, false));
}

BOOL func_297(Hash hParam0, var uParam1, var uParam2) // Position - 0xC003 Hash - 0xFFE5D794 ^0x2A7115E7
{
	int i;

	*uParam1 = func_289(hParam0);

	for (i = 0; i < 64; i = i + 1)
	{
		if (*uParam1 == Global_265213.f_107995.f_13575[i])
		{
			*uParam2 = { Global_265213.f_107995[i /*4*/] };
			*uParam1 = Global_265213.f_107995.f_13575[i];
			return true;
		}
	}

	return false;
}

const char* func_298(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0xC068 Hash - 0x1D52DDA1 ^0x2CC95A61
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

BOOL func_299(Any* panParam0, int iParam1) // Position - 0xC07C Hash - 0xD248A057 ^0xD5D6A9F9
{
	int num;

	if (func_240(panParam0->f_9))
		return false;

	if (!func_441(*panParam0))
		return false;

	if (!func_520(panParam0->f_4, iParam1, false))
		return false;

	if (!func_242(panParam0->f_4))
		return false;

	if (func_33(false))
	{
		if (!func_17(panParam0->f_4, 0))
			return false;
	
		if (func_414())
		{
			num = func_521(panParam0->f_4, true, false, false);
		
			if (num < func_368(panParam0->f_4, panParam0->f_5, panParam0->f_9, false, false, false))
				panParam0->f_11 = num;
		}
	
		if (panParam0->f_11 <= 0)
			return false;
	}

	if (Global_1940252.f_11588 == 0 && !func_23(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940252.f_11613, Global_1940252.f_11596), "label")) && !func_114())
		func_115(panParam0->f_4);
	else
		func_238(0);

	return true;
}

void func_300(Hash hParam0) // Position - 0xC169 Hash - 0x7BA5B58 ^0x14D445C4
{
	int num;
	BOOL flag;
	int i;

	num = func_10(hParam0, 1224357681);
	flag = func_469(hParam0);

	if (func_522(num))
	{
		if (Global_1940252.f_41.f_1 > 0)
		{
			for (i = 0; i < Global_1940252.f_41.f_1; i = i + 1)
			{
				if (num == Global_1940252.f_41.f_2[i /*2*/])
				{
					func_523(i, true);
					return;
				}
			}
		
			func_524(num, flag);
		}
		else
		{
			func_524(num, flag);
		}
	}

	return;
}

BOOL func_301() // Position - 0xC1E2 Hash - 0x90DE660D ^0xA0573A0E
{
	if (Global_1940252.f_11587 == -182626652)
	{
		switch (func_274())
		{
			case 10:
			case 15:
			case 16:
			case 29:
				return true;
		}
	}
	else if (Global_1940252.f_11587 == -2074770370)
	{
		return func_30();
	}
	else if (Global_1940252.f_11587 == -693134279)
	{
		return true;
	}

	return false;
}

Hash func_302(Entity eParam0) // Position - 0xC252 Hash - 0xCBDF2AE2 ^0xCD5FF04E
{
	Hash hash;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	if (ENTITY::GET_IS_ANIMAL(eParam0) || ENTITY::_GET_IS_BIRD(eParam0))
	{
		hash = func_512(&eParam0);
	
		if (!func_17(hash, 0))
			hash = func_525(eParam0);
	}
	else
	{
		hash = func_525(eParam0);
	}

	return hash;
}

int func_303(int iParam0, BOOL bParam1) // Position - 0xC2A5 Hash - 0x48162C4F ^0x8EE98832
{
	Ped mountOwnedByPlayer;
	int num;

	if (Global_1901671.f_701.f_31)
		return 0;

	if (func_37() == 0)
		mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
	else
		mountOwnedByPlayer = func_174(0);

	func_526(&mountOwnedByPlayer, &num, iParam0, bParam1);
	return num;
}

int func_304(BOOL bParam0, BOOL bParam1) // Position - 0xC2E7 Hash - 0x11E3802B ^0x11E3802B
{
	int num;
	Ped ped;
	Ped ped2;

	num = 0;
	ped = func_94(0);
	ped2 = func_94(1);
	func_526(&ped, &num, bParam0, bParam1);
	func_526(&ped2, &num, bParam0, bParam1);
	return num;
}

int func_305(BOOL bParam0) // Position - 0xC31A Hash - 0x3FB3540 ^0x822BC824
{
	Vehicle vehicleOwnedByPlayer;
	int num;
	int num2;
	int num3;
	int i;
	var unk;

	if (Global_1901671.f_701.f_32)
		return 0;

	if (func_37() == 0)
	{
		vehicleOwnedByPlayer = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
	
		if (!ENTITY::DOES_ENTITY_EXIST(vehicleOwnedByPlayer))
			return 0;
	
		if (func_254("ALL SATCHEL EXCLUDING CLOTHING", &num2, &num3, -2015960939, true))
		{
			if (num3 < 1)
			{
			}
			else
			{
				unk.f_9 = joaat("SLOTID_NONE");
			
				for (i = 0; i < num3; i = i + 1)
				{
					if (!func_239(&unk, i, num2, num3))
					{
					}
					else if (!func_17(unk.f_4, 0))
					{
					}
					else if (unk.f_4 == 1259508039)
					{
					}
					else
					{
						num = num + 1;
					
						if (bParam0)
						{
							if (!func_242(unk.f_4))
							{
							}
							else
							{
								func_310(unk, true);
							}
						}
					}
				}
			}
		
			func_253(num2);
		}
	
		return num;
	}

	return 0;
}

BOOL func_306(int iParam0) // Position - 0xC3F6 Hash - 0x262FA098 ^0xF02AF64E
{
	int i;
	Hash hash;
	int num;
	int num2;

	for (i = 0; i < STATS::WEEKLY_COLLECTIBLE_GET_NUM_ITEMS_IN_SET(joaat("FEATURE_PM_WEEKLY_COLLECTIBLES"), iParam0); i = i + 1)
	{
		if (STATS::WEEKLY_COLLECTIBLE_GET_ITEM_IN_SET(joaat("FEATURE_PM_WEEKLY_COLLECTIBLES"), iParam0, i, &hash, &num))
		{
			if (func_17(hash, 0))
			{
				num2 = func_263(hash, false, false, false);
			
				if (num2 < num)
					return false;
			}
		}
	}

	return true;
}

void func_307(Hash hParam0) // Position - 0xC44F Hash - 0x401DFCDD ^0xD106779E
{
	var unk;
	Hash hash;
	var unk15;

	if (!func_23(hParam0))
		return;

	unk.f_9 = joaat("SLOTID_NONE");
	unk.f_11 = func_527(hParam0);
	hash = hParam0;
	func_528(hParam0, &unk15, 0, 0, 0, 0);

	if (!func_33(false))
		func_529(joaat("folder_item"), hash, &unk15, true, unk.f_11, false, 0, joaat("COLOR_PURE_WHITE"));
	else
		func_529(joaat("inventory_item"), hash, &unk15, true, unk.f_11, false, 0, joaat("COLOR_PURE_WHITE"));

	Global_1940252.f_41.f_203 = Global_1940252.f_41.f_203 + 1;
	return;
}

BOOL func_308(Hash hParam0) // Position - 0xC4DC Hash - 0x415DE5DF ^0x101D738F
{
	Hash categoryItemSetBuyAward;
	var unk;

	if (!func_295(joaat("kit_collectors_bag"), 1))
		return false;

	categoryItemSetBuyAward = COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(hParam0, 0);

	if (!func_23(categoryItemSetBuyAward))
		return false;

	if (func_530(categoryItemSetBuyAward, -489628648, &unk, true, false))
		return true;

	return false;
}

void func_309(Any* panParam0, int iParam1) // Position - 0xC524 Hash - 0x36FF3090 ^0xA0BD3370
{
	var unk;
	int i;
	int size;
	int num;
	int num2;

	if (iParam1 == 0)
	{
		unk = 16;
		num = INVENTORY::_INVENTORY_CREATE_SORTED_COLLECTION(func_199(false), 32, &size);
	
		if (num < 0)
			return;
	
		if (size > 0)
		{
			for (i = 0; i < 32; i = i + 1)
			{
				if (!func_239(panParam0, i, num, size))
				{
				}
				else if (!func_17(panParam0->f_4, 0))
				{
				}
				else if (!func_299(panParam0, iParam1))
				{
				}
				else if (func_531(panParam0->f_4, &unk, num2))
				{
				}
				else
				{
					unk[num2] = panParam0->f_4;
					num2 = num2 + 1;
				
					if (num2 >= 16)
						break;
				}
			}
		
			func_532(&unk);
			func_533(&unk);
		}
	
		func_253(num);
	}

	return;
}

void func_310(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, BOOL bParam14) // Position - 0xC5DD Hash - 0x423F9407 ^0xA2463A4F
{
	BOOL flag;
	Hash hash;
	BOOL flag2;
	var unk;
	int num;
	int num2;
	Hash hash2;

	if (func_17(uParam0.f_4, 0))
	{
		flag = func_469(uParam0.f_4);
	
		if (func_43() || func_534() && !flag)
			return;
	
		hash = func_267(uParam0.f_4, false);
		flag2 = ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(uParam0.f_4);
		unk = { func_535(uParam0.f_4) };
		num = func_536(uParam0.f_4);
	
		if (!bParam14 && func_317(uParam0.f_4, joaat("DEFAULT")) != 0)
		{
			num2 = func_368(uParam0.f_4, uParam0.f_5, uParam0.f_9, false, false, false);
		
			if (uParam0.f_9 != joaat("SLOTID_SATCHEL") && num2 > uParam0.f_11)
				return;
		
			uParam0.f_11 = num2;
		}
	
		func_537(&uParam0);
		hash2 = joaat("COLOR_PURE_WHITE");
	
		if (func_470(uParam0.f_4))
			if (func_19(uParam0.f_4, 1816585950))
				hash2 = joaat("color_yellow");
		else if (func_471(uParam0.f_4))
			hash2 = joaat("color_yellow");
	
		func_529(joaat("inventory_item"), hash, &unk, flag, uParam0.f_11, flag2, num, hash2);
		Global_1940252.f_41.f_203 = Global_1940252.f_41.f_203 + 1;
	}

	return;
}

BOOL func_311() // Position - 0xC707 Hash - 0xC82BB3B3 ^0x6740E474
{
	Vehicle vehicleOwnedByPlayer;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		return false;

	vehicleOwnedByPlayer = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());

	if (!ENTITY::DOES_ENTITY_EXIST(vehicleOwnedByPlayer))
		return false;

	if (!func_538(vehicleOwnedByPlayer))
		return false;

	return true;
}

BOOL func_312(Vehicle veParam0) // Position - 0xC756 Hash - 0xDB9FF7DE ^0x3509E001
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (ENTITY::IS_ENTITY_DEAD(veParam0))
			return true;
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false, false))
			if (!FIRE::IS_ENTITY_ON_FIRE(veParam0))
				return true;
	else
		return true;

	return false;
}

BOOL func_313(int iParam0, Vehicle veParam1) // Position - 0xC799 Hash - 0x167379EF ^0xD1FE382E
{
	int num;
	var unk;
	float num2;
	float num3;

	num = func_472(iParam0);

	if (!func_278(num))
		return false;

	unk = { Global_1051832.f_92[num /*75*/].f_3 };

	if (num == 29)
		unk = { func_473(PLAYER::GET_PLAYER_INDEX()) };

	if (_IS_NULL_VECTOR(unk))
		return false;

	num2 = func_475(iParam0);

	if (num == 10 || num == 15 || num == 29)
	{
		num3 = func_476(veParam1, unk, false);
	
		if (num3 < num2)
			return true;
	}
	else if (num == 2)
	{
		if (func_476(veParam1, unk, false) < num2)
			return true;
	}

	return false;
}

void func_314() // Position - 0xC849 Hash - 0x501AFE94 ^0x81C0DD22
{
	if (func_274() != 2)
	{
		if (func_295(joaat("weapon_kit_binoculars"), 1))
			func_316(joaat("weapon_kit_binoculars"), false, false);
	
		if (func_295(joaat("weapon_kit_binoculars_improved"), 1))
			func_316(joaat("weapon_kit_binoculars_improved"), false, false);
	
		if (func_295(joaat("weapon_kit_camera"), 1))
			func_316(joaat("weapon_kit_camera"), false, false);
	
		if (func_295(332793555, 1))
			func_316(332793555, false, false);
	
		if (func_295(joaat("kit_camp"), 1))
			func_316(joaat("kit_camp"), false, false);
		else if (func_295(joaat("kit_camp_simple"), 1))
			func_316(joaat("kit_camp_simple"), false, false);
		else if (func_295(-1115561122, 1))
			func_316(-1115561122, false, false);
	
		func_539();
	}

	return;
}

int func_315() // Position - 0xC90B Hash - 0x3328B8DC ^0x6A0D98BE
{
	if (func_33(false))
		return 0;

	if (!func_284())
		return 0;

	if (!func_540() && !func_112(2097152))
		return 0;

	func_541(1816455607);
	return 1;
}

void func_316(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC94F Hash - 0xEADF2B40 ^0x6377F082
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");
	unk.f_4 = hParam0;
	unk.f_11 = 1;

	if (!bParam1)
		func_310(unk, bParam2);
	else
		func_243(unk);

	return;
}

int func_317(Hash hParam0, Hash hParam1) // Position - 0xC98C Hash - 0x865BD5D3 ^0xA4D690BD
{
	if (hParam1 == 0)
		return 0;

	if (func_281(func_105(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

BOOL func_318(Hash hParam0, int iParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0xC9B8 Hash - 0x1D349B48 ^0xBDB6885B
{
	int num;
	var unk;
	int num2;
	int i;
	int num3;
	var unk62;
	int num4;

	if (func_542(hParam0))
		return 0;

	if (iParam1 <= 0)
		return 0;

	num = func_317(hParam0, joaat("DEFAULT"));

	if (num == 0)
		return 0;

	if (!func_170(bParam4))
	{
		unk = 10;
	
		if (num == 0)
			return 0;
	
		if (!func_543(&unk, &num2, hParam0, num, iParam1, true) || num2 < 1)
			return 0;
	
		num3 = -1;
		unk62.f_9 = 1;
		unk62.f_11 = joaat("SLOTID_NONE");
	
		for (i = 0; i < num2; i = i + 1)
		{
			unk62 = { func_544(hParam0, &unk[i /*6*/]) };
			unk62.f_12 = hParam2;
			num3 = func_545(joaat("use"), &unk62, true);
		
			if (num3 == -1)
				return 0;
		}
	
		if (num3 != -1)
		{
			num4.f_7 = -142743235;
			num4.f_16 = -1;
			num4 = iParam3;
			num4.f_7 = hParam2;
			func_419(num3, num4);
			return 1;
		}
	
		return 0;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_199(bParam4), hParam0, iParam1, hParam2))
		return 0;

	return 1;
}

BOOL func_319(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, BOOL bParam5, BOOL bParam6) // Position - 0xCAD0 Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;
	var unk15;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_542(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_407(*panParam1, &unk, bParam6, false, -1))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_170(bParam6))
	{
		num = -1;
	
		if (unk.f_13)
		{
		}
		else if (func_37() == 0)
		{
			unk15.f_9 = 1;
			unk15.f_11 = joaat("SLOTID_NONE");
			unk15.f_8 = hParam0;
			unk15 = { *panParam1 };
			unk15.f_4 = { *uParam2 };
			unk15.f_11 = uParam2->f_4;
			unk15.f_9 = iParam3;
			unk15.f_12 = hParam4;
			num = func_545(joaat("use"), &unk15, true);
		
			if (num != -1)
			{
				num2.f_7 = -142743235;
				num2.f_16 = -1;
				num2 = bParam5;
				num2.f_7 = hParam4;
				func_419(num, num2);
			}
		}
	
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_199(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

int func_320(Hash hParam0) // Position - 0xCBEE Hash - 0x2F9A232D ^0xF8D1A587
{
	if (func_19(hParam0, 1573112293))
		return func_546(hParam0);

	if (func_19(hParam0, 1816455607))
		return func_70();

	if (func_547(hParam0))
		return func_85();

	switch (func_145(hParam0))
	{
		case joaat("CI_CATEGORY_EMOTE_TAUNTS"):
		case 664784405:
		case joaat("CI_CATEGORY_EMOTE_GREETS"):
		case joaat("CI_CATEGORY_EMOTE_DANCES"):
			return func_549();
	
		case -2061583405:
		case 81053684:
		case 1477698721:
			return func_227();
	
		case -1823706425:
			if (hParam0 == -1115561122)
				return func_81();
			else
				return func_80();
			break;
	
		case -1520388130:
		case 1802292908:
			return func_67();
	
		case -1393202694:
		case 2041469314:
			return func_546(hParam0);
	
		case -854348463:
			return func_77();
	
		case -525676072:
			return func_227();
	
		case -77448735:
			if (func_548(hParam0))
				return func_546(hParam0);
			break;
	
		case 1779021115:
			if (hParam0 == joaat("weapon_kit_camera") || hParam0 == 332793555)
				return func_78();
		
			return func_79();
	
		default:
			if (func_17(hParam0, 0))
				if (func_19(hParam0, 1919582297))
					return func_84();
				else if (hParam0 == joaat("upgrade_upg_mortar_pestle") || hParam0 == -1448210800)
					return func_82();
				else if (hParam0 == joaat("kit_horse_brush"))
					return func_71();
				else if (func_19(hParam0, 1147021565))
					return func_57();
		
			return func_55();
	}

	return func_55();
}

int func_321() // Position - 0xCDB5 Hash - 0x8190E5D8 ^0xF593603
{
	return Global_1915656.f_22504.f_5;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0xCDC6 Hash - 0xA17D549C ^0xBECF8F92
{
	var unk;
	int num;

	switch (iParam0)
	{
		case 0:
			return "SHOPS_HANDHELD_FAIL_NONE";
	
		case 1:
			return "SHOPS_HANDHELD_FAIL_NOT_READY";
	
		case 3:
			return "SHOPS_HANDHELD_FAIL_DISABLED";
	
		case 4:
			return "SHOPS_HANDHELD_FAIL_INSTANCED";
	
		case 5:
			return "SHOPS_HANDHELD_FAIL_SHOP_CL";
	
		case 6:
			return "SHOPS_HANDHELD_FAIL_NOT_OWN";
	
		case 7:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
	
		case 8:
			return "SHOPS_HANDHELD_FAIL_SHOPS_DISABLED_THIS_FRAME";
	
		case 9:
			return "SHOPS_HANDHELD_FAIL_WAIT_FOR_FREEROAM";
	
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
	
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
	
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
	
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_USING_TURRET";
	
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
	
		case 16:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
	
		case 17:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
	
		case 18:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
	
		case 19:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
	
		case 20:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
	
		case 21:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BRUSHING";
	
		case 22:
			return "SHOPS_HANDHELD_FAIL_IN_DEEP_WATER";
	
		case 23:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME";
	
		case 24:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ARCHERY";
	
		case 25:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CHALLENGE";
	
		case 26:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_DEAD_DROP";
	
		case 27:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_GOLDEN_SHOWDOWN";
	
		case 28:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_HOT_PROPERTY";
	
		case 29:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_CASTLE";
	
		case 30:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_RAILS";
	
		case 31:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WRECKAGE";
	
		case 32:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CONDOR_EGG";
	
		case 33:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ANIMAL_TAGGING";
	
		case 34:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WILDLIFE_PHOTOGRAPHER";
	
		case 35:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_PROTECT_LEGENDARY_ANIMAL";
	
		case 36:
			return "SHOPS_HANDHELD_FAIL_MISSION_FEUD";
	
		case 37:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV";
	
		case 38:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HUNT_THE_POSSE_LEADER";
	
		case 39:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_BIGGEST_FISH";
	
		case 40:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_FLYING_BIRD";
	
		case 41:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HERBALIST";
	
		case 42:
			return "SHOPS_HANDHELD_FAIL_PLAYER_MATCHMAKING";
	
		case 46:
			unk = -1;
			unk.f_1 = -1;
			unk = { func_390(0) };
		
			if (!func_391(unk))
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		
			num = func_550(&unk, 1);
		
			if (num == -1)
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		
			if (!func_551(num, 461218520, true))
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		
			return func_553(func_552(num, 461218520));
	}

	return "";
}

void func_323(int iParam0) // Position - 0xD05F Hash - 0xC421D95B ^0xE7B505B3
{
	Global_1915656.f_22504.f_5 = iParam0;
	return;
}

int func_324(Hash hParam0) // Position - 0xD072 Hash - 0x537A51B4 ^0x537A51B4
{
	int i;

	for (i = 0; i <= 49; i = i + 1)
	{
		if (func_554(i, hParam0))
			return i;
	}

	return -1;
}

int func_325(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xD09E Hash - 0x571E293 ^0x8A680264
{
	if (!func_555(iParam0))
		return 1;

	if (!func_556(iParam0))
		return 5;

	if (!bParam1 && Global_1220826.f_48[iParam0 /*21*/].f_17)
		if (bParam2 || Global_1220826.f_1.f_20 != 0)
			return 2;

	if (!bParam2 && !func_557(iParam0))
		return 3;

	if (func_558(iParam0) && !func_460())
		return 4;

	return 0;
}

void func_326(int iParam0) // Position - 0xD120 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1940252.f_11599 = iParam0;
	return;
}

void func_327(Hash hParam0) // Position - 0xD131 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1940252.f_11605 = hParam0;
	return;
}

BOOL func_328(Hash hParam0, BOOL bParam1, BOOL bParam2, int iParam3, int iParam4) // Position - 0xD142 Hash - 0x5AD1F9FD ^0x14415059
{
	Hash interactionAnimHash;

	switch (func_10(hParam0, -949239683))
	{
		case -1565009253:
			if (!bParam1)
			{
				interactionAnimHash = 1254219723;
			
				if (bParam2)
					interactionAnimHash = -2077441721;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -1420737577:
			if (!bParam1)
			{
				interactionAnimHash = 2129866661;
			
				if (bParam2)
					interactionAnimHash = 1607869040;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -1273369295:
			if (!bParam1)
			{
				interactionAnimHash = -27851152;
			
				if (bParam2)
					interactionAnimHash = -1340223099;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -1229959999:
			if (!bParam1)
			{
				interactionAnimHash = 1159762194;
			
				if (bParam2)
					interactionAnimHash = -1791047090;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -1050374492:
			if (!bParam1)
			{
				interactionAnimHash = 343713021;
			
				if (bParam2)
					interactionAnimHash = 760057945;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -873135685:
			if (!bParam1)
			{
				interactionAnimHash = -1418730365;
			
				if (bParam2)
					interactionAnimHash = -1570312122;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -164980960:
			if (!bParam1)
			{
				interactionAnimHash = -138141811;
			
				if (bParam2)
					interactionAnimHash = 2000759837;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 10252101:
			if (!bParam1)
			{
				interactionAnimHash = -1246302402;
			
				if (bParam2)
					interactionAnimHash = -1791047090;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 24248412:
			if (!bParam1)
			{
				interactionAnimHash = 1014486005;
			
				if (bParam2)
					interactionAnimHash = 416212934;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 82200319:
			if (!bParam1)
			{
				interactionAnimHash = joaat("DOCUMENT_INSPECT@NEWSPAPER_INTRO");
			
				if (bParam2)
					interactionAnimHash = joaat("DOCUMENT_INSPECT@NEWSPAPER_BASE");
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 733893097:
			if (!bParam1)
			{
				interactionAnimHash = 436157482;
			
				if (bParam2)
					interactionAnimHash = 1972630951;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 871191033:
			if (!bParam1)
			{
				interactionAnimHash = joaat("DOCUMENT_INSPECT@Paper_D2_H32_Rolled_INTRO");
			
				if (bParam2)
					interactionAnimHash = joaat("DOCUMENT_INSPECT@Paper_D2_H32_Rolled_BASE");
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 1513351077:
			if (!bParam1)
			{
				interactionAnimHash = 889797228;
			
				if (bParam2)
					interactionAnimHash = -1043439814;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 1712126263:
			if (!bParam1)
			{
				interactionAnimHash = 1589555562;
			
				if (bParam2)
					interactionAnimHash = -1424266966;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 1894156335:
			if (!bParam1)
			{
				interactionAnimHash = 1801769345;
			
				if (bParam2)
					interactionAnimHash = 374699583;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	}

	return false;
}

BOOL func_329() // Position - 0xD495 Hash - 0x78092BAE ^0x48B67C15
{
	return Global_1953292.f_1676.f_1[1 /*3*/].f_1 == joaat("pomade");
}

BOOL func_330(Ped pedParam0) // Position - 0xD4B1 Hash - 0x224EC90C ^0x807A7E5C
{
	if (!ENTITY::DOES_ENTITY_EXIST(*pedParam0) || ENTITY::IS_ENTITY_DEAD(*pedParam0))
		return false;

	if (func_559(*pedParam0, joaat("HATS"), false))
		return true;

	return false;
}

void func_331(Hash hParam0) // Position - 0xD4EA Hash - 0xA69012EC ^0xD86A3DAD
{
	Hash hash;

	hash = joaat("use_handfull_satchel_left_hand_quick");

	switch (func_560())
	{
		case 0:
			hash = joaat("use_handfull_satchel_left_hand_quick");
			break;
	
		case 1:
			hash = joaat("use_handfull_satchel_unarmed_quick");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("use_handfull_satchel_rifle_quick");
			break;
	}

	if (hash != 0)
	{
		if (func_19(hParam0, 1573112293))
			func_561(func_257(hParam0), true, 1);
	
		func_562(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_563(hParam0);
		func_181(hParam0, 1, false, 562618531);
	}

	return;
}

void func_332(Hash hParam0) // Position - 0xD584 Hash - 0x26CEB274 ^0x13CF482F
{
	Hash hash;

	hash = 16939881;

	switch (func_560())
	{
		case 0:
			hash = 16939881;
			break;
	
		case 1:
			hash = -1165614444;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = 968591133;
			break;
	}

	if (hash != 0)
	{
		func_562(Global_33, hParam0, hash, 1, false);
	}
	else
	{
		func_563(hParam0);
		func_181(hParam0, 1, false, 562618531);
	}

	return;
}

void func_333(Hash hParam0, BOOL bParam1) // Position - 0xD604 Hash - 0xE800B03C ^0x3799F51A
{
	Hash hash;

	hash = -45077177;

	switch (func_560())
	{
		case 0:
			if (bParam1)
				hash = -2137817968;
			else
				hash = -45077177;
			break;
	
		case 1:
			if (bParam1)
				hash = -1947358597;
			else
				hash = 36807409;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			if (bParam1)
				hash = -750686877;
			else
				hash = 1293288723;
			break;
	}

	if (hash != 0)
	{
		func_562(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_563(hParam0);
		func_181(hParam0, 1, false, 562618531);
	}

	return;
}

void func_334(Hash hParam0, BOOL bParam1) // Position - 0xD6B1 Hash - 0xE800B03C ^0xCB090F44
{
	Hash hash;

	hash = 1700817728;

	switch (func_560())
	{
		case 0:
			if (bParam1)
				hash = -447623645;
			else
				hash = 1700817728;
			break;
	
		case 1:
			if (bParam1)
				hash = 1880532390;
			else
				hash = -480771797;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			if (bParam1)
				hash = 468890170;
			else
				hash = 764367205;
			break;
	}

	if (hash != 0)
	{
		func_562(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_563(hParam0);
		func_181(hParam0, 1, false, 562618531);
	}

	return;
}

void func_335(Hash hParam0) // Position - 0xD75E Hash - 0x26CEB274 ^0x4A49C80C
{
	Hash hash;

	hash = joaat("use_large_bottle_combat_left_hand");

	switch (func_560())
	{
		case 0:
			hash = joaat("use_large_bottle_combat_left_hand");
			break;
	
		case 1:
			hash = joaat("use_large_bottle_combat_right_hand");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("use_large_bottle_combat_rifle");
			break;
	}

	if (hash != 0)
	{
		func_562(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_563(hParam0);
		func_181(hParam0, 1, false, 562618531);
	}

	return;
}

void func_336(Hash hParam0) // Position - 0xD7DE Hash - 0x26CEB274 ^0x806B3C6E
{
	Hash hash;

	hash = 2105609037;

	switch (func_560())
	{
		case 0:
			hash = 2105609037;
			break;
	
		case 1:
			hash = -1595716047;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = -457187977;
			break;
	}

	if (hash != 0)
	{
		func_562(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_563(hParam0);
		func_181(hParam0, 1, false, 562618531);
	}

	return;
}

void func_337(Hash hParam0) // Position - 0xD85E Hash - 0x26CEB274 ^0x76FE185
{
	Hash hash;

	hash = 1964324114;

	switch (func_560())
	{
		case 0:
			hash = 1964324114;
			break;
	
		case 1:
			hash = 1826089606;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = -654111932;
			break;
	}

	if (hash != 0)
	{
		func_562(Global_33, hParam0, hash, 1, false);
	}
	else
	{
		func_563(hParam0);
		func_181(hParam0, 1, false, 562618531);
	}

	return;
}

void func_338(Hash hParam0) // Position - 0xD8DE Hash - 0x26CEB274 ^0x271E98F3
{
	Hash hash;

	hash = -1530144981;

	switch (func_560())
	{
		case 0:
			hash = -1530144981;
			break;
	
		case 1:
			hash = -312546963;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = -389189374;
			break;
	}

	if (hash != 0)
	{
		func_562(Global_33, hParam0, hash, 1, false);
	}
	else
	{
		func_563(hParam0);
		func_181(hParam0, 1, false, 562618531);
	}

	return;
}

void func_339(Hash hParam0) // Position - 0xD95E Hash - 0x26CEB274 ^0x8287AC45
{
	Hash hash;

	hash = -1074475556;

	switch (func_560())
	{
		case 0:
			hash = -1074475556;
			break;
	
		case 1:
			hash = -1846586910;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = 392506445;
			break;
	}

	if (hash != 0)
	{
		func_562(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_563(hParam0);
		func_181(hParam0, 1, false, 562618531);
	}

	return;
}

void func_340(Hash hParam0) // Position - 0xD9DE Hash - 0x26CEB274 ^0x26B03C92
{
	Hash hash;

	hash = joaat("use_stimulant_injection_quick_left_hand");

	switch (func_560())
	{
		case 0:
			hash = joaat("use_stimulant_injection_quick_left_hand");
			break;
	
		case 1:
			hash = joaat("use_stimulant_injection_quick_right_hand");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("use_stimulant_injection_quick_left_hand_rifle");
			break;
	}

	if (hash != 0)
	{
		func_562(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_563(hParam0);
		func_181(hParam0, 1, false, 562618531);
	}

	return;
}

void func_341(Hash hParam0) // Position - 0xDA5E Hash - 0x26CEB274 ^0x5D3C7B2A
{
	Hash hash;

	hash = joaat("quick_smoke_cigarette_left_hand");

	switch (func_560())
	{
		case 0:
			hash = joaat("quick_smoke_cigarette_left_hand");
			break;
	
		case 1:
			hash = joaat("quick_smoke_cigarette_right_hand");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("quick_smoke_cigarette_rifle");
			break;
	}

	if (hash != 0)
	{
		func_562(Global_33, hParam0, hash, 1, false);
	}
	else
	{
		func_563(hParam0);
		func_181(hParam0, 1, false, 562618531);
	}

	return;
}

void func_342(Hash hParam0) // Position - 0xDADE Hash - 0x26CEB274 ^0xBFBE1D88
{
	Hash hash;

	hash = joaat("quick_smoke_cigar_left_hand");

	switch (func_560())
	{
		case 0:
			hash = joaat("quick_smoke_cigar_left_hand");
			break;
	
		case 1:
			hash = joaat("quick_smoke_cigar_right_hand");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("quick_smoke_cigar_rifle");
			break;
	}

	if (hash != 0)
	{
		func_562(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_563(hParam0);
		func_181(hParam0, 1, false, 562618531);
	}

	return;
}

void func_343(Hash hParam0, BOOL bParam1) // Position - 0xDB5E Hash - 0x1923F90C ^0xE8AF292D
{
	Hash hash;

	hash = joaat("use_tonic_satchel_left_hand_quick");

	switch (func_560())
	{
		case 0:
			hash = joaat("use_tonic_satchel_left_hand_quick");
			break;
	
		case 1:
			hash = joaat("use_tonic_satchel_unarmed_quick");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("use_tonic_satchel_rifle_quick");
			break;
	}

	if (hash != 0)
	{
		if (!func_562(Global_33, hParam0, hash, 1, 0) && bParam1)
		{
			func_563(hParam0);
			func_181(hParam0, 1, false, 562618531);
		}
	}
	else
	{
		func_563(hParam0);
		func_181(hParam0, 1, false, 562618531);
	}

	return;
}

void func_344(Hash hParam0, BOOL bParam1) // Position - 0xDBFC Hash - 0x1923F90C ^0xB46E99E1
{
	Hash hash;

	hash = joaat("use_tonic_potent_satchel_left_hand_quick");

	switch (func_560())
	{
		case 0:
			hash = joaat("use_tonic_potent_satchel_left_hand_quick");
			break;
	
		case 1:
			hash = joaat("use_tonic_potent_satchel_unarmed_quick");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("use_tonic_potent_satchel_rifle_quick");
			break;
	}

	if (hash != 0)
	{
		if (!func_562(Global_33, hParam0, hash, 1, bParam1) && bParam1)
		{
			func_563(hParam0);
			func_181(hParam0, 1, false, 562618531);
		}
	}
	else
	{
		func_563(hParam0);
		func_181(hParam0, 1, false, 562618531);
	}

	return;
}

BOOL func_345(int iParam0, int iParam1) // Position - 0xDC9B Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_346(const char* sParam0) // Position - 0xDCAA Hash - 0x2124511C ^0xA40AAA4F
{
	int i;

	i = 0;

	for (i = 0; i < Global_1939434.f_161; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_1939434[i /*16*/].f_10), sParam0))
			return true;
	}

	return false;
}

void func_347(int iParam0) // Position - 0xDCE4 Hash - 0x22E7EDA ^0x22E7EDA
{
	if (func_345(iParam0, 1))
		func_564(1);

	return;
}

int func_348(int iParam0) // Position - 0xDCFB Hash - 0x9D41E8C7 ^0x9D41E8C7
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 2;
	
		case 2:
			return 0;
	
		case 3:
			return 3;
	
		default:
		
	}

	return -1;
}

void func_349(BOOL bParam0) // Position - 0xDD38 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1953292 = Global_1953292 || bParam0;
	return;
}

void func_350(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0xDD4B Hash - 0x21CB5355 ^0x21CB5355
{
	int i;
	int num;

	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			if (Global_1953292.f_918 >= 25)
				return;
		
			if (func_565(iParam0))
			{
				for (i = 0; i < Global_1953292.f_918; i = i + 1)
				{
					num = (Global_1953292.f_923 + i) % 25;
				
					if (Global_1953292.f_736[num /*4*/] == iParam0 && Global_1953292.f_736[num /*4*/].f_1 == iParam0.f_1 && Global_1953292.f_736[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_566(iParam0);
			Global_1953292.f_736[Global_1953292.f_924 /*4*/] = { iParam0 };
			Global_1953292.f_918 = Global_1953292.f_918 + 1;
			Global_1953292.f_924 = (Global_1953292.f_924 + 1) % 25;
			func_349(8);
			break;
	
		case 24:
		case 25:
			if (Global_1953292.f_919 >= 25)
				return;
		
			if (func_565(iParam0))
				return;
		
			func_566(iParam0);
			Global_1953292.f_635[Global_1953292.f_919 /*4*/] = { iParam0 };
			Global_1953292.f_919 = Global_1953292.f_919 + 1;
			func_349(8);
			break;
	
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 36:
		case 37:
		case 38:
			if (Global_1953292.f_920 >= 20)
				return;
		
			if (func_565(iParam0))
			{
				for (i = 0; i < Global_1953292.f_920; i = i + 1)
				{
					num = (Global_1953292.f_921 + i) % 20;
				
					if (Global_1953292.f_837[num /*4*/] == iParam0 && Global_1953292.f_837[num /*4*/].f_1 == iParam0.f_1 && Global_1953292.f_837[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			if (iParam0 == 34)
			{
				Global_1953292.f_930 = 1;
				Global_1953292.f_930.f_1 = iParam0.f_2;
				Global_1953292.f_930.f_2 = iParam0.f_3;
			}
		
			func_566(iParam0);
			Global_1953292.f_837[Global_1953292.f_922 /*4*/] = { iParam0 };
			Global_1953292.f_920 = Global_1953292.f_920 + 1;
			Global_1953292.f_922 = (Global_1953292.f_922 + 1) % 20;
			func_349(8);
			break;
	}

	return;
}

BOOL func_351(Hash hParam0) // Position - 0xE047 Hash - 0x99FE2AE6 ^0xF1FAFBED
{
	if (func_567())
		return false;

	if (!func_17(hParam0, 0))
		return false;

	if (!func_295(hParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	return true;
}

BOOL func_352(Hash hParam0) // Position - 0xE07D Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_568(hParam0);
}

int func_353(Hash hParam0, int iParam1) // Position - 0xE08B Hash - 0xE35D1323 ^0x1EF44228
{
	Hash interactionAnimHash;
	BOOL flag;
	Hash hash;
	BOOL flag2;

	flag2 = func_569(hParam0);

	if (func_145(hParam0) == -525676072 || func_19(hParam0, -1303648999))
		flag = true;

	if (flag2)
		if (func_570(&hash))
			if (flag)
				interactionAnimHash = func_571();
			else
				interactionAnimHash = func_572();
		else if (flag)
			interactionAnimHash = func_573();
		else
			interactionAnimHash = func_574();
	else if (func_575(&hash))
		if (func_19(hash, -1303648999) || func_145(hash) == -525676072)
			interactionAnimHash = func_571();
		else
			interactionAnimHash = func_572();
	else if (flag)
		interactionAnimHash = func_573();
	else
		interactionAnimHash = func_574();

	if (interactionAnimHash != 0)
	{
		Global_1953292.f_3501 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_33, hParam0, interactionAnimHash, 1, iParam1, -1082130432);
		return 1;
	}

	return 0;
}

BOOL func_354(BOOL bParam0) // Position - 0xE172 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1953292 && bParam0 != false;
}

void func_355() // Position - 0xE183 Hash - 0x606B8FC3 ^0xEBA3545E
{
	Global_1953292.f_3485 = 0;
	Global_1953292.f_3485.f_1 = 0;
	Global_1953292.f_3485.f_8 = 0;
	Global_1953292.f_3485.f_2 = 0;
	Global_1953292.f_3485.f_3[0] = 0;
	Global_1953292.f_3485.f_3[1] = 0;
	Global_1953292.f_3485.f_3[2] = 0;
	Global_1953292.f_3485.f_3[3] = 0;
	Global_1953292.f_3485.f_9 = 0;
	Global_1953292.f_3485.f_10 = 0;
	Global_1953292.f_3485.f_11 = 0;

	if (Global_1953292.f_3485.f_12)
		PED::_RELEASE_META_PED_ASSET_REQUEST(Global_1953292.f_3485.f_13);

	Global_1953292.f_3485.f_12 = 0;
	func_576(32768);
	func_577(1108822547, 8, 6);
	return;
}

BOOL func_356(int iParam0, BOOL bParam1) // Position - 0xE23A Hash - 0xACEDDC2C ^0xACEDDC2C
{
	return func_578(iParam0, false) < func_579(iParam0, bParam1);
}

void func_357(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0xE252 Hash - 0x20094A26 ^0x2C3F4D15
{
	Hash hash;
	BOOL flag;

	hash = func_145(hParam0);
	flag = false;

	switch (hash)
	{
		case -2061583405:
			if (func_19(hParam0, 1584357097))
				return;
		
			flag = func_580(hParam0, &(Global_1953292.f_3352.f_28), Global_1953292.f_3352.f_33.f_1, bParam1, bParam5);
			break;
	
		case -1719060085:
			flag = func_580(hParam0, &(Global_1953292.f_3352.f_31), 1, bParam1, bParam5);
			break;
	
		case -999503751:
			flag = func_580(hParam0, &(Global_1953292.f_3352.f_27), Global_1953292.f_3352.f_33, bParam1, bParam5);
			break;
	
		case -525676072:
			flag = func_580(hParam0, &(Global_1953292.f_3352.f_29), Global_1953292.f_3352.f_33.f_2, bParam1, bParam5);
			break;
	
		case 81053684:
			flag = func_580(hParam0, &(Global_1953292.f_3352.f_30), 1, bParam1, bParam5);
			break;
	
		case 119907797:
			flag = func_580(hParam0, &(Global_1953292.f_3352.f_32), 1, bParam1, bParam5);
			break;
	
		case 1388798186:
			flag = func_580(hParam0, &(Global_1953292.f_3352.f_33.f_7), 1, bParam1, bParam5);
			break;
	
		default:
			if (func_19(hParam0, 160827531))
				flag = func_580(hParam0, &(Global_1953292.f_3352.f_30), 1, bParam1, bParam5);
			break;
	}

	if (!flag)
		return;

	func_581();

	if (func_62(hash) || hash != -999503751 && func_19(hParam0, -166674229))
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_199(bParam5), hParam0, 0);

	func_152(hParam0, bParam3, bParam5);

	if (bParam4)
		func_582(true, hParam0);

	if (bParam2)
		func_583(false, false);

	return;
}

Hash func_358(int iParam0) // Position - 0xE3FE Hash - 0x76CF7738 ^0x832144C4
{
	if (iParam0 == 0)
		iParam0 = func_584();

	if (iParam0 == 1160113249)
		return joaat("clothing_p3_player_three_ms1_hat_000_000");

	return joaat("clothing_item_hat_pzero_000");
}

void func_359(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xE429 Hash - 0x815ADAC6 ^0x815ADAC6
{
	if (func_585(hParam0, hParam1))
	{
		func_586(hParam0, hParam1, true, bParam2, bParam3, bParam4);
		return;
	}

	return;
}

Hash func_360(Hash hParam0) // Position - 0xE44E Hash - 0x10AF8248 ^0x31B33E5F
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1953292.f_83[i /*12*/].f_9 == hParam0)
			return func_587(i, 1);
	}

	return -358215195;
}

int func_361(Hash hParam0, int iParam1) // Position - 0xE489 Hash - 0xFF013CB6 ^0xFF013CB6
{
	switch (hParam0)
	{
		case -1944638739:
			return 36;
	
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
	
		case -1884748965:
			return 32;
	
		case -1586649372:
			return 33;
	
		case -1505978566:
			return 22;
	
		case -1489346253:
			return 38;
	
		case -1364808185:
			return 19;
	
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
	
		case -1197751823:
			return 20;
	
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
	
		case -1130865351:
			return 31;
	
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return 1;
	
		case -893163968:
			return 17;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
	
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
	
		case -450913544:
			return 18;
	
		case -426430150:
			return 29;
	
		case -358215195:
			return 39;
	
		case -338487716:
			return 11;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
	
		case 304805134:
			return 21;
	
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
	
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return 2;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return 25;
	
		case 735520874:
			return 5;
	
		case 788010710:
			return 34;
	
		case 1108822547:
			return 10;
	
		case 1145151482:
			return 23;
	
		case 1250092473:
			return 16;
	
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return 4;
	
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
	
		case 1600962399:
			return 13;
	
		case 1672288269:
			return 15;
	
		case 1742327865:
			return 12;
	
		case joaat("MP_COMPONENT_TYPE_TEETH"):
			return 3;
	
		case 1788623170:
			return 30;
	
		case 1849504272:
			return 14;
	
		case 1900541263:
			return 37;
	
		case 1958421083:
			return 35;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_362(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xE65A Hash - 0x6F6F94C ^0x832D60DF
{
	var unk;
	int num;
	int i;

	func_588();

	if (iParam2 == 39)
	{
		unk = { func_167(hParam0, true, 0) };
		iParam2 = func_361(func_360(unk.f_4), 1);
	}

	if (iParam2 < 0 || iParam2 >= 39)
		return false;

	if (func_354(32768) && iParam2 == 10)
		func_589(1108822547);

	num = 0;

	if (bParam4)
		num = 3;

	if (func_364(hParam0, true))
		func_590(&(Global_1953292.f_1557), &hParam0, iParam2, bParam5);

	if (bParam6)
		func_591(iParam2);

	func_592(iParam2, num);
	func_593(&Global_1953292.f_1557.f_1[iParam2 /*3*/], 4, 6);
	func_593(&Global_1953292.f_1676.f_1[iParam2 /*3*/], 4, 6);
	func_594(&(Global_1953292.f_1557), hParam0, iParam2, true, num);

	if (hParam1 == 0)
		hParam1 = Global_1953292.f_1557.f_1[iParam2 /*3*/].f_1;

	Global_1953292.f_1557.f_1[iParam2 /*3*/] = hParam0;
	Global_1953292.f_1557.f_1[iParam2 /*3*/].f_1 = func_595(hParam0, iParam2, hParam1);

	if (bParam3)
	{
		for (i = 0; i < Global_1953292.f_2938; i = i + 1)
		{
			if (Global_1953292.f_2938.f_2[i /*2*/] >= 0 && Global_1953292.f_2938.f_2[i /*2*/] < 39)
			{
				Global_1953292.f_2765[Global_1953292.f_2938.f_2[i /*2*/] /*2*/] = 0;
				Global_1953292.f_2765[Global_1953292.f_2938.f_2[i /*2*/] /*2*/].f_1 = 0;
				func_577(func_587(Global_1953292.f_2938.f_2[i /*2*/], 1), 1, 6);
			}
		}
	}

	return true;
}

void func_363(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xE7F9 Hash - 0x28B4597A ^0x28B4597A
{
	func_596(&(Global_1953292.f_2938), bParam0, bParam1, bParam2, bParam3, bParam4);
	return;
}

BOOL func_364(Hash hParam0, BOOL bParam1) // Position - 0xE816 Hash - 0x927056E ^0xFA981333
{
	!func_17(hParam0, 0);

	if (!bParam1 && hParam0 == joaat("clothing_item_hair_none") || hParam0 == joaat("clothing_item_beard_none"))
		return false;

	if (func_19(hParam0, 265372629))
		return true;

	return false;
}

BOOL func_365(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xE861 Hash - 0x59CF58B3 ^0xFDEE716A
{
	var unk;
	var unk5;
	Hash hash;

	unk5 = { func_167(hParam0, bParam2, 0) };

	if (func_364(hParam0, false))
	{
		hash = func_597(unk5, unk5.f_4, bParam2, -1);
	
		if (hash != 0)
		{
			unk5 = { func_167(hash, bParam2, 0) };
			unk = { func_168(hash, unk5, unk5.f_4, bParam2) };
			return func_169(unk, false, bParam2);
		}
	
		return true;
	}

	unk = { func_168(hParam0, unk5, unk5.f_4, bParam2) };
	return func_169(unk, bParam1, bParam2);
}

int func_366(Hash hParam0) // Position - 0xE8EA Hash - 0x6D41B005 ^0x4F13B04D
{
	int num;
	int num2;

	num = 0;
	num2 = func_361(hParam0, 1);

	switch (hParam0)
	{
		case 1108822547:
			if (Global_1953292.f_1676.f_1[num2 /*3*/] == Global_1953292.f_83[num2 /*12*/] || Global_1953292.f_1557.f_1[num2 /*3*/] == Global_1953292.f_83[num2 /*12*/])
				num = 48;
			break;
	}

	return num;
}

void func_367(var uParam0, int iParam1) // Position - 0xE94E Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

int func_368(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0xE95F Hash - 0xC754D793 ^0x26C4E67C
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_17(hParam0, 0))
		return 0;

	if (!bParam7 && func_317(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_168(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_199(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_199(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

struct<4> func_369(BOOL bParam0) // Position - 0xE9DE Hash - 0xCD4C5B4C ^0x5BC3600A
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_199(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_168(joaat("character"), func_410(), joaat("SLOTID_NONE"), bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_168(joaat("character"), func_410(), joaat("SLOTID_NONE"), false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_168(joaat("character"), func_410(), joaat("SLOTID_NONE"), bParam0);
}

BOOL func_370(int iParam0) // Position - 0xEA7E Hash - 0x11215AF ^0x23164775
{
	Ped ped;

	iParam0 = func_249(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	ped = func_94(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return false;

	if (func_598(ped))
		return true;

	return false;
}

int func_371() // Position - 0xEADF Hash - 0x38870270 ^0x38870270
{
	return Global_38.f_289.f_3222;
}

BOOL func_372() // Position - 0xEAF0 Hash - 0x8190E5D8 ^0x44030827
{
	return Global_1915656.f_22504.f_1;
}

BOOL func_373(int iParam0) // Position - 0xEB01 Hash - 0xDDC0076D ^0xDDC0076D
{
	return Global_1051832.f_3648 && iParam0 != false;
}

void func_374(int iParam0) // Position - 0xEB15 Hash - 0xB89DF92F ^0xB89DF92F
{
	Global_1051832.f_3648 = Global_1051832.f_3648 - Global_1051832.f_3648 && iParam0;
	return;
}

void func_375(int iParam0) // Position - 0xEB36 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1051832.f_3649 = iParam0;
	return;
}

BOOL func_376() // Position - 0xEB47 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1915656.f_22504;
}

void func_377() // Position - 0xEB56 Hash - 0x3C6E7275 ^0x31AA3C4E
{
	PAD::_SET_CONTROL_CONTEXT(4, joaat("HandheldCatalogue"));
	return;
}

BOOL func_378() // Position - 0xEB68 Hash - 0x8D9A8CC3 ^0x8D9A8CC3
{
	return func_373(4);
}

int func_379(BOOL bParam0) // Position - 0xEB75 Hash - 0x3D1D4A2D ^0x4A9294C0
{
	Player playerIndex;
	Vehicle vehiclePedIsUsing;
	Hash entityModel;
	int scenarioPointTypePedIsUsing;

	if (!func_599())
		return 3;

	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pause_menu")) > 0 && Global_1051832.f_3650 == 0 && !bParam0)
		return 45;

	if (Global_1915656.f_20638)
		return 10;

	if (Global_1051832.f_3738 != 0)
		return 0;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (PLAYER::IS_PLAYER_DEAD(playerIndex))
		return 12;

	if (func_212(1106247680, 0) || PED::IS_PED_HOGTIED(Global_33) || PED::IS_PED_HOGTYING(Global_33))
		return 13;

	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(Global_33) || PED::IS_PED_IN_ANY_TRAIN(Global_33))
	{
		vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_33);
	
		if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsUsing))
		{
			entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsUsing);
		
			switch (entityModel)
			{
				case joaat("breach_cannon"):
				case joaat("gatling_gun"):
				case joaat("gatlingmaxim02"):
				case joaat("hotchkiss_cannon"):
					return 14;
			}
		}
	
		return 11;
	}

	if (TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_33) && !Global_1915656.f_22504.f_1)
		return 16;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
		return 17;

	if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(PLAYER::PLAYER_PED_ID()) != 0)
		return 18;

	if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
	{
		scenarioPointTypePedIsUsing = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33);
	
		if (scenarioPointTypePedIsUsing != joaat("world_player_dynamic_kneel") && scenarioPointTypePedIsUsing != joaat("prop_player_dynamic_seat_chair_table") && scenarioPointTypePedIsUsing != joaat("prop_player_seat_chair_dynamic"))
			return 19;
	}

	if (func_600(255))
		return 3;

	if (MISC::IS_MINIGAME_IN_PROGRESS())
		return 44;

	if (Global_1108965.f_775.f_28 != -1 && Global_1108965.f_775.f_28 != 6 && Global_1108965.f_775.f_28 != 8)
		if (func_601(Global_1108965.f_775.f_28))
			return 36;
		else
			return 37;

	if (PED::_GET_PLAYER_PED_WATER_DEPTH(Global_33) >= 1f)
		return 22;

	if (Global_1572887.f_72.f_40 >= 11 && Global_1572887.f_72.f_40 < 15)
		return 42;

	if (PED::IS_PED_FALLING(Global_33) || PED::IS_PED_CLIMBING(Global_33) || PED::_IS_PED_SLIDING(Global_33) || PED::IS_PED_SWIMMING(Global_33))
		return 15;

	if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_33))
		return 21;

	if (func_602())
		return 43;

	return -1;
}

void func_380(int iParam0) // Position - 0xEDD4 Hash - 0x4270B4BA ^0x4270B4BA
{
	int num;

	if (!func_378())
		func_603(true);

	Global_1051832.f_3650 = iParam0;
	num = func_379(true);

	if (num != -1)
	{
		func_323(num);
		func_604(false);
	}
	else
	{
		func_604(true);
	}

	return;
}

BOOL func_381() // Position - 0xEE12 Hash - 0x2C6DE8F6 ^0xEC7C4E93
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_3;
}

BOOL func_382(int iParam0) // Position - 0xEE2E Hash - 0x4D892971 ^0xA4BF78E0
{
	return func_89(Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73, iParam0);
}

BOOL func_383() // Position - 0xEE48 Hash - 0x9AF3EE3F ^0xBF53F360
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_384() // Position - 0xEE5C Hash - 0x4B44C4C9 ^0x4B44C4C9
{
	return !func_382(2);
}

BOOL func_385(BOOL bParam0) // Position - 0xEE6A Hash - 0x863407EE ^0x278607D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1207339.f_1 && bParam0 != false;
}

void func_386() // Position - 0xEE8B Hash - 0x5281CE7E ^0x311564BB
{
	if (!UIAPPS::IS_ANY_UIAPP_RUNNING())
		return;

	UIAPPS::_CLOSE_ALL_UIAPPS();
	return;
}

BOOL func_387(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xEEA2 Hash - 0xB9500D ^0xB9500D
{
	BOOL flag;

	flag = func_606(bParam2, func_605(), true, false, true, true, true, bParam0, bParam1);

	if (!flag)
		return false;

	return true;
}

void func_388(int iParam0) // Position - 0xEECA Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1896762.f_365 = iParam0;
	return;
}

int func_389(Player plParam0) // Position - 0xEEDB Hash - 0xA7E5BCA7 ^0x9018D80B
{
	Player player;

	player = plParam0;

	if (player >= 0 && player < 32)
		return Global_1144526[player /*83*/].f_38.f_3;

	return -1;
}

struct<2> func_390(int iParam0) // Position - 0xEF0B Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_391(var uParam0, var uParam1) // Position - 0xEF1F Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_607(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_608(uParam0))
		return false;

	return true;
}

int func_392(Player plParam0, BOOL bParam1) // Position - 0xEF53 Hash - 0x5FD9694A ^0x8A2402F0
{
	Player player;
	int i;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
	{
		player = plParam0;
	
		for (i = 0; i <= 7; i = i + 1)
		{
			if (Global_1205938.f_1[i /*26*/].f_1 != -1 && func_609(i, 64, player))
				if (bParam1)
					if (Global_1206497.f_78[i /*20*/] >= 2)
						return Global_1205938.f_1[i /*26*/].f_1;
				else if (Global_1206497.f_78[i /*20*/] >= 5)
					return Global_1205938.f_1[i /*26*/].f_1;
		}
	}

	return -1;
}

int func_393(int iParam0) // Position - 0xEFDD Hash - 0x220835E3 ^0xD3CA642C
{
	if (iParam0 == -1)
		return 0;

	return Global_1206497.f_1[iParam0 /*4*/];
}

var func_394(int iParam0, int iParam1) // Position - 0xEFF9 Hash - 0x42C305C ^0x81DF2F42
{
	return func_610(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

void func_395(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, BOOL bParam20, BOOL bParam21) // Position - 0xF017 Hash - 0x60237433 ^0x1CACDDD0
{
	var unk;

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam19))
		return;

	iParam0 = 0;
	iParam0.f_1 = PLAYER::PLAYER_ID();
	iParam0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (!bParam20)
	{
		if (iParam0.f_18)
		{
			if (bParam21)
			{
				unk.f_12 = -1;
				unk.f_12.f_1 = -1;
				unk.f_14 = 255;
				unk.f_15 = 255;
				unk.f_20 = -1;
				unk = { iParam0 };
				unk.f_19 = uParam19;
				unk.f_20 = iParam0.f_2;
				func_611(&(Global_1072759.f_22981), unk);
				return;
			}
		}
	}

	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &iParam0, 19, 5, &uParam19);
	return;
}

void func_396(int iParam0, var uParam1, var uParam2) // Position - 0xF0B1 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_397(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xF0CD Hash - 0x6E07CB9 ^0x6E07CB9
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_612(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_613(iParam0))
		return false;

	if (func_614(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_615(iParam0, 1) || func_616(32768))
		if (!func_615(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_617())
		return false;

	return true;
}

void func_398(int iParam0, int iParam1) // Position - 0xF16F Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1904402[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1904402[iParam0] = address;
	return;
}

void func_399() // Position - 0xF193 Hash - 0x5516EB92 ^0x96671886
{
	Global_1913634.f_1583 = MISC::GET_GAME_TIMER();
	Global_1913634.f_1581 = 1;
	return;
}

void func_400(int iParam0, Player plParam1) // Position - 0xF1AE Hash - 0xD1944A1 ^0xD3AC39CA
{
	Player player;

	player = plParam1;
	Global_1148185[player /*10*/].f_7 = Global_1148185[player /*10*/].f_7 || iParam0;
	return;
}

struct<4> func_401(BOOL bParam0) // Position - 0xF1D1 Hash - 0xC271E2E0 ^0xF6B4968C
{
	int num;

	num = func_199(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_168(923904168, func_369(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_168(923904168, func_369(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_168(923904168, func_369(bParam0), -740156546, false);
}

BOOL func_402(Hash hParam0, BOOL bParam1) // Position - 0xF272 Hash - 0x5D0FB4E0 ^0x17177DE5
{
	if (func_145(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_618();
		else
			return 1;

	return 0;
}

BOOL func_403(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0xF2A9 Hash - 0x28ECC25A ^0x28ECC25A
{
	return func_368(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_404(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0xF2C4 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_619(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_405(BOOL bParam0) // Position - 0xF2E5 Hash - 0x9E4BFC8E ^0xE92FDA8B
{
	int num;

	num = func_199(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_168(271701509, func_369(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_168(271701509, func_369(bParam0), 12999093, false);
}

BOOL func_406(Hash hParam0, Hash hParam1) // Position - 0xF34F Hash - 0x3516CCA0 ^0x327E5212
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_145(hParam0);

	if (category == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (func_620(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_407(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0xF3BC Hash - 0x113CD144 ^0x113CD144
{
	return func_621(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

int func_408(Any* panParam0, int iParam1, BOOL bParam2) // Position - 0xF3D2 Hash - 0x85BC54D5 ^0xA60D4F06
{
	int num;
	var unk;
	int num2;
	var unk15;
	var unk44;
	var unk70;
	var unk88;

	num = -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return num;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_407(*panParam0, &unk, true, false, -1))
		return num;

	if (unk.f_10 == iParam1)
		return num;

	if (unk.f_13)
		return num;

	num2 = func_142(unk.f_4);

	if (num2 == joaat("HORSE"))
	{
		unk15 = { func_622(*panParam0, true, false) };
		unk15.f_10 = iParam1;
		num = func_623(joaat("UPDATE"), &unk15, bParam2);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("coach"))
	{
		unk44 = { func_624(*panParam0, true, false) };
		unk44.f_10 = iParam1;
		num = func_625(joaat("UPDATE"), &unk44, bParam2);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("CLOTHING"))
	{
		unk70 = { func_626(*panParam0, true, false) };
		unk70.f_10 = iParam1;
		num = func_627(joaat("UPDATE"), &unk70, bParam2);
	
		if (num == -1)
			return num;
	}
	else
	{
		unk88 = { func_628(&unk, false) };
		unk88.f_10 = iParam1;
		num = func_545(joaat("UPDATE"), &unk88, bParam2);
	
		if (num == -1)
			return num;
	}

	return num;
}

BOOL func_409(Hash hParam0) // Position - 0xF515 Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_142(hParam0) == joaat("WEAPON");
}

struct<4> func_410() // Position - 0xF529 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

void func_411(int iParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0xF535 Hash - 0x22B90C8D ^0x76601733
{
	Hash item;

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ENTER"), false);

	if (PED::IS_PED_ON_MOUNT(Global_33) && !func_233(Global_33))
		return;
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_33))
		return;
	else if (PED::IS_PED_RELOADING(Global_33))
		return;

	if (iParam0 == 1)
	{
		item = hParam1;
	
		if (!Global_1940085.f_9 && !PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "inInspectionMode"))
		{
			TASK::_TASK_ITEM_INTERACTION_3(PLAYER::PLAYER_PED_ID(), item, &uParam2, 0, 0, 0, -1082130432);
			Global_1940085.f_8 = 1;
			Global_1940085.f_66 = { uParam2 };
		}
	}

	return;
}

int func_412(Hash hParam0) // Position - 0xF5CE Hash - 0x6D5A6948 ^0x8A3E949A
{
	if (func_19(hParam0, 1064293907))
		return 2;
	else if (func_19(hParam0, -1218707194))
		return 1;
	else if (func_19(hParam0, 1888974372))
		return 0;

	return 1;
}

Hash func_413(Hash hParam0) // Position - 0xF613 Hash - 0x5FB59AC3 ^0xF8EA047B
{
	int num;

	num = 0;

	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			num = joaat("a_c_toad_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			num = joaat("a_c_bluejay_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			num = joaat("A_C_Pigeon");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			num = joaat("a_c_cardinal_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			num = joaat("a_c_carolinaparakeet_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			num = joaat("a_c_rat_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			num = joaat("a_c_crow_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			num = joaat("a_c_crab_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			num = joaat("a_c_frogbull_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			num = joaat("a_c_sparrow_01");
			break;
	
		case joaat("provision_fish_chain_pickerel_poor"):
		case joaat("provision_fish_chain_pickerel"):
			num = joaat("a_c_fishchainpickerel_01_sm");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			num = joaat("a_c_quail_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			num = joaat("a_c_chipmunk_01");
			break;
	
		case joaat("provision_fish_muskie"):
		case joaat("provision_fish_muskie_poor"):
			num = joaat("a_c_fishmuskie_01_lg");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			num = joaat("a_c_oriole_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			num = joaat("a_c_bat_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			num = joaat("a_c_woodpecker_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			num = joaat("a_c_cedarwaxwing_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			num = joaat("a_c_robin_01");
			break;
	
		case joaat("provision_fish_smallmouth_bass_poor"):
		case joaat("provision_fish_smallmouth_bass"):
			num = joaat("a_c_fishsmallmouthbass_01_ms");
			break;
	
		case joaat("provision_fish_perch_poor"):
		case joaat("provision_fish_perch"):
			num = joaat("a_c_fishperch_01_sm");
			break;
	
		case joaat("provision_fish_lake_sturgeon"):
		case joaat("provision_fish_lake_sturgeon_poor"):
			num = joaat("a_c_fishlakesturgeon_01_lg");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			num = joaat("a_c_songbird_01");
			break;
	
		case joaat("provision_fish_bluegill_poor"):
		case joaat("provision_fish_bluegill"):
			num = joaat("a_c_fishbluegil_01_sm");
			break;
	
		case joaat("provision_fish_largemouth_bass"):
		case joaat("provision_fish_largemouth_bass_poor"):
			num = joaat("a_c_fishlargemouthbass_01_ms");
			break;
	
		case joaat("provision_fish_northern_pike"):
		case joaat("provision_fish_northern_pike_poor"):
			num = joaat("a_c_fishnorthernpike_01_lg");
			break;
	
		case joaat("provision_fish_bullhead_catfish"):
		case joaat("provision_fish_bullhead_catfish_poor"):
			num = joaat("a_c_fishbullheadcat_01_sm");
			break;
	
		case joaat("provision_fish_redfin_pickerel_poor"):
		case joaat("provision_fish_redfin_pickerel"):
			num = joaat("a_c_fishredfinpickerel_01_sm");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			num = joaat("a_c_squirrel_01");
			break;
	
		case joaat("provision_fish_sockeye_salmon_poor"):
		case joaat("provision_fish_sockeye_salmon"):
			num = joaat("a_c_fishsalmonsockeye_01_ms");
			break;
	
		case joaat("provision_fish_rock_bass_poor"):
		case joaat("provision_fish_rock_bass"):
			num = joaat("a_c_fishrockbass_01_sm");
			break;
	
		case joaat("provision_fish_steelhead_trout_poor"):
		case joaat("provision_fish_steelhead_trout"):
			num = joaat("a_c_fishrainbowtrout_01_ms");
			break;
	
		case joaat("provision_fish_channel_catfish_poor"):
		case joaat("provision_fish_channel_catfish"):
			num = joaat("a_c_fishchannelcatfish_01_lg");
			break;
	
		case joaat("provision_fish_longnose_gar_poor"):
		case joaat("provision_fish_longnose_gar"):
			num = joaat("a_c_fishlongnosegar_01_lg");
			break;
	}

	return num;
}

BOOL func_414() // Position - 0xF985 Hash - 0xD3E48215 ^0xDBA46110
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
		return false;

	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

struct<2> func_415(int iParam0, int iParam1) // Position - 0xF9A1 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_416(var uParam0, var uParam1, int iParam2) // Position - 0xF9B7 Hash - 0x31B6F9FF ^0xF5CD2283
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

int func_417(Hash hParam0, int iParam1, Hash hParam2, int iParam3) // Position - 0xF9D4 Hash - 0xB286F3DC ^0xFA2F06E4
{
	Hash hash;
	var unk;
	var unk13;
	int i;
	int num;

	if (!func_170(false) || func_414())
	{
		hash = hParam0;
		unk.f_1 = 10;
		func_630(iParam1, func_629(hParam2), &unk, true);
		func_631(hash, &unk, 0, 0);
		func_164(501, false);
		return 0;
	}

	unk13 = 15;
	PED::_0xB29C553BA582D09E(&unk13, hParam0, iParam1, func_629(hParam2));

	for (i = 0; i < 15; i = i + 1)
	{
		if (func_17(unk13[i], 0) && !func_19(unk13[i], 1286414894) && !(unk13[i] == hParam2))
		{
			func_632(unk13[i], 1, false, false, false, 752097756, 0, 0, 0, false);
		
			if (iParam3 != 0)
				if (iParam3 == unk13[i])
					num = num + 1;
			else
				num = num + 1;
		}
	}

	func_88(func_170(false), false, 0);
	return num;
}

int func_418(Hash hParam0, Any* panParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5) // Position - 0xFAD2 Hash - 0xCB093BA8 ^0x12CB551
{
	var unk;
	var unk15;
	int num;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return -1;

	if (func_542(hParam0))
		return -1;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_407(*panParam1, &unk, true, false, -1))
		return -1;

	if (unk.f_13)
		return -1;

	if (iParam2 < 0)
		iParam2 = unk.f_11;
	else if (iParam2 > unk.f_11)
		iParam2 = unk.f_11;

	unk15 = { func_628(&unk, false) };
	unk15.f_9 = iParam2;
	unk15.f_12 = iParam3;
	num = -1;
	num = func_545(joaat("use"), &unk15, bParam5);

	if (bParam4 && num != -1)
	{
		num2.f_7 = -142743235;
		num2.f_16 = -1;
		num2 = 1;
		func_419(num, num2);
	}

	return num;
}

void func_419(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0xFB9B Hash - 0x4EE39F09 ^0x4C62B7DF
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
		{
			if (Global_1292143.f_20.f_1[i /*21*/].f_1 == 1 || Global_1292143.f_20.f_1[i /*21*/].f_1 == 5)
				Global_1292143.f_20.f_1[i /*21*/].f_4 = { uParam1 };
		
			return;
		}
	}

	return;
}

BOOL func_420(Hash hParam0, Ped pedParam1) // Position - 0xFC19 Hash - 0xE7CB5684 ^0xEE79ABB1
{
	Ped pedIndexFromEntityIndex;

	if (!func_17(hParam0, 0))
		return false;

	if (func_633(hParam0))
		ATTRIBUTE::STOP_ITEM_PREVIEW();

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(pedParam1))
		return false;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam1);

	if (!ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
		return false;

	if (func_633(hParam0) && TASK::IS_PED_IN_WRITHE(pedIndexFromEntityIndex))
	{
		if (func_634(pedIndexFromEntityIndex, hParam0))
			return true;
	
		return false;
	}

	if (ENTITY::IS_ENTITY_DEAD(pedIndexFromEntityIndex))
		return false;

	if (PED::IS_PED_INJURED(pedIndexFromEntityIndex))
		return false;

	if (TASK::IS_PED_IN_WRITHE(pedIndexFromEntityIndex))
		return false;

	if (func_635() == 1)
	{
		func_636(pedIndexFromEntityIndex);
		func_637(hParam0);
		func_638(1);
	}
	else
	{
		return false;
	}

	return true;
}

void func_421(int iParam0, int iParam1) // Position - 0xFCDE Hash - 0x3D5489B0 ^0x3D5489B0
{
	*iParam0 = iParam1;
	return;
}

BOOL func_422(Hash hParam0) // Position - 0xFCEB Hash - 0x1B551CF7 ^0xD3BB1F31
{
	return func_142(hParam0) == joaat("consumable");
}

Hash func_423(Hash hParam0, int iParam1) // Position - 0xFCFF Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_17(hParam0, 0))
		return 0;

	num = func_142(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_19(hParam0, 1399091007))
	{
		func_639(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

void func_424(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xFD79 Hash - 0x81C6837 ^0x21B516A3
{
	BOOL flag;
	int value;
	var unk;
	int num;
	char* str;
	int num2;
	int num3;
	Hash hash;
	int num4;
	char* str2;
	char* str3;
	int num5;
	char* str4;
	Hash hash2;
	Hash hash3;
	int value2;
	const char* str5;
	var unk7;

	if (!func_17(hParam0, 0))
		return;
	else if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;
	else if (iParam1 == 0)
		return;

	if (!func_640() || bParam6)
	{
		func_641(hParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}

	flag = false;
	value = MISC::ABSI(iParam1);
	TEXT_LABEL_ASSIGN_STRING(&unk, value == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);

	if (hParam0 == joaat("AMMO_MOONSHINEJUG_MP"))
		TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_GET_PUMP", 32);

	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, value == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);
		flag = true;
	}
	else if (bParam2 && func_643(hParam0, 2097152))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		flag = true;
	}

	num = func_142(hParam0);
	num2 = 0;
	num3 = joaat("Inventory");

	if (num == joaat("AMMO") && hParam0 != joaat("ammo_hatchet") && hParam0 != joaat("ammo_hatchet_cleaver") && hParam0 != joaat("ammo_hatchet_hunter") && hParam0 != joaat("ammo_tomahawk_ancient") && hParam0 != joaat("ammo_poisonbottle") && hParam0 != joaat("AMMO_MOONSHINEJUG_MP") && !func_19(hParam0, -1982291600) && !func_19(hParam0, 137764179))
	{
		num2 = joaat("ammo_types");
		num3 = joaat("ammo_types");
	}

	hash = func_145(hParam0);

	if (num == joaat("weapon_mod") || num == joaat("weapon_decoration") || hash == -1674363638 || hash == 252325943 || hash == 829857647 || hash == -636562458 || hash == 1341188928 || hash == 1216664798)
	{
		str = "ITEMTYPE_UPGRADES";
		str.f_1 = "itemtype_textures";
	}
	else if (!func_644(hParam0, &str, num3, num2, 0, joaat("ui_itemviewer")))
	{
		str = "_PLACEHOLDER";
		str.f_1 = "inventory_items";
	}

	if (MISC::GET_HASH_KEY(str) == 121560594)
		str = "DOCUMENT_MAP_GENERIC";

	if (bParam5)
	{
		str = "ITEMTYPE_ORDERED_ITEM";
		str.f_1 = "itemtype_textures";
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return;

	num4 = joaat("COLOR_PURE_WHITE");
	str2 = "Transaction_Positive";
	str3 = "Transaction_Feed_Sounds";
	num5 = 0;

	if (flag)
	{
		num4 = joaat("color_greymid");
		str2 = "Transaction_Negative";
		num5 = 1;
	}

	if (func_19(hParam0, 474910316))
	{
		str4 = func_645(hParam0);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(str4))
		{
			str2 = str4;
			str3 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}

	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(hParam0))
		if (!flag && !bParam2)
			num4 = joaat("color_rpg_special_1");
		else
			num4 = joaat("color_yellowdark");

	if (func_19(hParam0, 1816585950))
		num4 = joaat("color_objective");

	if (func_471(hParam0))
		if (!flag && !bParam2)
			num4 = joaat("color_yellow");
		else
			num4 = joaat("color_yellowdark");

	hash2 = func_267(hParam0, false);

	if (func_646(hash) && func_19(hParam0, -306684263) && hash2 != 0)
	{
		hash2 = func_468(hParam0);
	}
	else if (func_142(hParam0) == joaat("CLOTHING"))
	{
		hash3 = func_647(hParam0);
	
		if (func_17(hash3, 0))
			hash2 = func_267(hash3, false);
	}

	if (func_648(hParam0, 1443104131) && bParam3)
	{
		value2 = 1;
		func_649(hParam0, -915411861, &value2, false);
		value = BUILTIN::CEIL(BUILTIN::TO_FLOAT(value) / BUILTIN::TO_FLOAT(value2));
		iParam1 = BUILTIN::CEIL(BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(value2));
	}

	str5 = func_505(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, hash2), value), num4);

	if (iParam1 == 1)
		str5 = MISC::VAR_STRING(0, hash2);

	if (hash == -1839668642 && hParam0 != joaat("clothing_item_hair_none") && hParam0 != 1326838792 && hParam0 != -230310728 || hash == 231148558 && hParam0 != joaat("clothing_item_m_beard_stubble") && hParam0 != joaat("clothing_item_beard_none") || hash == 252325943 && hParam0 != joaat("clothing_blend_lipstick_none") || hash == -636562458 && hParam0 != joaat("clothing_blend_eyeshadow_none"))
		str5 = MISC::VAR_STRING(0, func_650(hParam0, -442898163));

	if (hash == -126813555 || hash == 1946043663)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk7, "", 128);
	
		if (func_651(hParam0, &unk7))
			str5 = func_272(func_652(unk7), joaat("COLOR_PURE_WHITE"));
	}

	func_653(str5, str.f_1, MISC::GET_HASH_KEY(str), num5, num4, str3, str2, 0, true);
	return;
}

struct<2> func_425(Hash hParam0) // Position - 0x10254 Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_17(hParam0, 0))
		return unk;

	if (func_19(hParam0, -305066475))
		if (func_37() == -1)
			if (func_19(hParam0, -537818634))
				return func_654(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_654(joaat("deadeye_items"));
	else if (func_19(hParam0, -537818634))
		return func_654(joaat("medicine_items"));

	if (func_19(hParam0, 2084895747))
		return func_654(joaat("lock_breaker_items"));

	return unk3;
}

BOOL func_426(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x102E8 Hash - 0x4C808C39 ^0x99CF3799
{
	var unk;
	int num;
	int num2;
	var unk19;
	var unk33;
	int i;
	int num3;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return false;

	unk = { func_444(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam2)
		func_655(&unk, func_401(false));

	if (!func_445(&unk, &num, &num2, false))
		return false;

	unk19.f_9 = joaat("SLOTID_NONE");

	for (i = 0; i < num2; i = i + 1)
	{
		if (num3 >= iParam1)
			break;
	
		if (!func_239(&unk19, i, num, num2))
		{
		}
		else
		{
			unk33.f_4 = unk19.f_9;
			unk33 = { unk19.f_5 };
		
			if (func_319(hParam0, &unk19, &unk33, 1, hParam3, 0, false))
				num3 = num3 + 1;
		}
	}

	func_253(num);
	num3 < iParam1;
	return true;
}

int func_427(Hash hParam0, int iParam1, Ped pedParam2, BOOL bParam3, BOOL bParam4, Hash hParam5, int iParam6, int iParam7) // Position - 0x103B4 Hash - 0xBFFE30FD ^0x69B34B6A
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam2))
	{
		num = func_656(pedParam2, hParam0);
	
		if (num > 0)
		{
			if (iParam1 < num)
				num = iParam1;
		
			iParam1 = iParam1 - num;
			func_657(&pedParam2, hParam0, &num, bParam4, hParam5, iParam6);
			iParam1 = iParam1 + num;
		}
	}

	iParam1 = func_658(PLAYER::PLAYER_PED_ID(), hParam0, iParam1, bParam3, iParam6);

	if (iParam1 <= 0)
		return iParam1;

	return iParam1;
}

BOOL func_428(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x1041E Hash - 0xE0E24551 ^0xE0E24551
{
	int num;
	int num2;
	int num3;

	num = func_263(hParam0, false, false, false);

	if (num >= iParam1)
	{
		num2 = iParam1;
	}
	else
	{
		num2 = num;
		num3 = iParam1 - num2;
	}

	if (num2 > 0)
		if (!func_181(hParam0, num2, bParam2, hParam3))
			return 0;
		else
			func_659(hParam0, num2, false);

	if (num3 > 0)
	{
		if (!func_660(hParam0, num3, bParam2, hParam3))
			return 0;
		else
			func_659(hParam0, num2, false);
	
		if (!bParam2)
			func_144("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, true);
	}

	return 1;
}

BOOL func_429(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x104AD Hash - 0x8DC2D9FF ^0x154DA63
{
	var unk;
	var unk6;

	if (!func_17(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_369(bParam4) };
	unk.f_4 = -2015960939;
	unk6 = { func_168(hParam0, unk, unk.f_4, bParam4) };
	return func_319(hParam0, &unk6, &unk, iParam1, hParam2, bParam3, bParam4);
}

void func_430() // Position - 0x10507 Hash - 0x3E5E3A43 ^0x3E5E3A43
{
	int i;
	int num;

	for (i = 0; i <= 12; i = i + 1)
	{
		if (Global_1235687[i /*697*/].f_646 != 0)
		{
			num = func_661(Global_1235687[i /*697*/].f_646, true);
			Global_1235687[i /*697*/].f_645 = num;
		}
	}

	return;
}

void func_431() // Position - 0x10553 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_432(int iParam0, Any anParam1) // Position - 0x1055F Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_662(iParam0))
		return false;

	*anParam1 = Global_1915606[iParam0];

	if (*anParam1 == 0)
		return false;

	return true;
}

void func_433() // Position - 0x1058C Hash - 0x2E3B7213 ^0xD3F7C739
{
	int num;

	num = func_663();

	if (func_663() == 822208792)
		num = 0;

	if (func_33(false))
		if (func_274() == 2)
			num = -693134279;
		else
			num = -182626652;

	if (func_43())
		num = -2074770370;

	func_46(num);
	return;
}

void func_434(Hash hParam0, int iParam1, char* sParam2, int iParam3) // Position - 0x105DE Hash - 0xE14F3B20 ^0xF827B29F
{
	int dataContainerFromChildIndex;
	BOOL flag;
	int num;
	int num2;

	dataContainerFromChildIndex = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(hParam0, Global_1940252.f_11562);
	flag = func_247(iParam1);
	num = iParam1;
	num2 = dataContainerFromChildIndex;

	if (flag)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940252.f_11616, Global_1940252.f_11562);
		Global_1940252.f_11563 = Global_1940252.f_11562;
	}

	DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(8, num2, sParam2, iParam3, num, flag);
	Global_1940252.f_11564[Global_1940252.f_11562] = iParam1;
	Global_1940252.f_11562 = Global_1940252.f_11562 + 1;
	return;
}

void func_435(Hash hParam0) // Position - 0x1065C Hash - 0xE1107B89 ^0xF380C3C2
{
	if (func_93())
		func_434(hParam0, -283002878, "Horse", joaat("satchel_nav_horse"));

	return;
}

void func_436(Hash hParam0) // Position - 0x10682 Hash - 0xE1107B89 ^0x4B932C36
{
	if (func_122())
		func_434(hParam0, -889932290, "Wagon", joaat("satchel_nav_horse"));

	return;
}

void func_437(Hash hParam0) // Position - 0x106A8 Hash - 0x54EEBD9C ^0xBCBB35F7
{
	if (func_33(false))
		if (func_274() == 2)
			func_434(hParam0, -693134279, "Send", joaat("satchel_nav_send"));
		else
			func_434(hParam0, -182626652, "Sell", joaat("satchel_nav_sell"));
	else if (func_43())
		func_434(hParam0, -2074770370, "Donations", joaat("satchel_nav_donate"));

	return;
}

BOOL func_438(Hash hParam0, var uParam1) // Position - 0x10709 Hash - 0x4A27386E ^0x953F277B
{
	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < Global_1953292.f_3352.f_26)
	{
		if (hParam0 == Global_1953292.f_3352[*uParam1])
			return 1;
	
		*uParam1 = *uParam1 + 1;
	}

	return 0;
}

void func_439(BOOL bParam0) // Position - 0x10749 Hash - 0x809E815 ^0xABB9FC5C
{
	if (bParam0)
	{
		HUD::_SHOW_PLAYER_CORES(true);
		HUD::_SHOW_HORSE_CORES(false);
	}
	else
	{
		HUD::_SHOW_PLAYER_CORES(false);
		HUD::_SHOW_HORSE_CORES(true);
	}

	return;
}

BOOL func_440(Ped pedParam0) // Position - 0x1076D Hash - 0x1A9D46BF ^0x1806B677
{
	Entity entity;
	ItemSet itemset;
	BOOL flag;
	int itemsetSize;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	entity = func_664();

	if (!ENTITY::DOES_ENTITY_EXIST(entity))
		return false;

	itemset = ITEMSET::CREATE_ITEMSET(false);

	if (!ITEMSET::IS_ITEMSET_VALID(itemset))
		return false;

	ITEMSET::_CLEAR_ITEMSET(itemset);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(pedParam0, itemset);
	flag = false;
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);

	if (itemsetSize > 0)
		if (ITEMSET::IS_IN_ITEMSET(entity, itemset))
			flag = true;

	ITEMSET::DESTROY_ITEMSET(itemset);

	if (flag)
		return true;

	return false;
}

BOOL func_441(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) // Position - 0x107F6 Hash - 0xE6946885 ^0xF1EEB43E
{
	var unk;
	int num;

	if (uParam0.f_9 != joaat("SLOTID_SATCHEL") && uParam0.f_9 != -140655024 && uParam0.f_9 != -1162387149 && uParam0.f_9 != 1784584921 && uParam0.f_9 != -511891179)
	{
		unk.f_9 = joaat("SLOTID_NONE");
	
		if (!func_407(uParam0.f_5, &unk, true, false, -1))
			return false;
	
		if (!func_19(unk.f_4, 1093867179))
			return false;
	}

	num = func_142(uParam0.f_4);

	if (num == joaat("WEAPON") && !WEAPON::_IS_WEAPON_BINOCULARS(uParam0.f_4) && uParam0.f_4 != joaat("weapon_kit_camera") && uParam0.f_4 != 332793555)
		return false;

	switch (num)
	{
		case joaat("horse_equipment"):
		case joaat("COUPON"):
		case joaat("HORSE"):
		case joaat("emote"):
		case joaat("weapon_mod"):
		case joaat("fee"):
		case joaat("active_card"):
		case joaat("AMMO"):
		case joaat("weapon_decoration"):
		case joaat("ability_card"):
		case joaat("GOLD"):
		case joaat("Component"):
		case joaat("Minigame"):
		case joaat("ADVERT"):
		case joaat("core_item"):
		case joaat("passive_card"):
			return false;
	
		case joaat("CLOTHING"):
			switch (func_145(uParam0.f_4))
			{
				case -525676072:
					if (uParam0.f_4 == joaat("kit_mask_grey_cloth"))
						return true;
					else
						return false;
					break;
			
				case 81053684:
					return true;
			
				case 1477698721:
					if (func_19(uParam0.f_4, 160827531))
						return true;
				
					return false;
			
				default:
					return false;
			}
			break;
	}

	if (func_145(uParam0.f_4) == -829303394)
		return false;

	return true;
}

void func_442(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0x109AC Hash - 0xBD272687 ^0xCE8D193D
{
	if (func_17(hParam1, 0))
		if (bParam2)
			INVENTORY::_INVENTORY_ENABLE_ITEM(iParam0, hParam1);
		else
			INVENTORY::_INVENTORY_DISABLE_ITEM(iParam0, hParam1, 0);

	return;
}

BOOL func_443(Hash hParam0) // Position - 0x109D7 Hash - 0xE539E1A0 ^0xE539E1A0
{
	return func_665(func_145(hParam0), hParam0);
}

struct<18> func_444(Hash hParam0, int iParam1, Hash hParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x109EB Hash - 0x90CCF0F4 ^0xA5F3D799
{
	Hash hash;

	hash = -1;
	hash.f_1 = -1;
	hash.f_2 = -1;
	hash.f_3 = -1;
	hash.f_4 = -1;
	hash.f_5 = -1;
	hash.f_6 = -1;
	hash.f_7 = -1;
	hash.f_8 = -1;
	hash.f_13 = -1;
	hash.f_14 = -1;
	hash.f_15 = -1;
	hash.f_16 = -1;
	hash.f_17 = -1;

	if (hParam0 != 0)
		hash = hParam0;

	if (iParam1 != 0 && iParam1 != joaat("SLOTID_NONE"))
		hash.f_1 = iParam1;

	if (hParam2 != 0 && hParam2 != joaat("SLOTID_NONE"))
		hash.f_2 = hParam2;

	if (iParam3 != 0 && iParam3 != joaat("SLOTID_NONE"))
		hash.f_3 = iParam3;

	if (iParam4 != 0)
		hash.f_4 = iParam4;

	if (iParam5 != 0)
		hash.f_5 = iParam5;

	if (iParam6 != 0)
		hash.f_8 = iParam6;

	return hash;
}

BOOL func_445(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x10AC9 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_199(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

void func_446(int iParam0, BOOL bParam1) // Position - 0x10AEE Hash - 0x8D8E849B ^0x82A532B3
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_8 = -1;
	unk.f_13 = -1;
	unk.f_14 = -1;
	unk.f_15 = -1;
	unk.f_16 = -1;
	unk.f_17 = -1;
	unk.f_4 = -854348463;
	func_666(iParam0, unk, bParam1, false);
	return;
}

void func_447(int iParam0, BOOL bParam1) // Position - 0x10B62 Hash - 0x8D8E849B ^0x82A532B3
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_8 = -1;
	unk.f_13 = -1;
	unk.f_14 = -1;
	unk.f_15 = -1;
	unk.f_16 = -1;
	unk.f_17 = -1;
	unk.f_4 = -1823706425;
	func_666(iParam0, unk, bParam1, false);
	return;
}

void func_448(int iParam0, BOOL bParam1) // Position - 0x10BD6 Hash - 0x8D8E849B ^0x82A532B3
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_8 = -1;
	unk.f_13 = -1;
	unk.f_14 = -1;
	unk.f_15 = -1;
	unk.f_16 = -1;
	unk.f_17 = -1;
	unk.f_1 = 1835126290;
	unk.f_4 = 81053684;
	func_666(iParam0, unk, bParam1, false);
	return;
}

void func_449(int iParam0, BOOL bParam1) // Position - 0x10C53 Hash - 0x8D8E849B ^0x82A532B3
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_8 = -1;
	unk.f_13 = -1;
	unk.f_14 = -1;
	unk.f_15 = -1;
	unk.f_16 = -1;
	unk.f_17 = -1;
	unk.f_4 = -525676072;
	func_666(iParam0, unk, bParam1, false);
	return;
}

void func_450(int iParam0, BOOL bParam1) // Position - 0x10CC7 Hash - 0x8D8E849B ^0x82A532B3
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_8 = -1;
	unk.f_13 = -1;
	unk.f_14 = -1;
	unk.f_15 = -1;
	unk.f_16 = -1;
	unk.f_17 = -1;
	unk.f_4 = -1719060085;
	func_666(iParam0, unk, bParam1, false);
	return;
}

BOOL func_451(Ped pedParam0, int iParam1) // Position - 0x10D3B Hash - 0x25D0971D ^0xF7D4E234
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

BOOL func_452(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x10D7A Hash - 0x7FC88506 ^0x4CD32A11
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_667(bParam1, bParam2, bParam3);

	if (Global_1572887.f_14 != -1)
		if (plParam0 == Global_1295666.f_5)
			if (!Global_1295666.f_6)
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

BOOL func_453(Hash hParam0) // Position - 0x10EAF Hash - 0xDF6FE81 ^0xAC897192
{
	int i;

	i = 0;

	for (i = 0; i < Global_1939434.f_161; i = i + 1)
	{
		if (hParam0 == MISC::GET_HASH_KEY(&(Global_1939434[i /*16*/].f_10)))
			return true;
	}

	return false;
}

BOOL func_454(int iParam0) // Position - 0x10EE9 Hash - 0xC67CC87B ^0x695B9936
{
	return Global_1915633.f_22 && iParam0 != false;
}

BOOL func_455() // Position - 0x10EFC Hash - 0xD6298B8D ^0xA8AC551C
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("camera_item")) > 0)
		return true;

	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(872480335) > 0)
		return true;

	return false;
}

BOOL func_456() // Position - 0x10F27 Hash - 0x378FC94F ^0x378FC94F
{
	return Global_1893611 & true != 0 && func_668() != -1;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x10F42 Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

int func_458(var uParam0, var uParam1) // Position - 0x10F4B Hash - 0x72C53F65 ^0x72C53F65
{
	return uParam0;
}

BOOL func_459() // Position - 0x10F55 Hash - 0xA584E02B ^0xA584E02B
{
	return func_391(Global_1051268);
}

BOOL func_460() // Position - 0x10F67 Hash - 0x16C45944 ^0x16C45944
{
	return func_669(func_390(0));
}

BOOL func_461(int iParam0) // Position - 0x10F78 Hash - 0x92B1FA90 ^0xB975289D
{
	return iParam0 == -1759663922 || iParam0 == -318976023 || iParam0 == 772881414 || iParam0 == 31269700 || iParam0 == -133550749;
}

void func_462(int iParam0, int iParam1) // Position - 0x10FC0 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

Entity func_463(Ped pedParam0) // Position - 0x10FD5 Hash - 0x3D354C79 ^0x6A3F9034
{
	int lootTarget;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (PED::IS_PED_INJURED(pedParam0))
		return 0;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 0, &lootTarget, 1, 0) != 0)
		return lootTarget;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 2, &lootTarget, 1, 0) != 0)
		return lootTarget;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 1, &lootTarget, 1, 0) != 0)
		return lootTarget;

	return 0;
}

void func_464(int iParam0, int iParam1) // Position - 0x11035 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

Hash func_465(Hash hParam0) // Position - 0x11046 Hash - 0x3DF0E667 ^0x806933A2
{
	Hash award;
	Hash outData;
	int i;
	int awardItemCount;

	if (func_19(hParam0, 1397200408))
		return 0;

	if (!func_19(hParam0, 1989861793))
		return 0;

	award = func_499(hParam0, false);

	if (!ITEMDATABASE::_ITEMDATABASE_GET_PRIORITY_ACCESS_AWARD(award))
		return 0;

	awardItemCount = ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ITEM_COUNT(award);

	for (i = 0; i < awardItemCount; i = i + 1)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_AWARD_ITEM_INFO(award, i, &outData))
		{
		}
		else if (func_19(outData, 1989861793))
		{
			return outData;
		}
	}

	return 0;
}

BOOL func_466(Hash hParam0) // Position - 0x110CA Hash - 0x672E565C ^0xD531C7FC
{
	if (func_19(hParam0, 75135761))
		return true;

	return false;
}

BOOL func_467(Hash hParam0) // Position - 0x110E5 Hash - 0x38920CAC ^0xE621BFA9
{
	Hash hash;

	hash = hParam0;

	if (!func_23(hash))
		return false;

	if (hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("coins"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("WILD_FLOWERS"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("FAMILY_HEIRLOOMS"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("Arrowheads"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("ANTIQUE_BOTTLES"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("BIRD_EGGS"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("LOST_JEWELRY_RINGS"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("LOST_JEWELRY_BRACELETS"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("LOST_JEWELRY_NECKLACES"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("LOST_JEWELRY_EARRINGS"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("TAROT_CARDS_CUPS"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("TAROT_CARDS_PENTACLES"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("TAROT_CARDS_SWORDS"), 0) || hash == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("TAROT_CARDS_WANDS"), 0))
		return true;

	return false;
}

Hash func_468(Hash hParam0) // Position - 0x1120A Hash - 0x9C7FC6B8 ^0x60951C4B
{
	var outData;
	int i;

	if (!func_17(hParam0, 0))
		return 0;

	outData.f_2 = 5;
	outData.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &outData))
	{
		for (i = 0; i < 8; i = i + 1)
		{
			if (outData.f_18[i /*2*/].f_1 == 14460646)
				if (outData.f_18[i /*2*/] != 0)
					return outData.f_18[i /*2*/];
		}
	}

	return 0;
}

BOOL func_469(Hash hParam0) // Position - 0x11278 Hash - 0x2C0A6F39 ^0xD6675939
{
	Ped mount;

	if (func_32())
	{
		return func_520(hParam0, -2074770370, false);
	}
	else if (func_29())
	{
		if (func_19(hParam0, 96549393))
			return false;
	
		if (func_19(hParam0, -111938901) || func_10(hParam0, -949239683) == -1337515701)
			return true;
	
		if (func_19(hParam0, -121341956))
			return true;
	
		return false;
	}
	else if (func_30())
	{
		if (func_19(hParam0, 1765172170) || func_19(hParam0, -458578204) || func_19(hParam0, -1919515848) || func_19(hParam0, 1443104131) || func_19(hParam0, 1490540191) || func_19(hParam0, 1573112293) || func_19(hParam0, 1939071949) || func_19(hParam0, 845883585))
			return false;
	
		if (!func_19(hParam0, joaat("ci_tag_item_meat_animal")) && !func_19(hParam0, -839724752) && !func_19(hParam0, -1457797660) && !func_19(hParam0, 1286414894))
			return false;
	
		if (func_670(hParam0) == 0)
			return false;
	}

	if (func_33(false))
		if (Global_1915656.f_20241 == 2)
			return true;
		else if (!func_273(hParam0, Global_1915656.f_20241.f_1))
			return false;
		else if (Global_1915656.f_20241 == 29)
			if (func_275(hParam0))
				return false;
		else
			Global_1915656.f_20241 == 10;

	if (func_19(hParam0, 949916894) || hParam0 == joaat("document_player_journal"))
		if (!func_443(hParam0))
			return false;

	if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_199(false), hParam0, func_33(false)))
		return false;

	if (func_37() == 0 && func_19(hParam0, -1551542038) && !func_384())
		return false;

	if (func_19(hParam0, -1242251796))
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()) && PED::GET_SEAT_PED_IS_USING(PLAYER::PLAYER_PED_ID()) != -1)
			return false;
	
		mount = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
	
		if (ENTITY::DOES_ENTITY_EXIST(mount))
			if (mount != PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX()))
				return false;
	}

	return true;
}

BOOL func_470(Hash hParam0) // Position - 0x114ED Hash - 0x7F17116B ^0xB13D7808
{
	if (!func_17(hParam0, 0))
		return false;

	return func_145(hParam0) == 1802292908;
}

BOOL func_471(Hash hParam0) // Position - 0x11510 Hash - 0x12CDDB68 ^0xF31C74A7
{
	if (func_19(hParam0, -189374246))
		if (func_671(hParam0, -1305775593) || func_671(hParam0, 1384151091) || func_671(hParam0, 2075388272) || func_671(hParam0, -1738780413))
			return true;

	if (func_19(hParam0, -753854379) || func_19(hParam0, 173360570))
		return true;

	return false;
}

int func_472(int iParam0) // Position - 0x1158F Hash - 0xA78B2E8C ^0xA78B2E8C
{
	if (!(iParam0 > -1 && iParam0 < 180))
		return -1;

	switch (iParam0)
	{
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 157:
		case 161:
		case 166:
		case 170:
		case 174:
			return 6;
	
		case 1:
		case 14:
		case 24:
		case 27:
		case 35:
		case 51:
		case 74:
		case 87:
		case 98:
		case 101:
		case 111:
		case 117:
			return 2;
	
		case 2:
		case 15:
		case 25:
		case 28:
		case 39:
		case 52:
		case 88:
		case 97:
		case 100:
		case 112:
		case 118:
			return 1;
	
		case 3:
		case 4:
		case 40:
		case 63:
		case 76:
		case 148:
			return 15;
	
		case 5:
		case 29:
		case 42:
		case 77:
			return 12;
	
		case 6:
		case 23:
		case 33:
		case 48:
		case 69:
		case 84:
		case 99:
		case 102:
		case 108:
		case 156:
		case 160:
		case 165:
		case 169:
		case 173:
			return 3;
	
		case 8:
		case 43:
		case 78:
			return 8;
	
		case 9:
		case 30:
		case 44:
		case 68:
		case 82:
		case 104:
			return 10;
	
		case 10:
		case 36:
		case 54:
		case 56:
		case 75:
		case 79:
		case 81:
		case 91:
		case 94:
		case 105:
		case 110:
			return 30;
	
		case 11:
		case 37:
		case 55:
		case 57:
		case 80:
		case 95:
		case 106:
			return 31;
	
		case 12:
		case 60:
			return 18;
	
		case 13:
		case 41:
		case 50:
		case 71:
		case 86:
		case 96:
		case 107:
			return 9;
	
		case 16:
		case 17:
		case 18:
		case 38:
		case 58:
		case 59:
		case 72:
		case 73:
		case 132:
			return 32;
	
		case 19:
		case 53:
			return 7;
	
		case 20:
			return 33;
	
		case 21:
		case 32:
		case 47:
		case 92:
		case 115:
		case 131:
			return 33;
	
		case 22:
		case 31:
		case 46:
		case 93:
		case 116:
		case 130:
			return 4;
	
		case 26:
			return 14;
	
		case 45:
		case 83:
		case 155:
		case 159:
		case 164:
		case 168:
		case 172:
			return 0;
	
		case 61:
		case 62:
		case 89:
			return 36;
	
		case 64:
		case 65:
		case 66:
		case 67:
			return 16;
	
		case 70:
		case 90:
			return 17;
	
		case 109:
		case 113:
		case 114:
			return 35;
	
		case 119:
			return 11;
	
		case 120:
		case 122:
		case 124:
		case 126:
		case 127:
		case 129:
			return 25;
	
		case 121:
		case 123:
		case 125:
		case 128:
			return 26;
	
		case 133:
			return 27;
	
		case 134:
			return 37;
	
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
			return 38;
	
		case 149:
		case 150:
		case 151:
			return 39;
	
		case 152:
			return 34;
	
		case 153:
			return 28;
	
		case 154:
			return 29;
	
		case 158:
		case 162:
		case 167:
		case 171:
		case 175:
			return 23;
	
		case 163:
			return 5;
	
		case 176:
			return 19;
	
		case 177:
			return 20;
	
		case 178:
			return 21;
	
		case 179:
			return 20;
	
		default:
		
	}

	return -1;
}

Vector3 func_473(Player plParam0) // Position - 0x11AAC Hash - 0xFD8C75C2 ^0xB4859571
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x11AC0 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

float func_475(int iParam0) // Position - 0x11AEA Hash - 0xF5CBAB81 ^0xF5CBAB81
{
	int num;

	num = func_472(iParam0);

	switch (num)
	{
		case 2:
			return 75f;
	
		case 10:
			return 10f;
	
		case 15:
			if (iParam0 == 63)
				return 40f;
			else
				return 25f;
			break;
	
		case 29:
			return 70f;
	}

	return 10f;
}

float func_476(Vehicle veParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x11B54 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(veParam0, false, false), vParam1, bParam4);
}

float func_477(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x11B7C Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

Ped func_478(int iParam0) // Position - 0x11BC4 Hash - 0xACA56E21 ^0xC662170B
{
	iParam0 = func_249(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_38.f_289.f_1[iParam0 /*460*/].f_9;
}

int func_479(int iParam0) // Position - 0x11BF7 Hash - 0x597C32BE ^0xE9FB4574
{
	iParam0 = func_249(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_38.f_289.f_1[iParam0 /*460*/].f_398;
}

float func_480(int iParam0) // Position - 0x11C2B Hash - 0xA0CA40C2 ^0xBDFFE947
{
	iParam0 = func_249(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	return Global_38.f_289.f_1[iParam0 /*460*/].f_398.f_1;
}

int func_481(Ped pedParam0, int iParam1) // Position - 0x11C61 Hash - 0x52CBB6A4 ^0xB4EE9F92
{
	int defaultAttributePointsNeededForRank;

	if (!STREAMING::IS_MODEL_VALID(pedParam0))
		pedParam0 = joaat("a_c_horse_tennesseewalker_chestnut");

	defaultAttributePointsNeededForRank = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(pedParam0, 7, iParam1);
	return defaultAttributePointsNeededForRank;
}

float func_482(float fParam0, Any anParam1, float fParam2) // Position - 0x11C87 Hash - 0xC55BBAAC ^0xC55BBAAC
{
	return ((1f - fParam2) * fParam0) + (fParam2 * anParam1);
}

BOOL func_483(int iParam0) // Position - 0x11C9C Hash - 0xA376F75 ^0xA376F75
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 22:
		case 23:
		case 25:
		case 26:
		case 31:
		case 33:
		case 36:
		case 37:
			return true;
	
		default:
			return false;
	}

	return false;
}

BOOL func_484(int iParam0) // Position - 0x11D09 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
			return true;
	}

	return false;
}

BOOL func_485(int iParam0) // Position - 0x11D57 Hash - 0x7946919E ^0x7946919E
{
	return !(iParam0 <= 0);
}

BOOL func_486(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x11D64 Hash - 0x77ECC81C ^0xEFBF0FBE
{
	if (bParam2)
		if (!func_485(iParam0))
			return false;

	if (Global_1572887.f_14 != -1)
		return Global_17418[iParam0] && bParam1 != false;

	return Global_38.f_4675[iParam0] && bParam1 != false;
}

void func_487(BOOL bParam0) // Position - 0x11DA7 Hash - 0x4D9C0B85 ^0xCC6963B3
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11634, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11633, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11630, !bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_11631, !bParam0);
	return;
}

Any func_488() // Position - 0x11DE5 Hash - 0x766C9B31 ^0xDB0EFDF8
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940252.f_11634))
		return Global_1940252.f_11632;

	return Global_1940252.f_11629;
}

void func_489(Hash hParam0) // Position - 0x11E0F Hash - 0x6BC064A9 ^0x292FB2FB
{
	if (func_145(hParam0) == -854348463)
		func_487(false);
	else if (func_19(hParam0, 1101678925) || func_19(hParam0, 1686880204) || func_19(hParam0, 173360570) || func_19(hParam0, -121341956) || func_19(hParam0, 2000026003) || func_19(hParam0, -1540973036) || func_19(hParam0, 1192444843) || func_19(hParam0, -189374246) || func_10(hParam0, 1224357681) == joaat("CI_TAG_FOLDER_KIT_KEYCHAIN") || func_509(hParam0) && !func_19(hParam0, 316290104) || func_37() == 0 && func_173(hParam0, true, false) && !func_19(hParam0, 316290104) || hParam0 == joaat("consumable_coffee_gnds_reg") || hParam0 == joaat("kit_gun_oil") || hParam0 == joaat("consumable_lock_breaker") || hParam0 == joaat("kit_collector_spade") || hParam0 == joaat("kit_placed_explosives") || hParam0 == joaat("provision_moonshine_poison") || hParam0 == -1939515319 || hParam0 == 273608212)
		func_255();
	else if (func_145(hParam0) == 1802292908 && func_10(hParam0, -949239683) == 0 && !(hParam0 == joaat("document_player_journal")))
		func_255();
	else if (func_509(hParam0))
		if (func_19(hParam0, 316290104))
			func_487(true);
		else
			func_487(true);
	else if (func_19(hParam0, 316290104) || func_173(hParam0, true, false))
		func_487(true);
	else
		func_487(false);

	return;
}

Hash func_490(Hash hParam0) // Position - 0x1200D Hash - 0x934A9372 ^0x5C25D189
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940252.f_11634))
	{
		if (func_19(hParam0, 316290104))
			return joaat("SATCHEL_PROMPT_BREAKDOWN");
		else if (func_173(hParam0, true, false))
			return -2086473757;
	}
	else if (func_19(hParam0, 1147021565))
	{
		if (func_19(hParam0, -1242251796))
			return -31549930;
	
		switch (func_10(hParam0, -949239683))
		{
			case -1919515848:
			case -262371497:
			case 845883585:
			case 1443104131:
				return -31549930;
		
			case -1915958659:
			case -809056541:
			case 89124942:
			case 1451036371:
			case 1859991422:
			case 1891031775:
				return 356040554;
		
			case -273840653:
			case 238865292:
			case 999632878:
			case 1130235258:
			case 1177617310:
				return -1925143884;
		}
	}
	else if (func_10(hParam0, 1224357681) == joaat("CI_TAG_FOLDER_KIT_WATCHES"))
	{
		return -1948542959;
	}
	else if (hParam0 == -241666815)
	{
		return 356040554;
	}

	return -31549930;
}

void func_491(Hash hParam0, var uParam1) // Position - 0x1213A Hash - 0xABD22A8D ^0x92F4B411
{
	BOOL flag;
	var unk;
	var unk15;

	flag = true;

	switch (func_145(hParam0))
	{
		case -1793506273:
		case 235313564:
		case 320213863:
			if (!func_19(hParam0, 949916894) && !func_19(hParam0, 747873593) && !(func_10(hParam0, -949239683) == -1337515701) && !func_19(hParam0, 1147021565))
				flag = false;
			break;
	}

	if (func_142(hParam0) == joaat("Money"))
		flag = false;

	if (joaat("kit_collector_spade") == hParam0)
		flag = false;

	if (-492264119 == hParam0 && !func_277())
		flag = false;

	if (func_10(hParam0, -949239683) == -1337515701)
	{
		unk.f_9 = joaat("SLOTID_NONE");
		unk15 = { func_167(hParam0, false, 0) };
	
		if (func_672(unk15, -1162387149, &unk, false, -1))
			if (unk.f_4 == hParam0)
				flag = false;
	}

	if (func_19(hParam0, 316290104))
	{
		flag = true;
	}
	else if (func_173(hParam0, true, false))
	{
		if (func_37() == 0)
			flag = false;
		else
			flag = true;
	
		!flag;
	}

	if (!DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "focusable"))
		flag = false;

	if (MISC::IS_BIT_SET(Global_1051182, 0) && func_19(hParam0, 1573112293))
		flag = false;

	if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940252.f_11634) && !DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940252.f_11631))
		flag = false;

	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(func_514(), flag);
	return;
}

BOOL func_492() // Position - 0x122C7 Hash - 0x4192543B ^0x401DE8CD
{
	if (!(UNLOCK::UNLOCK_IS_VISIBLE(-474252899) || UNLOCK::UNLOCK_IS_VISIBLE(294305054) || UNLOCK::UNLOCK_IS_VISIBLE(-296143697)))
		return false;
	else if (!UNLOCK::UNLOCK_IS_VISIBLE(-1820411463))
		return false;

	return true;
}

int func_493(Hash hParam0, BOOL bParam1) // Position - 0x12313 Hash - 0xF271562B ^0x8AA3413F
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_444(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam1)
		func_655(&unk, func_401(false));

	if (!func_445(&unk, &num, &num2, false))
		return 0;

	func_253(num);
	return num2;
}

struct<4> func_494(Hash hParam0, BOOL bParam1) // Position - 0x12372 Hash - 0x8EFC92E9 ^0xE8DA0FF0
{
	var unk;

	unk = { func_167(hParam0, bParam1, false) };
	return func_168(hParam0, unk, unk.f_4, bParam1);
}

BOOL func_495(Hash hParam0) // Position - 0x12397 Hash - 0xDB8363F2 ^0xB30A7F5C
{
	if (!func_648(hParam0, 1955773996))
		return false;

	if (!func_673(hParam0, 1))
		return false;

	return true;
}

int func_496(int iParam0, Hash hParam1) // Position - 0x123C2 Hash - 0x9ED796B6 ^0xF436F83
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_17(hParam1, 0))
		return 0;

	guid = { func_674(iParam0, hParam1) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &guid, false);
	return inventoryItemCountWithGuid;
}

int func_497(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x12400 Hash - 0xFE9D5798 ^0xDB9F4CF5
{
	if (!func_17(hParam0, 0))
	{
		if (func_281(func_105(hParam0), 2))
			return -1;
	
		return 0;
	}

	if (func_142(hParam0) == joaat("fee"))
		return -1;

	if (!bParam2 && func_317(hParam0, joaat("DEFAULT")) == 0)
		bParam2 = true;

	if (bParam2)
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_199(bParam3), hParam0);
}

Hash func_498(Hash hParam0, BOOL bParam1) // Position - 0x12474 Hash - 0xBBDA5425 ^0x2C054261
{
	switch (hParam0)
	{
		case joaat("kit_pouch_kit"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
	
		case joaat("kit_pouch_valuables"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
	
		case joaat("kit_pouch_provisions"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	
		case joaat("kit_pouch_remedies"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
	
		case 239629152:
			if (bParam1)
				return MISC::GET_HASH_KEY("DOCUMENT_BOUNTY_HUNTER_LICENSE_UPGRADE_01_SHORT");
			break;
	
		case joaat("kit_pouch_materials"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
	
		case joaat("kit_pouch_ingredients"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
	}

	return 0;
}

Hash func_499(Hash hParam0, BOOL bParam1) // Position - 0x12516 Hash - 0x6C21B9A ^0x615CAFBF
{
	var outData;

	if (!func_17(hParam0, 0))
		return func_675(func_105(hParam0), bParam1);

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData) || outData.f_5 == 0)
		return 0;

	if (bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(outData.f_5))
		return 0;

	return outData.f_5;
}

Hash func_500(Hash hParam0) // Position - 0x1256E Hash - 0xB8EC44B7 ^0xF7F1213F
{
	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return -149209420;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
			return -591593823;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
			return -661841886;
	
		case -2115566177:
			return -1242547752;
	
		case -2102079544:
			return -2035151058;
	
		case joaat("PROVISION_IGUANA_SKIN_POOR"):
			return -1754534999;
	
		case joaat("provision_beaver_fur"):
			return -2016089088;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return 452336188;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return 1122586172;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return -907802863;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return 927949229;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
			return 566505619;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_POOR"):
			return 434164104;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return -817013819;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
			return -1462436745;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return -860252225;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return -2061292617;
	
		case joaat("PROVISION_MUSKRAT_FUR_POOR"):
			return -294760237;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
			return -459025832;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
			return 1036479497;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
			return 1591915275;
	
		case -1886936864:
			return -1340101181;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return 2104496586;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
			return 399214021;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return 1818491588;
	
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return -1940860112;
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return -1534250051;
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return 981960619;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return -1155190042;
	
		case joaat("provision_deer_hide"):
			return -396086695;
	
		case joaat("provision_fish_chain_pickerel_poor"):
			return 827985446;
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return 1513811193;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return -1716047352;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return -1243014409;
	
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 1946049104;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
			return 234473853;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return 1007184712;
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return -1103475665;
	
		case joaat("PROVISION_SKUNK_FUR_POOR"):
			return 1925504740;
	
		case joaat("PROVISION_BUFFALO_FUR_POOR"):
			return 299919606;
	
		case joaat("PROVISION_ARMADILLO_SKIN_POOR"):
			return -710989256;
	
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
			return -571080009;
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return 431321694;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return -755636829;
	
		case -1671125008:
			return 1966632570;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return -1970088555;
	
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return -1664486394;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return -749802886;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
			return 1663105645;
	
		case joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE"):
			return -2021981862;
	
		case joaat("provision_buffalo_horn"):
			return 1352867568;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return -823379321;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
			return 222702434;
	
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return 2146572053;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return -1625595431;
	
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 1278304830;
	
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return -327638924;
	
		case joaat("provision_fish_muskie"):
			return -1698910498;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return 1607434899;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return -19626769;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return 1362828838;
	
		case -1475338121:
			return -395420997;
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return -893738363;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return 435345037;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
			return 89885133;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return -2021366376;
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return 1168912955;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return 1888858793;
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return -1838135661;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
			return 1847023377;
	
		case joaat("provision_javelina_skin"):
			return 1582863244;
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return -2080399983;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return -835681068;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return 1615937768;
	
		case joaat("PROVISION_ELK_FUR_PRISTINE"):
			return -1196787069;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
			return -867628281;
	
		case joaat("provision_sheep_wool"):
			return -85737661;
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return -688961870;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return -1783404197;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return -411118339;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return 1885588858;
	
		case -1243878166:
			return -654359890;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return 930648145;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return -989449592;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return 232508262;
	
		case joaat("provision_fish_smallmouth_bass_poor"):
			return -1898963991;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return -1312925436;
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return 1317537296;
	
		case joaat("provision_raccoon_fur"):
			return 683327822;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			return 708397125;
	
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return -871797197;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return 1934921511;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return -498483069;
	
		case -1066678466:
			return 1788037640;
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return 2125035709;
	
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return -354836003;
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return -655396129;
	
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
			return 1856405476;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return -898492052;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return -1717931006;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return 1750541244;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return 230068405;
	
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return -954694400;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return 1568268202;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return -928742863;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return 750199142;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return 909323574;
	
		case joaat("provision_rabbit_pelt_pristine"):
			return 391928970;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return 674701766;
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return -883362976;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return 393351033;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return -1733134177;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return -1350812151;
	
		case joaat("provision_buck_fur"):
			return 1415794275;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return -50004308;
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return -376064362;
	
		case joaat("provision_fish_perch_poor"):
			return -520151885;
	
		case joaat("provision_fish_lake_sturgeon"):
			return -1106747914;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return 1744784728;
	
		case joaat("PROVISION_COW_HIDE_PRISTINE"):
			return -2120314726;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
			return -102918483;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return -1765786196;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return 610016221;
	
		case joaat("provision_alligator_skin"):
			return -113609972;
	
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return -1708243835;
	
		case joaat("provision_muskrat_fur"):
			return 1740405833;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return 1564672281;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
			return 1066632230;
	
		default:
		
	}

	return 0;
}

Hash func_501(Hash hParam0) // Position - 0x13A7E Hash - 0xB8EC44B7 ^0x99B86529
{
	switch (hParam0)
	{
		case -2092697195:
			return -1408358961;
	
		case -2043601589:
			return 2128665752;
	
		case -2040849706:
			return -2115797779;
	
		case -1946740647:
			return -666885817;
	
		case -1932727774:
			return 256434231;
	
		case -1924159110:
			return -616698490;
	
		case -1821314478:
			return 1201281805;
	
		case -1787430524:
			return -999893823;
	
		case -1638839614:
			return 1593292566;
	
		case -1624242931:
			return 1599024134;
	
		case -1621144167:
			return -1132220398;
	
		case -1572330336:
			return 661620688;
	
		case -1548204069:
			return -1365586435;
	
		case -1434083213:
			return 1970304697;
	
		case -1378208045:
			return -1682808204;
	
		case -1283104686:
			return -1298448148;
	
		case -1282621313:
			return 774971744;
	
		case -1262044528:
			return 1964539282;
	
		case -1249752300:
			return -1722651740;
	
		case -1220574585:
			return -1966419150;
	
		case -1218522879:
			return 259609103;
	
		case -1195518864:
			return 1124298977;
	
		case -1182590809:
			return -1735939928;
	
		case -1087205695:
			return 726253600;
	
		case -1061362634:
			return -987379013;
	
		case -1061253029:
			return 1995351273;
	
		case -963027403:
			return 769814315;
	
		case -940052481:
			return -1980773153;
	
		case -907373381:
			return -1160452495;
	
		case -906131571:
			return 924542747;
	
		case -885592109:
			return 544769519;
	
		case -857265622:
			return 588492724;
	
		case -827518870:
			return 1737301198;
	
		case -675142890:
			return 2105504738;
	
		case -634716689:
			return 1609243098;
	
		case -591844128:
			return 701582471;
	
		case -420237085:
			return 351245498;
	
		case -308200059:
			return -910932346;
	
		case -260181673:
			return -2040203687;
	
		case -251416414:
			return 1916317794;
	
		case -229670230:
			return -952513206;
	
		case -159428614:
			return 871944908;
	
		case -70954328:
			return -744009123;
	
		case 121494806:
			return -1465574082;
	
		case 219794592:
			return 1311920491;
	
		case 258865203:
			return -503159532;
	
		case 397926876:
			return -328167959;
	
		case 448991078:
			return 964465987;
	
		case 546758456:
			return -1264506855;
	
		case 739090883:
			return -2113905148;
	
		case 832214437:
			return 803542225;
	
		case 836208559:
			return -1705059076;
	
		case 923422806:
			return -295170067;
	
		case 1009802015:
			return -374238254;
	
		case 1011908603:
			return -1926107629;
	
		case 1043121665:
			return 347177840;
	
		case 1097274212:
			return -251683498;
	
		case 1181154860:
			return -1619790277;
	
		case 1202949852:
			return -346963495;
	
		case 1276143905:
			return 1045565446;
	
		case 1367447057:
			return -1786971987;
	
		case 1418435161:
			return 967060121;
	
		case 1450608653:
			return 2054234098;
	
		case 1493601140:
			return 1393748763;
	
		case 1511236969:
			return 1263980030;
	
		case 1527400190:
			return 1549277063;
	
		case 1543592331:
			return 1922044680;
	
		case 1600479946:
			return 439245973;
	
		case 1705186999:
			return 1461107206;
	
		case 1728819413:
			return -632031977;
	
		case 1739856087:
			return 555279871;
	
		case 1758585485:
			return 1841511005;
	
		case 1785697286:
			return 1164491261;
	
		case 1842740532:
			return 2145332646;
	
		case 1888419655:
			return -1561393995;
	
		case 1891164848:
			return 1446763677;
	
		case 2004357248:
			return 1308510689;
	
		case 2014346813:
			return 1891949232;
	
		case 2088901891:
			return -2012858293;
	
		default:
		
	}

	switch (hParam0)
	{
		case -2102079544:
			return 1117271069;
	
		case joaat("provision_pelican_feather"):
			return 650331389;
	
		case joaat("PROVISION_IGUANA_SKIN_POOR"):
			return -617676900;
	
		case joaat("provision_beaver_fur"):
			return -1790213107;
	
		case joaat("PROVISION_EAGLE_FEATHER"):
			return 1105699934;
	
		case joaat("PROVISION_BLUEJAY_FEATHER"):
			return 915240180;
	
		case joaat("PROVISION_MUSKRAT_FUR_POOR"):
			return -664455397;
	
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 1555730333;
	
		case joaat("provision_deer_hide"):
			return -325167203;
	
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 232078681;
	
		case joaat("PROVISION_WOLF_HEART"):
			return 287596349;
	
		case joaat("PROVISION_SKUNK_FUR_POOR"):
			return 643377789;
	
		case joaat("PROVISION_BUFFALO_FUR_POOR"):
			return -1305999829;
	
		case joaat("PROVISION_ARMADILLO_SKIN_POOR"):
			return -454793815;
	
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 2075605647;
	
		case joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE"):
			return 1963533652;
	
		case joaat("provision_buffalo_horn"):
			return 305994581;
	
		case joaat("PROVISION_SQUIRREL_PELT_PRISTINE"):
			return 516276755;
	
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return 140548906;
	
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return -998078564;
	
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return 671730736;
	
		case -1475338121:
			return 182553822;
	
		case joaat("provision_vulture_feather"):
			return 527405344;
	
		case joaat("provision_bear_claw"):
			return 602510756;
	
		case joaat("provision_javelina_skin"):
			return 443733012;
	
		case joaat("PROVISION_ELK_FUR_PRISTINE"):
			return -506698333;
	
		case joaat("provision_sheep_wool"):
			return 852477829;
	
		case -1243878166:
			return 1519472001;
	
		case joaat("PROVISION_LOON_FEATHER"):
			return -1604182722;
	
		case joaat("provision_raven_feather"):
			return 1784173995;
	
		case joaat("provision_raccoon_fur"):
			return -1589890131;
	
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return 642877259;
	
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 1351967896;
	
		case joaat("provision_owl_feather"):
			return -994580234;
	
		case joaat("provision_bull_horns"):
			return 1715192274;
	
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return 1645648597;
	
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return -484605156;
	
		case joaat("PROVISION_CONDOR_FEATHER"):
			return 109373257;
	
		case joaat("provision_rabbit_pelt_pristine"):
			return 1193711685;
	
		case joaat("PROVISION_ROBIN_FEATHER"):
			return 1356124641;
	
		case joaat("provision_squirrel_pelt"):
			return 1892048883;
	
		case joaat("provision_boar_tusk"):
			return 934266484;
	
		case joaat("provision_buck_fur"):
			return -1822857932;
	
		case joaat("PROVISION_COW_HIDE_PRISTINE"):
			return 66210245;
	
		case joaat("provision_booby_feather"):
			return 2052325776;
	
		case joaat("provision_alligator_skin"):
			return -729940969;
	
		case joaat("provision_bat_wing"):
			return 105310482;
	
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 973957142;
	
		case joaat("provision_muskrat_fur"):
			return 1559256431;
	
		case joaat("provision_frog_skin"):
			return -626746681;
	
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 75788492;
	
		case joaat("PROVISION_PHEASANT_FEATHER"):
			return 319232918;
	
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return 287595526;
	
		case joaat("PROVISION_TURKEY_FEATHER"):
			return 457527259;
	
		case joaat("provision_buffalo_fur"):
			return -1740575947;
	
		case joaat("PROVISION_FROG_SKIN_PRISTINE"):
			return -1701132833;
	
		case joaat("provision_ram_hide"):
			return -1697884196;
	
		case joaat("provision_opossum_fur_pristine"):
			return 2076872795;
	
		case joaat("provision_badger_pelt"):
			return -1290349264;
	
		case joaat("provision_badger_pelt_pristine"):
			return 1886042555;
	
		case joaat("provision_rat_fur"):
			return -2132052800;
	
		case joaat("provision_elk_antlers"):
			return -366421835;
	
		case joaat("provision_panther_fur"):
			return 766738878;
	
		case joaat("PROVISION_RAT_FUR_POOR"):
			return 1075249;
	
		case joaat("provision_bull_hide"):
			return 1719491621;
	
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 1513760857;
	
		case joaat("provision_raccoon_fur_pristine"):
			return -373561552;
	
		case joaat("PROVISION_RAT_FUR_PRISTINE"):
			return 563724690;
	
		case joaat("PROVISION_BUFFALO_FUR_PRISTINE"):
			return -317313952;
	
		case joaat("PROVISION_HERON_FEATHER"):
			return 872004206;
	
		case joaat("PROVISION_MOOSE_FUR_PRISTINE"):
			return 533169045;
	
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return 254756397;
	
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return -393194118;
	
		case joaat("provision_pig_skin"):
			return 44257110;
	
		case joaat("PROVISION_BULL_HIDE_PRISTINE"):
			return -2807153;
	
		case joaat("provision_hawk_feather"):
			return 1441079450;
	
		case joaat("PROVISION_ORIOLE_FEATHER"):
			return 2038781126;
	
		case joaat("PROVISION_BULL_HIDE_POOR"):
			return 711968992;
	
		case joaat("provision_armadillo_skin"):
			return 1273594044;
	
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return 1180333503;
	
		case joaat("PROVISION_GILA_SKIN"):
			return 1497343107;
	
		case joaat("provision_skunk_fur_pristine"):
			return 1803121683;
	
		case joaat("provision_bear_fur"):
			return -213803059;
	
		case joaat("provision_rabbit_pelt"):
			return -563629672;
	
		case joaat("provision_bird_feather_flight"):
			return 2089437645;
	
		case joaat("provision_fox_fur"):
			return 2001831582;
	
		case joaat("PROVISION_ANIMAL_SCENT_GLAND"):
			return 1709152297;
	
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return -1015436070;
	
		case joaat("PROVISION_CARDINAL_FEATHER"):
			return 1543866786;
	
		case joaat("PROVISION_COW_HIDE_POOR"):
			return 1348773445;
	
		case joaat("PROVISION_ARMADILLO_SKIN_PRISTINE"):
			return 673699503;
	
		case joaat("provision_crow_feather"):
			return -257934339;
	
		case joaat("provision_opossum_fur"):
			return 1078802600;
	
		case joaat("PROVISION_CEDARWAXWING_FEATHER"):
			return -1873585305;
	
		case joaat("provision_cougar_fur"):
			return -845846009;
	
		case joaat("PROVISION_OXEN_HIDE_POOR"):
			return 2037563793;
	
		case joaat("PROVISION_GILA_SKIN_PRISTINE"):
			return 1367123410;
	
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 709570394;
	
		case joaat("PROVISION_PIGEON_FEATHER"):
			return 840821070;
	
		case joaat("provision_buck_antlers"):
			return 515017930;
	
		case joaat("provision_cormorant_feather"):
			return 1876858085;
	
		case joaat("provision_pronghorn_fur"):
			return 1736690424;
	
		case joaat("provision_snake_skin_pristine"):
			return 620515243;
	
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return 993930516;
	
		case joaat("PROVISION_OXEN_HIDE_PRISTINE"):
			return -984195334;
	
		case joaat("PROVISION_BLACK_BEAR_FUR_PRISTINE"):
			return -1616683815;
	
		case joaat("provision_javelina_tusk"):
			return 710582811;
	
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 1439503490;
	
		case joaat("PROVISION_BADGER_CLAW"):
			return 1754189413;
	
		case joaat("PROVISION_SPARROW_FEATHER"):
			return 1147065893;
	
		case joaat("PROVISION_DUCK_FEATHER"):
			return -1324308768;
	
		case joaat("provision_egret_feather"):
			return 720338807;
	
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return 538248064;
	
		case joaat("provision_moose_antler"):
			return -1933370531;
	
		case joaat("PROVISION_QUAIL_FEATHER"):
			return 1291827453;
	
		case joaat("PROVISION_BEAR_FUR_POOR"):
			return 577741466;
	
		case joaat("PROVISION_BADGER_PELT_POOR"):
			return 1147391076;
	
		case joaat("PROVISION_SQUIRREL_PELT_POOR"):
			return -161210360;
	
		case joaat("PROVISION_SEAGULL_FEATHER"):
			return -1804893584;
	
		case joaat("PROVISION_BLACK_BEAR_FUR_POOR"):
			return -317450551;
	
		case joaat("provision_snake_skin"):
			return -661883621;
	
		case joaat("provision_wolf_fur"):
			return 932384479;
	
		case joaat("provision_cow_hide"):
			return -975719856;
	
		case joaat("provision_coyote_fur"):
			return -175228229;
	
		case joaat("provision_elk_fur"):
			return -1721580072;
	
		case joaat("provision_iguana_skin"):
			return 1251011851;
	
		case joaat("provision_oxen_hide"):
			return 1453304549;
	
		case joaat("PROVISION_CHICKEN_FEATHER"):
			return -662932093;
	
		case joaat("PROVISION_ANIMAL_FAT"):
			return -150332788;
	
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return -2025148846;
	
		case joaat("PROVISION_BIGHORN_HORN"):
			return 751278189;
	
		case joaat("PROVISION_BEAR_FUR_PRISTINE"):
			return -64816897;
	
		case joaat("PROVISION_RABBIT_PELT_POOR"):
			return 1610805859;
	
		case joaat("PROVISION_WOODPECKER_FEATHER"):
			return -1125201769;
	
		case joaat("PROVISION_SONGBIRD_FEATHER"):
			return -839229372;
	
		case joaat("PROVISION_ROOSTER_FEATHER"):
			return -2006574994;
	
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return -473984871;
	
		case joaat("provision_black_bear_fur"):
			return -394567432;
	
		case joaat("provision_oxen_horn"):
			return -102667065;
	
		case joaat("PROVISION_PARAKEET_FEATHER"):
			return 2006254811;
	
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return -439771682;
	
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return -1661833274;
	
		case joaat("provision_parrot_feather"):
			return -515812748;
	
		case joaat("PROVISION_OPOSSUM_FUR_POOR"):
			return 75907104;
	
		case joaat("provision_moose_fur"):
			return 2143881314;
	
		case joaat("provision_eagle_talon"):
			return -2141386199;
	
		case joaat("PROVISION_FOX_FUR_POOR"):
			return -308176910;
	
		case joaat("PROVISION_IGUANA_SKIN_PRISTINE"):
			return -811158466;
	
		case joaat("PROVISION_SNAKE_SKIN_POOR"):
			return -926826161;
	
		case 1696599540:
			return 416375309;
	
		case joaat("provision_goat_hair"):
			return -1252121718;
	
		case joaat("provision_cougar_fang"):
			return -155545682;
	
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return 492443708;
	
		case joaat("provision_whooping_crane_feather"):
			return 1728967914;
	
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return -1361338784;
	
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return -511225893;
	
		case joaat("PROVISION_ALLIGATOR_SKIN_POOR"):
			return 141813558;
	
		case joaat("PROVISION_GOOSE_FEATHER"):
			return 874416043;
	
		case joaat("PROVISION_FROG_SKIN_POOR"):
			return 1916142044;
	
		case joaat("PROVISION_MOOSE_FUR_POOR"):
			return 261464608;
	
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return -2085506453;
	
		case joaat("provision_skunk_fur"):
			return -1754474288;
	
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return 189129655;
	
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return 1987222394;
	
		case joaat("PROVISION_RACCOON_FUR_POOR"):
			return 172710122;
	
		case joaat("provision_squirrel_tail"):
			return 766814122;
	
		case joaat("PROVISION_MUSKRAT_FUR_PRISTINE"):
			return 1321025026;
	
		case joaat("PROVISION_ELK_FUR_POOR"):
			return -560324616;
	
		case joaat("PROVISION_BLACK_BEAR_CLAW"):
			return 998362875;
	
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return 1100436208;
	
		case joaat("provision_alligator_tooth"):
			return -1852874823;
	
		case joaat("provision_boar_skin"):
			return -421637077;
	
		case joaat("PROVISION_GILA_SKIN_POOR"):
			return 1924021902;
	
		default:
		
	}

	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return -1216606326;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
			return -82403140;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
			return -1483430189;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return 840225041;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return 549704977;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return 920173178;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return 351539261;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
			return 364033016;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_POOR"):
			return 1999319663;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return 1733620897;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
			return 2029277432;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return 1176560958;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return -54533226;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
			return -373224618;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
			return -1001259776;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
			return 2132202059;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return 602224616;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
			return -1705997274;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return 484920071;
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return 694612862;
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return 1711042298;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return -2048967430;
	
		case joaat("provision_fish_chain_pickerel_poor"):
			return 707201280;
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return 75052460;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return 1766675716;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return -2022525106;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
			return 1280054159;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return -1558848228;
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return -1872286321;
	
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
			return 944110311;
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return 1292597331;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return 744947689;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return 159219251;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return 1800041756;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
			return -1103469855;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return 1016504142;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
			return -1691123411;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return 965680356;
	
		case joaat("provision_fish_muskie"):
			return 670163126;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return -1299605277;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return 1301232714;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return 651914172;
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return 2123917083;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return -161231515;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
			return -684493390;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return 360646178;
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return -747843967;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return -2091042332;
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return 21034941;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
			return -644660892;
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return -72615570;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return -1722580089;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return -1362831402;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
			return -1786026048;
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return -684605659;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return 763480295;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return -1985659799;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return 596420802;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return 1238836439;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return -1776607096;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return -2135979865;
	
		case joaat("provision_fish_smallmouth_bass_poor"):
			return -702150099;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return -814448540;
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return -71154754;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			return 1912274811;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return -783858773;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return -365574371;
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return 1081153967;
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return 446238129;
	
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
			return -1492480176;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return -1010591546;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return -1864268272;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return 1077656284;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return -988437272;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return 613844620;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return -954430157;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return -2024255176;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return -1976493300;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return 1261953498;
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return 215558127;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return 64674852;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return 1915095215;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return -635036270;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return -913993577;
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return 1245805785;
	
		case joaat("provision_fish_perch_poor"):
			return 699462615;
	
		case joaat("provision_fish_lake_sturgeon"):
			return 1756638081;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return -2146679785;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
			return -946834167;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return 193838959;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return 182568440;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return 788459402;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
			return 719164880;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return 2106477246;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return 1440511737;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
			return 1513566869;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
			return -537899065;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return -501826187;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return -535872870;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return 741087971;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return -1555436909;
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return 1046531369;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
			return 1267576255;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return -1406486282;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return 537980983;
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return -226591008;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return 404778336;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_PERFECT"):
			return 1859995253;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return -2059559175;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
			return -974080310;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
			return -1829279760;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return -1193980640;
	
		case joaat("provision_fish_muskie_poor"):
			return -1112301401;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			return -1951931021;
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return -302032060;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return 1214255904;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return -1517895381;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			return 401461100;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return -1894912735;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_HIGH_QUALITY"):
			return -738256282;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return 2138711331;
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
			return -975908522;
	
		case joaat("provision_fish_bluegill_poor"):
			return 1062068465;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
			return 1862079367;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return -1855203366;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return 2047450143;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
			return 1940135629;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
			return -580638205;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return -1283272411;
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
			return 1034372784;
	
		case joaat("provision_fish_largemouth_bass"):
			return -1803638668;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
			return -962097996;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
			return -542292419;
	
		case joaat("provision_fish_smallmouth_bass"):
			return 1468262744;
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
			return -409367013;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return 1633965430;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			return -70837723;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
			return 456481242;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return 1011639849;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return 1499766071;
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return 1289050487;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return -1049843758;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
			return 275412539;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
			return -926789976;
	
		case joaat("provision_fish_northern_pike"):
			return -1532517667;
	
		case joaat("provision_fish_bullhead_catfish"):
			return 1196662225;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return -1598922009;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
			return 1394617857;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
			return 1799595146;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
			return -1326666930;
	
		case joaat("provision_fish_redfin_pickerel_poor"):
			return 219352253;
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return 1665004985;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return 225754854;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
			return 725440584;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
			return 579112106;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
			return 1677116399;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return -768854386;
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return 779088744;
	
		case joaat("provision_fish_sockeye_salmon_poor"):
			return -1009657226;
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return -687553153;
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
			return -112530487;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
			return -2017882358;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			return -3379701;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return 1486754346;
	
		case joaat("provision_fish_northern_pike_poor"):
			return 1728443538;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return 1871055552;
	
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
			return -1827280206;
	
		case joaat("provision_fish_rock_bass_poor"):
			return -2035446565;
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
			return -448269050;
	
		case joaat("provision_fish_chain_pickerel"):
			return 1870328732;
	
		case joaat("provision_fish_steelhead_trout_poor"):
			return 137308405;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
			return 2029769794;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return -1447829381;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return -339256624;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return 64971655;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			return 81120984;
	
		case joaat("provision_fish_steelhead_trout"):
			return 1712149826;
	
		case joaat("provision_fish_channel_catfish_poor"):
			return -1084421789;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
			return -175125903;
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
			return -1149750759;
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return 655003317;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
			return 507273585;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return -93762301;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return -43847478;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return 32080080;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return -738750296;
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return 1058515088;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return 1560746874;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return -1878430686;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			return -396770599;
	
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
			return -985527980;
	
		case joaat("provision_fish_bluegill"):
			return -2006827790;
	
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
			return 171702437;
	
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
			return 1182246979;
	
		case joaat("provision_fish_rock_bass"):
			return 166032929;
	
		case joaat("provision_fish_lake_sturgeon_poor"):
			return 1321469365;
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
			return -1392581698;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return 1715317931;
	
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return -1413161219;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return -1772716910;
	
		case joaat("provision_fish_longnose_gar_poor"):
			return -6716069;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return 775708056;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return -278084343;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
			return 793462056;
	
		case joaat("provision_fish_longnose_gar"):
			return -191086281;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return -1913114484;
	
		case joaat("provision_fish_perch"):
			return -43253473;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return -1877144237;
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return 818552661;
	
		case joaat("provision_fish_largemouth_bass_poor"):
			return -1221284958;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return 1002602374;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR"):
			return -2040509534;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
			return -334450814;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			return -1432602913;
	
		case joaat("provision_fish_redfin_pickerel"):
			return -1750520428;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
			return 1214467902;
	
		case joaat("provision_fish_sockeye_salmon"):
			return -982559496;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return -1800293671;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return 1605888983;
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return -1221148056;
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return -1396948758;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return 72574110;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return 1102758634;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return 1943993797;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
			return -1206378980;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return -899794521;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return -64154430;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return -641533288;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return 1967237703;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return 869821653;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return -1017734953;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			return -1002611416;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			return 1668855076;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return 831089430;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return -1035022170;
	
		case joaat("provision_fish_channel_catfish"):
			return -1473598265;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return -1809464590;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			return 369737235;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return 914114641;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return 715588111;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return -1434842719;
	
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return -648011160;
	
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			return 1223809963;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return 64899457;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return 1049493474;
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return -465284970;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return -955879408;
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return -497486600;
	
		default:
		
	}

	return 0;
}

int func_502(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x15717 Hash - 0x7FD2A444 ^0x7FD2A444
{
	var unk;
	int num;
	int i;

	unk = 10;

	if (!func_676(hParam0, hParam1, &unk, &num, bParam2, bParam3))
	{
		!bParam3;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == joaat("currency_cash"))
			return unk[i /*2*/].f_1;
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam3;
	return 0;
}

float func_503(int iParam0, Hash hParam1) // Position - 0x15786 Hash - 0xF0D534EB ^0xF0D534EB
{
	float num;

	num = 1f;

	if (!func_17(hParam1, 0))
		return num;

	!func_677(iParam0, hParam1, &num);
	return num;
}

float func_504(var uParam0, Hash hParam1) // Position - 0x157B1 Hash - 0x64490485 ^0x995A52B9
{
	int i;
	float num;
	BOOL flag;
	float num2;
	float num3;

	num = 1f;
	flag = false;

	for (i = 0; i < 20; i = i + 1)
	{
		flag = false;
	
		switch (uParam0->[i /*7*/].f_1)
		{
			case 0:
				break;
		
			case 1:
				if (hParam1 == uParam0->[i /*7*/].f_2)
					return uParam0->[i /*7*/].f_6;
				break;
		
			case 2:
				if (func_142(hParam1) == uParam0->[i /*7*/].f_3)
					flag = true;
				break;
		
			case 3:
				num2 = BUILTIN::TO_FLOAT(func_678(hParam1, -915411861, true, false, true, 0));
			
				if (uParam0->[i /*7*/].f_5 <= 0f)
					num3 = num2 + 1f;
				else
					num3 = uParam0->[i /*7*/].f_5;
			
				if (num2 <= num3 && num2 >= uParam0->[i /*7*/].f_4)
					flag = true;
				break;
		
			case 4:
				flag = true;
				break;
		}
	
		if (flag)
			num = num * uParam0->[i /*7*/].f_6;
	}

	return num;
}

const char* func_505(const char* sParam0, int iParam1) // Position - 0x158A3 Hash - 0x9E99F03 ^0xC558956C
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

BOOL func_506(Hash hParam0) // Position - 0x158BD Hash - 0xA839C3B7 ^0xFE515ADA
{
	int i;
	int num;

	i = 0;
	num = Global_1915656.f_20646.f_1010.f_201;

	if (hParam0 != 0)
	{
		if (num < 200)
		{
			for (i = 0; i < num; i = i + 1)
			{
				if (Global_1915656.f_20646.f_1010[i] == hParam0)
					return 1;
			}
		}
	}

	return 0;
}

BOOL func_507(Hash hParam0, int iParam1) // Position - 0x1590E Hash - 0x58B8EE01 ^0x58B8EE01
{
	var unk;
	int num;
	Hash hash;

	if (!func_17(hParam0, 0))
		return 0;

	if (iParam1 == -1)
		return 0;

	num = func_472(iParam1);

	if (num == -1)
		return 0;

	if (!func_432(6, &unk))
		return 0;

	unk.f_2 = -815325344;
	unk.f_3 = func_679(num);

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		hash = hParam0;
		unk.f_2 = 549615901;
		unk.f_3 = hash;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
			return 1;
	}

	return 0;
}

BOOL func_508(Hash hParam0, var uParam1) // Position - 0x15998 Hash - 0xC0DD27FA ^0xC0DD27FA
{
	*uParam1 = func_680(hParam0);
	return *uParam1 != 0;
}

BOOL func_509(Hash hParam0) // Position - 0x159AE Hash - 0x5E6E1858 ^0x5BD2FA9
{
	!func_17(hParam0, 0);

	if (func_19(hParam0, 1286414894))
		return true;

	return false;
}

int func_510(Ped pedParam0, var uParam1, int iParam2) // Position - 0x159D4 Hash - 0xA73ED9C1 ^0xC2062AF6
{
	ItemSet itemset;
	Entity entityFromItem;
	int i;
	int itemsetSize;
	int num;

	if (!PED::IS_PED_CARRYING_SOMETHING(pedParam0))
		return num;

	itemset = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(pedParam0, itemset);
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);

	for (i = 0; i < itemsetSize; i = i + 1)
	{
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
	
		if (!ENTITY::DOES_ENTITY_EXIST(entityFromItem))
		{
		}
		else
		{
			uParam1->[num] = entityFromItem;
			num = num + 1;
		
			if (num == iParam2)
				break;
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemset);
	return num;
}

Hash func_511(Entity eParam0) // Position - 0x15A50 Hash - 0xCBDF2AE2 ^0xCD5FF04E
{
	Hash hash;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	if (ENTITY::GET_IS_ANIMAL(eParam0) || ENTITY::_GET_IS_BIRD(eParam0))
	{
		hash = func_512(&eParam0);
	
		if (!func_17(hash, 0))
			hash = func_525(eParam0);
	}
	else
	{
		hash = func_525(eParam0);
	}

	return hash;
}

Hash func_512(var uParam0) // Position - 0x15AA3 Hash - 0xDAEBAE6 ^0xFAD9C5D0
{
	Ped pedIndexFromEntityIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return 0;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam0);
	return func_681(pedIndexFromEntityIndex);
}

BOOL func_513(Player plParam0, BOOL bParam1) // Position - 0x15AC9 Hash - 0x647F06DB ^0xC699E02A
{
	int i;
	Any gangId;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !NETWORK::NETWORK_IS_IN_SESSION())
	{
		for (i = 0; i <= 31; i = i + 1)
		{
			if (Global_1147183.f_9[i /*10*/].f_4.f_2 != 0 && Global_1147183.f_9[i /*10*/].f_2 == plParam0)
				return true;
		}
	
		if (bParam1)
			func_144("GC_H_PLACE", 10000, 0, 0, 0, true);
	
		return false;
	}

	gangId = GANG::NETWORK_GET_GANG_ID(plParam0);

	if (func_683(func_682(gangId)))
		return true;

	if (bParam1)
		func_144("GC_H_PLACE", 10000, 0, 0, 0, true);

	return false;
}

Any func_514() // Position - 0x15B6A Hash - 0x766C9B31 ^0xDB0EFDF8
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940252.f_11634))
		return Global_1940252.f_11633;

	return Global_1940252.f_11630;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_515(BOOL bParam0) // Position - 0x15B94 Hash - 0x9E8B020 ^0x4D351A4A
{
	var unk;
	int num;
	int num2;
	int i;
	Hash hash;
	int num3;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_8 = -1;
	i = 0;
	unk = { func_285(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0, 0, -1, 1816455607, 0) };

	if (func_286(unk, &num, &num2, 0))
	{
		if (num2 > 0)
		{
			for (i = 0; i < num2; i = i + 1)
			{
				hash = func_287(i, num);
			
				if (!bParam0)
				{
					if (func_296(hash))
					{
					}
					else
					{
						goto 0xAA;
					}
				}
			
				if (!func_296(hash))
				{
				}
				else
				{
					num3 = 1;
					break;
				}
			}
		}
	
		func_293(num);
		return num3;
	}

	return 0;
}

BOOL func_516(Hash hParam0) // Position - 0x15C5D Hash - 0x3FD9EF89 ^0x3FC8CAC6
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(hParam0);
}

void func_517(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x15C75 Hash - 0x7EFAC478 ^0x4E4217E0
{
	int i;
	int j;
	int k;
	int l;
	int numberOfModifiedPrices;
	int numberOfModifiers;
	Hash key;
	int outData;
	var outData2;
	var unk13;

	if (*uParam2 < 15)
		return;
	else if (iParam3 > *uParam2 || iParam3 < 1)
		return;

	outData.f_1 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_AWARD_COST_MODIFIERS(hParam0, &outData) || outData == 0)
		return;

	unk13 = 15;

	for (i = 0; i < iParam3; i = i + 1)
	{
		unk13[i] = 1f;
	}

	for (j = 0; j < outData; j = j + 1)
	{
		key = outData.f_1[j];
		numberOfModifiedPrices = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(key);
	
		for (k = 0; k < numberOfModifiedPrices; k = k + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(key, k) != hParam1)
			{
			}
			else
			{
				numberOfModifiers = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(key);
			
				for (l = 0; l < numberOfModifiers; l = l + 1)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(key, l, &outData2))
					{
					}
					else
					{
						for (i = 0; i < iParam3; i = i + 1)
						{
							if (uParam2->[i /*2*/] == outData2)
							{
								unk13[i] = unk13[i] + (outData2.f_1 - 1f);
								break;
							}
						}
					}
				}
			
				break;
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk13[i] != 1f && uParam2->[i /*2*/].f_1 > 0)
		{
			if (uParam2->[i /*2*/] == joaat("currency_gold_bar"))
				uParam2->[i /*2*/].f_1 = ((100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 1000000) * 100;
			else
				uParam2->[i /*2*/].f_1 = (100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 10000;
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_145(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

BOOL func_518(Hash hParam0, int iParam1) // Position - 0x15E4B Hash - 0x2A2D0794 ^0xC823165
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_17(hParam0, 0))
		return false;

	if (Global_1940199.f_6)
		return false;

	hash = func_423(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_254("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_239(&unk, i, num, num2))
			{
			}
			else if (!func_684(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_253(num);
				return true;
			}
		}
	
		func_253(num);
	}

	return false;
}

BOOL func_519(Hash hParam0) // Position - 0x15EF3 Hash - 0x52397408 ^0x52397408
{
	int num;
	int num2;
	int num3;

	if (!func_17(hParam0, 0))
		return false;

	num = func_145(hParam0);

	switch (num)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1115104855:
		case 1216664798:
		case 1341188928:
			break;
	
		default:
			return false;
	}

	num2 = func_685(hParam0);

	if (!(num2 == 0))
	{
		num3 = func_686(&(Global_17418.f_55.f_664.f_1354.f_5), num2);
	
		if (num3 == -1)
			return true;
	}

	num2 = func_687(hParam0);
	num3 = func_686(&(Global_17418.f_55.f_664.f_1354.f_5), num2);

	if (num3 == -1)
		return false;

	return hParam0 == Global_17418.f_55.f_664.f_1354.f_5[num3 /*17*/];
}

BOOL func_520(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x15FAF Hash - 0xAEB34219 ^0xE0C7A844
{
	BOOL flag;

	flag = false;

	if (iParam1 == 0 || func_33(false) || bParam2)
		flag = true;

	if (!bParam2)
		if (!func_17(hParam0, 0) || hParam0 == 1259508039 || hParam0 == joaat("kit_wardrobe"))
			return false;

	if (!flag && func_688(hParam0))
		return false;

	switch (iParam1)
	{
		case -2074770370:
			if (Global_1940252.f_39 == 1 || Global_1940252.f_39 == 2)
				return func_691(hParam0, iParam1);
			else if (func_10(hParam0, -949239683) == -1337515701 && hParam0 != joaat("kit_player_pocketwatch"))
				return true;
			else
				return func_19(hParam0, -111938901);
			break;
	
		case -1666604090:
			return func_19(hParam0, -193035453) && !func_19(hParam0, 474910316);
	
		case -1559802791:
			return func_19(hParam0, 1422457563);
	
		case -1268291907:
			return func_19(hParam0, 1360707454) && !func_19(hParam0, 474910316);
	
		case -889932290:
		case -283002878:
		case 0:
			if (!func_33(false))
			{
				if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
					return true;
			
				if (func_520(hParam0, -1559802791, true) || func_520(hParam0, -1268291907, true) || func_520(hParam0, -96974025, true) || func_520(hParam0, -1666604090, true) || func_520(hParam0, 1561961676, true) || func_520(hParam0, -156634416, true) || func_520(hParam0, 1061777683, true) || func_520(hParam0, -2074770370, true) || func_520(hParam0, -693134279, true) || func_520(hParam0, -182626652, true) || func_520(hParam0, 1783698482, true) || func_689(hParam0))
					return true;
			}
			else
			{
				return true;
			}
			break;
	
		case -693134279:
			return func_643(hParam0, 8388608);
	
		case -182626652:
			if (func_273(hParam0, Global_1915656.f_20241.f_1))
			{
				func_442(func_199(false), hParam0, true);
				return true;
			}
			break;
	
		case -156634416:
			return func_19(hParam0, -928967997) && !func_19(hParam0, 474910316);
	
		case -96974025:
			return func_19(hParam0, 1009210113) && !func_19(hParam0, 474910316);
	
		case 1061777683:
			return func_19(hParam0, 747873593) && !func_19(hParam0, 474910316);
	
		case 1561961676:
			if (func_19(hParam0, -111938901) && !func_19(hParam0, 474910316))
				return true;
			else if (func_19(hParam0, -189374246) || func_19(hParam0, -1257428961))
				return true;
			else
				return false;
			break;
	
		case 1783698482:
			return func_19(hParam0, 474910316) && !func_33(false) && func_690(hParam0);
	}

	return false;
}

int func_521(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x16338 Hash - 0x118F0611 ^0x5AC648CA
{
	if (func_692(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_199(bParam1), hParam0, bParam3);
}

BOOL func_522(int iParam0) // Position - 0x1636B Hash - 0x5681CDD4 ^0x5681CDD4
{
	return iParam0 != 0;
}

void func_523(int iParam0, BOOL bParam1) // Position - 0x16377 Hash - 0x9AEABBC4 ^0xA220323E
{
	if (bParam1)
		Global_1940252.f_41.f_2[iParam0 /*2*/].f_1 = bParam1;

	return;
}

void func_524(int iParam0, BOOL bParam1) // Position - 0x16394 Hash - 0x1BF05C5 ^0x4B9EA454
{
	int num;

	num = Global_1940252.f_41.f_1;
	func_693(num, iParam0);
	func_523(num, bParam1);

	if (func_43())
	{
		if (!func_694(num))
		{
			func_695(num);
			return;
		}
	}

	func_541(iParam0);
	return;
}

Hash func_525(Entity eParam0) // Position - 0x163D6 Hash - 0xB3A7ACD3 ^0xEF2020CA
{
	Hash carriableFromEntity;

	carriableFromEntity = 0;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	if (ENTITY::IS_ENTITY_A_PED(eParam0) && TASK::_0x6DAC799857EF3F11(PLAYER::PLAYER_PED_ID(), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0)))
		return 0;

	carriableFromEntity = ENTITY::_GET_CARRIABLE_FROM_ENTITY(eParam0);

	if (carriableFromEntity == 0)
		if (ENTITY::IS_ENTITY_A_PED(eParam0))
			carriableFromEntity = func_681(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0));

	return carriableFromEntity;
}

void func_526(var uParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x16434 Hash - 0xD2EEB3C8 ^0xF1392CC2
{
	int address;
	BOOL flag;
	var unk;
	int num;
	int num2;
	int i;
	int inventoryIdFromPed;
	var unk19;
	int j;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return;

	address = 0;
	flag = false;
	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_8 = -1;
	unk.f_13 = -1;
	unk.f_14 = -1;
	unk.f_15 = -1;
	unk.f_16 = -1;
	unk.f_17 = -1;
	unk.f_1 = joaat("SLOTID_SATCHEL");
	num = -1;
	inventoryIdFromPed = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(*uParam0);
	unk19.f_9 = joaat("SLOTID_NONE");

	if (func_696(inventoryIdFromPed, &unk, &num, &num2))
	{
		i = 0;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_239(&unk19, i, num, num2))
			{
				if (func_17(unk19.f_4, 0) && unk19.f_4 != 1259508039)
				{
					if (bParam3 && func_495(unk19.f_4))
					{
						flag = false;
						unk19.f_11 = 0;
					
						for (j = 0; j < 3; j = j + 1)
						{
							if (!MISC::IS_BIT_SET(address, j))
							{
								if (Global_1903838.f_113[j /*96*/].f_1 == unk19.f_4)
								{
									if (ENTITY::DOES_ENTITY_EXIST(Global_1290271.f_1171.f_245[j /*4*/].f_3))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1290271.f_1171.f_245[j /*4*/].f_3))
										{
											*uParam1 = *uParam1 + 1;
											unk19.f_11 = unk19.f_11 + 1;
											flag = true;
											MISC::SET_BIT(&address, j);
										}
									}
								}
							}
						}
					
						if (flag && bParam2 && func_242(unk19.f_4))
							func_310(unk19, true);
					}
					else
					{
						*uParam1 = *uParam1 + 1;
					
						if (bParam2 && func_242(unk19.f_4))
							func_310(unk19, true);
					}
				}
			}
		}
	
		func_253(num);
	}

	return;
}

int func_527(Hash hParam0) // Position - 0x165FB Hash - 0xE9A1F055 ^0x7DC5634
{
	int num;
	int num2;
	var unk;
	int i;
	int num3;

	if (!func_23(hParam0))
		return 0;

	num = 1;
	unk = 15;

	if (func_294(hParam0, -489628648, &unk, &num2, false, true))
	{
		num = 99;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (unk[i /*2*/] == 0)
				break;
		
			num3 = func_263(unk[i /*2*/], false, false, false);
		
			if (num3 < num)
				num = num3;
		}
	}

	if (num < 1)
		num = 1;

	return num;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
int func_528(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x1667A Hash - 0x92B705D3 ^0x83F4920A
{
	int i;
	Hash hashKey;
	Hash hashKey2;
	var outData;

	outData.f_2 = 5;
	outData.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUY_AWARD_UI_DATA(hParam0, &outData))
	{
		for (i = 0; i < 5; i = i + 1)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/]))
				goto 0xE6;
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/].f_1))
			{
			}
			else
			{
				hashKey = MISC::GET_HASH_KEY(outData.f_2[i /*3*/]);
				hashKey2 = MISC::GET_HASH_KEY(outData.f_2[i /*3*/].f_1);
			
				if (iParam2 != 0 && outData.f_2[i /*3*/].f_2 != iParam2)
					goto 0xE6;
			
				if (hParam3 != 0 && hashKey2 != hParam3)
					goto 0xE6;
			
				if (hParam4 != 0 && hashKey != hParam4)
					goto 0xE6;
			
				if (hParam5 != 0 && hashKey2 == hParam5)
				{
				}
				else
				{
					*uParam1 = hashKey;
					uParam1->f_1 = hashKey2;
					uParam1->f_2 = iParam2;
					return 1;
				}
			}
		}
	}

	return 0;
}

void func_529(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, int iParam4, BOOL bParam5, int iParam6, Hash hParam7) // Position - 0x16770 Hash - 0x6AFBCBB1 ^0x63F9CCA3
{
	int dataContainerFromChildIndex;
	int num;

	dataContainerFromChildIndex = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940252.f_11613, Global_1940252.f_11594);
	num = dataContainerFromChildIndex;
	DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(0, num, hParam1, uParam2->f_1, *uParam2, iParam4, bParam3, bParam5, iParam6, hParam7, hParam1);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_HASH_ALIAS(Global_1940252.f_11613, Global_1940252.f_11594, hParam0);
	Global_1940252.f_11594 = Global_1940252.f_11594 + 1;
	return;
}

BOOL func_530(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x167D0 Hash - 0xE8CB342E ^0xE8CB342E
{
	var unk;
	int num;
	int i;
	int num2;
	int num3;
	int num4;

	unk = 15;

	if (!func_294(hParam0, hParam1, &unk, &num, false, true))
		return false;

	num3 = -1;

	if (Global_1915656.f_20638)
		num3 = Global_1915656.f_20241;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0)
			break;
	
		if (unk[i /*2*/] == joaat("currency_cash"))
		{
			if (!bParam4 && !func_697(unk[i /*2*/].f_1))
				return false;
		}
		else if (unk[i /*2*/] == joaat("currency_gold_bar"))
		{
			if (!bParam4 && !func_698(unk[i /*2*/].f_1))
				return false;
		}
		else
		{
			num2 = func_699(num3, unk[i /*2*/]);
		
			if (num2 != 0)
				num4 = func_700(unk[i /*2*/], num2);
			else
				num4 = func_263(unk[i /*2*/], false, bParam3, true);
		
			if (num4 < unk[i /*2*/].f_1)
			{
				*uParam2 = { unk[i /*2*/] };
				return false;
			}
		}
	}

	return true;
}

BOOL func_531(var uParam0, var uParam1, int iParam2) // Position - 0x168D7 Hash - 0x5B4F8156 ^0x5B4F8156
{
	int i;

	for (i = 0; i < iParam2; i = i + 1)
	{
		if (uParam1->[i] == uParam0)
			return true;
	}

	return false;
}

void func_532(var uParam0) // Position - 0x16902 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_533(var uParam0) // Position - 0x1690A Hash - 0xDCA15050 ^0xDCA15050
{
	int i;

	for (i = 0; i < 16; i = i + 1)
	{
		func_701(uParam0->[i], func_185(func_174(0), uParam0->[i], false, true, true), false, false);
	}

	return;
}

BOOL func_534() // Position - 0x16943 Hash - 0x4718FF96 ^0x4718FF96
{
	if (func_195())
		if (Global_1915656.f_20241 == 29)
			return true;

	return false;
}

Vector3 func_535(Hash hParam0) // Position - 0x16963 Hash - 0x519EC1E6 ^0x181FDEE
{
	int num;

	if (!func_702(hParam0, &num, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
	{
		num.f_1 = joaat("inventory_items");
		num = joaat("_placeholder");
	}

	return num;
}

int func_536(Hash hParam0) // Position - 0x16997 Hash - 0xE138944F ^0x7B9B0BF9
{
	if (!INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, 1879048192))
		return 0;

	if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, 268435456))
		return 1;

	if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, 536870912))
		return 2;

	return 3;
}

void func_537(var uParam0) // Position - 0x169E0 Hash - 0xD644D89D ^0x23264C8C
{
	if (uParam0->f_4 == Global_1940252.f_11591 && func_93() && func_185(func_174(0), Global_1940252.f_11591, false, true, true) > 0)
		uParam0->f_11 = uParam0->f_11 + 1;

	return;
}

BOOL func_538(Vehicle veParam0) // Position - 0x16A24 Hash - 0xDEF9F967 ^0x717FC3F4
{
	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("huntercart01"):
			return true;
	
		default:
		
	}

	return false;
}

void func_539() // Position - 0x16A43 Hash - 0x5C7B0C1B ^0xCC6F5695
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_8 = -1;
	unk.f_13 = -1;
	unk.f_14 = -1;
	unk.f_15 = -1;
	unk.f_16 = -1;
	unk.f_17 = -1;
	unk.f_1 = 1835126290;
	unk.f_4 = 81053684;
	func_703(&unk, false, true, false);
	return;
}

BOOL func_540() // Position - 0x16ABB Hash - 0x4228A1C2 ^0x4A2C267D
{
	return Global_1572887.f_7;
}

void func_541( Param0) // Position - 0x16AC9 Hash - 0x13562EB ^0x21208BC7
{
	 Var0;
	int num;
	int num2;
	Hash collectableCategory;
	Hash categoryItemSetBuyAward;
	Hash hash;

	Var0 = Param0;
	num.f_1 = func_704(Var0);
	num = func_705(Var0);
	num2 = 1;
	collectableCategory = func_706(Var0);
	categoryItemSetBuyAward = COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(collectableCategory, 0);

	if (func_23(categoryItemSetBuyAward))
		num2 = func_527(categoryItemSetBuyAward);

	hash = func_707(Var0);

	if (hash == 0)
		hash = joaat("COLOR_PURE_WHITE");

	func_529(joaat("folder_item"), Param0, &num, func_708(Param0), num2, 0, 0, hash);
	Global_1940252.f_41.f_203 = Global_1940252.f_41.f_203 + 1;
	Global_1940252.f_41.f_1 = Global_1940252.f_41.f_1 + 1;
	return;
}

BOOL func_542(Hash hParam0) // Position - 0x16B61 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_543(Any anParam0, var uParam1, Hash hParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x16B77 Hash - 0xF48E6FC8 ^0xA8BADD49
{
	*uParam1 = 0;

	if (iParam4 < 1)
		return false;
	else if (*anParam0 != 10)
		return false;

	if (iParam3 == 0)
	{
		iParam3 = func_317(hParam2, joaat("DEFAULT"));
	
		if (iParam3 == 0)
			return false;
	}

	if (!NETSHOPPING::_0xD1555FBC96C88444(hParam2, iParam3, iParam4, anParam0, 10))
		return false;

	if (!func_709(anParam0, uParam1, iParam4, bParam5))
		return false;

	return true;
}

struct<17> func_544(Hash hParam0, var uParam1) // Position - 0x16BE4 Hash - 0x692393AE ^0xF1DF31F2
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk = { func_168(hParam0, *uParam1, uParam1->f_4, true) };
	unk.f_4 = { *uParam1 };
	unk.f_8 = hParam0;
	unk.f_9 = uParam1->f_5;
	unk.f_11 = uParam1->f_4;
	return unk;
}

int func_545(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x16C37 Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_710(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_712(func_711(num, hParam0, panParam1), num, panParam1);
	else
		return func_713(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17), num, panParam1);

	return -1;
}

int func_546(Hash hParam0) // Position - 0x16CA1 Hash - 0x5FC245A8 ^0x222CF07D
{
	if (func_17(hParam0, 0))
	{
		if (func_19(hParam0, -1242251796))
		{
			if (func_19(hParam0, 2060589226))
				return func_69();
		
			return func_68();
		}
		else if (func_19(hParam0, 1919582297))
		{
			return func_84();
		}
		else if (func_19(hParam0, 1647670816))
		{
			return func_714();
		}
		else if (func_19(hParam0, 1147021565))
		{
			return func_57();
		}
	}

	if (Global_1940085.f_12)
		return func_68();
	else
		return func_57();

	return func_57();
}

BOOL func_547(Hash hParam0) // Position - 0x16D43 Hash - 0x6FB27747 ^0x2F844672
{
	return hParam0 == 1401465909 || hParam0 == joaat("kit_collectors_bag");
}

BOOL func_548(Hash hParam0) // Position - 0x16D61 Hash - 0xE3FE29A5 ^0x72E17A42
{
	if (func_19(hParam0, 1147021565) || func_19(hParam0, -136654233) || func_19(hParam0, -524514947) || func_19(hParam0, -1238310989) || func_19(hParam0, 1765172170) || func_19(hParam0, 1490540191) || func_19(hParam0, 1573112293) || func_19(hParam0, -1242251796) || func_19(hParam0, 1919582297) || func_19(hParam0, -2085281117) || hParam0 == joaat("consumable_offal"))
		return true;

	return false;
}

int func_549() // Position - 0x16E23 Hash - 0x9F572D68 ^0x2787CCF0
{
	return 972554239;
}

int func_550(var uParam0, int iParam1) // Position - 0x16E30 Hash - 0x412E6219 ^0x412E6219
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (!func_391(*uParam0))
		return -1;

	num = -1;
	num6 = func_715(*uParam0);

	switch (*uParam0)
	{
		case 3:
			num4 = func_718(num6);
			num5 = func_719(num4);
		
			if (num5 == -1)
			{
			}
			else
			{
				num = func_720(num5);
			}
			break;
	
		case 4:
			num3 = num6;
			num2 = func_716(num3);
		
			if (num2 == -1)
			{
			}
			else
			{
				num = func_717(num2);
			}
			break;
	
		default:
			break;
	}

	return num;
}

BOOL func_551(int iParam0, int iParam1, BOOL bParam2) // Position - 0x16EB3 Hash - 0x891BBFA0 ^0xB8158E5D
{
	return !MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(func_553(func_721(iParam0, iParam1, bParam2)));
}

struct<8> func_552(int iParam0, int iParam1) // Position - 0x16ECE Hash - 0x21337FB2 ^0x21337FB2
{
	return func_721(iParam0, iParam1, true);
}

char* func_553(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x16EDF Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

BOOL func_554(int iParam0, Hash hParam1) // Position - 0x16EF3 Hash - 0x516C6848 ^0x6761C278
{
	int i;

	for (i = 0; i <= 1; i = i + 1)
	{
		if (Global_1220826.f_48[iParam0 /*21*/].f_18[i] != 0 && Global_1220826.f_48[iParam0 /*21*/].f_18[i] == hParam1)
			return true;
	}

	return false;
}

BOOL func_555(int iParam0) // Position - 0x16F3F Hash - 0x2EBFDD04 ^0x2EBFDD04
{
	return iParam0 >= 0 && iParam0 < 50;
}

BOOL func_556(int iParam0) // Position - 0x16F55 Hash - 0x6642AD8B ^0xEA8BECFA
{
	float num;
	int i;
	int j;

	if (Global_17418.f_2992 == 1)
	{
		if (iParam0 == -1)
			return false;
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (Global_17418.f_2992.f_1[i /*5*/].f_4 == 0)
			{
			}
			else if (_IS_NULL_VECTOR(Global_17418.f_2992.f_1[i /*5*/].f_1))
			{
			}
			else
			{
				for (j = 0; j <= 3; j = j + 1)
				{
					if (_IS_NULL_VECTOR(Global_1220826.f_48[iParam0 /*21*/][j /*4*/].f_1))
					{
					}
					else
					{
						num = func_251(Global_17418.f_2992.f_1[i /*5*/].f_1, Global_1220826.f_48[iParam0 /*21*/][j /*4*/].f_1);
					
						if (num < 300f)
							return false;
					}
				}
			}
		}
	}

	if (func_722(4))
		return false;

	if (func_460())
		return true;

	if (func_723())
		return false;

	if (func_724(1, 255))
		return false;

	if (func_391(func_725()) && Global_1220826.f_1.f_20 != 3)
		return false;

	return true;
}

BOOL func_557(int iParam0) // Position - 0x17066 Hash - 0xB6416185 ^0xCE440AEC
{
	int i;

	for (i = 0; i <= 1; i = i + 1)
	{
		if (Global_1220826.f_48[iParam0 /*21*/].f_18[i] != 0 && func_295(Global_1220826.f_48[iParam0 /*21*/].f_18[i], 1))
			return true;
	}

	return false;
}

BOOL func_558(int iParam0) // Position - 0x170B4 Hash - 0xA37D16B6 ^0x8D2EEA9D
{
	int i;

	for (i = 0; i <= 1; i = i + 1)
	{
		if (Global_1220826.f_48[iParam0 /*21*/].f_18[i] != 0 && func_726(Global_1220826.f_48[iParam0 /*21*/].f_18[i]))
			return true;
	}

	return false;
}

BOOL func_559(Ped pedParam0, Hash hParam1, BOOL bParam2) // Position - 0x17101 Hash - 0xC5F24F4E ^0x107F90DC
{
	if (!bParam2)
		if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
			return false;

	return PED::_IS_META_PED_USING_COMPONENT(pedParam0, hParam1);
}

int func_560() // Position - 0x17125 Hash - 0x6AC5469B ^0xEA730EC
{
	Hash weaponHash;
	int weaponHash2;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
		return 1;

	WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &weaponHash, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &weaponHash2, true, 1, false);

	if (weaponHash2 == joaat("WEAPON_UNARMED"))
		if (weaponHash == joaat("WEAPON_UNARMED"))
			return 1;
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) && !func_727(weaponHash) && !PED::IS_PED_FULLY_ON_MOUNT(Global_33, true) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_33, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
			return 3;
		else if (WEAPON::_IS_WEAPON_BINOCULARS(weaponHash))
			return 1;
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && func_727(weaponHash) || WEAPON::_IS_WEAPON_LASSO(weaponHash))
			return 1;
		else
			return 0;
	else if (weaponHash == joaat("WEAPON_UNARMED"))
		return 1;
	else
		return 0;

	return 0;
}

void func_561(int iParam0, BOOL bParam1, int iParam2) // Position - 0x17218 Hash - 0xA15BFFCE ^0xA15BFFCE
{
	Hash hash;
	int num;

	hash = func_728(iParam0);
	num = func_257(hash);

	if (num != iParam0)
		func_729(num, 4);

	if (!func_485(iParam0))
		return;

	if (func_258(iParam0))
		return;

	func_729(iParam0, 4);
	func_730(iParam0, bParam1);

	if (!func_731(iParam0))
		func_732(iParam0, true, false);

	if (bParam1)
		if (!func_220(0, false, true))
			func_733(true, 6);

	return;
}

BOOL func_562(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x1728E Hash - 0x1E0E4BC8 ^0xFC328A61
{
	if (TASK::CAN_START_ITEM_INTERACTION(pedParam0, hParam1, hParam2, iParam3))
	{
		TASK::START_TASK_ITEM_INTERACTION(pedParam0, hParam1, hParam2, iParam3, 0, -1082130432);
		Global_1940085.f_26 = 1;
		return true;
	}

	ATTRIBUTE::STOP_ITEM_PREVIEW();
	return false;
}

void func_563(Hash hParam0) // Position - 0x172C7 Hash - 0xD8F93303 ^0x277E9FFE
{
	int outData;
	var outData2;
	int i;
	float health;
	float deadeye;
	float stamina;
	float num;
	float num2;
	float num3;
	float num4;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	outData.f_1 = 20;

	if (func_19(hParam0, 1573112293) || func_19(hParam0, 672467738) || func_19(hParam0, -550842268))
		flag = true;

	if (func_142(hParam0) == joaat("consumable"))
	{
		ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(hParam0, &outData);
		ATTRIBUTE::STOP_ITEM_PREVIEW();
	
		for (i = 0; i < outData; i = i + 1)
		{
			if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(outData.f_1[i], &outData2))
			{
			}
			else if (-943921969 == outData2.f_1)
			{
				health = func_734(0, outData2.f_2);
				func_735(outData2.f_2);
				flag3 = true;
			}
			else if (-1104847406 == outData2.f_1)
			{
				deadeye = func_734(2, outData2.f_2);
				func_736(outData2.f_2, false);
				flag2 = true;
			}
			else if (381158954 == outData2.f_1)
			{
				stamina = func_734(1, outData2.f_2);
				func_737(outData2.f_2);
			}
			else if (joaat("EFFECT_HEALTH_CORE") == outData2.f_1)
			{
				num = func_738(BUILTIN::TO_FLOAT(outData2.f_2), outData2.f_5);
				func_739(0, num, true, true, flag);
				flag3 = true;
			}
			else if (joaat("EFFECT_DEADEYE_CORE") == outData2.f_1)
			{
				num2 = func_738(BUILTIN::TO_FLOAT(outData2.f_2), outData2.f_5);
				func_739(2, num2, true, true, flag);
				flag2 = true;
			}
			else if (joaat("EFFECT_STAMINA_CORE") == outData2.f_1)
			{
				num3 = func_738(BUILTIN::TO_FLOAT(outData2.f_2), outData2.f_5);
				func_739(1, num3, true, true, flag);
			}
			else if (joaat("Effect_Health_Core_Gold") == outData2.f_1)
			{
				num4 = func_740(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_741(19, num4, true, true);
				flag3 = true;
			}
			else if (joaat("Effect_Deadeye_Core_Gold") == outData2.f_1)
			{
				num4 = func_740(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_741(20, num4, true, true);
				flag2 = true;
			}
			else if (joaat("Effect_Stamina_Core_Gold") == outData2.f_1)
			{
				num4 = func_740(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_741(18, num4, true, true);
			}
			else if (1869697234 == outData2.f_1)
			{
				num4 = func_740(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_741(0, num4, true, true);
				flag3 = true;
			}
			else if (1342237631 == outData2.f_1)
			{
				num4 = func_740(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_741(2, num4, true, true);
				flag2 = true;
			}
			else if (-1240225157 == outData2.f_1)
			{
				num4 = func_740(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_741(1, num4, true, true);
			}
			else if (-816334026 == outData2.f_1)
			{
				func_742(BUILTIN::TO_FLOAT(outData2.f_2), true);
			}
		}
	
		if (flag3 || func_19(hParam0, -537818634))
			func_416(func_654(joaat("medicine_items_used")), 1);
	
		if (func_19(hParam0, -1457797660))
			func_416(func_654(joaat("provision_items_used")), 1);
	
		if (flag2)
			func_416(func_654(joaat("DEADEYE_ITEMS_USED")), 1);
	
		switch (hParam0)
		{
			case -1735850413:
			case -241345764:
				STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_SaloonSnack_00"), 1);
				break;
		}
	
		PLAYER::_SET_USED_ITEM_EFFECT(health, stamina, deadeye, BUILTIN::ROUND(num / 2f), BUILTIN::ROUND(num3 / 2f), BUILTIN::ROUND(num2 / 2f));
	}

	return;
}

void func_564(int iParam0) // Position - 0x1760B Hash - 0xF3266748 ^0x8FC7CA8A
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		if (iParam0 == 1)
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");

	return;
}

BOOL func_565(int iParam0) // Position - 0x17651 Hash - 0xEA95855 ^0xEA95855
{
	return Global_1953292.f_595[iParam0] > 0;
}

void func_566(int iParam0) // Position - 0x17666 Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1953292.f_595[iParam0] = Global_1953292.f_595[iParam0] + 1;
	return;
}

BOOL func_567() // Position - 0x17686 Hash - 0x8905DA1C ^0xB020CE54
{
	if (Global_1953292.f_3503)
		return true;

	if (MISC::ABSI(MISC::GET_GAME_TIMER() - Global_1953292.f_3501) < 1250)
		return true;

	if (func_743())
		return true;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
		return true;

	return false;
}

BOOL func_568(Hash hParam0) // Position - 0x176D0 Hash - 0xF685E7E9 ^0xFF8FA3AF
{
	Hash hash;

	hash = func_145(hParam0);

	if (hash == 81053684 || hash == -525676072 || func_19(hParam0, 160827531) || func_19(hParam0, -1303648999))
		return 1;

	return 0;
}

BOOL func_569(Hash hParam0) // Position - 0x17720 Hash - 0x2073EBE2 ^0x2073EBE2
{
	Hash hash;

	if (hParam0 == 0)
		return 0;

	hash = 0;

	if (func_575(&hash))
		if (hParam0 == hash)
			return 1;

	return 0;
}

BOOL func_570(var uParam0) // Position - 0x1774A Hash - 0xA1F57C1B ^0xFF498BD3
{
	if (-1829635046 == func_744(81053684))
		if (func_575(uParam0))
			return true;
	else if (func_745(-525676072, uParam0) || func_19(func_746(1742327865), -1303648999))
		if (func_575(uParam0))
			return true;

	return false;
}

Hash func_571() // Position - 0x177A7 Hash - 0xFCC5278F ^0xAA4EF978
{
	int num;

	num = joaat("mask_off_left_hand");

	switch (func_560())
	{
		case 0:
			num = joaat("mask_off_left_hand");
			break;
	
		case 1:
			num = joaat("mask_off_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("mask_off_left_hand_rifle");
			break;
	}

	return num;
}

Hash func_572() // Position - 0x177FE Hash - 0xFCC5278F ^0x56FDCD49
{
	int num;

	num = joaat("bandana_off_left_hand");

	switch (func_560())
	{
		case 0:
			num = joaat("bandana_off_left_hand");
			break;
	
		case 1:
			num = joaat("bandana_off_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("bandana_off_left_hand_rifle");
			break;
	}

	return num;
}

Hash func_573() // Position - 0x17855 Hash - 0xFCC5278F ^0xB987E402
{
	int num;

	num = joaat("mask_on_left_hand");

	switch (func_560())
	{
		case 0:
			num = joaat("mask_on_left_hand");
			break;
	
		case 1:
			num = joaat("mask_on_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("mask_on_left_hand_rifle");
			break;
	}

	return num;
}

Hash func_574() // Position - 0x178AC Hash - 0xFCC5278F ^0xD976DFE7
{
	int num;

	num = joaat("bandana_on_left_hand");

	switch (func_560())
	{
		case 0:
			num = joaat("bandana_on_left_hand");
			break;
	
		case 1:
			num = joaat("bandana_on_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("bandana_on_left_hand_rifle");
			break;
	}

	return num;
}

BOOL func_575(var uParam0) // Position - 0x17903 Hash - 0x313F44CF ^0x6235E18A
{
	if (func_745(81053684, uParam0))
		return true;

	if (func_745(-525676072, uParam0))
		return true;

	return false;
}

void func_576(BOOL bParam0) // Position - 0x17930 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1953292 = Global_1953292 - Global_1953292 && bParam0;
	return;
}

void func_577(int iParam0, int iParam1, int iParam2) // Position - 0x17948 Hash - 0x8A858A95 ^0x34E316B1
{
	Global_1953292.f_83[func_361(iParam0, 1) /*12*/].f_11 = Global_1953292.f_83[func_361(iParam0, 1) /*12*/].f_11 - Global_1953292.f_83[func_361(iParam0, 1) /*12*/].f_11 && iParam1;
	return;
}

int func_578(int iParam0, BOOL bParam1) // Position - 0x17987 Hash - 0x402BF0A8 ^0xF803E7D2
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1953292.f_3352.f_28;
	
		case -1719060085:
			return Global_1953292.f_3352.f_31;
	
		case -999503751:
			if (bParam1)
				return Global_1953292.f_3352.f_27;
			else
				return func_747();
			break;
	
		case -525676072:
			return Global_1953292.f_3352.f_29;
	
		case 81053684:
			return Global_1953292.f_3352.f_30;
	
		case 119907797:
			return Global_1953292.f_3352.f_32;
	
		case 1388798186:
			return Global_1953292.f_3352.f_33.f_7;
	}

	return 0;
}

int func_579(int iParam0, BOOL bParam1) // Position - 0x17A2A Hash - 0x14DDA26B ^0x1E3E4A18
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case -2061583405:
			num = Global_1953292.f_3352.f_33.f_1;
			break;
	
		case -1719060085:
			num = 1;
			break;
	
		case -999503751:
			num = Global_1953292.f_3352.f_33;
			break;
	
		case -525676072:
			num = Global_1953292.f_3352.f_33.f_2;
			break;
	
		case 81053684:
			num = 1;
			break;
	
		case 119907797:
			num = 1;
			break;
	
		case 1388798186:
			num = 1;
			break;
	
		default:
			return 0;
	}

	switch (iParam0)
	{
		case -999503751:
			if (num > 0 && !bParam1)
				num = num - 1;
			break;
	}

	return num;
}

BOOL func_580(Hash hParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x17AD9 Hash - 0x1A1DEF68 ^0x4083C3B3
{
	var unk;
	Hash hash;

	hash = hParam0;

	if (Global_1953292.f_3352.f_26 >= 25)
		return 0;

	if (*iParam1 >= iParam2)
		return 0;

	if (func_438(hash, &unk))
		return 0;

	if (!func_748(hParam0, 0))
		return 0;

	if (bParam3 && !func_749(hParam0, false, bParam4))
		return 0;

	Global_1953292.f_3352[Global_1953292.f_3352.f_26] = hash;
	Global_1953292.f_3352.f_26 = Global_1953292.f_3352.f_26 + 1;
	*iParam1 = *iParam1 + 1;
	return 1;
}

void func_581() // Position - 0x17B6A Hash - 0xC3588B6F ^0x86C68CA5
{
	int i;

	for (i = 0; i < Global_1953292.f_3352.f_26; i = i + 1)
	{
		Global_17418.f_55.f_664[i] = Global_1953292.f_3352[i];
	}

	Global_17418.f_55.f_664.f_27 = Global_1953292.f_3352.f_27;
	Global_17418.f_55.f_664.f_28 = Global_1953292.f_3352.f_28;
	Global_17418.f_55.f_664.f_29 = Global_1953292.f_3352.f_29;
	Global_17418.f_55.f_664.f_30 = Global_1953292.f_3352.f_30;
	Global_17418.f_55.f_664.f_31 = Global_1953292.f_3352.f_31;
	Global_17418.f_55.f_664.f_32 = Global_1953292.f_3352.f_32;
	Global_17418.f_55.f_664.f_26 = Global_1953292.f_3352.f_26;
	return;
}

void func_582(BOOL bParam0, Hash hParam1) // Position - 0x17C28 Hash - 0x147A58CF ^0x68C5E2BD
{
	char* str;
	char* str2;
	char* str3;
	char* str4;
	int num;
	int num2;
	Hash hash;
	Hash hash2;
	const char* str5;

	if (!func_17(hParam1, 0))
		return;

	num2 = -1;

	if (!func_644(hParam1, &str, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
	{
		str = "_PLACEHOLDER";
		str.f_1 = "inventory_items";
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return;

	if (bParam0)
	{
		str3 = "Transaction_Positive";
		num = joaat("COLOR_PURE_WHITE");
		num2 = func_750(hParam1);
	
		if (num2 > 0 && num2 < 11 && func_751(4, num2))
		{
			str2 = "OUTFIT_STORED_LITERAL";
			str4 = func_553(func_752(num2));
		}
		else
		{
			hash = func_647(hParam1);
		
			if (func_17(hash, 0))
				hParam1 = hash;
		
			str2 = "ITEM_STORED";
			str4 = MISC::VAR_STRING(0, func_267(hParam1, false));
		}
	}
	else
	{
		str3 = "Transaction_Positive";
		num = joaat("COLOR_PURE_WHITE");
		num2 = func_750(hParam1);
	
		if (num2 > 0 && num2 < 11 && func_751(4, num2))
		{
			str2 = "OUTFIT_REMOVED_LITERAL";
			str4 = func_553(func_752(num2));
		}
		else
		{
			hash2 = func_647(hParam1);
		
			if (func_17(hash2, 0))
				hParam1 = hash2;
		
			str2 = "ITEM_REMOVED";
			str4 = MISC::VAR_STRING(0, func_267(hParam1, false));
		}
	}

	str5 = func_505(MISC::VAR_STRING(10, str2, str4), num);
	func_653(str5, str.f_1, MISC::GET_HASH_KEY(str), 0, num, "Transaction_Feed_Sounds", str3, 0, true);
	return;
}

void func_583(BOOL bParam0, BOOL bParam1) // Position - 0x17D8B Hash - 0xB768D4F2 ^0xD5E3296F
{
	if (bParam1)
		func_753();

	if (bParam0)
	{
		func_349(8);
		func_349(512);
	}
	else
	{
		func_349(8);
		func_349(16);
	}

	return;
}

int func_584() // Position - 0x17DBD Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1953292.f_1;
}

BOOL func_585(Hash hParam0, Hash hParam1) // Position - 0x17DCB Hash - 0xFF44AA17 ^0xFF44AA17
{
	Hash hash;
	Hash hash2;

	hash = func_145(hParam1);
	hash2 = func_145(hParam0);

	if (hash == hash2)
		return true;

	if (func_754(hParam1) && func_754(hParam0))
		return true;

	return false;
}

void func_586(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x17E07 Hash - 0x786470E ^0x786470E
{
	func_755(hParam0, 0, 0, bParam3, bParam5);
	func_357(hParam1, true, bParam2, bParam4, bParam3, bParam5);
	return;
}

int func_587(int iParam0, int iParam1) // Position - 0x17E2A Hash - 0xE1D12727 ^0xE86A8679
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_COMPONENT_TYPE_HEAD");
	
		case 1:
			return joaat("MP_COMPONENT_TYPE_HAIR");
	
		case 2:
			return joaat("MP_COMPONENT_TYPE_EYES");
	
		case 3:
			return joaat("MP_COMPONENT_TYPE_TEETH");
	
		case 4:
			return joaat("MP_COMPONENT_TYPE_BEARD");
	
		case 5:
			return 735520874;
	
		case 6:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS");
	
		case 7:
			return joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
	
		case 8:
			return joaat("MP_COMPONENT_TYPE_UPPER_BODY");
	
		case 9:
			return joaat("MP_COMPONENT_TYPE_LOWER_BODY");
	
		case 10:
			return 1108822547;
	
		case 11:
			return -338487716;
	
		case 12:
			return 1742327865;
	
		case 13:
			return 1600962399;
	
		case 14:
			return 1849504272;
	
		case 15:
			return 1672288269;
	
		case 16:
			return 1250092473;
	
		case 17:
			return -893163968;
	
		case 18:
			return -450913544;
	
		case 19:
			return -1364808185;
	
		case 20:
			return -1197751823;
	
		case 21:
			return 304805134;
	
		case 22:
			return -1505978566;
	
		case 23:
			return 1145151482;
	
		case 24:
			return joaat("MP_COMPONENT_TYPE_SATCHEL");
	
		case 25:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_1");
	
		case 26:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_2");
	
		case 27:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_3");
	
		case 28:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_4");
	
		case 29:
			return -426430150;
	
		case 30:
			return 1788623170;
	
		case 31:
			return -1130865351;
	
		case 32:
			return -1884748965;
	
		case 33:
			return -1586649372;
	
		case 34:
			return 788010710;
	
		case 35:
			return 1958421083;
	
		case 36:
			return -1944638739;
	
		case 37:
			return 1900541263;
	
		case 38:
			return -1489346253;
	
		case 39:
			return -358215195;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

void func_588() // Position - 0x1807A Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1953292.f_1557 = Global_1953292.f_1676;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1953292.f_1557.f_1[i /*3*/] = { Global_1953292.f_1676.f_1[i /*3*/] };
	}

	return;
}

void func_589(int iParam0) // Position - 0x180C1 Hash - 0x65A082AE ^0x65A082AE
{
	func_577(iParam0, 8, 6);
	return;
}

void func_590(Hash hParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x180D2 Hash - 0xD9092964 ^0xFDAEF5
{
	int num;
	Hash hash;

	if (bParam3)
	{
		if (*uParam1 == 832230214 || *uParam1 == 30652334 || *uParam1 == 750544038)
		{
			num = 16;
		
			if (func_145(hParam0->f_1[num /*3*/]) != 1882579758)
				return;
		
			hash = func_756(hParam0->f_1[num /*3*/]);
		
			if (hash != 0 && hash != Global_1953292.f_83[iParam2 /*12*/])
			{
				*uParam1 = hash;
				return;
			}
		}
	
		if (!func_757(*uParam1, iParam2))
		{
			*uParam1 = Global_1953292.f_1676.f_1[iParam2 /*3*/];
			return;
		}
	}

	*uParam1 = Global_1953292.f_83[iParam2 /*12*/];
	return;
}

void func_591(int iParam0) // Position - 0x18180 Hash - 0x20214C72 ^0x20214C72
{
	func_758(&(Global_1953292.f_2938), iParam0);
	return;
}

void func_592(int iParam0, int iParam1) // Position - 0x18195 Hash - 0xDE0FB67D ^0xDE0FB67D
{
	if (iParam1 & 8 != 0)
		return;

	func_759(&(Global_1953292.f_2938), iParam0, iParam1);
	return;
}

void func_593(Hash hParam0, int iParam1, int iParam2) // Position - 0x181B8 Hash - 0xDEDED6D0 ^0xA620FD73
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_594(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x181CB Hash - 0xF31ECD9B ^0x1CF13D77
{
	Hash hash;
	BOOL flag;

	hash = hParam1;
	flag = func_364(hash, true);

	if (bParam3 && func_19(hParam0->f_1[iParam2 /*3*/], 343781202))
		func_760(hParam0, hParam0->f_1[iParam2 /*3*/]);

	switch (func_587(iParam2, 1))
	{
		case -1944638739:
			func_776(hParam0, flag, hash, iParam4);
			break;
	
		case -1197751823:
			func_769(hParam0, flag, hash, iParam4);
			break;
	
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			func_761(hParam0, hash, iParam2, iParam4);
			break;
	
		case -893163968:
			func_767(hParam0, flag, hash, iParam4);
			break;
	
		case -450913544:
			func_768(hParam0, flag, hash, iParam2, iParam4);
			break;
	
		case -426430150:
			func_773(hParam0, flag, iParam4);
			break;
	
		case -338487716:
			func_763(hParam0, hash, flag, iParam4);
			break;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			func_772(hParam0, flag, hash, iParam4);
			break;
	
		case 304805134:
			func_770(hParam0, flag, hash, iParam4);
			break;
	
		case 788010710:
			func_774(hParam0, flag, hash, iParam4);
			break;
	
		case 1108822547:
			func_764(hParam0, flag, hash, iParam4);
			break;
	
		case 1145151482:
			func_771(hParam0, flag, hash, iParam4);
			break;
	
		case 1250092473:
			func_766(hParam0, flag, hash, iParam4);
			break;
	
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			func_762(hParam0, hash, iParam2);
			break;
	
		case 1742327865:
			func_765(hParam0, flag, hash, iParam4);
			break;
	
		case 1958421083:
			func_775(hParam0, flag, hash, iParam4);
			break;
	}

	return;
}

Hash func_595(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x18364 Hash - 0xA84BB00 ^0xFB9157AD
{
	BOOL flag;

	flag = false;

	if (func_584() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		flag = true;

	if (hParam2 == 289238755)
		return 289238755;

	if (hParam2 != 0 && func_777(hParam0, flag, hParam2) != -1)
		return hParam2;

	if (func_778(hParam0, func_587(iParam1, 1), &hParam2))
		return hParam2;

	return 0;
}

void func_596(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x183C5 Hash - 0xDD68C02C ^0xDD68C02C
{
	int i;
	int num;
	BOOL flag;
	BOOL flag2;

	if (*iParam0 <= 0)
		return;

	num = -1;
	flag = false;

	if (bParam5)
	{
		num = func_779(Global_1953292.f_1676);
	
		if (bParam4)
			bParam4 = num == -1;
	}

	for (i = 0; i < *iParam0; i = i + 1)
	{
		if (func_354(4718592) && !func_780(func_145(Global_1953292.f_1557.f_1[iParam0->f_2[i /*2*/] /*3*/])))
		{
		}
		else
		{
			func_781(iParam0->f_2[i /*2*/], bParam1, bParam2, num);
			flag = true;
		}
	}

	if (!flag)
		return;

	if (bParam4)
	{
		flag2 = false;
	
		if (Global_1953292.f_1676 != 491602716 || !func_751(2, -1))
			flag2 = true;
		else if (!func_19(Global_1953292.f_1676, -166674229) && Global_1953292.f_1676 != 491602716 || !func_751(2, -1))
			flag2 = true;
	
		if (flag2)
		{
			Global_1953292.f_1676 = 491602716;
			Global_1953292.f_1557 = 491602716;
			func_782(491602716, 1, true);
			func_783(-1, false, 6);
			func_148(27, 0, 65536, 0, false);
		}
	}

	if (bParam3)
		func_583(false, true);

	return;
}

Hash func_597(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, BOOL bParam5, int iParam6) // Position - 0x18504 Hash - 0x67107E64 ^0x67107E64
{
	return func_784(&uParam0, hParam4, bParam5, iParam6);
}

BOOL func_598(Ped pedParam0) // Position - 0x18518 Hash - 0xD9604B15 ^0x3B7B69F4
{
	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	if (func_477(Global_33, pedParam0, false, true) < 2f && PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_33, pedParam0))
		return true;

	return false;
}

BOOL func_599() // Position - 0x18550 Hash - 0xF83C2FD8 ^0xF6BA78F9
{
	int num;
	int num2;
	int num3;
	int num4;

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("shop_anywhere_handheld")))
	{
		func_323(2);
		return false;
	}

	if (!func_383())
	{
		func_323(9);
		return false;
	}

	if (Global_1051832.f_92[34 /*75*/].f_1 & 128 != 0)
	{
		func_323(3);
		return false;
	}

	num = { func_390(0) };

	if (func_391(num))
	{
		num2 = -1;
	
		switch (num)
		{
			case 3:
			case 4:
				num4 = func_550(&num, 0);
			
				if (num4 != -1)
					if (func_551(num4, 461218520, false))
						num2 = 46;
				break;
		
			case 6:
				num3 = func_392(PLAYER::PLAYER_ID(), false);
			
				if (num3 != -1)
					num2 = func_785(num3);
				break;
		}
	
		if (num2 != -1)
		{
			func_323(num2);
			return false;
		}
	}

	if (func_222())
	{
		func_323(4);
		return false;
	}

	if (func_724(4, PLAYER::NETWORK_PLAYER_ID_TO_INT()) && Global_1051832.f_92[34 /*75*/].f_49 & 1073741824 == 0)
	{
		func_323(5);
		return false;
	}

	if (func_786(131072, 255))
	{
		func_323(7);
		return false;
	}

	if (func_787())
	{
		func_323(8);
		return false;
	}

	return true;
}

BOOL func_600(Player plParam0) // Position - 0x18684 Hash - 0xF72359AA ^0x3B19EB24
{
	if (plParam0 == 255)
		return Global_1102813.f_3 & 32 != 0;

	return func_786(32, plParam0);
}

BOOL func_601(int iParam0) // Position - 0x186A9 Hash - 0x77815697 ^0x77815697
{
	if (iParam0 == 1 || iParam0 == 2 || iParam0 == 3)
		return true;

	return false;
}

BOOL func_602() // Position - 0x186D1 Hash - 0xA84EDD52 ^0x62087878
{
	return Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE");
}

void func_603(BOOL bParam0) // Position - 0x186F6 Hash - 0xF247C818 ^0xF247C818
{
	if (bParam0)
		func_788(4);
	else
		func_374(4);

	return;
}

void func_604(BOOL bParam0) // Position - 0x18710 Hash - 0x97FAFE1E ^0x34EAEBB2
{
	if (!(bParam0 && Global_1915656.f_22504))
		if (bParam0)
			INVENTORY::_INVENTORY_ENABLE_ITEM(2, joaat("KIT_HANDHELD_CATALOG"));
		else
			INVENTORY::_INVENTORY_DISABLE_ITEM(2, joaat("KIT_HANDHELD_CATALOG"), 0);

	Global_1915656.f_22504 = bParam0;
	return;
}

BOOL func_605() // Position - 0x18750 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1915656.f_20643;
}

BOOL func_606(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x1875F Hash - 0x13FC6F30 ^0x85A59BCD
{
	Player player;
	Ped ped;
	BOOL isEntityDead;
	BOOL isPedIncapacitated;
	int num;

	if (!bParam7 && UIAPPS::IS_ANY_UIAPP_RUNNING())
		return 0;

	if (!NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(-496459706))
		return 0;

	player = Global_1295666.f_149[Global_1295666];
	ped = Global_1295666.f_3;
	isEntityDead = ENTITY::IS_ENTITY_DEAD(ped);
	isPedIncapacitated = PED::IS_PED_INCAPACITATED(ped);

	if (isEntityDead || isPedIncapacitated)
	{
		if (!bParam5)
			return 0;
	}
	else
	{
		if (!bParam4)
		{
			if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
				return 0;
		
			if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "inInspectionMode"))
				return 0;
		}
	
		if (bParam0 && !PLAYER::IS_PLAYER_CONTROL_ON(player))
		{
			if (bParam6 && Global_1102813.f_3 & 32 != 0)
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(ped, "iMinigameSeat"))
			{
			}
			else
			{
				return 0;
			}
		}
	}

	if (!bParam1)
	{
		if (Global_1915656.f_20638 || Global_1915656.f_22504.f_1)
			return 0;
	
		if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_33) != 0)
			return 0;
	}

	if (func_789())
		return 0;

	if (Global_15)
		return 0;

	if (!bParam2 && Global_1940085.f_10 || Global_1940085.f_11 || Global_1940085.f_12 || Global_1940085.f_13)
		return 0;

	if (!bParam3)
	{
		num = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	
		if (Global_1235687.f_9479 != -1)
			return 0;
	
		if (Global_1138673[num /*56*/].f_34 & 1 != 0 && Global_1138673[num /*56*/].f_34 & 2 == 0)
			return 0;
	
		if (Global_1140770.f_293)
			return 0;
	
		if (Global_1572887.f_72.f_40 > 11 && Global_1572887.f_72.f_40 < 15)
			return 0;
		else if (Global_1572887.f_72.f_40 > 15)
			return 0;
	}

	if (!bParam8)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9))
		{
			if (Global_1048576 || Global_2883584)
				return 0;
		
			if (Global_1048581)
				return 0;
		
			if (Global_1048585)
				return 0;
		}
	}

	return 1;
}

BOOL func_607(int iParam0) // Position - 0x18985 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
	
		default:
		
	}

	return false;
}

int func_608(int iParam0) // Position - 0x189C4 Hash - 0xE34A477A ^0xE34A477A
{
	switch (iParam0)
	{
		case 2:
			return Global_1072759.f_573.f_601;
	
		case 3:
			return Global_1072759.f_573.f_2103;
	
		case 4:
			return Global_1072759.f_573.f_12605;
	
		case 5:
			return Global_1072759.f_573.f_12907;
	
		case 6:
			return Global_1072759.f_573.f_15909;
	
		case 7:
			return Global_1072759.f_573.f_16511;
	
		case 8:
			return Global_1072759.f_573.f_18913;
	
		default:
		
	}

	return -1;
}

BOOL func_609(int iParam0, int iParam1, Player plParam2) // Position - 0x18A5A Hash - 0x8F4D222D ^0x8F4D222D
{
	return func_89(Global_1206166[plParam2 /*10*/][iParam0], iParam1);
}

var func_610(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x18A74 Hash - 0x63C3F71D ^0x3019B977
{
	var value;
	Player bitIndex;
	int i;
	BOOL flag;
	BOOL flag2;
	Player player;
	int num;
	BOOL flag3;
	Volume volume;
	BOOL flag4;
	Player player2;
	Ped playerPed;

	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&value);

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return value;

	if (func_790() != 0)
	{
		bitIndex = PLAYER::PLAYER_ID();
	
		if (bitIndex >= 0 && bitIndex < 32)
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, bitIndex);
	
		return value;
	}

	i = 0;
	flag = false;
	flag2 = false;
	player = Global_1295666.f_5;
	num = Global_1295666.f_10;
	flag3 = true;
	flag4 = bParam10;

	if (BUILTIN::VMAG2(fParam6) < 1f)
	{
		flag3 = false;
	}
	else
	{
		switch (iParam9)
		{
			case joaat("volBox"):
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_791());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_791());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_791());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_792(PLAYER::GET_PLAYER_TEAM(player));

	if (flag4 & 8 != 0 && flag4 & 32768 != 0)
	{
		flag4 = flag4 | 65536;
		flag4 = flag4 - flag4 & 40952;
	}

	if (flag4 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			flag4 = flag4 - flag4 & 4;
			flag4 = flag4 | false;
		}
	}

	for (i = 0; i < 32; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295666.f_149[i]))
		{
			player2 = Global_1295666.f_149[i];
			flag = false;
			flag2 = false;
		
			if (flag4 & true != 0 && player2 == player)
				flag = true;
		
			if (func_793(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_794(i) != 1)
					flag = true;
		
			if (!flag)
				if (flag4 & 16384 != 0 && PED::IS_PED_INCAPACITATED(playerPed))
					flag = true;
		
			if (!flag)
				if (flag4 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(player2))
					flag = true;
		
			if (!flag)
			{
				if (flag4 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(player2))
					{
						case -1:
							if (flag4 & 16 != 0)
								flag2 = true;
							break;
					
						case 0:
							if (flag4 & 32 != 0)
								flag2 = true;
							break;
					
						case 1:
							if (flag4 & 64 != 0)
								flag2 = true;
							break;
					
						case 2:
							if (flag4 & 128 != 0)
								flag2 = true;
							break;
					
						case 3:
							if (flag4 & 256 != 0)
								flag2 = true;
							break;
					
						case 4:
							if (flag4 & 512 != 0)
								flag2 = true;
							break;
					
						case 5:
							if (flag4 & 1024 != 0)
								flag2 = true;
							break;
					
						case 6:
							if (flag4 & 2048 != 0)
								flag2 = true;
							break;
					
						case 8:
							if (flag4 & 4096 != 0)
								flag2 = true;
							break;
					}
				
					if (!flag2)
						flag = true;
				}
			}
		
			if (!flag)
				if (flag4 & 32768 != 0)
					if (GANG::NETWORK_GET_GANG_ID(player2) != num)
						flag = true;
		
			if (!flag)
				if (flag4 & 65536 != 0)
					if (!func_795(player2))
						flag = true;
		
			if (!flag && flag3)
				if (!VOLUME::IS_POINT_IN_VOLUME(volume, ENTITY::GET_ENTITY_COORDS(playerPed, false, false)))
					flag = true;
		
			if (!flag)
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, i);
		}
	}

	if (flag3)
		VOLUME::DELETE_VOLUME(volume);

	return value;
}

int func_611(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21) // Position - 0x18E07 Hash - 0xDF93FBF9 ^0x193910B6
{
	if (!func_796(uParam0))
		return 0;

	uParam0->f_2[*uParam0 /*21*/] = { uParam1 };
	*uParam0 = *uParam0 + 1;
	return 1;
}

BOOL func_612(int iParam0, int iParam1) // Position - 0x18E37 Hash - 0x5A86BEFA ^0xB951E1EF
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_613(int iParam0) // Position - 0x18E4F Hash - 0x773BFB67 ^0x773BFB67
{
	if (func_615(iParam0, 4))
		return false;

	return true;
}

BOOL func_614(int iParam0) // Position - 0x18E66 Hash - 0x7F4C96B ^0x650690F6
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	if (Global_1904402.f_33[iParam0 /*9*/].f_2 & 98304 == 0)
		return false;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	for (i = 0; i < Global_38.f_3542; i = i + 1)
	{
		if (Global_38.f_3542[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (Global_1904402.f_33[iParam0 /*9*/].f_2 & 131072 != 0)
				num2 = 2;
		
			if (Global_1904402.f_33[iParam0 /*9*/].f_2 & 524288 != 0)
				num2 = 5;
		
			num = cloudTimeAsInt - Global_38.f_3542[i /*3*/];
		
			if (Global_38.f_3542[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && Global_1904402.f_33[iParam0 /*9*/].f_2 & 32768 != 0)
				return true;
		}
	}

	return false;
}

BOOL func_615(int iParam0, int iParam1) // Position - 0x18F32 Hash - 0xECB143B0 ^0xE41A70C5
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_616(int iParam0) // Position - 0x18F4B Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_617() // Position - 0x18F5E Hash - 0xD9A24882 ^0xD9A24882
{
	if (!func_383())
		return false;

	return Global_1904402.f_8873;
}

int func_618() // Position - 0x18F79 Hash - 0x7BDD8F67 ^0x9160E7D8
{
	if (func_521(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

BOOL func_619(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x18F96 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_199(false);
	*panParam1 = { func_168(hParam0, func_401(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_620(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0x18FDB Hash - 0x7F891916 ^0x5CD7D9F0
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(hParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, hParam2);
}

BOOL func_621(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x1900E Hash - 0xC845006B ^0xAA568F17
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_199(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

struct<29> func_622(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x19048 Hash - 0xAF17ACBD ^0xCD0691E1
{
	var unk;
	var unk30;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk30.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_199(bParam4), &uParam0, &unk30, 29, 1))
		return unk;

	unk = { func_628(&unk30, bParam5) };
	unk.f_17 = { unk30.f_16 };
	unk.f_25 = unk30.f_25;
	unk.f_26 = unk30.f_27;
	unk.f_27 = unk30.f_28;
	unk.f_28 = unk30.f_24;
	return unk;
}

int func_623(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x190E3 Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_710(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_712(func_797(num, hParam0, panParam1), num, panParam1);
	else
		return func_713(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 29), num, panParam1);

	return -1;
}

struct<26> func_624(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x1914D Hash - 0x614973B0 ^0xCAE61311
{
	var unk;
	var unk27;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk27.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_199(bParam4), &uParam0, &unk27, 24, 1))
		return unk;

	unk = { func_628(&unk27, bParam5) };
	unk.f_17 = { unk27.f_15 };
	unk.f_25 = unk27.f_23;
	return unk;
}

int func_625(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x191D0 Hash - 0xD42DE772 ^0x5BC8E38A
{
	int num;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_712(func_798(num, hParam0, panParam1), num, panParam1);
	else
		return func_713(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 26), num, panParam1);

	return -1;
}

struct<18> func_626(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x19220 Hash - 0x5B9BBF8B ^0x19F03106
{
	var unk;
	var unk19;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk19.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_199(bParam4), &uParam0, &unk19, 15, 1))
		return unk;

	unk = { func_628(&unk19, bParam5) };
	unk.f_17 = unk19.f_14;
	return unk;
}

int func_627(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x19295 Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_710(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_712(func_799(num, hParam0, panParam1), num, panParam1);
	else
		return func_713(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 18), num, panParam1);

	return -1;
}

struct<17> func_628(var uParam0, BOOL bParam1) // Position - 0x192FF Hash - 0x76921103 ^0xA9DF955B
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk = { *uParam0 };
	unk.f_4 = { uParam0->f_5 };
	unk.f_8 = uParam0->f_4;
	unk.f_9 = uParam0->f_11;
	unk.f_11 = uParam0->f_9;
	unk.f_10 = uParam0->f_10;

	if (bParam1)
	{
		unk.f_15 = func_317(uParam0->f_4, joaat("DEFAULT"));
	
		if (unk.f_15 != 0)
		{
			unk.f_4 = { func_410() };
			unk.f_11 = 0;
		}
	}

	return unk;
}

int func_629(Hash hParam0) // Position - 0x19380 Hash - 0x6D5A6948 ^0x8A3E949A
{
	if (func_19(hParam0, 1064293907))
		return 2;
	else if (func_19(hParam0, -1218707194))
		return 1;
	else if (func_19(hParam0, 1888974372))
		return 0;

	return 1;
}

struct<12> func_630(int iParam0, int iParam1, var uParam2, BOOL bParam3) // Position - 0x193C5 Hash - 0x1EEB145B ^0xCC3D6D4D
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					num = joaat("SKINNING_DAMAGE_POOR_QUALITY_POOR");
					break;
			
				case 1:
					num = joaat("SKINNING_DAMAGE_POOR_QUALITY_GOOD");
					break;
			
				case 2:
					num = joaat("SKINNING_DAMAGE_POOR_QUALITY_PERFECT");
					break;
			
				case 3:
					num = joaat("SKINNING_DAMAGE_POOR_QUALITY_RARE");
					break;
			
				case 4:
					num = joaat("SKINNING_DAMAGE_POOR_QUALITY_LEGENDARY");
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					num = joaat("SKINNING_DAMAGE_GOOD_QUALITY_POOR");
					break;
			
				case 1:
					num = joaat("SKINNING_DAMAGE_GOOD_QUALITY_GOOD");
					break;
			
				case 2:
					num = joaat("SKINNING_DAMAGE_GOOD_QUALITY_PERFECT");
					break;
			
				case 3:
					num = joaat("SKINNING_DAMAGE_GOOD_QUALITY_RARE");
					break;
			
				case 4:
					num = joaat("SKINNING_DAMAGE_GOOD_QUALITY_LEGENDARY");
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					num = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_POOR");
					break;
			
				case 1:
					num = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_GOOD");
					break;
			
				case 2:
					num = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_PERFECT");
					break;
			
				case 3:
					num = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_RARE");
					break;
			
				case 4:
					num = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_LEGENDARY");
					break;
			}
			break;
	}

	if (bParam3)
		func_800(uParam2, joaat("LOOT_TYPE_BREAKDOWN"));
	else
		func_800(uParam2, joaat("LOOT_TYPE_SKINNING"));

	func_800(uParam2, num);
	return *uParam2;
}

BOOL func_631(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0x19526 Hash - 0xDE9FAFE8 ^0xDE9FAFE8
{
	var unk;

	if (0 == iParam0)
		return false;

	return func_801(iParam0, uParam1, &unk, iParam2, iParam3);
}

int func_632(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, Hash hParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0x19546 Hash - 0x11449F01 ^0x11449F01
{
	int value;
	Hash weaponHash;
	Hash lootTableKey;
	BOOL flag;
	BOOL flag2;
	Hash hash;
	int num;
	int i;
	var statId;
	BOOL flag3;

	if (!func_17(hParam0, 0))
		return 0;

	if (!func_802(hParam0, iParam1, bParam2, hParam5))
		return 0;

	if (!func_803(hParam0, &value, iParam1))
		return 0;

	func_804(hParam0, bParam2);
	lootTableKey = 0;

	if (func_142(hParam0) == joaat("CLOTHING"))
		if (!func_19(hParam0, 866047851) && !func_19(hParam0, -1979000645))
			flag = true;

	if (func_643(hParam0, 8388608) && !func_805(27))
		func_806(27);

	func_807(hParam0);

	if (!flag)
	{
		if (func_19(hParam0, -1588156645))
		{
			bParam2 = true;
			flag2 = true;
			weaponHash = func_809(func_808(hParam0, true), false);
		
			if (WEAPON::IS_WEAPON_VALID(weaponHash))
			{
				if (func_37() == -1)
					func_810(weaponHash);
			
				if (func_170(false) && func_811(weaponHash, 0, false, true, 0, false, hParam5, false))
				{
					func_812(hParam0, value, hParam5);
				
					if (!bParam9)
						bParam2 = false;
				}
				else
				{
					func_813(hParam0, value, hParam5);
				}
			}
		}
		else if (func_142(hParam0) == joaat("WEAPON"))
		{
			if (!func_814(hParam0, hParam5, &bParam2, bParam3, bParam4))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_142(hParam0) == joaat("AMMO") && func_692(hParam0))
		{
			if (!func_815(hParam0, &value, hParam5))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_19(hParam0, -103750053))
		{
			func_416(func_816(joaat("claws_collected")), value);
		}
		else if (hParam0 == joaat("provision_alligator_tooth"))
		{
			func_416(func_415(joaat("COLLECTED"), joaat("alligator_tooth")), value);
		}
		else if (func_19(hParam0, -121341956) && !func_19(hParam0, 606799272))
		{
			if (hParam0 != joaat("weapon_kit_detector"))
				func_164(536, false);
		
			func_19(hParam0, -2017733358) || func_19(hParam0, -1369131378);
		}
		else if (func_19(hParam0, -136654233))
		{
			if (func_19(hParam0, -1021472396))
			{
			}
		}
		else if (func_19(hParam0, -1466706512) && func_19(hParam0, 1147021565))
		{
			func_164(519, false);
		}
		else if (func_19(hParam0, 1147021565) && func_19(hParam0, -524514947))
		{
		}
		else if (func_19(hParam0, 554195525))
		{
		}
		else if (func_19(hParam0, 589988438))
		{
			if (func_817())
			{
				func_818(joaat("reward_small"), false, 1065353216, 1, 0, 0, false, -1);
				bParam2 = true;
				flag2 = true;
			}
		}
		else if (func_19(hParam0, 787083290) && func_19(hParam0, 949916894))
		{
			func_819(hParam0);
		}
		else if (func_19(hParam0, -1718133314))
		{
			func_820(hParam0);
		}
		else if (func_19(hParam0, -1738650224))
		{
			func_821(hParam0);
		}
		else if (func_19(hParam0, -1112814642) && func_19(hParam0, 949916894))
		{
			func_822(hParam0);
		}
		else if (hParam0 == joaat("document_player_journal"))
		{
			Global_1940085.f_21 = 0;
		}
		else if (func_19(hParam0, 1841149704))
		{
			func_823();
		}
		else if (func_19(hParam0, -1979000645))
		{
		}
		else if (func_19(hParam0, 606799272))
		{
		}
		else if (func_19(hParam0, -1112814642) && func_19(hParam0, -1697809989))
		{
		}
		else if (func_19(hParam0, -2017733358) || func_19(hParam0, -1369131378))
		{
		}
		else if (func_19(hParam0, -1921346699))
		{
			return 0;
		}
		else if (func_19(hParam0, 1192444843))
		{
			switch (hParam0)
			{
				case joaat("upgrade_fsh_bait_lure_swamp"):
					if (!func_295(471514780, 1))
						func_632(471514780, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_lake"):
					if (!func_295(526074061, 1))
						func_632(526074061, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_swamp"):
					if (!func_295(-967317137, 1))
						func_632(-967317137, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_river"):
					if (!func_295(670273567, 1))
						func_632(670273567, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_lake"):
					if (!func_295(215778062, 1))
						func_632(215778062, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_river"):
					if (!func_295(-1045488665, 1))
						func_632(-1045488665, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			}
		}
		else if (func_19(hParam0, -839724752) && func_643(hParam0, 4))
		{
		}
		else if (func_19(hParam0, 1399091007))
		{
			func_824(hParam0, &lootTableKey);
			bParam2 = true;
			flag2 = true;
		}
	
		switch (hParam0)
		{
			case joaat("upgrade_upg_mortar_pestle"):
				if (func_37() == -1)
					hParam0 = -1448210800;
				break;
		
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_826(686, -103579, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_826(686, -1531530025, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("consumable_tonic"):
			case joaat("consumable_potent_tonic"):
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_826(685, -1228016946, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_fancy");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_poor");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_plain");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_plain");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_plain");
				break;
		
			case -1080874779:
			case joaat("consumable_potent_medicine"):
			case joaat("consumable_medicine"):
			case joaat("consumable_moonshine"):
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_826(685, 1934060482, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("upgrade_fsh_bait_cricket_tin"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("bait_crickets");
				break;
		
			case joaat("consumable_potent_restorative"):
			case joaat("consumable_cocaine_chewing_gum_used"):
			case joaat("consumable_cocaine_chewing_gum"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("consumable_restorative"):
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_826(685, 1110018439, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("kit_gun_oil"):
				func_164(521, false);
				break;
		
			case joaat("consumable_cigarette_box"):
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_poor");
				break;
		
			case joaat("consumable_snake_oil"):
			case joaat("consumable_potent_snake_oil"):
			case joaat("consumable_chewing_tobacco"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("consumable_chewing_tobacco_used"):
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_826(685, 1408511260, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("consumable_coffee_gnds_reg"):
				if (func_805(1))
					func_164(522, false);
				break;
		
			case joaat("consumable_valerian_root"):
				func_825(271, func_267(joaat("consumable_valerian_root"), false), false);
				break;
		
			case joaat("weapon_kit_binoculars"):
			case joaat("weapon_kit_binoculars_improved"):
				break;
		
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				flag2 = true;
				break;
		
			case joaat("consumable_aged_pirate_rum"):
				func_825(272, func_267(joaat("consumable_aged_pirate_rum"), false), false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("consumable_hair_tonic"):
				func_164(526, false);
				break;
		
			case joaat("consumable_ginseng_elixier"):
				func_825(270, func_267(joaat("consumable_ginseng_elixier"), false), false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_plain");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_poor");
				break;
		
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("ARROW_BUNDLE");
				break;
		
			case joaat("PROVISION_MP_TREASURE_MAP_REWARDS_BOX_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("reward_abandoned_loot_male");
				break;
		
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_poor");
				break;
		
			case joaat("upgrade_upg_coffee_kit"):
				func_164(534, false);
				break;
		
			case joaat("consumable_hair_grease"):
				func_164(529, false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_fancy");
				break;
		
			case joaat("upgrade_fsh_bait_worm_can"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("bait_worms");
				break;
		
			default:
				break;
		}
	}

	if (!flag2)
	{
		if (value <= 0)
			return 0;
	
		hash = hParam0;
		func_827(&hash);
	
		if (!func_813(hash, value, hParam5))
			return 0;
		else if (!func_170(false))
			return 1;
	
		if (func_142(hParam0) == joaat("CLOTHING"))
			func_828(hParam0);
	}
	else if (lootTableKey != 0)
	{
		if (func_170(false) && !func_414())
		{
			num.f_1 = 10;
			num.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_33, false, false, lootTableKey, &num, 0);
		
			for (i = 0; i < num; i = i + 1)
			{
				func_632(num.f_1[i], num.f_12[i], false, false, false, -897553835, 0, 0, 0, false);
			}
		}
		else
		{
			func_829(lootTableKey, 0);
		}
	}

	statId = { func_425(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::_STAT_ID_INCREMENT_INT(&statId, value);

	func_830(hParam0);

	if (iParam6 > 0f)
	{
		if (func_19(hParam0, -839724752))
			func_831(hParam0, iParam6);
	}
	else if (!bParam2)
	{
		flag3 = hParam5 == 1248274121;
		func_424(hParam0, value, false, flag3, false, false, false);
	}

	return 1;
}

BOOL func_633(Hash hParam0) // Position - 0x19FFA Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("consumable_special_horse_reviver_crafted"):
		case joaat("consumable_horse_reviver"):
			return true;
	}

	return false;
}

BOOL func_634(Ped pedParam0, Hash hParam1) // Position - 0x1A01E Hash - 0xD9F68FF6 ^0xB96DBFC0
{
	ATTRIBUTE::STOP_ITEM_PREVIEW();

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!TASK::IS_PED_IN_WRITHE(pedParam0))
		return false;

	if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_33))
		return false;

	PED::SET_PED_CONFIG_FLAG(Global_33, 176, true);
	TASK::CLEAR_PED_TASKS(Global_33, true, false);
	TASK::TASK_REVIVE_TARGET(Global_33, pedParam0, hParam1);
	return true;
}

int func_635() // Position - 0x1A09D Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1904379;
}

void func_636(Ped pedParam0) // Position - 0x1A0A9 Hash - 0x29A8F290 ^0xE8E78184
{
	Global_1904379.f_2 = pedParam0;
	return;
}

void func_637(Hash hParam0) // Position - 0x1A0B9 Hash - 0x29A8F290 ^0x6E801A78
{
	Global_1904379.f_1 = hParam0;
	return;
}

void func_638(int iParam0) // Position - 0x1A0C9 Hash - 0x29A8F290 ^0xF8BB6987
{
	Global_1904379.f_5 = iParam0;
	return;
}

void func_639(Hash hParam0, var uParam1, var uParam2) // Position - 0x1A0D9 Hash - 0x38E6C2DD ^0xA4FE6475
{
	*uParam1 = 0;
	*uParam2 = 0;

	switch (hParam0)
	{
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("repeater_ammo_box_express");
			*uParam2 = joaat("ammo_repeater_express");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("repeater_ammo_box");
			*uParam2 = joaat("ammo_repeater");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("revolver_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_revolver_high_velocity");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("pistol_ammo_box");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("revolver_ammo_box_used");
			*uParam2 = joaat("ammo_revolver");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("shotgun_ammo_box_used");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("rifle_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_rifle_high_velocity");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("pistol_ammo_box_express");
			*uParam2 = joaat("ammo_pistol_express");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("rifle_ammo_box_express");
			*uParam2 = joaat("ammo_rifle_express");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("repeater_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_repeater_high_velocity");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("shotgun_ammo_box_slug");
			*uParam2 = joaat("ammo_shotgun_slug");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("rifle_ammo_box");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
	
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_ammo_box");
			*uParam2 = joaat("ammo_22");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("revolver_ammo_box");
			*uParam2 = joaat("ammo_revolver");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("revolver_ammo_box_express");
			*uParam2 = joaat("ammo_revolver_express");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("rifle_ammo_box_used");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("pistol_ammo_box_used");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("pistol_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_pistol_high_velocity");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("shotgun_ammo_box");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("repeater_ammo_box_used");
			*uParam2 = joaat("ammo_repeater");
			break;
	}

	return;
}

BOOL func_640() // Position - 0x1A2E5 Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1913444;
}

void func_641(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x1A2F2 Hash - 0x3B7A5BE9 ^0xEE7A100D
{
	int i;

	for (i = 0; i < Global_1913444.f_3; i = i + 1)
	{
		if (Global_1913444.f_4[i /*6*/] == hParam0 && Global_1913444.f_4[i /*6*/].f_2 == bParam2 && Global_1913444.f_4[i /*6*/].f_3 == bParam3 && Global_1913444.f_4[i /*6*/].f_4 == bParam4 && Global_1913444.f_4[i /*6*/].f_5 == iParam5)
		{
			Global_1913444.f_4[i /*6*/].f_1 = Global_1913444.f_4[i /*6*/].f_1 + iParam1;
			return;
		}
	}

	if (Global_1913444.f_3 < 19)
	{
		Global_1913444.f_4[Global_1913444.f_3 /*6*/] = hParam0;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_1 = iParam1;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_2 = bParam2;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_3 = bParam3;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_4 = bParam4;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_5 = iParam5;
		Global_1913444.f_3 = Global_1913444.f_3 + 1;
	}

	return;
}

var func_642(BOOL bParam0, var uParam1, var uParam2) // Position - 0x1A415 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_643(Hash hParam0, int iParam1) // Position - 0x1A42C Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_17(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_644(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x1A44B Hash - 0x92B705D3 ^0xB783F681
{
	int i;
	Hash hashKey;
	Hash hashKey2;
	var outData;

	outData.f_2 = 5;
	outData.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &outData))
	{
		for (i = 0; i < 5; i = i + 1)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/]))
				goto 0xE3;
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/].f_1))
			{
			}
			else
			{
				hashKey = MISC::GET_HASH_KEY(outData.f_2[i /*3*/]);
				hashKey2 = MISC::GET_HASH_KEY(outData.f_2[i /*3*/].f_1);
			
				if (iParam2 != 0 && outData.f_2[i /*3*/].f_2 != iParam2)
					goto 0xE3;
			
				if (hParam3 != 0 && hashKey2 != hParam3)
					goto 0xE3;
			
				if (hParam4 != 0 && hashKey != hParam4)
					goto 0xE3;
			
				if (hParam5 != 0 && hashKey2 == hParam5)
				{
				}
				else
				{
					*uParam1 = { outData.f_2[i /*3*/] };
					return true;
				}
			}
		}
	}

	return false;
}

char* func_645(Hash hParam0) // Position - 0x1A53E Hash - 0xFBA883FB ^0x5434FC35
{
	if (func_19(hParam0, -1995062316))
		return "collectible_arrowheads";

	if (func_19(hParam0, 1239889275))
		return "collectible_liquor_bottles";

	if (func_19(hParam0, 143267379))
		return "collectible_coins";

	if (func_19(hParam0, -944041124))
		return "colectible_heirlooms";

	if (func_19(hParam0, 1562621600))
		return "collectible_jewelry";

	if (func_19(hParam0, -149719013))
		return "collectible_bird_eggs";

	if (func_19(hParam0, 1940829793))
		return "collectible_tarot_cards";

	if (func_19(hParam0, 781094263))
		return "collectible_flowers";

	if (func_19(hParam0, -352095726) || func_19(hParam0, -2014783736) || func_19(hParam0, -545064757) || func_19(hParam0, 679186220))
		return "collectible_found_fossil";

	return "";
}

BOOL func_646(Hash hParam0) // Position - 0x1A639 Hash - 0x339D45CE ^0x339D45CE
{
	switch (hParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
	
		default:
		
	}

	return true;
}

Hash func_647(Hash hParam0) // Position - 0x1A660 Hash - 0xD046EEF0 ^0xB8E66C21
{
	int num;
	var unk;
	int collectionId;
	int num2;
	int i;
	Hash outKey;

	num = func_832(hParam0);

	if (num == 0)
		return 0;

	unk = { func_285(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0, 0, -1, num, 0) };

	if (func_286(unk, &collectionId, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(collectionId, i, &outKey) && func_833(outKey))
			{
				func_293(collectionId);
				return outKey;
			}
		}
	
		func_293(collectionId);
	}

	return 0;
}

BOOL func_648(Hash hParam0, Hash hParam1) // Position - 0x1A6E5 Hash - 0x34B85114 ^0x6986CE99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, -949239683))
		return true;

	return false;
}

int func_649(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0x1A716 Hash - 0x6E96D276 ^0x9A3B0071
{
	var outData;

	if (!func_17(hParam0, 0) && !func_281(func_105(hParam0), 2))
		return 0;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
	{
		!bParam3;
		return 0;
	}

	!bParam3;
	*uParam2 = outData.f_1;
	return 1;
}

 func_650(Hash hParam0, int iParam1) // Position - 0x1A775 Hash - 0x7C967237 ^0x7C967237
{
	 num;

	num = func_834(hParam0, iParam1);

	if (num == 0)
		return 0;

	return num;
}

BOOL func_651(Hash hParam0, char* sParam1) // Position - 0x1A793 Hash - 0xE779657E ^0x44FD4FF7
{
	int lengthOfLiteralString;
	var unk;

	if (!func_17(hParam0, 0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(sParam1, func_835(hParam0), 128);
	lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);

	if (!func_836(hParam0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(&unk, func_837(hParam0), 128);

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		return false;

	TEXT_LABEL_APPEND_STRING(&unk, " - ", 128);
	lengthOfLiteralString = lengthOfLiteralString + HUD::GET_LENGTH_OF_LITERAL_STRING(&unk);
	TEXT_LABEL_APPEND_STRING(&unk, sParam1, 128);

	if (lengthOfLiteralString >= 127)
		return false;

	*sParam1 = { unk };
	return true;
}

const char* func_652(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x1A810 Hash - 0xE80420B9 ^0x2740E778
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_653(const char* sParam0, const char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x1A824 Hash - 0x72075C17 ^0x3AC6D3FB
{
	int num;
	var unk13;
	int num2;

	num = -2;
	num.f_1 = sParam5;
	num.f_2 = sParam6;
	num.f_3 = iParam7;
	num = 450;
	unk13.f_1 = sParam0;
	unk13.f_2 = sParam1;
	unk13.f_3 = hParam2;
	unk13.f_4 = iParam3;
	unk13.f_5 = iParam4;
	unk13.f_6 = 0;
	num2 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT(&num, &unk13, bParam8);
	func_838(sParam0, sParam1, hParam2);
	return num2;
}

struct<2> func_654(int iParam0) // Position - 0x1A887 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

void func_655(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1A897 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

int func_656(Ped pedParam0, Hash hParam1) // Position - 0x1A8B2 Hash - 0x91F3FA3F ^0xBD14110A
{
	int i;
	int num;

	if (func_495(hParam1))
	{
		num = 0;
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (Global_1903838.f_113[i /*96*/].f_1 == hParam1)
				if (ENTITY::DOES_ENTITY_EXIST(Global_1290271.f_1171.f_245[i /*4*/].f_3))
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1290271.f_1171.f_245[i /*4*/].f_3))
						num = num + 1;
		}
	
		return num;
	}

	return func_264(pedParam0, hParam1);
}

int func_657(var uParam0, Hash hParam1, var uParam2, BOOL bParam3, Hash hParam4, int iParam5) // Position - 0x1A928 Hash - 0x8377688 ^0x33238043
{
	var statId;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return 0;

	if (func_839(*uParam0, hParam1, *uParam2, bParam3, hParam4))
	{
		statId = { func_425(hParam1) };
	
		if (STATS::STAT_ID_IS_VALID(&statId))
			STATS::_STAT_ID_DECREMENT_INT(&statId, *uParam2);
	
		*uParam2 = func_658(*uParam0, hParam1, *uParam2, true, iParam5);
	
		if (*uParam2 > 0)
		{
			if (func_840(hParam1))
			{
				!func_841(0, hParam1, *uParam2);
			
				if (func_842(PLAYER::PLAYER_ID(), 1, false))
					ENTITY::_SET_ENTITY_CARRYING_FLAG(*uParam0, 32, true);
				else
					ENTITY::_SET_ENTITY_CARRYING_FLAG(*uParam0, 32, false);
			
				*uParam2 = func_843(*uParam0, hParam1, *uParam2);
			}
		}
	
		if (*uParam2 > 0)
		{
			num = func_844(*uParam0, hParam1);
		
			if (*uParam2 > num)
				*uParam2 = num;
		}
	
		func_88(true, false, 0);
		return 1;
	}

	return 0;
}

int func_658(Ped pedParam0, Hash hParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x1A9FC Hash - 0xF5FF74D2 ^0xE44EB8D1
{
	Hash hash;
	ItemSet itemset;
	Ped entityFromItem;
	int i;
	int itemsetSize;
	int j;
	var unk;
	var unk97;

	if (!PED::IS_PED_CARRYING_SOMETHING(pedParam0))
		return iParam2;

	itemset = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(pedParam0, itemset);
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);
	unk.f_10 = 10;

	for (i = 0; i < itemsetSize; i = i + 1)
	{
		if (iParam2 == 0)
			break;
	
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
	
		if (!ENTITY::DOES_ENTITY_EXIST(entityFromItem))
		{
		}
		else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(entityFromItem))
		{
		}
		else
		{
			hash = func_511(entityFromItem);
		
			if (!func_508(hash, &unk97))
			{
				if (ENTITY::IS_ENTITY_A_PED(entityFromItem))
				{
					if (iParam4 == 2 && ENTITY::_IS_ENTITY_FULLY_LOOTED(entityFromItem) || iParam4 == 1 && !ENTITY::_IS_ENTITY_FULLY_LOOTED(entityFromItem))
					{
					}
					else if (hash == hParam1)
					{
						if (pedParam0 == PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID()))
						{
							for (j = 0; j < 3; j = j + 1)
							{
								if (Global_1290271.f_1171.f_245[j /*4*/].f_3 == entityFromItem)
								{
									func_845(&unk, &Global_1903838.f_113[j /*96*/]);
									break;
								}
							}
						}
					
						if (bParam3)
						{
							if (Global_1915656.f_20638 || Global_1915656.f_22504.f_1)
							{
								if (Global_1915656.f_20241 == 29 && ENTITY::IS_ENTITY_A_PED(entityFromItem))
								{
									if (func_19(hash, -753854379) || func_19(hash, 173360570))
										PED::_SET_PED_DAMAGE_CLEANLINESS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem), 2);
								
									STATS::_STAT_CARRIED_SATCHEL_ITEM_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem));
								}
							
								if (pedParam0 == PLAYER::PLAYER_PED_ID())
									func_424(hash, -1, false, true, false, false, false);
							}
						
							ENTITY::_DELETE_CARRIABLE(&entityFromItem);
						}
						else
						{
							PED::DETACH_CARRIABLE_ENTITY(entityFromItem, false, false);
						}
					
						iParam2 = iParam2 - 1;
					}
				}
			}
		
			if (hash == hParam1)
			{
				if (pedParam0 == PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID()))
				{
					j = 0;
				
					if (j < 3)
						if (Global_1290271.f_1171.f_245[j /*4*/].f_3 == entityFromItem)
							func_845(&unk, &Global_1903838.f_113[j /*96*/]);
						else
							j = j + 1;
				}
			
				if (bParam3)
				{
					if (Global_1915656.f_20638 || Global_1915656.f_22504.f_1)
					{
						if (Global_1915656.f_20241 == 29 && ENTITY::IS_ENTITY_A_PED(entityFromItem))
						{
							if (func_19(hash, -753854379) || func_19(hash, 173360570))
								PED::_SET_PED_DAMAGE_CLEANLINESS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem), 2);
						
							STATS::_STAT_CARRIED_SATCHEL_ITEM_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem));
						}
					
						if (pedParam0 == PLAYER::PLAYER_PED_ID())
							func_424(hash, -1, false, true, false, false, false);
					}
				
					ENTITY::_DELETE_CARRIABLE(&entityFromItem);
				}
				else
				{
					PED::DETACH_CARRIABLE_ENTITY(entityFromItem, false, false);
				}
			
				iParam2 = iParam2 - 1;
			}
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemset);
	return iParam2;
}

void func_659(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x1ABAE Hash - 0xB1DBEA4A ^0xB1DBEA4A
{
	int i;
	int slot;

	if (Global_1915656.f_20637)
	{
		if (Global_1915656.f_20241 == 29)
		{
			if (func_509(hParam0))
			{
				slot = 0;
			
				if (bParam2)
				{
					switch (func_846(hParam0))
					{
						case 2:
							slot = 1;
							break;
					
						case 4:
							slot = 3;
							break;
					
						case 8:
							slot = 4;
							break;
					}
				}
			
				for (i = 0; i <= iParam1 - 1; i = i + 1)
				{
					STATS::_STAT_DONATE_INCREMENT_ITEM(func_847(hParam0), slot, func_19(hParam0, 1064293907), 0);
				}
			}
		}
	}

	return;
}

BOOL func_660(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x1AC3A Hash - 0xD12DD6C0 ^0x9850E73C
{
	var statId;

	statId = { func_425(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);

	func_848(hParam0, iParam1);
	return func_849(hParam0, iParam1, bParam2, hParam3);
}

int func_661(int iParam0, BOOL bParam1) // Position - 0x1AC71 Hash - 0x8004AC4B ^0x3EFC65D3
{
	int num;
	int num2;
	int num3;
	var unk;

	if (iParam0 == 0)
		return 0;

	num = func_850(iParam0);

	if (num <= 0)
		return 0;

	num2 = 0;
	num3 = 0;

	while (func_851(&unk))
	{
		if (unk.f_1 != 0)
			if (func_852(unk.f_1, &num2, bParam1))
				num3 = num3 + num2;
	}

	return num3;
}

BOOL func_662(int iParam0) // Position - 0x1ACC7 Hash - 0x873748AD ^0x873748AD
{
	return iParam0 > -1 && iParam0 < 26;
}

int func_663() // Position - 0x1ACDD Hash - 0x4228A1C2 ^0x9D7AFA2D
{
	return Global_1940252.f_40;
}

Entity func_664() // Position - 0x1ACEB Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1902887.f_379;
}

BOOL func_665(Hash hParam0, Hash hParam1) // Position - 0x1ACFA Hash - 0xA173444C ^0x5F14BF3
{
	if (func_19(hParam1, 1573112293))
		return func_853(hParam1);

	if (func_547(hParam1))
		return func_112(524288);

	switch (hParam0)
	{
		case -1823706425:
			if (hParam1 == -1115561122)
				return func_112(262144);
			else
				return func_112(128);
			break;
	
		case -1520388130:
		case 1802292908:
			return func_112(16);
	
		case -1393202694:
		case 2041469314:
			return func_853(hParam1);
	
		case -854348463:
			return func_112(8192);
	
		case -525676072:
			return func_112(8);
	
		case -77448735:
			if (func_548(hParam1))
				return func_853(hParam1);
			break;
	
		case 81053684:
		case 1477698721:
			return func_112(4);
	
		case 1779021115:
			if (func_17(hParam1, 0))
			{
				if (hParam1 == joaat("weapon_kit_camera"))
					return func_112(64);
			
				if (hParam1 == 332793555)
					return func_112(131072);
			}
		
			return func_112(32);
	
		default:
			if (func_17(hParam1, 0))
				if (func_19(hParam1, 1919582297))
					return func_112(4096);
				else if (hParam1 == joaat("upgrade_upg_mortar_pestle") || hParam1 == -1448210800)
					return func_112(2048);
				else if (hParam1 == joaat("kit_horse_brush"))
					return func_112(1024);
				else if (func_19(hParam1, 1147021565))
					return func_112(2);
		
			return func_112(1);
	}

	return func_112(1);
}

void func_666(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, BOOL bParam19, BOOL bParam20) // Position - 0x1AEB2 Hash - 0x6BBC6855 ^0x887CD5D2
{
	int num;
	int num2;
	int i;
	var unk;

	num = -1;
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_445(&uParam1, &num, &num2, bParam20))
	{
		i = 0;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_239(&unk, i, num, num2))
			{
				if (unk.f_4 == -1115561122)
				{
					if (Global_1110244.f_21.f_127)
					{
					}
					else
					{
						func_442(iParam0, unk.f_4, bParam19);
					}
				}
			
				func_442(iParam0, unk.f_4, bParam19);
			}
		}
	}

	func_253(num);
	return;
}

BOOL func_667(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1AF2B Hash - 0xC9655EC3 ^0xE7BDB885
{
	if (Global_1940199.f_12)
		if (bParam2 || Global_1940199.f_13 > 0 || Global_1940199.f_11 > 0)
			return 1;
	else if (bParam1 && !(Global_1940199.f_9 == 1370593166))
		return 0;

	if (Global_1940199.f_14 > 0 || bParam2 && Global_1940199.f_14 > -1)
		return 1;

	if (bParam0)
		if (Global_1940199.f_7)
			if (bParam2 || Global_1940199.f_15 > 0)
				return 1;

	return 0;
}

int func_668() // Position - 0x1AFC9 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1893611.f_2;
}

BOOL func_669(var uParam0, var uParam1) // Position - 0x1AFD7 Hash - 0x213CF43D ^0x213CF43D
{
	return func_854(uParam0, 1, 4);
}

int func_670(Hash hParam0) // Position - 0x1AFE9 Hash - 0x773BFB67 ^0x773BFB67
{
	if (func_643(hParam0, 4))
		return 0;

	return 1;
}

BOOL func_671(Hash hParam0, Hash hParam1) // Position - 0x1B000 Hash - 0xCB56AA2F ^0x760BB648
{
	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1224357681))
		return true;

	return false;
}

BOOL func_672(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, BOOL bParam6, int iParam7) // Position - 0x1B027 Hash - 0x113CD144 ^0x113CD144
{
	return func_855(&uParam0, hParam4, panParam5, bParam6, iParam7);
}

BOOL func_673(Hash hParam0, int iParam1) // Position - 0x1B03D Hash - 0xC9BD5171 ^0xC9BD5171
{
	int num;

	num = func_856(hParam0);

	if (num == -1)
		return false;

	return num > iParam1;
}

struct<4> func_674(int iParam0, Hash hParam1) // Position - 0x1B05C Hash - 0x4379F5A3 ^0xD8DD7D07
{
	var unk;

	unk = { func_857(iParam0) };
	return func_858(iParam0, hParam1, unk, unk.f_4);
}

int func_675(Hash hParam0, BOOL bParam1) // Position - 0x1B07E Hash - 0x84086197 ^0x82A85664
{
	int num;

	if (!func_281(hParam0, 2))
		return 0;

	num = 0;

	if (num != 0 && bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
		return 0;

	return num;
}

BOOL func_676(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x1B0B7 Hash - 0x8D36BF16 ^0xF49439E7
{
	var outData;
	int i;

	*uParam3 = 0;

	if (!func_17(hParam0, 0))
		return false;

	outData.f_4 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SELL_PRICE(hParam0, hParam1, &outData))
		return false;

	!bParam5;
	*uParam3 = outData.f_3;

	if (*uParam2 < outData.f_3)
		return false;

	for (i = 0; i < outData.f_3; i = i + 1)
	{
		!bParam5;
		uParam2->[i /*2*/] = { outData.f_4[i /*2*/] };
	}

	if (bParam4)
		func_859(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

BOOL func_677(int iParam0, Hash hParam1, float* pfParam2) // Position - 0x1B149 Hash - 0xFC746606 ^0xFC746606
{
	var unk;
	var unk6;
	int num;

	*pfParam2 = 1f;

	if (!func_244(iParam0))
		return false;

	if (!func_17(hParam1, 0))
		return false;

	if (!func_432(22, &unk))
		return false;

	unk.f_2 = -1023752283;
	unk.f_3 = hParam1;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		num = func_860(iParam0);
		func_861(num, &unk6);
		unk.f_2 = unk6;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(pfParam2, &unk);
	
		if (*pfParam2 < 1f)
			*pfParam2 = 1f;
	
		return true;
	}

	return false;
}

// Unhandled jump detected. Output should be considered invalid
int func_678(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x1B1CE Hash - 0x8D867191 ^0xF02772A4
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (bParam4 && hParam1 == -915411861 && func_862(hParam0, 59806960))
		hParam1 = 59806960;

	if (func_466(hParam0) || func_19(hParam0, 1077060302))
		return func_863(func_499(hParam0, false), hParam1, bParam3, true);

	if (!func_864(hParam0, hParam1, &unk, &num, bParam2, bParam3))
	{
		!bParam3;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == joaat("currency_cash") || unk[i /*2*/] == joaat("currency_gold_bar"))
		{
			if (iParam5 != 0 && unk[i /*2*/] != iParam5)
			{
			}
			else
			{
				return unk[i /*2*/].f_1;
				goto 0xDD;
			}
		}
	
		if (unk[i /*2*/] == 0)
			break;
	}

	!bParam3;
	return 0;
}

int func_679(int iParam0) // Position - 0x1B2BE Hash - 0x8D427F55 ^0x9966D58
{
	if (func_37() != -1)
		if (Global_1072759.f_12)
			if (iParam0 == 3)
				return joaat("ST_GENERAL_INTRO");

	return func_865(iParam0);
}

int func_680(Hash hParam0) // Position - 0x1B2EB Hash - 0xB8EC44B7 ^0x34C82EA7
{
	switch (hParam0)
	{
		case joaat("PROVISION_SKINNED_CARCASS_OWL_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_LOON_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR");
	
		case -2115566177:
			return -827518870;
	
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_OWL_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR");
	
		case -1886936864:
			return 1367447057;
	
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY");
	
		case -1671125008:
			return -1434083213;
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_DEER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_DEER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_FOX_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_HERON_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY");
	
		case -1066678466:
			return 1888419655;
	
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PIG_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_HERON_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_FOX_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_GILA_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_FOX_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_LOON_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_LOON_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_RAM_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR");
	
		case -438328437:
			return 1493601140;
	
		case -375348364:
			return -2040849706;
	
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY");
	
		case -352805801:
			return -229670230;
	
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_BADGER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY");
	
		case -132069363:
			return -885592109;
	
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR");
	
		case -101301217:
			return 2014346813;
	
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PIG_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_RAM_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY");
	
		case 213936563:
			return -1638839614;
	
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_DEER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY");
	
		case 403588059:
			return 2004357248;
	
		case joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_RAVEN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY");
	
		case 616254818:
			return -70954328;
	
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_OWL_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY");
	
		case 777641606:
			return -2092697195;
	
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_RAM_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_BADGER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_HERON_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PARROT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY");
	
		case 897866285:
			return 1705186999;
	
		case joaat("PROVISION_SKINNED_CARCASS_PARROT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_RAVEN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY");
	
		case 1020297399:
			return 1527400190;
	
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY");
	
		case 1135507073:
			return -1821314478;
	
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PARROT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_PIG_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_BADGER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY");
	
		case 1491466288:
			return 546758456;
	
		case 1518910503:
			return 1758585485;
	
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_RAVEN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT");
	
		case 1586020612:
			return -1378208045;
	
		case joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_GILA_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY");
	
		case 1683741809:
			return 1842740532;
	
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY");
	
		case 1718756614:
			return -1282621313;
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY");
	
		case 1815502722:
			return -2043601589;
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR");
	
		case 1892902297:
			return 1450608653;
	
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY");
	
		case 1920759986:
			return 1543592331;
	
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_GILA_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT");
	
		default:
		
	}

	return 0;
}

Hash func_681(Ped pedParam0) // Position - 0x1BD27 Hash - 0x159F0730 ^0x5BA63351
{
	Ped pedAttached;
	int pedDamageCleanliness;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	pedAttached = pedParam0;
	pedDamageCleanliness = PED::_GET_PED_DAMAGE_CLEANLINESS(pedAttached);
	num = func_866(pedAttached);

	if (!ENTITY::DOES_ENTITY_EXIST(pedAttached))
		return 0;

	if (TASK::_0x7CB99FADDE73CD1B(pedAttached))
		return 0;

	num2 = pedDamageCleanliness;
	num3 = num;

	if (num3 < num2)
		pedDamageCleanliness = num3;

	if (!PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(&num4, pedAttached, pedDamageCleanliness))
		return 0;

	if (num4 != 0)
	{
		if (PED::_IS_META_PED_USING_COMPONENT(pedAttached, 43391475) || ENTITY::_IS_ENTITY_FULLY_LOOTED(pedAttached))
		{
			num5 = func_867(num4);
			return num5;
		}
	
		return num4;
	}

	switch (pedDamageCleanliness)
	{
		case 0:
			return joaat("PROVISION_ANIMAL_CARCASS_POOR");
	
		case 1:
			return joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY");
	
		case 2:
			return joaat("PROVISION_ANIMAL_CARCASS_PERFECT");
	
		default:
		
	}

	return joaat("PROVISION_ANIMAL_CARCASS_POOR");
}

int func_682(Any anParam0) // Position - 0x1BDFA Hash - 0x76E7BE82 ^0xFEC3730C
{
	if (!GANG::NETWORK_IS_GANG_ID_VALID(anParam0))
		return -1;

	if (anParam0 == GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))
		return func_389(PLAYER::PLAYER_ID());

	return func_868(GANG::NETWORK_GET_GANG_LEADER(anParam0));
}

BOOL func_683(int iParam0) // Position - 0x1BE32 Hash - 0xED5061BA ^0xED5061BA
{
	if (iParam0 < 0 || iParam0 >= 32)
		return false;

	return true;
}

BOOL func_684(Hash hParam0) // Position - 0x1BE51 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_685(Hash hParam0) // Position - 0x1BE6C Hash - 0xB8EC44B7 ^0x72487142
{
	switch (hParam0)
	{
		case joaat("clothing_blend_eyeshadow_none"):
			return -875805376;
	
		case joaat("clothing_blend_foundation_none"):
			return -2056583192;
	
		case joaat("clothing_blend_complexion_none"):
			return -1180698265;
	
		case joaat("clothing_blend_complexion_2_none"):
			return -487028314;
	
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 1285634184;
	
		case joaat("clothing_blend_lipstick_none"):
			return -768760704;
	
		case joaat("clothing_blend_spots_none"):
			return 1301555144;
	
		case -643819742:
			return -559080197;
	
		case joaat("clothing_blend_freckles_none"):
			return 241235545;
	
		case -28107610:
			return -2118203104;
	
		case joaat("clothing_blend_moles_none"):
			return 1827902148;
	
		case joaat("clothing_blend_scar_none"):
			return 1858448324;
	
		case 1687431937:
			return -1811760631;
	
		case joaat("clothing_blend_blusher_none"):
			return 1015239729;
	
		case joaat("clothing_blend_eyeliner_none"):
			return -340627321;
	
		default:
		
	}

	return 0;
}

int func_686(var uParam0, int iParam1) // Position - 0x1BF4F Hash - 0x6AC2726E ^0xDB215040
{
	int i;

	for (i = 0; i < 22; i = i + 1)
	{
		if (uParam0->[i /*17*/].f_1 == -1)
			break;
	
		if (uParam0->[i /*17*/].f_16 == iParam1)
			return i;
	}

	return -1;
}

int func_687(Hash hParam0) // Position - 0x1BF8C Hash - 0xD114ACC1 ^0x3428F85C
{
	int num;

	num = func_145(hParam0);

	switch (num)
	{
		case -636562458:
			return -875805376;
	
		case 252325943:
			return -768760704;
	
		case 829857647:
			return -340627321;
	
		case 1115104855:
			return -2118203104;
	
		case 1216664798:
			return 1015239729;
	
		case 1341188928:
			return -2056583192;
	
		default:
		
	}

	return 0;
}

BOOL func_688(Hash hParam0) // Position - 0x1BFF9 Hash - 0xF7173584 ^0xDF145C91
{
	int i;

	for (i = 0; i < Global_1940252.f_41.f_1; i = i + 1)
	{
		if (func_241(hParam0, Global_1940252.f_41.f_2[i /*2*/]))
			return true;
	}

	return false;
}

BOOL func_689(Hash hParam0) // Position - 0x1C035 Hash - 0x41E81FD3 ^0x6129C7A4
{
	if (func_19(hParam0, -839724752))
		return func_19(hParam0, 1937586541);

	return false;
}

BOOL func_690(Hash hParam0) // Position - 0x1C05A Hash - 0xE3FE29A5 ^0x631A1635
{
	if (func_869(hParam0, joaat("ANTIQUE_BOTTLES")) || func_869(hParam0, joaat("BIRD_EGGS")) || func_869(hParam0, joaat("Arrowheads")) || func_869(hParam0, joaat("FAMILY_HEIRLOOMS")) || func_869(hParam0, joaat("WILD_FLOWERS")) || func_869(hParam0, joaat("coins")) || func_869(hParam0, joaat("LOST_JEWELRY_RINGS")) || func_869(hParam0, joaat("LOST_JEWELRY_BRACELETS")) || func_869(hParam0, joaat("LOST_JEWELRY_EARRINGS")) || func_869(hParam0, joaat("LOST_JEWELRY_NECKLACES")) || func_869(hParam0, joaat("TAROT_CARDS_CUPS")) || func_869(hParam0, joaat("TAROT_CARDS_PENTACLES")) || func_869(hParam0, joaat("TAROT_CARDS_SWORDS")) || func_869(hParam0, joaat("TAROT_CARDS_WANDS")) || func_869(hParam0, 773314749) || func_869(hParam0, -246025274) || func_869(hParam0, -41527693))
		return true;

	return false;
}

BOOL func_691(Hash hParam0, int iParam1) // Position - 0x1C184 Hash - 0xE1C16725 ^0x529AED8
{
	switch (Global_1940252.f_39)
	{
		case 1:
			if (iParam1 == -2074770370)
				if (func_19(hParam0, joaat("ci_tag_item_meat_animal")) || func_19(hParam0, -839724752) || func_19(hParam0, -136654233))
					return 1;
			break;
	
		case 2:
			if (iParam1 == -2074770370)
				if (func_19(hParam0, joaat("ci_tag_item_meat_animal")) || func_19(hParam0, -839724752) || func_19(hParam0, -136654233) || func_19(hParam0, 554195525) || func_19(hParam0, -1238310989) || func_19(hParam0, 2127114599) || func_19(hParam0, -1864584831) || func_19(hParam0, 1068498601) || func_19(hParam0, 1967571132))
					return 1;
			break;
	
		default:
			break;
	}

	return 0;
}

BOOL func_692(Hash hParam0) // Position - 0x1C290 Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

void func_693(int iParam0, int iParam1) // Position - 0x1C29E Hash - 0x9DC90D4D ^0xF6BB7D2B
{
	Global_1940252.f_41.f_2[iParam0 /*2*/] = iParam1;
	return;
}

BOOL func_694(int iParam0) // Position - 0x1C2B4 Hash - 0xA67D24A0 ^0x2418BA91
{
	return Global_1940252.f_41.f_2[iParam0 /*2*/].f_1;
}

void func_695(int iParam0) // Position - 0x1C2CA Hash - 0xD2BB9581 ^0xCCEAEC02
{
	Global_1940252.f_41.f_2[iParam0 /*2*/] = 0;
	Global_1940252.f_41.f_2[iParam0 /*2*/].f_1 = 0;
	return;
}

BOOL func_696(int iParam0, Any* panParam1, var uParam2, int* piParam3) // Position - 0x1C2EE Hash - 0x691EB829 ^0xDB420511
{
	*uParam2 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(iParam0, panParam1, piParam3);

	if (*uParam2 >= 0)
		return true;

	return false;
}

BOOL func_697(int iParam0) // Position - 0x1C30F Hash - 0x65331643 ^0x65331643
{
	if (iParam0 < 0)
		return false;

	if (func_37() == 0)
		return func_870(iParam0);

	return iParam0 <= func_871();
}

BOOL func_698(int iParam0) // Position - 0x1C33C Hash - 0x9186FF7C ^0xD4141850
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(0, iParam0);
}

int func_699(int iParam0, Hash hParam1) // Position - 0x1C35F Hash - 0x3911B2FD ^0x13C4D79B
{
	if (iParam0 == 15 && func_19(hParam1, -2051813666))
		return 1;

	return 0;
}

int func_700(Hash hParam0, int iParam1) // Position - 0x1C384 Hash - 0x3B4883DD ^0xBE4A62CA
{
	var unk;
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_17(hParam0, 0))
		return 0;

	unk = { func_369(false) };
	unk.f_4 = func_872(iParam1);
	guid = { func_168(hParam0, unk, unk.f_4, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_199(false), &guid, false);
	return inventoryItemCountWithGuid;
}

void func_701(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1C3DF Hash - 0xF277B453 ^0x8E3D6191
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");
	unk.f_4 = uParam0;
	unk.f_11 = iParam1;

	if (!bParam2)
		func_310(unk, bParam3);
	else
		func_243(unk);

	return;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_702(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x1C41D Hash - 0x92B705D3 ^0xB783F681
{
	int i;
	Hash hashKey;
	Hash hashKey2;
	var outData;

	outData.f_2 = 5;
	outData.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &outData))
	{
		for (i = 0; i < 5; i = i + 1)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/]))
				goto 0xE6;
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/].f_1))
			{
			}
			else
			{
				hashKey = MISC::GET_HASH_KEY(outData.f_2[i /*3*/]);
				hashKey2 = MISC::GET_HASH_KEY(outData.f_2[i /*3*/].f_1);
			
				if (iParam2 != 0 && outData.f_2[i /*3*/].f_2 != iParam2)
					goto 0xE6;
			
				if (hParam3 != 0 && hashKey2 != hParam3)
					goto 0xE6;
			
				if (hParam4 != 0 && hashKey != hParam4)
					goto 0xE6;
			
				if (hParam5 != 0 && hashKey2 == hParam5)
				{
				}
				else
				{
					*uParam1 = hashKey;
					uParam1->f_1 = hashKey2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
		}
	}

	return false;
}

void func_703(Any* panParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1C513 Hash - 0x9DD0C951 ^0x4F3B32EE
{
	int num;
	int num2;
	int i;
	var unk;

	num = -1;
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_445(panParam0, &num, &num2, bParam1))
	{
		i = 0;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_239(&unk, i, num, num2))
			{
				if (!func_299(&unk, 0))
				{
				}
				else if (bParam2)
				{
					func_316(unk.f_4, bParam3, false);
				}
				else
				{
					func_300(unk.f_4);
				}
			}
		}
	}

	func_253(num);
	return;
}

int func_704(int iParam0) // Position - 0x1C58F Hash - 0x935DFE56 ^0xB7C469D8
{
	int num;
	int num2;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1940252.f_11641))
		return 0;

	num = Global_1940252.f_11641;
	num.f_2 = 1;
	num.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num2, &num);
	return num2;
}

int func_705(int iParam0) // Position - 0x1C5C9 Hash - 0xB96AB95E ^0xC6F5AB0B
{
	int num;
	int num2;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1940252.f_11641))
		return 0;

	num = Global_1940252.f_11641;
	num.f_2 = 0;
	num.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num2, &num);
	return num2;
}

Hash func_706(int iParam0) // Position - 0x1C603 Hash - 0x9007E183 ^0x5B5BC457
{
	int num;
	var unk5;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1940252.f_11641))
		return 0;

	num = Global_1940252.f_11641;
	num.f_2 = 4;
	num.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&unk5, &num);
	return MISC::GET_HASH_KEY(&unk5);
}

Hash func_707(int iParam0) // Position - 0x1C641 Hash - 0xD23441A4 ^0xB8278AB6
{
	int num;
	var unk5;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1940252.f_11641))
		return 0;

	num = Global_1940252.f_11641;
	num.f_2 = 5;
	num.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&unk5, &num);
	return MISC::GET_HASH_KEY(&unk5);
}

BOOL func_708( Param0) // Position - 0x1C67F Hash - 0x604DBA55 ^0xEE2659DA
{
	if (func_873(Param0))
		return func_54(16);
	else if (func_874(Param0))
		return func_875();
	else if (func_876(Param0))
		return func_54(2);
	else if (Param0 == 1816455607)
		return func_54(2097152);

	return true;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_709(Any anParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x1C6D9 Hash - 0x8E6DB586 ^0xC3CF8308
{
	int i;

	*uParam1 = 0;

	if (*anParam0 != 10)
		return false;

	for (i = 0; i < 10; i = i + 1)
	{
		if (iParam2 < 1)
			break;
	
		if (anParam0->[i /*6*/].f_4 == 0)
			goto 0xF4;
	
		if (anParam0->[i /*6*/].f_5 == 0)
			goto 0xF4;
	
		if (func_877(&anParam0->[i /*6*/]))
		{
		}
		else
		{
			if (i != *uParam1)
			{
				anParam0->[*uParam1 /*6*/] = { anParam0->[i /*6*/] };
				anParam0->[*uParam1 /*6*/].f_4 = anParam0->[i /*6*/].f_4;
			}
		
			if (anParam0->[i /*6*/].f_5 > iParam2)
			{
				anParam0->[*uParam1 /*6*/].f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				anParam0->[*uParam1 /*6*/].f_5 = anParam0->[i /*6*/].f_5;
				iParam2 = iParam2 - anParam0->[*uParam1 /*6*/].f_5;
			}
		
			if (i > *uParam1)
			{
				anParam0->[i /*6*/] = { func_410() };
				anParam0->[i /*6*/].f_4 = 0;
				anParam0->[i /*6*/].f_5 = 0;
			}
		
			*uParam1 = *uParam1 + 1;
		}
	}

	if (bParam3 && iParam2 > 0)
	{
		*uParam1 = 0;
		return false;
	}

	return true;
}

BOOL func_710(Hash hParam0, Any* panParam1) // Position - 0x1C7F0 Hash - 0xB914F903 ^0x1DD44828
{
	int num;

	num = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(hParam0, panParam1);

	if (hParam0 == joaat("use"))
		if (func_878(panParam1->f_8, hParam0, num, 2048) || func_878(panParam1->f_8, hParam0, num, 32768) || func_878(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (hParam0 == 1168099063)
		if (func_878(panParam1->f_8, hParam0, num, 4) || func_878(panParam1->f_8, hParam0, num, 256) || func_878(panParam1->f_8, hParam0, num, 65536) || func_878(panParam1->f_8, hParam0, num, 131072))
			return false;
	else if (hParam0 == joaat("spend"))
		if (func_878(panParam1->f_8, hParam0, num, 1) || func_878(panParam1->f_8, hParam0, num, 8) || func_878(panParam1->f_8, hParam0, num, 65536) || func_878(panParam1->f_8, hParam0, num, 32))
			return false;
	else if (hParam0 == joaat("Sell"))
		if (func_878(panParam1->f_8, hParam0, num, 1) || func_878(panParam1->f_8, hParam0, num, 16) || func_878(panParam1->f_8, hParam0, num, 2) || func_878(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (func_878(panParam1->f_8, hParam0, num, 8) || func_878(panParam1->f_8, hParam0, num, 4096) || func_878(panParam1->f_8, hParam0, num, 256) || func_878(panParam1->f_8, hParam0, num, 65536))
		return false;

	return true;
}

BOOL func_711(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x1C9C6 Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

int func_712(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x1C9DD Hash - 0x85216370 ^0xE7D00C30
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_879(iParam1, 1, 0, 0);
			return iParam1;
		}
	
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}

	func_879(iParam1, 2, 0, 0);
	return -1;
}

int func_713(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x1CA26 Hash - 0xE2AB25BA ^0xE2AB25BA
{
	if (bParam0)
	{
		func_879(iParam1, 1, 0, 0);
		return iParam1;
	}

	return -1;
}

int func_714() // Position - 0x1CA42 Hash - 0x9F572D68 ^0x32E0A00A
{
	return 1035451607;
}

int func_715(var uParam0, var uParam1) // Position - 0x1CA4F Hash - 0xF9339824 ^0x8CB8B693
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_880(uParam0, &unk))
		return unk.f_1;

	return -1;
}

int func_716(int iParam0) // Position - 0x1CA7B Hash - 0x7569022C ^0xD5B8EAC7
{
	int num;
	int num2;

	num = -1;

	if (func_881(&num2, iParam0))
		num = func_882() - DATAFILE::_0xE13634BB6BAF0734(num2, num2.f_1) - 1;

	return num;
}

int func_717(int iParam0) // Position - 0x1CAA6 Hash - 0xEEAE9B95 ^0xC5F953AD
{
	if (iParam0 == -1)
		return -1;

	return Global_1245174[iParam0 /*5*/].f_1;
}

int func_718(int iParam0) // Position - 0x1CAC2 Hash - 0xB8EC44B7 ^0xE8991785
{
	switch (iParam0)
	{
		case 0:
			return 1336837986;
	
		case 1:
			return 2124631622;
	
		case 2:
			return joaat("ROBBERY_TRAIN");
	
		case 3:
			return 1443764480;
	
		case 4:
			return -668110249;
	
		case 5:
			return -1381389849;
	
		case 6:
			return 536699577;
	
		case 7:
			return 541147288;
	
		case 8:
			return 377122918;
	
		case 9:
			return 1158195437;
	
		case 10:
			return joaat("AMBUSH");
	
		case 11:
			return -621956193;
	
		case 12:
			return joaat("GANG_EVENT_SHOWDOWN");
	
		case 13:
			return joaat("GANG_EVENT_IMPROMPTU_RACE");
	
		case 14:
			return -867762478;
	
		case 15:
			return 602097925;
	
		case 16:
			return joaat("TRAIN_ESCORT");
	
		case 17:
			return joaat("IWD_1V1");
	
		case 18:
			return joaat("IWD_PVP");
	
		case 19:
			return joaat("IWD_INF");
	
		case 20:
			return joaat("IWD_PF");
	
		case 21:
			return joaat("IWD_PLF");
	
		case 22:
			return joaat("ASSASSINATION");
	
		case 23:
			return joaat("ASSASSINATION_TRACKING");
	
		case 24:
			return joaat("ASSASSINATION_PVP_PLAYER");
	
		case 25:
			return joaat("ASSASSINATION_PVP_POSSE");
	
		case 26:
			return joaat("COACH_HOLDUP_ROBBERY");
	
		case 27:
			return joaat("COACH_HOLDUP_KIDNAPPING");
	
		case 28:
			return joaat("IWD_F");
	
		case 30:
			return 1518877519;
	
		default:
		
	}

	return 0;
}

int func_719(int iParam0) // Position - 0x1CC77 Hash - 0x268EF4F6 ^0x268EF4F6
{
	int num;

	num = func_884(0, func_883() - 1, &iParam0);

	if (num == -1)
		return -1;

	return func_885(num);
}

int func_720(int iParam0) // Position - 0x1CC9E Hash - 0x85F4CB4C ^0x85F4CB4C
{
	return Global_1110244.f_3667[iParam0 /*7*/];
}

struct<8> func_721(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1CCB1 Hash - 0x97F184D3 ^0xF316A8E
{
	var unk;
	var unk6;

	if (!func_886(iParam0))
		return unk6;

	if (!func_887(&unk))
		return unk6;

	if (!func_888(unk, &(unk.f_1), 13, 0, 0, 1))
		return unk6;

	if (!func_888(unk, &(unk.f_1), 14, iParam0, 0, 1))
		return unk6;

	if (!func_888(unk, &(unk.f_1), 19, 0, 0, 1))
		return unk6;

	if (!func_888(unk, &(unk.f_1), 21, iParam1, 0, bParam2))
	{
		if (bParam2)
		{
		}
	
		return unk6;
	}

	return func_889(unk);
}

BOOL func_722(int iParam0) // Position - 0x1CD64 Hash - 0xC86BC762 ^0xC86BC762
{
	return func_89(Global_1220826.f_1196, iParam0);
}

BOOL func_723() // Position - 0x1CD79 Hash - 0xD2F03408 ^0xD2F03408
{
	return Global_263042[Global_1295666 /*65*/] > 2;
}

BOOL func_724(BOOL bParam0, int iParam1) // Position - 0x1CD8D Hash - 0xA39C8374 ^0xEF47748F
{
	if (!Global_1072759.f_3)
		return false;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return false;

	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return Global_1206954[iParam1 /*12*/] && bParam0 != false;
}

struct<2> func_725() // Position - 0x1CDC9 Hash - 0xA30248B6 ^0x10CDE073
{
	if (Global_1205804.f_129 <= 0)
		return func_390(0);

	if (Global_1205804.f_130 < 0 || Global_1205804.f_131 == 0)
		return func_390(0);

	return Global_1205804[Global_1205804.f_130 /*4*/].f_1;
}

BOOL func_726(Hash hParam0) // Position - 0x1CE14 Hash - 0x25F0A9E7 ^0x25F0A9E7
{
	if (func_890(hParam0) == -1)
		return false;

	return true;
}

BOOL func_727(Hash hParam0) // Position - 0x1CE2B Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

Hash func_728(int iParam0) // Position - 0x1CE39 Hash - 0xBA965109 ^0xA132DCEE
{
	switch (iParam0)
	{
		case 2:
			return joaat("consumable_herb_ginseng");
	
		case 3:
			return joaat("consumable_herb_ginseng");
	
		case 4:
			return joaat("consumable_herb_bay_bolete");
	
		case 5:
			return joaat("consumable_herb_black_berry");
	
		case 6:
			return joaat("consumable_herb_currant");
	
		case 7:
			return joaat("consumable_herb_burdock_root");
	
		case 8:
			return joaat("consumable_herb_chanterelles");
	
		case 11:
			return joaat("consumable_herb_common_bulrush");
	
		case 12:
			return joaat("consumable_herb_creeping_thyme");
	
		case 13:
			return joaat("consumable_herb_sage");
	
		case 15:
			return joaat("consumable_herb_english_mace");
	
		case 16:
			return joaat("consumable_herb_evergreen_huckleberry");
	
		case 18:
			return joaat("consumable_herb_currant");
	
		case 19:
			return -241666815;
	
		case 20:
			return joaat("consumable_herb_sage");
	
		case 21:
			return joaat("consumable_herb_indian_tobacco");
	
		case 24:
			return joaat("consumable_herb_milkweed");
	
		case 27:
			return joaat("consumable_herb_oleander_sage");
	
		case 28:
			return joaat("consumable_herb_oregano");
	
		case 29:
			return joaat("consumable_herb_parasol_mushroom");
	
		case 30:
			return joaat("consumable_herb_prairie_poppy");
	
		case 32:
			return joaat("consumable_herb_rams_head");
	
		case 34:
			return joaat("consumable_herb_red_raspberry");
	
		case 35:
			return joaat("consumable_herb_sage");
	
		case 38:
			return joaat("consumable_herb_vanilla_flower");
	
		case 39:
			return joaat("consumable_herb_violet_snowdrop");
	
		case 40:
			return joaat("provision_wldflwr_agarita");
	
		case 41:
			return joaat("provision_wldflwr_texas_blue_bonnet");
	
		case 42:
			return joaat("provision_wldflwr_bitterweed");
	
		case 43:
			return joaat("provision_wldflwr_blood_flower");
	
		case 44:
			return joaat("provision_wldflwr_cardinal_flower");
	
		case 45:
			return joaat("provision_wldflwr_chocolate_daisy");
	
		case 46:
			return joaat("provision_wldflwr_creek_plum");
	
		case 47:
			return joaat("provision_wldflwr_wild_rhubarb");
	
		case 48:
			return joaat("provision_wldflwr_wisteria");
	
		case 49:
			return joaat("consumable_herb_wild_carrots");
	
		case 50:
			return joaat("consumable_herb_wild_feverfew");
	
		case 51:
			return joaat("consumable_herb_wild_mint");
	
		case 52:
			return joaat("consumable_herb_wintergreen_berry");
	
		case 53:
			return joaat("consumable_herb_yarrow");
	
		default:
			break;
	}

	return 0;
}

void func_729(int iParam0, BOOL bParam1) // Position - 0x1D0F4 Hash - 0xFA676C9B ^0xFA676C9B
{
	if (!func_485(iParam0))
		return;

	Global_17418[iParam0] = Global_17418[iParam0] || bParam1;
	return;
}

void func_730(int iParam0, BOOL bParam1) // Position - 0x1D11A Hash - 0xF33798D9 ^0x8C787B55
{
	if (!func_485(iParam0))
		return;

	if (func_891(iParam0))
		return;

	func_729(iParam0, 2);

	if (bParam1)
		if (!func_220(0, false, true))
			func_892(true, 1017438712);

	return;
}

BOOL func_731(int iParam0) // Position - 0x1D15D Hash - 0x94F42F3F ^0x94F42F3F
{
	if (!func_485(iParam0))
		return false;

	return func_486(iParam0, true, true);
}

void func_732(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1D17B Hash - 0x65D4C438 ^0x65D4C438
{
	if (!func_485(iParam0))
		return;

	if (func_731(iParam0))
		return;

	if (!bParam1)
		bParam1 = func_483(iParam0);

	if (!bParam1)
		func_893(iParam0);

	func_729(iParam0, true);
	func_730(iParam0, true);

	if (bParam2)
		if (!func_220(0, false, true))
			func_733(true, 6);

	return;
}

void func_733(BOOL bParam0, int iParam1) // Position - 0x1D1DD Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_894(&Global_0, 8);

	if (!func_895() || func_37() != -1)
		return;

	func_894(&Global_0, 1);
	return;
}

float func_734(int iParam0, int iParam1) // Position - 0x1D223 Hash - 0x882BA7B3 ^0xDE52A593
{
	int num;
	float pedStamina;
	float pedMaxStamina;
	float num2;
	float num3;

	if (iParam1 == -1)
	{
		num2 = pedMaxStamina - pedStamina;
		return num2 / 2f;
	}

	switch (iParam0)
	{
		case 0:
			pedStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_33));
			pedMaxStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_33, false));
			num = 50;
			break;
	
		case 1:
			pedStamina = PED::_GET_PED_STAMINA(Global_33);
			pedMaxStamina = PED::_GET_PED_MAX_STAMINA(Global_33);
			num = 8;
			break;
	
		case 2:
			pedStamina = PLAYER::_GET_PLAYER_DEAD_EYE(PLAYER::GET_PLAYER_INDEX());
			pedMaxStamina = PLAYER::_GET_PLAYER_MAX_DEAD_EYE(PLAYER::GET_PLAYER_INDEX(), 0);
			num = 14;
			break;
	}

	num3 = (float)num * iParam1 + pedStamina;

	if (num3 > pedMaxStamina)
		num2 = pedMaxStamina - pedStamina;
	else
		num2 = num3 - pedStamina;

	return num2 / 2f;
}

void func_735(int iParam0) // Position - 0x1D2D8 Hash - 0x265AFF44 ^0xECA4C539
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(ped);

	num = func_896(2);
	func_897(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

void func_736(int iParam0, BOOL bParam1) // Position - 0x1D315 Hash - 0x71081FC9 ^0xE795FB69
{
	int num;

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = 10;

	num = func_898(2);
	func_899(BUILTIN::TO_FLOAT(iParam0 * num), false, bParam1);
	return;
}

void func_737(int iParam0) // Position - 0x1D34A Hash - 0x265AFF44 ^0xE695F6B4
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_0xFC3B580C4380B5B7(ped);

	num = func_900(2);
	func_901(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

float func_738(float fParam0, float fParam1) // Position - 0x1D387 Hash - 0x2BA4B8ED ^0x2BA4B8ED
{
	if (fParam1 != 0f)
		return (fParam1 / 100f) * 100f;

	return (fParam0 / 8f) * 100f;
}

void func_739(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1D3B5 Hash - 0xF1ADCC2F ^0xF1ADCC2F
{
	if (fParam1 == 0f)
		return;

	if (bParam4)
		fParam1 = func_902(iParam0, fParam1, true);

	func_904(iParam0, func_903(iParam0, 2) + fParam1, bParam2, bParam3, true, 2);
	return;
}

float func_740(float fParam0, int iParam1) // Position - 0x1D3EE Hash - 0x4EDD98F5 ^0x4EDD98F5
{
	switch (iParam1)
	{
		case 0:
			return fParam0 * 0.033f;
	
		case 1:
			return fParam0 * 2f;
	
		case 2:
			return fParam0 * 120f;
	
		case 3:
			return fParam0 * 2880f;
	
		default:
		
	}

	return fParam0;
}

int func_741(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1D440 Hash - 0xAC70E962 ^0x1F9746E0
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		return 0;

	return func_905(iParam0, fParam1, bParam2, bParam3);
}

void func_742(float fParam0, BOOL bParam1) // Position - 0x1D464 Hash - 0xF3A2F5AE ^0x22F56C08
{
	if (fParam0 > 10f)
		fParam0 = 10f;

	if (func_906())
		func_907(fParam0, 0);

	if (bParam1)
	{
		Global_17418.f_55.f_2459.f_41 = Global_17418.f_55.f_2459.f_41 + 1;
	
		if (5 == Global_17418.f_55.f_2459.f_41)
			func_164(109, false);
	}

	return;
}

BOOL func_743() // Position - 0x1D4BC Hash - 0x7545CCE6 ^0x7545CCE6
{
	int num;

	num = Global_1953292.f_595[8];
	num = num + Global_1953292.f_595[10];
	num = num + Global_1953292.f_595[1];
	num = num + Global_1953292.f_595[2];
	num = num + Global_1953292.f_595[5];
	num = num + Global_1953292.f_595[25];
	num = num + Global_1953292.f_595[23];
	num = num + Global_1953292.f_595[18];
	num = num + Global_1953292.f_595[19];
	return num > 0;
}

int func_744(Hash hParam0) // Position - 0x1D552 Hash - 0x98D45ADB ^0x674EF0A2
{
	int num;

	num = func_361(func_908(hParam0), 1);

	if (num != 39)
		return Global_1953292.f_1676.f_1[num /*3*/].f_1;

	return 0;
}

BOOL func_745(Hash hParam0, var uParam1) // Position - 0x1D581 Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_361(func_908(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1953292.f_1676.f_1[num /*3*/] != 0 && Global_1953292.f_1676.f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hash = Global_1953292.f_1676.f_1[num /*3*/];
	
		if (func_145(hash) == hParam0 || hParam0 == 81053684 && func_19(hash, 160827531))
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

Hash func_746(Hash hParam0) // Position - 0x1D617 Hash - 0x90D51E83 ^0x1291FDBE
{
	return Global_1953292.f_1676.f_1[func_361(hParam0, 1) /*3*/];
}

int func_747() // Position - 0x1D631 Hash - 0x16CCC184 ^0xB63B6FF6
{
	int i;
	Hash hash;
	int num;

	num = 0;

	for (i = 0; i < Global_1953292.f_3352.f_26; i = i + 1)
	{
		hash = Global_1953292.f_3352[i];
	
		if (func_145(hash) == -999503751)
			if (func_909() != hash)
				num = num + 1;
	}

	return num;
}

BOOL func_748(Hash hParam0, int iParam1) // Position - 0x1D682 Hash - 0x564F798F ^0xBDC94FF5
{
	if (iParam1 == 0)
		iParam1 = func_910(false);

	if (func_145(hParam0) == -999503751 && func_750(hParam0) != -1)
		return true;

	if (iParam1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		return func_19(hParam0, -287432114);
	else if (iParam1 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		return func_19(hParam0, -133342564);

	return false;
}

BOOL func_749(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1D6EB Hash - 0xFC1A4C7A ^0x2FD92EB6
{
	var unk;
	var guid;

	unk = { func_167(hParam0, bParam2, 0) };
	guid = { func_168(hParam0, unk, unk.f_4, bParam2) };

	if (func_368(hParam0, unk, unk.f_4, bParam2, false, false) <= 0)
		return false;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_199(bParam2), &guid, bParam1);
	return true;
}

int func_750(Hash hParam0) // Position - 0x1D73D Hash - 0xAFBAC931 ^0xAFBAC931
{
	switch (hParam0)
	{
		case -2011879201:
			return 5;
	
		case -1323870201:
			return 8;
	
		case -1063340820:
			return 6;
	
		case -808817534:
			return 3;
	
		case 97391779:
			return 2;
	
		case 217155793:
			return 1;
	
		case 491602716:
			return 0;
	
		case 967218463:
			return 10;
	
		case 1270922359:
			return 4;
	
		case 1632140501:
			return 9;
	
		case 2127262701:
			return 7;
	
		default:
		
	}

	return -1;
}

BOOL func_751(BOOL bParam0, int iParam1) // Position - 0x1D7BF Hash - 0xFE9F4A91 ^0x51AAAD17
{
	if (iParam1 == -1)
		iParam1 = Global_17418.f_55.f_664.f_1777;

	if (iParam1 > -1 && iParam1 < 11)
		return Global_17418.f_55.f_664.f_33[iParam1 /*120*/] && bParam0 != false;

	return false;
}

struct<8> func_752(int iParam0) // Position - 0x1D802 Hash - 0xAAC9C045 ^0xE6DD002E
{
	var unk;

	if (func_751(4, iParam0))
		return Global_17418.f_2645[iParam0 /*8*/];

	TEXT_LABEL_ASSIGN_STRING(&unk, HUD::GET_STRING_FROM_HASH_KEY(func_911(iParam0)), 64);
	return unk;
}

void func_753() // Position - 0x1D837 Hash - 0x6BEE258E ^0x6BEE258E
{
	Global_1953292.f_1046 = 0;
	return;
}

BOOL func_754(Hash hParam0) // Position - 0x1D847 Hash - 0xC36143B1 ^0xD0F863A4
{
	if (!func_17(hParam0, 0))
		return false;

	if (func_19(hParam0, 160827531) || func_145(hParam0) == 81053684)
		return true;

	return false;
}

void func_755(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1D883 Hash - 0xB56128A7 ^0x710CD125
{
	BOOL flag;
	var unk;
	var unk120;
	int i;
	Hash hash;

	flag = false;

	switch (func_145(hParam0))
	{
		case -2061583405:
			flag = func_912(hParam0, &(Global_1953292.f_3352.f_28), bParam4);
			break;
	
		case -1719060085:
			flag = func_912(hParam0, &(Global_1953292.f_3352.f_31), bParam4);
			break;
	
		case -999503751:
			flag = func_912(hParam0, &(Global_1953292.f_3352.f_27), bParam4);
		
			if (func_19(hParam0, -166674229))
			{
				unk.f_1 = 39;
			
				if (func_913(&unk, hParam0, &unk120, false, true, false, 0, false, true, 8))
				{
					for (i = 0; i < 39; i = i + 1)
					{
						hash = unk.f_1[i /*3*/];
					
						if (func_17(hash, 0))
							func_755(hash, false, false, false, false);
					}
				}
			}
			break;
	
		case -525676072:
			flag = func_912(hParam0, &(Global_1953292.f_3352.f_29), bParam4);
			break;
	
		case 81053684:
			flag = func_912(hParam0, &(Global_1953292.f_3352.f_30), bParam4);
			break;
	
		case 119907797:
			flag = func_912(hParam0, &(Global_1953292.f_3352.f_32), bParam4);
			break;
	
		case 1388798186:
			flag = func_912(hParam0, &(Global_1953292.f_3352.f_33.f_7), bParam4);
			break;
	
		default:
			if (func_19(hParam0, 160827531))
				flag = func_912(hParam0, &(Global_1953292.f_3352.f_30), bParam4);
			break;
	}

	if (bParam3 && flag)
		func_582(false, hParam0);

	if (bParam2)
		func_581();

	if (bParam1)
		func_583(false, false);

	return;
}

Hash func_756(Hash hParam0) // Position - 0x1DA09 Hash - 0xDBA8DC27 ^0x5C33F2A1
{
	int num;
	var unk;

	func_914(&unk, 9044914, hParam0, 0, 0, 0);
	DATAFILE::_PARSEDDATA_GET_FILE(&unk);

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&unk))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &unk, -1168434056))
			return 0;
	
		return num;
	}

	return 0;
}

BOOL func_757(Hash hParam0, int iParam1) // Position - 0x1DA4D Hash - 0x926B5C1A ^0xC9C8B467
{
	Hash hash;

	hash = func_145(Global_1953292.f_1676.f_1[iParam1 /*3*/]);

	if (func_145(hParam0) == hash)
		return true;
	else if (hParam0 == -992705550)
		return func_19(Global_1953292.f_1676.f_1[iParam1 /*3*/], 160827531);
	else if (hParam0 == 491480257)
		return hash == -2061583405 || hash == 2086043523;
	else if (hParam0 == -1789518572)
		return hash == -923693316;
	else if (hParam0 == -275040139)
		return hash == 1882579758;

	return false;
}

void func_758(int iParam0, int iParam1) // Position - 0x1DAF4 Hash - 0xF4504E91 ^0x84D29029
{
	int i;
	int num;
	var unk;

	unk = 39;

	for (i = 0; i < 16; i = i + 1)
	{
		Global_1953292.f_2938.f_35[i /*2*/] = { unk };
	
		if (i < *iParam0)
		{
			if (func_915(&iParam0->f_2[i /*2*/], 2) || iParam0->f_2[i /*2*/] == iParam1 || iParam0->f_2[i /*2*/] == 39)
			{
				iParam0->f_2[i /*2*/] = { unk };
			}
			else
			{
				if (func_915(&iParam0->f_2[i /*2*/], 1))
					func_916(&iParam0->f_2[i /*2*/], 2, 6);
			
				Global_1953292.f_2938.f_35[num /*2*/] = { iParam0->f_2[i /*2*/] };
				num = num + 1;
				iParam0->f_2[i /*2*/] = { unk };
			}
		}
	
		iParam0->f_2[i /*2*/] = { unk };
	}

	for (i = 0; i < num; i = i + 1)
	{
		iParam0->f_2[i /*2*/] = { Global_1953292.f_2938.f_35[i /*2*/] };
	}

	*iParam0 = num;
	return;
}

void func_759(int iParam0, int iParam1, int iParam2) // Position - 0x1DBF1 Hash - 0x917A9738 ^0x1D68250E
{
	int i;
	int j;

	if (*iParam0 + 1 >= 16)
		return;

	if (!func_917(iParam0, 1))
		func_918(iParam0, 1);

	for (i = 0; i < *iParam0; i = i + 1)
	{
		if (iParam0->f_2[i /*2*/] == iParam1)
		{
			iParam0->f_2[i /*2*/].f_1 = iParam2;
			return;
		}
	
		if (Global_1953292.f_83[iParam0->f_2[i /*2*/] /*12*/].f_2 > Global_1953292.f_83[iParam1 /*12*/].f_2)
		{
			for (j = *iParam0; j >= i + 1; j = j + -1)
			{
				iParam0->f_2[j /*2*/] = { iParam0->f_2[j - 1 /*2*/] };
			}
		
			iParam0->f_2[i /*2*/] = iParam1;
			iParam0->f_2[i /*2*/].f_1 = iParam2;
			*iParam0 = *iParam0 + 1;
			return;
		}
	}

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

void func_760(Hash hParam0, var uParam1) // Position - 0x1DCD7 Hash - 0xEEF7C6EF ^0xEFE4EF7D
{
	int num;
	int num2;
	int num3;

	num = func_919(0);
	num.f_1 = uParam1;
	num.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&num);

	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&num))
		return;

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&num))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num2, &num, 1409451727))
		{
		}
		else
		{
			num3 = func_361(num2, 1);
		
			if (num3 < 0 || num3 > 39)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num2, &num, joaat("Component")))
			{
			}
			else if (hParam0->f_1[num3 /*3*/] != num2)
			{
			}
			else
			{
				hParam0->f_1[num3 /*3*/] = Global_1953292.f_83[num3 /*12*/];
				hParam0->f_1[num3 /*3*/].f_1 = 0;
				func_592(num3, 0);
			}
		}
	}

	return;
}

void func_761(Hash hParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x1DD8A Hash - 0x47EC47B2 ^0xCC3EAB2D
{
	int num;
	Hash hash;

	if (hParam1 == -230310728 || hParam1 == 1326838792)
		hParam0->f_1[iParam2 /*3*/].f_1 = 289238755;
	else if (hParam0->f_1[iParam2 /*3*/].f_1 == 289238755)
		hParam0->f_1[iParam2 /*3*/].f_1 = joaat("base");

	num = 10;
	hash = func_145(hParam0->f_1[num /*3*/]);

	if (hash == 119907797)
	{
		if (func_19(hParam1, 458991572))
		{
			hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			hParam0->f_1[num /*3*/].f_1 = 0;
			func_592(num, iParam3);
		}
	}
	else if (hash == 2086043523)
	{
		if (func_19(hParam1, -93469181))
		{
			hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			hParam0->f_1[num /*3*/].f_1 = 0;
			func_592(num, iParam3);
		}
	}
	else if (hash == -525676072)
	{
		if (func_19(hParam1, -93469181))
		{
			hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			hParam0->f_1[num /*3*/].f_1 = 0;
			func_592(num, iParam3);
		}
	}

	num = 11;

	if (func_19(hParam0->f_1[num /*3*/], -1446529222) && func_19(hParam1, -93469181))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	num = 12;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_19(hParam1, -93469181) && func_19(hParam0->f_1[num /*3*/], -1303648999))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	return;
}

void func_762(Hash hParam0, Hash hParam1, int iParam2) // Position - 0x1DF5F Hash - 0xC8C81F63 ^0xED719640
{
	if (hParam1 == joaat("clothing_item_m_beard_stubble"))
		hParam0->f_1[iParam2 /*3*/].f_1 = 289238755;
	else if (hParam0->f_1[iParam2 /*3*/].f_1 == 289238755)
		hParam0->f_1[iParam2 /*3*/].f_1 = joaat("base");

	return;
}

void func_763(Hash hParam0, Hash hParam1, BOOL bParam2, int iParam3) // Position - 0x1DFA4 Hash - 0x1075AB8B ^0xF324283C
{
	int num;
	Hash hash;

	func_592(1, iParam3);

	if (bParam2)
		return;

	num = 12;
	hash = hParam0->f_1[num /*3*/];

	if (!func_364(hash, false) && func_19(hash, -180472385))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	num = 10;
	hash = hParam0->f_1[num /*3*/];

	if (hash != Global_1953292.f_83[num /*12*/] && func_145(hash) == 2086043523 && func_19(hParam1, -93469181))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	return;
}

void func_764(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x1E06D Hash - 0xA81215F7 ^0xA81215F7
{
	switch (func_145(hParam2))
	{
		case -525676072:
			func_920(hParam0, bParam1, iParam3);
			break;
	
		case 2086043523:
			func_921(hParam0, bParam1, iParam3);
			break;
	}

	return;
}

void func_765(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x1E0A7 Hash - 0x7B358321 ^0x3A779D22
{
	int num;

	num = 18;

	if (func_145(hParam0->f_1[num /*3*/]) == 912453393)
		func_592(num, iParam3);

	func_592(1, iParam3);

	if (bParam1)
		return;

	if (func_754(hParam2))
		func_922(hParam0, bParam1, iParam3);

	num = 11;

	if (func_19(hParam2, -180472385) && !func_364(hParam0->f_1[num /*3*/], false))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	if (func_19(hParam2, -1303648999))
		return;

	num = 16;

	if (hParam0->f_1[num /*3*/].f_1 == 1530758430)
	{
		hParam0->f_1[num /*3*/].f_1 = joaat("base");
		func_592(num, iParam3);
		num = 20;
	
		if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
			func_592(num, iParam3);
	}
	else if (hParam0->f_1[num /*3*/].f_1 == 1334603721)
	{
		hParam0->f_1[num /*3*/].f_1 = -1539589426;
		func_592(num, iParam3);
		num = 20;
	
		if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
			func_592(num, iParam3);
	}

	return;
}

void func_766(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x1E1E7 Hash - 0x6DFFA234 ^0x160F223D
{
	int num;
	int metapedType;
	Hash hash;
	int num2;
	int num3;

	num = 12;
	metapedType = 0;

	if (func_584() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		metapedType = 1;

	if (joaat("neckties") == PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(hParam0->f_1[num /*3*/], metapedType, true))
	{
		if (bParam1 || func_19(hParam2, 1872585553) || func_145(hParam2) == 1882579758)
		{
			hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			hParam0->f_1[num /*3*/].f_1 = 0;
			func_592(num, iParam3);
		}
	}

	hash = hParam0->f_1[num /*3*/];

	if (!func_364(hash, false) && !func_19(hash, -1303648999) && func_19(hParam2, -1527414429))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	num = 17;

	if (!func_364(hParam0->f_1[num /*3*/], false) && func_19(hParam2, 1467402774))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	num = 29;

	if (!func_364(hParam0->f_1[num /*3*/], false) && func_19(hParam2, 1126863852))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	num = 34;
	hash = hParam0->f_1[num /*3*/];

	if (func_145(hash) == 1759215194 && func_145(hParam2) == 1882579758)
	{
		hParam0->f_1[num /*3*/] = func_756(hParam2);
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}
	else if (func_923(hash, bParam1, metapedType))
	{
		hash = hParam0->f_1[18 /*3*/];
		num2 = 0;
	
		if (func_145(hash) == 912453393 && func_924(32))
			num2 = num2 | 1;
	
		if (func_19(hParam2, 525391395))
			num2 = num2 | 2;
	
		hash = func_925(Global_1953292.f_83[num /*12*/].f_9, num2);
	
		if (hash != 0)
		{
			hParam0->f_1[num /*3*/] = hash;
			hParam0->f_1[num /*3*/].f_1 = 0;
			func_592(num, iParam3);
			func_774(hParam0, false, hash, iParam3);
		}
	}

	num = 21;

	if (!func_364(hParam0->f_1[num /*3*/], false) && func_19(hParam2, 196770179))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	num3 = 23;

	if (!func_364(hParam0->f_1[num /*3*/], false) || hParam0->f_1[num3 /*3*/] != Global_1953292.f_83[num3 /*12*/] && func_19(hParam0->f_1[num3 /*3*/], -1655064541))
		func_926(hParam0, iParam3);

	return;
}

void func_767(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x1E4D0 Hash - 0x7E0722A ^0xAB26183C
{
	int num;

	if (bParam1)
		return;

	num = 29;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_19(hParam2, 358628372))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	return;
}

void func_768(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3, int iParam4) // Position - 0x1E52F Hash - 0xB459802F ^0xB459802F
{
	switch (func_145(hParam2))
	{
		case 698653232:
			func_927(hParam0, bParam1, hParam2, iParam4);
			break;
	
		case 912453393:
			func_928(hParam0, bParam1, iParam3, iParam4);
			break;
	}

	return;
}

void func_769(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x1E56D Hash - 0x22CB819F ^0x22CB819F
{
	switch (func_145(hParam2))
	{
		case -1080198344:
		case 1868067663:
			func_929(hParam0, bParam1, hParam2, iParam3);
			break;
	
		case 294388917:
			func_930(hParam0, bParam1, hParam2, iParam3);
			break;
	}

	return;
}

void func_770(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x1E5B1 Hash - 0x3C314B3B ^0x50027DDE
{
	int num;

	num = 18;

	if (func_145(hParam0->f_1[num /*3*/]) == 912453393)
		func_592(num, iParam3);

	if (bParam1)
		return;

	num = 23;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_19(hParam2, 1537768121))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_926(hParam0, iParam3);

	return;
}

void func_771(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x1E64D Hash - 0xEA1EEC9C ^0x89D8E054
{
	int num;

	if (!bParam1)
	{
		num = 21;
	
		if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		{
			if (func_19(hParam0->f_1[num /*3*/], 1537768121))
			{
				hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
				hParam0->f_1[num /*3*/].f_1 = 0;
			}
		
			func_592(num, iParam3);
		}
	}

	num = 16;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		if (func_19(hParam2, -1655064541))
			func_926(hParam0, iParam3);
		else
			func_592(num, iParam3 | 16);

	num = 20;

	if (hParam0->f_1[num /*3*/].f_1 != -529972961)
		return;

	hParam0->f_1[num /*3*/].f_1 = joaat("base");
	func_592(num, iParam3);
	num = 25;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_592(num, iParam3);

	num = 28;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_592(num, iParam3);

	return;
}

void func_772(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x1E75C Hash - 0x69302866 ^0x620ADA80
{
	int num;

	if (bParam1)
		return;

	if (func_931(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) && func_19(hParam2, -1230785684))
	{
		num = 27;
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	num = 32;

	if (!func_364(hParam0->f_1[num /*3*/], false) && func_19(hParam2, 1016511012))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	return;
}

void func_773(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x1E7FB Hash - 0xAEDF8511 ^0x27A01C51
{
	int num;

	if (bParam1)
		return;

	num = 17;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_19(hParam0->f_1[num /*3*/], 358628372))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam2);
	}

	return;
}

void func_774(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x1E860 Hash - 0x81434F3 ^0x81434F3
{
	switch (func_145(hParam2))
	{
		case -1740828670:
			func_936(hParam0, bParam1, hParam2, iParam3);
			break;
	
		case 344283346:
			func_937(hParam0, bParam1, iParam3);
			break;
	
		case 502936876:
			func_935(hParam0, bParam1, iParam3);
			break;
	
		case 684307653:
			func_934(hParam0, bParam1, hParam2, iParam3);
			break;
	
		case 1223979091:
		case 2047428024:
			func_933(hParam0, bParam1, hParam2, iParam3);
			break;
	
		case 1759215194:
			func_932(hParam0, iParam3);
			break;
	}

	return;
}

void func_775(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x1E8F0 Hash - 0x22CB819F ^0x22CB819F
{
	switch (func_145(hParam2))
	{
		case -923693316:
			func_939(hParam0, bParam1, hParam2, iParam3);
			break;
	
		case 1769055947:
			func_938(hParam0, bParam1, hParam2, iParam3);
			break;
	}

	return;
}

void func_776(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x1E92E Hash - 0x60D806B ^0x98705F22
{
	int num;
	Hash hash;

	if (bParam1)
	{
		func_940(hParam0, iParam3, false, true);
		return;
	}

	num = 35;
	hash = hParam0->f_1[num /*3*/];

	if (func_19(hParam2, 813132419) && hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_145(hash) == -923693316)
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	if (func_19(hParam2, -1650340550) && hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_145(hash) == 1769055947)
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	num = 37;

	if (func_19(hParam2, -1278198125) && hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	return;
}

int func_777(Hash hParam0, BOOL bParam1, Hash hParam2) // Position - 0x1EA5D Hash - 0xD6995ACD ^0x328CFE7D
{
	int i;

	if (hParam2 == 0)
		return -1;

	for (i = 0; i < PED::_GET_SHOP_ITEM_NUM_WEARABLE_STATES(hParam0, bParam1, true); i = i + 1)
	{
		if (PED::_GET_SHOP_ITEM_WEARABLE_STATE_BY_INDEX(hParam0, i, bParam1, true) == hParam2)
			return i;
	}

	return -1;
}

BOOL func_778(Hash hParam0, Hash hParam1, var uParam2) // Position - 0x1EA9F Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return true;
}

int func_779(Hash hParam0) // Position - 0x1EAB0 Hash - 0x6EEB52D0 ^0x6EEB52D0
{
	int num;

	num = func_750(hParam0);

	if (num != -1)
		return num;

	return -1;
}

BOOL func_780(Hash hParam0) // Position - 0x1EACC Hash - 0x1DB3839 ^0xD5C14C10
{
	return hParam0 == -1839668642 || hParam0 == -1415811768 || hParam0 == 231148558 || hParam0 == -1674363638 || hParam0 == 252325943 || hParam0 == 1216664798 || hParam0 == 1341188928 || hParam0 == 829857647 || hParam0 == -636562458 || hParam0 == 1115104855;
}

void func_781(int iParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x1EB5A Hash - 0x3079C542 ^0x5D29A697
{
	if (bParam1)
		Global_1953292.f_1676.f_1[iParam0 /*3*/] = { Global_1953292.f_1557.f_1[iParam0 /*3*/] };

	if (!bParam2)
		return;

	if (iParam3 == -1)
		iParam3 = Global_17418.f_55.f_664.f_1777;

	func_941(&Global_1953292.f_1676.f_1[iParam0 /*3*/], iParam0, iParam3);
	return;
}

BOOL func_782(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x1EBB6 Hash - 0xECEF3502 ^0x2D53122C
{
	var unk;
	var unk6;

	unk = { func_167(hParam0, bParam2, 0) };
	unk6 = { func_168(hParam0, unk, unk.f_4, bParam2) };
	return func_169(unk6, iParam1, bParam2);
}

void func_783(int iParam0, BOOL bParam1, int iParam2) // Position - 0x1EBEB Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_942(&(Global_1953292.f_1557), iParam0);
	func_943(2, iParam0, 6);

	if (bParam1)
		func_583(false, true);

	return;
}

int func_784(Any* panParam0, Hash hParam1, BOOL bParam2, int iParam3) // Position - 0x1EC13 Hash - 0xCBDD84FC ^0x74C2D9B6
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (func_855(panParam0, hParam1, &unk, bParam2, iParam3))
		return unk.f_4;

	return 0;
}

int func_785(int iParam0) // Position - 0x1EC41 Hash - 0x669CB4E1 ^0x669CB4E1
{
	switch (iParam0)
	{
		case 0:
			return 24;
	
		case 1:
			return 25;
	
		case 2:
			return 26;
	
		case 3:
			return 27;
	
		case 4:
			return 28;
	
		case 5:
			return 29;
	
		case 6:
			return 30;
	
		case 7:
			return 34;
	
		case 11:
			return 31;
	
		case 12:
			return 32;
	
		case 13:
			return 33;
	
		case 14:
			return 35;
	
		case 15:
			return 41;
	
		case 16:
			return 39;
	
		case 17:
			return 40;
	
		case 18:
			return 38;
	
		default:
		
	}

	if (func_393(iParam0) == joaat("posse_versus"))
		return 37;

	return 23;
}

BOOL func_786(int iParam0, Player plParam1) // Position - 0x1ED16 Hash - 0xAF32F835 ^0x6534FA19
{
	if (plParam1 == 255)
		return Global_1102813.f_3 && iParam0 != false;

	return Global_1101558[plParam1 /*38*/].f_3 && iParam0 != false;
}

BOOL func_787() // Position - 0x1ED42 Hash - 0x62AD6655 ^0x124ACCA1
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();
	return Global_1051832.f_3279 == frameCount || Global_1051832.f_3279 == frameCount - 1;
}

void func_788(int iParam0) // Position - 0x1ED6C Hash - 0x3A524DDA ^0x3A524DDA
{
	Global_1051832.f_3648 = Global_1051832.f_3648 || iParam0;
	return;
}

BOOL func_789() // Position - 0x1ED85 Hash - 0x477323 ^0x8EF93AF8
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false);
}

int func_790() // Position - 0x1EDA1 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1051645.f_12;
}

char* func_791() // Position - 0x1EDAF Hash - 0x306ACA3A ^0xE0B8757F
{
	return "unnamed";
}

BOOL func_792(int iParam0) // Position - 0x1EDBB Hash - 0xC360B8E6 ^0xCBE2AF9D
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case -1:
			num = 16;
			break;
	
		case 0:
			num = 32;
			break;
	
		case 1:
			num = 64;
			break;
	
		case 2:
			num = 128;
			break;
	
		case 3:
			num = 256;
			break;
	
		case 4:
			num = 512;
			break;
	
		case 5:
			num = 1024;
			break;
	
		case 6:
			num = 2048;
			break;
	
		case 8:
			num = 4096;
			break;
	}

	return num;
}

BOOL func_793(int iParam0) // Position - 0x1EE4A Hash - 0x38220669 ^0xFB404699
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_944(36, iParam0);
}

int func_794(int iParam0) // Position - 0x1EE68 Hash - 0x8D78E39F ^0x46194076
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL func_795(Player plParam0) // Position - 0x1EEB3 Hash - 0x2484E1E ^0x4707F690
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_945(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_946(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

BOOL func_796(var uParam0) // Position - 0x1EEF8 Hash - 0xEF8B385D ^0xEF8B385D
{
	if (*uParam0 >= 40)
		return false;

	return true;
}

BOOL func_797(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x1EF0D Hash - 0x494940FE ^0x1E1EAABF
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 29, panParam2, 0);
}

BOOL func_798(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x1EF24 Hash - 0xB063C902 ^0x8DB8ACCE
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 26, panParam2, 0);
}

BOOL func_799(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x1EF3B Hash - 0xAEE55F03 ^0x36ABCD3F
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

void func_800(var uParam0, int iParam1) // Position - 0x1EF52 Hash - 0x624BD2B7 ^0x9DA59487
{
	BOOL flag;
	int i;

	if (iParam1 == 0)
		return;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->f_1[i] == iParam1)
			return;
	
		switch (iParam1)
		{
			case joaat("FISHING_RESULT_RUINED"):
			case joaat("FISHING_RESULT_NORMAL"):
			case joaat("FISHING_RESULT_LEGENDARY"):
				if (uParam0->f_1[i] == joaat("FISHING_RESULT_NORMAL") || uParam0->f_1[i] == joaat("FISHING_RESULT_RUINED") || uParam0->f_1[i] == joaat("FISHING_RESULT_LEGENDARY"))
					flag = true;
				break;
		
			case joaat("LOOTER_PED_IS_FEMALE"):
			case joaat("LOOTER_PED_IS_MALE"):
				if (uParam0->f_1[i] == joaat("LOOTER_PED_IS_MALE") || uParam0->f_1[i] == joaat("LOOTER_PED_IS_FEMALE"))
					flag = true;
				break;
		
			case joaat("LOOT_TYPE_NORMAL"):
			case joaat("LOOT_TYPE_SKINNING"):
				if (uParam0->f_1[i] == joaat("LOOT_TYPE_NORMAL") || uParam0->f_1[i] == joaat("LOOT_TYPE_SKINNING"))
					flag = true;
				break;
		}
	
		if (flag)
		{
			uParam0->f_1[i] = iParam1;
			return;
		}
	}

	if (*uParam0 >= 10)
		return;

	uParam0->f_1[*uParam0] = iParam1;
	*uParam0 = *uParam0 + 1;
	return;
}

BOOL func_801(int iParam0, var uParam1, Any anParam2, int iParam3, int iParam4) // Position - 0x1F07E Hash - 0x4F430DA4 ^0x658D22B6
{
	var unk;
	int num;

	if (iParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_947(uParam1);
	SECURE_STORE(&unk, iParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_3.f_1 = 10;
	num = iParam3;
	num.f_3 = { *uParam1 };
	num.f_2 = iParam4;
	func_948(anParam2, iParam0, num);
	return 1;
}

BOOL func_802(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x1F0ED Hash - 0x198FCB70 ^0x369C0AB5
{
	if (func_37() == -1)
	{
		if (func_409(hParam0) && func_949(hParam0))
		{
			func_950(hParam0, iParam1, true, &bParam2, hParam3);
			return false;
		}
	}
	else if (hParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (hParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}

	return true;
}

BOOL func_803(Hash hParam0, var uParam1, int iParam2) // Position - 0x1F144 Hash - 0x8ABA0690 ^0x8ABA0690
{
	var unk;
	int num;
	int num2;

	*uParam1 = iParam2;
	func_951(hParam0, uParam1);
	unk = { func_167(hParam0, false, 1) };
	num = func_497(hParam0, &unk, false, false);
	num2 = func_521(hParam0, false, false, false);

	if (num > 1 && num2 + iParam2 >= num)
		if (func_19(hParam0, -2051813666))
			func_164(674, true);
		else if (func_37() == -1)
			func_164(673, false);

	if (func_952(hParam0, &unk, *uParam1, false, false, -1, false))
		if (num2 < num)
			*uParam1 = num - num2;
		else
			return false;

	return true;
}

void func_804(Hash hParam0, BOOL bParam1) // Position - 0x1F1E2 Hash - 0x86DCB18E ^0x6098B664
{
	if (bParam1)
		return;

	if (!func_953())
		return;

	switch (func_10(hParam0, -949239683))
	{
		case -1565009253:
		case -1420737577:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1940085.f_70.f_5 = 1;
			Global_1940085.f_70.f_6 = 0;
			Global_1940085.f_70.f_1 = hParam0;
			break;
	}

	return;
}

BOOL func_805(int iParam0) // Position - 0x1F293 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_954(iParam0))
		return false;

	return func_955(iParam0);
}

void func_806(int iParam0) // Position - 0x1F2AF Hash - 0xFDF9CB10 ^0xFDF9CB10
{
	if (!func_954(iParam0))
		return;

	func_956(iParam0);
	func_957(iParam0);
	return;
}

void func_807(Hash hParam0) // Position - 0x1F2D0 Hash - 0xB0B39801 ^0xC789CDD0
{
	if (func_19(hParam0, -1522723129))
		func_958(-848633709, 0, 255, 0, false);
	else if (func_19(hParam0, -283942357))
		func_958(-981153234, 0, 255, 0, false);
	else if (func_19(hParam0, 683680997))
		func_958(-756350192, 0, 255, 0, false);
	else if (func_19(hParam0, 1307628809))
		func_958(603094518, 0, 255, 0, false);

	return;
}

Hash func_808(Hash hParam0, BOOL bParam1) // Position - 0x1F355 Hash - 0x27CC99BE ^0xBF8437DD
{
	Hash hash;

	switch (hParam0)
	{
		case joaat("ammo_hatchet_hewing"):
			hash = joaat("weapon_melee_hatchet_hewing");
			break;
	
		case joaat("ammo_molotov_volatile"):
			hash = joaat("weapon_thrown_molotov");
			break;
	
		case joaat("ammo_throwing_knives_confuse"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_throwing_knives_wound"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_throwing_knives"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_hatchet_ancient"):
			hash = joaat("weapon_melee_ancient_hatchet");
			break;
	
		case joaat("ammo_tomahawk_homing"):
			hash = joaat("weapon_thrown_tomahawk");
			break;
	
		case joaat("ammo_hatchet_cleaver"):
			hash = joaat("weapon_melee_cleaver");
			break;
	
		case joaat("ammo_hatchet_hunter_rusted"):
			hash = joaat("weapon_melee_hatchet_hunter_rusted");
			break;
	
		case joaat("ammo_hatchet_double_bit_rusted"):
			hash = joaat("weapon_melee_hatchet_double_bit_rusted");
			break;
	
		case joaat("ammo_tomahawk_improved"):
			hash = joaat("weapon_thrown_tomahawk");
			break;
	
		case joaat("ammo_hatchet_viking"):
			hash = joaat("weapon_melee_hatchet_viking");
			break;
	
		case joaat("ammo_tomahawk_ancient"):
			hash = joaat("weapon_thrown_tomahawk_ancient");
			break;
	
		case joaat("ammo_bolas"):
			hash = joaat("weapon_thrown_bolas");
			break;
	
		case joaat("ammo_hatchet"):
			hash = joaat("weapon_melee_hatchet");
			break;
	
		case joaat("ammo_hatchet_hunter"):
			hash = joaat("weapon_melee_hatchet_hunter");
			break;
	
		case joaat("ammo_dynamite"):
			hash = joaat("weapon_thrown_dynamite");
			break;
	
		case joaat("ammo_dynamite_volatile"):
			hash = joaat("weapon_thrown_dynamite");
			break;
	
		case joaat("ammo_poisonbottle"):
			hash = joaat("weapon_thrown_poisonbottle");
			break;
	
		case joaat("ammo_throwing_knives_improved"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_tomahawk"):
			hash = joaat("weapon_thrown_tomahawk");
			break;
	
		case joaat("ammo_throwing_knives_trail"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("AMMO_MOLOTOV"):
			hash = joaat("weapon_thrown_molotov");
			break;
	
		case joaat("ammo_throwing_knives_disorient"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_hatchet_double_bit"):
			hash = joaat("weapon_melee_hatchet_double_bit");
			break;
	
		case joaat("ammo_throwing_knives_drain"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_throwing_knives_poison"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		default:
			break;
	}

	if (func_17(hash, 0))
		if (bParam1)
			if (func_959(hash) || func_960(hash))
				return hash;
		else
			return hash;

	return hParam0;
}

Hash func_809(Hash hParam0, BOOL bParam1) // Position - 0x1F54B Hash - 0x68919B0 ^0x66A44A24
{
	if (!func_17(hParam0, 0))
		return 0;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return hParam0;

	!bParam1;
	return 0;
}

void func_810(Hash hParam0) // Position - 0x1F577 Hash - 0x6D90E810 ^0x1F802071
{
	Hash weaponUnlock;

	if (Global_1572887.f_14 != -1)
		return;

	if (!func_684(hParam0))
		return;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(weaponUnlock, true);
	return;
}

BOOL func_811(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0x1F5B1 Hash - 0x61DE9CAE ^0x4ADCEE54
{
	var unk;
	var unk6;
	var unk28;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	if (WEAPON::IS_WEAPON_MELEE_WEAPON(hParam0) && iParam1 > 0)
		iParam1 = 0;

	if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
	{
		unk = { func_167(hParam0, false, 1) };
	
		if (func_403(hParam0, &unk, unk.f_4, false, false))
		{
			unk6.f_9 = joaat("SLOTID_NONE");
		
			if (func_404(hParam0, &unk6, unk.f_4))
			{
				unk28 = { func_168(hParam0, unk, unk.f_4, false) };
				func_319(hParam0, &unk28, &unk, 1, -142743235, 1, false);
			}
		}
	}

	if (func_170(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_33, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
			return 0;
	
		func_812(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_961(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_33, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

BOOL func_812(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x1F6E1 Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return true;

	if (!func_692(hParam0))
		return false;

	if (!func_170(false))
		return false;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_33, hParam0, iParam1, hParam2);
	return true;
}

BOOL func_813(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x1F71C Hash - 0x452D8154 ^0x10C1EA46
{
	int num;
	var unk;
	var unk6;

	if (!func_17(hParam0, 0))
		return 0;

	if (iParam1 < 1)
		return 0;

	num = func_317(hParam0, joaat("DEFAULT"));

	if (num != 0)
		return func_962(hParam0, iParam1, hParam2);

	unk = { func_167(hParam0, false, 1) };
	unk6 = { func_168(hParam0, unk, unk.f_4, false) };
	return func_963(hParam0, &unk6, &unk, iParam1, hParam2, false);
}

BOOL func_814(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1F78B Hash - 0xF555C517 ^0x702518D6
{
	Hash weaponHash;
	var unk;
	int num;
	Hash weaponHash2;

	weaponHash = func_809(hParam0, false);

	if (WEAPON::IS_WEAPON_VALID(weaponHash))
	{
		if (func_37() == -1)
		{
			func_810(weaponHash);
		
			if (hParam1 == 1248274121)
				func_964(weaponHash);
		}
	
		if (!func_952(hParam0, &unk, 1, false, false, -1, false))
		{
			func_950(hParam0, 1, false, uParam2, hParam1);
			num = func_965(weaponHash);
		
			if (WEAPON::_IS_WEAPON_SNIPER(weaponHash))
			{
				func_811(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("weapon_fishingrod") || WEAPON::_IS_WEAPON_BINOCULARS(weaponHash))
			{
				func_811(weaponHash, 0, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (WEAPON::_IS_WEAPON_LASSO(weaponHash))
			{
				func_811(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash))
			{
				if (weaponHash == joaat("weapon_melee_knife_john") && !func_966())
					return false;
			
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(hParam0))
				{
				}
				else if (!func_967(weaponHash))
				{
					func_811(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
				}
				else
				{
					func_811(weaponHash, WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 4, bParam3, bParam4, 0, false, hParam1, false);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash))
			{
				weaponHash2 = func_968(Global_33, 2, false, true);
			
				if (func_684(weaponHash2) && !Global_26688 && weaponHash2 != weaponHash && !func_295(joaat("upgrade_offhand_holster"), 1) && bParam4)
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_33, weaponHash2);
			
				if (func_684(weaponHash2) && func_295(joaat("upgrade_offhand_holster"), 1))
					if (!func_811(weaponHash, num, bParam3, bParam4, 3, true, hParam1, false))
						return false;
				else if (!func_811(weaponHash, num, bParam3, bParam4, 0, true, hParam1, false))
					return false;
			}
			else if (!func_811(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}

	if (WEAPON::_0x9F0E1892C7F228A8(true) != 0 && hParam1 == 1248274121)
		func_164(515, true);

	return true;
}

BOOL func_815(Hash hParam0, var uParam1, Hash hParam2) // Position - 0x1F999 Hash - 0x8FE8AA03 ^0x8ABA2B4
{
	int num;
	int weaponClipSize;
	int ammo;
	int pedAmmoByType;
	Hash weaponTypeFromAmmoType;
	int num2;
	int num3;

	if (!func_692(hParam0))
		return false;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);
	pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	if (func_684(weaponTypeFromAmmoType))
		WEAPON::GET_MAX_AMMO(Global_33, &ammo, weaponTypeFromAmmoType);

	num2 = ammo - pedAmmoByType;

	if (WEAPON::IS_WEAPON_BOW(weaponTypeFromAmmoType))
		weaponClipSize = 5;
	else
		weaponClipSize = WEAPON::GET_WEAPON_CLIP_SIZE(weaponTypeFromAmmoType);

	if (*uParam1 > 0)
		num3 = *uParam1;
	else if (*uParam1 < 0)
		num3 = weaponClipSize * MISC::ABSI(*uParam1);

	if (num2 >= num3)
	{
		num = num3;
	}
	else if (num2 < num3 && num2 >= 1)
	{
		num = num2;
	}
	else
	{
		func_825(func_969(hParam0), func_267(hParam0, false), true);
		return false;
	}

	ammo == pedAmmoByType + num;

	if (num == 0)
		return false;

	if (func_170(false))
	{
		if (func_812(hParam0, num, hParam2))
		{
			*uParam1 = num;
			return true;
		}
	}
	else
	{
		return func_813(hParam0, *uParam1, hParam2);
	}

	return false;
}

struct<2> func_816(int iParam0) // Position - 0x1FA97 Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

BOOL func_817() // Position - 0x1FAA9 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

int func_818(Hash hParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0x1FAB2 Hash - 0x6AA1931B ^0x6AA1931B
{
	int num;

	if (func_37() == 0)
	{
		func_829(hParam0, 0);
		return 0;
	}

	num = func_970(hParam0, bParam6, iParam7);

	if (!bParam1)
		func_971(num, sParam4, iParam5, false);

	func_972(num, bParam1, iParam2, iParam3);
	return num;
}

void func_819(Hash hParam0) // Position - 0x1FAF9 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_820(Hash hParam0) // Position - 0x1FB01 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_821(Hash hParam0) // Position - 0x1FB09 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_822(Hash hParam0) // Position - 0x1FB11 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_823() // Position - 0x1FB19 Hash - 0xC8FE42DB ^0x507D23E9
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("sp_chal_expl_root")) < 2)
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("sp_chal_expl_root"), joaat("acw_expl_rank_01_treasure"), 1);

	return;
}

void func_824(Hash hParam0, var uParam1) // Position - 0x1FB3D Hash - 0xC6F24F1D ^0xC6F24F1D
{
	var unk;

	func_639(hParam0, uParam1, &unk);
	return;
}

void func_825(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0x1FB4F Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_396(iParam0, &num, &num2);

	if (!func_397(iParam0, num, num2, bParam2))
		return;

	if (!func_615(iParam0, 1024))
		return;

	func_398(num, num2);
	Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/] = hParam1;
	Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	return;
}

void func_826(int iParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1FBAF Hash - 0x692A8F54 ^0x2BADE95C
{
	int num;
	int num2;

	func_396(iParam0, &num, &num2);

	if (!func_397(iParam0, num, num2, bParam2))
		return;

	if (!func_615(iParam0, 1024))
		return;

	func_398(num, num2);
	Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/] = hParam1;

	if (!bParam3)
		Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	else
		Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;

	return;
}

void func_827(var uParam0) // Position - 0x1FC2A Hash - 0xE1DD92C1 ^0x7C7DCFDC
{
	switch (*uParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = joaat("consumable_cigarette_box");
			break;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
			*uParam0 = joaat("consumable_cocaine_chewing_gum");
			break;
	
		case joaat("consumable_cigarette_box_cheap_used"):
			*uParam0 = joaat("consumable_cigarette_box_cheap");
			break;
	}

	return;
}

void func_828(Hash hParam0) // Position - 0x1FC6E Hash - 0xC34F92EA ^0xC34F92EA
{
	if (func_37() != -1)
		return;

	return;
}

BOOL func_829(Hash hParam0, int iParam1) // Position - 0x1FC81 Hash - 0x10BA6DD6 ^0xD79E06BF
{
	var unk;
	var unk5;

	if (0 == hParam0)
		return false;

	unk5.f_1 = 10;
	func_800(&unk5, joaat("LOOT_TYPE_NORMAL"));
	return func_801(hParam0, &unk5, &unk, iParam1, 0);
}

void func_830(Hash hParam0) // Position - 0x1FCB5 Hash - 0xD6BB2A12 ^0xD6BB2A12
{
	switch (hParam0)
	{
		case joaat("provision_bird_feather_flight"):
			break;
	}

	return;
}

void func_831(Hash hParam0, int iParam1) // Position - 0x1FCCE Hash - 0x81B514EF ^0x2B299729
{
	char* str;

	str = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(Global_1902822.f_37);
	func_653(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", iParam1, str), "inventory_items", func_974(hParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

int func_832(Hash hParam0) // Position - 0x1FD0F Hash - 0xE1F3DDAE ^0xC8D3B326
{
	var outData;
	int num;

	if (!func_17(hParam0, 0))
		return 0;

	outData = 5;
	num = ITEMDATABASE::_0x8870895BA5ED9385(hParam0, -442898163, &outData);

	if (num > 0)
		return outData[0];

	return 0;
}

BOOL func_833(Hash hParam0) // Position - 0x1FD49 Hash - 0x5E6E1858 ^0xE905275C
{
	!func_17(hParam0, 0);

	if (func_19(hParam0, -393037696))
		return true;

	return false;
}

int func_834(Hash hParam0, int iParam1) // Position - 0x1FD6F Hash - 0x193BF536 ^0xD3271214
{
	var outData;
	int num;
	int outIndex;
	int i;

	outData = 20;
	num = 0;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(hParam0, &outData, &outIndex, 20))
	{
		for (i = 0; i < outIndex; i = i + 1)
		{
			if (outData[i /*2*/].f_1 == iParam1)
			{
				num = outData[i /*2*/];
				return num;
			}
		}
	}

	return 0;
}

char* func_835(Hash hParam0) // Position - 0x1FDBD Hash - 0xCA1D700 ^0x470B3C64
{
	Hash labelHash;

	if (!func_17(hParam0, 0))
		return "";

	labelHash = func_267(hParam0, false);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

BOOL func_836(Hash hParam0) // Position - 0x1FDF1 Hash - 0xB0090776 ^0x189C4477
{
	if (func_145(hParam0) == -126813555 || func_145(hParam0) == 1946043663)
		return true;

	return false;
}

char* func_837(Hash hParam0) // Position - 0x1FE1F Hash - 0x3E227180 ^0x42691714
{
	Hash labelHash;

	if (!func_17(hParam0, 0))
		return "";

	labelHash = func_468(hParam0);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

void func_838(const char* sParam0, const char* sParam1, Hash hParam2) // Position - 0x1FE52 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_839(Ped pedParam0, Hash hParam1, int iParam2, BOOL bParam3, Hash hParam4) // Position - 0x1FE83 Hash - 0xCC673625 ^0x5E579BC1
{
	return func_975(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0), hParam1, iParam2, bParam3, hParam4);
}

BOOL func_840(Hash hParam0) // Position - 0x1FE9D Hash - 0x6AEB7416 ^0x6AEB7416
{
	int i;
	int num;
	Hash hash;

	if (!func_976(hParam0))
		return false;

	for (i = 0; i < 77; i = i + 1)
	{
		num = func_977(i, 1);
		hash = num;
	
		if (hParam0 == hash)
			return true;
	}

	return false;
}

BOOL func_841(int iParam0, Hash hParam1, int iParam2) // Position - 0x1FEDF Hash - 0x7AC6FD0E ^0x7AC6FD0E
{
	Hash hash;
	int num;
	int num2;
	int num3;

	iParam0 = func_249(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	hash = func_978(hParam1);

	if (hash != 0)
	{
		num = func_979(hash, 1);
	
		if (num > -1)
		{
			num2 = Global_1903838.f_402[num];
		
			if (num2 > 0)
			{
				num3 = iParam2;
			
				if (num3 > num2)
					num3 = num2;
			
				if (!func_980(num3, false))
				{
				}
			
				Global_1903838.f_402[num] = Global_1903838.f_402[num] - num3;
				return true;
			}
		}
	}

	return false;
}

BOOL func_842(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1FF77 Hash - 0x682F0821 ^0x8850637E
{
	Player player;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		return bParam1;

	player = plParam0;

	if (player < 0 || player >= 32)
		return bParam1;

	return func_981(player, bParam2) >= func_982(bParam2);
}

int func_843(Ped pedParam0, Hash hParam1, int iParam2) // Position - 0x1FFB8 Hash - 0xD1389191 ^0xB4D3B5D7
{
	int i;
	Hash peltFromHorse;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return iParam2;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);

	for (i = 2; i >= 0; i = i + -1)
	{
		if (pedParam0 != PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID()) || NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam0))
		{
			peltFromHorse = PED::_GET_PELT_FROM_HORSE(pedParam0, i);
		
			if (peltFromHorse == hParam1)
			{
				PED::_CLEAR_PELT_FROM_HORSE(pedParam0, hParam1);
				iParam2 = iParam2 - 1;
			}
		}
		else
		{
			peltFromHorse = Global_1289643[PLAYER::PLAYER_ID() /*19*/].f_15[i];
		
			if (peltFromHorse == hParam1)
			{
				Global_1289643[PLAYER::PLAYER_ID() /*19*/].f_15[i] = 0;
				iParam2 = iParam2 - 1;
			}
		}
	
		if (iParam2 <= 0)
			break;
	}

	return iParam2;
}

int func_844(Ped pedParam0, Hash hParam1) // Position - 0x2006C Hash - 0x1B707959 ^0x4034662C
{
	int num;
	ItemSet itemset;
	int itemsetSize;
	int i;
	Entity entityFromItem;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_CARRYING_SOMETHING(pedParam0))
		return 0;

	num = 0;
	itemset = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(pedParam0, itemset);
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);
	i = 0;

	for (i = 0; i < itemsetSize; i = i + 1)
	{
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
	
		if (ENTITY::DOES_ENTITY_EXIST(entityFromItem) && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(entityFromItem) && hParam1 == func_511(entityFromItem))
			num = num + 1;
	}

	ITEMSET::DESTROY_ITEMSET(itemset);
	return num;
}

void func_845(Any* panParam0, Hash hParam1) // Position - 0x2010A Hash - 0xBFEF95EB ^0x45C41A3B
{
	MISC::COPY_SCRIPT_STRUCT(hParam1, panParam0, 96);
	return;
}

int func_846(Hash hParam0) // Position - 0x2011C Hash - 0x1C37ACD7 ^0x22120269
{
	int outSatchelItemSize;
	Hash hash;

	if (func_508(hParam0, &hash))
		hParam0 = hash;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SATCHEL_DATA(hParam0, &outSatchelItemSize))
		return -1;

	switch (outSatchelItemSize)
	{
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		case 3:
			return 4;
	
		case 4:
			return 8;
	
		default:
		
	}

	return -1;
}

int func_847(Hash hParam0) // Position - 0x20175 Hash - 0xB8EC44B7 ^0xD7A1073F
{
	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return joaat("at_chicken");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
			return joaat("at_toad");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
			return joaat("at_bluejay");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return joaat("at_snake_copper_north");
	
		case -2047339431:
			return 1029100628;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return joaat("at_pheasant");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return joaat("at_californiacondor");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return joaat("at_skunk");
	
		case -2012326752:
			return -557726619;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
			return joaat("at_pigeon");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_POOR"):
			return joaat("at_crayfish");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return joaat("at_cardinal");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
			return joaat("at_carolinaparakeet");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return joaat("at_pronghorn");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
			return joaat("at_rat");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
			return joaat("at_crow");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
			return joaat("at_crab");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
			return joaat("at_bullfrog");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
			return joaat("at_sparrow");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return joaat("at_rabbit");
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return joaat("at_muskrat");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return joaat("at_deer");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return joaat("at_turkey");
	
		case joaat("provision_fish_chain_pickerel_poor"):
			return joaat("at_fchainpickerel");
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return joaat("at_redfootedbooby");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return joaat("at_ram_desert");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return joaat("at_possum");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return joaat("at_coyote");
	
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
			return joaat("at_quail");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return joaat("at_cougar");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return joaat("at_sheep");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return joaat("at_owl");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return joaat("at_gator");
	
		default:
		
	}

	return joaat("small_animals");
}

void func_848(Hash hParam0, int iParam1) // Position - 0x20C86 Hash - 0xE499CB2B ^0xBF16EE8A
{
	Ped mountOwnedByPlayer;

	if (func_37() == -1)
		mountOwnedByPlayer = func_94(7);
	else
		mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());

	func_843(mountOwnedByPlayer, hParam0, iParam1);
	return;
}

BOOL func_849(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x20CB5 Hash - 0x1DFD4C48 ^0x2E953DF6
{
	var unk;
	var unk6;

	if (!func_17(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_369(false) };
	unk.f_4 = 724026534;
	unk6 = { func_168(hParam0, unk, unk.f_4, false) };
	return func_319(hParam0, &unk6, &unk, iParam1, hParam3, bParam2, false);
}

int func_850(int iParam0) // Position - 0x20D0C Hash - 0xB999A2C9 ^0xDCB3D471
{
	int num;

	if (uLocal_0.f_12)
		func_983();

	func_984(&uLocal_0);
	func_985(&uLocal_0);

	switch (iParam0)
	{
		case joaat("a_c_turkeywild_01"):
			!func_986(&uLocal_0, joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR")) || !func_986(&uLocal_0, joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT")) || !func_986(&uLocal_0, joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY")) || !func_986(&uLocal_0, joaat("PROVISION_SKINNED_CARCASS_TURKEY_PERFECT")) || !func_986(&uLocal_0, joaat("PROVISION_SKINNED_CARCASS_TURKEY_HIGH_QUALITY")) || !func_986(&uLocal_0, joaat("PROVISION_SKINNED_CARCASS_TURKEY_POOR"));
			break;
	
		case joaat("p_cs_pelt_xlarge_alligator"):
			!func_986(&uLocal_0, joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE")) || !func_986(&uLocal_0, joaat("provision_alligator_skin")) || !func_986(&uLocal_0, joaat("PROVISION_ALLIGATOR_SKIN_POOR"));
			break;
	
		case joaat("p_cs_pelt_xlarge_buffalo"):
			!func_986(&uLocal_0, joaat("provision_buffalo_fur")) || !func_986(&uLocal_0, joaat("PROVISION_BUFFALO_FUR_POOR")) || !func_986(&uLocal_0, joaat("PROVISION_BUFFALO_FUR_PRISTINE"));
			break;
	
		case joaat("a_c_duck_01"):
			!func_986(&uLocal_0, joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT")) || !func_986(&uLocal_0, joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY")) || !func_986(&uLocal_0, joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"));
			break;
	
		case joaat("a_c_iguanadesert_01"):
			!func_986(&uLocal_0, joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY")) || !func_986(&uLocal_0, joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT")) || !func_986(&uLocal_0, joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"));
			break;
	
		case joaat("a_c_turtlesnapping_01"):
			!func_986(&uLocal_0, joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT")) || !func_986(&uLocal_0, joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY")) || !func_986(&uLocal_0, joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"));
			break;
	
		case joaat("a_c_fox_01"):
			!func_986(&uLocal_0, joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT")) || !func_986(&uLocal_0, joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY")) || !func_986(&uLocal_0, joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR")) || !func_986(&uLocal_0, joaat("PROVISION_SKINNED_CARCASS_FOX_PERFECT")) || !func_986(&uLocal_0, joaat("PROVISION_SKINNED_CARCASS_FOX_HIGH_QUALITY")) || !func_986(&uLocal_0, joaat("PROVISION_SKINNED_CARCASS_FOX_POOR"));
			break;
	
		case joaat("p_cs_pelt_xlarge_elk"):
			!func_986(&uLocal_0, joaat("PROVISION_ELK_FUR_PRISTINE")) || !func_986(&uLocal_0, joaat("provision_elk_fur")) || !func_986(&uLocal_0, joaat("PROVISION_ELK_FUR_POOR"));
			break;
	
		case joaat("a_c_deer_01"):
			!func_986(&uLocal_0, joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT")) || !func_986(&uLocal_0, joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY")) || !func_986(&uLocal_0, joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR")) || !func_986(&uLocal_0, joaat("PROVISION_SKINNED_CARCASS_DEER_PERFECT")) || !func_986(&uLocal_0, joaat("PROVISION_SKINNED_CARCASS_DEER_HIGH_QUALITY")) || !func_986(&uLocal_0, joaat("PROVISION_SKINNED_CARCASS_DEER_POOR"));
			break;
	
		case joaat("a_c_californiacondor_01"):
			!func_986(&uLocal_0, joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT")) || !func_986(&uLocal_0, joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY")) || !func_986(&uLocal_0, joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"));
			break;
	
		case joaat("a_c_pronghorn_01"):
			!func_986(&uLocal_0, joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT")) || !func_986(&uLocal_0, joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY")) || !func_986(&uLocal_0, joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR")) || !func_986(&uLocal_0, joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_PERFECT")) || !func_986(&uLocal_0, joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_HIGH_QUALITY")) || !func_986(&uLocal_0, joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_POOR"));
			break;
	}

	num = func_987(&uLocal_0);
	uLocal_0.f_12 = 1;
	return num;
}

BOOL func_851(var uParam0) // Position - 0x210AF Hash - 0xD8A98B85 ^0xCC597E95
{
	if (!func_988())
		return false;

	*uParam0 = uLocal_0.f_11;
	uParam0->f_1 = uLocal_0[*uParam0];
	uLocal_0.f_11 = uLocal_0.f_11 + 1;
	return true;
}

BOOL func_852(Hash hParam0, var uParam1, BOOL bParam2) // Position - 0x210E0 Hash - 0x5CDFE7AD ^0x2AD13018
{
	*uParam1 = 0;

	if (!func_17(hParam0, 0))
		return false;

	if (!bParam2 || func_311())
	{
		*uParam1 = func_368(hParam0, func_369(true), -2015960939, true, true, false);
		return *uParam1 > 0;
	}

	return false;
}

BOOL func_853(Hash hParam0) // Position - 0x2112A Hash - 0x97D38BF7 ^0x54ABF4F
{
	if (func_17(hParam0, 0))
	{
		if (hParam0 == -1939515319)
			return func_112(1048576);
	
		if (func_19(hParam0, -1242251796))
		{
			if (func_19(hParam0, 2060589226))
				return func_112(512);
		
			return func_112(256);
		}
		else if (func_19(hParam0, 1919582297))
		{
			return func_112(4096);
		}
		else if (func_19(hParam0, 1647670816))
		{
			return func_112(16384);
		}
		else if (func_19(hParam0, 1147021565))
		{
			if (hParam0 != -187002287 && hParam0 != -1004468971 && hParam0 != -1706054699 && hParam0 != -605086052)
				return func_112(2);
			else
				return func_112(65536);
		}
	}

	if (Global_1940085.f_12)
		return func_112(256);
	else
		return func_112(2);

	return func_112(2);
}

BOOL func_854(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0x21233 Hash - 0x9EA53184 ^0x9EA53184
{
	int num;

	if (!func_391(iParam0))
		return false;

	if (iParam0 != 2)
		return false;

	num = func_989(iParam0);
	return num >= iParam2 && num <= iParam3;
}

BOOL func_855(Any* panParam0, Hash hParam1, Any* panParam2, BOOL bParam3, int iParam4) // Position - 0x2126E Hash - 0xDB9E5F ^0x558F176F
{
	var outGuid;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_199(bParam3);

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, panParam0, hParam1, &outGuid))
		return 0;

	if (!func_621(&outGuid, panParam2, bParam3, false, iParam4))
		return 0;

	return 1;
}

int func_856(Hash hParam0) // Position - 0x212BC Hash - 0x1E74E236 ^0xF004CA87
{
	int outSatchelItemSize;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SATCHEL_DATA(hParam0, &outSatchelItemSize))
		return -1;

	return outSatchelItemSize;
}

struct<5> func_857(int iParam0) // Position - 0x212D6 Hash - 0xE091DFA ^0x699D572
{
	var unk;

	unk = { func_858(iParam0, joaat("character"), func_410(), joaat("SLOTID_NONE")) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	return unk;
}

struct<4> func_858(int iParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6) // Position - 0x21303 Hash - 0x5F68FD81 ^0xF6C5E078
{
	var outGuid;

	if (!func_17(hParam1, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, hParam1, hParam6, &outGuid);
	return outGuid;
}

void func_859(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x21330 Hash - 0xCDB37F47 ^0x7CEC3688
{
	int i;
	int j;
	int k;
	int l;
	int numberOfModifiedPrices;
	int numberOfModifiers;
	Hash key;
	int outData;
	var outData2;
	var unk13;

	if (*uParam2 < 10)
		return;
	else if (iParam3 > *uParam2 || iParam3 < 1)
		return;

	outData.f_1 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS(hParam0, &outData) || outData == 0)
		return;

	unk13 = 10;

	for (i = 0; i < iParam3; i = i + 1)
	{
		unk13[i /*2*/] = uParam2->[i /*2*/];
		unk13[i /*2*/].f_1 = 1f;
	}

	for (j = 0; j < outData; j = j + 1)
	{
		key = outData.f_1[j];
		numberOfModifiedPrices = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(key);
	
		for (k = 0; k < numberOfModifiedPrices; k = k + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(key, k) != hParam1)
			{
			}
			else
			{
				numberOfModifiers = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(key);
			
				for (l = 0; l < numberOfModifiers; l = l + 1)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(key, l, &outData2))
					{
					}
					else
					{
						for (i = 0; i < iParam3; i = i + 1)
						{
							if (unk13[i /*2*/] == outData2)
							{
								unk13[i /*2*/].f_1 = unk13[i /*2*/].f_1 + (outData2.f_1 - 1f);
								break;
							}
						}
					}
				}
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk13[i /*2*/].f_1 != 1f)
			uParam2->[i /*2*/].f_1 = BUILTIN::FLOOR((float)uParam2->[i /*2*/].f_1 * (unk13[i /*2*/].f_1 / 1f));
	}

	return;
}

int func_860(int iParam0) // Position - 0x21499 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_991(func_990(iParam0));
}

void func_861(int iParam0, var uParam1) // Position - 0x214AB Hash - 0xBF936816 ^0xD35EFA2C
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = -153135980;
			break;
	
		case 1:
			*uParam1 = 12851681;
			break;
	
		case 2:
			*uParam1 = 1386325051;
			break;
	
		case 3:
			*uParam1 = 43722464;
			break;
	
		case 4:
			*uParam1 = -581476215;
			break;
	
		case 5:
			*uParam1 = -1906982261;
			break;
	
		case 9:
			*uParam1 = -1035806543;
			break;
	
		case 10:
			*uParam1 = 1579284209;
			break;
	
		case 11:
			*uParam1 = -1172613177;
			break;
	
		case 12:
			*uParam1 = 495869290;
			break;
	
		case 13:
			*uParam1 = -1221865546;
			break;
	
		case 14:
			*uParam1 = 1357371535;
			break;
	
		case 15:
			*uParam1 = 684071069;
			break;
	
		case 16:
			*uParam1 = -1382561665;
			break;
	}

	return;
}

BOOL func_862(Hash hParam0, Hash hParam1) // Position - 0x215A8 Hash - 0xFB5CB038 ^0x83BB35B8
{
	if (!func_17(hParam0, 0))
		return false;

	if (func_466(hParam0) || func_19(hParam0, 1077060302))
		return func_992(func_499(hParam0, false), hParam1, false);

	return ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT_FROM_COST_TYPE(hParam0, hParam1) > 0;
}

int func_863(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x215F4 Hash - 0x45FFEF5A ^0x45FFEF5A
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_294(hParam0, hParam1, &unk, &num, bParam2, bParam3))
	{
		!bParam2;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == joaat("currency_cash") || unk[i /*2*/] == joaat("currency_gold_bar") || unk[i /*2*/] == joaat("character_role_token"))
			return unk[i /*2*/].f_1;
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam2;
	return 0;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_864(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x21688 Hash - 0x18E9762 ^0x852B384E
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_17(hParam0, 0))
		return false;

	*uParam3 = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT_FROM_COST_TYPE(hParam0, hParam1);

	if (*uParam3 == 0)
	{
		!bParam5;
		return false;
	}

	!bParam5;

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM(hParam0, hParam1, i, &uParam2->[i /*2*/]))
			goto 0x71;
	
		!bParam5;
	}

	if (bParam4)
		func_993(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

int func_865(int iParam0) // Position - 0x21718 Hash - 0xB8EC44B7 ^0x57E60B83
{
	switch (iParam0)
	{
		case 0:
			return joaat("st_doctor");
	
		case 1:
			return joaat("st_train_station");
	
		case 2:
			return joaat("st_post_office");
	
		case 3:
			return joaat("st_general");
	
		case 4:
			return joaat("st_fence");
	
		case 5:
			return joaat("st_horse_fence");
	
		case 6:
			return joaat("st_gunsmith");
	
		case 7:
			return joaat("st_tailor");
	
		case 8:
			return joaat("st_barber");
	
		case 9:
			return joaat("st_horse_shop");
	
		case 10:
			return joaat("st_butcher");
	
		case 11:
			return joaat("st_dynamic");
	
		case 12:
			return joaat("st_bank");
	
		case 14:
			return joaat("st_bait");
	
		case 15:
			return joaat("st_trapper");
	
		case 16:
			return joaat("st_pearson");
	
		case 17:
			return joaat("st_hotel");
	
		case 18:
			return joaat("st_photo_studio");
	
		case 19:
			return joaat("st_weapon_mod_store");
	
		case 20:
			return joaat("st_clothing");
	
		case 21:
			return joaat("st_camp_shaving");
	
		case 22:
			return joaat("st_quartermaster");
	
		case 23:
			return joaat("st_horse_trainer");
	
		case 24:
			return joaat("st_blacksmith");
	
		case 25:
			return joaat("st_bountyhunting_mp_return");
	
		case 26:
			return joaat("st_coach");
	
		case 27:
			return joaat("st_wilderness_supplies");
	
		case 28:
			return joaat("st_camp_lockbox");
	
		case 29:
			return joaat("st_camp_butchertable");
	
		case 30:
			return joaat("st_bartender");
	
		case 31:
			return joaat("st_pianist");
	
		case 32:
			return joaat("st_musician");
	
		case 33:
			return joaat("st_moonshine_still");
	
		case 34:
			return joaat("st_handheld");
	
		case 35:
			return joaat("st_honor_mp");
	
		case 36:
			return joaat("st_theater_mp");
	
		case 37:
			return joaat("st_moonshine_property");
	
		case 38:
			return joaat("st_travelling_salesman");
	
		case 39:
			return 374439621;
	
		default:
		
	}

	return 0;
}

int func_866(Ped pedParam0) // Position - 0x2194B Hash - 0x32EB82AB ^0x786A6EFC
{
	int num;
	int pedQuality;

	num = 2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return num;

	pedQuality = PED::_GET_PED_QUALITY(pedParam0);

	switch (pedQuality)
	{
		case -1:
		case 2:
			num = 2;
			break;
	
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 1;
			break;
	}

	return num;
}

int func_867(int iParam0) // Position - 0x219A1 Hash - 0xB8EC44B7 ^0x162CC37E
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_PERFECT");
	
		case -2092697195:
			return 777641606;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_PERFECT");
	
		case -2043601589:
			return 1815502722;
	
		case -2040849706:
			return -375348364;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_POOR");
	
		case -1821314478:
			return 1135507073;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_POOR");
	
		case -1638839614:
			return 213936563;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_PERFECT");
	
		case -1434083213:
			return -1671125008;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_POOR");
	
		case -1378208045:
			return 1586020612;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_HIGH_QUALITY");
	
		case -1282621313:
			return 1718756614;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_HIGH_QUALITY");
	
		case -885592109:
			return -132069363;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_HIGH_QUALITY");
	
		case -827518870:
			return -2115566177;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_POOR");
	
		case -229670230:
			return -352805801;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_HIGH_QUALITY");
	
		case -70954328:
			return 616254818;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_PERFECT");
	
		case 546758456:
			return 1491466288;
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_HIGH_QUALITY");
	
		case 1367447057:
			return -1886936864;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_POOR");
	
		case 1450608653:
			return 1892902297;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_PERFECT");
	
		case 1493601140:
			return -438328437;
	
		case 1527400190:
			return 1020297399;
	
		case 1543592331:
			return 1920759986;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_POOR");
	
		case 1705186999:
			return 897866285;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_HIGH_QUALITY");
	
		case 1758585485:
			return 1518910503;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_POOR");
	
		case 1842740532:
			return 1683741809;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_PERFECT");
	
		case 1888419655:
			return -1066678466;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_POOR");
	
		case 2004357248:
			return 403588059;
	
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_POOR");
	
		case 2014346813:
			return -101301217;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_POOR");
	
		default:
		
	}

	return 0;
}

int func_868(Player plParam0) // Position - 0x223DE Hash - 0xC91C7790 ^0xF91500D
{
	int i;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return -1;

	if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1141332.f_1091), plParam0))
		return -1;

	for (i = 0; i < 32; i = i + 1)
	{
		if (Global_1141332[i /*27*/].f_9 == plParam0 && Global_1141332[i /*27*/] != 3)
			return i;
	}

	return -1;
}

BOOL func_869(Hash hParam0, Hash hParam1) // Position - 0x22441 Hash - 0x33966A5 ^0x8C6CC565
{
	Hash categoryItemSetBuyAward;
	int awardAcquireCostCountFromCostType;
	int i;
	var unk;

	categoryItemSetBuyAward = COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(hParam1, 0);

	if (!func_23(categoryItemSetBuyAward))
		return false;

	awardAcquireCostCountFromCostType = ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_COUNT_FROM_COST_TYPE(categoryItemSetBuyAward, -489628648);
	unk = 15;

	for (i = 0; i < awardAcquireCostCountFromCostType; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_AWARD_ACQUIRE_COST(categoryItemSetBuyAward, -489628648, i, &unk[i /*2*/]))
			if (func_17(unk[i /*2*/], 0) && unk[i /*2*/] == hParam0)
				return true;
	}

	return false;
}

BOOL func_870(int iParam0) // Position - 0x224BD Hash - 0x6C22F57C ^0x1F3736DE
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_871() // Position - 0x224E0 Hash - 0xD56F3AB7 ^0x4ED7D083
{
	if (func_37() == 0)
		return MONEY::_NETWORK_GET_CASH_BALANCE();

	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_872(int iParam0) // Position - 0x224FB Hash - 0xF00685F3 ^0x39EB3A7D
{
	switch (iParam0)
	{
		case 0:
			return joaat("SLOTID_SATCHEL");
	
		case 1:
			return -1360128126;
	
		default:
		
	}

	return joaat("SLOTID_SATCHEL");
}

BOOL func_873(int iParam0) // Position - 0x2252C Hash - 0x119AB8B0 ^0x119AB8B0
{
	switch (iParam0)
	{
		case joaat("CI_TAG_FOLDER_TAXIDERMIST_ORDERS"):
		case joaat("CI_TAG_FOLDER_LETTERS"):
		case joaat("CI_TAG_FOLDER_TREASURE_MAPS"):
		case joaat("CI_TAG_FOLDER_PHOTOGRAPHS"):
		case joaat("CI_TAG_FOLDER_COLLECTOR_MAPS"):
		case joaat("CI_TAG_FOLDER_RECIPE_PAMPHLETS"):
		case joaat("CI_TAG_FOLDER_NEWSPAPER_SCRAPS"):
		case joaat("CI_TAG_FOLDER_BUSINESS_CARDS"):
		case joaat("CI_TAG_FOLDER_NEWSPAPERS"):
		case joaat("CI_TAG_FOLDER_DINOSAUR_NOTES"):
		case joaat("CI_TAG_FOLDER_ROCK_CARVING_NOTES"):
		case joaat("CI_TAG_FOLDER_BOOKS"):
		case joaat("CI_TAG_FOLDER_DRAWINGS"):
		case joaat("CI_TAG_FOLDER_BOUNTY_POSTERS"):
		case joaat("CI_TAG_FOLDER_MAPS"):
		case joaat("CI_TAG_FOLDER_NOTES"):
			return true;
	}

	if (func_994(iParam0))
		return true;

	return false;
}

BOOL func_874(int iParam0) // Position - 0x225B1 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case joaat("CI_TAG_FOLDER_KIT_WATCHES"):
			return true;
	}

	return false;
}

BOOL func_875() // Position - 0x225CF Hash - 0x77F1FEBE ^0x77F1FEBE
{
	return func_54(1);
}

BOOL func_876(int iParam0) // Position - 0x225DC Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case joaat("CI_TAG_FOLDER_GAMEY_BIRD"):
		case joaat("CI_TAG_FOLDER_BIG_GAME"):
		case joaat("CI_TAG_FOLDER_GRISTLY_MUTTON"):
		case joaat("CI_TAG_FOLDER_HERPTILE_MEAT"):
		case joaat("CI_TAG_FOLDER_SUCCULENT_FISH"):
		case joaat("CI_TAG_FOLDER_STRINGY_MEAT"):
		case joaat("CI_TAG_FOLDER_MATURE_VENISON"):
		case joaat("CI_TAG_FOLDER_GAME"):
		case joaat("CI_TAG_FOLDER_CRUSTACEAN"):
		case joaat("CI_TAG_FOLDER_FLAKEY_FISH"):
		case joaat("CI_TAG_FOLDER_PLUMP_BIRD"):
		case joaat("CI_TAG_FOLDER_PRIME_BEEF"):
		case joaat("CI_TAG_FOLDER_GRITTY_FISH"):
		case joaat("CI_TAG_FOLDER_TENDER_PORK"):
		case joaat("CI_TAG_FOLDER_EXOTIC_BIRD"):
			return true;
	}

	return false;
}

BOOL func_877(Any* panParam0) // Position - 0x2264E Hash - 0x7865E948 ^0x92258F24
{
	if (!func_995(panParam0))
		return false;

	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(panParam0);
}

BOOL func_878(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x2266A Hash - 0xF94ED236 ^0xF94ED236
{
	if (func_89(iParam2, iParam3))
		return true;

	return false;
}

void func_879(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x22682 Hash - 0x3169A239 ^0x47E831EC
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
		{
			if (Global_1292143.f_20.f_1[i /*21*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1292143.f_20.f_1[i /*21*/].f_1 = iParam1;
			}
		
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1292143.f_20.f_1[i /*21*/].f_2 = iParam2;
				Global_1292143.f_20.f_1[i /*21*/].f_3 = iParam3;
			}
		
			return;
		}
	}

	func_996(iParam0, iParam1, iParam2, iParam3);
	return;
}

BOOL func_880(int iParam0, var uParam1, Any* panParam2) // Position - 0x22720 Hash - 0xEDAACC68 ^0x7998E850
{
	if (!func_391(iParam0))
		return false;

	func_997(panParam2);

	switch (iParam0)
	{
		case 2:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 3:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_602[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 4:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_2104[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 5:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_12606[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 6:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_12908[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 7:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_15910[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 8:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_16512[iParam0.f_1 /*3*/], 3);
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_881(Any* panParam0, int iParam1) // Position - 0x2282B Hash - 0x34992178 ^0x98B18966
{
	*panParam0 = Global_1245174.f_9818;
	panParam0->f_2 = 423895568;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_IS_FILE_LOADED(*panParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_882() // Position - 0x22862 Hash - 0x33EB0DBC ^0xEC692AA0
{
	int numChildren;
	int num;

	numChildren = 0;
	num = Global_1245174.f_9818;
	num.f_2 = -1041770777;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num))
		numChildren = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(num, num.f_1);

	return numChildren;
}

int func_883() // Position - 0x2289A Hash - 0x1B9090CC ^0x1B9090CC
{
	return Global_1110244.f_3667.f_938;
}

int func_884(int iParam0, int iParam1, var uParam2) // Position - 0x228AC Hash - 0x4D6E9A17 ^0x4D6E9A17
{
	int num;

	if (iParam0 > iParam1)
		return -1;

	num = (iParam0 + iParam1) / 2;

	if (*uParam2 < Global_1110244.f_3667.f_729[num /*2*/])
		return func_884(iParam0, num - 1, uParam2);

	if (*uParam2 > Global_1110244.f_3667.f_729[num /*2*/])
		return func_884(num + 1, iParam1, uParam2);

	return num;
}

int func_885(int iParam0) // Position - 0x22916 Hash - 0xC69036C ^0xCCA4B427
{
	return Global_1110244.f_3667.f_729[iParam0 /*2*/].f_1;
}

BOOL func_886(int iParam0) // Position - 0x2292E Hash - 0x7EE3A984 ^0x7EE3A984
{
	return iParam0 > -1 && iParam0 < 83;
}

BOOL func_887(Any* panParam0) // Position - 0x22944 Hash - 0x5AEEE194 ^0x97DC092A
{
	int fileHandle;
	var src;

	fileHandle = func_998();

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(fileHandle))
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(fileHandle))
		return false;

	MISC::COPY_SCRIPT_STRUCT(panParam0, &src, 5);
	*panParam0 = fileHandle;
	return true;
}

BOOL func_888(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int* piParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0x2297D Hash - 0x9BC890AF ^0xDF6320E0
{
	uParam0.f_2 = iParam6;
	uParam0.f_3 = iParam7;
	uParam0.f_4 = iParam8;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(piParam5, &uParam0))
		return false;

	return true;
}

struct<8> func_889(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x229A8 Hash - 0x481BF462 ^0x481BF462
{
	return func_999(uParam0, 52, 1);
}

int func_890(Hash hParam0) // Position - 0x229BB Hash - 0x3EE73043 ^0x3EE73043
{
	switch (hParam0)
	{
		case joaat("document_abandoned_loot_map_intro_tumbleweed_2"):
		case joaat("document_abandoned_loot_map_intro_tumbleweed_1"):
		case joaat("document_abandoned_loot_map_intro_tumbleweed_4"):
		case joaat("document_abandoned_loot_map_intro_tumbleweed_3"):
		case joaat("document_abandoned_loot_map_intro_tumbleweed_5"):
			return 3;
	
		case joaat("document_abandoned_loot_map_intro_valentine_5"):
		case joaat("document_abandoned_loot_map_intro_valentine_2"):
		case joaat("document_abandoned_loot_map_intro_valentine_1"):
		case joaat("document_abandoned_loot_map_intro_valentine_4"):
		case joaat("document_abandoned_loot_map_intro_valentine_3"):
			return 1;
	
		case joaat("document_abandoned_loot_map_intro_blackwater_5"):
		case joaat("document_abandoned_loot_map_intro_blackwater_2"):
		case joaat("document_abandoned_loot_map_intro_blackwater_4"):
		case joaat("document_abandoned_loot_map_intro_blackwater_3"):
		case joaat("document_abandoned_loot_map_intro_blackwater_1"):
			return 2;
	
		case joaat("document_abandoned_loot_map_intro_rhodes_2"):
		case joaat("document_abandoned_loot_map_intro_rhodes_3"):
		case joaat("document_abandoned_loot_map_intro_rhodes_1"):
		case joaat("document_abandoned_loot_map_intro_rhodes_4"):
		case joaat("document_abandoned_loot_map_intro_rhodes_5"):
			return 0;
	
		default:
		
	}

	return -1;
}

BOOL func_891(int iParam0) // Position - 0x22A54 Hash - 0xE139661B ^0xE139661B
{
	if (!func_485(iParam0))
		return false;

	return func_486(iParam0, 2, true);
}

int func_892(BOOL bParam0, Hash hParam1) // Position - 0x22A72 Hash - 0x5F8C62F0 ^0x14871F2
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return 0;

	if (!Global_1102813.f_16)
		return 0;

	if (!func_1000())
		return 0;

	if (!func_383())
		return 0;

	Global_0 = hParam1;

	if (bParam0)
		func_894(&Global_0, 8);

	func_894(&Global_0, 1);
	return 1;
}

void func_893(int iParam0) // Position - 0x22AC8 Hash - 0x3B9D9F25 ^0x3B9D9F25
{
	switch (iParam0)
	{
		case 2:
			func_164(243, false);
			break;
	
		case 3:
			func_164(244, false);
			break;
	
		case 4:
			func_164(263, false);
			break;
	
		case 5:
			func_164(239, false);
			break;
	
		case 6:
			func_164(259, false);
			break;
	
		case 7:
			func_164(256, false);
			break;
	
		case 8:
			func_164(264, false);
			break;
	
		case 11:
			break;
	
		case 12:
			func_164(267, false);
			break;
	
		case 13:
			func_164(250, false);
			break;
	
		case 15:
			func_164(246, false);
			break;
	
		case 16:
			func_164(240, false);
			break;
	
		case 18:
			func_164(258, false);
			break;
	
		case 19:
			func_164(251, false);
			break;
	
		case 20:
			func_164(252, false);
			break;
	
		case 21:
			func_164(257, false);
			break;
	
		case 24:
			func_164(247, false);
			break;
	
		case 27:
			func_164(249, false);
			break;
	
		case 28:
			func_164(268, false);
			break;
	
		case 29:
			func_164(265, false);
			break;
	
		case 30:
			func_164(260, false);
			break;
	
		case 32:
			func_164(266, false);
			break;
	
		case 34:
			func_164(241, false);
			break;
	
		case 35:
			func_164(253, false);
			break;
	
		case 38:
			func_164(248, false);
			break;
	
		case 39:
			func_164(254, false);
			break;
	
		case 49:
			func_164(261, false);
			break;
	
		case 50:
			func_164(255, false);
			break;
	
		case 51:
			func_164(269, false);
			break;
	
		case 52:
			func_164(242, false);
			break;
	
		case 53:
			func_164(245, false);
			break;
	}

	return;
}

void func_894(Hash hParam0, int iParam1) // Position - 0x22CCE Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_895() // Position - 0x22CE1 Hash - 0x65674CA9 ^0xC0D8F466
{
	return true;
}

int func_896(int iParam0) // Position - 0x22D00 Hash - 0x262796A6 ^0x32C91F91
{
	if (iParam0 == 2)
		iParam0 = func_1001(1);

	switch (iParam0)
	{
		case 0:
			return Global_1956875.f_1546;
	
		case 1:
			return Global_1956875.f_1565.f_136;
	
		default:
		
	}

	return -1;
}

void func_897(float fParam0, Ped pedParam1) // Position - 0x22D40 Hash - 0x81B8D237 ^0xD25A4B21
{
	if (fParam0 == 0f)
		return;

	if (pedParam1 == 0)
		pedParam1 = Global_1295666.f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	ENTITY::_CHANGE_ENTITY_HEALTH(pedParam1, fParam0, 0, 0);
	return;
}

int func_898(int iParam0) // Position - 0x22D84 Hash - 0x3229E1B0 ^0x75954C0C
{
	if (iParam0 == 2)
		iParam0 = func_1001(1);

	switch (iParam0)
	{
		case 0:
			return Global_1956875.f_1546.f_1;
	
		case 1:
			return Global_1956875.f_1565.f_136.f_1;
	
		default:
		
	}

	return -1;
}

void func_899(float fParam0, BOOL bParam1, BOOL bParam2) // Position - 0x22DC8 Hash - 0x5072E518 ^0x6DDAEE0A
{
	Player player;
	Ped ped;
	float playerSpecialAbilityMultiplier;

	player = PLAYER::PLAYER_ID();

	if (fParam0 > 0f && func_1002(player))
		return;

	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(player) && fParam0 > 0f && !bParam2)
		return;

	if (fParam0 == 0f)
		return;

	playerSpecialAbilityMultiplier = PLAYER::_GET_PLAYER_SPECIAL_ABILITY_MULTIPLIER(player);

	if (fParam0 < 0f && bParam1 == true)
		bParam1 = false;

	if (!bParam1)
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(player, 1f);

	if (fParam0 > 0f)
		PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(player, fParam0, 0, 0, 1);
	else
		PLAYER::_SPECIAL_ABILITY_DRAIN_BY_AMOUNT(player, fParam0, 0);

	if (!bParam1)
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(player, playerSpecialAbilityMultiplier);

	return;
}

int func_900(int iParam0) // Position - 0x22E79 Hash - 0x3229E1B0 ^0x4F226FB4
{
	if (iParam0 == 2)
		iParam0 = func_1001(1);

	switch (iParam0)
	{
		case 0:
			return Global_1956875.f_1546.f_2;
	
		case 1:
			return Global_1956875.f_1565.f_136.f_2;
	
		default:
		
	}

	return -1;
}

void func_901(float fParam0, Ped pedParam1) // Position - 0x22EBD Hash - 0xFCEEE112 ^0xFADF1B0E
{
	if (fParam0 == 0f)
		return;

	if (pedParam1 == 0)
		pedParam1 = Global_1295666.f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	PED::_CHANGE_PED_STAMINA(pedParam1, fParam0);
	return;
}

float func_902(int iParam0, float fParam1, BOOL bParam2) // Position - 0x22EFF Hash - 0xFB55A421 ^0xFB55A421
{
	int num;
	int num2;

	num = func_1003();
	func_1004(&num, 0, 0, 0, 1, 0, 0);
	num2 = func_1005(iParam0, 2);

	if (func_1007(num, func_1006(iParam0, 2), true))
	{
		func_1008(iParam0, 0, 2);
		num2 = 0;
	}

	if (num2 >= 2)
	{
		func_164(103, bParam2);
		return 0f;
	}

	func_1009(iParam0, func_1003(), 2);
	func_1008(iParam0, num2 + 1, 2);
	return fParam1;
}

float func_903(int iParam0, int iParam1) // Position - 0x22F68 Hash - 0x76523351 ^0x92907141
{
	if (iParam1 == 2)
		iParam1 = func_1001(2);

	switch (iParam1)
	{
		case 0:
			return Global_1956875.f_1431.f_6[iParam0 /*3*/];
	
		case 1:
			return Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/];
	
		default:
		
	}

	return -1f;
}

int func_904(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x22FB4 Hash - 0xF5F03980 ^0xF9E23295
{
	Ped ped;

	if (iParam5 == 2)
		iParam5 = func_1001(2);

	ped = PLAYER::PLAYER_PED_ID();

	if (func_1010(ped, iParam0, fParam1))
	{
		if (bParam2)
			if (fParam1 >= 100f)
				AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
			else
				AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
	
		if (bParam3)
			func_1011(iParam0, 7000, iParam5);
	
		func_1012(ped, iParam0, fParam1);
		func_1013(iParam0, fParam1, bParam4, iParam5);
	}

	return 1;
}

int func_905(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0x23032 Hash - 0xFF5C68E3 ^0x564C72DE
{
	char* effectName;
	Ped ped;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam1 == -1f)
		if (func_1014(iParam0))
			fParam1 = 30f;
		else
			fParam1 = 30f;
	else if (fParam1 <= 0f)
		return 0;

	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				effectName = func_1015(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_735(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/] = fParam1;
			break;
	
		case 1:
			if (bParam2)
			{
				effectName = func_1015(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_1016(joaat("STATUS_EFFECT__TRACKING"));
			func_737(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/] = fParam1;
			break;
	
		case 2:
			if (bParam2)
			{
				effectName = func_1015(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_736(-1, false);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/] = fParam1;
			break;
	
		case 18:
			func_1017(1, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/].f_1 = fParam1;
			break;
	
		case 19:
			func_1016(joaat("STATUS_EFFECT__POISON"));
			func_1017(0, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/].f_1 = fParam1;
			break;
	
		case 20:
			func_1017(2, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/].f_1 = fParam1;
			break;
	
		default:
			return 0;
	}

	return 1;
}

BOOL func_906() // Position - 0x231E8 Hash - 0x57305A7F ^0x41946F5D
{
	if (Global_1956875.f_1431.f_107 == -15)
		return true;

	return func_1018(Global_1956875.f_1431.f_107, false);
}

void func_907(float fParam0, int iParam1) // Position - 0x23211 Hash - 0x6AFE3513 ^0x6AFE3513
{
	float num;
	int num2;
	int num3;

	num = func_1019(13, 2);
	num2 = func_1020(num);
	num = num + fParam0;
	num = func_1021(num, 0f, 100f);
	num3 = func_1020(num);

	if (num2 != num3)
	{
		Global_1956875.f_1431.f_107 = func_1003();
		func_1022(&(Global_1956875.f_1431.f_107), 0, 0, 1, 0, 0, 0, false);
	}

	func_1023(13, num, 2);
	Global_1956875.f_1431.f_99 = iParam1;
	return;
}

Hash func_908(Hash hParam0) // Position - 0x23284 Hash - 0xADA620BC ^0xEF3A3B3A
{
	Hash outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_360(outSlotId);
}

Hash func_909() // Position - 0x232A7 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1953292.f_1676;
}

int func_910(BOOL bParam0) // Position - 0x232B6 Hash - 0x4F98C57 ^0x1385EECF
{
	var unk;
	int num;
	var unk15;
	Hash hash;
	int num2;
	int num3;
	var unk19;

	unk.f_9 = joaat("SLOTID_NONE");
	num = 0;
	unk15 = { func_168(joaat("WARDROBE"), func_369(true), joaat("SLOTID_WARDROBE"), true) };
	hash = func_597(unk15, 552979403, true, -1);

	if (hash != 0)
	{
		if (hash == joaat("clothing_mp_female_player_character"))
			num = joaat("MPC_PLAYER_TYPE_MP_FEMALE");
		else if (hash == joaat("clothing_mp_male_player_character"))
			num = joaat("MPC_PLAYER_TYPE_MP_MALE");
	
		return num;
	}

	unk19 = { func_444(0, joaat("SLOTID_NONE"), 552979403, joaat("SLOTID_NONE"), 0, 0, 0) };

	if (func_445(&unk19, &num2, &num3, true))
	{
		if (num3 > 0 && func_239(&unk, 0, num2, num3))
		{
			if (unk.f_4 == joaat("clothing_mp_female_player_character"))
			{
				num = joaat("MPC_PLAYER_TYPE_MP_FEMALE");
			}
			else if (unk.f_4 == joaat("clothing_mp_male_player_character"))
			{
				num = joaat("MPC_PLAYER_TYPE_MP_MALE");
			}
			else
			{
				func_253(num2);
				return 0;
			}
		
			if (bParam0)
				func_169(unk, true, false);
		
			func_253(num2);
			return num;
		}
	
		func_253(num2);
	}

	return 0;
}

Hash func_911(int iParam0) // Position - 0x233C3 Hash - 0xB8EC44B7 ^0x7FF5C9C2
{
	switch (iParam0)
	{
		case 1:
			return 217155793;
	
		case 2:
			return 97391779;
	
		case 3:
			return -808817534;
	
		case 4:
			return 1270922359;
	
		case 5:
			return -2011879201;
	
		case 6:
			return -1063340820;
	
		case 7:
			return 2127262701;
	
		case 8:
			return -1323870201;
	
		case 9:
			return 1632140501;
	
		case 10:
			return 967218463;
	
		default:
		
	}

	return 0;
}

BOOL func_912(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x23460 Hash - 0x88E96348 ^0x46451541
{
	int i;
	BOOL flag;

	if (*iParam1 <= 0)
	{
		*iParam1 = 0;
		return false;
	}

	if (Global_1953292.f_3352.f_26 <= 1)
	{
		Global_1953292.f_3352.f_26 = 0;
		*iParam1 = 0;
		Global_1953292.f_3352[0] = 0;
		return true;
	}

	for (i = 0; i <= Global_1953292.f_3352.f_26 - 1; i = i + 1)
	{
		if (hParam0 == Global_1953292.f_3352[i])
			flag = true;
	
		if (flag && i < Global_1953292.f_3352.f_26 - 1)
			Global_1953292.f_3352[i] = Global_1953292.f_3352[i + 1];
	}

	if (flag)
	{
		Global_1953292.f_3352.f_26 = Global_1953292.f_3352.f_26 - 1;
		*iParam1 = *iParam1 - 1;
		Global_1953292.f_3352[Global_1953292.f_3352.f_26] = 0;
		func_749(hParam0, true, bParam2);
	}

	return flag;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_913(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, int iParam6, BOOL bParam7, BOOL bParam8, int iParam9) // Position - 0x23540 Hash - 0xF5A6EBD3 ^0xB19C08FF
{
	Hash hash;
	int num;
	BOOL flag;
	Hash hash2;
	int num2;
	int num3;

	num3 = 0;
	num2 = func_919(iParam6);
	num2.f_1 = hParam1;
	num2.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&num2);

	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&num2))
		return false;

	DATAFILE::_PARSEDDATA_GET_BOOL(&flag, &num2, -1516819610);
	DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, 2049745650);
	*uParam2 = flag;

	if (!flag && !bParam3)
		func_1025(hParam0, func_1024(hash), true, true, bParam7);

	if (flag)
	{
		if (iParam9 != 8)
			func_591(-1);
	
		if (DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, -1212855483))
			num3 = func_1024(hash);
	}

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&num2))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, 1409451727))
		{
		}
		else
		{
			hash2 = hash;
			num = func_361(hash2, 1);
		
			if (num < 0 || num > 39)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, joaat("Component")))
			{
			}
			else
			{
				hParam0->f_1[num /*3*/] = hash;
			
				if (flag)
					func_1026(hash2, 16, 6);
			
				if (bParam5)
					if (!DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, 1441384))
						hParam0->f_1[num /*3*/].f_1 = joaat("base");
					else
						goto 0x16A;
			
				if (!DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, 1194786549))
					if (func_1027(hash2) && func_778(hParam0->f_1[num /*3*/], hash2, &hash))
						hParam0->f_1[num /*3*/].f_1 = hash;
				else
					hParam0->f_1[num /*3*/].f_1 = hash;
			}
		}
	}

	num = 16;

	if (flag)
	{
		if (!bParam8)
			func_1029(hParam0, num3, func_1028(hParam1) != 0, iParam9);
	}
	else if (func_584() == joaat("MPC_PLAYER_TYPE_MP_FEMALE") && hParam0->f_1[num /*3*/] == Global_1953292.f_83[num /*12*/] && func_1028(hParam0->f_1[34 /*3*/]) == 0 && !func_354(32) && !func_354(64))
	{
		hParam0->f_1[num /*3*/] = func_925(-1293064293, 0);
		hParam0->f_1[num /*3*/].f_1 = joaat("base");
		func_594(hParam0, hParam0->f_1[num /*3*/], num, false, iParam9);
	}

	if (bParam4)
		*hParam0 = hParam1;

	return true;
}

void func_914(Any* panParam0, int iParam1, int iParam2, int iParam3, int iParam4, Hash hParam5) // Position - 0x2376F Hash - 0x2E9AB941 ^0x44CE1BA8
{
	*panParam0 = iParam1;
	panParam0->f_1 = iParam2;
	panParam0->f_2 = iParam3;
	panParam0->f_3 = iParam4;
	panParam0->f_4 = hParam5;
	panParam0->f_6 = 0;
	panParam0->f_5 = 0;
	return;
}

BOOL func_915(var uParam0, int iParam1) // Position - 0x2379E Hash - 0x718DD1EF ^0xA172DFD1
{
	return uParam0->f_1 && iParam1 != false;
}

void func_916(var uParam0, int iParam1, int iParam2) // Position - 0x237AF Hash - 0xDEDED6D0 ^0xB4D62998
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_917(int iParam0, int iParam1) // Position - 0x237C2 Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_918(int iParam0, int iParam1) // Position - 0x237D3 Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

int func_919(int iParam0) // Position - 0x237E6 Hash - 0x4840ACEF ^0x81C8BA00
{
	if (iParam0 == 0)
		iParam0 = func_584();

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		return -1806335803;
	else if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		return -971050805;

	return 0;
}

void func_920(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x23822 Hash - 0x3F8569B2 ^0x210C3509
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	num = 12;
	hash = hParam0->f_1[num /*3*/];

	if (func_19(hash, 160827531) || func_145(hash) == 81053684)
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam2);
	}

	return;
}

void func_921(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x23885 Hash - 0x5D9C216F ^0x7A27103D
{
	int num;

	if (bParam1)
		return;

	num = 11;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_19(hParam0->f_1[num /*3*/], -93469181))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam2);
	}

	return;
}

void func_922(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x238EA Hash - 0xD866F2E0 ^0x10CD7BBC
{
	int num;

	if (bParam1)
		return;

	num = 10;

	if (-525676072 == func_145(hParam0->f_1[num /*3*/]))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam2);
	}

	return;
}

BOOL func_923(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x23937 Hash - 0x1514A216 ^0x8B5540D1
{
	Hash hash;

	hash = func_145(hParam0);

	if (iParam2 == 0)
		return hash == 1759215194 || hash == 344283346;

	return !bParam1 && hash == -1740828670 || hash == 344283346;
}

BOOL func_924(int iParam0) // Position - 0x23984 Hash - 0xB39D195A ^0x26136171
{
	return Global_17418.f_55.f_664.f_1734 && iParam0 != false;
}

Hash func_925(Hash hParam0, int iParam1) // Position - 0x2399C Hash - 0xD36D7E4E ^0x5FDE473
{
	int num;
	int num2;
	int num3;
	var unk;

	num3 = 0;
	unk = { func_444(0, joaat("SLOTID_NONE"), hParam0, joaat("SLOTID_NONE"), 0, 0, 0) };

	if (func_445(&unk, &num, &num2, true))
	{
		if (num2 > 0)
			num3 = func_1030(num, num2, iParam1);
	
		func_253(num);
	}

	return num3;
}

void func_926(Hash hParam0, int iParam1) // Position - 0x239E9 Hash - 0x91DC8CCD ^0x83C6C8B8
{
	int num;
	BOOL flag;

	num = 16;
	flag = false;

	if (func_584() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		flag = true;

	func_592(num, iParam1);

	if (hParam0->f_1[num /*3*/].f_1 == -1539589426 || hParam0->f_1[num /*3*/].f_1 == 1334603721)
		return;

	if (hParam0->f_1[num /*3*/].f_1 == 0 || hParam0->f_1[num /*3*/].f_1 == joaat("base"))
	{
		if (func_777(hParam0->f_1[num /*3*/], flag, -1539589426) >= 0)
		{
			hParam0->f_1[num /*3*/].f_1 = -1539589426;
			return;
		}
	}

	if (func_777(hParam0->f_1[num /*3*/], flag, 1334603721) >= 0)
		hParam0->f_1[num /*3*/].f_1 = 1334603721;

	return;
}

void func_927(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x23AAF Hash - 0x40A062A0 ^0xFAF44654
{
	int num;

	if (bParam1)
		return;

	num = 12;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_19(hParam2, -1527414429) && !func_19(hParam0->f_1[num /*3*/], -1303648999))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	num = 16;

	if (hParam0->f_1[num /*3*/].f_1 == 1530758430 || hParam0->f_1[num /*3*/].f_1 == 1334603721 && func_19(hParam2, -985549034))
	{
		if (hParam0->f_1[num /*3*/].f_1 == 1530758430)
		{
			hParam0->f_1[num /*3*/].f_1 = joaat("base");
			func_592(num, iParam3);
		}
		else if (hParam0->f_1[num /*3*/].f_1 == 1334603721)
		{
			hParam0->f_1[num /*3*/].f_1 = -1539589426;
			func_592(num, iParam3);
		}
	}

	return;
}

void func_928(Hash hParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0x23BB7 Hash - 0xACD9DBFF ^0x9A6E665B
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	num = 17;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	if (hParam0->f_1[iParam2 /*3*/].f_1 != -2081918609)
	{
		num = 34;
		hash = hParam0->f_1[num /*3*/];
	
		if (func_19(hash, 1583165364))
		{
			hParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
			func_592(iParam2, iParam3);
		}
		else
		{
			num = 35;
			hash = hParam0->f_1[num /*3*/];
		
			if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && 1769055947 == func_145(hash))
			{
				hParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
				func_592(iParam2, iParam3);
			}
		}
	}

	return;
}

void func_929(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x23C99 Hash - 0xCE5028CB ^0xB60DB9E1
{
	int num;
	Hash hash;

	num = 16;
	func_592(num, iParam3);
	num = 18;
	hash = hParam0->f_1[num /*3*/];

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		if (func_19(hParam2, 1889502862) && func_145(hash) == 698653232)
		{
			hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			hParam0->f_1[num /*3*/].f_1 = 0;
			func_592(num, iParam3);
		}
		else if (func_19(hParam2, 449467137) && func_145(hash) == 912453393)
		{
			hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			hParam0->f_1[num /*3*/].f_1 = 0;
			func_592(num, iParam3);
		}
		else
		{
			func_592(num, iParam3);
		}
	}

	if (bParam1)
	{
		num = 21;
	
		if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		{
			func_592(num, iParam3);
			func_770(hParam0, false, hParam0->f_1[num /*3*/], iParam3);
		}
	
		num = 17;
	
		if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && hParam0->f_1[num /*3*/].f_1 == 289238755)
		{
			hParam0->f_1[num /*3*/].f_1 = 0;
			func_592(num, iParam3);
		}
	
		return;
	}

	num = 29;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_19(hParam2, 1126863852))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	num = 16;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_19(hParam2, -985549034))
		if (hParam0->f_1[num /*3*/].f_1 == 1530758430)
			hParam0->f_1[num /*3*/].f_1 = joaat("base");
		else if (hParam0->f_1[num /*3*/].f_1 == 1334603721)
			hParam0->f_1[num /*3*/].f_1 = -1539589426;

	num = 12;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_19(hParam2, -1527414429) && !func_19(hParam0->f_1[num /*3*/], -1303648999))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	return;
}

void func_930(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x23F06 Hash - 0xECEB911D ^0x9A8DDBFB
{
	int num;

	num = 18;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_592(num, iParam3);

	if (bParam1)
		return;

	num = 12;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && !func_19(hParam0->f_1[num /*3*/], -1303648999))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	num = 13;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	num = 25;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_19(hParam2, 675650051))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	return;
}

BOOL func_931(int iParam0) // Position - 0x2401C Hash - 0xF59F0C09 ^0x24088083
{
	return Global_1953292.f_1676.f_1[func_361(iParam0, 1) /*3*/] != Global_1953292.f_83[func_361(iParam0, 1) /*12*/];
}

void func_932(Hash hParam0, int iParam1) // Position - 0x24046 Hash - 0xCA6DCF0B ^0x61DC2CB2
{
	int num;

	num = 17;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam1);
	}

	num = 20;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_592(num, iParam1);

	num = 36;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		if (func_19(hParam0->f_1[num /*3*/], -928740153))
		{
			hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			hParam0->f_1[num /*3*/].f_1 = 0;
		}
		else
		{
			hParam0->f_1[num /*3*/].f_1 = joaat("base");
		}
	
		func_592(num, iParam1);
	}

	return;
}

void func_933(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x24111 Hash - 0xDFA7EB0B ^0x40890D8A
{
	int num;
	Hash hash;
	BOOL flag;
	BOOL flag2;

	if (bParam1)
		return;

	flag = false;
	flag2 = false;

	if (func_584() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		flag2 = true;

	if (func_584() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		num = 16;
	
		if (hParam0->f_1[num /*3*/] == Global_1953292.f_83[num /*12*/] && func_145(hParam0->f_1[18 /*3*/]) != 912453393)
		{
			hParam0->f_1[num /*3*/] = func_925(Global_1953292.f_83[num /*12*/].f_9, 0);
			hParam0->f_1[num /*3*/].f_1 = 0;
			func_592(num, iParam3);
		}
	}

	num = 36;
	func_592(num, iParam3);

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_19(hParam2, -1473580422))
	{
		hash = hParam0->f_1[num /*3*/];
	
		if (func_19(hash, 1469783911))
		{
			hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			hParam0->f_1[num /*3*/].f_1 = 0;
		}
		else if (func_777(hParam0->f_1[num /*3*/], flag2, -2081918609) != -1)
		{
			hParam0->f_1[num /*3*/].f_1 = -2081918609;
		}
		else
		{
			hParam0->f_1[num /*3*/].f_1 = joaat("base");
		}
	}

	num = 17;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && hParam0->f_1[num /*3*/].f_1 == 289238755)
	{
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	num = 18;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hash = hParam0->f_1[num /*3*/];
	
		if (func_145(hash) == 912453393)
		{
			flag = true;
		
			if (func_19(hParam2, 1583165364))
			{
				hParam0->f_1[num /*3*/].f_1 = -2081918609;
				func_592(num, iParam3);
			}
		}
	}

	num = 20;
	hash = hParam0->f_1[num /*3*/];

	if (hash != Global_1953292.f_83[num /*12*/])
		if (func_145(hash) == 1868067663 && func_19(hParam2, -1016441646))
			func_1031(hParam0, num, iParam3);
		else if (flag)
			func_592(num, iParam3);

	num = 34;

	if (1759215194 == func_145(hParam0->f_1[num /*3*/]))
		func_592(16, iParam3);

	num = 35;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_19(hParam2, -1650340550))
	{
		hash = hParam0->f_1[num /*3*/];
	
		if (func_145(hash) == 1769055947)
		{
			hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			hParam0->f_1[num /*3*/].f_1 = 0;
			func_592(num, iParam3);
		}
	}

	return;
}

void func_934(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x243B9 Hash - 0xB469B457 ^0x8B431766
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	if (func_584() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		num = 16;
	
		if (hParam0->f_1[num /*3*/] == Global_1953292.f_83[num /*12*/] && func_145(hParam0->f_1[18 /*3*/]) != 912453393)
		{
			hParam0->f_1[num /*3*/] = func_925(Global_1953292.f_83[num /*12*/].f_9, 0);
			hParam0->f_1[num /*3*/].f_1 = 0;
			func_592(num, iParam3);
		}
	}

	num = 36;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		if (func_19(hParam0->f_1[num /*3*/], -2093434733))
			func_940(hParam0, iParam3, true, false);
		else if (func_19(hParam2, 1718965018))
			hParam0->f_1[num /*3*/].f_1 = joaat("base");

	func_592(num, iParam3);
	num = 35;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	num = 20;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hash = hParam0->f_1[num /*3*/];
	
		if (func_19(hash, 1090938458) && func_19(hParam2, 475297062))
			func_1031(hParam0, num, iParam3);
	}

	return;
}

void func_935(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x2451A Hash - 0xBF53216D ^0xF222A515
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	func_592(36, iParam2);
	num = 18;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam2);
	}

	if (func_584() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		num = 16;
	
		if (hParam0->f_1[num /*3*/] == Global_1953292.f_83[num /*12*/])
		{
			num = 16;
			hParam0->f_1[num /*3*/] = func_925(Global_1953292.f_83[num /*12*/].f_9, 0);
			hParam0->f_1[num /*3*/].f_1 = 0;
			func_592(num, iParam2);
		}
	}

	num = 20;
	hash = hParam0->f_1[num /*3*/];

	if (hash != Global_1953292.f_83[num /*12*/] && func_19(hash, 353024991))
		func_1031(hParam0, num, iParam2);

	num = 17;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam2);
	}

	num = 35;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && 1769055947 == func_145(hParam0->f_1[num /*3*/]))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam2);
	}

	num = 29;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam2);
	}

	return;
}

void func_936(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x246CF Hash - 0xA299C777 ^0x2B6FCFBA
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	num = 20;
	hash = hParam0->f_1[num /*3*/];

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_145(hash) == 294388917)
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	num = 18;
	hash = hParam0->f_1[num /*3*/];

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		if (func_145(hash) == 912453393)
		{
			if (hParam0->f_1[num /*3*/].f_1 != joaat("base"))
			{
				hParam0->f_1[num /*3*/].f_1 = joaat("base");
				func_592(num, iParam3);
			}
		}
		else
		{
			hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			hParam0->f_1[num /*3*/].f_1 = 0;
			func_592(num, iParam3);
		}
	}

	num = 17;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	num = 16;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	num = 29;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	num = 35;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	num = 36;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		if (func_19(hParam0->f_1[num /*3*/], -2093434733))
			func_940(hParam0, iParam3, true, false);
		else if (func_19(hParam2, 1718965018))
			hParam0->f_1[num /*3*/].f_1 = joaat("base");

	return;
}

void func_937(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x2490A Hash - 0x1E46B0A9 ^0x1BAB244E
{
	int num;

	if (bParam1)
		return;

	num = 20;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_1031(hParam0, num, iParam2);

	num = 21;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam2);
	}

	num = 18;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam2);
	}

	num = 17;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam2);
	}

	num = 16;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam2);
	}

	num = 29;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam2);
	}

	num = 35;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam2);
	}

	num = 36;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		if (func_19(hParam0->f_1[num /*3*/], -2093434733))
		{
			func_940(hParam0, iParam2, true, false);
		}
		else
		{
			hParam0->f_1[num /*3*/].f_1 = joaat("base");
			func_592(num, iParam2);
		}
	}

	return;
}

void func_938(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x24B02 Hash - 0x5B6170DC ^0xD9A8FB92
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	num = 34;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/].f_1 = joaat("base");
		func_592(num, iParam3);
	}

	num = 36;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/].f_1 = -2081918609;
		func_592(num, iParam3);
	}

	num = 37;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_19(hParam2, -1278198125))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	num = 18;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hash = hParam0->f_1[num /*3*/];
	
		if (912453393 == func_145(hash) && hParam0->f_1[num /*3*/].f_1 != -2081918609)
		{
			hParam0->f_1[num /*3*/].f_1 = -2081918609;
			func_592(num, iParam3);
		}
	}

	return;
}

void func_939(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x24C1F Hash - 0x24AAAC6C ^0x8A4DF257
{
	int num;

	if (bParam1)
		return;

	num = 37;

	if (func_19(hParam2, -1278198125) && hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam3);
	}

	return;
}

void func_940(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x24C7E Hash - 0x5D4D0F7B ^0xD4757168
{
	int num;

	num = 36;

	if (bParam2)
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam1);
	}

	num = 37;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam1);
	}

	num = 38;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam1);
	}

	num = 35;

	if (bParam3 && -923693316 == func_145(hParam0->f_1[num /*3*/]))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam1);
	}

	return;
}

void func_941(Hash hParam0, int iParam1, int iParam2) // Position - 0x24D75 Hash - 0x9DADBD7B ^0xD8EA8C97
{
	Global_17418.f_55.f_664.f_33[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	return;
}

void func_942(Hash hParam0, int iParam1) // Position - 0x24D99 Hash - 0x9E628A6B ^0xBF78A72D
{
	int i;

	if (iParam1 == -1)
		iParam1 = Global_17418.f_55.f_664.f_1777;

	Global_17418.f_55.f_664.f_33[iParam1 /*120*/].f_1 = *hParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_941(&hParam0->f_1[i /*3*/], i, iParam1);
	}

	return;
}

void func_943(BOOL bParam0, int iParam1, int iParam2) // Position - 0x24DEA Hash - 0x2B8C80AA ^0xBEDF1A8D
{
	if (iParam1 == -1)
		iParam1 = Global_17418.f_55.f_664.f_1777;

	if (iParam1 > -1 && iParam1 < 11)
		Global_17418.f_55.f_664.f_33[iParam1 /*120*/] = Global_17418.f_55.f_664.f_33[iParam1 /*120*/] || bParam0;

	return;
}

BOOL func_944(int iParam0, int iParam1) // Position - 0x24E35 Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_1032(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_1033())
		return func_1032(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_1032(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_945(Player plParam0) // Position - 0x24EA9 Hash - 0x18353CAA ^0x646BAFB
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_946(Player plParam0) // Position - 0x24EC6 Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_1034(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_1035(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

void func_947(var uParam0) // Position - 0x24F49 Hash - 0x333BC7D4 ^0xCB2892E1
{
	func_800(uParam0, joaat("MULTIPLAYER_GAME"));

	if (func_584() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_800(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_800(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_948(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) // Position - 0x24F81 Hash - 0x15598973 ^0x15598973
{
	int i;
	var unk;

	if (!func_1036(anParam0))
		return;

	if (Global_1292143.f_2539 < 20)
	{
		Global_1292143.f_2539 = Global_1292143.f_2539 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1292143.f_2539.f_1[i /*22*/] = { Global_1292143.f_2539.f_1[i + 1 /*22*/] };
		}
	}

	unk.f_7.f_3.f_1 = 10;
	unk = { *anParam0 };
	unk.f_4 = iParam1;
	unk.f_6 = 1;
	unk.f_7 = { uParam2 };
	Global_1292143.f_2539.f_1[Global_1292143.f_2539 - 1 /*22*/] = { unk };
	return;
}

BOOL func_949(Hash hParam0) // Position - 0x25037 Hash - 0xCD05DF70 ^0x86E370D6
{
	var unk;

	if (func_37() != -1)
		return false;

	if (func_643(hParam0, 1048576))
		return false;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return func_952(hParam0, &unk, 1, false, false, -1, false);

	return func_295(hParam0, 1);
}

void func_950(Hash hParam0, int iParam1, BOOL bParam2, var uParam3, Hash hParam4) // Position - 0x2507C Hash - 0x4ACBF8C5 ^0x4A0F082E
{
	Hash weaponHash;

	if (func_142(hParam0) != joaat("WEAPON"))
		return;

	weaponHash = func_809(hParam0, false);

	if (!WEAPON::IS_WEAPON_VALID(weaponHash))
		return;

	if (bParam2 || !func_960(weaponHash))
	{
		if (bParam2 || !WEAPON::HAS_PED_GOT_WEAPON(Global_33, weaponHash, 0, false) && func_263(hParam0, false, false, false) == 0)
		{
			if (func_37() == -1)
				func_810(weaponHash);
		
			if (!*uParam3 && !(hParam4 == 1248274121))
			{
				func_424(hParam0, iParam1, false, false, false, false, false);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}

	return;
}

void func_951(Hash hParam0, var uParam1) // Position - 0x25126 Hash - 0xE8F09939 ^0xD0796490
{
	if (func_19(hParam0, 58855631))
		func_649(hParam0, -915411861, uParam1, true);

	return;
}

BOOL func_952(Hash hParam0, Any* panParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6) // Position - 0x2514B Hash - 0x83727B4C ^0xA6F6F598
{
	var unk;
	var unk5;
	int num;
	int num2;

	func_1037(&hParam0);

	if (!func_17(hParam0, 0) && !func_281(func_105(hParam0), 2))
		return 0;

	if (!bParam3 && func_317(hParam0, joaat("DEFAULT")) == 0)
		bParam3 = true;

	if (func_409(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		unk = { func_401(false) };
		unk5.f_9 = joaat("SLOTID_NONE");
	
		if (!func_403(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
			return 0;
		else if (func_404(hParam0, &unk5, joaat("SLOTID_WEAPON_0")))
			return 0;
	
		if (func_402(hParam0, true))
			if (!func_403(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
				return 0;
			else if (func_404(hParam0, &unk5, joaat("SLOTID_WEAPON_1")))
				return 0;
	
		return 1;
	}

	num = iParam5;

	if (iParam5 < 0)
		num = func_497(hParam0, panParam1, bParam3, bParam4);

	if (num < 0)
		return 0;
	else if (num == 0)
		return 1;

	num2 = func_368(hParam0, *panParam1, panParam1->f_4, bParam4, bParam3, bParam6);

	if (num2 + iParam2 > num)
		return 1;

	return 0;
}

BOOL func_953() // Position - 0x2527F Hash - 0xB8876D40 ^0xFAD3D5CE
{
	if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_33) && !func_203(Global_33, 1369124074) && !func_203(Global_33, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD) && !TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33) && !PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
		return true;

	return false;
}

BOOL func_954(int iParam0) // Position - 0x252E4 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_955(int iParam0) // Position - 0x252F7 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_38.f_3651[num2], offset);
}

void func_956(int iParam0) // Position - 0x25321 Hash - 0x48EBE6BD ^0x358C7E90
{
	int num;
	int num2;
	int offset;
	int address;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	address = Global_38.f_3651[num2];
	MISC::SET_BIT(&address, offset);
	Global_38.f_3651[num2] = address;
	return;
}

void func_957(int iParam0) // Position - 0x2535B Hash - 0xB25DF9C2 ^0xF6204414
{
	switch (iParam0)
	{
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
	
		case 2:
			if (func_895() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
				func_1046("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_164(677, false);
			break;
	
		case 3:
			if (func_895() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
				func_1046("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_164(678, false);
			break;
	
		case 4:
			if (func_895() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
				func_1046("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_164(679, false);
			break;
	
		case 5:
			if (func_895() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
				func_1046("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_164(680, false);
			break;
	
		case 6:
			break;
	
		case 7:
			break;
	
		case 8:
			break;
	
		case 9:
			break;
	
		case 10:
			break;
	
		case 11:
			func_1038(true);
			break;
	
		case 12:
			break;
	
		case 13:
			break;
	
		case 14:
			break;
	
		case 15:
			break;
	
		case 16:
			break;
	
		case 17:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_1039(1);
			break;
	
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1039(2);
			break;
	
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1039(3);
			break;
	
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
	
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
	
		case 22:
			PLAYER::_SET_MOUNT_PROMPT_DISABLED(false);
			break;
	
		case 23:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			break;
	
		case 24:
			break;
	
		case 25:
			break;
	
		case 26:
			break;
	
		case 27:
			break;
	
		case 28:
			break;
	
		case 29:
			break;
	
		case 30:
			break;
	
		case 31:
			break;
	
		case 32:
			func_1040(true);
			break;
	
		case 33:
			func_1041(true);
			break;
	
		case 34:
			func_1042(true);
			break;
	
		case 35:
			break;
	
		case 36:
			func_1043(false);
			break;
	
		case 37:
			func_1044(false);
			break;
	
		case 38:
			func_1045(false);
			break;
	
		case 39:
			break;
	
		case 40:
			break;
	
		case 41:
			break;
	
		case 42:
			break;
	
		case 43:
			break;
	
		case 44:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1940199.f_41 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
	
		case 45:
			break;
	
		case 46:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
	
		case 47:
			if (func_37() == -1)
				if (!func_295(1013902307, 1))
					func_813(1013902307, 1, 752097756);
			break;
	
		case 48:
			if (func_37() == -1)
				if (!func_295(786809402, 1))
					func_813(786809402, 1, 752097756);
			break;
	
		case 49:
			if (func_37() == -1)
			{
				if (!func_295(1013902307, 1))
					func_813(1013902307, 1, 752097756);
			
				if (!func_295(142640135, 1))
					func_813(142640135, 1, 752097756);
			}
			break;
	
		case 50:
			if (func_37() == -1)
			{
				if (!func_295(786809402, 1))
					func_813(786809402, 1, 752097756);
			
				if (!func_295(-518019409, 1))
					func_813(-518019409, 1, 752097756);
			}
			break;
	
		case 51:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
	
		case 52:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
	
		case 53:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
	
		case 54:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("compendium"), true);
			break;
	
		case 55:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}

	return;
}

int func_958(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x258D7 Hash - 0xC51EFF01 ^0xD252B7CC
{
	var unk;
	var unk13;
	var unk26;

	unk.f_1 = 10;
	unk13.f_1 = 11;
	return func_1047(iParam0, &unk26, &unk13, &unk, iParam1, iParam2, iParam3, bParam4);
}

BOOL func_959(Hash hParam0) // Position - 0x25907 Hash - 0x8C6B1607 ^0xB465A08C
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_VISIBLE(weaponUnlock))
		return true;

	return false;
}

BOOL func_960(Hash hParam0) // Position - 0x2592F Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

void func_961(Hash hParam0, int iParam1) // Position - 0x25957 Hash - 0xC6BCDC43 ^0xB7300BA8
{
	int ammo;
	int ammo2;
	int ammo3;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_33, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo3 = func_1048(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_33, hParam0, ammo3);
	
		if (WEAPON::GET_MAX_AMMO(Global_33, &ammo2, hParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_33, hParam0) > ammo2)
			WEAPON::SET_PED_AMMO(Global_33, hParam0, ammo2);
	}

	return;
}

int func_962(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x259C9 Hash - 0x8DB88FC7 ^0xD6CAC1F
{
	int num;
	var guid2;
	var guid1;

	if (!func_17(hParam0, 0))
		return 0;

	num = func_317(hParam0, joaat("DEFAULT"));

	if (num == 0)
		return 0;

	guid2 = { func_167(hParam0, false, 0) };

	if (func_952(hParam0, &guid2, iParam1, false, false, -1, false))
		return 0;

	if (!func_170(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_199(false), &guid1, &guid2, hParam0, guid2.f_4, iParam1, hParam2))
		return 0;

	return 1;
}

int func_963(Hash hParam0, Any* panParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x25A45 Hash - 0x740B8A62 ^0x5C694353
{
	if (!func_17(hParam0, 0))
		return 0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_952(hParam0, panParam2, iParam3, bParam5, false, -1, false))
		return 0;

	if (!func_170(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_199(false), panParam1, panParam2, hParam0, panParam2->f_4, iParam3, hParam4))
		return 0;

	return 1;
}

void func_964(Hash hParam0) // Position - 0x25AAD Hash - 0x708BD33E ^0x476E7B33
{
	char* propertyName;
	char* propertyName2;
	int value;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || Global_1940199.f_6)
		return;

	if (WEAPON::IS_WEAPON_BOW(hParam0))
		return;

	propertyName = "player_newWeaponType";
	propertyName2 = "player_newWeaponTime";

	if (WEAPON::IS_WEAPON_PISTOL(hParam0))
	{
		propertyName = "player_newPistolWeaponType";
		propertyName2 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(hParam0))
	{
		propertyName = "player_newRevolverWeaponType";
		propertyName2 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_RIFLE(hParam0))
	{
		propertyName = "player_newRifleWeaponType";
		propertyName2 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(hParam0))
	{
		propertyName = "player_newShotgunWeaponType";
		propertyName2 = "player_newShotgunWeaponTime";
	}

	DECORATOR::DECOR_SET_INT(Global_33, propertyName, hParam0);
	value = func_1003();
	func_1022(&value, 0, 0, 0, 1, 0, 0, false);
	DECORATOR::DECOR_SET_INT(Global_33, propertyName2, value);
	return;
}

int func_965(Hash hParam0) // Position - 0x25B7C Hash - 0x62B2BF56 ^0x18236051
{
	int num;
	int pedAmmoByType;

	if (func_727(hParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, joaat("ammo_arrow")) <= 0)
			num = 10;
		else
			num = 0;
	}
	else if (WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(hParam0))
			num = 12;
		else
			num = WEAPON::GET_WEAPON_CLIP_SIZE(hParam0) * 4;
	
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
	
		if (pedAmmoByType >= num)
			num = 0;
		else if (pedAmmoByType > 0)
			num = num - pedAmmoByType;
	}

	return num;
}

BOOL func_966() // Position - 0x25BF8 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

BOOL func_967(Hash hParam0) // Position - 0x25C01 Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

Hash func_968(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x25C13 Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

int func_969(Hash hParam0) // Position - 0x25C39 Hash - 0xBA04765D ^0x454D110B
{
	Hash weaponTypeFromAmmoType;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);

	if (WEAPON::IS_WEAPON_A_GUN(weaponTypeFromAmmoType))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_805(49))
			{
				if (!func_805(47))
					return 149;
			
				return 151;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_805(50))
			{
				if (!func_805(48))
					return 150;
			
				return 152;
			}
		}
	}

	return 153;
}

int func_970(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x25CA5 Hash - 0x88B97E84 ^0x896726CB
{
	float num;
	int num2;
	int i;
	Hash hash;

	if (func_37() == 0)
		return 0;

	if (iParam2 != -1)
		return iParam2;

	num = 1f;

	if (bParam1 && func_295(joaat("provision_trinket_elk_antler"), 1))
		num = num + 0.1f;

	num2.f_1 = 10;
	num2.f_12 = 10;
	MISC::_LOOT_TABLES_GET_INFO(Global_33, true, true, hParam0, &num2, 0);

	for (i = 0; i < num2; i = i + 1)
	{
		if (num2.f_1[i] == joaat("currency_cash"))
		{
			return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
		else
		{
			hash = num2.f_1[i];
		
			if (func_17(hash, 0) && func_19(hash, -1921346699))
				return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
	}

	return 0;
}

void func_971(int iParam0, const char* sParam1, int iParam2, BOOL bParam3) // Position - 0x25D75 Hash - 0x6EA86F5A ^0x7B24A9E
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_1049(iParam0, 1000);
			return;
		}
	
		sParam1 = "FEED_MONEY_EARN";
	}

	func_653(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	return;
}

void func_972(int iParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0x25DC7 Hash - 0x7435A573 ^0x3E04C000
{
	int num;
	int value;
	int num2;

	if (iParam0 <= 0)
		return;

	if (bParam1)
	{
		num = BUILTIN::ROUND(BUILTIN::TO_FLOAT(iParam0) * iParam2);
		value = (iParam0 - num) / iParam3;
	
		if (func_1050() || func_1051())
			num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value) * 0.1f);
	
		iParam0 = iParam0 + num2;
		value = value + num2;
		func_653(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		iParam0 = iParam0 - num;
		num > 0;
		func_653(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", value), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	}
	else
	{
		value = iParam0;
	}

	if (value > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(value, 752097756);
		func_416(func_654(joaat("CAREER_CASH")), value);
	}

	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x25EA2 Hash - 0xA17D549C ^0xAA415BFC
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
	
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
	
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
	
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
	
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
	
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
	
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
	
		case 7:
			return "PROVISION_FISH_MUSKIE";
	
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
	
		case 9:
			return "PROVISION_FISH_PERCH";
	
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
	
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
	
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
	
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
	
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
	
		default:
		
	}

	return "FISHTYPE_UNKNOWN";
}

Hash func_974(Hash hParam0) // Position - 0x25F79 Hash - 0x42CB27A1 ^0xAE7DBAA9
{
	Hash num;

	if (!func_702(hParam0, &num, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
		return joaat("_placeholder");

	return num;
}

BOOL func_975(int iParam0, Hash hParam1, int iParam2, BOOL bParam3, Hash hParam4) // Position - 0x25FA3 Hash - 0x58967A60 ^0x975E68C3
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	var statId;

	if (!func_17(hParam1, 0))
		return 0;

	flag = hParam4 == 562618531;
	flag2 = hParam4 == 1992602754;
	flag3 = hParam4 == -1387038764;

	if (!func_1052(iParam0, hParam1, 1))
		return 0;

	statId = { func_425(hParam1) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_496(iParam0, hParam1) - iParam2 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam2);
		}
		else if (func_496(iParam0, hParam1) - iParam2 < 0)
		{
			func_975(iParam0, hParam1, func_263(hParam1, false, false, false), bParam3, hParam4);
			return 0;
		}
	}

	if (!func_1053(iParam0, hParam1, iParam2, hParam4, bParam3))
		return 0;

	if (!bParam3 && hParam1 != 1309979101)
		func_424(hParam1, -iParam2, flag, flag2, flag3, false, false);

	return 1;
}

BOOL func_976(Hash hParam0) // Position - 0x2607D Hash - 0x8740500B ^0x17CABE34
{
	if (!func_17(hParam0, 0))
		return false;

	return func_19(hParam0, 1686880204) || INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IS_ANIMAL_PELT(hParam0);
}

int func_977(int iParam0, int iParam1) // Position - 0x260AB Hash - 0xE1D12727 ^0xAE678AE7
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_alligator_skin");
	
		case 1:
			return joaat("PROVISION_ALLIGATOR_SKIN_POOR");
	
		case 2:
			return joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE");
	
		case 3:
			return joaat("provision_beaver_fur");
	
		case 4:
			return joaat("PROVISION_BEAVER_FUR_POOR");
	
		case 5:
			return joaat("PROVISION_BEAVER_FUR_PRISTINE");
	
		case 6:
			return joaat("provision_boar_skin");
	
		case 7:
			return joaat("PROVISION_BOAR_SKIN_POOR");
	
		case 8:
			return joaat("PROVISION_BOAR_SKIN_PRISTINE");
	
		case 9:
			return joaat("provision_buck_fur");
	
		case 10:
			return joaat("PROVISION_BUCK_FUR_POOR");
	
		case 11:
			return joaat("PROVISION_BUCK_FUR_PRISTINE");
	
		case 12:
			return joaat("provision_cougar_fur");
	
		case 13:
			return joaat("PROVISION_COUGAR_FUR_POOR");
	
		case 14:
			return joaat("PROVISION_COUGAR_FUR_PRISTINE");
	
		case 15:
			return joaat("provision_coyote_fur");
	
		case 16:
			return joaat("PROVISION_COYOTE_FUR_POOR");
	
		case 17:
			return joaat("PROVISION_COYOTE_FUR_PRISTINE");
	
		case 18:
			return joaat("provision_deer_hide");
	
		case 19:
			return joaat("PROVISION_DEER_HIDE_POOR");
	
		case 20:
			return joaat("PROVISION_DEER_HIDE_PRISTINE");
	
		case 21:
			return joaat("provision_fox_fur");
	
		case 22:
			return joaat("PROVISION_FOX_FUR_POOR");
	
		case 23:
			return joaat("PROVISION_FOX_FUR_PRISTINE");
	
		case 24:
			return joaat("provision_goat_hair");
	
		case 25:
			return joaat("PROVISION_GOAT_HAIR_POOR");
	
		case 26:
			return joaat("PROVISION_GOAT_HAIR_PRISTINE");
	
		case 27:
			return joaat("provision_javelina_skin");
	
		case 28:
			return joaat("PROVISION_JAVELINA_SKIN_POOR");
	
		case 29:
			return joaat("PROVISION_JAVELINA_SKIN_PRISTINE");
	
		case 30:
			return joaat("provision_loanshark_skins");
	
		case 31:
			return joaat("provision_panther_fur");
	
		case 32:
			return joaat("PROVISION_PANTHER_FUR_POOR");
	
		case 33:
			return joaat("PROVISION_PANTHER_FUR_PRISTINE");
	
		case 34:
			return joaat("provision_pig_skin");
	
		case 35:
			return joaat("PROVISION_PIG_SKIN_POOR");
	
		case 36:
			return joaat("PROVISION_PIG_SKIN_PRISTINE");
	
		case 37:
			return joaat("provision_pronghorn_fur");
	
		case 38:
			return joaat("PROVISION_PRONGHORN_FUR_POOR");
	
		case 39:
			return joaat("PROVISION_PRONGHORN_FUR_PRISTINE");
	
		case 40:
			return joaat("provision_ram_hide");
	
		case 41:
			return joaat("PROVISION_RAM_HIDE_POOR");
	
		case 42:
			return joaat("PROVISION_RAM_HIDE_PRISTINE");
	
		case 43:
			return joaat("provision_sheep_wool");
	
		case 44:
			return joaat("PROVISION_SHEEP_WOOL_POOR");
	
		case 45:
			return joaat("PROVISION_SHEEP_WOOL_PRISTINE");
	
		case 46:
			return joaat("provision_wolf_fur");
	
		case 47:
			return joaat("PROVISION_WOLF_FUR_POOR");
	
		case 48:
			return joaat("PROVISION_WOLF_FUR_PRISTINE");
	
		case 49:
			return 121494806;
	
		case 50:
			return -251416414;
	
		case 51:
			return -1787430524;
	
		case 52:
			return -1572330336;
	
		case 53:
			return -1249752300;
	
		case 54:
			return -940052481;
	
		case 55:
			return -308200059;
	
		case 56:
			return -1218522879;
	
		case 57:
			return 923422806;
	
		case 58:
			return 832214437;
	
		case 59:
			return 397926876;
	
		case 60:
			return 219794592;
	
		case 61:
			return -1061362634;
	
		case 62:
			return 1728819413;
	
		case 63:
			return 1009802015;
	
		case 64:
			return 1276143905;
	
		case 65:
			return -1262044528;
	
		case 66:
			return -963027403;
	
		case 67:
			return 2088901891;
	
		case 68:
			return 836208559;
	
		case 69:
			return 1600479946;
	
		case 70:
			return -675142890;
	
		case 71:
			return -906131571;
	
		case 72:
			return -591844128;
	
		case 73:
			return -1946740647;
	
		case 74:
			return -1548204069;
	
		case 75:
			return -907373381;
	
		case 76:
			return 0;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

Hash func_978(Hash hParam0) // Position - 0x264FC Hash - 0x2D6C03B6 ^0x2D6C03B6
{
	if (!func_840(hParam0))
		return 0;

	return hParam0;
}

int func_979(Hash hParam0, int iParam1) // Position - 0x26514 Hash - 0x9271BD12 ^0x9271BD12
{
	switch (hParam0)
	{
		case joaat("provision_beaver_fur"):
			return 3;
	
		case -1946740647:
			return 73;
	
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 8;
	
		case joaat("provision_deer_hide"):
			return 18;
	
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 14;
	
		case -1787430524:
			return 51;
	
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 26;
	
		case joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE"):
			return 2;
	
		case -1572330336:
			return 52;
	
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return 4;
	
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 16;
	
		case -1548204069:
			return 74;
	
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return 39;
	
		case joaat("provision_javelina_skin"):
			return 27;
	
		case joaat("provision_sheep_wool"):
			return 43;
	
		case -1262044528:
			return 65;
	
		case -1249752300:
			return 53;
	
		case -1218522879:
			return 56;
	
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 36;
	
		case -1061362634:
			return 61;
	
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return 20;
	
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return 38;
	
		case -963027403:
			return 66;
	
		case -940052481:
			return 54;
	
		case -907373381:
			return 75;
	
		case -906131571:
			return 71;
	
		case joaat("provision_buck_fur"):
			return 9;
	
		case joaat("provision_alligator_skin"):
			return 0;
	
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 17;
	
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 11;
	
		case -675142890:
			return 70;
	
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return 19;
	
		case -591844128:
			return 72;
	
		case joaat("provision_ram_hide"):
			return 40;
	
		case joaat("provision_panther_fur"):
			return 31;
	
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 35;
	
		case -308200059:
			return 55;
	
		case -251416414:
			return 50;
	
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return 28;
	
		case joaat("provision_pig_skin"):
			return 34;
	
		case 0:
			return 76;
	
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return 47;
	
		case 121494806:
			return 49;
	
		case 219794592:
			return 60;
	
		case joaat("provision_fox_fur"):
			return 21;
	
		case 397926876:
			return 59;
	
		case joaat("provision_cougar_fur"):
			return 12;
	
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 23;
	
		case joaat("provision_pronghorn_fur"):
			return 37;
	
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return 48;
	
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 25;
	
		case 832214437:
			return 58;
	
		case 836208559:
			return 68;
	
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return 5;
	
		case 923422806:
			return 57;
	
		case 1009802015:
			return 63;
	
		case joaat("provision_wolf_fur"):
			return 46;
	
		case joaat("provision_coyote_fur"):
			return 15;
	
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return 7;
	
		case 1276143905:
			return 64;
	
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return 45;
	
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return 32;
	
		case 1600479946:
			return 69;
	
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return 10;
	
		case joaat("PROVISION_FOX_FUR_POOR"):
			return 22;
	
		case joaat("provision_goat_hair"):
			return 24;
	
		case 1728819413:
			return 62;
	
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return 44;
	
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return 42;
	
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return 41;
	
		case joaat("PROVISION_ALLIGATOR_SKIN_POOR"):
			return 1;
	
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return 13;
	
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return 29;
	
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return 33;
	
		case joaat("provision_loanshark_skins"):
			return 30;
	
		case 2088901891:
			return 67;
	
		case joaat("provision_boar_skin"):
			return 6;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_980(int iParam0, BOOL bParam1) // Position - 0x2687C Hash - 0x7B65B858 ^0xB5F74795
{
	Player player;
	Player player2;
	int num;

	player = PLAYER::PLAYER_ID();

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
		return false;

	player2 = player;

	if (player2 < 0 || player2 >= 32)
		return false;

	if (func_981(player2, bParam1) == 0)
		return false;

	num = iParam0;

	if (num > func_981(player2, bParam1))
		num = func_981(player2, bParam1);

	if (!bParam1)
		Global_1289643[player2 /*19*/] = Global_1289643[player2 /*19*/] - num;
	else
		Global_1289643[player2 /*19*/].f_1 = Global_1289643[player2 /*19*/].f_1 - num;

	if (func_981(player2, bParam1) < 0)
		if (!bParam1)
			Global_1289643[player2 /*19*/] = 0;
		else
			Global_1289643[player2 /*19*/].f_1 = 0;
	else if (func_981(player2, bParam1) > func_982(bParam1))
		if (!bParam1)
			Global_1289643[player2 /*19*/] = func_982(bParam1);
		else
			Global_1289643[player2 /*19*/].f_1 = func_982(bParam1);

	return true;
}

int func_981(Player plParam0, BOOL bParam1) // Position - 0x26975 Hash - 0x5A8EAA13 ^0xC5357BF7
{
	return bParam1 ? Global_1289643[plParam0 /*19*/].f_1 : Global_1289643[plParam0 /*19*/];
}

int func_982(BOOL bParam0) // Position - 0x26995 Hash - 0x929DFA50 ^0x5A58BCD2
{
	return bParam0 ? Global_1901671.f_701.f_30 : Global_1901671.f_701.f_29;
}

void func_983() // Position - 0x269B5 Hash - 0xA41D39E ^0x68A34DB9
{
	var src;

	src = 7;
	src.f_8 = -1;
	MISC::COPY_SCRIPT_STRUCT(&uLocal_0, &src, 13);
	return;
}

void func_984(var uParam0) // Position - 0x269D4 Hash - 0xD671ED50 ^0xD671ED50
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i] = 0;
	}

	return;
}

int func_985(var uParam0) // Position - 0x269F7 Hash - 0xC7FF273F ^0xDAC21C22
{
	switch (uParam0->f_9)
	{
		case 0:
			uParam0->f_8 = 0;
			break;
	
		case 1:
			uParam0->f_8 = uParam0->f_10 - 1;
			break;
	
		default:
			return 0;
	}

	return 1;
}

BOOL func_986(var uParam0, int iParam1) // Position - 0x26A2F Hash - 0x2C0E2D87 ^0xFFAB55D1
{
	if (!func_1055(uParam0))
		return false;

	if (iParam1 != 0)
	{
		uParam0->[uParam0->f_8] = iParam1;
		!func_1056(uParam0);
		return true;
	}

	return false;
}

int func_987(var uParam0) // Position - 0x26A64 Hash - 0xD41E395C ^0x4157EFE2
{
	int num;

	num = 0;

	switch (uParam0->f_9)
	{
		case 0:
			return uParam0->f_8;
	
		case 1:
			num = uParam0->f_10 - uParam0->f_8 - 1;
		
			if (num < 0)
				num = 0;
			else
				num != uParam0->f_10;
			break;
	}

	return num;
}

BOOL func_988() // Position - 0x26AB3 Hash - 0x3359F14C ^0x23BACCD3
{
	if (uLocal_0.f_11 < 0 || uLocal_0.f_11 >= 7)
		return false;

	if (uLocal_0.f_9 == 0)
		if (uLocal_0.f_11 >= func_987(&uLocal_0))
			return false;

	return true;
}

int func_989(int iParam0, var uParam1) // Position - 0x26AEE Hash - 0x9C3ED8B4 ^0x9C3ED8B4
{
	if (iParam0 == 2)
		return func_715(iParam0);

	return -1;
}

int func_990(int iParam0) // Position - 0x26B08 Hash - 0x18C15B72 ^0x18C15B72
{
	if (!func_244(iParam0))
		return -1;

	if (iParam0 == 40 && func_668() == 139)
		return 139;

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 129:
			return 83;
	
		case 3:
			return 13;
	
		case 4:
			return 14;
	
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 122:
		case 123:
			return 40;
	
		case 20:
			return -1;
	
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 140:
			return 74;
	
		case 26:
			return 3;
	
		case 27:
		case 28:
			return 23;
	
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 126:
			return 111;
	
		case 40:
			return 95;
	
		case 41:
			return 107;
	
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 124:
		case 125:
			return 5;
	
		case 64:
			return 76;
	
		case 65:
			return 104;
	
		case 66:
			return 9;
	
		case 67:
			return 84;
	
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 127:
			return 26;
	
		case 76:
			return 119;
	
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 120:
		case 121:
			return 81;
	
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 128:
			return 98;
	
		case 99:
		case 100:
		case 101:
			return 28;
	
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
			return 121;
	
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
			return 127;
	
		case 113:
			return 96;
	
		case 114:
			return 29;
	
		case 115:
		case 116:
			return 130;
	
		case 117:
		case 118:
			return 123;
	
		case 130:
		case 131:
			return 136;
	
		case 132:
			return 87;
	
		case 134:
			return -1;
	
		case 135:
			return 126;
	
		case 136:
			return 133;
	
		case 137:
			return 137;
	
		case 138:
			return 39;
	
		case 139:
			return 16;
	
		case 141:
			return 76;
	
		case 142:
			return 61;
	
		case 143:
			return 100;
	
		case 144:
			return 34;
	
		case 145:
			return 43;
	
		case 146:
			return 85;
	
		case 148:
			return 134;
	
		case 149:
			return 138;
	
		case 150:
			return 25;
	
		case 151:
			return 3;
	
		case 155:
		case 156:
		case 157:
		case 158:
			return 84;
	
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
			return 104;
	
		case 164:
		case 165:
		case 166:
		case 167:
			return 76;
	
		case 168:
		case 169:
		case 170:
		case 171:
			return 4;
	
		case 172:
		case 173:
		case 174:
		case 175:
			return 9;
	
		default:
		
	}

	return -1;
}

int func_991(int iParam0) // Position - 0x27030 Hash - 0x4D13899D ^0x4D13899D
{
	if (iParam0 < 0)
		return -1;
	else if (iParam0 <= 10)
		return 0;
	else if (iParam0 <= 30)
		return 1;
	else if (iParam0 <= 34)
		return 2;
	else if (iParam0 <= 38)
		return 3;
	else if (iParam0 <= 41)
		return 4;
	else if (iParam0 <= 52)
		return 7;
	else if (iParam0 <= 61)
		return 6;
	else if (iParam0 <= 66)
		return 8;
	else if (iParam0 <= 81)
		return 9;
	else if (iParam0 <= 98)
		return 10;
	else if (iParam0 <= 112)
		return 11;
	else if (iParam0 <= 119)
		return 12;
	else if (iParam0 <= 122)
		return 13;
	else if (iParam0 <= 126)
		return 14;
	else if (iParam0 <= 134)
		return 15;
	else if (iParam0 <= 138)
		return 16;

	return -1;
}

BOOL func_992(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x2712C Hash - 0xDFD4B035 ^0x7F7C43A6
{
	if (!func_516(hParam0))
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_COUNT_FROM_COST_TYPE(hParam0, hParam1) == 0)
		return false;

	if (bParam2)
		return !func_1057(hParam0, hParam1);

	return true;
}

void func_993(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x27164 Hash - 0x7EFAC478 ^0x4E4217E0
{
	int i;
	int j;
	int k;
	int l;
	int numberOfModifiedPrices;
	int numberOfModifiers;
	Hash key;
	int outData;
	var outData2;
	var unk13;

	if (*uParam2 < 15)
		return;
	else if (iParam3 > *uParam2 || iParam3 < 1)
		return;

	outData.f_1 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS(hParam0, &outData) || outData == 0)
		return;

	unk13 = 15;

	for (i = 0; i < iParam3; i = i + 1)
	{
		unk13[i] = 1f;
	}

	for (j = 0; j < outData; j = j + 1)
	{
		key = outData.f_1[j];
		numberOfModifiedPrices = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(key);
	
		for (k = 0; k < numberOfModifiedPrices; k = k + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(key, k) != hParam1)
			{
			}
			else
			{
				numberOfModifiers = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(key);
			
				for (l = 0; l < numberOfModifiers; l = l + 1)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(key, l, &outData2))
					{
					}
					else
					{
						for (i = 0; i < iParam3; i = i + 1)
						{
							if (uParam2->[i /*2*/] == outData2)
							{
								unk13[i] = unk13[i] + (outData2.f_1 - 1f);
								break;
							}
						}
					}
				}
			
				break;
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk13[i] != 1f && uParam2->[i /*2*/].f_1 > 0)
		{
			if (uParam2->[i /*2*/] == joaat("currency_gold_bar"))
				uParam2->[i /*2*/].f_1 = ((100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 1000000) * 100;
			else
				uParam2->[i /*2*/].f_1 = (100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 10000;
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_145(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

BOOL func_994(int iParam0) // Position - 0x2733A Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case joaat("CI_TAG_FOLDER_CIG_CARD_SPT_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_AML_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_GUN_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_GRL_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_LND_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_ACT_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_PLT_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_INV_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_ART_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_PAM_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_HOR_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_VEH_SET"):
			return true;
	}

	return false;
}

BOOL func_995(Any* panParam0) // Position - 0x2739A Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*panParam0 == 0 && panParam0->f_1 == 0 && panParam0->f_2 == 0 && panParam0->f_3 == 0)
		return false;

	return true;
}

void func_996(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x273D0 Hash - 0xBC161045 ^0xD3B33F74
{
	int i;

	if (iParam0 == -1)
		return;

	if (Global_1292143.f_20 < 20)
	{
		Global_1292143.f_20 = Global_1292143.f_20 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1292143.f_20.f_1[i /*21*/] = { Global_1292143.f_20.f_1[i + 1 /*21*/] };
		}
	}

	func_1058(&Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/]);
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/] = iParam0;
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_1 = iParam1;

	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_2 = iParam2;
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_3 = iParam3;
	}

	return;
}

void func_997(Any* panParam0) // Position - 0x274AC Hash - 0xE2B2004A ^0x20B50C0B
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

int func_998() // Position - 0x274C2 Hash - 0x451321BF ^0xEF0A3B85
{
	return Global_1072759.f_28418[32 /*4*/].f_3;
}

struct<8> func_999(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6) // Position - 0x274D7 Hash - 0x1A324EB1 ^0xE8AB3DDD
{
	var unk;

	uParam0.f_2 = iParam5;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&unk, &uParam0);
	return unk;
}

BOOL func_1000() // Position - 0x274F5 Hash - 0xE9D1625C ^0xC9A64AD
{
	return !Global_1572887.f_10;
}

int func_1001(int iParam0) // Position - 0x27504 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_1060(func_1059(iParam0));
}

BOOL func_1002(Player plParam0) // Position - 0x27516 Hash - 0xD9DF34E9 ^0x1EDCC4EC
{
	float num;

	num = func_1061(plParam0) - PLAYER::_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(plParam0);
	return num <= 1f;
}

int func_1003() // Position - 0x27531 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1902569;
}

void func_1004(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2753D Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;

	num = func_1062(*uParam0);
	i = func_1063(*uParam0);
	j = func_1064(*uParam0);
	k = func_1065(*uParam0);
	l = func_1066(*uParam0);
	m = func_1067(*uParam0);

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

	for (m = m - iParam1; m < 0; m = m + 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (l = l - iParam2; l < 0; l = l + 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (k = k - iParam3; k < 0; k = k + 24)
	{
		iParam4 = iParam4 + 1;
	}

	for (j = j - iParam4; j <= 0; j = j + num3)
	{
		iParam5 = iParam5 + 1;
		num2 = i - 1;
	
		if (num2 < 0)
		{
			iParam6 = iParam6 + 1;
			i = i + 12;
		}
	
		num3 = func_1068(num2, num);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_1069(uParam0, m, l, k, j, i, num);
	return;
}

int func_1005(int iParam0, int iParam1) // Position - 0x276B0 Hash - 0xAECFF2CE ^0x28AB7A26
{
	if (iParam1 == 2)
		iParam1 = func_1001(2);

	switch (iParam1)
	{
		case 0:
			return Global_1956875.f_1431.f_6[iParam0 /*3*/].f_2;
	
		case 1:
			return Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/].f_2;
	
		default:
		
	}

	return -1;
}

int func_1006(int iParam0, int iParam1) // Position - 0x27700 Hash - 0xAECFF2CE ^0xA6B4AB7D
{
	if (iParam1 == 2)
		iParam1 = func_1001(2);

	switch (iParam1)
	{
		case 0:
			return Global_1956875.f_1431.f_6[iParam0 /*3*/].f_1;
	
		case 1:
			return Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/].f_1;
	
		default:
		
	}

	return -15;
}

BOOL func_1007(int iParam0, int iParam1, BOOL bParam2) // Position - 0x27752 Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_1070(iParam1) || !func_1070(iParam0))
			return true;

	return iParam0 > iParam1;
}

void func_1008(int iParam0, int iParam1, int iParam2) // Position - 0x2777F Hash - 0x7E1E307C ^0xC0CC80A4
{
	if (iParam2 == 2)
		iParam2 = func_1001(2);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_6[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_1009(int iParam0, int iParam1, int iParam2) // Position - 0x277D5 Hash - 0x7E1E307C ^0x81E4DDD9
{
	if (iParam2 == 2)
		iParam2 = func_1001(2);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_6[iParam0 /*3*/].f_1 = iParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/].f_1 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_1010(Ped pedParam0, int iParam1, float fParam2) // Position - 0x2782B Hash - 0xD72B3B3A ^0x22A28347
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (fParam2 > 100f)
		fParam2 = 100f;
	else if (fParam2 < 0f)
		fParam2 = 0f;

	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(pedParam0, func_1071(iParam1), BUILTIN::CEIL(fParam2));
	return true;
}

void func_1011(int iParam0, int iParam1, int iParam2) // Position - 0x27880 Hash - 0x9FB0AAD8 ^0x433FFF3E
{
	if (iParam2 == 2)
		iParam2 = func_1001(2);

	if (iParam1 > 0)
		iParam1 = iParam1 + MISC::GET_GAME_TIMER();

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_16[iParam0 /*3*/] = iParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_16[iParam0 /*3*/] = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_1012(Ped pedParam0, int iParam1, float fParam2) // Position - 0x278E1 Hash - 0x10CC1594 ^0xA098FFFF
{
	char* str;

	str = func_1072(iParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
		PED::_SET_PED_BLACKBOARD_FLOAT(pedParam0, func_1073(iParam1), fParam2, -1);

	return;
}

void func_1013(int iParam0, float fParam1, BOOL bParam2, int iParam3) // Position - 0x2790D Hash - 0xD1E7435D ^0x45C01A35
{
	int num;

	if (iParam3 == 2)
		iParam3 = func_1001(2);

	num = Global_1295666.f_16;
	func_1074(iParam0, fParam1, iParam3);

	if (bParam2)
		func_1075(iParam0, num, iParam3);

	return;
}

BOOL func_1014(int iParam0) // Position - 0x27943 Hash - 0x3FEE6090 ^0x3FEE6090
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			return true;
	
		case 2:
			return true;
	
		default:
		
	}

	return false;
}

char* func_1015(int iParam0) // Position - 0x27972 Hash - 0xFB90D1AE ^0xD0D1402F
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
	
		case 1:
			return "PlayerOverpower";
	
		case 2:
			return "PlayerOverpower";
	
		default:
		
	}

	return "";
}

void func_1016(int iParam0) // Position - 0x279AC Hash - 0x5D78382 ^0x8F13B3A8
{
	int num;
	int num2;
	int i;
	int num3;
	int num4;
	int j;
	var unk;

	num2 = Global_1156111.f_47689.f_1.f_42;
	unk = 20;

	for (i = 0; i < num2; i = i + 1)
	{
		num = Global_1156111.f_47689.f_1[i /*2*/];
		num3 = func_1076(num, 1);
	
		if (Global_1156111.f_35859.f_919[num3 /*12*/] == iParam0)
		{
			func_1077(num);
			Global_1156111.f_47689.f_1.f_42 = Global_1156111.f_47689.f_1.f_42 - 1;
		}
		else
		{
			unk[num4 /*2*/] = { Global_1156111.f_47689.f_1[i /*2*/] };
			num4 = num4 + 1;
		}
	}

	for (j = 0; j < num4; j = j + 1)
	{
		Global_1156111.f_47689.f_1[j /*2*/] = { unk[j /*2*/] };
	}

	return;
}

void func_1017(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x27A7C Hash - 0x5C29635D ^0x5C29635D
{
	func_904(iParam0, 100f, bParam1, bParam2, true, 2);
	return;
}

BOOL func_1018(int iParam0, BOOL bParam1) // Position - 0x27A96 Hash - 0x10DE2364 ^0x10DE2364
{
	return func_1007(func_1003(), iParam0, bParam1);
}

float func_1019(int iParam0, int iParam1) // Position - 0x27AAA Hash - 0x422268C7 ^0x22464E0E
{
	if (iParam1 == 2)
		iParam1 = func_1001(1);

	switch (iParam1)
	{
		case 0:
			return Global_1956875.f_1431.f_26[iParam0];
	
		case 1:
			return Global_1956875.f_1565.f_2.f_26[iParam0];
	
		default:
		
	}

	return -1f;
}

int func_1020(float fParam0) // Position - 0x27AF6 Hash - 0x991CF40A ^0x6EC613A5
{
	float num;

	num = fParam0;
	num = (2f * num) - 100f;
	return BUILTIN::ROUND((num / 100f) * BUILTIN::TO_FLOAT(10));
}

float func_1021(float fParam0, float fParam1, float fParam2) // Position - 0x27B21 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_1022(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x27B48 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_1062(*iParam0);
	i = func_1063(*iParam0);
	num2 = func_1064(*iParam0);
	j = func_1065(*iParam0);
	k = func_1066(*iParam0);
	l = func_1067(*iParam0);

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

	for (m = func_1068(i, num); num2 > m; m = func_1068(i, num))
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

	func_1069(iParam0, l, k, j, num2, i, num);
	return;
}

int func_1023(int iParam0, float fParam1, int iParam2) // Position - 0x27CD0 Hash - 0x91D240B ^0x31A81242
{
	if (!func_1078(iParam0))
		return 0;

	if (iParam2 == 2)
		iParam2 = func_1001(2);

	func_1079(iParam0, fParam1, iParam2);

	if (!ENTITY::IS_ENTITY_DEAD(Global_1295666.f_3))
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1295666.f_3, iParam0, BUILTIN::FLOOR(fParam1));

	return 1;
}

int func_1024(int iParam0) // Position - 0x27D21 Hash - 0x34CDD129 ^0x4B6C5D
{
	switch (iParam0)
	{
		case -1932005642:
			return 131072;
	
		case -1925540957:
			return 65536;
	
		case -1886898087:
			return 32880;
	
		case joaat("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
	
		case -1678578495:
			return 32768;
	
		case -1629261761:
			return 2049;
	
		case -1283403230:
			return 4096;
	
		case joaat("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
	
		case joaat("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
	
		case -1062102573:
			return 65601;
	
		case -915377750:
			return 2048;
	
		case -884591393:
			return 96;
	
		case -803648582:
			return 128;
	
		case -663436545:
			return 112;
	
		case -597281578:
			return 524288;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
	
		case -376594188:
			return -1;
	
		case -366477279:
			return 0;
	
		case -141044514:
			return 8304;
	
		case joaat("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 256;
	
		case 75507907:
			return 16384;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return 1024;
	
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 512;
	
		case 351949263:
			return 262144;
	
		case 396349281:
			return 2097152;
	
		case 465720259:
			return 1048576;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
	
		case 836721350:
			return 40960;
	
		case 884232794:
			return 16496;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
	
		case 1024778115:
			return 8192;
	
		case 1042019528:
			return 2160;
	
		case joaat("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
	
		case 2050534155:
			return 48;
	
		default:
		
	}

	return 0;
}

// Unhandled jump detected. Output should be considered invalid
void func_1025(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x27EC2 Hash - 0x7FE551F ^0xCF526C14
{
	int i;
	Hash hash;
	Hash hash2;

	for (i = 0; i < 39; i = i + 1)
	{
		if (func_1080(&hParam0->f_1[i /*3*/], 2))
		{
			if (func_1081(i, iParam1))
			{
				hash2 = { func_1082(i, -1) };
			
				if (!bParam4 && hash2 != Global_1953292.f_83[i /*12*/] && hash2 != 0 && hParam0->f_1[i /*3*/] != hash2 || hParam0->f_1[i /*3*/].f_1 != hash2.f_1)
					hParam0->f_1[i /*3*/] = { hash2 };
			
				if (func_1083(i, 4))
					func_1084(i, 4, 6);
			}
			else
			{
				if (bParam3)
					func_1085(i, 4, 6);
			
				goto 0xCD;
			}
		}
	
		if (bParam2)
		{
			hash = Global_1953292.f_83[i /*12*/];
			hParam0->f_1[i /*3*/] = { hash };
		}
	}

	return;
}

void func_1026(Hash hParam0, int iParam1, int iParam2) // Position - 0x27F9B Hash - 0x10354A04 ^0x626AEEF7
{
	Global_1953292.f_83[func_361(hParam0, 1) /*12*/].f_11 = Global_1953292.f_83[func_361(hParam0, 1) /*12*/].f_11 || iParam1;
	return;
}

BOOL func_1027(Hash hParam0) // Position - 0x27FC8 Hash - 0xBD22CF34 ^0x765AA3F9
{
	int num;
	var unk;

	Global_1953292.f_1039.f_2 = 0;
	num = 1226838104;
	func_914(&(Global_1953292.f_1039), num, -367421157, 1409451727, 1, hParam0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1953292.f_1039));

	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&unk, &(Global_1953292.f_1039), 1409451727))
		return false;

	return true;
}

int func_1028(Hash hParam0) // Position - 0x28022 Hash - 0xE1F3DDAE ^0x5813B139
{
	var outData;
	int num;

	if (!func_17(hParam0, 0))
		return 0;

	outData = 5;
	num = ITEMDATABASE::_0x8870895BA5ED9385(hParam0, 761377030, &outData);

	if (num > 0)
		return outData[0];

	return 0;
}

void func_1029(Hash hParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x2805C Hash - 0x5B22F0B4 ^0xB19405C9
{
	int i;
	BOOL flag;

	if (func_19(hParam0->f_1[34 /*3*/], -166674229))
		return;

	for (i = 0; i < 39; i = i + 1)
	{
		flag = func_1083(i, 16);
	
		if (flag)
			func_1084(i, 16, 9);
	
		if (Global_1953292.f_83[i /*12*/].f_3[0] == joaat("MISSING") || hParam0->f_1[i /*3*/] == 0)
		{
		}
		else
		{
			if (flag)
				func_592(i, iParam3);
		
			if (!bParam2 && func_1028(hParam0->f_1[i /*3*/]) != 0)
			{
			}
			else if (func_1081(i, iParam1) && !flag)
			{
				hParam0->f_1[i /*3*/] = Global_1953292.f_83[i /*12*/];
				hParam0->f_1[i /*3*/].f_1 = 0;
				func_594(hParam0, hParam0->f_1[i /*3*/], i, true, iParam3);
				func_592(i, iParam3);
			}
			else if (flag && !bParam2)
			{
				func_594(hParam0, hParam0->f_1[i /*3*/], i, false, iParam3);
			}
		}
	}

	return;
}

int func_1030(int iParam0, int iParam1, int iParam2) // Position - 0x28168 Hash - 0xFE41A884 ^0x917B03C
{
	int i;
	var unk;
	Hash hash;
	int metapedType;

	unk.f_9 = joaat("SLOTID_NONE");
	metapedType = 0;

	if (func_584() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		metapedType = 1;

	iParam2 = iParam2 | 28;

	for (i = 0; i < iParam1; i = i + 1)
	{
		if (!func_239(&unk, i, iParam0, iParam1))
		{
		}
		else if (func_1086(unk.f_4) && PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(unk.f_4, metapedType, true) == 0)
		{
		}
		else if (func_1028(unk.f_4) != 0)
		{
		}
		else if (func_19(unk.f_4, -166674229))
		{
		}
		else if (func_19(unk.f_4, 525391395))
		{
		}
		else
		{
			hash = func_145(unk.f_4);
		
			if (func_1088(iParam2, func_1087(hash)))
			{
			}
			else
			{
				return unk.f_4;
			}
		}
	}

	return 0;
}

void func_1031(Hash hParam0, int iParam1, int iParam2) // Position - 0x28235 Hash - 0x9F574CE5 ^0xC9B47479
{
	int num;

	if (func_19(hParam0->f_1[iParam1 /*3*/], 343781202))
	{
		func_760(hParam0, hParam0->f_1[iParam1 /*3*/]);
	}
	else
	{
		hParam0->f_1[iParam1 /*3*/] = Global_1953292.f_83[iParam1 /*12*/];
		hParam0->f_1[iParam1 /*3*/].f_1 = 0;
		func_592(iParam1, iParam2);
	}

	num = 17;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && hParam0->f_1[num /*3*/].f_1 == 289238755)
	{
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_592(num, iParam2);
	}

	return;
}

BOOL func_1032(int* piParam0, int iParam1, int iParam2) // Position - 0x282C9 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(piParam0->[iParam1 / 31], iParam1 % 31);
}

int func_1033() // Position - 0x28300 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

void func_1034(Player plParam0) // Position - 0x2830F Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_1035(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_1035(Player plParam0) // Position - 0x2837B Hash - 0xB360DAF6 ^0xEDA5F101
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

BOOL func_1036(Any anParam0) // Position - 0x283B6 Hash - 0x36229A1B ^0x2A9934D3
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 || anParam0->f_1 == -889271554 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

int func_1037(var uParam0) // Position - 0x283FC Hash - 0x8D760BCC ^0xB90089A3
{
	if (!func_17(*uParam0, 0))
		return 0;

	if (!func_1089(*uParam0))
		return 0;

	switch (*uParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = joaat("consumable_cigarette_box");
			break;
	
		case joaat("upgrade_fsh_bait_cricket_tin"):
			*uParam0 = joaat("upgrade_fsh_bait_cricket");
			break;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
			*uParam0 = joaat("consumable_cocaine_chewing_gum");
			break;
	
		case joaat("consumable_chewing_tobacco_used"):
			*uParam0 = joaat("consumable_chewing_tobacco");
			break;
	
		case joaat("upgrade_fsh_bait_worm_can"):
			*uParam0 = joaat("upgrade_fsh_bait_worm");
			break;
	
		default:
			return 0;
	}

	return 1;
}

void func_1038(BOOL bParam0) // Position - 0x28486 Hash - 0xB584A39F ^0xFC4CA802
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, true);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, false);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, true);
	}

	return;
}

void func_1039(int iParam0) // Position - 0x284C4 Hash - 0x2EDDC601 ^0x8923AAAC
{
	Any itemContextByIndex;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1956875.f_5.f_7))
		return;

	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1956875.f_5.f_7) > iParam0)
	{
		itemContextByIndex = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1956875.f_5.f_7, iParam0);
	
		if (itemContextByIndex == Global_1956875.f_5.f_14[iParam0 /*102*/])
			return;
	}

	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1956875.f_5.f_7, iParam0, "pause_info_panel_list", Global_1956875.f_5.f_14[iParam0 /*102*/]);
	return;
}

void func_1040(BOOL bParam0) // Position - 0x28532 Hash - 0x731EA76E ^0xD49C9ADF
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33);
	PED::SET_PED_CONFIG_FLAG(Global_33, 440, !bParam0);
	return;
}

void func_1041(BOOL bParam0) // Position - 0x2856C Hash - 0x731EA76E ^0xCC0310C8
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33);
	PED::SET_PED_CONFIG_FLAG(Global_33, 439, !bParam0);
	return;
}

void func_1042(BOOL bParam0) // Position - 0x285A6 Hash - 0x731EA76E ^0xC0281252
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33);
	PED::SET_PED_CONFIG_FLAG(Global_33, 438, !bParam0);
	return;
}

void func_1043(BOOL bParam0) // Position - 0x285E0 Hash - 0x6ED794F8 ^0x98C24F9E
{
	Hash hash;

	hash = 398076311;

	if (bParam0)
		HUD::_ENABLE_HUD_CONTEXT(hash);
	else
		HUD::_DISABLE_HUD_CONTEXT(hash);

	return;
}

void func_1044(BOOL bParam0) // Position - 0x28603 Hash - 0x15EA8A2D ^0x6EE74130
{
	int promptType;
	Player player;

	promptType = 50;
	player = PLAYER::PLAYER_ID();

	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, false);
	}

	return;
}

void func_1045(BOOL bParam0) // Position - 0x28645 Hash - 0xBAD014C9 ^0x3FDE3E28
{
	int promptType;
	Player player;

	promptType = 49;
	player = PLAYER::PLAYER_ID();

	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, false);
	}

	return;
}

int func_1046(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x28687 Hash - 0xB88D7AA5 ^0x36259347
{
	int num;
	int num2;
	int num3;

	num = -2;
	num = iParam4;
	num.f_1 = iParam5;
	num.f_2 = iParam6;
	num.f_3 = iParam8;
	num2.f_7 = 1;
	num2 = iParam7;
	num2.f_1 = sParam0;
	num2.f_2 = sParam1;
	num2.f_3 = 0;
	num2.f_4 = iParam2;
	num2.f_5 = iParam3;
	num2.f_7 = 1;
	num3 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&num, &num2, bParam9, bParam10);
	return num3;
}

int func_1047(int iParam0, Any anParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x286ED Hash - 0x72C1A759 ^0xD848AFAA
{
	BOOL flag;
	int num;
	var unk;
	var unk2;

	if (iParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(iParam0))
		return 1;

	if (bParam7)
	{
		flag = GANG::NETWORK_IS_GANG_ID_VALID(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) && GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
		bParam7 = flag;
	}

	POSSE::_0xC08AFF658B2E51DA(&num);

	if (num != 0)
		func_1090(iParam2, -372840566);

	SECURE_STORE(&unk, iParam0);

	if (!bParam7)
		if (!NETWORK::_0x64A36BA85CE01A81(&unk, &(uParam3->f_1), &(iParam2->f_1), anParam1))
			return 0;
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&unk, &(iParam2->f_1), anParam1))
		return 0;

	unk2.f_1 = 11;
	unk2.f_16 = 255;
	unk2.f_13 = iParam4;
	unk2.f_16 = iParam5;
	unk2.f_14 = iParam6;
	unk2 = { *iParam2 };
	func_1091(anParam1, iParam0, unk2);
	return 1;
}

int func_1048(int iParam0, int iParam1) // Position - 0x287CE Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

void func_1049(int iParam0, int iParam1) // Position - 0x287E4 Hash - 0x74C9983D ^0x6478FDCA
{
	if (iParam0 <= 0)
		return;

	if (func_1092())
	{
		Global_1913444.f_125 = MISC::GET_GAME_TIMER();
		Global_1913444.f_126 = iParam1;
	}

	Global_1913444.f_127 = Global_1913444.f_127 + iParam0;
	return;
}

BOOL func_1050() // Position - 0x28820 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_1051() // Position - 0x28831 Hash - 0x11DC3931 ^0xA685465E
{
	return DLC::IS_DLC_PRESENT(joaat("dlc_ultimateedition"));
}

BOOL func_1052(int iParam0, Hash hParam1, int iParam2) // Position - 0x28842 Hash - 0x5E31EF6C ^0x5E31EF6C
{
	if (!func_17(hParam1, 0))
		return false;

	return func_496(iParam0, hParam1) >= iParam2;
}

BOOL func_1053(int iParam0, Hash hParam1, int iParam2, Hash hParam3, BOOL bParam4) // Position - 0x28864 Hash - 0x1ABECC38 ^0x1ABECC38
{
	var unk;
	var unk6;

	if (!func_17(hParam1, 0))
		return false;

	if (iParam2 < 1)
		return false;

	unk = { func_857(iParam0) };
	unk6 = { func_858(iParam0, hParam1, unk, unk.f_4) };
	return func_1093(iParam0, hParam1, &unk6, iParam2, hParam3, bParam4);
}

var func_1054(BOOL bParam0, var uParam1, var uParam2) // Position - 0x288B3 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_1055(var uParam0) // Position - 0x288CA Hash - 0xE1CD222C ^0x488A5DE0
{
	if (uParam0->f_8 < 0 || uParam0->f_8 >= 7)
		return false;

	return true;
}

BOOL func_1056(var uParam0) // Position - 0x288EC Hash - 0xE26148B9 ^0xD82139C8
{
	switch (uParam0->f_9)
	{
		case 0:
			uParam0->f_8 = uParam0->f_8 + 1;
			break;
	
		case 1:
			if (uParam0->f_10 <= 0)
				return false;
		
			uParam0->f_8 = uParam0->f_8 - 1;
			break;
	
		default:
			return false;
	}

	return true;
}

BOOL func_1057(Hash hParam0, Hash hParam1) // Position - 0x28935 Hash - 0x86D562BB ^0xB258F193
{
	var outData;
	int outUnk;
	Hash unlockHash;
	int num;
	int i;
	int j;

	outData = 10;
	outData.f_1.f_4 = 15;
	outData.f_1.f_36 = 10;
	outData.f_1.f_47.f_4 = 15;
	outData.f_1.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(hParam0, &outData, &outUnk, 10) || outUnk == 0)
		return false;

	num = 0;

	for (i = 0; i < outUnk; i = i + 1)
	{
		if (outData[i /*47*/] == hParam1)
		{
			num = outData[i /*47*/].f_35;
		
			for (j = 0; j < num; j = j + 1)
			{
				unlockHash = outData[i /*47*/].f_36[j];
			
				if (unlockHash == 0)
				{
				}
				else if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
				{
					return true;
				}
			}
		}
	}

	return false;
}

void func_1058(int iParam0) // Position - 0x28A7E Hash - 0x84E910A9 ^0x5650392D
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	func_1094(&(iParam0->f_4));
	return;
}

BOOL func_1059(int iParam0) // Position - 0x28AA1 Hash - 0x745CE6FE ^0x745CE6FE
{
	return func_1032(&(Global_1956875.f_1565), iParam0, 1);
}

int func_1060(BOOL bParam0) // Position - 0x28AB7 Hash - 0x770A7C8B ^0x770A7C8B
{
	if (bParam0)
		return 1;

	return 0;
}

float func_1061(Player plParam0) // Position - 0x28AC9 Hash - 0x67CAB99C ^0xC9B69B05
{
	return PLAYER::_GET_PLAYER_MAX_DEAD_EYE(plParam0, 0) - (float)func_1095(2);
}

int func_1062(int iParam0) // Position - 0x28ADF Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_1063(int iParam0) // Position - 0x28B04 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_1064(int iParam0) // Position - 0x28B17 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_1065(int iParam0) // Position - 0x28B2A Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_1066(int iParam0) // Position - 0x28B3D Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_1067(int iParam0) // Position - 0x28B4F Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_1068(int iParam0, int iParam1) // Position - 0x28B61 Hash - 0x893AC59E ^0x893AC59E
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

void func_1069(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x28BFB Hash - 0xA65AB937 ^0xA65AB937
{
	func_1096(iParam0, iParam6);
	func_1097(iParam0, iParam5);
	func_1098(iParam0, iParam4);
	func_1099(iParam0, iParam3);
	func_1100(iParam0, iParam2);
	func_1101(iParam0, iParam1);
	return;
}

BOOL func_1070(int iParam0) // Position - 0x28C33 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_1067(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_1066(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_1065(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_1062(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_1063(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_1064(iParam0);

	if (num6 < 1 || num6 > func_1068(num5, num4))
		return false;

	return true;
}

int func_1071(int iParam0) // Position - 0x28D0F Hash - 0x26AB94C2 ^0x26AB94C2
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		default:
		
	}

	return 0;
}

char* func_1072(int iParam0) // Position - 0x28D3E Hash - 0xFB90D1AE ^0x5ACB2C1A
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
	
		case 1:
			return "StaminaCoreValue";
	
		case 2:
			return "DeadEyeCoreValue";
	
		default:
		
	}

	return "";
}

char* func_1073(int iParam0) // Position - 0x28D78 Hash - 0xFB90D1AE ^0xBE946A2A
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
	
		case 1:
			return "isLowStaminaCoreActive";
	
		case 2:
			return "isLowDeadEyeCoreActive";
	
		default:
		
	}

	return "";
}

void func_1074(int iParam0, float fParam1, int iParam2) // Position - 0x28DB2 Hash - 0xB327C991 ^0xFEB529B
{
	if (iParam2 == 2)
		iParam2 = func_1001(2);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_6[iParam0 /*3*/] = fParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/] = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_1075(int iParam0, int iParam1, int iParam2) // Position - 0x28E04 Hash - 0x7E1E307C ^0x5642EBD7
{
	if (iParam2 == 2)
		iParam2 = func_1001(2);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_16[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_16[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

int func_1076(int iParam0, int iParam1) // Position - 0x28E5A Hash - 0x26934C66 ^0x26934C66
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
	
		case -2059285007:
			return 167;
	
		case -2006026692:
			return 176;
	
		case -1993903481:
			return 124;
	
		case -1970041458:
			return 142;
	
		case -1935700575:
			return 136;
	
		case -1927422497:
			return 127;
	
		case -1920464018:
			return 58;
	
		case -1919393558:
			return 27;
	
		case -1857550353:
			return 173;
	
		case -1855662261:
			return 55;
	
		case -1840995238:
			return 15;
	
		case -1835722213:
			return 88;
	
		case -1790318144:
			return 106;
	
		case -1786033368:
			return 62;
	
		case -1767968552:
			return 86;
	
		case -1767662471:
			return 32;
	
		case -1729980669:
			return 108;
	
		case -1729554078:
			return 49;
	
		case -1727526861:
			return 109;
	
		case -1722264360:
			return 18;
	
		case -1719665775:
			return 37;
	
		case -1716981503:
			return 107;
	
		case -1697567574:
			return 72;
	
		case -1685270562:
			return 181;
	
		case -1631930150:
			return 166;
	
		case -1629969648:
			return 174;
	
		case -1605880447:
			return 120;
	
		case -1575244501:
			return 61;
	
		case -1551628748:
			return 74;
	
		case -1543433893:
			return 70;
	
		case -1539337723:
			return 121;
	
		case -1525401254:
			return 64;
	
		case -1525233154:
			return 47;
	
		case -1491472827:
			return 94;
	
		case -1486927560:
			return 112;
	
		case -1480068681:
			return 50;
	
		case -1478178768:
			return 148;
	
		case -1465202595:
			return 104;
	
		case -1459368569:
			return 116;
	
		case -1431848307:
			return 76;
	
		case -1418298797:
			return 155;
	
		case -1391865428:
			return 171;
	
		case -1378468884:
			return 60;
	
		case -1291022662:
			return 117;
	
		case -1288042557:
			return 19;
	
		case -1248720641:
			return 7;
	
		case -1229834518:
			return 89;
	
		case -1223791123:
			return 79;
	
		case -1209874968:
			return 45;
	
		case -1197630873:
			return 153;
	
		case -1196069774:
			return 180;
	
		case -1181880939:
			return 80;
	
		case -1170784825:
			return 38;
	
		case -1125028284:
			return 137;
	
		case -1123356036:
			return 147;
	
		case -1100659165:
			return 6;
	
		case -1089821002:
			return 85;
	
		case -1084890102:
			return 172;
	
		case -1080696981:
			return 92;
	
		case -1010031245:
			return 39;
	
		case -992423055:
			return 157;
	
		case -979738281:
			return 77;
	
		case -931294997:
			return 111;
	
		case -920221586:
			return 110;
	
		case -900877140:
			return 30;
	
		case -885737328:
			return 114;
	
		case -885646667:
			return 67;
	
		case -837774766:
			return 78;
	
		case -813902658:
			return 182;
	
		case -799500009:
			return 145;
	
		case -751329575:
			return 139;
	
		case -711254121:
			return 132;
	
		case -660114191:
			return 31;
	
		case -649929946:
			return 53;
	
		case -636552746:
			return 123;
	
		case -587737142:
			return 71;
	
		case -546870456:
			return 159;
	
		case -521477124:
			return 82;
	
		case -481051896:
			return 135;
	
		case -425216802:
			return 17;
	
		case -415437740:
			return 103;
	
		case -415250715:
			return 144;
	
		case -392183396:
			return 90;
	
		case -343572565:
			return 21;
	
		case -340578116:
			return 169;
	
		case -286632741:
			return 8;
	
		case -267135864:
			return 138;
	
		case -233204301:
			return 105;
	
		case -203268054:
			return 143;
	
		case -161625840:
			return 177;
	
		case -126580932:
			return 0;
	
		case -117284255:
			return 122;
	
		case -60432888:
			return 44;
	
		case -56802666:
			return 102;
	
		case -47513954:
			return 99;
	
		case -46116991:
			return 163;
	
		case -35033037:
			return 133;
	
		case -33431232:
			return 12;
	
		case -29822088:
			return 40;
	
		case 0:
			return 1;
	
		case 1213703:
			return 154;
	
		case 54499763:
			return 98;
	
		case 111084081:
			return 56;
	
		case 114587291:
			return 29;
	
		case 149216078:
			return 57;
	
		case 168336706:
			return 149;
	
		case 173401469:
			return 100;
	
		case 180714777:
			return 81;
	
		case 268103762:
			return 97;
	
		case 282858309:
			return 183;
	
		case 320758674:
			return 158;
	
		case 352539363:
			return 179;
	
		case 362862598:
			return 170;
	
		case 398279342:
			return 34;
	
		case 408582472:
			return 5;
	
		case 420477860:
			return 25;
	
		case 456199285:
			return 168;
	
		case 509781427:
			return 93;
	
		case 550487527:
			return 35;
	
		case 576694808:
			return 175;
	
		case 638586808:
			return 118;
	
		case 659100749:
			return 59;
	
		case 666050502:
			return 65;
	
		case 698214003:
			return 2;
	
		case 713106899:
			return 36;
	
		case 780689752:
			return 3;
	
		case 791791441:
			return 125;
	
		case 797908556:
			return 42;
	
		case 798283666:
			return 141;
	
		case 807983049:
			return 150;
	
		case 839199173:
			return 91;
	
		case 846387993:
			return 14;
	
		case 852774198:
			return 113;
	
		case 878491929:
			return 33;
	
		case 887717126:
			return 66;
	
		case 926420921:
			return 51;
	
		case 946848176:
			return 68;
	
		case 952755846:
			return 24;
	
		case 955999834:
			return 134;
	
		case 956867472:
			return 9;
	
		case 1036630721:
			return 10;
	
		case 1037792287:
			return 140;
	
		case 1052684812:
			return 87;
	
		case 1075856357:
			return 95;
	
		case 1078589127:
			return 46;
	
		case 1095779900:
			return 22;
	
		case 1110815339:
			return 152;
	
		case 1138017610:
			return 11;
	
		case 1156950836:
			return 83;
	
		case 1195903441:
			return 52;
	
		case 1278022357:
			return 48;
	
		case 1281707602:
			return 164;
	
		case 1323028278:
			return 41;
	
		case 1374979106:
			return 28;
	
		case 1405624312:
			return 146;
	
		case 1444077748:
			return 23;
	
		case 1449867002:
			return 162;
	
		case 1498983922:
			return 84;
	
		case 1547488310:
			return 161;
	
		case 1554410187:
			return 73;
	
		case 1585362808:
			return 16;
	
		case 1636352616:
			return 151;
	
		case 1662680949:
			return 178;
	
		case 1698995037:
			return 4;
	
		case 1769731136:
			return 115;
	
		case 1801131110:
			return 75;
	
		case 1806354060:
			return 96;
	
		case 1811663962:
			return 131;
	
		case 1828803907:
			return 20;
	
		case 1829805500:
			return 54;
	
		case 1830494920:
			return 101;
	
		case 1838787462:
			return 129;
	
		case 1865781806:
			return 165;
	
		case 1899963938:
			return 63;
	
		case 1900141702:
			return 156;
	
		case 1903067887:
			return 126;
	
		case 1907663129:
			return 43;
	
		case 2040423027:
			return 128;
	
		case 2050123975:
			return 130;
	
		case 2096770678:
			return 119;
	
		case 2110112797:
			return 69;
	
		case 2119170919:
			return 160;
	
		case 2132307595:
			return 26;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

// Unhandled jump detected. Output should be considered invalid
int func_1077(int iParam0) // Position - 0x2965B Hash - 0x85160494 ^0x6688B38
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int j;
	int k;

	if (!func_1102(iParam0))
		return 0;

	num = func_1076(iParam0, 1);

	if (!func_1103(Global_1156111.f_35859.f_919[num /*12*/]))
		return 1;

	num4 = func_1104(Global_1156111.f_35859.f_919[num /*12*/], 1);

	for (i = 0; i < Global_1156111.f_35859[num4 /*6*/].f_5; i = i + 1)
	{
		num2 = Global_1156111.f_35859[num4 /*6*/][i];
	
		switch (func_1105(iParam0, num2))
		{
			case 0:
				func_1106(num2, iParam0, i);
				break;
		
			case 1:
				for (j = 0; j < Global_1156111.f_35859.f_11700; j = j + 1)
				{
					if (Global_1156111.f_35859.f_9503[j /*3*/] != num2 || Global_1156111.f_35859.f_9503[j /*3*/].f_1 != iParam0)
					{
					}
					else
					{
						func_1106(num2, iParam0, i);
						func_1107(&Global_1156111.f_35859.f_9503[j /*3*/]);
						Global_1156111.f_35859.f_11700 = Global_1156111.f_35859.f_11700 - 1;
						Global_1156111.f_35859.f_9503[j /*3*/] = { Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/] };
						func_1107(&Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/]);
						break;
					}
				}
				break;
		
			case 2:
				goto 0x25E;
		}
	
		num3 = func_1108(num2, 1);
		func_1109(num3, -1);
	
		if (Global_1156111.f_35859.f_3116[num3 /*31*/].f_29 <= 0)
		{
			func_1110(num3, 0);
		
			for (k = 0; k < Global_1156111.f_35859.f_9502; k = k + 1)
			{
				if (Global_1156111.f_35859.f_9302[k] != num2)
				{
				}
				else
				{
					Global_1156111.f_35859.f_9302[k] = -1;
					Global_1156111.f_35859.f_9502 = Global_1156111.f_35859.f_9502 - 1;
					Global_1156111.f_35859.f_9302[k] = Global_1156111.f_35859.f_9302[Global_1156111.f_35859.f_9502];
					Global_1156111.f_35859.f_9302[Global_1156111.f_35859.f_9502] = -1;
					break;
				}
			}
		}
	}

	Global_1156111.f_35859.f_919[num /*12*/] = -1;
	func_1111(&Global_1156111.f_35859.f_919[num /*12*/]);
	return 1;
}

BOOL func_1078(int iParam0) // Position - 0x298EB Hash - 0x969D658D ^0x969D658D
{
	if (func_1014(iParam0))
		return true;
	else if (func_1112(iParam0))
		return true;

	return false;
}

void func_1079(int iParam0, float fParam1, int iParam2) // Position - 0x29911 Hash - 0xF69206DE ^0x1EC60A3A
{
	if (fParam1 < 0f)
		return;

	if (iParam2 == 2)
		iParam2 = func_1001(1);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_26[iParam0] = fParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_26[iParam0] = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_1080(var uParam0, int iParam1) // Position - 0x2996D Hash - 0x718DD1EF ^0xD9260236
{
	return uParam0->f_2 && iParam1 != false;
}

BOOL func_1081(int iParam0, int iParam1) // Position - 0x2997E Hash - 0xEE6DCA90 ^0xB0C7528A
{
	if (iParam0 < 0 || iParam0 >= 39)
		return false;

	return Global_1953292.f_83[iParam0 /*12*/].f_10 && iParam1 != false;
}

Vector3 func_1082(int iParam0, int iParam1) // Position - 0x299AD Hash - 0xC0396140 ^0x90919964
{
	if (iParam1 == -1)
		iParam1 = Global_17418.f_55.f_664.f_1777;

	return Global_17418.f_55.f_664.f_33[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

BOOL func_1083(int iParam0, int iParam1) // Position - 0x299E0 Hash - 0xECB143B0 ^0xBA414228
{
	return Global_1953292.f_83[iParam0 /*12*/].f_11 && iParam1 != false;
}

void func_1084(int iParam0, int iParam1, int iParam2) // Position - 0x299F9 Hash - 0xF59FAE7F ^0x9B3AA80E
{
	Global_1953292.f_83[iParam0 /*12*/].f_11 = Global_1953292.f_83[iParam0 /*12*/].f_11 - Global_1953292.f_83[iParam0 /*12*/].f_11 && iParam1;
	return;
}

void func_1085(int iParam0, int iParam1, int iParam2) // Position - 0x29A29 Hash - 0x5033A276 ^0xAD3736DE
{
	Global_1953292.f_83[iParam0 /*12*/].f_11 = Global_1953292.f_83[iParam0 /*12*/].f_11 || iParam1;
	return;
}

BOOL func_1086(Hash hParam0) // Position - 0x29A4C Hash - 0x620CA239 ^0xCC576E0
{
	return hParam0 != joaat("clothing_item_m_beard_stubble") && hParam0 != -230310728 && hParam0 != 1326838792 && !func_833(hParam0);
}

int func_1087(Hash hParam0) // Position - 0x29A82 Hash - 0xEAAB2463 ^0xEAAB2463
{
	switch (hParam0)
	{
		case -1740828670:
			return 8;
	
		case 344283346:
			return 16;
	
		case 502936876:
			return 1;
	
		case 684307653:
			return 2;
	
		case 1759215194:
			return 4;
	
		default:
		
	}

	return 0;
}

BOOL func_1088(int iParam0, int iParam1) // Position - 0x29AC7 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_1089(Hash hParam0) // Position - 0x29AD6 Hash - 0xD47FBCD ^0xAB7C7E88
{
	return func_19(hParam0, 1279601681);
}

void func_1090(int iParam0, int iParam1) // Position - 0x29AE9 Hash - 0xC00BEAB5 ^0x728D99B1
{
	if (iParam1 == 0)
		return;

	if (SECURE_LOAD(&iParam0) >= 11)
		return;

	SECURE_STORE(&iParam0->f_1[SECURE_LOAD(&iParam0)], iParam1);
	SECURE_STORE(&iParam0, SECURE_LOAD(&iParam0) + 1);
	return;
}

void func_1091(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18) // Position - 0x29B19 Hash - 0xE040F56 ^0xE040F56
{
	int i;
	var unk;

	if (!func_1036(anParam0))
		return;

	if (Global_1292143.f_2012 < 20)
	{
		Global_1292143.f_2012 = Global_1292143.f_2012 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1292143.f_2012.f_1[i /*24*/] = { Global_1292143.f_2012.f_1[i + 1 /*24*/] };
		}
	}

	unk.f_7.f_1 = 11;
	unk.f_7.f_16 = 255;
	unk = { *anParam0 };
	unk.f_4 = iParam1;
	unk.f_7 = { uParam2 };
	unk.f_6 = 1;
	Global_1292143.f_2012.f_1[Global_1292143.f_2012 - 1 /*24*/] = { unk };
	return;
}

BOOL func_1092() // Position - 0x29BD4 Hash - 0x977C1DDD ^0x1581CA55
{
	return Global_1913444.f_127 == 0;
}

BOOL func_1093(int iParam0, Hash hParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x29BE4 Hash - 0xBC47E790 ^0xD04171B4
{
	var unk;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_542(hParam1))
		return 0;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_1113(iParam0, *panParam2, &unk, false))
		return 0;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(iParam0, panParam2, iParam3, hParam4))
		return 0;

	return 1;
}

void func_1094(var uParam0) // Position - 0x29C5C Hash - 0x58FD8C3D ^0x7E71AD66
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
	return;
}

int func_1095(int iParam0) // Position - 0x29CB7 Hash - 0xF103C6A6 ^0xF103C6A6
{
	switch (iParam0)
	{
		case 0:
			return func_896(2) * 2;
	
		case 1:
			return func_900(2) * 2;
	
		case 2:
			return func_898(2) * 2;
	
		default:
		
	}

	return -1;
}

void func_1096(var uParam0, int iParam1) // Position - 0x29CF8 Hash - 0xD05180BA ^0x39589262
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

void func_1097(var uParam0, int iParam1) // Position - 0x29D7E Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_1098(var uParam0, int iParam1) // Position - 0x29DBA Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_1063(*uParam0);
	num2 = func_1062(*uParam0);

	if (iParam1 < 1 || iParam1 > func_1068(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_1099(var uParam0, int iParam1) // Position - 0x29E0D Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_1100(var uParam0, int iParam1) // Position - 0x29E48 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_1101(var uParam0, int iParam1) // Position - 0x29E81 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_1102(int iParam0) // Position - 0x29EB9 Hash - 0xFFB3C2F0 ^0xFFB3C2F0
{
	int num;

	num = func_1076(iParam0, 1);

	if (num < 2 || num >= 183)
		return false;

	return true;
}

BOOL func_1103(int iParam0) // Position - 0x29EE1 Hash - 0x2BE93DAE ^0x2BE93DAE
{
	int num;

	num = func_1104(iParam0, 1);

	if (num < 1 || num >= 153)
		return false;

	return true;
}

int func_1104(int iParam0, int iParam1) // Position - 0x29F09 Hash - 0x89B5041A ^0x89B5041A
{
	switch (iParam0)
	{
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3"):
			return 100;
	
		case joaat("CONTENT__PREDATOR__LEVEL_0"):
			return 136;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3"):
			return 63;
	
		case -2082434331:
			return 152;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2"):
			return 65;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2"):
			return 93;
	
		case -2038430863:
			return 151;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1"):
			return 64;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2"):
			return 35;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3"):
			return 6;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2"):
			return 56;
	
		case joaat("CONTENT__PREDATOR__LEVEL_3"):
			return 139;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3"):
			return 54;
	
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS"):
			return 110;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2"):
			return 78;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1"):
			return 80;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2"):
			return 62;
	
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME"):
			return 73;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2"):
			return 41;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1"):
			return 25;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1"):
			return 92;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2"):
			return 47;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1"):
			return 61;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3"):
			return 3;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1"):
			return 49;
	
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY"):
			return 148;
	
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS"):
			return 107;
	
		case joaat("UNLOCK__ROLE__INTUITION_BONUS"):
			return 111;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1"):
			return 55;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3"):
			return 9;
	
		case joaat("CONTENT__PREDATOR__LEVEL_1"):
			return 137;
	
		case -1246069683:
			return 124;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1"):
			return 46;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1"):
			return 74;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3"):
			return 69;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1"):
			return 7;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4"):
			return 131;
	
		case joaat("CONTENT__PREDATOR__LEVEL_7"):
			return 143;
	
		case -1105699593:
			return 153;
	
		case -1047626954:
			return 118;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1"):
			return 1;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3"):
			return 79;
	
		case -980934770:
			return 125;
	
		case joaat("CONTENT__PREDATOR__LEVEL_4"):
			return 140;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5"):
			return 132;
	
		case joaat("CONTENT__PREDATOR__LEVEL_6"):
			return 142;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3"):
			return 60;
	
		case -821191074:
			return 115;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1"):
			return 40;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3"):
			return 48;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1"):
			return 77;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_2"):
			return 17;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2"):
			return 2;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3"):
			return 72;
	
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM"):
			return 121;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2"):
			return 59;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3"):
			return 85;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3"):
			return 94;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1"):
			return 4;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2"):
			return 68;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1"):
			return 58;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1"):
			return 128;
	
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY"):
			return 119;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1"):
			return 10;
	
		case joaat("CONTENT__HUNTED__MASKED"):
			return 146;
	
		case joaat("CONTENT__PASSIVE_MODE"):
			return 135;
	
		case -193167881:
			return 127;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3"):
			return 30;
	
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN"):
			return 122;
	
		case joaat("CONSUMABLE__DAILY_STEW"):
			return 150;
	
		case joaat("CONTENT__PREDATOR__LEVEL_5"):
			return 141;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1"):
			return 67;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1"):
			return 43;
	
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS"):
			return 106;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3"):
			return 39;
	
		case -1:
			return 0;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2"):
			return 8;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2"):
			return 11;
	
		case 130533095:
			return 126;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_3"):
			return 18;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2"):
			return 44;
	
		case 158579484:
			return 117;
	
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE"):
			return 101;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3"):
			return 15;
	
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS"):
			return 113;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6"):
			return 133;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1"):
			return 86;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2"):
			return 71;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2"):
			return 29;
	
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS"):
			return 105;
	
		case joaat("STATUS_EFFECT__POISON"):
			return 102;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3"):
			return 12;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3"):
			return 51;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7"):
			return 134;
	
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS"):
			return 109;
	
		case 549687162:
			return 145;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1"):
			return 28;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_1"):
			return 16;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2"):
			return 26;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1"):
			return 98;
	
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF"):
			return 149;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3"):
			return 45;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2"):
			return 50;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3"):
			return 88;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3"):
			return 36;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2"):
			return 90;
	
		case joaat("CONTENT__PREDATOR__LEVEL_8"):
			return 144;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2"):
			return 81;
	
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS"):
			return 114;
	
		case 808176588:
			return 116;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2"):
			return 38;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1"):
			return 70;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3"):
			return 21;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2"):
			return 14;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1"):
			return 89;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2"):
			return 96;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3"):
			return 82;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2"):
			return 87;
	
		case joaat("UNLOCK__ROLE__FOCUS_BONUS"):
			return 104;
	
		case 1130659268:
			return 123;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2"):
			return 20;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2"):
			return 75;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1"):
			return 31;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3"):
			return 97;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1"):
			return 19;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2"):
			return 32;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3"):
			return 24;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2"):
			return 129;
	
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS"):
			return 112;
	
		case joaat("CONTENT__PREDATOR__LEVEL_2"):
			return 138;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1"):
			return 83;
	
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF"):
			return 147;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3"):
			return 57;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1"):
			return 22;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3"):
			return 33;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3"):
			return 130;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1"):
			return 13;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2"):
			return 84;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1"):
			return 95;
	
		case joaat("EQUIPMENT__NED_KELLY_COOP"):
			return 120;
	
		case joaat("STATUS_EFFECT__TRACKING"):
			return 103;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2"):
			return 23;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2"):
			return 99;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3"):
			return 66;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1"):
			return 52;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3"):
			return 27;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3"):
			return 76;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2"):
			return 5;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3"):
			return 42;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1"):
			return 37;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1"):
			return 34;
	
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS"):
			return 108;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2"):
			return 53;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3"):
			return 91;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_1105(int iParam0, int iParam1) // Position - 0x2A5C0 Hash - 0x39669B5F ^0xB47C98D2
{
	Player player;
	Player player2;
	int num;

	player = func_1114(iParam0);
	player2 = Global_1295666;
	num = func_1108(iParam1, 1);

	switch (Global_1156111.f_35859.f_3116[num /*31*/].f_1)
	{
		case joaat("ON_DISABLE"):
			if (player2 == player)
				return 0;
			else
				return 2;
			break;
	
		case joaat("Duration"):
		case joaat("DURATION_OR_MISS"):
		case joaat("ALLY_LEAVE_DEADEYE"):
		case 1002704651:
		case 1270499458:
			return 1;
	
		default:
			if (player2 == player)
				return 1;
			break;
	}

	return 2;
}

int func_1106(int iParam0, int iParam1, int iParam2) // Position - 0x2A643 Hash - 0xE22C7CA2 ^0xE22C7CA2
{
	int num;
	int num2;

	if (!func_1102(iParam1))
		return 0;

	if (!func_1115(iParam0))
		return 0;

	num = func_1108(iParam0, 1);
	func_1116(iParam0, iParam1, iParam2);

	if (func_1117(Global_1156111.f_35859.f_3116[num /*31*/]) && func_1118(iParam0, Global_1156111.f_35859.f_3116[num /*31*/].f_4))
	{
		num2 = { func_1119(Global_1156111.f_35859.f_3116[num /*31*/].f_4) };
	
		if (func_1120(num2))
			if (func_1121(num2, num2.f_1, num2.f_2))
				func_1122(Global_1156111.f_35859.f_3116[num /*31*/].f_4, num2, num2.f_1, num2.f_2);
			else
				func_1123(Global_1156111.f_35859.f_3116[num /*31*/].f_4);
		else
			func_1123(Global_1156111.f_35859.f_3116[num /*31*/].f_4);
	}

	return 1;
}

void func_1107(int iParam0) // Position - 0x2A73B Hash - 0xBACBE486 ^0xD8F73B9E
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = -1;
	return;
}

int func_1108(int iParam0, int iParam1) // Position - 0x2A751 Hash - 0x9DD4188 ^0x9DD4188
{
	switch (iParam0)
	{
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS_EFFECT"):
			return 145;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2_EFFECT"):
			return 108;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1_EFFECT"):
			return 90;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_LOCAL_EFFECT"):
			return 79;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3_EFFECT"):
			return 60;
	
		case joaat("STATUS_EFFECT__POISON_EFFECT"):
			return 137;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2_EFFECT"):
			return 91;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2_EFFECT"):
			return 75;
	
		case -2019073637:
			return 198;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3_EFFECT"):
			return 26;
	
		case joaat("CONTENT__PREDATOR__LEVEL_2_EFFECTS"):
			return 180;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3_EFFECT"):
			return 92;
	
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY_EFFECT"):
			return 194;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_2_EFFECT"):
			return 28;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_TAKEN_EFFECT"):
			return 130;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3_EFFECT"):
			return 49;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3_EFFECT"):
			return 22;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1_EFFECT"):
			return 55;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_ON_HORSEBACK_INDICATOR"):
			return 6;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2_EFFECT"):
			return 134;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_3_EFFECT"):
			return 29;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3_EFFECT"):
			return 16;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3_EFFECT"):
			return 112;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3_EFFECT"):
			return 106;
	
		case joaat("ABILITY_CARD__HANGMAN_INDICATOR"):
			return 30;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGED_INDICATOR"):
			return 8;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2_EFFECT"):
			return 111;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2_EFFECT"):
			return 96;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3_EFFECT"):
			return 45;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_EFFECT"):
			return 63;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2_EFFECT"):
			return 38;
	
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS"):
			return 188;
	
		case joaat("EQUIPMENT__NED_KELLY_BASE_IMMUNITIES"):
			return 156;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_INDICATOR"):
			return 50;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1_EFFECT"):
			return 117;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3_EFFECT"):
			return 39;
	
		case joaat("CONTENT__PREDATOR__LEVEL_4_EFFECTS"):
			return 182;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3_EFFECT"):
			return 109;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3_EFFECT"):
			return 33;
	
		case -1394912816:
			return 199;
	
		case -1391351739:
			return 166;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_1_EFFECT"):
			return 27;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1_EFFECT"):
			return 110;
	
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_1_COST"):
			return 1;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_PENALTY"):
			return 46;
	
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_2_COST"):
			return 2;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_TAKEN_EFFECT"):
			return 132;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3_EFFECT"):
			return 119;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3_EFFECT"):
			return 76;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_AURA"):
			return 61;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7_EFFECT"):
			return 173;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1_EFFECT"):
			return 47;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1_EFFECT"):
			return 74;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1_EFFECT"):
			return 31;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1_EFFECT"):
			return 123;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2_EFFECT"):
			return 124;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2_EFFECT"):
			return 11;
	
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_INDICATOR"):
			return 103;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2_EFFECT"):
			return 21;
	
		case joaat("CONTENT__PREDATOR__LEVEL_6_EFFECTS"):
			return 184;
	
		case -749371485:
			return 164;
	
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS_EFFECT"):
			return 142;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_LOCAL_EFFECT"):
			return 81;
	
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS_EFFECT"):
			return 148;
	
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF_EFFECT"):
			return 193;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3_EFFECT"):
			return 57;
	
		case joaat("CONTENT__PREDATOR__LEVEL_3_EFFECTS"):
			return 181;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2_EFFECT"):
			return 48;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2_EFFECT"):
			return 59;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3_EFFECT"):
			return 97;
	
		case joaat("CONTENT__PREDATOR__LEVEL_7_EFFECTS"):
			return 185;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1_EFFECT"):
			return 104;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3_EFFECT"):
			return 19;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1_EFFECT"):
			return 133;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1_EFFECT"):
			return 113;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_INDICATOR"):
			return 23;
	
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM_EFFECT"):
			return 160;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_INDICATOR"):
			return 5;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_AURA"):
			return 13;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_COST"):
			return 66;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_INDICATOR"):
			return 4;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1_COST"):
			return 51;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6_EFFECT"):
			return 172;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_PENALTY"):
			return 68;
	
		case -254950601:
			return 152;
	
		case -242870769:
			return 163;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2_EFFECT"):
			return 35;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2_EFFECT"):
			return 105;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2_EFFECT"):
			return 41;
	
		case joaat("EQUIPMENT__NED_KELLY_BASE_EFFECTS"):
			return 155;
	
		case -124368414:
			return 197;
	
		case -106398498:
			return 153;
	
		case -97000889:
			return 86;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3_EFFECT"):
			return 169;
	
		case -1:
			return 0;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2_EFFECT"):
			return 56;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3_EFFECT"):
			return 125;
	
		case joaat("ABILITY_CARD__DEFAULT_WINDED_INDICATOR"):
			return 9;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1_EFFECT"):
			return 69;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2_EFFECT"):
			return 15;
	
		case joaat("CONTENT__PASSIVE_MODE__IMMUNITIES_EFFECT"):
			return 177;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_COST"):
			return 64;
	
		case joaat("CONTENT__PASSIVE_MODE__MOUNT_EFFECTS"):
			return 175;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1_EFFECT"):
			return 98;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_LOCAL_EFFECT"):
			return 77;
	
		case 275909046:
			return 151;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5_EFFECT"):
			return 171;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_INDICATOR"):
			return 54;
	
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE_EFFECT"):
			return 136;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3_EFFECT"):
			return 89;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_DEALT_EFFECT"):
			return 127;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_DEALT_EFFECT"):
			return 129;
	
		case 558636891:
			return 187;
	
		case joaat("CONSUMABLE__DAILY_STEW_EFFECT"):
			return 196;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_REMOTE_EFFECT"):
			return 80;
	
		case 634217179:
			return 150;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2_EFFECT"):
			return 70;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1_EFFECT"):
			return 95;
	
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF_EFFECT"):
			return 195;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1_EFFECT"):
			return 107;
	
		case joaat("UNLOCK__ROLE__FOCUS_BONUS_EFFECT"):
			return 139;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1_EFFECT"):
			return 20;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_REMOTE_EFFECT"):
			return 82;
	
		case joaat("CONTENT__PREDATOR__LEVEL_0_EFFECTS"):
			return 178;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_EFFECT"):
			return 65;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1_EFFECT"):
			return 58;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1_EFFECT"):
			return 83;
	
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS_EFFECT"):
			return 149;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2_EFFECT"):
			return 18;
	
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_COST"):
			return 102;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4_EFFECT"):
			return 170;
	
		case joaat("CONTENT__PREDATOR__LEVEL_8_EFFECTS"):
			return 186;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2_EFFECT"):
			return 84;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3_EFFECT"):
			return 100;
	
		case joaat("CONTENT__HUNTED__MASKED_EFFECTS"):
			return 192;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_DEADEYE_INDICATOR"):
			return 93;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_DEALT_EFFECT"):
			return 131;
	
		case joaat("CONTENT__PREDATOR__LEVEL_5_EFFECTS"):
			return 183;
	
		case joaat("EQUIPMENT__NED_KELLY_BASE_RESTRICTIONS"):
			return 157;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1_EFFECT"):
			return 17;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3_EFFECT"):
			return 122;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3_EFFECT"):
			return 115;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1_EFFECT"):
			return 34;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2_EFFECT"):
			return 32;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1_EFFECT"):
			return 43;
	
		case joaat("STATUS_EFFECT__TRACKING_EFFECT"):
			return 138;
	
		case joaat("CONTENT__PASSIVE_MODE__VEHICLE_EFFECTS"):
			return 176;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3_EFFECT"):
			return 42;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1_EFFECT"):
			return 10;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3_EFFECT"):
			return 12;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_AURA"):
			return 73;
	
		case 1256374770:
			return 165;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3_EFFECT"):
			return 36;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1_EFFECT"):
			return 37;
	
		case joaat("CONTENT__PREDATOR__BASE_IMMUNITIES"):
			return 190;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2_EFFECT"):
			return 114;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2_EFFECT"):
			return 99;
	
		case 1305406380:
			return 162;
	
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS_EFFECT"):
			return 144;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2_EFFECT"):
			return 25;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2_EFFECT"):
			return 88;
	
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS_EFFECT"):
			return 143;
	
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS_EFFECT"):
			return 140;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_EAGLE_EYE_INDICATOR"):
			return 94;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2_EFFECT"):
			return 168;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3_EFFECT"):
			return 85;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1_EFFECT"):
			return 87;
	
		case 1462245043:
			return 154;
	
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS_VULNERABLE"):
			return 189;
	
		case joaat("UNLOCK__ROLE__INTUITION_BONUS_EFFECT"):
			return 146;
	
		case joaat("CONTENT__PREDATOR__RESPAWN_EFFECTS"):
			return 191;
	
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS_EFFECT"):
			return 147;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_COST"):
			return 62;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_REMOTE_EFFECT"):
			return 78;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_INDICATOR"):
			return 126;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_INDICATOR"):
			return 116;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_PENALTIES"):
			return 72;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_EFFECT"):
			return 67;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_INDICATOR"):
			return 101;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_TAKEN_EFFECT"):
			return 128;
	
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY_EFFECT"):
			return 158;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3_EFFECT"):
			return 71;
	
		case joaat("CONTENT__PREDATOR__LEVEL_1_EFFECTS"):
			return 179;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3_EFFECT"):
			return 135;
	
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_3_COST"):
			return 3;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2_EFFECT"):
			return 121;
	
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS_EFFECT"):
			return 141;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1_EFFECT"):
			return 24;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1_EFFECT"):
			return 167;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1_EFFECT"):
			return 40;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_ON_HORSEBACK_INDICATOR"):
			return 7;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3_COST"):
			return 53;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2_EFFECT"):
			return 118;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2_EFFECT"):
			return 44;
	
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN_EFFECT"):
			return 161;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2_COST"):
			return 52;
	
		case joaat("CONTENT__PASSIVE_MODE__DAMAGE_EFFECTS"):
			return 174;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1_EFFECT"):
			return 120;
	
		case joaat("EQUIPMENT__NED_KELLY_COOP_EFFECT"):
			return 159;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1_EFFECT"):
			return 14;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_1109(int iParam0, int iParam1) // Position - 0x2B002 Hash - 0x73AEC1AE ^0x984E1AE9
{
	Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 = Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1;
	return;
}

void func_1110(int iParam0, int iParam1) // Position - 0x2B031 Hash - 0x3B92C3EA ^0xE3D6CCE1
{
	Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
	return;
}

void func_1111(int iParam0) // Position - 0x2B04D Hash - 0x430DB350 ^0x725C69ED
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		iParam0->f_1[i /*2*/] = 0;
		iParam0->f_1[i /*2*/].f_1 = 0;
	}

	return;
}

BOOL func_1112(int iParam0) // Position - 0x2B07B Hash - 0x830CD3BA ^0x830CD3BA
{
	switch (iParam0)
	{
		case 12:
			return true;
	
		case 13:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_1113(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, Any* panParam5, BOOL bParam6) // Position - 0x2B0A0 Hash - 0x9301D070 ^0x96DC8844
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam0, &uParam1, panParam5, !bParam6))
		return false;

	return true;
}

Player func_1114(int iParam0) // Position - 0x2B0CC Hash - 0xF3F3BDC0 ^0xF3F3BDC0
{
	if (func_1124(iParam0))
		return func_1125(iParam0) % 32;

	return Global_1295666;
}

BOOL func_1115(int iParam0) // Position - 0x2B0ED Hash - 0xE6FB7F28 ^0xE6FB7F28
{
	int num;

	num = func_1108(iParam0, 1);

	if (num < 1 || num >= 199)
		return false;

	return true;
}

int func_1116(int iParam0, int iParam1, int iParam2) // Position - 0x2B115 Hash - 0xAE2CC17B ^0x2CD7F4CE
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int num5;
	int num6;
	int j;
	int num7;

	num = func_1076(iParam1, 1);
	num2 = func_1108(iParam0, 1);
	num3 = func_1104(Global_1156111.f_35859.f_919[num /*12*/], 1);

	if (Global_1156111.f_35859[num3 /*6*/][iParam2] != iParam0)
		return 0;

	if (!Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/])
		return 1;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/] = false;

	for (i = 0; i < Global_1156111.f_35859.f_3116[num2 /*31*/].f_16; i = i + 1)
	{
		num4 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/];
		num5 = func_1126(num4, 1);
	
		if (!func_1127(num4))
		{
		}
		else
		{
			Global_1156111.f_2169[num5 /*205*/].f_1[num2] = Global_1156111.f_2169[num5 /*205*/].f_1[num2] - 1;
			Global_1156111.f_2169[num5 /*205*/].f_201 = Global_1156111.f_2169[num5 /*205*/].f_201 - func_1128(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/]);
			func_1129(num4);
		}
	}

	for (j = 0; j < Global_1156111.f_35859.f_3116[num2 /*31*/].f_28; j = j + 1)
	{
		num6 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/];
	
		if (!func_1130(num6))
		{
		}
		else
		{
			num7 = func_1131(num6, 1);
			Global_1156111.f_21645[num7 /*209*/][num2] = Global_1156111.f_21645[num7 /*209*/][num2] - 1;
		
			if (Global_1156111.f_21645[num7 /*209*/][num2] <= 0)
				MISC::_CLEAR_BIT_FLAG(&(Global_1156111.f_21645[num7 /*209*/].f_200), num2);
		
			if (!MISC::_IS_ANY_BIT_FLAG_SET(&(Global_1156111.f_21645[num7 /*209*/].f_200)))
			{
				Global_1156111.f_21645[num7 /*209*/].f_208 = 0;
				func_1132(num6);
			}
		}
	}

	return 1;
}

BOOL func_1117(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x2B306 Hash - 0x911ECD26 ^0x92039873
{
	return uParam0.f_4 != 0;
}

BOOL func_1118(int iParam0, int iParam1) // Position - 0x2B314 Hash - 0xBA8D4E8F ^0x2A068003
{
	int num;

	if (!func_1115(iParam0))
		return false;

	if (!func_1133(iParam1))
		return false;

	num = func_1134(iParam1, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/] == iParam0;
}

Vector3 func_1119(int iParam0) // Position - 0x2B354 Hash - 0x4827F1DB ^0x96104558
{
	int num;
	var unk;

	num = func_1135(iParam0);

	if (num == -1)
	{
		unk = -1;
		unk.f_2 = -1;
		return unk;
	}

	return Global_1156111.f_35859.f_9503[num /*3*/];
}

BOOL func_1120(int iParam0, var uParam1, var uParam2) // Position - 0x2B390 Hash - 0xB201D59F ^0xA3399F39
{
	if (!func_1115(iParam0))
		return false;

	if (!func_1102(iParam0.f_1))
		return false;

	if (!func_1136(iParam0.f_2))
		return false;

	return true;
}

BOOL func_1121(int iParam0, int iParam1, int iParam2) // Position - 0x2B3C7 Hash - 0xAE2CC17B ^0x2CD7F4CE
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int num5;
	int num6;
	int j;
	int num7;

	num = func_1076(iParam1, 1);
	num2 = func_1108(iParam0, 1);
	num3 = func_1104(Global_1156111.f_35859.f_919[num /*12*/], 1);

	if (Global_1156111.f_35859[num3 /*6*/][iParam2] != iParam0)
		return false;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/].f_1 = Global_1295666.f_16;

	if (Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/])
		return true;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/] = true;

	for (i = 0; i < Global_1156111.f_35859.f_3116[num2 /*31*/].f_16; i = i + 1)
	{
		num4 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/];
		num5 = func_1126(num4, 1);
	
		if (!func_1127(num4))
		{
		}
		else
		{
			Global_1156111.f_2169[num5 /*205*/].f_1[num2] = Global_1156111.f_2169[num5 /*205*/].f_1[num2] + 1;
			Global_1156111.f_2169[num5 /*205*/].f_201 = Global_1156111.f_2169[num5 /*205*/].f_201 + func_1128(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/]);
			func_1137(num4);
		}
	}

	for (j = 0; j < Global_1156111.f_35859.f_3116[num2 /*31*/].f_28; j = j + 1)
	{
		num6 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/];
	
		if (!func_1130(num6))
		{
		}
		else if (!func_1138(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/]))
		{
		}
		else
		{
			num7 = func_1131(num6, 1);
			Global_1156111.f_21645[num7 /*209*/][num2] = Global_1156111.f_21645[num7 /*209*/][num2] + 1;
			MISC::_SET_BIT_FLAG(&(Global_1156111.f_21645[num7 /*209*/].f_200), num2);
		
			if (!Global_1156111.f_21645[num7 /*209*/].f_208)
			{
				Global_1156111.f_21645[num7 /*209*/].f_208 = 1;
				func_1139(num6);
			}
		}
	}

	func_1140(Global_1156111.f_35859.f_3116[num2 /*31*/].f_2);
	return true;
}

void func_1122(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x2B5F5 Hash - 0x562CA30C ^0x562CA30C
{
	int num;

	if (!func_1133(iParam0))
		return;

	num = func_1134(iParam0, 1);

	if (!func_1115(iParam1))
		return;

	if (!func_1102(iParam2))
		return;

	if (!func_1136(iParam3))
		return;

	Global_1156111.f_35859.f_9286[num /*3*/] = iParam1;
	Global_1156111.f_35859.f_9286[num /*3*/].f_1 = iParam2;
	Global_1156111.f_35859.f_9286[num /*3*/].f_2 = iParam3;
	return;
}

void func_1123(int iParam0) // Position - 0x2B674 Hash - 0x9AA5A92B ^0xCC01F112
{
	int num;

	if (!func_1133(iParam0))
		return;

	num = func_1134(iParam0, 1);
	Global_1156111.f_35859.f_9286[num /*3*/] = -1;
	Global_1156111.f_35859.f_9286[num /*3*/].f_1 = 0;
	Global_1156111.f_35859.f_9286[num /*3*/].f_2 = -1;
	return;
}

BOOL func_1124(int iParam0) // Position - 0x2B6C9 Hash - 0x56C0B35E ^0x56C0B35E
{
	int num;

	num = func_1076(iParam0, 1);

	if (num >= 2 && num <= 129)
		return true;

	return false;
}

int func_1125(int iParam0) // Position - 0x2B6F0 Hash - 0x37C30FDA ^0x37C30FDA
{
	int num;

	num = func_1076(iParam0, 1);

	if (func_1124(iParam0))
		return num - 2;
	else if (func_1141(iParam0))
		return num - 130;
	else if (func_1142(iParam0))
		return num - 166;
	else if (func_1143(iParam0))
		return num - 167;
	else if (func_1144(iParam0))
		return num - 172;
	else if (func_1145(iParam0))
		return num - 180;
	else if (func_1146(iParam0))
		return num - 150;

	return -1;
}

int func_1126(int iParam0, int iParam1) // Position - 0x2B78A Hash - 0x40BB17AB ^0x40BB17AB
{
	switch (iParam0)
	{
		case -2123992989:
			return 59;
	
		case joaat("MDEFENSE__BULLET"):
			return 49;
	
		case -1936069272:
			return 47;
	
		case joaat("MHEALTH__REGEN_RATE"):
			return 42;
	
		case joaat("MHORSE__TRAMPLE_DAMAGE"):
			return 58;
	
		case joaat("ADEADEYE_COST_PER_SHOT"):
			return 2;
	
		case joaat("MWEAPON__BOW_STAMINA_DRAIN"):
			return 41;
	
		case joaat("MDEFENSE__BULLET_USING_MELEE_WEAPON"):
			return 50;
	
		case joaat("MACCURACY__LOCAL_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 64;
	
		case joaat("MDAMAGE__DISTANCE_CLOSE"):
			return 37;
	
		case -1575020444:
			return 94;
	
		case -1572802418:
			return 71;
	
		case joaat("ALASSO__DAMAGE_DEALT_PER_SECOND"):
			return 78;
	
		case joaat("MDEFENSE__EXPLOSIVE"):
			return 53;
	
		case -1349331938:
			return 43;
	
		case joaat("MDAMAGE__MISSING_HEALTH_CONVERSION"):
			return 29;
	
		case joaat("ASTAMINA__ALTER_TANK_PER_SECOND_PERCENT"):
			return 22;
	
		case joaat("ADEADEYE__ALTER_CORE_PER_SECOND_PERCENT"):
			return 7;
	
		case joaat("MHORSE__DEFENSE"):
			return 56;
	
		case joaat("ASTAMINA__HORSE_GAIN_ON_HORSEBACK_KILL_PERCENT"):
			return 23;
	
		case joaat("MDEFENSE__RANGED"):
			return 46;
	
		case joaat("MDAMAGE__ALL_WEAPONS_DIFFERENT_WEAPON"):
			return 25;
	
		case joaat("MDEFENSE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 51;
	
		case joaat("MEAGLE_EYE__DEPLETION_RATE"):
			return 67;
	
		case joaat("MDEFENSE__FIRE"):
			return 52;
	
		case joaat("AHEALTH__GAIN_ON_KILL_PERCENT"):
			return 11;
	
		case joaat("MRPG_ATTIRBUTE_CORE_DRAIN_RATE"):
			return 66;
	
		case joaat("MDAMAGE__EXPLOSIVE_WEAPONS"):
			return 36;
	
		case joaat("MSTAMINA__REGEN_RATE"):
			return 75;
	
		case joaat("AHEALTH__ALTER_TANK_PER_SECOND_PERCENT"):
			return 14;
	
		case joaat("MDEADEYE__GAIN_MULTIPLIER_WITH_REPEATER"):
			return 73;
	
		case -377364039:
			return 60;
	
		case joaat("MACCURACY__AI_MODIFIER"):
			return 62;
	
		case joaat("MDAMAGE__FALLOFF"):
			return 39;
	
		case joaat("AHEALTH__ALTER_TOTAL_PER_MINUTE_PERCENT"):
			return 15;
	
		case joaat("ADEADEYE_COST_DURATION"):
			return 1;
	
		case joaat("MACCURACY__REMOTE_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 65;
	
		case joaat("MSKILL__PERCEPTION"):
			return 83;
	
		case -1:
			return 0;
	
		case 66478954:
			return 93;
	
		case 91687087:
			return 79;
	
		case joaat("MSKILL__DISTILLER"):
			return 90;
	
		case 194431787:
			return 61;
	
		case joaat("MDEADEYE__GAIN_MULTIPLIER"):
			return 72;
	
		case joaat("MSKILL__PROTECTION_TRADER"):
			return 85;
	
		case joaat("MWEAPON__BOW_DRAW_TIME"):
			return 40;
	
		case joaat("MDEADEYE__DEPLETION_RATE"):
			return 70;
	
		case joaat("MSKILL__DIVINATION"):
			return 89;
	
		case 410940916:
			return 92;
	
		case 447408404:
			return 81;
	
		case joaat("ADEADEYE__GAIN_ON_HEADSHOT_PERCENT"):
			return 5;
	
		case joaat("MHEALTH__RECHARGE_RATE"):
			return 44;
	
		case joaat("MACCURACY__LOCAL_PLAYER_MODIFIER"):
			return 63;
	
		case joaat("MSKILL__INTUITION"):
			return 88;
	
		case joaat("MDAMAGE__MELEE"):
			return 30;
	
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 19;
	
		case joaat("ADEADEYE__GAIN_ON_REVIVE_PERCENT"):
			return 4;
	
		case joaat("MSKILL__PROTECTION_MOONSHINE"):
			return 86;
	
		case joaat("MDEFENSE__PLAYERS"):
			return 48;
	
		case 874892169:
			return 95;
	
		case joaat("AHEALTH__ALTER_CORE_PER_SECOND_PERCENT"):
			return 16;
	
		case 920214733:
			return 91;
	
		case joaat("MINCAPACITATION__BLEEDOUT_TIME"):
			return 68;
	
		case joaat("ADEADEYE__ALTER_TANK_PER_SECOND_PERCENT"):
			return 6;
	
		case joaat("MDAMAGE__ALL_WEAPONS_AIMING_WITHOUT_FIRING"):
			return 27;
	
		case joaat("ADEADEYE__ALTER_TANK_DAMAGE_TAKEN_PERCENT"):
			return 8;
	
		case joaat("MSTAMINA__REGEN_RATE_HEALTH_CONVERSION"):
			return 76;
	
		case joaat("MDEFENSE__MELEE"):
			return 45;
	
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 20;
	
		case joaat("AHEALTH__GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 10;
	
		case 1356998909:
			return 80;
	
		case joaat("MSKILL__FOCUS"):
			return 82;
	
		case joaat("MDEADEYE__GAIN_MULTIPLIER_STR_WEAPON"):
			return 74;
	
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 17;
	
		case 1546732394:
			return 34;
	
		case joaat("MDEFENSE__STAMINA_CONVERSION"):
			return 55;
	
		case joaat("MDAMAGE__DISTANCE_FAR"):
			return 38;
	
		case joaat("MDAMAGE__BULLETS"):
			return 32;
	
		case joaat("MDEFENSE__STRENGTH_IN_NUMBERS"):
			return 54;
	
		case 1727267699:
			return 69;
	
		case joaat("MDAMAGE__STAMINA_CONVERSION"):
			return 28;
	
		case joaat("ADEADEYE_COST_ACTIVATION"):
			return 3;
	
		case joaat("MSTAMINA__SPRINT_DEPLETION_RATE"):
			return 77;
	
		case joaat("ASTAMINA__ALTER_CORE_PER_SECOND_PERCENT"):
			return 21;
	
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 18;
	
		case joaat("AHEALTH__GAIN_KILL_PERCENT_STR_WEAPON"):
			return 12;
	
		case joaat("MDAMAGE__ALL_WEAPONS"):
			return 24;
	
		case joaat("MDAMAGE__THROWN"):
			return 31;
	
		case joaat("MSKILL__AWARENESS"):
			return 84;
	
		case joaat("MHORSE__DEFENSE_PLAYERS"):
			return 57;
	
		case joaat("ADEADEYE__ALTER_TANK_BULLET_DAMAGE_TAKEN_PERCENT"):
			return 9;
	
		case joaat("MDAMAGE__SHOTGUN"):
			return 33;
	
		case joaat("AHEALTH__GAIN_KILL_PERCENT_NON_STR_WEAPON"):
			return 13;
	
		case joaat("MDAMAGE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 35;
	
		case joaat("MDAMAGE__ALL_WEAPONS_SINCE_LAST_SHOT"):
			return 26;
	
		case joaat("MSKILL__POTENTIAL"):
			return 87;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_1127(int iParam0) // Position - 0x2BBC3 Hash - 0x2139C0B7 ^0x2139C0B7
{
	int num;

	num = func_1126(iParam0, 1);

	if (num < 1 || num >= 95)
		return false;

	return true;
}

float func_1128(int iParam0) // Position - 0x2BBEB Hash - 0xA8A8D579 ^0x9F2476FB
{
	float num;

	if (iParam0->f_2 != 0)
	{
		num = func_1147(794259616, iParam0->f_2, iParam0->f_1, "");
		return num;
	}

	return iParam0->f_1;
}

void func_1129(int iParam0) // Position - 0x2BC1A Hash - 0x825D7B7E ^0x825D7B7E
{
	int num;
	int num2;
	int i;

	if (!func_1127(iParam0))
		return;

	num = func_1126(iParam0, 1);

	if (!func_1148(Global_1156111.f_2169[num /*205*/]))
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] - 1;

	if (Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] > 0)
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = 0;
	Global_1156111.f_2169[num /*205*/].f_204 = 0;

	if (!func_1149(Global_1156111.f_2169[num /*205*/].f_203))
		return;

	num2 = func_1150(Global_1156111.f_2169[num /*205*/].f_203, 1);
	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] - 1;

	if (Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] > 0)
		return;

	for (i = 0; i < Global_1156111.f_47561[num2 /*25*/].f_23; i = i + 1)
	{
		if (Global_1156111.f_47561[num2 /*25*/][i] != Global_1156111.f_2169[num /*205*/])
		{
		}
		else
		{
			Global_1156111.f_47561[num2 /*25*/][i] = -1;
			Global_1156111.f_47561[num2 /*25*/].f_23 = Global_1156111.f_47561[num2 /*25*/].f_23 - 1;
			Global_1156111.f_47561[num2 /*25*/][i] = Global_1156111.f_47561[num2 /*25*/][Global_1156111.f_47561[num2 /*25*/].f_23];
			Global_1156111.f_47561[num2 /*25*/][Global_1156111.f_47561[num2 /*25*/].f_23] = -1;
			break;
		}
	}

	return;
}

BOOL func_1130(int iParam0) // Position - 0x2BDF9 Hash - 0xD61CC19E ^0xD61CC19E
{
	int num;

	num = func_1131(iParam0, 1);

	if (num < 1 || num >= 68)
		return false;

	return true;
}

int func_1131(int iParam0, int iParam1) // Position - 0x2BE21 Hash - 0x49B3A5C3 ^0x49B3A5C3
{
	switch (iParam0)
	{
		case joaat("EAGLE_EYE_HIGHLIGHT_BOUNTIES"):
			return 52;
	
		case joaat("HEADSHOT_IMMUNITY"):
			return 12;
	
		case joaat("HAT_BLOCKS_HEADSHOT"):
			return 11;
	
		case joaat("ANIMAL_TURN_IN_EFFICIENCY"):
			return 64;
	
		case joaat("DISABLE_HEALTH_REGENERATION"):
			return 2;
	
		case joaat("FIRE_CAP_INFINTE"):
			return 41;
	
		case joaat("SLOW_AND_STEADY_AURA"):
			return 28;
	
		case joaat("EAGLE_EYE_HIGHLIGHT_EARTH"):
			return 53;
	
		case -1730553768:
			return 3;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return 25;
	
		case -1651690657:
			return 65;
	
		case joaat("NO_CRITICAL_DAMAGE_AGAINST_PLAYERS"):
			return 10;
	
		case -1583192324:
			return 66;
	
		case joaat("REVIVE_ON_BLEEDOUT"):
			return 34;
	
		case -1486292178:
			return 67;
	
		case joaat("LASSO_IMMUNITY"):
			return 5;
	
		case joaat("DISABLE_JUMPING"):
			return 45;
	
		case joaat("GRAPPLE_IMMUNITY_FROM_AI"):
			return 31;
	
		case -1026481003:
			return 6;
	
		case joaat("TAGGING_IMMUNITY"):
			return 13;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			return 33;
	
		case joaat("ON_HORSE_SPEED_RESTRICTION_JOG"):
			return 59;
	
		case joaat("FATAL_MELEE_IMMUNITY"):
			return 32;
	
		case joaat("FORCE_HEALTH_REGEN"):
			return 1;
	
		case joaat("CONFUSION_EFFECT"):
			return 14;
	
		case joaat("FULL_LOCKON_IMMUNITY"):
			return 4;
	
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			return 36;
	
		case -350459285:
			return 68;
	
		case joaat("DAMAGE_CAP_INFINTE"):
			return 40;
	
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			return 26;
	
		case -199042163:
			return 60;
	
		case joaat("NED_KELLY_ADVERSARY"):
			return 22;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
			return 55;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return 19;
	
		case -1:
			return 0;
	
		case joaat("TRAIL_EFFECT"):
			return 17;
	
		case joaat("POISON_EFFECT"):
			return 20;
	
		case joaat("ON_HORSE_SPEED_RESTRICTION_WALK"):
			return 61;
	
		case joaat("SLIPPERY_BASTARD_VFX"):
			return 24;
	
		case joaat("DISORIENT_EFFECT"):
			return 18;
	
		case joaat("FOCUS_FIRE_VFX"):
			return 23;
	
		case joaat("PREDATOR_ICON_DISPLAY"):
			return 39;
	
		case joaat("WOUND_EFFECT"):
			return 15;
	
		case 718630298:
			return 56;
	
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			return 48;
	
		case joaat("NED_KELLY_BASE"):
			return 21;
	
		case joaat("DISABLE_COMBAT_DIVE"):
			return 46;
	
		case joaat("SLOW_AND_STEADY_VFX"):
			return 27;
	
		case joaat("DISABLE_FACIAL_ACTIONS"):
			return 43;
	
		case joaat("CANNOT_LOCK_ON_PLAYERS"):
			return 7;
	
		case joaat("GRAPPLE_IMMUNITY_FROM_PLAYERS"):
			return 30;
	
		case 1037859088:
			return 51;
	
		case 1066450193:
			return 54;
	
		case 1159158432:
			return 62;
	
		case joaat("OVERPOWER_PREDATOR"):
			return 37;
	
		case 1242495215:
			return 9;
	
		case joaat("ON_HORSE_SPEED_RESTRICTION_IGNORE_MOUNT_CLASS") /* collision: RCEXO_RSC2_LIJ_1 */:
			return 63;
	
		case 1341326366:
			return 58;
	
		case joaat("OVERRIDE_INFINITE_DEADEYE"):
			return 35;
	
		case 1398483650:
			return 50;
	
		case joaat("PULSE_REPOST_STATE"):
			return 38;
	
		case joaat("DISABLE_CONSUMABLES"):
			return 42;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			return 57;
	
		case joaat("DISABLE_INCAPACITATION"):
			return 44;
	
		case joaat("DRAIN_EFFECT"):
			return 16;
	
		case 1898374676:
			return 49;
	
		case 2067881273:
			return 8;
	
		case joaat("DISABLE_DROWNING"):
			return 47;
	
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			return 29;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_1132(int iParam0) // Position - 0x2C133 Hash - 0xFC2A3E07 ^0xFD4CE356
{
	Ped ped;
	Player player;

	ped = PLAYER::PLAYER_PED_ID();
	player = PLAYER::PLAYER_ID();

	switch (iParam0)
	{
		case joaat("HEADSHOT_IMMUNITY"):
			func_1152();
			break;
	
		case joaat("SLOW_AND_STEADY_AURA"):
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 0);
			PLAYER::_0xE910932F4B30BE23(player);
			PLAYER::_0x0E9057A9DA78D0F8(player, 8);
			PLAYER::_0x263D69767F76059C(player, 0);
			break;
	
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_1151();
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
		case joaat("SLIPPERY_BASTARD_VFX"):
		case joaat("SLOW_AND_STEADY_VFX"):
			func_1155(func_1154(iParam0));
			break;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_1148(16);
			break;
	
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 19);
			break;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_1148(17);
			break;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_1153(iParam0));
			break;
	
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(ped, false, 0);
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_1153(iParam0));
			break;
	
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
			func_164(105, true);
			break;
	
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_1153(iParam0));
			break;
	
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_SET_LOCKON_FOCUS_FIRE_VFX(player, "");
			break;
	
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(15);
			break;
	
		case joaat("WOUND_EFFECT"):
			PED::_UPDATE_PED_WOUND_EFFECT(ped, 0f);
			break;
	
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_EAGLE_EYE_SET_PLUS_FLAG_DISABLED(player, true);
			break;
	
		case joaat("NED_KELLY_BASE"):
			func_1156();
			break;
	
		case joaat("OVERPOWER_PREDATOR"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 19);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 1);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 18);
			break;
	
		case 1398483650:
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE(player, 1f);
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE_2(player, -1f);
			break;
	
		case joaat("PULSE_REPOST_STATE"):
			NETWORK::_SET_NETWORK_RESPOT_TIMER(ped, 0, true);
			break;
	
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_1153(iParam0));
			break;
	
		case 1898374676:
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(player, false);
			break;
	
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_RESET_ENTITY_AURA();
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 0);
			PLAYER::_0xE910932F4B30BE23(player);
			PLAYER::_0x0E9057A9DA78D0F8(player, 8);
			PLAYER::_0x263D69767F76059C(player, 0);
			break;
	}

	return;
}

BOOL func_1133(int iParam0) // Position - 0x2C342 Hash - 0x13096A7F ^0x13096A7F
{
	int num;

	num = func_1134(iParam0, 1);

	if (num < 0 || num >= 5)
		return false;

	return true;
}

int func_1134(int iParam0, int iParam1) // Position - 0x2C369 Hash - 0xD3D45784 ^0xD3D45784
{
	switch (iParam0)
	{
		case joaat("FOCUS_FIRE"):
			return 1;
	
		case -1038992817:
			return 5;
	
		case -950874556:
			return 4;
	
		case joaat("QUITE_AN_INSPIRATION"):
			return 3;
	
		case 0:
			return 0;
	
		case 1938826026:
			return 2;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_1135(int iParam0) // Position - 0x2C3C6 Hash - 0x76D9051B ^0xE68FE534
{
	int num;
	var unk;
	var unk32;
	int num2;
	int num3;
	int i;

	num = func_1157(iParam0);
	unk.f_3 = 1065353216;
	unk.f_5 = -1;
	unk.f_6 = 3;
	unk.f_6.f_1 = -1;
	unk.f_6.f_1.f_3 = -1;
	unk.f_6.f_1.f_3.f_3 = -1;
	unk.f_17 = 5;
	unk32.f_3 = 1065353216;
	unk32.f_5 = -1;
	unk32.f_6 = 3;
	unk32.f_6.f_1 = -1;
	unk32.f_6.f_1.f_3 = -1;
	unk32.f_6.f_1.f_3.f_3 = -1;
	unk32.f_17 = 5;
	num2 = -1;

	for (i = 0; i < Global_1156111.f_35859.f_11700; i = i + 1)
	{
		num3 = func_1108(Global_1156111.f_35859.f_9503[i /*3*/], 1);
	
		if (Global_1156111.f_35859.f_3116[num3 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1156111.f_35859.f_9503[i /*3*/] == num)
		{
		}
		else if (!func_1158(Global_1156111.f_35859.f_9503[i /*3*/], Global_1156111.f_35859.f_9503[i /*3*/].f_1))
		{
		}
		else
		{
			unk = { func_1159(Global_1156111.f_35859.f_9503[i /*3*/]) };
		
			if (unk.f_5 > unk32.f_5)
			{
				unk32 = { unk };
				num2 = i;
			}
		}
	}

	return num2;
}

BOOL func_1136(int iParam0) // Position - 0x2C50A Hash - 0x7B05DC41 ^0x7B05DC41
{
	if (iParam0 < 0 || iParam0 > 4)
		return false;

	return true;
}

void func_1137(int iParam0) // Position - 0x2C528 Hash - 0x825D7B7E ^0x825D7B7E
{
	int num;
	int num2;
	int i;

	if (!func_1127(iParam0))
		return;

	num = func_1126(iParam0, 1);

	if (!func_1148(Global_1156111.f_2169[num /*205*/]))
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] + 1;
	Global_1156111.f_2169[num /*205*/].f_204 = 1;

	if (!func_1149(Global_1156111.f_2169[num /*205*/].f_203))
		return;

	num2 = func_1150(Global_1156111.f_2169[num /*205*/].f_203, 1);
	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] + 1;

	for (i = 0; i < Global_1156111.f_47561[num2 /*25*/].f_23; i = i + 1)
	{
		if (Global_1156111.f_47561[num2 /*25*/][i] == Global_1156111.f_2169[num /*205*/])
			return;
	}

	Global_1156111.f_47561[num2 /*25*/][Global_1156111.f_47561[num2 /*25*/].f_23] = Global_1156111.f_2169[num /*205*/];
	Global_1156111.f_47561[num2 /*25*/].f_23 = Global_1156111.f_47561[num2 /*25*/].f_23 + 1;
	return;
}

BOOL func_1138(int iParam0) // Position - 0x2C67D Hash - 0x9886804F ^0x893AF3E4
{
	BOOL flag;

	if (iParam0->f_1 != 0)
	{
		flag = func_1160(794259616, iParam0->f_1, true, "");
		return flag;
	}

	return true;
}

void func_1139(int iParam0) // Position - 0x2C6A6 Hash - 0xE1E3399D ^0xAAA920BB
{
	Ped ped;
	Player player;
	int num;
	int entityBoneIndexByName;

	ped = PLAYER::PLAYER_PED_ID();
	player = PLAYER::PLAYER_ID();

	switch (iParam0)
	{
		case joaat("HEADSHOT_IMMUNITY"):
			func_1152();
			break;
	
		case joaat("SLOW_AND_STEADY_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(player, 8);
			PLAYER::_0x131E294EF60160DF(player, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(player, 1);
			break;
	
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_1151();
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			num = func_1154(iParam0);
			func_1162(num, 3, 1, -1, 1);
			break;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_1148(16);
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 1014693585);
			PLAYER::_0x2B12B6FC8B8772AB(player, 8);
			PLAYER::_0x131E294EF60160DF(player, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(player, 1);
			break;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_1148(17);
			break;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1153(iParam0));
			break;
	
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(ped, true, 0);
			GRAPHICS::ANIMPOSTFX_PLAY(func_1153(iParam0));
			break;
	
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
			func_164(104, true);
			break;
	
		case joaat("SLIPPERY_BASTARD_VFX"):
			num = func_1154(iParam0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_1161(iParam0, 0));
			func_1162(num, 0, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_1161(iParam0, 1));
			func_1162(num, 1, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_1161(iParam0, 2));
			func_1162(num, 2, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_1161(iParam0, 3));
			func_1162(num, 2, 1, entityBoneIndexByName, 0);
			break;
	
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1153(iParam0));
			break;
	
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_SET_LOCKON_FOCUS_FIRE_VFX(player, "focusfire");
			break;
	
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(15);
			break;
	
		case joaat("WOUND_EFFECT"):
			PED::_SET_PED_ACTIVATE_WOUND_EFFECT(ped, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
	
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_EAGLE_EYE_SET_PLUS_FLAG_DISABLED(player, false);
			break;
	
		case joaat("NED_KELLY_BASE"):
			func_1163();
			break;
	
		case joaat("SLOW_AND_STEADY_VFX"):
			num = func_1154(iParam0);
			func_1162(num, 4, 1, -1, 0);
			break;
	
		case joaat("OVERPOWER_PREDATOR"):
			break;
	
		case 1398483650:
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE(player, 0.5f);
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE_2(player, 2f);
			break;
	
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1153(iParam0));
			break;
	
		case 1898374676:
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(player, true);
			break;
	
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_SET_ENTITY_AURA(0f, 2f, 2f);
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 1979474018);
			PLAYER::_0x2B12B6FC8B8772AB(player, 25);
			PLAYER::_0x263D69767F76059C(player, 2);
			break;
	}

	return;
}

void func_1140(int iParam0) // Position - 0x2C941 Hash - 0x4D7CA01F ^0xE11E9732
{
	char* audioName;
	char* audioRef;

	if (iParam0 == 0)
		return;

	audioName = func_1164(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(audioName))
		return;

	audioRef = func_1165(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(audioRef))
		return;

	AUDIO::PLAY_SOUND_FROM_ENTITY(audioName, Global_1295666.f_3, audioRef, false, 0, 0);
	return;
}

BOOL func_1141(int iParam0) // Position - 0x2C98B Hash - 0xCDD61996 ^0xCDD61996
{
	int num;

	num = func_1076(iParam0, 1);

	if (num >= 130 && num <= 149)
		return true;

	return false;
}

BOOL func_1142(int iParam0) // Position - 0x2C9B3 Hash - 0x5052208B ^0x5052208B
{
	int num;

	num = func_1076(iParam0, 1);

	if (num >= 166 && num <= 166)
		return true;

	return false;
}

BOOL func_1143(int iParam0) // Position - 0x2C9DB Hash - 0x7F6CD4C4 ^0x7F6CD4C4
{
	int num;

	num = func_1076(iParam0, 1);

	if (num >= 167 && num <= 171)
		return true;

	return false;
}

BOOL func_1144(int iParam0) // Position - 0x2CA03 Hash - 0xD766BF57 ^0xD766BF57
{
	int num;

	num = func_1076(iParam0, 1);

	if (num >= 172 && num <= 179)
		return true;

	return false;
}

BOOL func_1145(int iParam0) // Position - 0x2CA2B Hash - 0x58B99E54 ^0x58B99E54
{
	int num;

	num = func_1076(iParam0, 1);

	if (num >= 180 && num <= 182)
		return true;

	return false;
}

BOOL func_1146(int iParam0) // Position - 0x2CA53 Hash - 0xA1A1461E ^0xA1A1461E
{
	int num;

	num = func_1076(iParam0, 1);

	if (num >= 150 && num <= 165)
		return true;

	return false;
}

float func_1147(Hash hParam0, Hash hParam1, float fParam2, char* sParam3) // Position - 0x2CA7B Hash - 0xFE4D9153 ^0xACBF575D
{
	var unk;
	float num;

	if (func_1166(hParam0, hParam1, &unk))
		num = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(hParam0, hParam1, unk.f_10.f_1);
	else
		num = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(hParam0, hParam1, fParam2);

	return num;
}

BOOL func_1148(int iParam0) // Position - 0x2CAB1 Hash - 0xCFB57BFC ^0xD6F1E06
{
	if (iParam0 <= -1 || iParam0 >= 21)
		return false;

	if (iParam0 == 0)
		return true;

	if (MISC::_IS_BIT_FLAG_SET(&(Global_1156111.f_2166), iParam0))
		return true;

	if (Global_1156111.f_2165 >= 21)
		return false;

	Global_1156111.f_2143[Global_1156111.f_2165] = iParam0;
	Global_1156111.f_2165 = Global_1156111.f_2165 + 1;
	return true;
}

BOOL func_1149(int iParam0) // Position - 0x2CB20 Hash - 0x3374FEFF ^0x3374FEFF
{
	int num;

	num = func_1150(iParam0, 1);

	if (num < 1 || num >= 5)
		return false;

	return true;
}

int func_1150(int iParam0, int iParam1) // Position - 0x2CB47 Hash - 0xAF8796DC ^0xAF8796DC
{
	switch (iParam0)
	{
		case joaat("CONSECUTIVE_DAMAGE_DEALT"):
			return 3;
	
		case -1016837116:
			return 5;
	
		case 0:
			return 0;
	
		case joaat("CONSECUTIVE_DAMAGE_TAKEN"):
			return 4;
	
		case joaat("NEARBY_ALLIES"):
			return 2;
	
		case 1416591065:
			return 1;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_1151() // Position - 0x2CBA4 Hash - 0x8482C9D6 ^0xF644936D
{
	BOOL value;
	BOOL value2;

	if (Global_1156111.f_21645[3 /*209*/].f_208)
		value = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 550, value);

	if (Global_1156111.f_21645[4 /*209*/].f_208)
		if (!func_89(Global_1297600[Global_1295666 /*87*/].f_86, 1))
			value2 = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 556, value2);
	return;
}

void func_1152() // Position - 0x2CC06 Hash - 0x1EC790D6 ^0xC31DC9FE
{
	BOOL value;

	value = false;

	if (Global_1156111.f_21645[12 /*209*/].f_208)
		value = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 263, value);
	return;
}

char* func_1153(int iParam0) // Position - 0x2CC36 Hash - 0x769F9DA5 ^0x775174D4
{
	switch (iParam0)
	{
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return "MP_MoonshineToxic";
	
		case joaat("TRAIL_EFFECT"):
			return "MP_ArrowTracking";
	
		case joaat("DISORIENT_EFFECT"):
			return "MP_ArrowDisorient";
	
		case joaat("DRAIN_EFFECT"):
			return "MP_ArrowDrain";
	
		default:
		
	}

	return "";
}

int func_1154(int iParam0) // Position - 0x2CC7D Hash - 0x21FAF347 ^0xA1AE9E4F
{
	switch (iParam0)
	{
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return joaat("MOMENT_TO_RECUPERATE_VFX");
	
		case joaat("SLIPPERY_BASTARD_VFX"):
			return -843895567;
	
		case joaat("SLOW_AND_STEADY_VFX"):
			return joaat("SLOW_AND_STEADY_VFX");
	
		default:
		
	}

	return 0;
}

void func_1155(int iParam0) // Position - 0x2CCB8 Hash - 0x2CE3A2A0 ^0xF0457356
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (Global_1203871[i /*8*/].f_5 == iParam0)
		{
			Global_1203871[i /*8*/].f_7 = 1;
			Global_1203871[i /*8*/].f_5 = 0;
		}
	}

	return;
}

void func_1156() // Position - 0x2CCF8 Hash - 0xFDAE0587 ^0x5AB4C733
{
	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 305, false);
	PED::_RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295666.f_3);
	return;
}

int func_1157(int iParam0) // Position - 0x2CD18 Hash - 0x7AD8D3DF ^0x2C577CC4
{
	int num;

	if (!func_1133(iParam0))
		return -1;

	num = func_1134(iParam0, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/];
}

BOOL func_1158(int iParam0, int iParam1) // Position - 0x2CD47 Hash - 0xB2431B7B ^0xEC29640E
{
	int num;
	Player player;
	int num2;
	int num3;
	var unk;

	if (!func_1115(iParam0))
		return false;

	num = func_1108(iParam0, 1);
	num2 = Global_1156111.f_35859.f_3116[num /*31*/].f_4;

	if (func_1117(Global_1156111.f_35859.f_3116[num /*31*/]))
	{
		num3 = Global_1156111.f_35859.f_9286[func_1134(num2, 1) /*3*/];
		unk = { func_1159(num3) };
	
		if (num3 != iParam0 && Global_1156111.f_35859.f_3116[num /*31*/].f_5 <= unk.f_5)
			return false;
	}

	switch (Global_1156111.f_35859.f_3116[num /*31*/])
	{
		case joaat("ENTER_REVIVED_REMOTE"):
			player = func_1114(iParam1);
		
			if (player == Global_1295666)
				return false;
		
			return true;
	
		case -2129621195:
			player = func_1114(iParam1);
		
			if (player == Global_1295666)
				return false;
		
			if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295666.f_149[Global_1295666]))
				return false;
		
			if (!GANG::_NETWORK_IS_IN_MY_GANG(Global_1295666.f_149[player]))
				return false;
		
			return true;
	
		case -2010146101:
			if (!func_540())
				return false;
		
			return true;
	
		case -1606735498:
		case joaat("ON_HEADSHOT"):
		case joaat("ENTER_WEARING_HAT"):
		case joaat("ENTER_SPRINTING"):
		case joaat("ENTER_MOUNTED"):
		case joaat("ENTER_DUAL_WIELD"):
		case -971275364:
		case joaat("ON_KILL"):
		case joaat("ENTER_SCENARIO"):
		case joaat("ENTER_REVIVER"):
		case -193993646:
		case joaat("ENTER_ALLY_NEARBY"):
		case -23641105:
		case joaat("ON_DAMAGE_TAKEN"):
		case joaat("ENTER_MELEE"):
		case joaat("ON_DAMAGE_DEALT_FROM_HORSEBACK"):
		case 429965152:
		case joaat("ON_DAMAGE_TAKEN_FROM_HORSEBACK"):
		case joaat("ENTER_WINDED"):
		case joaat("ENTER_NO_HAT"):
		case joaat("ON_ENABLE"):
		case joaat("ENTER_EAGLE_EYE"):
		case joaat("ENTER_DEADEYE"):
		case joaat("ENTER_SCOPED"):
		case joaat("ENTER_COVER"):
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case joaat("ENTER_DAMAGED"):
		case joaat("ON_DAMAGE_DEALT"):
		case joaat("ENTER_REVIVED"):
		case joaat("ENTER_LASSOING"):
		case joaat("ENTER_IN_VEHICLE"):
		case 2116793692:
			return true;
	
		case -1503245593:
			if (!Global_1956875.f_1716[8])
				return false;
		
			player = func_1114(iParam1);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[player]))
				return false;
		
			if (PED::_GET_LASSOED_LASSOER(Global_1295666.f_3) != PLAYER::GET_PLAYER_PED(Global_1295666.f_149[player]))
				return false;
		
			return true;
	
		case joaat("ALLY_ENTER_DEADEYE"):
			player = func_1114(iParam1);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[player]))
				return false;
		
			if (player != Global_1295666 && !func_795(Global_1295666.f_149[player]))
				return false;
		
			if (!func_786(512, player))
				return false;
		
			return true;
	
		case joaat("ENTER_FREEROAM_OR_COOP"):
			if (!func_540() && !func_1167())
				return false;
		
			return true;
	
		default:
		
	}

	return false;
}

struct<31> func_1159(int iParam0) // Position - 0x2D01C Hash - 0xCDBF4D5E ^0x8519EC8B
{
	int num;

	num = func_1108(iParam0, 1);
	return Global_1156111.f_35859.f_3116[num /*31*/];
}

BOOL func_1160(Hash hParam0, Hash hParam1, BOOL bParam2, char* sParam3) // Position - 0x2D040 Hash - 0xFE4D9153 ^0x67064BE4
{
	var unk;
	BOOL flag;

	if (func_1166(hParam0, hParam1, &unk))
		flag = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(hParam0, hParam1, unk.f_10.f_2);
	else
		flag = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(hParam0, hParam1, bParam2);

	return flag;
}

char* func_1161(int iParam0, int iParam1) // Position - 0x2D076 Hash - 0x55E6586F ^0x389F58DC
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
			switch (iParam1)
			{
				case 0:
					return "PH_HEAD";
			
				case 1:
					return "CP_CHEST";
			
				case 2:
					return "CP_R_UpperArm";
			
				case 3:
					return "CP_L_UpperArm";
			
				default:
					break;
			}
			break;
	}

	return "";
}

void func_1162(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x2D0CE Hash - 0x4DFFD3F3 ^0xFBF31414
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1203871[i /*8*/]) && !Global_1203871[i /*8*/].f_6)
		{
			Global_1203871[i /*8*/].f_5 = iParam0;
			Global_1203871[i /*8*/].f_1 = iParam1;
			Global_1203871[i /*8*/].f_2 = iParam2;
			Global_1203871[i /*8*/].f_3 = iParam3;
			Global_1203871[i /*8*/].f_4 = iParam4;
			Global_1203871[i /*8*/].f_6 = 1;
			return;
		}
	}

	return;
}

void func_1163() // Position - 0x2D153 Hash - 0x54572B7C ^0x904B9528
{
	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 305, true);
	PED::_SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295666.f_3, 0.7f);
	return;
}

char* func_1164(int iParam0) // Position - 0x2D178 Hash - 0xAF3578AA ^0xF3FE7636
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
	
		default:
		
	}

	return "";
}

char* func_1165(int iParam0) // Position - 0x2D198 Hash - 0xAF3578AA ^0x64DA6152
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
	
		default:
		
	}

	return "";
}

BOOL func_1166(Hash hParam0, Hash hParam1, var uParam2) // Position - 0x2D1B8 Hash - 0xBD123D0 ^0xD5CDFAB
{
	int num;
	int num2;

	num = -178401592;
	num.f_1 = hParam0;
	num.f_2 = joaat("name");
	num.f_3 = 1;
	num.f_4 = hParam1;
	DATAFILE::_PARSEDDATA_GET_FILE(&num);

	if (DATAFILE::_PARSEDDATA_GET_SECTION(&num2, &num, joaat("name")))
	{
		*uParam2 = hParam0;
		uParam2->f_9 = hParam1;
		TEXT_LABEL_ASSIGN_STRING(&(uParam2->f_1), "", 64);
		TEXT_LABEL_APPEND_INT(&(uParam2->f_1), num2, 64);
		DATAFILE::_PARSEDDATA_GET_SECTION(&num2, &num, joaat("TYPE"));
		uParam2->f_10.f_3 = func_1168(num2);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
	
		switch (uParam2->f_10.f_3)
		{
			case 0:
				!DATAFILE::_PARSEDDATA_GET_INT(&(uParam2->f_10), &num, joaat("DEFAULT"));
				break;
		
			case 1:
				!DATAFILE::_PARSEDDATA_GET_FLOAT(&(uParam2->f_10.f_1), &num, joaat("DEFAULT"));
				break;
		
			case 2:
				!DATAFILE::_PARSEDDATA_GET_BOOL(&(uParam2->f_10.f_2), &num, joaat("DEFAULT"));
				break;
		}
	
		switch (uParam2->f_14.f_3)
		{
			case 0:
				DATAFILE::_PARSEDDATA_GET_INT(&(uParam2->f_14), &num, joaat("min"));
				break;
		
			case 1:
				DATAFILE::_PARSEDDATA_GET_FLOAT(&(uParam2->f_14.f_1), &num, joaat("min"));
				break;
		
			case 2:
				DATAFILE::_PARSEDDATA_GET_BOOL(&(uParam2->f_14.f_2), &num, joaat("min"));
				break;
		}
	
		switch (uParam2->f_18.f_3)
		{
			case 0:
				DATAFILE::_PARSEDDATA_GET_INT(&(uParam2->f_18), &num, joaat("max"));
				break;
		
			case 1:
				DATAFILE::_PARSEDDATA_GET_FLOAT(&(uParam2->f_18.f_1), &num, joaat("max"));
				break;
		
			case 2:
				DATAFILE::_PARSEDDATA_GET_BOOL(&(uParam2->f_18.f_2), &num, joaat("max"));
				break;
		}
	
		switch (uParam2->f_10.f_3)
		{
			case 0:
				break;
		
			case 1:
				break;
		
			case 2:
				break;
		}
	
		switch (uParam2->f_14.f_3)
		{
			case 0:
				break;
		
			case 1:
				break;
		
			case 2:
				break;
		}
	
		switch (uParam2->f_18.f_3)
		{
			case 0:
				break;
		
			case 1:
				break;
		
			case 2:
				break;
		}
	
		return true;
	}

	return false;
}

BOOL func_1167() // Position - 0x2D3D9 Hash - 0x7C45C36E ^0x2F146C3F
{
	if (!Global_1048577)
		return false;

	if (!func_391(func_390(0)))
		return false;

	if (Global_3145858 != -504335712)
		return false;

	if (func_461(*Global_524288.f_39632))
		return true;

	return false;
}

int func_1168(int iParam0) // Position - 0x2D424 Hash - 0xF3C27EA9 ^0xF3C27EA9
{
	int num;

	switch (iParam0)
	{
		case joaat("bool"):
			num = 2;
			break;
	
		case joaat("float"):
			num = 1;
			break;
	
		case joaat("int"):
			num = 0;
			break;
	}

	return num;
}

