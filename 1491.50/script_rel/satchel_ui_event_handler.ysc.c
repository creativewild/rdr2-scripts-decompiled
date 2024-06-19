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
	var uLocal_14 = 0;
	char* sLocal_15 = 0;
	char* sLocal_16 = 0;
	char* sLocal_17 = 0;
	char* sLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = -1;
	var uLocal_27 = 0;
	char* sLocal_28 = 0;
	int iLocal_29 = 0;
	Hash hScriptParam_0 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xE7B0D867 ^0x9C5B1B49
{
	var unk;
	int eventData;
	var unk7;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_15 = "mech_skin@BUCK_BUTCHER";
	sLocal_16 = "PBL_BASE";
	sLocal_17 = "PBL_DUMP";
	sLocal_18 = "PBL_DROP_IN";
	sLocal_28 = "beat_gang_camp_reminder";
	iLocal_29 = 23;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_1(&unk7, HUD::_0x0501D52D24EA8934(1), true);
	func_2();
	func_3(&unk);
	func_4();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
		func_5(&unk);

	func_6(1);
	func_8(&unk, &func_7);

	while (true)
	{
		if (PED::IS_PED_FALLING(Global_35) || PED::IS_PED_FALLING_OVER(Global_35) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::GET_PLAYER_INDEX(), true) || func_9())
			func_10(false);
	
		HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(0);
	
		if (Global_1935689.f_4)
		{
			func_11();
			func_12();
			func_13(Global_1935689.f_9439);
		
			if (Global_1935689.f_15 != 0)
				func_14(Global_1935689.f_15);
		
			func_4();
			Global_1935689.f_4 = 0;
			Global_1935689.f_5 = 0;
			Global_1935689.f_15 = 0;
		}
	
		if (func_15())
		{
			func_16(Global_1935689.f_9445, &(eventData.f_3), &unk);
			func_4();
			func_17(0);
			func_18(0);
			Global_1935689.f_7 = 0;
		}
	
		while (UIEVENTS::EVENTS_UI_IS_PENDING(hScriptParam_0))
		{
			if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(hScriptParam_0, &eventData))
			{
				Global_1935689.f_7 = 0;
			
				switch (eventData)
				{
					case -2075827635:
						func_6(8);
						UIEVENTS::EVENTS_UI_POP_MESSAGE(hScriptParam_0);
						break;
				
					case -1740156697:
						Global_1935689.f_9445 = eventData.f_1;
					
						switch (eventData.f_2)
						{
							case joaat("folder_item"):
								ATTRIBUTE::STOP_ITEM_PREVIEW();
								func_21(eventData.f_1, &(eventData.f_3));
								break;
						
							case joaat("usable_item"):
							case 1086195311:
								ATTRIBUTE::STOP_ITEM_PREVIEW();
							
								if (!func_20())
									func_16(eventData.f_1, &(eventData.f_3), &unk);
								break;
						
							case -1287062382:
								func_19(eventData.f_1, &(eventData.f_3));
								break;
						}
					
						func_6(2);
						UIEVENTS::EVENTS_UI_POP_MESSAGE(hScriptParam_0);
						break;
				
					case -1203660660:
						switch (eventData.f_2)
						{
							case joaat("usable_item"):
							case joaat("BREAKABLE_ITEM"):
							case 1086195311:
								if (func_23() || func_24())
								{
									if (func_25(Global_1935689.f_9440, 0, 0, 0, true, false, false))
										func_10(false);
								
									func_6(4);
								}
								else if (func_26())
								{
									func_6(4);
								}
								else if (!func_27(false))
								{
									func_28();
								}
								else
								{
									func_6(4);
								}
								break;
						
							case joaat("DROP_ITEM"):
								func_29(Global_1935689.f_9440, 1);
								break;
						
							case joaat("DISCARD_ALL"):
								if (func_27(false))
									func_6(32);
								else
									func_30(Global_1935689.f_9440);
								break;
						
							case joaat("SEND_ALL"):
								func_6(64);
								break;
						}
					
						UIEVENTS::EVENTS_UI_POP_MESSAGE(hScriptParam_0);
						break;
				
					case -722926211:
					case 703281244:
						func_22();
						func_4();
						ATTRIBUTE::STOP_ITEM_PREVIEW();
						UIEVENTS::EVENTS_UI_POP_MESSAGE(hScriptParam_0);
						break;
				
					case 922460030:
						func_6(16);
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

	func_5(&unk);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(var uParam0, Player plParam1, BOOL bParam2) // Position - 0x2F9 Hash - 0xE6269A3C ^0x57572050
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	func_31(plParam1);
	flag = func_32(1);

	if (func_34(uParam0, plParam1, 1, &func_33) != flag)
		if (!Global_1935496.f_70.f_1)
			Global_1935496.f_70.f_1 = 1;

	flag = func_32(2);

	if (func_34(uParam0, plParam1, 2, &func_35) != flag)
		if (!Global_1935496.f_70.f_1)
			Global_1935496.f_70.f_1 = 1;

	flag = func_32(8192);

	if (func_34(uParam0, plParam1, 8192, &func_36) != flag)
		if (!Global_1935496.f_70.f_1)
			Global_1935496.f_70.f_1 = 1;

	flag = func_32(4) || func_32(8);

	if (!func_37())
	{
		func_38(4);
		func_38(8);
		flag = false;
	}
	else
	{
		flag2 = false;
		flag3 = 0;
	
		if (func_39(81053684) || func_40(4))
			func_38(4);
		else
			flag2 = true;
	
		if (func_39(-525676072) || func_40(8))
			func_38(8);
		else
			flag3 = 1;
	
		if (flag2 || flag3)
		{
			if (func_42(uParam0, plParam1, false, func_41()))
			{
				if (!flag)
					Global_1935496.f_70.f_1 = 1;
			
				if (flag2)
					func_43(4);
			
				if (flag3)
					func_43(8);
			}
			else
			{
				func_38(4);
				func_38(8);
			
				if (flag)
					Global_1935496.f_70.f_1 = 1;
			}
		}
	}

	flag = func_32(16);

	if (func_34(uParam0, plParam1, 16, &func_44) != flag)
		if (!Global_1935496.f_70.f_1)
			Global_1935496.f_70.f_1 = 1;

	flag = func_32(256);

	if (func_34(uParam0, plParam1, 256, &func_45) != flag)
		if (!Global_1935496.f_70.f_1)
			Global_1935496.f_70.f_1 = 1;

	flag = func_32(512);

	if (func_34(uParam0, plParam1, 512, &func_46) != flag)
		if (!Global_1935496.f_70.f_1)
			Global_1935496.f_70.f_1 = 1;

	flag = func_32(1024);

	if (func_34(uParam0, plParam1, 1024, &func_47) != flag)
		if (!Global_1935496.f_70.f_1)
			Global_1935496.f_70.f_1 = 1;

	if (func_48() || func_49() || func_50() || func_51() || func_52() || bParam2)
	{
		flag = func_32(16384);
	
		if (func_34(uParam0, plParam1, 16384, &func_53) != flag)
			if (!Global_1935496.f_70.f_1)
				Global_1935496.f_70.f_1 = 1;
	
		flag = func_32(64);
	
		if (func_34(uParam0, plParam1, 64, &func_54) != flag)
			if (!Global_1935496.f_70.f_1)
				Global_1935496.f_70.f_1 = 1;
	
		flag = func_32(32);
	
		if (func_34(uParam0, plParam1, 32, &func_55) != flag)
			if (!Global_1935496.f_70.f_1)
				Global_1935496.f_70.f_1 = 1;
	
		flag = func_32(128);
	
		if (func_34(uParam0, plParam1, 128, &func_56) != flag)
			if (!Global_1935496.f_70.f_1)
				Global_1935496.f_70.f_1 = 1;
	
		flag = func_32(2048);
	
		if (func_34(uParam0, plParam1, 2048, &func_57) != flag)
			if (!Global_1935496.f_70.f_1)
				Global_1935496.f_70.f_1 = 1;
	
		flag = func_32(4096);
	
		if (func_34(uParam0, plParam1, 4096, &func_58) != flag)
			if (!Global_1935496.f_70.f_1)
				Global_1935496.f_70.f_1 = 1;
	}

	func_59();
	return;
}

void func_2() // Position - 0x691 Hash - 0x8D49272F ^0x2AB6333B
{
	if (func_52() || func_48() || func_49() || func_50() || func_51())
	{
		Global_1935496.f_70 = 1;
		func_60(false);
	
		if (Global_1935496.f_70.f_1)
		{
			if (!func_27(false))
			{
				if (!Global_1935689.f_4)
				{
					Global_1935689.f_4 = 1;
					Global_1935689.f_5 = 1;
				}
			}
		}
	
		Global_1935496.f_70.f_1 = 0;
	}
	else if (Global_1935496.f_70)
	{
		func_61();
		Global_1935496.f_70 = 0;
		Global_1935496.f_70.f_1 = 0;
	}

	return;
}

int func_3(var uParam0) // Position - 0x729 Hash - 0x1A65B6D ^0x1A65B6D
{
	if (func_62() == -1)
		func_63();

	Global_1911866[0 /*9*/] = 0;
	func_64(uParam0);
	func_65();
	return 1;
}

void func_4() // Position - 0x751 Hash - 0xE39441E6 ^0x16C93C53
{
	if (func_20())
	{
		ATTRIBUTE::STOP_ITEM_PREVIEW();
		INVENTORY::_0x75CFAC49301E134F(Global_1935689.f_9461, false, false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_9454, func_66(Global_1935689.f_9439));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_9455, func_67(Global_1935689.f_9439));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9474, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9470, false);
	
		if (func_27(false) || func_68())
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9456, "");
	
		func_69(Global_1935689.f_9439);
	}

	return;
}

void func_5(var uParam0) // Position - 0x7E1 Hash - 0x53BDE445 ^0x3DA6A232
{
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	Global_1935689.f_7 = 0;
	Global_1935689.f_19 = 0;
	Global_1935689.f_14 = -1;
	Global_1935689.f_15 = 0;
	Global_1935689.f_1224 = 0;
	func_17(0);
	func_70(822208792);
	func_71(0);
	func_72(0);
	func_73(uParam0);

	if (!TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_35))
		func_74(0);

	func_75(1);
	func_76(&(Global_1935689.f_9436), 1);
	func_76(&(Global_1935689.f_9436), 2);
	func_76(&(Global_1935689.f_9436), 4);
	func_61();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_6(int iParam0) // Position - 0x870 Hash - 0x3A524DDA ^0x3A524DDA
{
	Global_1935689.f_9415 = Global_1935689.f_9415 || iParam0;
	return;
}

int func_7() // Position - 0x889 Hash - 0x9C4EC5E9 ^0xAD71B45D
{
	int num;
	float value;

	func_77(Global_1935689.f_9440, &num);

	switch (num)
	{
		case 0:
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1935689.f_9456, 0);
			func_78(-1520731333);
			break;
	
		case 1:
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1935689.f_9456, 0);
			func_78(1698037258);
			break;
	
		case 2:
			value = BUILTIN::TO_FLOAT(func_79(Global_1935689.f_9440, false)) / 100f;
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9456, MISC::VAR_STRING(10, "SHOP_ITEM_VALUE", func_80(MISC::_GET_STRING_FROM_FLOAT(value, 2), joaat("COLOR_PURE_WHITE"))));
			func_78(-879749798);
			break;
	}

	return 1;
}

void func_8(var uParam0, int iParam1) // Position - 0x930 Hash - 0xE5775DAF ^0x20C81B19
{
	uParam0->f_2 = iParam1;
	uParam0->f_1 = 1;
	return;
}

BOOL func_9() // Position - 0x943 Hash - 0x463DA432 ^0x3948CA04
{
	return func_81(Global_1935630, 4096);
}

void func_10(BOOL bParam0) // Position - 0x956 Hash - 0xDA8F6A70 ^0xDA8F6A70
{
	if (bParam0)
		Global_1935689 = 1;
	else
		Global_1935689 = 2;

	return;
}

void func_11() // Position - 0x970 Hash - 0xE90766CA ^0x6950FBA3
{
	int num;
	Any dataContainerFromPath;
	BOOL flag;

	Global_1935689.f_9444 = 0;

	if (Global_1935689.f_9438 != -1)
	{
		num = Global_1935689.f_9438;
		func_83(&Global_1935689.f_9431[func_82(Global_1935689.f_9439) /*2*/], num);
		DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1935689.f_9450, Global_1935689.f_9444);
	}

	dataContainerFromPath = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("Satchel");
	flag = Global_1935689.f_9444 <= 0;
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(dataContainerFromPath, "FolderEmpty", flag);
	return;
}

BOOL func_12() // Position - 0x9E0 Hash - 0x4FDE2EAA ^0x1BBB2470
{
	if (func_84() || func_86(Global_35, func_85(7), true) || !(func_87(7) || func_88(7)) && func_27(false))
		return func_89(0, joaat("SLOTID_NONE")) && func_89(1, 724026534);

	return func_89(0, joaat("SLOTID_NONE"));
}

void func_13(int iParam0) // Position - 0xA4C Hash - 0x551D3331 ^0x53B6B0ED
{
	var unk;
	var unk3;

	unk = { Global_1935689.f_9431[Global_1935689.f_9437 /*2*/] };
	unk3.f_9 = joaat("SLOTID_NONE");

	if (!func_15() && Global_1935689.f_9446 || !Global_1935689.f_5)
		func_90(0);

	Global_1935689.f_9443 = 0;
	Global_1935689.f_19.f_203 = 0;

	if (Global_1935689.f_9446)
	{
		DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1935689.f_9449, Global_1935689.f_9443);
		Global_1935689.f_9446 = 0;
	}

	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_9458, func_66(iParam0));

	if (!func_27(false) && !func_68())
		func_91(&unk, &unk3, iParam0);

	func_92();

	if (Global_1935689.f_9439 == -283002878)
	{
		func_93();
	}
	else
	{
		func_94(&unk, &unk3, iParam0);
	
		if (Global_1935689.f_9439 == -182626652 && Global_1914319.f_16855 == 10 || Global_1914319.f_16855 == 19 || Global_1914319.f_16855 == 18 || Global_1935689.f_9439 == -693134279 && Global_1914319.f_16855 == 2)
		{
			if (func_84())
			{
				unk = { Global_1935689.f_9431[1 /*2*/] };
				func_94(&unk, &unk3, iParam0);
			}
		}
	
		func_95();
		func_93();
		func_96();
	}

	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1935689.f_9449, Global_1935689.f_9443);
	func_97(0);
	return;
}

void func_14(Hash hParam0) // Position - 0xBCB Hash - 0x225824D2 ^0x487D0765
{
	int num;

	num = hParam0;
	Global_1935689.f_9444 = 0;
	func_83(&Global_1935689.f_9431[func_82(Global_1935689.f_9439) /*2*/], hParam0);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1935689.f_9450, Global_1935689.f_9444);
	func_97(Global_1935689.f_14);
	Global_1935689.f_9438 = num;
	return;
}

BOOL func_15() // Position - 0xC1E Hash - 0x4228A1C2 ^0x4EB570BC
{
	return Global_1935689.f_11;
}

void func_16(int iParam0, var uParam1, var uParam2) // Position - 0xC2C Hash - 0xD7F3A5F6 ^0xC74A18E4
{
	Hash hash;
	Any dataContainerFromChildIndex;

	func_98();

	if (func_15())
	{
		func_17(0);
	
		if (Global_1935689.f_7)
			dataContainerFromChildIndex = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689.f_9450, Global_1935689.f_9445);
		else
			dataContainerFromChildIndex = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689.f_9449, Global_1935689.f_9445);
	
		hash = func_99(dataContainerFromChildIndex);
	}
	else
	{
		hash = func_99(*uParam1);
	}

	func_100(hash, uParam1, uParam2);
	func_101(0, hash);
	func_98();
	func_97(iParam0);
	return;
}

void func_17(int iParam0) // Position - 0xCA7 Hash - 0x29A8F290 ^0x82294867
{
	Global_1935689.f_11 = iParam0;
	return;
}

void func_18(int iParam0) // Position - 0xCB7 Hash - 0x29A8F290 ^0x1CB9B41C
{
	Global_1935689.f_10 = iParam0;
	return;
}

void func_19(int iParam0, var uParam1) // Position - 0xCC7 Hash - 0x39729151 ^0x39729151
{
	if (iParam0 != Global_1935689.f_9437)
		func_102(iParam0, uParam1);

	return;
}

BOOL func_20() // Position - 0xCE3 Hash - 0x10E0BCB0 ^0x9EC62CA7
{
	return Global_1935689.f_19.f_203 <= 0;
}

void func_21(var uParam0, var uParam1) // Position - 0xCF5 Hash - 0xA0C9848D ^0x58982BD3
{
	Hash hash;
	Hash hash2;

	Global_1935689.f_14 = uParam0;
	hash = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam1, "label");
	func_103(hash, uParam1);
	hash2 = hash;
	func_14(hash2);
	return;
}

void func_22() // Position - 0xD23 Hash - 0xA502F211 ^0xA502F211
{
	int num;

	num = Global_1935689.f_9417;
	func_104(num);
	return;
}

BOOL func_23() // Position - 0xD3A Hash - 0x776DDE2 ^0x628739AB
{
	if (func_105(Global_35, 0))
		if (PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_OPEN_CASHBOX")))
			return true;

	return false;
}

BOOL func_24() // Position - 0xD61 Hash - 0x85414BC8 ^0x8421EC3E
{
	if (Global_1935689.f_17 == 3)
		return true;

	return false;
}

BOOL func_25(Hash hParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xD78 Hash - 0x21D8E47F ^0xF74F2523
{
	BOOL flag;
	var unk10;
	Hash scriptHash;
	int num;
	int num2;
	int num3;
	eStackSize stackSize;
	BOOL flag2;
	BOOL flag3;
	BOOL num4;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;

	if (func_24())
	{
		Global_1935689.f_9441 = hParam0;
		func_106(hParam0, 1, -142743235, false, false);
		return false;
	}

	if (func_23())
	{
		HUD::_0xBFFF81E12A745A5F();
		func_107(hParam0, 0);
		func_106(func_108(), 1, -142743235, false, false);
		return false;
	}

	if (!func_109(hParam0, bParam4))
		return false;

	if (func_110(hParam0))
		return false;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
		return false;

	flag2 = false;
	flag3 = true;
	num4 = 1;
	flag4 = true;
	flag.f_4 = iParam3;
	flag.f_5 = 1;

	if (func_111(hParam0, -2081717885))
		func_112(hParam0, unk10, flag, num3, flag3, num4);
	else if (func_111(hParam0, -1909684001))
		func_113(hParam0, unk10, flag, flag3, num4);
	else if (func_111(hParam0, 587975446))
		func_114(hParam0, unk10);
	else if (func_111(hParam0, 566155764))
		if (!func_115(hParam0))
			return false;

	if (func_116(hParam0, bParam5, bParam6))
	{
		Global_1911772 = hParam0;
		Global_1911913 = MISC::GET_GAME_TIMER();
		return true;
	}

	if (func_111(hParam0, -1227898937))
	{
		flag.f_2 = hParam0;
		unk10 = { flag };
		TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "doc_newspaper", 32);
		unk10.f_14 = 1024;
		unk10.f_15 = 1;
		func_117(unk10, 1);
		num4 = 0;
		flag3 = false;
	}
	else if (func_111(hParam0, -1472964441) || func_111(hParam0, -228153877) || func_111(hParam0, 566155764))
	{
	}
	else if (func_111(hParam0, 1919582297))
	{
		if (func_118() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::IS_PED_EXITING_SCENARIO(Global_35, true) || !PED::IS_PED_ON_FOOT(Global_35))
			return false;
	
		switch (hParam0)
		{
			case joaat("consumable_predator_bait"):
			case joaat("consumable_potent_predator_bait"):
				TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "item_bait_predator", 32);
				break;
		
			case joaat("consumable_herbivore_bait"):
			case joaat("consumable_potent_herbivore_bait"):
				TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "item_bait_herbivore", 32);
				break;
		}
	
		flag.f_1 = hParam0;
		flag.f_3 = iParam1;
		unk10 = { flag };
		unk10.f_14 = 512;
		unk10.f_15 = 1;
		func_117(unk10, 0);
		flag3 = false;
	}
	else if (func_119(hParam0) == joaat("emote"))
	{
		flag.f_3 = 0;
		flag.f_1 = hParam0;
		flag.f_2 = 0;
		flag = func_120(Global_1058888.f_49051.f_4.f_31);
		unk10 = { flag };
		TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "net_player_wheel_item_use", 32);
		unk10.f_14 = 512;
		unk10.f_15 = 1;
		func_117(unk10, 0);
		num4 = 1;
	}
	else if (func_119(hParam0) == joaat("CLOTHING"))
	{
		if (func_121(hParam0) == -999503751)
		{
			if (func_62() != -1)
				return num4;
		
			if (!func_122(hParam0))
			{
				func_123("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, true);
				return num4;
			}
		
			flag5 = func_124(7, hParam0);
			flag6 = func_124(1, hParam0);
		
			if (flag6 && !flag5)
			{
				func_123("SI_ITEM_USE_OUTFITS_TEMP_HORSE", 10000, 0, 0, 0, true);
				return num4;
			}
		
			if (!func_125(7))
			{
				func_123("SI_ITEM_USE_OUTFITS_NO_SADDLE", 10000, 0, 0, 0, true);
				return num4;
			}
		
			if (!flag5)
			{
				if (func_86(Global_35, func_85(7), false))
					func_123("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, true);
				else
					func_123("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, true);
			
				return num4;
			}
		
			stackSize = func_126(hParam0);
		
			if (stackSize == -1)
				func_127(20, hParam0, 8, 0, false);
			else
				func_127(20, hParam0, 0, 0, false);
		}
		else
		{
			switch (func_121(hParam0))
			{
				case -2061583405:
					func_129(hParam0);
					return true;
			
				case -1719060085:
					if (hParam0 == Global_1946054.f_1497.f_1[23 /*3*/])
					{
						func_130(Global_35, 260271636, 0, -358215195, true, true, true, false, true, false);
						PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayUnequipGlovesFidget", true, 15);
						func_131(hParam0, false);
						return true;
					}
					else
					{
						PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayEquipGlovesFidget", true, 15);
						func_131(hParam0, true);
					}
					break;
			
				case -525676072:
				case -68128151:
				case 81053684:
					func_128(hParam0, false);
					return num4;
			}
		
			func_130(Global_35, hParam0, 0, -358215195, true, true, true, false, false, false);
		}
	}
	else
	{
		switch (hParam0)
		{
			case joaat("kit_shaving_kit"):
				num = func_145(func_144());
				num2 = func_146();
			
				if (func_147(num))
					if (num == num2 && !func_148())
						flag4 = false;
			
				if (flag4)
					func_123("PROPERTY_SHAVE_INV", 10000, 0, 0, 0, true);
				break;
		
			case joaat("upgrade_upg_mortar_pestle"):
			case -1448210800:
				func_151(true);
				break;
		
			case joaat("kit_camp"):
			case joaat("kit_camp_simple"):
				if (!func_133(Global_1392040.f_1, 1) || func_133(Global_1392040.f_1, 512))
				{
					if (func_62() == -1)
					{
						if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("player_camp")) > 3)
						{
						}
						else
						{
							TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "player_camp", 32);
							unk10.f_14 = 6096;
						
							if (func_134(120))
							{
								flag2 = flag2 | 8;
								flag.f_6 = { -1407.4073f, 1508.3297f, 239f };
								flag.f_6.f_3 = 260f;
							}
							else if (func_135(15))
							{
								flag2 = flag2 | 16;
								flag.f_6 = { 1775.9026f, 1255.6472f, 189.6069f };
								flag.f_6.f_3 = 90f;
							}
							else if (!func_122(hParam0) || !func_137(Global_35, func_85(7), func_136(7), true) || func_138() != 0 && !func_137(Global_35, Global_1900383.f_393, 5f, true))
							{
								flag2 = flag2 | 128 | 32;
							}
						
							if (func_133(flag2, 128) && Global_1357522.f_10[1])
								Global_1357522.f_10[1] = false;
							else if (!func_133(flag2, 128) && Global_1357522.f_10[0])
								Global_1357522.f_10[0] = false;
						
							flag = flag2;
							unk10 = { flag };
							unk10.f_15 = 1;
							func_117(unk10, 2);
						}
					}
					else if (func_122(joaat("kit_camp")))
					{
						if (func_139(1))
						{
							func_140(2);
						}
						else if (func_141(1))
						{
							func_123("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, true);
						}
						else
						{
							if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
								func_123("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, true);
							else
								func_123("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, true);
						
							func_142(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
						}
					}
					else if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
					{
						func_123("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, true);
						func_142(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
					}
					else
					{
						func_123("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, true);
					}
				}
				else
				{
					Global_1392040.f_1 = Global_1392040.f_1 | 2;
					num4 = true;
				}
				break;
		
			case joaat("weapon_kit_camera"):
				if (func_143(Global_35, true, 0, false) != joaat("weapon_kit_camera"))
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_kit_camera"), true, 0, false, false);
			
				return true;
		
			case joaat("kit_gun_oil"):
			case joaat("upgrade_upg_coffee_kit"):
				func_150(497, true);
				break;
		
			case joaat("kit_wardrobe"):
				if (func_62() != -1)
					break;
			
				if (!func_122(hParam0))
				{
					func_123("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, true);
					break;
				}
			
				flag5 = func_124(7, hParam0);
				flag6 = func_124(1, hParam0);
			
				if (flag6 && !flag5)
				{
					if (MAP::DOES_BLIP_EXIST(Global_36559))
						MAP::REMOVE_BLIP(&Global_36559);
				
					Global_36559 = MAP::_BLIP_ADD_FOR_STYLE(joaat("BLIP_STYLE_PLAYER_HORSE"));
					MAP::BLIP_ADD_MODIFIER(Global_36559, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
					func_123(MISC::VAR_STRING(0, -1680440926, Global_36559), 10000, 0, 0, 0, true);
					break;
				}
			
				if (!func_125(7))
				{
					func_123("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, true);
					break;
				}
			
				if (!flag5)
				{
					if (func_86(Global_35, func_85(7), false))
					{
						func_123("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, true);
					}
					else
					{
						if (MAP::DOES_BLIP_EXIST(Global_36559))
							MAP::REMOVE_BLIP(&Global_36559);
					
						Global_36559 = MAP::_BLIP_ADD_FOR_STYLE(joaat("BLIP_STYLE_PLAYER_HORSE"));
						MAP::BLIP_ADD_MODIFIER(Global_36559, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
						func_123(MISC::VAR_STRING(0, -482898802, Global_36559), 10000, 0, 0, 0, true);
					}
				
					break;
				}
			
				scriptHash = joaat("player_wardrobe");
			
				if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(scriptHash) > 0)
				{
				}
				else
				{
					flag.f_1 = hParam0;
					flag.f_2 = 51499045;
					unk10 = { flag };
					TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "player_wardrobe", 32);
					unk10.f_14 = 1024;
					unk10.f_15 = 1;
					func_117(unk10, 0);
				}
				break;
		
			case joaat("document_player_journal"):
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("document_player_journal"), 1928812891, 1, 0, -1082130432);
				flag3 = false;
				return true;
		
			case joaat("weapon_kit_binoculars"):
				if (func_143(Global_35, true, 0, false) != joaat("weapon_kit_binoculars"))
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_kit_binoculars"), true, 0, false, false);
			
				return true;
		
			case -7337301:
				flag.f_2 = -7337301;
				unk10 = { flag };
				TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "native_american_journal", 32);
				unk10.f_14 = 512;
				unk10.f_15 = 1;
				func_117(unk10, 0);
				num4 = false;
				flag3 = false;
				break;
		
			case joaat("provision_beaus_gift_1"):
				func_149(hParam0, 1, false, 562618531, false);
				func_152(joaat("provision_beaus_gift_2"), 1, false, false, false, 752097756, 0, 0, 0, false);
				break;
		
			case 1259508039:
				func_10(true);
				break;
		
			case joaat("kit_lightning_conductor"):
				func_149(hParam0, 1, false, 562618531, false);
				break;
		
			case joaat("KIT_HANDHELD_CATALOG"):
				func_132();
				break;
		
			default:
				num4 = false;
				break;
		}
	}

	if (flag3)
		HUD::_0xBFFF81E12A745A5F();

	return num4;
}

BOOL func_26() // Position - 0x176C Hash - 0xB0C1FB82 ^0x5B9C4C93
{
	if (Global_1935689.f_17 == 1 || Global_1935689.f_17 == 2)
		return true;

	return false;
}

BOOL func_27(BOOL bParam0) // Position - 0x1792 Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1914319.f_17370;

	return Global_1914319.f_17370 || Global_1914319.f_18996.f_1;
}

void func_28() // Position - 0x17C2 Hash - 0x2833BB29 ^0x5EBB54E3
{
	BOOL flag;
	var unk;
	var unk6;
	Hash hash;

	if (func_119(Global_1935689.f_9440) == joaat("consumable"))
		Global_1935496.f_31 = Global_1935689.f_9440;
	else
		Global_1935496.f_32 = Global_1935689.f_9440;

	flag = true;

	if (func_121(Global_1935689.f_9440) == -854348463)
	{
		unk = { func_153(Global_1935689.f_9440, false, false) };
		unk6 = { func_154(Global_1935689.f_9440, unk, unk.f_4, false) };
		func_155(unk6, 1);
	
		if (Global_1935689.f_9439 == -156634416)
			func_157(func_156(false), false, joaat("CI_TAG_FOLDER_KIT_WATCHES"));
		else
			func_157(func_156(false), true, 0);
	
		flag = true;
	}
	else if (func_121(Global_1935689.f_9440) == 81053684 || func_121(Global_1935689.f_9440) == -525676072)
	{
		func_128(Global_1935689.f_9440, false);
		flag = false;
	}
	else if (func_111(Global_1935689.f_9440, 316290104))
	{
		if (func_158(Global_1935689.f_9440, 0) >= 0)
			flag = true;
	}
	else if (func_159(Global_1935689.f_9440, true, false))
	{
		hash = func_160(Global_1935689.f_9440);
	
		if (func_161(hash, 0))
			if (func_162(hash))
				flag = false;
	}
	else if (func_25(Global_1935689.f_9440, 0, 0, 0, true, false, false))
	{
		flag = false;
	}

	if (func_24())
		flag = false;

	Global_1935689.f_9441 = Global_1935689.f_9440;
	func_10(flag);
	Global_1911913 = MISC::GET_GAME_TIMER();

	if (!func_163())
		func_90(0);

	return;
}

void func_29(Hash hParam0, int iParam1) // Position - 0x195F Hash - 0x7358C6B8 ^0x11F2A607
{
	if (!func_161(hParam0, 0))
		return;

	func_164(hParam0, iParam1, false, -327174699, true);
	func_157(func_156(false), false, 0);
	return;
}

void func_30(Hash hParam0) // Position - 0x1990 Hash - 0xED3666E6 ^0xED3666E6
{
	func_29(hParam0, func_166(func_165(0), hParam0, false));
	return;
}

void func_31(Player plParam0) // Position - 0x19AA Hash - 0xF547F6A4 ^0xBF27B96B
{
	if (func_167(32))
		return;

	func_168(32);

	if (func_169(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 1;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 1;

	if (func_170(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 2;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 2;

	if (func_171(Global_35, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD))
		Global_1935496.f_7 = Global_1935496.f_7 | 4;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 4;

	if (func_172(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 8;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 8;

	if (func_173(false, true))
		Global_1935496.f_7 = Global_1935496.f_7 | 16;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 16;

	if (!func_174(false))
		Global_1935496.f_7 = Global_1935496.f_7 | 32;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 32;

	if (!func_175(false))
		Global_1935496.f_7 = Global_1935496.f_7 | 512;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 512;

	if (!func_176(false))
		Global_1935496.f_7 = Global_1935496.f_7 | 8192;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 8192;

	if (PED::IS_PED_IN_COVER(Global_35, false, true))
		Global_1935496.f_7 = Global_1935496.f_7 | 16384;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 16384;

	if (PED::GET_PED_CROUCH_MOVEMENT(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 32768;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 32768;

	if (func_62() == false && PED::IS_PED_INCAPACITATED(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 131072;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 131072;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
		Global_1935496.f_7 = Global_1935496.f_7 | 256;
	else if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 256;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 256;

	if (Global_1935630.f_24 || TASK::_IS_PED_DUELLING(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 1024;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 1024;

	if (TASK::IS_PED_RUNNING(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 4096;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 4096;

	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) || func_171(Global_35, 1369124074))
		Global_1935496.f_7 = Global_1935496.f_7 | 128;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 128;

	if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		Global_1935496.f_7 = Global_1935496.f_7 | 33554432;
	
		if (TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35) == joaat("world_player_dynamic_kneel"))
			Global_1935496.f_7 = Global_1935496.f_7 | 67108864;
		else
			Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 67108864;
	}
	else
	{
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 67108864;
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 33554432;
	}

	if (CAM::IS_CINEMATIC_CAM_RENDERING())
		Global_1935496.f_7 = Global_1935496.f_7 | 65536;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 65536;

	if (CAM::_0x1204EB53A5FBC63D())
		Global_1935496.f_7 = Global_1935496.f_7 | 64;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 64;

	if (TASK::IS_PED_GETTING_UP(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 1048576;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 1048576;

	if (func_177(plParam0, false))
		Global_1935496.f_7 = Global_1935496.f_7 | 524288;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 524288;

	if (func_178(plParam0, false))
		Global_1935496.f_7 = Global_1935496.f_7 | 262144;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 262144;

	if (func_179(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 4194304;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 4194304;

	if (func_180())
		Global_1935496.f_7 = Global_1935496.f_7 | 16777216;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 16777216;

	if (ENTITY::DOES_ENTITY_EXIST(plParam0))
	{
		if (func_181(plParam0))
		{
			switch (ENTITY::GET_ENTITY_MODEL(plParam0))
			{
				case joaat("a_c_horsemule_01"):
				case joaat("a_c_horsemulepainted_01"):
				case joaat("a_c_donkey_01"):
					Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 134217728;
					break;
			
				default:
					Global_1935496.f_7 = Global_1935496.f_7 | 134217728;
					break;
			}
		}
	
		if (PED::_IS_META_PED_USING_COMPONENT(plParam0, 149557334))
			Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 134217728;
	
		if (PED::IS_PED_ON_VEHICLE(plParam0, false))
			Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 134217728;
	}
	else
	{
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 134217728;
	}

	if (func_62() == -1 && func_182(32768) || func_183() || func_184() || func_185() && !func_186() || ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.2f)
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 2097152;
	else
		Global_1935496.f_7 = Global_1935496.f_7 | 2097152;

	if (Global_1900073.f_17 && func_143(Global_35, true, 0, false) == joaat("weapon_fishingrod"))
		Global_1935496.f_7 = Global_1935496.f_7 | 8388608;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 8388608;

	return;
}

BOOL func_32(int iParam0) // Position - 0x20A7 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_187(iParam0);
}

int func_33() // Position - 0x20B5 Hash - 0x9F572D68 ^0x6988BC7F
{
	return 33284224;
}

BOOL func_34(var uParam0, Player plParam1, int iParam2, function funcParam3) // Position - 0x20C2 Hash - 0x9DC57E60 ^0x644FC782
{
	if (Global_1935496.f_29 && iParam2 != false)
	{
		Global_1935496.f_27 = Global_1935496.f_27 - Global_1935496.f_27 && iParam2;
		return false;
	}
	else
	{
		funcParam3(uParam0, plParam1, 0);
	
		if (func_42(StackVal, StackVal, StackVal, StackVal))
		{
			Global_1935496.f_27 = Global_1935496.f_27 || iParam2;
			return true;
		}
		else
		{
			Global_1935496.f_27 = Global_1935496.f_27 - Global_1935496.f_27 && iParam2;
			return false;
		}
	}

	return false;
}

int func_35() // Position - 0x2134 Hash - 0x9F572D68 ^0x99F2F35F
{
	return 33537239;
}

int func_36() // Position - 0x2141 Hash - 0x9F572D68 ^0x2ABD6E9
{
	return 26983431;
}

BOOL func_37() // Position - 0x214E Hash - 0xBA2FE0DB ^0xBA2FE0DB
{
	return func_188();
}

void func_38(int iParam0) // Position - 0x215A Hash - 0x44C39101 ^0x37EE422A
{
	func_76(&(Global_1935496.f_27), iParam0);
	return;
}

BOOL func_39(Hash hParam0) // Position - 0x216E Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_190(func_189(hParam0));
}

BOOL func_40(int iParam0) // Position - 0x2180 Hash - 0xC67CC87B ^0xBF39D46A
{
	return Global_1935496.f_29 && iParam0 != false;
}

int func_41() // Position - 0x2193 Hash - 0xBA2FE0DB ^0xBA2FE0DB
{
	return func_191();
}

BOOL func_42(var uParam0, Player plParam1, BOOL bParam2, int iParam3) // Position - 0x219F Hash - 0x4D17FACB ^0x3553DA46
{
	func_31(plParam1);

	if (!uParam0->f_1)
	{
		*uParam0 = PED::IS_PED_DEAD_OR_DYING(Global_35, true);
		uParam0->f_1 = 1;
	}

	if (Global_1935630.f_12 || *uParam0)
		return false;

	if (func_62() == false)
		if (Global_1935496.f_7 & 131072 != 0)
			return false;

	if (iParam3 & 1 == 0)
		if (Global_1935496.f_7 & 1024 != 0)
			return false;

	if (Global_1935630.f_22)
		return false;

	if (iParam3 & 2 == 0)
		if (Global_1935496.f_7 & 32 != 0)
			return false;

	if (iParam3 & 4 == 0)
		if (Global_1935496.f_7 & 4096 != 0)
			return false;

	if (iParam3 & 8 == 0)
		if (Global_1935496.f_7 & 512 != 0)
			return false;

	if (iParam3 & 512 == 0)
	{
		if (!uParam0->f_3)
		{
			uParam0->f_2 = func_192(bParam2);
			uParam0->f_3 = 1;
		}
	
		if (!uParam0->f_2)
			return false;
	}

	if (iParam3 & 262144 == 0)
	{
		if (!uParam0->f_5)
		{
			uParam0->f_4 = func_193(bParam2);
			uParam0->f_5 = 1;
		}
	
		if (!uParam0->f_4)
			return false;
	}

	if (iParam3 & 64 == 0)
	{
		if (!uParam0->f_7)
		{
			uParam0->f_6 = func_194(bParam2, iParam3, true);
			uParam0->f_7 = 1;
		}
	
		if (!uParam0->f_6)
			return false;
	}

	if (iParam3 & 128 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = func_195(Global_35, SCRIPT_TASK_MOUNT_ANIMAL);
			uParam0->f_11 = 1;
		}
	
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_196(Global_35);
			uParam0->f_9 = 1;
		}
	
		if (!uParam0->f_13)
		{
			uParam0->f_12 = ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40);
			uParam0->f_13 = 1;
		}
	
		if (uParam0->f_10 || uParam0->f_12 || uParam0->f_8)
		{
			if (bParam2)
				func_123("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, true);
		
			return false;
		}
	}

	if (iParam3 & 8388608 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = func_195(Global_35, SCRIPT_TASK_MOUNT_ANIMAL);
			uParam0->f_11 = 1;
		}
	
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_196(Global_35);
			uParam0->f_9 = 1;
		}
	
		if (uParam0->f_10 || uParam0->f_8)
		{
			if (!uParam0->f_15)
			{
				uParam0->f_14 = PED::IS_PED_SWIMMING(Global_1935630.f_40);
				uParam0->f_15 = 1;
			}
		
			if (uParam0->f_14)
				return false;
		}
	}

	if (iParam3 & 16 == 0)
	{
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_196(Global_35);
			uParam0->f_9 = 1;
		}
	
		if (!uParam0->f_13)
		{
			uParam0->f_12 = ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40);
			uParam0->f_13 = 1;
		}
	
		if (uParam0->f_8)
		{
			if (uParam0->f_12)
			{
				if (!uParam0->f_17)
				{
					uParam0->f_16 = func_197(Global_1935630.f_40, true);
					uParam0->f_17 = 1;
				}
			
				if (!uParam0->f_16)
				{
					if (bParam2)
						func_123("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, true);
				
					return false;
				}
			}
		}
	}

	if (iParam3 & 256 == 0)
		if (Global_1935496.f_7 & 8192 != 0)
			return false;

	if (iParam3 & 1024 == 0)
	{
		if (Global_1935496.f_7 & 65536 != 0)
		{
			if (bParam2)
				func_123("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, true);
		
			return false;
		}
	}

	if (iParam3 & 2048 == 0)
		if (Global_1935496.f_7 & 32768 != 0)
			return false;

	if (iParam3 & 4096 == 0)
		if (Global_1935496.f_7 & 16384 != 0)
			return false;

	if (iParam3 & 8192 == 0)
		if (Global_1935496.f_7 & 16 == 0)
			return false;

	if (iParam3 & 16384 == 0)
		if (Global_1935496.f_7 & 256 != 0)
			return false;

	if (iParam3 & 32768 == 0)
	{
		if (!uParam0->f_19)
		{
			uParam0->f_18 = func_52();
			uParam0->f_19 = 1;
		}
	
		if (uParam0->f_18)
		{
			if (bParam2)
				func_123("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, true);
		
			return false;
		}
	}

	if (iParam3 & 131072 == 0)
		if (Global_1935496.f_7 & 524288 == 0)
			return false;

	if (iParam3 & 65536 == 0)
		if (Global_1935496.f_7 & 262144 == 0)
			return false;

	if (iParam3 & 524288 == 0)
		if (Global_1935496.f_7 & 2097152 == 0)
			return false;

	if (iParam3 & 1048576 == 0)
		if (Global_1935496.f_7 & 8388608 == 0)
			return false;

	if (iParam3 & 2097152 == 0)
		if (Global_1935496.f_7 & 33554432 != 0)
			return false;

	if (iParam3 & 4194304 == 0)
		if (Global_1935496.f_7 & 67108864 != 0)
			return false;

	if (iParam3 & 16777216 == 0)
		if (Global_1935496.f_7 & 134217728 == 0)
			return false;

	if (Global_1935496.f_7 & 17825988 != 0)
		return false;

	return true;
}

void func_43(int iParam0) // Position - 0x2669 Hash - 0x44C39101 ^0x37EE422A
{
	func_198(&(Global_1935496.f_27), iParam0);
	return;
}

int func_44() // Position - 0x267D Hash - 0x9F572D68 ^0x6988BC7F
{
	return 33284224;
}

int func_45() // Position - 0x268A Hash - 0x3CF9FC4B ^0x5CAD57E5
{
	return 16662519;
}

int func_46() // Position - 0x2696 Hash - 0x3CF9FC4B ^0x3543A441
{
	return 16596983;
}

int func_47() // Position - 0x26A2 Hash - 0x3CF9FC4B ^0x73CC3DF
{
	return 16400295;
}

BOOL func_48() // Position - 0x26AE Hash - 0x4228A1C2 ^0x5DCAFF22
{
	return Global_1935496.f_10;
}

BOOL func_49() // Position - 0x26BC Hash - 0x4228A1C2 ^0x4EB570BC
{
	return Global_1935496.f_11;
}

BOOL func_50() // Position - 0x26CA Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1935496.f_12;
}

BOOL func_51() // Position - 0x26D8 Hash - 0x4228A1C2 ^0x1EB92889
{
	return Global_1935496.f_13;
}

BOOL func_52() // Position - 0x26E6 Hash - 0xC24BA3AE ^0xF178BF44
{
	return Global_1935689.f_1 || Global_1935689 == 1;
}

int func_53() // Position - 0x2700 Hash - 0x9F572D68 ^0x9FEEFCEA
{
	return 26978304;
}

int func_54() // Position - 0x270D Hash - 0x9F572D68 ^0xB34E8DD9
{
	return 18589696;
}

int func_55() // Position - 0x271A Hash - 0x9F572D68 ^0xA13B31FE
{
	return 26978448;
}

int func_56() // Position - 0x2727 Hash - 0x9F572D68 ^0x3789FFFE
{
	return 33529847;
}

int func_57() // Position - 0x2734 Hash - 0x9F572D68 ^0x65E83B0A
{
	return 32713860;
}

int func_58() // Position - 0x2741 Hash - 0x9F572D68 ^0xFD1849EE
{
	return 32505855;
}

void func_59() // Position - 0x274E Hash - 0x54676713 ^0xA4EF6915
{
	Global_1935496.f_29 = 0;
	return;
}

void func_60(BOOL bParam0) // Position - 0x275D Hash - 0xB7C5C1E8 ^0xB7C5C1E8
{
	int num;

	if (func_167(64))
		return;

	if (!func_27(false) && !func_68())
	{
		num = func_199(false);
	
		if (func_200(num, false, false, false, bParam0))
			func_201(num);
	
		func_202(num);
		func_203();
		func_168(64);
	}

	return;
}

void func_61() // Position - 0x27AF Hash - 0xE0486E84 ^0xE0486E84
{
	int num;

	num = func_199(false);
	func_200(num, true, false, false, true);
	func_201(num);
	return;
}

BOOL func_62() // Position - 0x27CF Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

void func_63() // Position - 0x27DD Hash - 0x8F476B52 ^0xC00987D8
{
	func_204(-893403924, &(Global_1935689.f_9475), 600, -1, 0, 0);
	func_205();
	return;
}

int func_64(var uParam0) // Position - 0x2800 Hash - 0x8BF29192 ^0xFA542AB0
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Hash data;
	Hash hash;
	Hash hash2;
	int num;

	func_206();
	flag = func_27(false);
	flag2 = func_68();
	flag3 = false;

	if (!flag && !flag2 && Global_1935689.f_9439 != -156634416 && Global_1935689.f_9439 != 1061777683)
		flag3 = true;

	Global_1935689.f_9446 = 1;

	if (!Global_1935689.f_9)
		Global_1935689.f_9438 = -1;

	Global_1935689.f_9449 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_menu_items");
	Global_1935689.f_9450 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_list_items");
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Satchel");
	Global_1935689.f_9463 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptSelectLabel", -31549930);
	Global_1935689.f_9464 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSelectEnabled", true);
	Global_1935689.f_9465 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSelectVisible", true);
	Global_1935689.f_9466 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptHoldSelectLabel", joaat("SATCHEL_PROMPT_BREAKDOWN"));
	Global_1935689.f_9467 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptHoldSelectEnabled", false);
	Global_1935689.f_9468 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptHoldSelectVisible", false);
	Global_1935689.f_9471 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "PromptDiscardAllLabel", HUD::GET_STRING_FROM_HASH_KEY(joaat("SATCHEL_PROMPT_DISCARD_ALL")));
	Global_1935689.f_9469 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDiscardAllEnabled", flag3);
	Global_1935689.f_9470 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDiscardAllVisible", flag3);
	Global_1935689.f_9474 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDropVisibile", flag3);
	Global_1935689.f_9472 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptSendLabel", -31549930);

	if (func_62() == -1 && func_27(false) && Global_1914319.f_16855 == 2)
		Global_1935689.f_9473 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSendAllVisible", true);
	else
		Global_1935689.f_9473 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSendAllVisible", false);

	data = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, "Selected");
	Global_1935689.f_9454 = DATABINDING::_DATABINDING_ADD_DATA_HASH(data, "Name", 0);
	Global_1935689.f_9455 = DATABINDING::_DATABINDING_ADD_DATA_HASH(data, "Description", 0);

	if (func_27(false) || func_23() || func_26())
		Global_1935689.f_9456 = DATABINDING::_DATABINDING_ADD_DATA_STRING(data, "Price", "");
	else
		Global_1935689.f_9456 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(data, "Price", false);

	if (func_62() == -1 && func_27(false) && Global_1914319.f_16855 == 2)
		Global_1935689.f_9457 = DATABINDING::_DATABINDING_ADD_DATA_STRING(data, "PriceLabel", "SHOP_SEND");
	else
		Global_1935689.f_9457 = DATABINDING::_DATABINDING_ADD_DATA_STRING(data, "PriceLabel", "SHOP_VALUE");

	Global_1935689.f_9458 = DATABINDING::_DATABINDING_ADD_DATA_HASH(data, "Category", 0);
	Global_1935689.f_9452 = DATABINDING::_DATABINDING_ADD_DATA_INT(data, "DefaultCategoryIndex", 0);
	Global_1935689.f_9453 = DATABINDING::_DATABINDING_ADD_DATA_INT(data, "CategoryIndex", func_207());
	Global_1935689.f_9451 = DATABINDING::_DATABINDING_ADD_DATA_INT(data, "CategoryCount", 0);
	Global_1935689.f_9459 = DATABINDING::_DATABINDING_ADD_DATA_STRING(data, "IndexDescription", "");
	Global_1935689.f_9460 = DATABINDING::_DATABINDING_ADD_DATA_STRING(data, "Tip", "");
	Global_1935689.f_9461 = INVENTORY::_0x9D21B185ABC2DBC4(data, "effects", false, false);
	Global_1935689.f_9462 = DATABINDING::_DATABINDING_ADD_DATA_HASH(data, "Folder", 0);
	Global_1935689.f_9448 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_category_items");
	func_208(Global_1935689.f_9448);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1935689.f_9448, Global_1935689.f_9416);
	hash = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "Collections");
	hash2 = joaat("SATCHEL_TITLE");

	if (func_209(joaat("clothing_hl_player_satchel_008_1")))
		hash2 = -1401261769;

	num = func_210(hash, "player", hash2, "ALL SATCHEL", joaat("SLOTID_NONE"));

	if (num < 0)
		return 0;

	if (func_84() || func_86(Global_35, func_85(7), true) || !(func_87(7) || func_88(7)) && func_27(false))
		func_210(hash, "saddle", -1186165261, "ALL", 724026534);

	func_102(num, &data);

	if (Global_1935689.f_9)
	{
		func_211(Global_1935689.f_9439);
		func_212(Global_1935689.f_9439, &data, false);
		func_157(1, false, 0);
	}
	else
	{
		func_157(func_213(), false, 0);
	}

	Global_1935689.f_9 = 0;
	return 1;
}

void func_65() // Position - 0x2C32 Hash - 0xA3EDFE63 ^0xCD2530A1
{
	if (Global_1572887.f_12 == -1)
		return;

	Global_1058888.f_2 = 1;
	return;
}

Hash func_66(int iParam0) // Position - 0x2C4E Hash - 0xBA965109 ^0xB940C203
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
	
		case -693134279:
			return -1077706770;
	
		case -283002878:
			return 262409577;
	
		case -182626652:
			if (Global_1914319.f_17370 || Global_1914319.f_18996.f_1 && Global_1914319.f_16855 == 19)
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
	}

	return 0;
}

Hash func_67(int iParam0) // Position - 0x2D5E Hash - 0xBA965109 ^0x6B29E8B0
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
	
		case -693134279:
			return 1001811369;
	
		case -283002878:
			return -1202687131;
	
		case -182626652:
			return 288697952;
	
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
	}

	return 0;
}

BOOL func_68() // Position - 0x2E3B Hash - 0xA3BA916B ^0xF68D7087
{
	if (Global_1935689.f_17 == 1 || Global_1935689.f_17 == 2 || func_23() || func_24())
		return true;

	return false;
}

int func_69(int iParam0) // Position - 0x2E75 Hash - 0x2565A2EE ^0x46E06806
{
	switch (iParam0)
	{
		case -2074770370:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9460, HUD::GET_STRING_FROM_HASH_KEY(818738914));
			break;
	
		case -693134279:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9460, HUD::GET_STRING_FROM_HASH_KEY(-402412948));
			break;
	
		case -182626652:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9460, HUD::GET_STRING_FROM_HASH_KEY(-456150746));
			break;
	
		default:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9460, "");
			break;
	}

	return 0;
}

void func_70(int iParam0) // Position - 0x2EEE Hash - 0x29A8F290 ^0x2CD2E4A1
{
	Global_1935689.f_18 = iParam0;
	return;
}

void func_71(int iParam0) // Position - 0x2EFE Hash - 0x29A8F290 ^0xE7407CC5
{
	Global_1935689.f_17 = iParam0;
	return;
}

void func_72(int iParam0) // Position - 0x2F0E Hash - 0x29A8F290 ^0x8D3AE984
{
	Global_1935689.f_12 = iParam0;
	return;
}

void func_73(var uParam0) // Position - 0x2F1E Hash - 0x4E0314F8 ^0x8471382B
{
	MAP::DISPLAY_RADAR(true);
	Global_1935689.f_1 = 0;
	func_214();
	func_215(uParam0);
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	HUD::_SHOW_PLAYER_CORES(false);
	HUD::_SHOW_HORSE_CORES(false);
	uParam0->f_1 = 0;
	return;
}

void func_74(int iParam0) // Position - 0x2F4F Hash - 0xBD578226 ^0x58965C2C
{
	Global_1911894[iParam0 /*6*/].f_1 = 3;
	Global_1911894[iParam0 /*6*/] = 0;
	Global_1911894[iParam0 /*6*/].f_5 = 0;
	return;
}

void func_75(int iParam0) // Position - 0x2F76 Hash - 0xB89DF92F ^0xB89DF92F
{
	Global_1935689.f_9415 = Global_1935689.f_9415 - Global_1935689.f_9415 && iParam0;
	return;
}

void func_76(Object obParam0, int iParam1) // Position - 0x2F97 Hash - 0xF55E891F ^0xF55E891F
{
	func_216(obParam0, iParam1);
	return;
}

void func_77(Hash hParam0, var uParam1) // Position - 0x2FA7 Hash - 0xC3757E63 ^0x508980C3
{
	BOOL flag;
	int num;
	int num2;
	int num3;
	int num4;
	Entity entity;
	var unk;
	int num5;
	Hash model;
	int damageCleanliness;
	int num6;
	Ped pedIndexFromEntityIndex;
	int num7;
	int i;

	uParam1->f_2 = 0;
	func_217(hParam0, 761605153, &flag, &num);
	num2 = func_218(hParam0, 2);
	num3 = num - num2;
	num4 = func_218(hParam0, 0);

	if (flag)
	{
		if (num3 > 0)
		{
			*uParam1 = 0;
			uParam1->f_2 = 1;
		}
		else
		{
			*uParam1 = 2;
		}
	
		if (num3 >= num4)
			uParam1->f_1 = 0;
		else
			uParam1->f_1 = 3;
	}
	else if (func_219(hParam0))
	{
		*uParam1 = 1;
		uParam1->f_1 = 1;
	}
	else
	{
		*uParam1 = 2;
		uParam1->f_1 = 2;
	}

	if (func_220(hParam0))
	{
		unk = 10;
	
		if (!func_221(hParam0, &entity))
		{
			model = func_222(hParam0);
			damageCleanliness = func_223(hParam0);
			num6 = func_224(hParam0);
			num5 = PED::_0xB29C553BA582D09E(&unk, model, damageCleanliness, num6);
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(entity))
				return;
		
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entity);
		
			if (PED::_IS_META_PED_USING_COMPONENT(pedIndexFromEntityIndex, 43391475) || ENTITY::_IS_ENTITY_FULLY_LOOTED(entity))
				num5 = 0;
			else
				num5 = func_225(pedIndexFromEntityIndex, &unk);
		}
	
		if (num5 <= 0)
			return;
	
		for (i = 0; i < num5; i = i + 1)
		{
			if (!func_161(unk[i], 0))
			{
			}
			else if (unk[i] == hParam0)
			{
			}
			else
			{
				func_77(unk[i], &num7);
			
				if (num7 == 0)
				{
					uParam1->f_2 = 1;
					*uParam1 = 0;
					uParam1->f_1 = 3;
					break;
				}
			}
		}
	}

	return;
}

void func_78(Hash hParam0) // Position - 0x310F Hash - 0x7A49018F ^0x6A3F5BF7
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_9463, hParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_9472, hParam0);
	return;
}

int func_79(Hash hParam0, BOOL bParam1) // Position - 0x3131 Hash - 0xDD7DA55C ^0x42714559
{
	float num;
	float num2;
	int num3;
	int num4;
	float value;
	int num5;
	int num6;

	if (hParam0 == 0)
		return 0;

	num = 1f;
	num2 = 1f;
	num3 = Global_1914319.f_16855.f_1;
	num4 = Global_1914319.f_16855;

	if (func_226(num3) && func_227(num4))
	{
		if (num4 == 10 || num4 == 18)
			num2 = func_228(num3, hParam0);
	
		num = func_229(&(Global_1914319.f_3[num4 /*446*/].f_35), hParam0);
	}

	value = num + num2;

	if (num <= 0f)
		return 0;

	value = value - (float)BUILTIN::FLOOR(value);
	num5 = func_230(hParam0, 816454899, false);
	num6 = BUILTIN::ROUND((float)num5 + ((float)num5 * value));

	if (bParam1)
		num6 = BUILTIN::ROUND((float)num6 * 0.5f);

	if (num6 <= 0)
		return 0;

	return num6;
}

const char* func_80(const char* sParam0, int iParam1) // Position - 0x31FF Hash - 0xB0CFF0C3 ^0xED6DB73B
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);

	return func_231(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

BOOL func_81(int iParam0, int iParam1) // Position - 0x3235 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_82(int iParam0) // Position - 0x3244 Hash - 0x601AFCB3 ^0x5916D033
{
	return iParam0 == -283002878 ? 1 : 0;
}

void func_83(int iParam0, int iParam1) // Position - 0x325A Hash - 0xCC6481EA ^0x6433047D
{
	var unk;
	int i;

	unk.f_9 = joaat("SLOTID_NONE");
	i = 0;

	for (i = *iParam0 - 1; i >= 0; i = i + -1)
	{
		if (!func_233(&unk, i, func_82(Global_1935689.f_9439), *iParam0))
		{
		}
		else if (!func_234(unk.f_4, iParam1))
		{
		}
		else if (!func_235(&unk, 0, true))
		{
		}
		else
		{
			if (func_27(false))
			{
				if (!func_161(unk.f_4, 0) || unk.f_11 <= 0)
				{
				}
				else
				{
					if (Global_1935689.f_9440 == 0)
						func_90(unk.f_4);
				
					func_236(unk, 0);
				}
			}
		
			if (Global_1935689.f_9440 == 0)
				func_90(unk.f_4);
		
			func_236(unk, 0);
		}
	}

	return;
}

BOOL func_84() // Position - 0x3306 Hash - 0x1CDD4ED9 ^0x1EF3E379
{
	Ped mount;
	float num;
	float num2;

	if (func_27(false))
	{
		mount = func_165(0);
	
		if (!ENTITY::DOES_ENTITY_EXIST(mount) || ENTITY::IS_ENTITY_DEAD(mount) || PED::IS_PED_INJURED(mount))
			return false;
	
		if (Global_1914319.f_16855 == 10 || Global_1914319.f_16855 == 18)
		{
			num = 30f;
		
			if (Global_1914319.f_16855.f_1 == 55)
				num = 40f;
		
			num2 = func_237(mount, false, true);
		
			if (num2 < num)
				return true;
		}
		else if (Global_1914319.f_16855 == 2)
		{
			if (func_237(mount, false, true) < 75f)
				return true;
		}
		else if (Global_1914319.f_16855 == 19)
		{
			if (func_238(mount))
				return true;
		}
	}
	else
	{
		if (func_62() == -1)
			if (func_239(Global_35))
				mount = PED::GET_MOUNT(Global_35);
			else if (func_240(-283002878))
				return true;
		else
			mount = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
	
		if (!ENTITY::DOES_ENTITY_EXIST(mount) || ENTITY::IS_ENTITY_DEAD(mount) || PED::IS_PED_INJURED(mount))
			return false;
	
		if (func_237(mount, false, true) < 1.7f)
			return true;
	}

	return false;
}

Ped func_85(int iParam0) // Position - 0x344B Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_241(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

BOOL func_86(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x3477 Hash - 0xF928BABC ^0xEB0637CA
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1) && !ENTITY::IS_ENTITY_DEAD(pedParam1))
			if (bParam2)
				return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true) && PED::GET_MOUNT(pedParam0) == pedParam1;
			else
				return PED::IS_PED_ON_MOUNT(pedParam0) && PED::GET_MOUNT(pedParam0) == pedParam1;

	return false;
}

int func_87(int iParam0) // Position - 0x34E1 Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_241(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_242(iParam0))
		return 0;

	ped = func_85(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return 1;

	return 0;
}

int func_88(int iParam0) // Position - 0x3535 Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;
	var entityCoords;
	var entityCoords2;

	iParam0 = func_241(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_242(iParam0))
		return 0;

	ped = func_85(iParam0);
	ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped);
	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	entityCoords = { ENTITY::GET_ENTITY_COORDS(ped, true, false) };
	entityCoords2 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };

	if (func_243(entityCoords, entityCoords2) > func_136(iParam0))
		return 1;

	return 0;
}

BOOL func_89(int iParam0, Hash hParam1) // Position - 0x35CF Hash - 0xB1D801CA ^0x91A50858
{
	if (!func_244(Global_1935689.f_9431[iParam0 /*2*/].f_1))
		return false;

	return func_245("ALL", &(Global_1935689.f_9431[iParam0 /*2*/].f_1), &Global_1935689.f_9431[iParam0 /*2*/], hParam1, false);
}

void func_90(Hash hParam0) // Position - 0x3613 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1935689.f_9440 = hParam0;
	return;
}

void func_91(var uParam0, Any* panParam1, int iParam2) // Position - 0x3624 Hash - 0xD2349C3B ^0xD2349C3B
{
	int i;
	int num;

	if (Global_1935689.f_9439 == 0)
		return;

	num = 0;

	if (iParam2 == 0 && *uParam0 > 16)
		num = *uParam0 - 16;

	for (i = 0; i < Global_1935689.f_19.f_1; i = i + 1)
	{
		Global_1935689.f_19.f_2[i /*2*/] = 0;
		Global_1935689.f_19.f_2[i /*2*/].f_1 = 0;
	}

	Global_1935689.f_19.f_1 = 0;
	i = 0;

	if (*uParam0 > 0)
	{
		for (i = *uParam0 - 1; i >= num; i = i + -1)
		{
			if (!func_233(panParam1, i, uParam0->f_1, *uParam0))
			{
			}
			else if (!func_235(panParam1, iParam2, true))
			{
			}
			else
			{
				func_246(*panParam1);
			}
		}
	}

	return;
}

void func_92() // Position - 0x36E5 Hash - 0xC3DC424F ^0x6B438DA1
{
	Entity entityFromItem;
	Hash hash;
	ItemSet itemset;
	int itemsetSize;
	int i;

	Global_1935689.f_1224 = 0;

	if (func_247())
	{
		if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
		{
			itemset = ITEMSET::CREATE_ITEMSET(false);
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, itemset);
		
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
						hash = func_248(entityFromItem);
					
						if (func_249(hash))
							Global_1935689.f_1224 = hash;
					}
				}
			
				ITEMSET::DESTROY_ITEMSET(itemset);
			}
		}
	}

	return;
}

void func_93() // Position - 0x3778 Hash - 0x480F9F7D ^0x480F9F7D
{
	if (func_250())
		if (func_27(false))
			if (func_251() == 19 || func_251() == 18 || func_251() == 10)
				func_252(true, false);
			else
				func_253(true);
		else
			func_253(true);

	return;
}

void func_94(var uParam0, Any* panParam1, int iParam2) // Position - 0x37CC Hash - 0x46BC62D2 ^0x46BC62D2
{
	int i;
	int num;

	if (iParam2 == 0)
	{
		func_254(uParam0, panParam1, iParam2);
	}
	else
	{
		num = 0;
	
		if (*uParam0 > 0)
		{
			for (i = *uParam0 - 1; i >= 0; i = i + -1)
			{
				if (!func_233(panParam1, i, uParam0->f_1, *uParam0))
				{
				}
				else if (!func_235(panParam1, iParam2, true))
				{
				}
				else
				{
					func_255(*panParam1, 0);
					num = num + 1;
				
					if (iParam2 == 0 && num >= 16)
						break;
				}
			}
		}
	}

	return;
}

void func_95() // Position - 0x3851 Hash - 0x5F8CB798 ^0xDA164642
{
	switch (Global_1935689.f_9439)
	{
		case -156634416:
			func_256();
			break;
	
		case 1561961676:
			if (func_257(joaat("money_loanshark_gwen_debt"), 1, false))
				func_258(joaat("money_loanshark_gwen_debt"), false);
			break;
	}

	return;
}

void func_96() // Position - 0x3894 Hash - 0xA9C53E16 ^0xA9C53E16
{
	if (!func_161(Global_1935689.f_1224, 0))
		return;

	if (func_84() && func_166(func_165(0), Global_1935689.f_1224, false) != 1)
		return;

	func_258(Global_1935689.f_1224, false);
	return;
}

void func_97(int iParam0) // Position - 0x38DD Hash - 0xCF9F0DB1 ^0x92D02C0B
{
	if (Global_1935689.f_19.f_203 > 16)
		if (Global_1935689.f_7)
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9459, MISC::VAR_STRING(2, "ENTRY_COUNTER", iParam0 + 1, Global_1935689.f_9444));
		else
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9459, MISC::VAR_STRING(2, "ENTRY_COUNTER", iParam0 + 1, Global_1935689.f_19.f_203));
	else
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9459, "");

	return;
}

void func_98() // Position - 0x394E Hash - 0x618E0E9 ^0xEDA45735
{
	if (!func_161(Global_1935689.f_9440, 0))
		Global_1935689.f_7 = 0;
	else if (func_259(Global_1935689.f_9440, 1224357681) != 0 && Global_1935689.f_9439 != 0 && Global_1935689.f_9439 != -2074770370 && !func_27(false) && !func_23())
		Global_1935689.f_7 = 1;
	else
		Global_1935689.f_7 = 0;

	return;
}

Hash func_99(Any anParam0) // Position - 0x39CB Hash - 0xF81FBD0D ^0x90404DBF
{
	Any any;

	any = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(anParam0, "label");
	return any;
}

void func_100(Hash hParam0, var uParam1, var uParam2) // Position - 0x39E0 Hash - 0x4AF48505 ^0xD10A358D
{
	BOOL flag;
	int num;
	int num2;
	BOOL flag2;
	BOOL flag3;
	int num3;
	int num4;
	BOOL flag4;
	float value;

	flag = true;

	if (func_161(hParam0, 0))
	{
		if (func_111(hParam0, 1147021565))
		{
			if (Global_1935689.f_9439 == -283002878)
				num = 2;
			else
				num = 1;
		
			if (!func_27(false))
			{
				num2 = func_260(&hParam0);
			
				if (func_111(hParam0, 1573112293) && !func_261(num2))
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
	
		func_262(hParam0, uParam1);
		flag2 = false;
		flag3 = func_263(hParam0);
	
		if (func_84())
		{
			num3 = func_166(func_165(0), hParam0, false);
		}
		else
		{
			num3 = func_264(hParam0, false, false);
		
			if (hParam0 == Global_1935689.f_1224)
				num3 = num3 + 1;
		}
	
		num4 = func_265(hParam0, false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_9454, func_266(hParam0));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_9455, func_267(hParam0));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9474, flag3);
	
		if (flag3 && num3 > 1)
			flag2 = true;
	
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9470, flag2);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9469, flag2);
		flag4 = true;
	
		if (func_27(false) || func_68())
		{
			value = BUILTIN::TO_FLOAT(func_268(hParam0, 1)) / 100f;
		
			if (Global_1914319.f_16855 == 2)
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9456, MISC::VAR_STRING(10, "SEND_ITEM_VALUE", func_80(MISC::_GET_STRING_FROM_FLOAT(value, 2), joaat("COLOR_PURE_WHITE"))));
			else if (Global_1914319.f_16855 == 19)
				if (uParam2->f_1)
					uParam2->f_2();
			else
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9456, MISC::VAR_STRING(10, "SHOP_ITEM_VALUE", func_80(MISC::_GET_STRING_FROM_FLOAT(value, 2), joaat("COLOR_PURE_WHITE"))));
		
			if (!func_269(hParam0, Global_1914319.f_16855.f_1) && !func_68())
				flag4 = false;
		}
	
		if (flag4)
			if (num4 > 1)
				if (Global_1935689.f_19.f_203 <= 0)
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9460, "");
				else if (num3 >= num4)
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9460, MISC::VAR_STRING(2, "SATCHEL_TIP_CAPACITY_FULL", num3, num4));
				else
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9460, MISC::VAR_STRING(2, "SATCHEL_TIP_CAPACITY", num3, num4));
			else if (num4 == 1)
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9460, MISC::VAR_STRING(2, "SATCHEL_TIP_UNIQUE"));
			else
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9460, MISC::VAR_STRING(2, "SATCHEL_TIP_INFINITE", num3));
		else if (func_251() == 2)
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9460, "");
		else
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9460, MISC::VAR_STRING(2, "SHOP_H_NOT_ACCEPTED_ITEM"));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_9454, func_66(Global_1935689.f_9439));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_9455, func_66(Global_1935689.f_9439));
	}

	if (!flag)
		INVENTORY::_0x75CFAC49301E134F(Global_1935689.f_9461, false, false);
	else
		INVENTORY::_0x75CFAC49301E134F(Global_1935689.f_9461, hParam0, false);

	func_90(hParam0);
	return;
}

void func_101(int iParam0, Hash hParam1) // Position - 0x3CDD Hash - 0xB96CAE86 ^0xDAFA9881
{
	if (!func_111(hParam1, 747873593) && !func_111(hParam1, joaat("CI_TAG_FOLDER_LETTERS")) && !func_111(hParam1, joaat("CI_TAG_FOLDER_NOTES")))
		return;

	if (hParam1 != Global_1911894[iParam0 /*6*/])
	{
		Global_1911894[iParam0 /*6*/].f_1 = 3;
		Global_1911894[iParam0 /*6*/] = hParam1;
		Global_1911894[iParam0 /*6*/].f_5 = 0;
	}

	return;
}

void func_102(int iParam0, var uParam1) // Position - 0x3D46 Hash - 0x115F7A65 ^0x86442AC9
{
	Global_1935689.f_9437 = iParam0;

	if (func_24())
		if (PED::IS_PED_CARRYING_SOMETHING(Global_35) == false)
			func_211(-1559802791);

	if (func_23())
		func_211(-2074770370);

	func_212(Global_1935689.f_9439, uParam1, false);
	return;
}

void func_103(Hash hParam0, var uParam1) // Position - 0x3D90 Hash - 0x77C183BD ^0xD1CC274
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_9454, hParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_9455, func_270(hParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1935689.f_9462, hParam0);
	func_90(0);
	INVENTORY::_0x75CFAC49301E134F(Global_1935689.f_9461, false, false);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_9460, "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9474, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9470, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9469, false);
	func_271(uParam1);
	return;
}

void func_104(int iParam0) // Position - 0x3E0D Hash - 0xD17F698 ^0xEA8D4DAE
{
	int num;
	Any dataContainerFromChildIndex;
	Any dataContainerFromChildIndex2;
	int i;
	Any dataContainerFromChildIndex3;
	BOOL flag;
	BOOL flag2;

	Global_1935689.f_9417 = DATABINDING::DATABINDING_READ_INT(Global_1935689.f_9453);
	num = Global_1935689.f_9418[Global_1935689.f_9417];

	if (num != Global_1935689.f_9439)
	{
		if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_GAME_MENU_OPTION")))
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_GAME_MENU_OPTION"), false);
	
		if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_GAME_MENU_EXTRA_OPTION")))
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_GAME_MENU_EXTRA_OPTION"), false);
	
		Global_1935689.f_19.f_203 = 0;
		Global_1935689.f_9437 = func_82(num);
		dataContainerFromChildIndex = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689.f_9448, iParam0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(dataContainerFromChildIndex, "CurrentCategory", false);
		dataContainerFromChildIndex2 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689.f_9448, Global_1935689.f_9417);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(dataContainerFromChildIndex2, "CurrentCategory", true);
		func_212(num, &dataContainerFromChildIndex2, false);
	}
	else
	{
		for (i = 0; i < 11; i = i + 1)
		{
			dataContainerFromChildIndex3 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689.f_9448, i);
			flag = DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(dataContainerFromChildIndex3, "CurrentCategory");
			flag2 = !(Global_1935689.f_9418[i] != Global_1935689.f_9439);
		
			if (flag != flag2)
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(dataContainerFromChildIndex3, "CurrentCategory", flag2);
		}
	
		Global_1935689.f_9437 = func_82(Global_1935689.f_9439);
	}

	return;
}

BOOL func_105(Ped pedParam0, Object obParam1) // Position - 0x3F39 Hash - 0x9BD5E73F ^0xD367FD44
{
	Object object;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	object = obParam1;

	if (object == 0)
		return true;

	if (func_272(object, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_272(object, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_272(object, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_272(object, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_272(object, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_272(object, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_272(object, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_272(object, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

BOOL func_106(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x4039 Hash - 0x1BAC1FBB ^0xC7130937
{
	var unk;
	var unk6;

	if (!func_161(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_153(hParam0, bParam4, true) };

	if (unk.f_4 == joaat("SLOTID_SATCHEL"))
		return func_273(hParam0, iParam1, hParam2, bParam3, bParam4);

	unk6 = { func_154(hParam0, unk, unk.f_4, bParam4) };
	return func_274(hParam0, &unk6, &unk, iParam1, hParam2, bParam3, bParam4);
}

void func_107(Hash hParam0, int iParam1) // Position - 0x40AA Hash - 0xD62C91CE ^0xD62C91CE
{
	Global_1357549.f_1672 = hParam0;
	Global_1357549.f_1673 = iParam1;
	return;
}

Hash func_108() // Position - 0x40C4 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1357549.f_1672;
}

BOOL func_109(Hash hParam0, BOOL bParam1) // Position - 0x40D3 Hash - 0xEA6A22E1 ^0x80E77BB7
{
	int num;
	var unk;

	if (!func_161(hParam0, 0))
		return false;

	if (Global_1935689.f_8)
		return false;

	if (hParam0 != 1259508039 && hParam0 != joaat("kit_camp") && hParam0 != joaat("kit_camp_simple") && bParam1)
	{
		num = func_275(hParam0);
	
		if (func_111(hParam0, 1147021565))
			num = num | 64;
	
		if (!func_42(&unk, HUD::_0x0501D52D24EA8934(1), true, num))
			return false;
	}

	if (hParam0 == -1448210800 || hParam0 == joaat("upgrade_upg_mortar_pestle"))
		if (func_183())
			return false;

	if (!func_257(hParam0, 1, false))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	return true;
}

BOOL func_110(Hash hParam0) // Position - 0x418F Hash - 0xE1905D26 ^0xF533277C
{
	if (func_119(hParam0) == joaat("emote"))
		return false;

	if (!INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_199(false), hParam0, func_27(false)))
		return false;

	switch (hParam0)
	{
		case joaat("kit_camp"):
		case joaat("kit_camp_simple"):
			if (!Global_1392040.f_2)
			{
				func_173(true, true);
				TELEMETRY::_TELEMETRY_CAMP_CREATED(0);
				return true;
			}
			else
			{
				return false;
			}
			break;
	
		case joaat("KIT_HANDHELD_CATALOG"):
			func_123(MISC::VAR_STRING(0, 163043886, Global_36559), 10000, 0, 0, 0, true);
			break;
	}

	return true;
}

BOOL func_111(Hash hParam0, Hash hParam1) // Position - 0x421C Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

void func_112(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, int iParam27, BOOL bParam28, int iParam29) // Position - 0x424D Hash - 0xED0EB3AE ^0xA8675092
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_LETTER_MAYOR_REWARD2"):
			if (func_276())
				func_277(joaat("journal_rc_mayor4_ar"), 0);
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("journal_rc_mayor4_ar")))
				func_277(joaat("journal_rc_mayor4b_jn"), 0);
			break;
	
		case joaat("DOCUMENT_LETTER_MAYOR_REWARD2_JN"):
			func_277(joaat("journal_rc_mayor4a_jn"), 0);
			break;
	
		case joaat("DOCUMENT_TS_STR_MAYOR_LETTER"):
			break;
	
		case joaat("DOCUMENT_CATALOGUE_WMN_LETTER_01"):
			iParam27 = joaat("TP_CATALOGUE_LETTER_01");
			uParam17.f_1 = iParam27;
			TEXT_LABEL_ASSIGN_STRING(&(uParam1.f_10), "respond_parcel", 32);
			iParam29 = 0;
			bParam28 = true;
			break;
	
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			if (func_280() && !func_281(40) && !func_287(32))
			{
				func_288(4);
				func_284(39, 0, 0, 0, 0, -1, 0);
				func_285(39, 0, 0, 0, 0, false, 2, false);
				func_289(32);
			}
			break;
	
		case joaat("DOCUMENT_RCM_FMA_LETTER"):
			func_278(Global_1347702[80 /*49*/].f_15, 1);
		
			if (func_276() == true)
				func_277(joaat("journal_rc_fma5_1_ar"), 0);
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("journal_rc_fma5_1_ar")))
				if (func_279(77))
					func_277(joaat("journal_rc_fma5_2_jn"), 0);
				else
					func_277(joaat("journal_rc_fma5_1_jn"), 0);
			break;
	
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			if (func_280() && !func_281(51) && !func_282(16384))
			{
				func_283(1);
				func_284(51, 0, 0, 0, 0, -1, 0);
				func_285(51, 0, 0, joaat("taxidermy_order_04"), 0, false, 5, false);
				func_286(16384);
			}
			break;
	
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			if (func_280() && !func_281(50) && !func_293(32))
			{
				func_294(4);
				func_284(49, 0, 0, 0, 0, -1, 0);
				func_285(49, 0, 0, 0, 0, false, 2, false);
				func_295(32);
			
				if (!func_296(Global_1347702[50 /*49*/].f_15, true))
					if (func_276() == true)
						func_277(joaat("journal_rc_rockcarv15_ar"), 0);
					else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("journal_rc_rockcarv15_ar")))
						func_277(joaat("journal_rc_rockcarv15_jn"), 0);
			}
			break;
	
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			if (func_280() && !func_281(51) && !func_282(1048576))
			{
				func_283(2);
				func_284(51, 0, 0, 0, 0, -1, 0);
				func_285(51, 0, 0, joaat("taxidermy_order_05"), 0, false, 2, false);
				func_286(1048576);
			}
			break;
	
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			if (func_280() && !func_281(42) && !func_290(16))
			{
				func_291(8);
				func_284(41, 0, 0, 0, 0, -1, 0);
				func_285(41, 0, 0, 0, 0, false, 2, false);
				func_292(16);
			}
			break;
	
		case joaat("DOCUMENT_TS_RHD_FEUD_LETTER"):
			break;
	}

	return;
}

void func_113(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, BOOL bParam27, int iParam28) // Position - 0x44FD Hash - 0x9E368772 ^0x9E368772
{
	switch (hParam0)
	{
		case joaat("document_field_manual"):
			func_291(16);
			break;
	}

	return;
}

void func_114(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) // Position - 0x451C Hash - 0xD1346F27 ^0x2B0FCC0A
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_GUNSLINGER_1_NOTE"):
		case -691125380:
		case -287018478:
		case 305626647:
			TEXT_LABEL_ASSIGN_STRING(&(uParam1.f_10), "gunslinger_notes", 32);
			break;
	}

	return;
}

BOOL func_115(Hash hParam0) // Position - 0x4551 Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

BOOL func_116(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x455A Hash - 0x3A368F62 ^0x7DB4A593
{
	if (func_297(hParam0, bParam1, false, 0, -1082130432))
	{
		Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
		return true;
	}

	switch (func_259(hParam0, -949239683))
	{
		case -1919515848:
			if (!bParam1)
			{
				func_312(hParam0);
				return true;
			}
			break;
	
		case -1915958659:
			if (!bParam1)
			{
				func_306(hParam0);
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
		
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return true;
	
		case -809056541:
			if (!bParam1)
			{
				func_309(hParam0);
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
		
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return true;
	
		case -273840653:
			if (!bParam1)
			{
				func_302(hParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return true;
			}
			break;
	
		case -262371497:
			if (!bParam1)
			{
				func_310(hParam0);
				return true;
			}
			break;
	
		case 89124942:
			if (!bParam1)
			{
				func_313(hParam0);
				return true;
			}
			break;
	
		case 238865292:
			if (!bParam1)
			{
				func_314(hParam0);
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
		
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return true;
	
		case 845883585:
			if (!bParam1)
			{
				if (!func_299())
				{
					if (func_300(&Global_35))
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, joaat("apply_pomade_with_hat"), 1, 0, -1082130432);
					else
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, joaat("apply_pomade_with_no_hat"), 1, 0, -1082130432);
				
					return true;
				}
				else
				{
					func_123("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, true);
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
				func_303(hParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return true;
			}
			break;
	
		case 1130235258:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_35, 0))
					func_304(hParam0);
				else
					func_305(hParam0);
			
				return true;
			}
			break;
	
		case 1174751405:
			if (!bParam1)
			{
				func_298(hParam0);
				return true;
			}
			break;
	
		case 1177617310:
			if (!bParam1)
			{
				func_315(hParam0);
				return true;
			}
			break;
	
		case 1443104131:
			if (!bParam1)
			{
				func_311(hParam0);
				return true;
			}
			break;
	
		case 1451036371:
			if (!bParam1)
			{
				func_301(hParam0);
				return true;
			}
			break;
	
		case 1859991422:
			if (!bParam1)
			{
				func_307(hParam0);
				return true;
			}
			break;
	
		case 1891031775:
			if (!bParam1)
			{
				func_308(hParam0);
				return true;
			}
			break;
	}

	return false;
}

void func_117(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16) // Position - 0x48FA Hash - 0x72903DA6 ^0xEF9AE14A
{
	int i;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0.f_10)))
		return;

	if (Global_1934603.f_161 >= 10)
		return;

	if (!func_316(iParam16, 2))
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(uParam0.f_10))) > 0 || func_317(&(uParam0.f_10)))
			return;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[i /*16*/].f_10)))
		{
			Global_1934603[i /*16*/] = { uParam0 };
			Global_1934603.f_161 = Global_1934603.f_161 + 1;
			func_318(iParam16);
			return;
		}
	}

	return;
}

BOOL func_118() // Position - 0x4996 Hash - 0x3AC12039 ^0x3AC12039
{
	return Global_1894899 & 2 != 0;
}

int func_119(Hash hParam0) // Position - 0x49A6 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_161(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_120(int iParam0) // Position - 0x49D1 Hash - 0x8F8D4E05 ^0x8F8D4E05
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

Hash func_121(Hash hParam0) // Position - 0x4A0A Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_161(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_122(Hash hParam0) // Position - 0x4A35 Hash - 0xBFDBD794 ^0x724C9162
{
	eStackSize stackSize;

	if (hParam0 == 0)
		return false;

	if (func_119(hParam0) == joaat("CLOTHING"))
	{
		if (func_121(hParam0) == -999503751)
		{
			stackSize = func_126(hParam0);
		
			if (stackSize != -1 && !func_319(stackSize) || !func_257(hParam0, 1, false))
				return false;
		}
	}

	return true;
}

int func_123(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x4A92 Hash - 0x8EBD6187 ^0x42F0F0AC
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

BOOL func_124(int iParam0, Hash hParam1) // Position - 0x4ACD Hash - 0xC8DEF152 ^0xBE9C015A
{
	Ped mount;

	iParam0 = func_241(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	mount = func_85(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(mount))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(mount) || PED::IS_PED_INJURED(mount))
		return 0;

	if (PED::IS_PED_SWIMMING(Global_35) || PED::IS_PED_SWIMMING(mount))
		return 0;

	if (PED::IS_PED_ON_MOUNT(Global_35))
		if (PED::_GET_RIDER_OF_MOUNT(mount, false) == Global_35)
			if (hParam1 == joaat("kit_wardrobe"))
				return 0;
		else
			return 0;

	if (func_320(iParam0))
		return 1;

	return 0;
}

BOOL func_125(int iParam0) // Position - 0x4B74 Hash - 0x9F2526C ^0x74A3693D
{
	Ped ped;

	iParam0 = func_241(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	ped = func_85(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
	{
		if (iParam0 == func_321())
			return true;
	
		return false;
	}

	if (ped == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
		return true;

	return false;
}

eStackSize func_126(Hash hParam0) // Position - 0x4BCD Hash - 0x9830D1FB ^0x9830D1FB
{
	switch (hParam0)
	{
		case -2114499732:
			return 18;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L"):
			return 32;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H"):
			return 53;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H"):
			return 45;
	
		case -1951220140:
			return 78;
	
		case -1914506115:
			return 71;
	
		case -1826731591:
			return 24;
	
		case -1725704631:
			return 81;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L"):
			return 52;
	
		case -1611873049:
			return 91;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_H"):
			return 37;
	
		case -1476781101:
			return 10;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L"):
			return 56;
	
		case -1303643297:
			return 86;
	
		case -1300731953:
			return 74;
	
		case -1243402388:
			return 66;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H"):
			return 43;
	
		case -1205612021:
			return 70;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L"):
			return 48;
	
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H"):
			return 57;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L"):
			return 34;
	
		case -978578725:
			return 94;
	
		case -926815459:
			return 72;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_L"):
			return 40;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H"):
			return 47;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H"):
			return 31;
	
		case -769081407:
			return 16;
	
		case -659341240:
			return 85;
	
		case -535599244:
			return 89;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L"):
			return 30;
	
		case -409616653:
			return 65;
	
		case -389591806:
			return 73;
	
		case -361635024:
			return 62;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_H"):
			return 39;
	
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H"):
			return 59;
	
		case -291256376:
			return 23;
	
		case -272211555:
			return 61;
	
		case -55563408:
			return 64;
	
		case -19271249:
			return 82;
	
		case 65931886:
			return 67;
	
		case 162509669:
			return 3;
	
		case 166243423:
			return 0;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H"):
			return 33;
	
		case 214175524:
			return 84;
	
		case 274995506:
			return 5;
	
		case 294553332:
			return 11;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_L"):
			return 38;
	
		case 411856831:
			return 88;
	
		case 439606975:
			return 14;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H"):
			return 51;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H"):
			return 29;
	
		case 523337834:
			return 80;
	
		case 594312243:
			return 92;
	
		case 624063935:
			return 9;
	
		case 635948769:
			return 4;
	
		case 688004210:
			return 20;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L"):
			return 36;
	
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L"):
			return 60;
	
		case 800827126:
			return 19;
	
		case 802495462:
			return 75;
	
		case 842905332:
			return 77;
	
		case 890706995:
			return 93;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H"):
			return 55;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L"):
			return 46;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H"):
			return 41;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H"):
			return 49;
	
		case 1156438275:
			return 90;
	
		case 1160643979:
			return 8;
	
		case 1164374808:
			return 7;
	
		case 1201189539:
			return 28;
	
		case 1257427489:
			return 83;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L"):
			return 54;
	
		case 1351927599:
			return 21;
	
		case 1352942778:
			return 26;
	
		case 1371678229:
			return 68;
	
		case 1383300684:
			return 1;
	
		case 1389254668:
			return 58;
	
		case 1460520700:
			return 76;
	
		case 1511551084:
			return 79;
	
		case 1560492757:
			return 15;
	
		case 1661121390:
			return 6;
	
		case 1784889667:
			return 13;
	
		case 1788874135:
			return 12;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H"):
			return 35;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L"):
			return 42;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L"):
			return 44;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L"):
			return 50;
	
		case 1902428294:
			return 17;
	
		case 1964379549:
			return 27;
	
		case 2032023096:
			return 22;
	
		case 2038771525:
			return 87;
	
		case 2051441678:
			return 2;
	
		case 2102263084:
			return 69;
	
		case 2119049229:
			return 25;
	
		default:
		
	}

	return -1;
}

void func_127(int iParam0, Hash hParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0x4FE0 Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_322(16384);

	num = iParam0;
	num.f_1 = hParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_323(num);
	return;
}

int func_128(Hash hParam0, BOOL bParam1) // Position - 0x5012 Hash - 0xA79D5BF ^0xE827C189
{
	Object object;

	if (!func_188())
		return 0;

	if (!func_324(hParam0))
		return 0;

	if (func_325(hParam0))
	{
		object = 0;
	
		if (func_121(hParam0) == 81053684)
			if (bParam1)
				func_198(&object, 2);
	
		return func_326(hParam0, object);
	}

	return 0;
}

void func_129(Hash hParam0) // Position - 0x5066 Hash - 0x6BEB4307 ^0xC3DDEB73
{
	int num;
	Hash hash;

	num = 10;
	hash = Global_1946054.f_1497.f_1[num /*3*/];

	if (hash == hParam0)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayUnequipHatFidget", true, 15);
		func_130(Global_35, -2065815962, 0, -358215195, true, true, true, false, true, false);
		func_131(hParam0, false);
		return;
	}

	PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayEquipHatFidget", true, 15);
	func_130(Global_35, hParam0, 0, -358215195, true, true, true, false, true, false);

	if (func_327(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
		func_328();
		func_322(128);
		return;
	}

	if (hash == Global_1946054.f_57[num /*11*/])
	{
		func_131(hParam0, true);
		return;
	}

	if (func_329(-2061583405, false))
	{
		if (func_209(hash))
			func_131(hash, false);
		else
			func_330(hash, true, true, false);
	
		func_131(hParam0, true);
		return;
	}

	if (func_209(hash))
	{
		func_131(hash, false);
		func_131(hParam0, true);
	}
	else if (func_209(hParam0))
	{
		if (hParam0 != func_331(0))
		{
			func_332(hParam0, hash);
			func_131(hParam0, false);
			func_131(hash, false);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
			func_322(128);
			func_131(hParam0, true);
		}
	}

	return;
}

int func_130(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x51AA Hash - 0x20E8246C ^0x1B874796
{
	var unk;
	int num;

	if (iParam3 == -358215195)
	{
		unk = { func_153(hParam1, true, false) };
		iParam3 = func_333(unk.f_4);
	
		if (iParam3 == -358215195)
			return 0;
	}

	if (!func_335(hParam1, hParam2, func_334(iParam3, 1), bParam4, bParam9))
		return 0;

	func_336(true, func_62() == -1 && bParam5, true);

	switch (iParam3)
	{
		case 1108822547:
			if (func_327(32768) && hParam1 != Global_1946054.f_57[func_334(iParam3, 1) /*11*/])
			{
				func_328();
				func_127(22, iParam3, 256, 0, false);
			}
		
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 2);
			break;
	
		case 1145151482:
		case 1742327865:
			if (bParam8 && hParam1 != Global_1946054.f_57[func_334(iParam3, 1) /*11*/])
				func_127(31, 0, 0, 0, false);
			break;
	}

	if (!bParam6)
	{
		if (bParam7)
			func_127(22, iParam3, 0, 0, false);
	
		return 1;
	}

	num = func_337(iParam3);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		func_127(19, 0, num, 0, false);
	
		if (iParam3 == 1742327865 || iParam3 == 1108822547 || iParam3 == 1145151482)
		{
			func_338(0);
			func_339(36, 0, 0);
		}
	}
	else
	{
		num = num | 1;
		func_127(19, 0, num, pedParam0, false);
	}

	return 1;
}

void func_131(Hash hParam0, BOOL bParam1) // Position - 0x5319 Hash - 0xE53C6141 ^0xE235D8BA
{
	var unk;
	var guid;

	unk = { func_153(hParam0, false, false) };
	guid = { func_154(hParam0, unk, unk.f_4, false) };

	if (func_340(hParam0, unk, unk.f_4, false) <= 0)
		return;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_199(false), &guid, bParam1);
	return;
}

void func_132() // Position - 0x5363 Hash - 0xC6CD68D ^0xAFD0A1CE
{
	if (func_341())
		return;

	if (func_342())
	{
		TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("KIT_HANDHELD_CATALOG"), joaat("MP_CATALOGUE_UNHOLSTER_S1"), 1, 0, -1082130432);
		Global_1914319.f_18996.f_1 = 1;
	}
	else if (Global_1914319.f_18996.f_4 != 0)
	{
		func_123(func_343(), 10000, 0, 0, 0, true);
		Global_1914319.f_18996.f_4 = 0;
	}

	return;
}

BOOL func_133(BOOL bParam0, int iParam1) // Position - 0x53C9 Hash - 0x178D9C09 ^0x178D9C09
{
	return bParam0 && iParam1 != false;
}

BOOL func_134(eStackSize essParam0) // Position - 0x53D8 Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_62() != -1)
		return false;

	if (!func_344(essParam0))
		return false;

	return func_345(Global_1347702[essParam0 /*49*/].f_15);
}

BOOL func_135(int iParam0) // Position - 0x5408 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_345(Global_1835011[iParam0 /*74*/].f_1);
}

float func_136(int iParam0) // Position - 0x5434 Hash - 0x9BB7FBA3 ^0xA973C68A
{
	Ped model;
	int rank;
	int defaultMaxAttributeRank;
	float num;
	Any any;
	int rank2;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;

	iParam0 = func_241(iParam0);

	if (iParam0 == -1)
		return -1f;

	if (iParam0 >= 7)
		return -1f;

	model = func_346(iParam0);

	if (!STREAMING::IS_MODEL_VALID(model))
		return -1f;

	rank = func_347(iParam0);
	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(model, 7);
	num = TASK::_0xEB67D4E056C85A81(rank);
	any = TASK::_0x78D8C1D4EB80C588(rank);

	if (rank >= defaultMaxAttributeRank)
		return num;

	rank2 = func_347(iParam0) + 1;
	num2 = func_348(iParam0);
	num3 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank));
	num4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank2));
	num5 = num2 - num3;
	num6 = num4 - num3;
	num7 = num5 / num6;
	num8 = func_349(num, any, num7);
	return num8;
}

BOOL func_137(Ped pedParam0, Object* pobParam1, float fParam2, BOOL bParam3) // Position - 0x54EE Hash - 0x6DF7EDD6 ^0x5000CFB6
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pobParam1))
		return false;

	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(pobParam1, bParam3, false)) <= fParam2 * fParam2)
		return true;

	return false;
}

int func_138() // Position - 0x5536 Hash - 0xE835E19F ^0x141BD35D
{
	return Global_40.f_1095.f_3054.f_1;
}

BOOL func_139(int iParam0) // Position - 0x5549 Hash - 0x14AD85AF ^0xC4DF0BF6
{
	if (!func_350(32))
		return false;

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_CAMP")))
		return false;

	if (!func_351())
		return false;

	if (func_352(16))
		return false;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(Global_1224589.f_9) || !GANG::NETWORK_IS_GANG_LEADER(PLAYER::INT_TO_PLAYERINDEX(Global_1224589)))
		return false;

	if (iParam0 == 1 && func_272(Global_1130863.f_8, 1))
		return false;

	return true;
}

int func_140(int iParam0) // Position - 0x55CA Hash - 0x14624C3D ^0x46CC355A
{
	if (!func_353())
		return 0;

	func_354(iParam0);
	Global_1898068.f_4 = 1;
	return 1;
}

BOOL func_141(int iParam0) // Position - 0x55EC Hash - 0xA059D395 ^0xAFACF28D
{
	return func_272(Global_1130863.f_8, iParam0);
}

void func_142(Any anParam0) // Position - 0x5600 Hash - 0x6C95107C ^0x7F4B8292
{
	var unk;

	unk.f_12 = 255;
	unk.f_13 = 255;
	unk.f_5 = anParam0;
	unk.f_3 = 94;
	func_356(unk, func_355(0, 15), false, false);
	return;
}

int func_143(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x5637 Hash - 0xDD2F88C2 ^0x29E97850
{
	int weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

eStackSize func_144() // Position - 0x5679 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

int func_145(eStackSize essParam0) // Position - 0x5687 Hash - 0x5822495 ^0x141CE12F
{
	int i;

	if (!func_357(essParam0))
		return -1;

	for (i = 0; i < 17; i = i + 1)
	{
		if (Global_1395601.f_5[i /*28*/] == essParam0)
			return i;
	}

	return -1;
}

int func_146() // Position - 0x56C5 Hash - 0xAA084930 ^0xAA084930
{
	eStackSize stackSize;

	stackSize = func_358();

	switch (stackSize)
	{
		case 0:
			return 1;
	
		case 1:
			return 4;
	
		case 2:
			return 2;
	
		case 3:
			return 6;
	
		case 4:
			return 3;
	
		case 5:
			return 5;
	
		case 6:
			return 0;
	
		case 7:
			return 7;
	
		case 8:
			return -1;
	}

	return -1;
}

BOOL func_147(int iParam0) // Position - 0x5751 Hash - 0xE49023EE ^0xE49023EE
{
	return iParam0 > -1 && iParam0 < 17;
}

BOOL func_148() // Position - 0x5767 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1395601;
}

BOOL func_149(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3, BOOL bParam4) // Position - 0x5773 Hash - 0x3C2EC293 ^0xC2A7C7CB
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Hash ammoType;
	int pedAmmoByType;
	var statId;

	if (!func_161(hParam0, 0))
		return false;

	flag = hParam3 == 562618531;
	flag2 = hParam3 == 1992602754;
	flag3 = hParam3 == -1387038764;
	ammoType = func_359(hParam0, 1);

	if (ammoType != 0)
	{
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
		pedAmmoByType = pedAmmoByType - iParam1;
	
		if (pedAmmoByType < 0)
			return false;
	
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, ammoType, iParam1, hParam3);
	
		if (!bParam2)
			func_360(hParam0, -iParam1, flag, flag2, flag3);
	
		return false;
	}

	if (!func_257(hParam0, 1, bParam4))
		return false;

	statId = { func_361(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_264(hParam0, false, false) - iParam1 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);
		}
		else if (func_264(hParam0, false, false) - iParam1 < 0)
		{
			func_149(hParam0, func_264(hParam0, false, false), bParam2, hParam3, bParam4);
			return false;
		}
	}

	if (func_119(hParam0) == joaat("WEAPON"))
		if (!func_362(hParam0, iParam1, false, hParam3))
			return false;
	else if (!func_106(hParam0, iParam1, hParam3, bParam2, bParam4))
		return false;

	if (hParam0 == joaat("document_player_journal"))
		Global_1935496.f_20 = 0;

	if (!func_156(false))
		bParam2 = true;

	if (!bParam2 && hParam0 != 1309979101)
		func_360(hParam0, -iParam1, flag, flag2, flag3);

	func_363(hParam0, iParam1);
	return true;
}

void func_150(int iParam0, BOOL bParam1) // Position - 0x58E7 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_364(iParam0, &num, &num2);

	if (!func_365(iParam0, num, num2, bParam1))
		return;

	func_366(num, num2);
	return;
}

void func_151(BOOL bParam0) // Position - 0x5914 Hash - 0x306CC386 ^0x2C16B96B
{
	if (func_62() != -1 || !bParam0 || func_239(Global_35))
	{
		func_367();
		return;
	}

	if (func_368(8388608) && !func_133(Global_1392040.f_1, 2048))
	{
		func_369(16777216);
		return;
	}

	func_367();
	return;
}

int func_152(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, Hash hParam5, int iParam6, int iParam7, Entity eParam8, BOOL bParam9) // Position - 0x5970 Hash - 0x11449F01 ^0x11449F01
{
	int value;
	Hash ammoTypeForWeapon;
	Hash lootTableKey;
	BOOL flag;
	BOOL flag2;
	Hash hash;
	Hash collectableSubcategory;
	int num;
	Hash hash2;
	Hash hash3;
	Hash hash4;
	int num2;
	int i;
	var statId;
	BOOL flag3;

	if (!func_161(hParam0, 0))
		return 0;

	if (!func_370(hParam0, iParam1, bParam2, hParam5))
		return 0;

	if (!func_371(hParam0, &value, iParam1))
		return 0;

	func_372(hParam0, bParam2);
	lootTableKey = 0;

	if (func_264(hParam0, false, false) == 0)
	{
		if (func_373(hParam0))
		{
			hash = func_374(hParam0);
			collectableSubcategory = func_375(hash);
			num = func_376(collectableSubcategory) + 1;
			func_377(hash);
		
			if (func_281(38))
				func_150(483, false);
			else
				func_150(482, false);
		
			if (num == func_378(collectableSubcategory))
			{
				func_152(func_379(collectableSubcategory), 1, false, false, false, 752097756, 0, 0, 0, false);
			
				if (func_280() && func_380(4))
				{
					if (func_280() && func_381(38) || func_281(38))
					{
						func_285(38, func_379(collectableSubcategory), 0, 0, func_382(), false, -1, false);
						func_383(2);
					}
					else
					{
						func_285(38, func_379(collectableSubcategory), 0, 0, func_382(), false, -1, false);
						func_383(1);
					}
				}
			}
			else if (func_280() && func_380(4))
			{
				if (func_280() && func_381(38) || func_281(38))
				{
					func_285(38, 0, 0, 0, func_382(), false, -1, false);
					func_383(2);
				}
				else
				{
					func_285(38, 0, 0, 0, func_382(), false, -1, false);
					func_383(1);
				}
			}
		
			if (func_280() && func_380(4))
				if (!Global_1914319.f_17376)
					if (func_280() && func_381(38) || func_281(38))
						func_284(38, COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY(joaat("CIGARETTE_CARDS"), collectableSubcategory), COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME(joaat("CIGARETTE_CARDS"), collectableSubcategory), num, 12, 0, collectableSubcategory);
					else
						func_284(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), num, 12, 0, collectableSubcategory);
		}
	}

	if (func_119(hParam0) == joaat("CLOTHING"))
		if (!func_111(hParam0, 866047851) && !func_111(hParam0, -1979000645) && !func_111(hParam0, 1248798204))
			flag = true;

	if (func_384(hParam0, 8388608) && !func_385(28))
		func_386(28);

	if (!flag)
	{
		if (func_111(hParam0, -1588156645))
		{
			bParam2 = true;
			flag2 = true;
		
			if (func_121(hParam0) == -1447088266)
			{
				ammoTypeForWeapon = func_388(func_387(hParam0, true), false);
			
				if (WEAPON::IS_WEAPON_VALID(ammoTypeForWeapon))
				{
					if (func_62() == -1)
						func_389(ammoTypeForWeapon);
				
					if (func_156(false) && func_390(ammoTypeForWeapon, 0, false, true, 0, false, hParam5, false))
					{
						func_391(hParam0, value, hParam5);
					
						if (!bParam9)
							bParam2 = false;
					}
				}
			}
			else
			{
				ammoTypeForWeapon = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
			
				if (WEAPON::_IS_AMMO_VALID(ammoTypeForWeapon))
				{
					if (func_62() == -1)
						func_389(hParam0);
				
					if (func_156(false) && func_390(hParam0, 0, false, true, 0, false, hParam5, false))
					{
						func_391(ammoTypeForWeapon, value, hParam5);
					
						if (!bParam9)
							bParam2 = false;
					}
				}
			}
		}
		else if (func_119(hParam0) == joaat("WEAPON"))
		{
			if (!func_392(hParam0, hParam5, &bParam2, bParam3, bParam4))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_119(hParam0) == joaat("AMMO") && func_393(hParam0))
		{
			if (!func_394(hParam0, &value, hParam5))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_111(hParam0, 866047851))
		{
			func_395(hParam0);
		}
		else if (func_111(hParam0, 2000026003))
		{
			func_396(hParam0);
		}
		else if (func_111(hParam0, -103750053))
		{
			func_398(func_397(joaat("claws_collected")), value);
		}
		else if (hParam0 == joaat("provision_alligator_tooth"))
		{
			func_398(func_399(joaat("COLLECTED"), joaat("alligator_tooth")), value);
		}
		else if (func_111(hParam0, -121341956) && !func_111(hParam0, 606799272))
		{
			if (hParam0 != joaat("weapon_kit_detector") && hParam0 != 1993672959)
				if (func_296(Global_1835011[4 /*74*/].f_1, true))
					func_150(498, false);
		
			if (func_111(hParam0, -2017733358) || func_111(hParam0, -1369131378))
				func_400(hParam0);
		}
		else if (func_111(hParam0, -136654233))
		{
			if (func_111(hParam0, -1021472396))
			{
			}
		}
		else if (func_111(hParam0, -1466706512) && func_111(hParam0, 1147021565))
		{
			func_150(484, false);
		}
		else if (func_111(hParam0, 1147021565) && func_111(hParam0, -524514947))
		{
		}
		else if (func_111(hParam0, 554195525))
		{
		}
		else if (func_111(hParam0, 589988438))
		{
			if (func_401())
			{
				func_402(joaat("reward_small"), false, 1065353216, 1, 0, 0, false, -1);
				bParam2 = true;
				flag2 = true;
			}
		}
		else if (func_111(hParam0, 787083290) && func_111(hParam0, 949916894))
		{
			func_403(hParam0);
		}
		else if (func_111(hParam0, -1718133314))
		{
			func_404(hParam0);
		}
		else if (func_111(hParam0, -1738650224))
		{
			func_405(hParam0);
		}
		else if (func_111(hParam0, -1112814642) && func_111(hParam0, 949916894))
		{
			func_406(hParam0);
		}
		else if (hParam0 == joaat("document_player_journal"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_111(hParam0, 1841149704))
		{
			func_407();
		}
		else if (func_111(hParam0, 606799272))
		{
			func_408(hParam0, iParam1);
			func_409(hParam0);
		}
		else if (func_111(hParam0, -1112814642) && func_111(hParam0, -1697809989))
		{
			func_410(hParam0, 0, false, false);
		}
		else if (func_111(hParam0, -2017733358) || func_111(hParam0, -1369131378))
		{
			func_400(hParam0);
		}
		else if (func_111(hParam0, -1921346699))
		{
			if (func_62() != -1)
				return 0;
		
			func_411(hParam0, hParam5, eParam8);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_111(hParam0, 1192444843))
		{
			switch (hParam0)
			{
				case joaat("upgrade_fsh_bait_lure_swamp"):
					if (!func_257(471514780, 1, false))
						func_152(471514780, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_lake"):
					if (!func_257(526074061, 1, false))
						func_152(526074061, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_swamp"):
					if (!func_257(-967317137, 1, false))
						func_152(-967317137, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_river"):
					if (!func_257(670273567, 1, false))
						func_152(670273567, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_lake"):
					if (!func_257(215778062, 1, false))
						func_152(215778062, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_river"):
					if (!func_257(-1045488665, 1, false))
						func_152(-1045488665, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			}
		}
		else if (func_111(hParam0, -839724752) && func_384(hParam0, 4))
		{
			if (!func_281(42))
				func_412(hParam0);
		}
		else if (func_111(hParam0, 1399091007))
		{
			func_413(hParam0, &lootTableKey);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_111(hParam0, 1248798204))
		{
			hash2 = 0;
		
			switch (hParam0)
			{
				case joaat("clothing_hl_player_satchel_005_1"):
					hash2 = joaat("kit_pouch_provisions");
					break;
			
				case joaat("clothing_hl_player_satchel_002_1"):
					hash2 = joaat("kit_pouch_remedies");
					break;
			
				case joaat("clothing_hl_player_satchel_003_1"):
					hash2 = joaat("kit_pouch_ingredients");
					break;
			
				case joaat("clothing_hl_player_satchel_008_1"):
					hash2 = joaat("kit_pouch_legendary");
					break;
			
				case joaat("clothing_hl_player_satchel_004_1"):
					hash2 = joaat("kit_pouch_kit");
					break;
			
				case joaat("clothing_hl_player_satchel_006_1"):
					hash2 = joaat("kit_pouch_materials");
					break;
			
				case joaat("clothing_hl_player_satchel_007_1"):
					hash2 = joaat("kit_pouch_valuables");
					break;
			}
		
			if (hash2 != 0)
				func_152(hash2, 1, true, false, false, 752097756, 0, 0, 0, false);
		}
	
		switch (hParam0)
		{
			case joaat("upgrade_upg_mortar_pestle"):
				if (func_62() == -1)
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
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_429(595, -103579, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_429(595, -1531530025, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("consumable_tonic"):
			case joaat("consumable_potent_tonic"):
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_429(594, -1228016946, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_420(499813453, joaat("treasure_hunt_loot_01"), false);
				func_421(499813453, false);
				func_422(1);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_420(390004462, joaat("treasure_hunt_loot_17"), false);
				func_421(390004462, false);
				func_426(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_420(6410548, joaat("treasure_hunt_loot_23"), false);
				func_421(6410548, false);
				func_427(8);
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
		
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				func_420(6410548, joaat("treasure_hunt_loot_22"), false);
				func_421(6410548, false);
				func_427(4);
				break;
		
			case joaat("upgrade_offhand_holster"):
				func_386(24);
			
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
					func_130(PLAYER::PLAYER_PED_ID(), joaat("upgrade_offhand_holster"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, false);
			
				if (func_414(&hash3, false))
					func_390(hash3, 0, false, bParam4, 3, false, 752097756, false);
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
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_429(594, 1934060482, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
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
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_429(594, 1110018439, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("kit_gun_oil"):
				func_150(486, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_420(6410548, joaat("treasure_hunt_loot_21"), false);
				func_421(6410548, false);
				func_427(2);
				break;
		
			case joaat("consumable_cigarette_box"):
				func_150(485, false);
			
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3 == 0)
					func_152(func_430(), 1, false, false, false, 752097756, 0, 0, 0, false);
				else
					func_152(func_431(), 1, false, false, false, 752097756, 0, 0, 0, false);
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
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_429(594, 1408511260, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_420(-220219788, joaat("treasure_hunt_loot_09"), false);
				func_421(-220219788, false);
				func_424(1);
				break;
		
			case joaat("consumable_coffee_gnds_reg"):
				if (func_385(1))
					func_150(487, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_420(666607663, joaat("treasure_hunt_loot_07"), false);
				func_421(666607663, false);
				func_423(4);
				break;
		
			case joaat("consumable_valerian_root"):
				func_428(241, func_266(joaat("consumable_valerian_root")), false);
				break;
		
			case joaat("weapon_kit_binoculars"):
				break;
		
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				flag2 = true;
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_420(-220219788, joaat("treasure_hunt_loot_11"), false);
				func_421(-220219788, false);
				func_424(4);
				break;
		
			case joaat("consumable_aged_pirate_rum"):
				func_428(242, func_266(joaat("consumable_aged_pirate_rum")), false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("consumable_hair_tonic"):
				func_150(488, false);
				break;
		
			case joaat("consumable_ginseng_elixier"):
				func_428(240, func_266(joaat("consumable_ginseng_elixier")), false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_420(-220219788, joaat("treasure_hunt_loot_10"), false);
				func_421(-220219788, false);
				func_424(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_420(390004462, joaat("treasure_hunt_loot_16"), false);
				func_421(390004462, false);
				func_426(1);
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
		
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				func_420(499813453, joaat("treasure_hunt_loot_03"), false);
				func_421(499813453, false);
				func_422(4);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_420(666607663, joaat("treasure_hunt_loot_06"), false);
				func_421(666607663, false);
				func_423(2);
				break;
		
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("ARROW_BUNDLE");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_420(218622660, joaat("treasure_hunt_loot_14"), false);
				func_421(218622660, false);
				func_425(2);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_420(666607663, joaat("treasure_hunt_loot_05"), false);
				func_421(666607663, false);
				func_423(1);
				break;
		
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
		
			case joaat("upgrade_bandolier"):
				if (func_62() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
					func_130(PLAYER::PLAYER_PED_ID(), joaat("upgrade_bandolier"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), true, true, true, false, true, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_420(218622660, joaat("treasure_hunt_loot_13"), false);
				func_421(218622660, false);
				func_425(1);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_poor");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_420(6410548, joaat("treasure_hunt_loot_20"), false);
				func_421(6410548, false);
				func_427(1);
				break;
		
			case joaat("upgrade_upg_coffee_kit"):
				func_150(496, false);
				break;
		
			case joaat("consumable_hair_grease"):
				func_150(491, false);
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
		
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				func_420(499813453, joaat("treasure_hunt_loot_02"), false);
				func_421(499813453, false);
				func_422(2);
				break;
		
			case joaat("clothing_legendary_east_outfit"):
				func_150(415, false);
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_415();
				Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
				func_416();
				Global_40.f_11095.f_55 = Global_40.f_11095.f_55 + 0.1f;
				Global_40.f_11095.f_57 = Global_40.f_11095.f_57 + 0.1f;
				Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
				Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
				func_417();
				Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
				func_418();
				Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
				Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
				Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
				func_419();
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_420(390004462, joaat("treasure_hunt_loot_18"), false);
				func_421(390004462, false);
				func_426(4);
				break;
		
			default:
				break;
		}
	}

	if (!flag2)
	{
		if (value <= 0)
			return 0;
	
		hash4 = hParam0;
		func_432(&hash4);
	
		if (!func_433(hash4, value, hParam5))
			return 0;
		else if (!func_156(false))
			return 1;
	
		if (func_119(hParam0) == joaat("CLOTHING"))
			func_434(hParam0);
	
		if (func_111(hParam0, -1979000645))
			func_435(hParam0);
	}
	else if (lootTableKey != 0)
	{
		if (func_156(false))
		{
			num2.f_1 = 10;
			num2.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_35, false, false, lootTableKey, &num2, 0);
		
			for (i = 0; i < num2; i = i + 1)
			{
				func_152(num2.f_1[i], num2.f_12[i], false, false, false, -897553835, 0, 0, 0, false);
			}
		}
		else
		{
			func_436(lootTableKey, 0);
		}
	}

	statId = { func_361(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::_STAT_ID_INCREMENT_INT(&statId, value);

	func_437(hParam0);

	if (iParam6 > 0f)
	{
		if (func_111(hParam0, -839724752))
			func_438(hParam0, iParam6);
	}
	else if (!bParam2)
	{
		flag3 = hParam5 == 1248274121;
		func_360(hParam0, value, false, flag3, false);
	}

	return 1;
}

struct<5> func_153(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6C08 Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_439(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_119(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_445(hParam0, -1823706425))
			{
				unk = { func_154(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_445(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_154(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
		
			[[fallthrough]];
	
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = -813824107;
			unk = { func_444(bParam1) };
		
			switch (func_121(hParam0))
			{
				case joaat("CI_CATEGORY_EMOTE_TAUNTS"):
					unk.f_4 = -268116367;
					break;
			
				case 664784405:
					unk.f_4 = -1150938404;
					break;
			
				case joaat("CI_CATEGORY_EMOTE_GREETS"):
					unk.f_4 = -241855024;
					break;
			
				case joaat("CI_CATEGORY_EMOTE_DANCES"):
					unk.f_4 = -1756997214;
					break;
			}
			break;
	
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_WARDROBE")))
			{
				unk = { func_154(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_440(bParam1) };
		
			if (bParam2 && func_441(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_442(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_442(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_443(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_446(unk, &unk28, bParam1, false))
				{
					unk.f_4 = 0;
				}
				else
				{
					unk = { unk28.f_5 };
					unk.f_4 = joaat("SLOTID_CURRENCY");
				}
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

struct<4> func_154(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x6EC5 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_161(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_199(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_155(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x6EF6 Hash - 0x1DD1BE14 ^0x90608F32
{
	var unk;

	if (!func_156(false))
		return func_447(uParam0, bParam4, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_446(uParam0, &unk, false, false))
		return false;

	if (unk.f_10 == bParam4)
		return true;

	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_199(false), &uParam0, bParam4))
		return false;

	return true;
}

BOOL func_156(BOOL bParam0) // Position - 0x6F69 Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_62() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_199(bParam0));
}

void func_157(BOOL bParam0, BOOL bParam1, int iParam2) // Position - 0x6F87 Hash - 0x26A1604D ^0x9E4BDD24
{
	Global_1935689.f_4 = bParam0;
	Global_1935689.f_15 = iParam2;

	if (bParam0)
		Global_1935689.f_5 = 0;

	if (bParam1 || func_448() && iParam2 == 0)
	{
		func_17(1);
		func_18(1);
	}

	return;
}

int func_158(Hash hParam0, int iParam1) // Position - 0x6FCD Hash - 0xD1D2F01F ^0xAD322AEB
{
	int num;
	int num2;
	Hash hash;

	num = -1;
	num2 = 1;
	hash = 0;
	num2 = func_223(hParam0);
	hash = func_222(hParam0);

	if (hash != 0)
	{
		func_149(hParam0, 1, true, -142743235, false);
		num = func_449(hash, num2, hParam0, iParam1);
	}

	return num;
}

BOOL func_159(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x7013 Hash - 0x2455E605 ^0xEE0FF043
{
	if (hParam0 == joaat("provision_rotten_meat") || hParam0 == joaat("consumable_cornedbeef_can"))
		return false;

	if (func_111(hParam0, joaat("ci_tag_item_meat_animal")) || func_111(hParam0, -839724752))
		if (bParam2)
			return func_111(hParam0, -1238310989);
		else if (bParam1)
			return !func_111(hParam0, -1238310989);
		else
			return true;

	return false;
}

Hash func_160(Hash hParam0) // Position - 0x7089 Hash - 0x79AA1968 ^0x6F0D6217
{
	int num;
	Hash hash;
	var unk;
	int num2;
	int num3;
	int i;
	Hash hash2;

	num = func_259(hParam0, 1697966752);
	hash = 0;

	if (num == 0)
		return 0;

	unk = { func_450(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, -214678071, 0, -1, num, 0) };

	if (func_451(unk, &num2, &num3, 0))
	{
		for (i = 0; i < num3; i = i + 1)
		{
			hash2 = func_452(i, num2);
		
			if (func_161(hash2, 0))
			{
				hash = hash2;
				break;
			}
		}
	
		func_453(num2);
	}

	return hash;
}

BOOL func_161(Hash hParam0, int iParam1) // Position - 0x7112 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_162(Hash hParam0) // Position - 0x712C Hash - 0x1DB0E984 ^0xCBB445ED
{
	Global_1911914.f_1577 = hParam0;
	Global_1392040.f_2 = 1;
	func_369(268435456);

	if (func_368(8388608))
	{
		func_369(16777216);
		return true;
	}
	else if (func_257(joaat("kit_camp_simple"), 1, false) && func_25(joaat("kit_camp_simple"), 0, 0, 0, true, false, false) || func_257(joaat("kit_camp"), 1, false) && func_25(joaat("kit_camp"), 0, 0, 0, true, false, false))
	{
		Global_1392040.f_4 = MISC::GET_GAME_TIMER();
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_LEAVE_CAMERA_CONTROL_ON, false);
		return true;
	}
	else
	{
		Global_1392040.f_2 = 0;
		func_454(268435456);
	}

	return false;
}

BOOL func_163() // Position - 0x71DE Hash - 0x4228A1C2 ^0x5DCAFF22
{
	return Global_1935689.f_10;
}

int func_164(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3, BOOL bParam4) // Position - 0x71EC Hash - 0xD56AECBD ^0x2416076C
{
	Ped ped;

	if (!bParam4)
	{
		iParam1 = func_455(hParam0, iParam1, true, true, -142743235);
	}
	else
	{
		ped = func_165(0);
	
		if (ENTITY::DOES_ENTITY_EXIST(ped))
			func_456(&ped, hParam0, &iParam1, bParam2, hParam3);
	}

	if (iParam1 <= 0)
		return 1;

	return func_457(hParam0, iParam1, bParam2, hParam3);
}

Ped func_165(int iParam0) // Position - 0x7243 Hash - 0x992FCD8C ^0xAA6462C3
{
	Ped lastMount;

	if (func_458(iParam0))
	{
		if (func_62() == -1)
		{
			lastMount = PED::_GET_LAST_MOUNT(Global_35);
		
			if (!ENTITY::DOES_ENTITY_EXIST(lastMount))
				lastMount = func_85(func_241(0));
		}
		else
		{
			lastMount = PED::_GET_LAST_MOUNT(func_459());
		}
	}
	else if (func_62() == -1)
	{
		lastMount = func_85(0);
	}
	else
	{
		lastMount = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
	}

	return lastMount;
}

int func_166(Ped pedParam0, Hash hParam1, BOOL bParam2) // Position - 0x72A8 Hash - 0x13E952EA ^0xE3E4C426
{
	int num;

	if (func_460())
	{
		num = func_461(hParam1, false);
	}
	else
	{
		num = func_264(hParam1, bParam2, false);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
			num = num + func_462(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0), hParam1);
	}

	if (hParam1 == Global_1935689.f_1224)
		num = num + 1;

	return num;
}

BOOL func_167(BOOL bParam0) // Position - 0x72FC Hash - 0x8C844EEB ^0x8C844EEB
{
	return Global_22 && bParam0 != false;
}

void func_168(BOOL bParam0) // Position - 0x730C Hash - 0x88AD5D ^0x88AD5D
{
	Global_22 = Global_22 || bParam0;
	return;
}

BOOL func_169(Ped pedParam0) // Position - 0x731D Hash - 0xBEDFC3C1 ^0xBEDFC3C1
{
	return func_463(pedParam0, 4) || func_463(pedParam0, 5);
}

BOOL func_170(Ped pedParam0) // Position - 0x7339 Hash - 0x8F7DFED5 ^0x8768F0B4
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

BOOL func_171(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x73A3 Hash - 0x37FB14EB ^0x7E496A4A
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

BOOL func_172(Ped pedParam0) // Position - 0x73CC Hash - 0xF2F988FE ^0xA63CD631
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

BOOL func_173(BOOL bParam0, BOOL bParam1) // Position - 0x74B4 Hash - 0x81F8AB1A ^0x2ECCA549
{
	Ped mount;

	if (func_62() == false)
		return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689.f_2439.f_28.f_19);

	if (func_464())
	{
		if (bParam0)
			func_123("CAMP_UNUSABLE_HIDEOUT", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_169(Global_35))
	{
		if (bParam0)
			func_123("CAMP_UNUSABLE_PICKUP_ITEM", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_35))
	{
		if (bParam0)
			func_123("CAMP_UNUSABLE_HORSE_INTERACTION", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_465())
	{
		if (bParam0)
			if (func_358() != 8 && func_358() != 7)
				func_123("CAMP_UNUSABLE_CARAVAN_CAMP", 10000, 0, 0, 0, true);
			else
				func_123("CAMP_UNUSABLE_BEECHERS_HOPE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		mount = PED::GET_MOUNT(Global_35);
	
		if (ENTITY::DOES_ENTITY_EXIST(mount))
			if (!ENTITY::IS_ENTITY_DEAD(mount))
				if (ENTITY::IS_ENTITY_IN_AIR(mount, 1) || PED::IS_PED_SWIMMING(mount))
					return false;
	}
	else if (ENTITY::IS_ENTITY_IN_AIR(Global_35, 1) || PED::IS_PED_SWIMMING(Global_35))
	{
		return false;
	}

	if (INTERIOR::IS_INTERIOR_SCENE())
	{
		if (bParam0)
			func_123("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		if (bParam0)
			func_123("CAMP_UNUSABLE_IN_COMBAT", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_466(PLAYER::PLAYER_ID(), true, true, false))
	{
		if (bParam0)
			func_123("CAMP_UNUSABLE_WANTED", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (LAW::_0x26934083D3F2579C(PLAYER::PLAYER_ID()))
	{
		if (bParam0)
			func_123("CAMP_UNUSABLE_CRIME", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (bParam1)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
		{
			if (bParam0)
				func_123("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, true);
		
			return false;
		}
	}

	if (func_467(&Global_1393447, 16))
	{
		if (bParam0)
			func_123("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_468())
	{
		if (bParam0)
			func_123("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_469(joaat("simple_crafting")) || SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("simple_crafting")) > 0)
	{
		if (bParam0)
			func_123("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		if (bParam0)
			func_123("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) || !PED::IS_PED_RAGDOLL(Global_35) && PED::IS_PED_ON_VEHICLE(Global_35, false) || PED::IS_PED_IN_ANY_BOAT(Global_35) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()) || PED::IS_PED_JACKING(Global_35))
	{
		if (bParam0)
			func_123("CAMP_UNUSABLE_ON_VEHICLE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_470(0, true, true) && !func_471(1))
	{
		if (bParam0)
			if (func_135(15))
				func_123("CAMP_UNUSABLE_HUNTING", 10000, 0, 0, 0, true);
			else
				func_123("CAMP_UNUSABLE_MISSIONS", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_472() == 8)
		return false;

	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("camera_item")) > 0)
	{
		if (bParam0)
			func_123("CAMP_UNUSABLE_CAMERA", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_473(8388608))
	{
		if (bParam0)
			func_123("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_368(8388608))
	{
		if (bParam0)
			func_123("CAMP_UNUSABLE_ALREADY_IN_A_CAMP", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_474(func_144()))
	{
		if (bParam0)
			func_123("CAMP_UNUSABLE_LOCKDOWN", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_475() || func_476(func_144()) == 9 || func_477(func_144()) && !func_478())
	{
		if (bParam0)
			func_123("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_170(Global_35))
	{
		if (bParam0)
			func_123("CAMP_UNUSABLE_LOOTING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_479())
	{
		if (bParam0)
			func_123("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1935496.f_131, true) > 2f)
	{
		Global_1935496.f_128 = { VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(Global_36) };
		Global_1935496.f_131 = { Global_36 };
	}

	if (func_480(Global_35, Global_1935496.f_128, 4f, true, true))
	{
		if (bParam0)
			func_123("CAMP_UNUSABLE_TRAIN", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_481(Global_36, 5f))
	{
		if (bParam0)
			func_123("CAMP_UNUSABLE_NEAR_MISSION", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (BUILTIN::VDIST2(Global_36, Global_1347702[74 /*49*/].f_24) < 144f && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("rcm_evelyn_miller4")) > 0)
		return false;

	return true;
}

BOOL func_174(BOOL bParam0) // Position - 0x79CF Hash - 0xC93D526E ^0x1A36B07B
{
	if (PED::IS_PED_HOGTIED(Global_35))
	{
		if (bParam0)
			func_123("ITEM_UNUSABLE_HOGTIED", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_HOGTYING(Global_35))
	{
		if (bParam0)
			func_123("ITEM_UNUSABLE_HOGTYING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_LASSOED(Global_35))
	{
		if (bParam0)
			func_123("ITEM_UNUSABLE_LASSOED", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_BEING_DRAGGED(Global_35))
		return false;

	if (!(PED::_GET_LASSO_TARGET(Global_35) == 0))
		return false;

	if (PED::_IS_PED_DRAGGING(Global_35))
		return false;

	if (PED::GET_PED_IS_BEING_GRAPPLED(Global_35))
		return false;

	if (PED::GET_PED_IS_GRAPPLING(Global_35) || PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 4096, 0))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 32768, 0))
		return false;

	return true;
}

BOOL func_175(BOOL bParam0) // Position - 0x7AAE Hash - 0xC93D526E ^0x81BB51A1
{
	if (PED::_IS_PED_SLIDING(Global_35))
	{
		if (bParam0)
			func_123("ITEM_UNUSABLE_SLIDING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_SWIMMING(Global_35))
	{
		if (bParam0)
			func_123("ITEM_UNUSABLE_SWIMMING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_CLIMBING(Global_35))
	{
		if (bParam0)
			func_123("ITEM_UNUSABLE_CLIMBING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_172(Global_35))
	{
		if (bParam0)
			func_123("ITEM_UNUSABLE_SLEEPING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_FALLING(Global_35))
	{
		if (bParam0)
			func_123("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_FALLING_OVER(Global_35))
	{
		if (bParam0)
			func_123("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		if (bParam0)
			func_123("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_VAULTING(Global_35))
	{
		if (bParam0)
			func_123("ITEM_UNUSABLE_JUMPING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		if (bParam0)
			func_123("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_176(BOOL bParam0) // Position - 0x7BF2 Hash - 0x135152DF ^0x26D4921D
{
	if (PED::IS_PED_HANGING_ON_TO_VEHICLE(Global_35))
	{
		if (bParam0)
			func_123("ITEM_UNUSABLE_HANGING_ON_VEHICLE", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_177(Player plParam0, BOOL bParam1) // Position - 0x7C1E Hash - 0xFD261A1 ^0x9E7B0050
{
	Player animal;

	animal = _INVALID_PLAYER_INDEX();

	if (TASK::_0x756C7B4C43DF0422(1))
		animal = TASK::_0x351F74ED6177EBE7();
	else
		animal = plParam0;

	if (!ENTITY::DOES_ENTITY_EXIST(animal))
	{
		if (bParam1)
			func_123("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (!func_181(animal))
	{
		if (bParam1)
			func_123("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (!TASK::IS_PED_IN_WRITHE(animal))
	{
		if (bParam1)
			func_123("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_35, animal))
	{
		if (bParam1)
			func_123("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_178(Player plParam0, BOOL bParam1) // Position - 0x7CD1 Hash - 0x76B65421 ^0xD3A918D6
{
	Player outEntity;
	Player animal;

	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return true;
	}
	else if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::GET_PLAYER_INDEX(), &outEntity, false, false))
	{
		if (!func_181(outEntity))
		{
			if (bParam1)
				func_123("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, true);
		
			return false;
		}
	
		if (TASK::IS_PED_IN_WRITHE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity)))
		{
			if (bParam1)
				func_123("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, true);
		
			return false;
		}
	
		if (func_237(outEntity, true, true) > 2f)
		{
			if (bParam1)
				func_123("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, true);
		
			return false;
		}
	
		if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_35, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity)))
		{
			if (bParam1)
				func_123("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, true);
		
			return false;
		}
	
		return true;
	}

	animal = plParam0;

	if (!func_181(animal))
	{
		if (bParam1)
			func_123("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (TASK::IS_PED_IN_WRITHE(animal))
	{
		if (bParam1)
			func_123("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_35, animal))
	{
		if (bParam1)
			func_123("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_179(Ped pedParam0) // Position - 0x7E06 Hash - 0xE0409C42 ^0xE0409C42
{
	return func_463(pedParam0, 7);
}

BOOL func_180() // Position - 0x7E15 Hash - 0xA095694D ^0x506AFF8
{
	Ped ped;
	Ped ledHorseFromPed;

	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return false;

	if (PED::IS_PED_DEAD_OR_DYING(ped, true))
		return false;

	if (!TASK::_IS_PED_LEADING_HORSE(ped))
		return false;

	ledHorseFromPed = TASK::_GET_LED_HORSE_FROM_PED(ped);

	if (!ENTITY::DOES_ENTITY_EXIST(ledHorseFromPed))
		return false;

	if (PED::IS_PED_DEAD_OR_DYING(ledHorseFromPed, true))
		return false;

	if (!PED::CAN_PED_BE_MOUNTED(ledHorseFromPed))
		return false;

	return true;
}

BOOL func_181(Player plParam0) // Position - 0x7E80 Hash - 0x7410A97D ^0x34EB7DBA
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(plParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(plParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(entityModel);
}

BOOL func_182(int iParam0) // Position - 0x7EB2 Hash - 0xF2C0DFFC ^0xF2C0DFFC
{
	switch (func_62())
	{
		case -1:
			return Global_1357549.f_1494 && iParam0 != false;
	}

	return false;
}

BOOL func_183() // Position - 0x7EDD Hash - 0xC43E5A88 ^0x7B6E2EFE
{
	int scenarioPointTypePedIsUsing;
	int num;

	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
	{
		scenarioPointTypePedIsUsing = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35);
		num = scenarioPointTypePedIsUsing;
	
		if (num != joaat("world_player_dynamic_kneel") && num != joaat("world_player_camp_fire_kneel1") && num != joaat("world_player_camp_fire_kneel2") && num != joaat("world_player_camp_fire_kneel3") && num != joaat("world_player_camp_fire_kneel4"))
			return true;
	}

	return false;
}

BOOL func_184() // Position - 0x7F40 Hash - 0x58084EE7 ^0xBF593B34
{
	int num;

	if (!PED::IS_PED_IN_ANY_TRAIN(Global_35))
		return false;

	num = func_483(Global_36, false);

	if (num >= 8 && num <= 12)
		return true;

	return false;
}

BOOL func_185() // Position - 0x7F7A Hash - 0x4228A1C2 ^0x70D4FBDE
{
	return Global_1898164.f_163;
}

BOOL func_186() // Position - 0x7F88 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1911914.f_1578;
}

BOOL func_187(int iParam0) // Position - 0x7F97 Hash - 0xA059D395 ^0xE600C05
{
	return func_272(Global_1935496.f_27, iParam0);
}

BOOL func_188() // Position - 0x7FAB Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1946054.f_2792;
}

int func_189(int iParam0) // Position - 0x7FBA Hash - 0x81C55E ^0x81C55E
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
	
		case -413129408:
			return 32;
	
		case 81053684:
			return 8;
	
		default:
		
	}

	return 0;
}

BOOL func_190(int iParam0) // Position - 0x800C Hash - 0x8364EAF ^0xECEEE8D3
{
	return Global_1946054.f_2657.f_26.f_6 && iParam0 != false;
}

int func_191() // Position - 0x8024 Hash - 0x9F572D68 ^0x23F8B11F
{
	return 33537269;
}

int func_192(BOOL bParam0) // Position - 0x8031 Hash - 0x3C563FFA ^0x504B3F8A
{
	Entity entity;

	if (func_484(1) && !Global_1392040.f_2)
	{
		if (bParam0)
			func_123("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, true);
	
		return 0;
	}

	if (func_484(2) && !Global_1392040.f_2 && MISC::GET_GAME_TIMER() >= Global_36615)
	{
		if (bParam0)
		{
			entity = func_485(Global_35);
		
			if (entity != 0)
			{
				if (ENTITY::GET_IS_ANIMAL(entity))
				{
					func_123("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, true);
					return 0;
				}
			}
		
			func_123("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, true);
		}
	
		return 0;
	}

	if (func_484(4194304))
		return 0;

	return 1;
}

int func_193(BOOL bParam0) // Position - 0x80DC Hash - 0x19762284 ^0x679D6F3E
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) && !Global_1392040.f_2)
	{
		if (bParam0)
			func_123("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, true);
	
		return 0;
	}

	return 1;
}

int func_194(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x8114 Hash - 0xB3520FCB ^0xE74487EC
{
	Vehicle vehiclePedIsUsing;
	Hash entityModel;

	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(Global_35))
	{
		return 0;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			return 0;
	
		vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsUsing);
	
		switch (entityModel)
		{
			case joaat("breach_cannon"):
			case joaat("gatling_gun"):
			case joaat("gatlingmaxim02"):
			case joaat("hotchkiss_cannon"):
				if (bParam0)
					func_123("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, true);
			
				return 0;
		
			case joaat("rowboat"):
			case joaat("handcart"):
				if (bParam0)
					func_123("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, true);
			
				return 0;
		}
	
		if (!func_133(iParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_35))
			if (VEHICLE::GET_DRIVER_OF_VEHICLE(vehiclePedIsUsing) == Global_35 || bParam2)
				return 0;
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_35))
	{
		return 0;
	}

	return 1;
}

int func_195(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x8201 Hash - 0xBA023B92 ^0x16E0B707
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (!PED::IS_PED_INJURED(pedParam0))
		{
			if (esthParam1 == SCRIPT_TASK_DRIVE_BY && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(pedParam0))
				return 1;
		
			if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 0)
				return 1;
		}
	}

	return 0;
}

BOOL func_196(Ped pedParam0) // Position - 0x825A Hash - 0x28235D58 ^0x5BD1001B
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true);

	return false;
}

int func_197(Ped pedParam0, BOOL bParam1) // Position - 0x8277 Hash - 0x6BE4D4B ^0xC7F6BBCD
{
	float entitySpeed;
	float num;

	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
			return 0;
	
		if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
			return 0;
	}

	entitySpeed = ENTITY::GET_ENTITY_SPEED(pedParam0);
	num = PED::_0xCA95924C893A0C91(pedParam0, entitySpeed);

	if (num <= 1.5f)
		return 1;

	return 0;
}

void func_198(Object obParam0, int iParam1) // Position - 0x82CD Hash - 0xF55E891F ^0xF55E891F
{
	func_486(obParam0, iParam1);
	return;
}

int func_199(BOOL bParam0) // Position - 0x82DD Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_62() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_200(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x831E Hash - 0xD9D941B7 ^0xADC1781D
{
	BOOL flag;
	int num;
	int num2;
	int i;
	var unk;
	var unk15;
	int num3;

	if (func_487(Global_35))
		bParam2 = true;

	flag = 0;

	if (!bParam2 && !bParam1)
		if (Global_1935496.f_28 == Global_1935496.f_27)
			return flag;

	num = -1;
	i = 0;
	unk.f_9 = joaat("SLOTID_NONE");
	unk15 = { func_488(0, joaat("SLOTID_SATCHEL"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (func_489(&unk15, &num, &num2, bParam3))
	{
		num3 = Global_36637 + 150;
	
		if (!bParam4)
		{
			if (num3 >= num2)
			{
				num3 = num2 - 1;
				flag = true;
			}
		}
		else
		{
			Global_36637 = 0;
			num3 = num2 - 1;
			flag = true;
		}
	
		for (i = Global_36637; i <= num3; i = i + 1)
		{
			if (func_233(&unk, i, num, num2))
			{
				if (!func_490(unk.f_4))
				{
				}
				else
				{
					if (bParam1)
						func_491(iParam0, unk.f_4, true);
					else if (bParam2)
						func_491(iParam0, unk.f_4, false);
					else if (unk.f_4 != 1259508039)
						func_491(iParam0, unk.f_4, func_492(unk.f_4));
				
					Global_36637 = i;
				}
			}
		
			Global_36637 = i;
		}
	
		if (flag)
		{
			Global_36637 = 0;
			Global_1935496.f_28 = Global_1935496.f_27;
		}
	
		func_244(num);
	}

	return flag;
}

void func_201(int iParam0) // Position - 0x845F Hash - 0x183B938E ^0x87D245F9
{
	func_491(iParam0, joaat("weapon_kit_binoculars"), func_32(32));
	func_491(iParam0, joaat("weapon_kit_camera"), func_32(64));
	func_491(iParam0, joaat("kit_horse_brush"), func_32(1024));
	func_493(iParam0, func_32(16384));
	func_494(iParam0, func_32(128));
	func_495(iParam0, func_32(4));
	func_496(iParam0, func_32(8));
	return;
}

void func_202(int iParam0) // Position - 0x84CB Hash - 0x7F9D8C9B ^0xAD6AC8E6
{
	int i;
	Hash hash;

	if (Global_1935496.f_72.f_41 <= 0)
		return;

	hash.f_1 = -1;

	for (i = 0; i <= Global_1935496.f_72.f_41; i = i + 1)
	{
		hash = { Global_1935496.f_72[i /*2*/] };
	
		if (!func_161(hash, 0))
			break;
	
		func_497(iParam0, &hash);
		func_498(i);
	}

	Global_1935496.f_72.f_41 = 0;
	return;
}

void func_203() // Position - 0x853A Hash - 0x1FB3DF80 ^0x8785BD66
{
	int i;

	for (i = 0; i <= Global_1935496.f_72.f_41; i = i + 1)
	{
		if (!func_498(i))
			break;
	}

	Global_1935496.f_72.f_41 = 0;
	return;
}

int func_204(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x8571 Hash - 0x4B151EFD ^0xA82386D1
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
		num = num + 1;
		BUILTIN::WAIT(0);
	}

	if (flag)
		func_499();

	if (num >= iParam2)
	{
		num = 0;
		return 0;
	}

	num = 0;
	return 1;
}

void func_205() // Position - 0x85D8 Hash - 0xDBC09BE2 ^0xE0F4D69
{
	if (func_62() == -1)
		if (!func_500(18, &(Global_1935689.f_9475)))
			return;

	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935689.f_9475, 0, "satchel_elements/name(id=%x):texture0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935689.f_9475, 1, "satchel_elements/name(id=%x):texturedictionary0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935689.f_9475, 2, "satchel_elements/name(id=%x):name0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1935689.f_9475, 3, "satchel_elements/name(id=%x):description0");
	return;
}

void func_206() // Position - 0x8640 Hash - 0x297F5A60 ^0x297F5A60
{
	int num;
	int num2;
	Ped ped;
	Ped ped2;
	Ped ped3;
	float num3;

	num = func_251();
	num2 = func_501(func_144(), num);
	ped = func_85(func_241(0));
	ped2 = func_85(func_241(1));
	ped3 = func_85(func_241(6));

	if (func_27(false))
	{
		if (num == 19)
		{
			if (ENTITY::DOES_ENTITY_EXIST(ped) && func_238(ped))
				func_198(&(Global_1935689.f_9436), 1);
		
			if (ENTITY::DOES_ENTITY_EXIST(ped2) && func_238(ped2))
				func_198(&(Global_1935689.f_9436), 2);
		
			if (ENTITY::DOES_ENTITY_EXIST(ped3) && func_238(ped3))
				func_198(&(Global_1935689.f_9436), 4);
		}
		else if (num == 10 || num == 18)
		{
			num3 = 30f;
		
			if (num2 == 55)
				num3 = 40f;
			else if (num == 2)
				num3 = 75f;
		
			if (ENTITY::DOES_ENTITY_EXIST(ped) && func_502(ped, num2, num3))
				func_198(&(Global_1935689.f_9436), 1);
		
			if (ENTITY::DOES_ENTITY_EXIST(ped2) && func_502(ped2, num2, num3))
				func_198(&(Global_1935689.f_9436), 2);
		
			if (ENTITY::DOES_ENTITY_EXIST(ped3) && func_502(ped3, num2, num3))
				func_198(&(Global_1935689.f_9436), 4);
		}
	}

	return;
}

Hash func_207() // Position - 0x8791 Hash - 0x20372E7D ^0x20372E7D
{
	Hash i;

	for (i = 0; i < 11; i = i + 1)
	{
		if (Global_1935689.f_9418[i] == Global_1935689.f_9439)
			return i;
	}

	return 0;
}

void func_208(Hash hParam0) // Position - 0x87C7 Hash - 0x98110865 ^0x2DAEB81A
{
	Global_1935689.f_9416 = 0;

	if (!Global_1935689.f_9)
	{
		func_211(0);
		func_503();
	}
	else if (Global_1935689.f_9439 != -2074770370 && Global_1935689.f_9439 != -283002878 && Global_1935689.f_9439 != 822208792 && Global_1935689.f_9439 != -182626652 && Global_1935689.f_9439 != -693134279)
	{
		func_70(Global_1935689.f_9439);
	}
	else
	{
		func_211(0);
		func_503();
	}

	func_504(hParam0, 0, "All", joaat("satchel_nav_all"));
	func_504(hParam0, -1666604090, "Provisions", joaat("satchel_nav_provisions"));
	func_504(hParam0, -96974025, "Remedies", joaat("satchel_nav_remedies"));
	func_504(hParam0, -1268291907, "Ingredients", joaat("satchel_nav_ingredients"));
	func_504(hParam0, -1559802791, "Materials", joaat("satchel_nav_materials"));
	func_504(hParam0, -156634416, "Kit", joaat("satchel_nav_kit"));
	func_504(hParam0, 1561961676, "Valuables", joaat("satchel_nav_valuables"));
	func_504(hParam0, 1061777683, "Documents", joaat("satchel_nav_documents"));
	func_505(hParam0);
	func_506(hParam0);

	if (func_27(false))
		if (func_251() == 2)
			func_211(-693134279);
		else
			func_211(-182626652);
	else
		func_211(func_507());

	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1935689.f_9451, Global_1935689.f_9416);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1935689.f_9453, func_207());
	return;
}

BOOL func_209(Hash hParam0) // Position - 0x8955 Hash - 0x4F6A761A ^0x4F6A761A
{
	var unk;

	return func_508(hParam0, &unk);
}

int func_210(Hash hParam0, char* sParam1, Hash hParam2, char* sParam3, Hash hParam4) // Position - 0x8965 Hash - 0xC6ECDDD9 ^0x3C7BBDA2
{
	int num;
	Hash hash;

	num = Global_1935689.f_9430;

	if (num >= 2)
		return -1;

	if (!func_245(sParam3, &(Global_1935689.f_9431[num /*2*/].f_1), &Global_1935689.f_9431[num /*2*/], hParam4, false))
		return -1;

	Global_1935689.f_9430 = Global_1935689.f_9430 + 1;
	hash = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(hParam0, sParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "label", hParam2);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(hParam0, -1, -1287062382, hash);
	return num;
}

void func_211(int iParam0) // Position - 0x89DF Hash - 0xD400177 ^0x917DE313
{
	Hash hash;

	if (Global_1935689.f_9439 != iParam0)
	{
		Global_1935689.f_9439 = iParam0;
		Global_1935689.f_9446 = 1;
	}

	hash = func_207();
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1935689.f_9453, hash);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1935689.f_9452, hash);
	func_509(Global_1935689.f_9439 != -283002878);
	return;
}

void func_212(int iParam0, var uParam1, BOOL bParam2) // Position - 0x8A35 Hash - 0xC59351E7 ^0xC59351E7
{
	func_211(iParam0);

	if (!bParam2)
		func_13(iParam0);

	return;
}

BOOL func_213() // Position - 0x8A4F Hash - 0x9F95332D ^0x2616E899
{
	int num;
	int num2;

	if (Global_1935689.f_18 == 0)
	{
		Global_1935689.f_9417 = 0;
	}
	else
	{
		num = Global_1935689.f_9417;
		num2 = Global_1935689.f_9416 - 1;
	
		switch (Global_1935689.f_18)
		{
			case -2074770370:
			case -693134279:
			case -182626652:
				Global_1935689.f_9417 = num2;
				break;
		}
	
		if (Global_1935689.f_18 == -283002878)
			if (func_27(false))
				Global_1935689.f_9417 = num2 - 1;
			else
				Global_1935689.f_9417 = num2;
	
		func_104(num);
		return true;
	}

	return false;
}

void func_214() // Position - 0x8AE2 Hash - 0xC672FBE7 ^0x2A47BC59
{
	if (Global_1572887.f_12 == -1)
		return;

	Global_1058888.f_2 = 0;
	return;
}

void func_215(var uParam0) // Position - 0x8AFE Hash - 0xC36F4037 ^0xF700179F
{
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(*uParam0);

	while (Global_1935689.f_9430 > 0)
	{
		Global_1935689.f_9430 = Global_1935689.f_9430 - 1;
		func_244(Global_1935689.f_9431[Global_1935689.f_9430 /*2*/].f_1);
	}

	return;
}

void func_216(int iParam0, int iParam1) // Position - 0x8B42 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

// Unhandled jump detected. Output should be considered invalid
int func_217(Hash hParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0x8B57 Hash - 0x8C7E4D7B ^0x44DEDBB
{
	var data;
	int size;
	int collectionId;
	int i;
	Hash outKey;
	var unk10;
	int num;
	int j;

	if (!func_161(hParam0, 0))
		return 0;

	*uParam2 = 0;
	data = { func_450(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, hParam1, 0, -1, 0, 0) };
	collectionId = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&data, &size, 1);

	if (collectionId != -1)
	{
		unk10 = 15;
	
		for (i = 0; i < size; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(collectionId, i, &outKey))
			{
				if (func_121(outKey) == 526314052)
				{
					if (func_218(outKey, 3) > 0)
					{
					}
					else
					{
						goto 0x8E;
					}
				}
			
				if (func_218(outKey, 0) > 0)
				{
				}
				else if (func_510(outKey, hParam1, &unk10, &num, true, false))
				{
					for (j = 0; j < num; j = j + 1)
					{
						if (hParam0 == unk10[j /*2*/])
						{
							*uParam2 = 1;
							*uParam3 = *uParam3 + unk10[j /*2*/].f_1;
						}
					}
				}
			}
		}
	
		ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(collectionId);
	}

	return 1;
}

int func_218(Hash hParam0, int iParam1) // Position - 0x8C3B Hash - 0x3B4883DD ^0xBE4A62CA
{
	var unk;
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_161(hParam0, 0))
		return 0;

	unk = { func_439(false) };
	unk.f_4 = func_511(iParam1);
	guid = { func_154(hParam0, unk, unk.f_4, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_199(false), &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_219(Hash hParam0) // Position - 0x8C96 Hash - 0x6BAA9EF6 ^0x42D7C39C
{
	if (func_111(hParam0, -839724752) || func_111(hParam0, joaat("ci_tag_item_meat_animal")) || func_111(hParam0, 1286414894))
		return true;

	return false;
}

BOOL func_220(Hash hParam0) // Position - 0x8CD3 Hash - 0x5E6E1858 ^0x5BD2FA9
{
	!func_161(hParam0, 0);

	if (func_111(hParam0, 1286414894))
		return true;

	return false;
}

BOOL func_221(Hash hParam0, var uParam1) // Position - 0x8CF9 Hash - 0x211DACD1 ^0x211DACD1
{
	return func_512(hParam0, uParam1) || func_513(hParam0, uParam1);
}

Hash func_222(Hash hParam0) // Position - 0x8D17 Hash - 0x5FB59AC3 ^0xF8EA047B
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

int func_223(Hash hParam0) // Position - 0x9089 Hash - 0x6D5A6948 ^0x8A3E949A
{
	if (func_111(hParam0, 1064293907))
		return 2;
	else if (func_111(hParam0, -1218707194))
		return 1;
	else if (func_111(hParam0, 1888974372))
		return 0;

	return 1;
}

int func_224(Hash hParam0) // Position - 0x90CE Hash - 0x6D5A6948 ^0x8A3E949A
{
	if (func_111(hParam0, 1064293907))
		return 2;
	else if (func_111(hParam0, -1218707194))
		return 1;
	else if (func_111(hParam0, 1888974372))
		return 0;

	return 1;
}

int func_225(Ped pedParam0, Any* panParam1) // Position - 0x9113 Hash - 0xC08B2C8D ^0x93715860
{
	int damageCleanliness;
	int skinningQuality;
	var unk;
	var unk2;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (!ENTITY::GET_IS_ANIMAL(pedParam0) && !ENTITY::_GET_IS_BIRD(pedParam0))
		return 0;

	func_514(pedParam0, &skinningQuality, &unk, &damageCleanliness, &unk2);
	num = PED::_COMPUTE_SATCHEL_ITEM_FOR_PED_CARCASS(panParam1, pedParam0, damageCleanliness, skinningQuality);
	return num;
}

BOOL func_226(int iParam0) // Position - 0x9161 Hash - 0x91023C9F ^0x91023C9F
{
	return iParam0 > -1 && iParam0 < 153;
}

BOOL func_227(int iParam0) // Position - 0x9177 Hash - 0x895544C2 ^0x895544C2
{
	return iParam0 > -1 && iParam0 < 35;
}

float func_228(int iParam0, Hash hParam1) // Position - 0x918D Hash - 0xF0D534EB ^0xF0D534EB
{
	float num;

	num = 1f;

	if (!func_161(hParam1, 0))
		return num;

	!func_515(iParam0, hParam1, &num);
	return num;
}

float func_229(var uParam0, Hash hParam1) // Position - 0x91B8 Hash - 0x64490485 ^0x995A52B9
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
				if (func_119(hParam1) == uParam0->[i /*7*/].f_3)
					flag = true;
				break;
		
			case 3:
				num2 = BUILTIN::TO_FLOAT(func_516(hParam1, -915411861, true, false, false));
			
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

int func_230(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x92A9 Hash - 0xF91B3803 ^0xF91B3803
{
	var unk;
	int num;
	int i;

	unk = 10;

	if (!func_517(hParam0, hParam1, &unk, &num, bParam2))
	{
		!bParam2;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == joaat("currency_cash"))
			return unk[i /*2*/].f_1;
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam2;
	return 0;
}

const char* func_231(const char* sParam0, int iParam1) // Position - 0x9316 Hash - 0x9E99F03 ^0x2BB750A
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

var func_232(BOOL bParam0, var uParam1, var uParam2) // Position - 0x9330 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_233(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x9347 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_234(Hash hParam0, int iParam1) // Position - 0x9382 Hash - 0x930C4241 ^0x2C8F95BA
{
	return iParam1 == func_259(hParam0, 1224357681);
}

BOOL func_235(Any* panParam0, int iParam1, BOOL bParam2) // Position - 0x9398 Hash - 0x58578E17 ^0xA6EA6348
{
	if (bParam2)
		if (!func_518(panParam0->f_9))
			return false;

	if (!func_490(panParam0->f_4))
		return false;

	if (!func_519(panParam0->f_4, iParam1, false))
		return false;

	if (!func_249(panParam0->f_4))
		return false;

	if (func_27(false))
		if (!func_161(panParam0->f_4, 0) || panParam0->f_11 <= 0)
			return false;

	if (Global_1935689.f_9440 == 0 && !func_163())
		func_90(panParam0->f_4);

	return true;
}

void func_236(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14) // Position - 0x942C Hash - 0xCFC7520 ^0x93676344
{
	eBlipSprite hash;
	int dataContainerFromChildIndex;
	int num;
	BOOL flag;
	int num2;

	if (func_161(uParam0.f_4, 0))
	{
		hash = func_266(uParam0.f_4);
		dataContainerFromChildIndex = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689.f_9450, Global_1935689.f_9444);
		num = dataContainerFromChildIndex;
		flag = func_520(uParam0.f_4);
	
		if (iParam14 > 0)
			num2 = iParam14;
		else
			num2 = func_166(func_165(0), uParam0.f_4, false);
	
		DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(0, num, hash, num2, uParam0.f_10, flag, joaat("COLOR_PURE_WHITE"));
		Global_1935689.f_9444 = Global_1935689.f_9444 + 1;
	}

	return;
}

float func_237(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x94B2 Hash - 0x2753566D ^0x575C60D0
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return -1f;

	return func_521(Global_35, pedParam0, bParam1, bParam2);
}

BOOL func_238(Ped pedParam0) // Position - 0x94DB Hash - 0xF08DB258 ^0xC91C00F7
{
	var unk;
	float num;

	if (func_358() == 3)
	{
		unk = { func_522(func_358()) };
		num = func_523() + 7f;
	
		if (func_524(ENTITY::GET_ENTITY_COORDS(pedParam0, true, false), unk, num, false))
			return true;
	}
	else if (func_525(pedParam0))
	{
		return true;
	}

	return false;
}

BOOL func_239(Ped pedParam0) // Position - 0x952A Hash - 0x6D7E69FC ^0x1FD723DA
{
	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	return PED::IS_PED_ON_MOUNT(pedParam0);
}

BOOL func_240(int iParam0) // Position - 0x9545 Hash - 0x5E96C64E ^0x198696F2
{
	if (iParam0 == Global_1935689.f_18)
		return 1;

	return 0;
}

int func_241(int iParam0) // Position - 0x955D Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

BOOL func_242(int iParam0) // Position - 0x9576 Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_241(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
		return true;

	return false;
}

float func_243(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x95AE Hash - 0x6A10E689 ^0x100E8618
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

BOOL func_244(int iParam0) // Position - 0x95CC Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return false;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return false;

	return true;
}

BOOL func_245(char* sParam0, int iParam1, int iParam2, Hash hParam3, BOOL bParam4) // Position - 0x95ED Hash - 0xA7F38D3E ^0x25D43AAB
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_199(bParam4), sParam0, hParam3, iParam2);

	if (*iParam1 >= 0)
		return true;

	return false;
}

void func_246(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) // Position - 0x9614 Hash - 0x570DE08 ^0x5B93DF99
{
	int num;
	BOOL flag;
	int i;

	num = func_259(uParam0.f_4, 1224357681);
	flag = func_520(uParam0.f_4);

	if (func_526(num))
	{
		if (Global_1935689.f_19.f_1 > 0)
		{
			for (i = 0; i < Global_1935689.f_19.f_1; i = i + 1)
			{
				if (num == Global_1935689.f_19.f_2[i /*2*/])
				{
					func_527(i, true);
					return;
				}
			}
		
			func_528(num, flag);
		}
		else
		{
			func_528(num, flag);
		}
	}

	return;
}

BOOL func_247() // Position - 0x9691 Hash - 0x90DE660D ^0xA0573A0E
{
	if (Global_1935689.f_9439 == -182626652)
	{
		switch (func_251())
		{
			case 10:
			case 18:
			case 19:
				return true;
		}
	}
	else if (Global_1935689.f_9439 == -2074770370)
	{
		return func_24();
	}
	else if (Global_1935689.f_9439 == -693134279)
	{
		return true;
	}

	return false;
}

Hash func_248(Entity eParam0) // Position - 0x96FB Hash - 0xA39E0C8B ^0xB5ABC18B
{
	Hash hash;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	if (ENTITY::GET_IS_ANIMAL(eParam0) || ENTITY::_GET_IS_BIRD(eParam0))
	{
		hash = func_529(eParam0);
	
		if (!func_161(hash, 0))
			hash = func_530(eParam0);
	}
	else
	{
		hash = func_530(eParam0);
	}

	return hash;
}

BOOL func_249(Hash hParam0) // Position - 0x974E Hash - 0xB65FA383 ^0xB65FA383
{
	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY"):
			return false;
	}

	if (func_27(false) && Global_1914319.f_16855 == 2)
	{
		if (!func_531(hParam0))
			return false;
	}
	else
	{
		switch (hParam0)
		{
			case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
				return false;
		}
	}

	if (func_62() == false)
		if (func_111(hParam0, -805003139))
			if (!UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
				return false;

	if (func_119(hParam0) == joaat("UPGRADE") && !(func_111(hParam0, -1540973036) || func_111(hParam0, 1192444843)))
		return false;

	return true;
}

BOOL func_250() // Position - 0x984F Hash - 0x202088 ^0x8B615C18
{
	int num;

	if (func_27(false))
	{
		num = func_251();
	
		if (num == 10 || num == 18 || num == 19)
			if (Global_1935689.f_9439 == -283002878 || Global_1935689.f_9439 == -182626652 && func_84())
				return true;
		else if (func_251() == 2 && Global_1935689.f_9439 == -693134279 || Global_1935689.f_9439 == -283002878)
			return true;
	}
	else if (Global_1935689.f_9439 == -283002878)
	{
		return true;
	}

	return false;
}

int func_251() // Position - 0x98FF Hash - 0xC0E4D78F ^0xC0E4D78F
{
	int i;

	for (i = 0; i < 35; i = i + 1)
	{
		if (func_532(i))
			return i;
	}

	return -1;
}

int func_252(BOOL bParam0, BOOL bParam1) // Position - 0x9929 Hash - 0x4C9BBA66 ^0x2F3939AA
{
	var unk;

	unk = 1000;
	func_533(&unk, bParam1);
	return func_534(&unk, bParam0);
}

var func_253(BOOL bParam0) // Position - 0x9948 Hash - 0xAEBABCA ^0xAEBABCA
{
	Ped ped;
	var unk;

	ped = func_165(0);
	func_535(&ped, &unk, bParam0);
	return unk;
}

void func_254(var uParam0, Any* panParam1, int iParam2) // Position - 0x9963 Hash - 0x29A84DB ^0x29A84DB
{
	var unk;
	int i;
	int j;
	BOOL flag;
	int num;
	Hash hash;
	int num2;
	int k;

	if (iParam2 == 0)
	{
		unk = 16;
	
		if (*uParam0 > 0)
		{
			num = func_199(false);
		
			for (i = *uParam0 - 1; i >= 0; i = i + -1)
			{
				if (!func_233(panParam1, i, uParam0->f_1, *uParam0))
				{
				}
				else if (!func_235(panParam1, iParam2, true))
				{
				}
				else
				{
					hash = panParam1->f_4;
					num2 = func_536(hash, num);
					flag = false;
				
					for (j = 0; j < 16; j = j + 1)
					{
						if (hash == unk[j /*2*/])
						{
							flag = true;
							break;
						}
					}
				
					if (!flag)
					{
						for (k = 0; k < 16; k = k + 1)
						{
							if (!func_161(unk[k /*2*/], 0))
							{
								unk[k /*2*/] = hash;
								unk[k /*2*/].f_1 = num2;
								break;
							}
						
							if (num2 > unk[k /*2*/].f_1)
								func_537(&unk, k, &hash, &num2);
						}
					}
				}
			}
		
			func_538(&unk);
		}
	}

	return;
}

void func_255(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14) // Position - 0x9A54 Hash - 0x448A7175 ^0x6E30185
{
	BOOL flag;
	Hash hash;
	BOOL flag2;
	var unk;
	int num;
	int num2;

	if (func_161(uParam0.f_4, 0))
	{
		flag = func_520(uParam0.f_4);
	
		if (func_68())
			if (!flag || uParam0.f_4 == joaat("PROVISION_OLD_BRASS_COMPASS"))
				return;
	
		hash = func_266(uParam0.f_4);
		flag2 = ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(uParam0.f_4);
		unk = { func_539(uParam0.f_4) };
		num = func_540(uParam0.f_4);
	
		if (iParam14 > 0)
			num2 = iParam14;
		else
			num2 = func_166(func_165(0), uParam0.f_4, false);
	
		func_541(joaat("inventory_item"), hash, &unk, flag, num2, flag2, num, joaat("COLOR_PURE_WHITE"));
		Global_1935689.f_19.f_203 = Global_1935689.f_19.f_203 + 1;
	}

	return;
}

void func_256() // Position - 0x9B08 Hash - 0xD1598ACF ^0x6826F794
{
	if (func_251() != 2)
	{
		if (func_257(joaat("weapon_kit_binoculars"), 1, false))
			func_258(joaat("weapon_kit_binoculars"), false);
	
		if (func_257(joaat("weapon_kit_camera"), 1, false))
			func_258(joaat("weapon_kit_camera"), false);
	
		func_542();
	
		if (func_257(joaat("kit_camp"), 1, false))
			func_258(joaat("kit_camp"), false);
		else if (func_257(joaat("kit_camp_simple"), 1, false))
			func_258(joaat("kit_camp_simple"), false);
	
		func_543();
	}

	return;
}

BOOL func_257(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x9B83 Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_161(hParam0, 0))
		return false;

	num = func_119(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_544(hParam0, 1))
			return false;

	return func_264(hParam0, false, bParam2) >= iParam1;
}

void func_258(Hash hParam0, BOOL bParam1) // Position - 0x9BED Hash - 0xBF55091C ^0xE702123A
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");
	unk.f_4 = hParam0;

	if (!bParam1)
		func_255(unk, 1);
	else
		func_236(unk, 0);

	return;
}

int func_259(Hash hParam0, int iParam1) // Position - 0x9C25 Hash - 0x7A1C2599 ^0xFF9B5634
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

int func_260(var uParam0) // Position - 0x9C6F Hash - 0x19D4C5AC ^0x19D4C5AC
{
	switch (*uParam0)
	{
		case joaat("consumable_herb_common_bulrush"):
			return 11;
	
		case joaat("consumable_herb_oleander_sage"):
			return 26;
	
		case joaat("consumable_herb_parasol_mushroom"):
			return 28;
	
		case joaat("consumable_herb_black_berry"):
			return 5;
	
		case joaat("consumable_herb_sage"):
			return 34;
	
		case joaat("consumable_herb_evergreen_huckleberry"):
			return 16;
	
		case joaat("consumable_herb_english_mace"):
			return 15;
	
		case joaat("consumable_herb_bay_bolete"):
			return 4;
	
		case joaat("provision_ro_flower_clamshell"):
			return 10;
	
		case joaat("consumable_herb_chanterelles"):
			return 8;
	
		case joaat("consumable_herb_rams_head"):
			return 31;
	
		case joaat("provision_ro_flower_acunas_star"):
			return 1;
	
		case joaat("consumable_herb_wintergreen_berry"):
			return 42;
	
		case joaat("consumable_herb_indian_tobacco"):
			return 20;
	
		case joaat("consumable_herb_yarrow"):
			return 43;
	
		case joaat("consumable_herb_wild_mint"):
			return 41;
	
		case joaat("provision_ro_flower_cigar"):
			return 9;
	
		case joaat("consumable_herb_burdock_root"):
			return 7;
	
		case joaat("provision_ro_flower_rat_tail"):
			return 32;
	
		case joaat("provision_ro_flower_night_scented"):
			return 25;
	
		case joaat("consumable_herb_violet_snowdrop"):
			return 38;
	
		case joaat("consumable_herb_milkweed"):
			return 23;
	
		case joaat("consumable_herb_prairie_poppy"):
			return 29;
	
		case joaat("consumable_herb_oregano"):
			return 27;
	
		case joaat("consumable_herb_red_raspberry"):
			return 33;
	
		case joaat("provision_ro_flower_lady_of_night"):
			return 21;
	
		case joaat("consumable_herb_wild_feverfew"):
			return 40;
	
		case joaat("provision_ro_flower_sparrows"):
			return 35;
	
		case joaat("provision_ro_flower_queens"):
			return 30;
	
		case joaat("consumable_herb_currant"):
			return 6;
	
		case joaat("consumable_herb_wild_carrots"):
			return 39;
	
		case joaat("consumable_herb_ginseng"):
			return 2;
	
		case joaat("provision_ro_flower_spider"):
			return 36;
	
		case joaat("provision_ro_flower_dragons"):
			return 14;
	
		case joaat("provision_ro_flower_lady_slipper"):
			return 22;
	
		case joaat("provision_ro_flower_moccasin"):
			return 24;
	
		case joaat("consumable_herb_vanilla_flower"):
			return 37;
	
		case joaat("consumable_herb_creeping_thyme"):
			return 12;
	
		case joaat("provision_ro_flower_ghost"):
			return 17;
	}

	return 0;
}

BOOL func_261(int iParam0) // Position - 0x9E9D Hash - 0x49EE3EAE ^0x49EE3EAE
{
	if (!func_545(iParam0))
		return false;

	return func_546(iParam0, 4, true);
}

void func_262(Hash hParam0, var uParam1) // Position - 0x9EBB Hash - 0x781E5051 ^0xE6B400F0
{
	if (func_68())
	{
		func_547(true);
	
		if (func_23())
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_548(), 75706034);
		else
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_548(), -31549930);
	
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9468, true);
	}
	else if (func_27(false) || func_68())
	{
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689.f_9465))
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9464, DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "focusable"));
	}
	else
	{
		func_549(hParam0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_548(), func_550(hParam0));
		func_551(hParam0, uParam1);
	}

	return;
}

BOOL func_263(Hash hParam0) // Position - 0x9F57 Hash - 0x7B7F5D36 ^0x7B7F5D36
{
	if (func_552())
		return 0;

	if (func_62() == false)
	{
		return 0;
	}
	else if (!func_27(false) && !func_68())
	{
		if (func_265(hParam0, false) == 1 || func_111(hParam0, 173360570) || func_111(hParam0, 1291597743) || func_111(hParam0, -928967997) || func_111(hParam0, 747873593))
			return 0;
	
		return 1;
	}

	return 0;
}

int func_264(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x9FE5 Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_161(hParam0, 0))
		return 0;

	num = func_119(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_359(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_553(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_199(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

int func_265(Hash hParam0, BOOL bParam1) // Position - 0xA067 Hash - 0x71A176E6 ^0x71A176E6
{
	var unk;

	unk = { func_153(hParam0, false, false) };
	return func_554(hParam0, &unk, false, bParam1);
}

eBlipSprite func_266(Hash hParam0) // Position - 0xA086 Hash - 0x72D0E66A ^0x72D0E66A
{
	if (!func_161(hParam0, 0))
		return 0;

	return hParam0;
}

Hash func_267(Hash hParam0) // Position - 0xA09F Hash - 0x537A9F80 ^0xA620B26C
{
	int num;

	num = func_260(&hParam0);

	if (num != 0 && !func_555(func_260(&hParam0)))
		if (!func_261(num))
			return -1994084079;

	return func_556(hParam0);
}

int func_268(Hash hParam0, int iParam1) // Position - 0xA0DE Hash - 0x5C6354B8 ^0x5C6354B8
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	if (func_220(hParam0))
	{
		if (iParam1 > 1)
		{
			num2 = func_557(hParam0);
			num3 = iParam1 - num2;
			num4 = func_79(hParam0, false);
			num5 = func_79(hParam0, true);
			num = (num5 * num2) + (num4 * num3);
		}
		else
		{
			num = func_79(hParam0, func_558(hParam0));
		}
	}
	else
	{
		num = func_79(hParam0, false) * iParam1;
	}

	return num;
}

BOOL func_269(Hash hParam0, int iParam1) // Position - 0xA145 Hash - 0xCF0E4834 ^0xCF0E4834
{
	if (iParam1 == 101)
		return func_559(hParam0);

	if (func_560(hParam0, iParam1))
		return false;

	return func_561(hParam0, iParam1);
}

Hash func_270(Hash hParam0) // Position - 0xA177 Hash - 0x1F5BA88D ^0x1C6C332D
{
	int num;
	Hash num2;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1935689.f_9475))
		return 0;

	num = Global_1935689.f_9475;
	num.f_2 = 3;
	num.f_3 = hParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num2, &num);
	return num2;
}

void func_271(var uParam0) // Position - 0xA1B1 Hash - 0x1172975C ^0xDC5FC9AD
{
	func_547(false);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_548(), joaat("SATCHEL_PROMPT_OPEN"));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(func_562(), DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam0, "focusable"));
	return;
}

BOOL func_272(Object obParam0, int iParam1) // Position - 0xA1DE Hash - 0x178D9C09 ^0x178D9C09
{
	return obParam0 && iParam1 != false;
}

BOOL func_273(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0xA1ED Hash - 0x7CDDEAB4 ^0x7CDDEAB4
{
	int num;

	if (func_563(hParam0))
		return false;

	if (iParam1 <= 0)
		return false;

	if (!func_156(bParam4))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_199(bParam4), hParam0, iParam1, hParam2))
		return false;

	return true;
}

BOOL func_274(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, BOOL bParam5, BOOL bParam6) // Position - 0xA239 Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_563(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_446(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_156(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_199(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

int func_275(Hash hParam0) // Position - 0xA2C9 Hash - 0x229B2393 ^0x1B35F016
{
	if (func_111(hParam0, 1573112293))
		return func_564(hParam0);

	switch (func_121(hParam0))
	{
		case -2061583405:
		case -1719060085:
		case 81053684:
			return func_191();
	
		case -1823706425:
			return func_56();
	
		case -1393202694:
		case 2041469314:
			return func_564(hParam0);
	
		case -854348463:
			return func_53();
	
		case -525676072:
			return func_191();
	
		case -77448735:
			if (func_565(hParam0))
				return func_564(hParam0);
			break;
	
		case 1779021115:
			if (func_161(hParam0, 0))
				if (hParam0 == joaat("weapon_kit_camera"))
					return func_54();
		
			return func_55();
	
		case 1802292908:
			return func_44();
	
		default:
			if (func_161(hParam0, 0))
			{
				if (func_111(hParam0, 1192444843) || func_111(hParam0, -1540973036))
					return func_58();
				else if (func_111(hParam0, 1919582297))
					return func_36();
				else if (func_111(hParam0, 1147021565))
					return func_35();
			
				switch (hParam0)
				{
					case joaat("upgrade_upg_mortar_pestle"):
					case -1448210800:
						return func_57();
				
					case joaat("kit_horse_brush"):
						return func_47();
				}
			}
		
			return func_33();
	}

	return func_33();
}

BOOL func_276() // Position - 0xA44A Hash - 0x37EC066 ^0xC9B08D38
{
	if (func_62() != -1)
		return false;

	if (Global_40.f_39 == joaat("Player_Zero"))
		return true;

	return false;
}

void func_277(int iParam0, int iParam1) // Position - 0xA470 Hash - 0xF5E9551B ^0xF5E9551B
{
	int i;

	if (iParam1 == 1)
	{
		func_566(iParam0, 0);
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
	
		func_567(1);
		Global_40.f_11922[0] = iParam0;
	}

	return;
}

void func_278(int iParam0, int iParam1) // Position - 0xA4C8 Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_568(iParam0))
		return;

	func_569(iParam0, iParam1);
	return;
}

BOOL func_279(int iParam0) // Position - 0xA4E5 Hash - 0xBF2B4762 ^0xBF2B4762
{
	return Global_40.f_490.f_402[iParam0] & true != 0;
}

BOOL func_280() // Position - 0xA4FE Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_281(int iParam0) // Position - 0xA51D Hash - 0x5FF09631 ^0xD3AB2726
{
	if (func_62() != -1)
		return false;

	return func_296(Global_1347702[iParam0 /*49*/].f_15, true);
}

BOOL func_282(int iParam0) // Position - 0xA540 Hash - 0x9921E361 ^0x80761F6A
{
	return Global_40.f_12004.f_6 && iParam0 != false;
}

void func_283(int iParam0) // Position - 0xA555 Hash - 0x25D46568 ^0xDB7BDC37
{
	Global_40.f_12019.f_26 = Global_40.f_12019.f_26 || iParam0;
	return;
}

void func_284(int iParam0, Hash hParam1, Hash hParam2, int iParam3, int iParam4, int iParam5, Hash hParam6) // Position - 0xA570 Hash - 0xD806FABF ^0x74F6D38C
{
	char* str;
	char* str2;
	char* str3;
	char* str4;
	Hash hashKey;
	Hash hashKey2;
	Hash hash;
	int num;

	switch (iParam0)
	{
		case 38:
			str = "COL_CC_TITLE";
			str4 = "COL_CC_CARD_FOUND";
			num = joaat("CIGARETTE_CARDS");
		
			if (func_280() && func_381(38) || func_281(38))
			{
				str2 = "COL_CC_INTRO";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				str2 = "COL_CC_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
		
			hash = joaat("col_cc_intro");
			break;
	
		case 39:
			str = "COL_DB_TITLE";
			str4 = "COL_DB_FOUND";
			num = joaat("dino_bones");
		
			if (func_280() && func_381(39) || func_281(39))
			{
				str2 = "COL_DB_INTRO";
				hashKey = joaat("blip_rc_deborah");
			}
			else
			{
				str2 = "COL_DB_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
		
			hash = joaat("col_db_intro");
			break;
	
		case 41:
			str = "COL_LF_TITLE";
			str4 = "COL_LF_CAUGHT";
			str2 = "COL_LF_INTRO";
			num = 1995362678;
			hashKey = joaat("blip_rc_jeremy_gill");
			hash = joaat("col_lf_intro");
			break;
	
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			str = "COL_EX_TITLE";
			str4 = "COL_EX_ITEMS_COLLECTED";
			str2 = "COL_EX_INTRO";
			num = -1531394072;
			hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			hash = joaat("col_ex_intro");
			break;
	
		case 49:
			str = "COL_RC_TITLE";
			str4 = "COL_RC_FOUND";
			num = joaat("rock_carvings");
		
			if (func_280() && func_381(49) || func_281(49))
			{
				str2 = "COL_RC_INTRO";
				hashKey = joaat("blip_scm_frances");
			}
			else
			{
				str2 = "COL_RC_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
		
			hash = joaat("col_rc_intro");
			break;
	
		case 51:
			str = "COL_TX_TITLE";
			str4 = "COL_TX_CARCASS_COLLECTED";
			str2 = "COL_TX_INTRO";
			num = joaat("taxidermy");
			hashKey = joaat("blip_rc_hobbs");
			hash = joaat("col_tx_intro");
			break;
	}

	if (iParam5 == 2)
	{
		str = "MISSION_COMPLETE";
		hashKey = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		hashKey2 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		hashKey2 = MISC::GET_HASH_KEY("toast_log_blips");
		str2 = "COL_ALL_LOG_UPDATED";
	}

	str3 = "COL_CTX_PLAYER_LOG";

	if (num == joaat("CIGARETTE_CARDS"))
	{
		if (func_280() && func_381(38) || func_281(38))
			hash = joaat("col_cc_intro");
		else
			hash = joaat("col_cc_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 0)
		{
			hashKey2 = hParam1;
			hashKey = hParam2;
		}
	
		if (iParam5 == 2)
		{
			str4 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_570(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 1)
		{
			str4 = "COL_CC_CARD_POSTED_OBJ";
			func_570(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 0)
		{
			func_572(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_379(hParam6))), hashKey2, hashKey, -2, 0, 0, 0, 0, true, true);
			func_570(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else
		{
			str2 = "COL_CC_INTRO";
			func_570(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
	}
	else if (num == joaat("dino_bones"))
	{
		if (func_280() && func_381(39) || func_281(39))
			hash = joaat("col_db_intro");
		else
			hash = joaat("col_db_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_570(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_570(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else if (num == joaat("rock_carvings"))
	{
		if (func_280() && func_381(49) || func_281(49))
			hash = joaat("col_rc_intro");
		else
			hash = joaat("col_rc_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_570(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_570(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_570(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_570(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}

	return;
}

void func_285(int iParam0, Hash hParam1, int iParam2, Hash hParam3, int iParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0xAB1E Hash - 0x2D6CF941 ^0x1CBFE61
{
	char* str;
	char* str2;
	char* str3;
	char* str4;
	char* str5;
	char* str6;
	var unk;
	int num;
	int num2;
	Hash hashKey;
	Hash hashKey2;
	Hash hash;
	Hash hash2;

	switch (iParam0)
	{
		case 38:
			str = "MISSION_RCCIG";
			str2 = "SP_MISSIONS_13";
		
			if (func_280() && func_381(38) || func_281(38))
			{
				str4 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				str6 = "COL_CC_INTRO";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				hash = joaat("col_cc_intro");
			}
			else
			{
				str4 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				str6 = "COL_CC_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				hash = joaat("col_cc_intro_pre");
			}
		
			str5 = "COL_CC_TITLE";
			unk = { -1678.8323f, -335.5439f, 172.9001f };
			num = 12;
			hash2 = joaat("CIGARETTE_CARDS");
			break;
	
		case 39:
			if (func_280() && func_381(39) || func_281(39))
			{
				str = "MISSION_RCDIN2";
				str4 = "RCM_BRIEF_DESC_DINO_BONES_02";
				str6 = "COL_DB_INTRO";
				num = 3;
				hashKey = joaat("blip_rc_deborah");
				hash = joaat("col_db_intro");
			}
			else
			{
				str = "MISSION_RCDIN2";
				str4 = "RCM_BRIEF_DESC_DINO_BONES_01";
				str6 = "COL_DB_INTRO_PRE";
				num = 1;
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				hash = joaat("col_db_intro_pre");
			}
		
			str2 = "SP_MISSIONS_14";
			str5 = "COL_DB_TITLE";
			unk = { 122.7758f, -185.4978f, 116.4383f };
			num2 = 30;
			hash2 = joaat("dino_bones");
			break;
	
		case 41:
			if (func_280() && func_381(41) || func_281(41))
				str = "MISSION_RCFSH2";
			else
				str = "MISSION_RCFSH1";
		
			str2 = "SP_MISSIONS_14";
			str4 = "RCM_BRIEF_DESC_RARE_FISH_01";
			str5 = "COL_LF_TITLE";
			str6 = "COL_LF_INTRO";
			unk = { 337.3075f, -684.5404f, 41.8362f };
			num = 13;
			hash2 = 1995362678;
			hashKey = joaat("blip_rc_jeremy_gill");
			hash = joaat("col_lf_intro");
			break;
	
		case 43:
			if (hParam3 == joaat("exotic_stage_01"))
			{
				str = "MISSION_RCEXO1";
				str4 = "RCEXO1_DESC";
				num2 = 30;
			}
			else if (hParam3 == joaat("exotic_stage_02"))
			{
				str = "MISSION_RCEXO2";
				str4 = "RCEXO2_DESC";
				num2 = 37;
			}
			else if (hParam3 == joaat("exotic_stage_03"))
			{
				str = "MISSION_RCEXO3";
				str4 = "RCEXO3_DESC";
				num2 = 40;
			}
			else if (hParam3 == joaat("exotic_stage_04"))
			{
				str = "MISSION_RCEXO4";
				str4 = "RCEXO4_DESC";
				num2 = 50;
			}
			else if (hParam3 == joaat("exotic_stage_05"))
			{
				str = "MISSION_RCEXO5";
				str4 = "RCEXO5_DESC";
				num2 = 25;
			}
		
			str2 = "SP_MISSIONS_14";
			str5 = "COL_EX_TITLE";
			str6 = "COL_EX_INTRO";
			unk = { 2585.6682f, -1009.6161f, 44.979717f };
			num = func_573(hParam3, 19);
			hash2 = -1531394072;
			hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			hash = joaat("col_ex_intro");
			break;
	
		case 49:
			if (func_280() && func_381(49) || func_281(49))
			{
				str = "MISSION_RCRKF2";
				str4 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				str6 = "COL_RC_INTRO";
				num = 3;
				hashKey = joaat("blip_scm_frances");
				hash = joaat("col_rc_intro");
			}
			else
			{
				str = "MISSION_RCRKF1";
				str4 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				str6 = "COL_RC_INTRO_PRE";
				num = 1;
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				hash = joaat("col_rc_intro_pre");
			}
		
			str2 = "SP_MISSIONS_14";
			str5 = "COL_RC_TITLE";
			unk = { -2178.646f, -245.6886f, 191.1569f };
			num2 = 10;
			hash2 = joaat("rock_carvings");
			break;
	
		case 51:
			str = "MISSION_RCTAX1";
			str2 = "SP_MISSIONS_14";
			str4 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			str5 = "COL_TX_TITLE";
			str6 = "COL_TX_INTRO";
			unk = { -1678.8323f, -335.5439f, 172.9001f };
			num = func_573(hParam3, 20);
			hash2 = joaat("taxidermy");
			hashKey = joaat("blip_rc_hobbs");
			hash = joaat("col_tx_intro");
			break;
	}

	str3 = func_574(iParam0, hash2, iParam6, str3, iParam4, num2, hParam3);

	if (iParam6 == 8)
	{
		hashKey = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		hashKey2 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		hashKey2 = MISC::GET_HASH_KEY("toast_log_blips");
	}

	func_575(iParam0, hash, hash2);
	func_576(iParam0, hash, unk, str5, str4);
	func_577(iParam0, hash, str3, str6, str, str2, hashKey, hashKey2);
	func_578(iParam0, hash, hash2, hParam3, hParam1, iParam6, num, iParam2, num2, bParam5);
	func_579(iParam0, hash, hash2, iParam6);
	func_580(iParam0, hash, hash2, iParam6, bParam7);
	return;
}

void func_286(int iParam0) // Position - 0xAF5B Hash - 0x25D46568 ^0xBF368405
{
	Global_40.f_12004.f_6 = Global_40.f_12004.f_6 || iParam0;
	return;
}

BOOL func_287(int iParam0) // Position - 0xAF76 Hash - 0x9921E361 ^0x3BD1D7
{
	return Global_40.f_12004.f_1 && iParam0 != false;
}

void func_288(int iParam0) // Position - 0xAF8B Hash - 0x25D46568 ^0x155CD956
{
	Global_40.f_12019.f_3 = Global_40.f_12019.f_3 || iParam0;
	return;
}

void func_289(int iParam0) // Position - 0xAFA6 Hash - 0x25D46568 ^0xBD3E2EC1
{
	Global_40.f_12004.f_1 = Global_40.f_12004.f_1 || iParam0;
	return;
}

BOOL func_290(int iParam0) // Position - 0xAFC1 Hash - 0x9921E361 ^0x9A354EEF
{
	return Global_40.f_12004.f_3 && iParam0 != false;
}

void func_291(int iParam0) // Position - 0xAFD6 Hash - 0x25D46568 ^0xB710C32B
{
	Global_40.f_12019.f_4 = Global_40.f_12019.f_4 || iParam0;
	return;
}

void func_292(int iParam0) // Position - 0xAFF1 Hash - 0x25D46568 ^0x155CD956
{
	Global_40.f_12004.f_3 = Global_40.f_12004.f_3 || iParam0;
	return;
}

BOOL func_293(int iParam0) // Position - 0xB00C Hash - 0x9921E361 ^0x59BA6F7C
{
	return Global_40.f_12004.f_5 && iParam0 != false;
}

void func_294(int iParam0) // Position - 0xB021 Hash - 0x25D46568 ^0xF36E5C55
{
	Global_40.f_12019.f_2 = Global_40.f_12019.f_2 || iParam0;
	return;
}

void func_295(int iParam0) // Position - 0xB03C Hash - 0x25D46568 ^0x27CAC05F
{
	Global_40.f_12004.f_5 = Global_40.f_12004.f_5 || iParam0;
	return;
}

BOOL func_296(int iParam0, BOOL bParam1) // Position - 0xB057 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_581(iParam0))
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

BOOL func_297(Hash hParam0, BOOL bParam1, BOOL bParam2, int iParam3, int iParam4) // Position - 0xB088 Hash - 0x5AD1F9FD ^0x42FC5FEC
{
	Hash interactionAnimHash;

	switch (func_259(hParam0, -949239683))
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
					interactionAnimHash = -487508500;
			
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

void func_298(Hash hParam0) // Position - 0xB3A4 Hash - 0x26CEB274 ^0x33203B5B
{
	Hash hash;

	hash = joaat("apply_lotion_left_hand");

	switch (func_582())
	{
		case 0:
			hash = joaat("apply_lotion_left_hand");
			break;
	
		case 1:
			hash = joaat("apply_lotion_both_hands");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("apply_lotion_left_hand_rifle");
			break;
	}

	if (hash != 0)
	{
		func_583(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_584(hParam0, true);
		func_149(hParam0, 1, false, -142743235, false);
	}

	return;
}

BOOL func_299() // Position - 0xB424 Hash - 0xB6A628E2 ^0xC1A3BB0C
{
	return 1 == Global_40.f_7748.f_3;
}

BOOL func_300(Ped pedParam0) // Position - 0xB436 Hash - 0x224EC90C ^0x807A7E5C
{
	if (!ENTITY::DOES_ENTITY_EXIST(*pedParam0) || ENTITY::IS_ENTITY_DEAD(*pedParam0))
		return false;

	if (func_585(*pedParam0, joaat("HATS"), false))
		return true;

	return false;
}

void func_301(Hash hParam0) // Position - 0xB46F Hash - 0x26CEB274 ^0x13CF482F
{
	Hash hash;

	hash = 16939881;

	switch (func_582())
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
		func_583(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_584(hParam0, true);
		func_149(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_302(Hash hParam0, BOOL bParam1) // Position - 0xB4EF Hash - 0xE800B03C ^0x3799F51A
{
	Hash hash;

	hash = -45077177;

	switch (func_582())
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
		func_583(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_584(hParam0, true);
		func_149(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_303(Hash hParam0, BOOL bParam1) // Position - 0xB59C Hash - 0xE800B03C ^0xCB090F44
{
	Hash hash;

	hash = 1700817728;

	switch (func_582())
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
		func_583(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_584(hParam0, true);
		func_149(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_304(Hash hParam0) // Position - 0xB649 Hash - 0x26CEB274 ^0x4A49C80C
{
	Hash hash;

	hash = joaat("use_large_bottle_combat_left_hand");

	switch (func_582())
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
		func_583(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_584(hParam0, true);
		func_149(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_305(Hash hParam0) // Position - 0xB6C9 Hash - 0x26CEB274 ^0xC6610213
{
	Hash hash;

	hash = -680642132;

	switch (func_582())
	{
		case 0:
			hash = -680642132;
			break;
	
		case 1:
			hash = -267849149;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = 1759003815;
			break;
	}

	if (hash != 0)
	{
		func_583(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_584(hParam0, true);
		func_149(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_306(Hash hParam0) // Position - 0xB749 Hash - 0x26CEB274 ^0x806B3C6E
{
	Hash hash;

	hash = 2105609037;

	switch (func_582())
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
		func_583(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_584(hParam0, true);
		func_149(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_307(Hash hParam0) // Position - 0xB7C9 Hash - 0x26CEB274 ^0x76FE185
{
	Hash hash;

	hash = 1964324114;

	switch (func_582())
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
		func_583(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_584(hParam0, true);
		func_149(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_308(Hash hParam0) // Position - 0xB849 Hash - 0x26CEB274 ^0x271E98F3
{
	Hash hash;

	hash = -1530144981;

	switch (func_582())
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
		func_583(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_584(hParam0, true);
		func_149(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_309(Hash hParam0) // Position - 0xB8C9 Hash - 0x26CEB274 ^0x8287AC45
{
	Hash hash;

	hash = -1074475556;

	switch (func_582())
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
		func_583(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_584(hParam0, true);
		func_149(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_310(Hash hParam0) // Position - 0xB949 Hash - 0x26CEB274 ^0x26B03C92
{
	Hash hash;

	hash = joaat("use_stimulant_injection_quick_left_hand");

	switch (func_582())
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
		func_583(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_584(hParam0, true);
		func_149(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_311(Hash hParam0) // Position - 0xB9C9 Hash - 0x26CEB274 ^0x5D3C7B2A
{
	Hash hash;

	hash = joaat("quick_smoke_cigarette_left_hand");

	switch (func_582())
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
		func_583(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_584(hParam0, true);
		func_149(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_312(Hash hParam0) // Position - 0xBA49 Hash - 0x26CEB274 ^0xBFBE1D88
{
	Hash hash;

	hash = joaat("quick_smoke_cigar_left_hand");

	switch (func_582())
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
		func_583(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_584(hParam0, true);
		func_149(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_313(Hash hParam0) // Position - 0xBAC9 Hash - 0xA69012EC ^0xD86A3DAD
{
	Hash hash;

	hash = joaat("use_handfull_satchel_left_hand_quick");

	switch (func_582())
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
		if (func_111(hParam0, 1573112293))
			func_586(func_260(&hParam0), true, 1);
	
		func_583(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_584(hParam0, true);
		func_149(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_314(Hash hParam0) // Position - 0xBB63 Hash - 0x26CEB274 ^0x36AF879B
{
	Hash hash;

	hash = joaat("use_tonic_satchel_left_hand_quick");

	switch (func_582())
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
		func_583(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_584(hParam0, true);
		func_149(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_315(Hash hParam0) // Position - 0xBBE3 Hash - 0x26CEB274 ^0xF38E7004
{
	Hash hash;

	hash = joaat("use_tonic_potent_satchel_left_hand_quick");

	switch (func_582())
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
		func_583(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_584(hParam0, true);
		func_149(hParam0, 1, false, -142743235, false);
	}

	return;
}

BOOL func_316(int iParam0, int iParam1) // Position - 0xBC63 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_317(const char* sParam0) // Position - 0xBC72 Hash - 0x2124511C ^0xA40AAA4F
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

void func_318(int iParam0) // Position - 0xBCAC Hash - 0x22E7EDA ^0x22E7EDA
{
	if (func_316(iParam0, 1))
		func_587(1);

	return;
}

BOOL func_319(eStackSize essParam0) // Position - 0xBCC3 Hash - 0xFE3170D1 ^0xFE3170D1
{
	if (!func_588(essParam0))
		return false;

	if (func_589(essParam0, 4))
		return true;

	return false;
}

BOOL func_320(int iParam0) // Position - 0xBCE8 Hash - 0x11215AF ^0x23164775
{
	Ped ped;

	iParam0 = func_241(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	ped = func_85(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return false;

	if (func_590(ped))
		return true;

	return false;
}

int func_321() // Position - 0xBD49 Hash - 0x38870270 ^0x38870270
{
	return Global_40.f_1095.f_3054;
}

void func_322(BOOL bParam0) // Position - 0xBD5A Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

void func_323(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0xBD6D Hash - 0x21CB5355 ^0x21CB5355
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
		case 26:
			if (Global_1946054.f_850 >= 25)
				return;
		
			if (func_591(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_592(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_322(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_591(iParam0))
				return;
		
			func_592(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_322(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_339(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

BOOL func_324(Hash hParam0) // Position - 0xBF79 Hash - 0x2759F6FA ^0x4BDB091E
{
	if (func_593())
		return false;

	if (!func_161(hParam0, 0))
		return false;

	if (!func_257(hParam0, 1, false))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	return true;
}

BOOL func_325(Hash hParam0) // Position - 0xBFB0 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_594(hParam0);
}

int func_326(Hash hParam0, Object obParam1) // Position - 0xBFBE Hash - 0x796B4615 ^0xC6977C2F
{
	Hash interactionAnimHash;
	BOOL flag;
	Hash hash;
	BOOL flag2;

	flag2 = func_595(hParam0);

	if (func_111(hParam0, -1303648999))
		flag = true;

	if (flag2)
		if (func_596(&hash))
			if (flag)
				interactionAnimHash = func_597();
			else
				interactionAnimHash = func_598();
		else if (func_272(obParam1, 1))
			interactionAnimHash = 0;
		else if (flag)
			interactionAnimHash = func_599();
		else
			interactionAnimHash = func_600();
	else if (func_601(&hash))
		if (func_111(hash, -1303648999))
			interactionAnimHash = func_597();
		else
			interactionAnimHash = func_598();
	else if (flag)
		interactionAnimHash = func_599();
	else
		interactionAnimHash = func_600();

	if (interactionAnimHash != 0)
	{
		Global_1946054.f_2791 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_35, hParam0, interactionAnimHash, 1, obParam1, -1082130432);
		return 1;
	}

	return 0;
}

BOOL func_327(BOOL bParam0) // Position - 0xC093 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1946054 && bParam0 != false;
}

void func_328() // Position - 0xC0A4 Hash - 0xB6203BF0 ^0x217DD714
{
	func_602(&(Global_1946054.f_2776));
	func_603(32768);
	func_604(1108822547, 8, 6);
	return;
}

BOOL func_329(int iParam0, BOOL bParam1) // Position - 0xC0CB Hash - 0xACEDDC2C ^0xACEDDC2C
{
	return func_605(iParam0, false) < func_606(iParam0, bParam1);
}

void func_330(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xC0E3 Hash - 0x65C82C94 ^0x421AD701
{
	Hash hash;
	BOOL flag;

	if (!func_607(hParam0))
		return;

	hash = func_121(hParam0);
	flag = false;

	switch (hash)
	{
		case -2061583405:
			flag = func_608(hParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
	
		case -1719060085:
			flag = func_608(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case -999503751:
			flag = func_608(hParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
	
		case -525676072:
			flag = func_608(hParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
	
		case -413129408:
			flag = func_608(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case 81053684:
			flag = func_608(hParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
	}

	if (!flag)
		return;

	if (hParam0 == func_331(0))
	{
		func_609(hParam0, true);
	
		if (func_610() == 1160113249)
			func_609(func_331(-2125499975), false);
		else
			func_609(func_331(1160113249), false);
	}

	func_611();

	if (func_39(hash))
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_199(false), hParam0, 0);

	func_131(hParam0, bParam3);

	if (bParam2)
		func_612(false, false);

	return;
}

Hash func_331(int iParam0) // Position - 0xC249 Hash - 0x76CF7738 ^0x832144C4
{
	if (iParam0 == 0)
		iParam0 = func_610();

	if (iParam0 == 1160113249)
		return joaat("clothing_p3_player_three_ms1_hat_000_000");

	return joaat("clothing_item_hat_pzero_000");
}

void func_332(Hash hParam0, Hash hParam1) // Position - 0xC274 Hash - 0x4EAC6B69 ^0x4EAC6B69
{
	Hash hash;

	hash = func_121(hParam1);

	if (hash != func_121(hParam0))
		return;

	func_613(hParam0, hParam1, true);
	return;
}

int func_333(var uParam0) // Position - 0xC29B Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_614(i, 1);
	}

	return -358215195;
}

int func_334(int iParam0, int iParam1) // Position - 0xC2D6 Hash - 0x9D981F95 ^0x9D981F95
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
	
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
	
		case -1884748965:
			return 32;
	
		case -1586649372:
			return 33;
	
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHIN"):
			return 5;
	
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

BOOL func_335(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xC4A7 Hash - 0x5BE0E7EF ^0xB7318963
{
	var unk;
	int num;
	int i;

	func_615();

	if (iParam2 == 39)
	{
		unk = { func_153(hParam0, true, false) };
		iParam2 = func_334(func_333(unk.f_4), 1);
	}

	if (iParam2 < 0 || iParam2 >= 39)
		return false;

	if (func_111(hParam0, 866047851) && func_616(&(Global_1946054.f_1378)) >= 2)
		return false;

	if (func_327(32768) && iParam2 == 10 && hParam0 != Global_1946054.f_57[iParam2 /*11*/])
		func_617(func_614(iParam2, 1));

	num = 0;

	if (bParam4)
		num = 3;

	func_618(iParam2);
	func_619(iParam2, num);

	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_620(&Global_1946054.f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_620(&Global_1946054.f_1497.f_1[iParam2 /*3*/], 4, 6);
	}

	func_621(&(Global_1946054.f_1378), hParam0, iParam2, bParam4, true);

	if (hParam1 == 0)
		hParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;

	Global_1946054.f_1378.f_1[iParam2 /*3*/] = hParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_622(hParam0, iParam2, hParam1, func_62() != -1);

	if (bParam4)
		func_623(&(Global_1946054.f_1378), true, 3);
	else
		func_623(&(Global_1946054.f_1378), true, 0);

	if (bParam3)
	{
		for (i = 0; i < Global_1946054.f_2589; i = i + 1)
		{
			if (Global_1946054.f_2589.f_2[i /*2*/] >= 0 && Global_1946054.f_2589.f_2[i /*2*/] < 39)
			{
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/] = 0;
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/].f_1 = 0;
				func_604(func_614(Global_1946054.f_2589.f_2[i /*2*/], 1), 1, 6);
			}
		}
	}

	return true;
}

void func_336(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC6B4 Hash - 0x5AF76643 ^0x5AF76643
{
	func_624(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
	return;
}

int func_337(int iParam0) // Position - 0xC6CD Hash - 0x6D41B005 ^0x1854201E
{
	int num;
	int num2;

	num = 0;
	num2 = func_334(iParam0, 1);

	switch (iParam0)
	{
		case 1108822547:
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/] || Global_1946054.f_1378.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				num = 48;
			break;
	}

	return num;
}

void func_338(int iParam0) // Position - 0xC731 Hash - 0x1B3C2724 ^0xC6DA7F4E
{
	int num;

	if (func_625(iParam0, 4096))
		Global_1946054.f_858 = Global_1946054.f_858 + 1;

	if (Global_1946054.f_858 <= 0)
		return;

	num.f_1 = iParam0;
	num = 34;
	func_626(num);
	return;
}

void func_339(int iParam0, int iParam1, int iParam2) // Position - 0xC775 Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = iParam2;
	num = iParam0;
	num.f_2 = iParam1;
	func_626(num);
	return;
}

int func_340(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xC795 Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_161(hParam0, 0))
		return 0;

	guid = { func_154(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_199(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_341() // Position - 0xC7DD Hash - 0x8190E5D8 ^0x44030827
{
	return Global_1914319.f_18996.f_1;
}

BOOL func_342() // Position - 0xC7EE Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1914319.f_18996;
}

char* func_343() // Position - 0xC7FD Hash - 0xC695042A ^0x35CD1E9C
{
	switch (Global_1914319.f_18996.f_4)
	{
		case 0:
			return "SHOPS_HANDHELD_FAIL_NONE";
	
		case 1:
			return "SHOPS_HANDHELD_FAIL_NOT_READY";
	
		case 2:
			return "SHOPS_HANDHELD_FAIL_DISABLED";
	
		case 3:
			return "SHOPS_HANDHELD_FAIL_INSTANCED";
	
		case 4:
			return "SHOPS_HANDHELD_FAIL_SHOP_CL";
	
		case 5:
			return "SHOPS_HANDHELD_FAIL_NOT_OWN";
	
		case 6:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
	
		case 7:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
	
		case 8:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
	
		case 9:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
	
		case 10:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
	
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
	
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
	
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
	
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
	
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
	
		default:
		
	}

	return "";
}

BOOL func_344(eStackSize essParam0) // Position - 0xC8E7 Hash - 0x5A094C43 ^0x5A094C43
{
	return essParam0 > -1 && essParam0 < 200;
}

BOOL func_345(int iParam0) // Position - 0xC8FD Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_581(iParam0);
	return num == 3 || num == 4;
}

Ped func_346(int iParam0) // Position - 0xC91B Hash - 0xACA56E21 ^0xC662170B
{
	iParam0 = func_241(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_9;
}

int func_347(int iParam0) // Position - 0xC94E Hash - 0x597C32BE ^0xE9FB4574
{
	iParam0 = func_241(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372;
}

float func_348(int iParam0) // Position - 0xC982 Hash - 0xA0CA40C2 ^0xBDFFE947
{
	iParam0 = func_241(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1;
}

float func_349(float fParam0, Any anParam1, float fParam2) // Position - 0xC9B8 Hash - 0xC55BBAAC ^0xC55BBAAC
{
	return ((1f - fParam2) * fParam0) + (fParam2 * anParam1);
}

BOOL func_350(int iParam0) // Position - 0xC9CD Hash - 0x4D892971 ^0xAE6B238D
{
	return func_272(Global_1128974[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*59*/].f_58, iParam0);
}

BOOL func_351() // Position - 0xC9E7 Hash - 0x4B44C4C9 ^0x4B44C4C9
{
	return !func_350(2);
}

BOOL func_352(int iParam0) // Position - 0xC9F5 Hash - 0x863407EE ^0x2FA2F34D
{
	if (Global_1572887.f_12 == -1)
		return false;

	return Global_1146476.f_1 && iParam0 != false;
}

BOOL func_353() // Position - 0xCA16 Hash - 0x8A1C1656 ^0x17C26F3D
{
	if (func_27(false) && !func_627() || func_628() || Global_1935689.f_1 || func_629())
		return false;

	return true;
}

void func_354(int iParam0) // Position - 0xCA55 Hash - 0x29A8F290 ^0x5B1674A8
{
	Global_1898068.f_8 = iParam0;
	return;
}

var func_355(int iParam0, int iParam1) // Position - 0xCA65 Hash - 0x42C305C ^0x81DF2F42
{
	return func_630(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

void func_356(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, BOOL bParam17, BOOL bParam18) // Position - 0xCA83 Hash - 0xC0B30484 ^0xEDC09E5
{
	var unk;

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam16))
		return;

	iParam0 = 0;
	iParam0.f_1 = PLAYER::PLAYER_ID();
	iParam0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (!bParam17)
	{
		if (iParam0.f_15)
		{
			if (bParam18)
			{
				unk.f_12 = 255;
				unk.f_13 = 255;
				unk.f_17 = -1;
				unk = { iParam0 };
				unk.f_16 = uParam16;
				unk.f_17 = iParam0.f_2;
				func_631(&(Global_1058888.f_43130), unk);
				return;
			}
		}
	}

	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &iParam0, 16, 4, &uParam16);
	return;
}

BOOL func_357(eStackSize essParam0) // Position - 0xCB11 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return essParam0 >= 0 && essParam0 <= 150;
}

eStackSize func_358() // Position - 0xCB27 Hash - 0xA8AC36F9 ^0xA8AC36F9
{
	return Global_40.f_4283;
}

Hash func_359(Hash hParam0, int iParam1) // Position - 0xCB35 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_161(hParam0, 0))
		return 0;

	num = func_119(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_111(hParam0, 1399091007))
	{
		func_632(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

void func_360(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xCBAF Hash - 0xB6CF78C ^0x845E9244
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	char* str;
	int num3;
	int num4;
	int num5;
	char* str2;
	int num6;
	const char* str3;

	if (hParam0 == joaat("ammo_moonshinejug"))
		return;

	if (!func_161(hParam0, 0))
		return;

	if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;

	if (iParam1 == 0)
		return;

	if (!func_633())
	{
		func_634(hParam0, iParam1, bParam2, bParam4);
		return;
	}

	flag = false;
	num = MISC::ABSI(iParam1);
	TEXT_LABEL_ASSIGN_STRING(&unk, num == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);

	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
			TEXT_LABEL_ASSIGN_STRING(&unk, num == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);
		else if (bParam2 && func_384(hParam0, 2097152))
			TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	
		flag = true;
	}

	num2 = func_119(hParam0);
	num3 = 0;
	num4 = joaat("Inventory");

	if (num2 == joaat("AMMO") && hParam0 != joaat("ammo_hatchet") && hParam0 != joaat("ammo_hatchet_cleaver"))
	{
		num3 = joaat("ammo_types");
		num4 = joaat("ammo_types");
	}

	if (num2 == joaat("weapon_mod") || num2 == joaat("weapon_decoration"))
	{
		str = "ITEMTYPE_UPGRADES";
		str.f_1 = "itemtype_textures";
	}
	else if (!func_636(hParam0, &str, num4, num3, 0, joaat("ui_itemviewer")))
	{
		str = "_PLACEHOLDER";
		str.f_1 = "inventory_items";
	}

	if (MISC::GET_HASH_KEY(str) == 121560594)
		str = "DOCUMENT_MAP_GENERIC";

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return;

	num5 = joaat("COLOR_PURE_WHITE");
	str2 = "Transaction_Positive";
	num6 = 0;

	if (flag)
	{
		num5 = joaat("color_greymid");
		str2 = "Transaction_Negative";
		num6 = 1;
	}

	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(hParam0))
		if (!flag && !bParam2)
			num5 = joaat("color_rpg_special_1");
		else
			num5 = joaat("color_yellowdark");

	str3 = func_231(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, func_266(hParam0)), num), num5);

	if (iParam1 == 1 || func_111(hParam0, 1443104131) || hParam0 == joaat("consumable_cigarette_box") || hParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED") || hParam0 == joaat("consumable_cigarette_box_cheap") || hParam0 == joaat("consumable_cigarette_box_cheap_used"))
		str3 = MISC::VAR_STRING(0, func_266(hParam0));

	func_637(str3, str.f_1, MISC::GET_HASH_KEY(str), num6, num5, "Transaction_Feed_Sounds", str2, 0, true);
	return;
}

struct<2> func_361(Hash hParam0) // Position - 0xCE04 Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_161(hParam0, 0))
		return unk;

	if (func_111(hParam0, -305066475))
		if (func_62() == -1)
			if (func_111(hParam0, -537818634))
				return func_638(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_638(joaat("deadeye_items"));
	else if (func_111(hParam0, -537818634))
		return func_638(joaat("medicine_items"));

	if (func_111(hParam0, 2084895747))
		return func_638(joaat("lock_breaker_items"));

	return unk3;
}

BOOL func_362(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0xCE98 Hash - 0x17E58D7C ^0xB0311DE1
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

	unk = { func_488(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam2)
		func_639(&unk, func_440(false));

	if (!func_489(&unk, &num, &num2, false))
		return false;

	unk19.f_9 = joaat("SLOTID_NONE");

	for (i = 0; i < num2; i = i + 1)
	{
		if (num3 >= iParam1)
			break;
	
		if (!func_233(&unk19, i, num, num2))
		{
		}
		else
		{
			unk33.f_4 = unk19.f_9;
			unk33 = { unk19.f_5 };
		
			if (func_274(hParam0, &unk19, &unk33, 1, hParam3, 0, false))
				num3 = num3 + 1;
		}
	}

	func_244(num);
	num3 < iParam1;
	return true;
}

void func_363(Hash hParam0, int iParam1) // Position - 0xCF63 Hash - 0x54327D01 ^0xB51B9F1D
{
	if (!Global_1901328.f_94)
	{
		if (func_111(hParam0, 606799272))
			func_640(hParam0, iParam1);
	
		if (func_111(hParam0, -1112814642) && func_111(hParam0, -1697809989))
			func_410(hParam0, iParam1, true, false);
	}

	return;
}

void func_364(int iParam0, var uParam1, var uParam2) // Position - 0xCFB6 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_365(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xCFD2 Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_641(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_642(iParam0))
		return false;

	if (func_643(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_644(iParam0, 1) || func_645(32768))
		if (!func_644(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_646())
		return false;

	return true;
}

void func_366(int iParam0, int iParam1) // Position - 0xD074 Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

void func_367() // Position - 0xD098 Hash - 0x5516EB92 ^0x96671886
{
	Global_1911914.f_1583 = MISC::GET_GAME_TIMER();
	Global_1911914.f_1581 = 1;
	return;
}

BOOL func_368(BOOL bParam0) // Position - 0xD0B3 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1392040 && bParam0 != false;
}

void func_369(BOOL bParam0) // Position - 0xD0C4 Hash - 0xA895CE6F ^0xA895CE6F
{
	if (!func_368(bParam0))
		Global_1392040 = Global_1392040 || bParam0;

	return;
}

BOOL func_370(Hash hParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0xD0E1 Hash - 0x198FCB70 ^0x369C0AB5
{
	if (func_62() == -1)
	{
		if (func_647(hParam0) && func_648(hParam0))
		{
			func_649(hParam0, iParam1, true, &bParam2, iParam3);
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

BOOL func_371(Hash hParam0, var uParam1, int iParam2) // Position - 0xD138 Hash - 0x19531B0A ^0x19531B0A
{
	var unk;
	int num;
	int num2;

	*uParam1 = iParam2;
	func_650(hParam0, uParam1);
	unk = { func_153(hParam0, false, true) };
	num = func_554(hParam0, &unk, false, false);
	num2 = func_651(hParam0, false);

	if (num > 1 && !func_652() && num2 + iParam2 >= num)
		if (func_111(hParam0, -2051813666))
			func_150(583, true);
		else
			func_150(582, false);

	if (func_653(hParam0, &unk, *uParam1, false, false))
		if (num2 < num)
			*uParam1 = num - num2;
		else
			return false;

	return true;
}

void func_372(Hash hParam0, BOOL bParam1) // Position - 0xD1D4 Hash - 0xB66258E7 ^0x1C70D810
{
	if (bParam1)
		return;

	switch (func_259(hParam0, -949239683))
	{
		case -1565009253:
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
			Global_1935496.f_59.f_6 = 1;
			Global_1935496.f_59.f_7 = 0;
			Global_1935496.f_59.f_1 = hParam0;
			Global_1935496.f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}

	return;
}

BOOL func_373(Hash hParam0) // Position - 0xD280 Hash - 0xAC8EB620 ^0xAC8EB620
{
	if (func_62() != -1)
		return false;

	return func_374(hParam0) != 0;
}

Hash func_374(Hash hParam0) // Position - 0xD29C Hash - 0x6FAFBBB4 ^0x738A5F7C
{
	Hash collectableItemHash;
	int i;

	for (i = 0; i < func_654(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_655(collectableItemHash))
			return collectableItemHash;
	}

	return 0;
}

Hash func_375(Hash hParam0) // Position - 0xD2D8 Hash - 0xD6E12BEB ^0x67FB12E2
{
	return COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(hParam0);
}

int func_376(Hash hParam0) // Position - 0xD2E6 Hash - 0x63EE8363 ^0x22F3A4BC
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < func_654(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_375(collectableItemHash))
			if (func_257(func_655(collectableItemHash), 1, false))
				num = num + 1;
	}

	return num;
}

void func_377(Hash hParam0) // Position - 0xD333 Hash - 0x492800CC ^0x9F572505
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	func_656(48);
	func_657(false, -1);
	return;
}

int func_378(Hash hParam0) // Position - 0xD34E Hash - 0xDCB10D9D ^0xF3DC1D4F
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), hParam0);
}

Hash func_379(Hash hParam0) // Position - 0xD361 Hash - 0xDCB10D9D ^0x4B188B5C
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), hParam0);
}

BOOL func_380(int iParam0) // Position - 0xD374 Hash - 0x5FF09631 ^0x616FE32F
{
	if (func_62() != -1)
		return false;

	return func_296(Global_1835011[iParam0 /*74*/].f_1, true);
}

BOOL func_381(eStackSize essParam0) // Position - 0xD397 Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_62() != -1)
		return false;

	if (!func_344(essParam0))
		return false;

	return func_345(Global_1347702[essParam0 /*49*/].f_15);
}

int func_382() // Position - 0xD3C7 Hash - 0xA2AE820C ^0xA2AE820C
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		if (func_257(func_658(i), 1, false))
			num = num + 1;
	}

	return num;
}

void func_383(int iParam0) // Position - 0xD3FC Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12004 = Global_40.f_12004 || iParam0;
	return;
}

BOOL func_384(Hash hParam0, int iParam1) // Position - 0xD413 Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_161(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

BOOL func_385(int iParam0) // Position - 0xD432 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_659(iParam0))
		return false;

	return func_660(iParam0);
}

void func_386(int iParam0) // Position - 0xD44E Hash - 0xFDF9CB10 ^0xFDF9CB10
{
	if (!func_659(iParam0))
		return;

	func_661(iParam0);
	func_662(iParam0);
	return;
}

Hash func_387(Hash hParam0, BOOL bParam1) // Position - 0xD46F Hash - 0x27CC99BE ^0x9BD61A93
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
	
		case joaat("ammo_throwing_knives_improved"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_tomahawk"):
			hash = joaat("weapon_thrown_tomahawk");
			break;
	
		case joaat("AMMO_MOLOTOV"):
			hash = joaat("weapon_thrown_molotov");
			break;
	
		case joaat("ammo_hatchet_double_bit"):
			hash = joaat("weapon_melee_hatchet_double_bit");
			break;
	
		case joaat("ammo_throwing_knives_poison"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		default:
			break;
	}

	if (func_161(hash, 0))
		if (bParam1)
			if (func_663(hash) || func_664(hash))
				return hash;
		else
			return hash;

	return hParam0;
}

Hash func_388(Hash hParam0, BOOL bParam1) // Position - 0xD5F5 Hash - 0x68919B0 ^0x66A44A24
{
	if (!func_161(hParam0, 0))
		return 0;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return hParam0;

	!bParam1;
	return 0;
}

void func_389(Hash hParam0) // Position - 0xD621 Hash - 0x6D90E810 ^0x7EE3BF23
{
	Hash weaponUnlock;

	if (Global_1572887.f_12 != -1)
		return;

	if (!func_665(hParam0))
		return;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(weaponUnlock, true);
	return;
}

BOOL func_390(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0xD65B Hash - 0x61DE9CAE ^0x4ADCEE54
{
	var unk;
	Hash hash;
	var unk6;
	int i;
	var unk28;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	if (WEAPON::IS_WEAPON_MELEE_WEAPON(hParam0) && iParam1 > 0)
		iParam1 = 0;

	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
	{
		unk = { func_153(hParam0, false, true) };
		hash = joaat("SLOTID_WEAPON_0");
		unk6.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < 4; i = i + 1)
		{
			hash = func_666(398 + i, 1);
		
			if (func_442(hParam0, &unk, hash, false))
			{
				if (func_443(hParam0, &unk6, hash))
				{
					unk28 = { func_154(hParam0, unk, hash, false) };
					func_274(hParam0, &unk28, &unk, 1, -142743235, true, false);
					break;
				}
			}
		}
	}

	if (func_156(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return 0;
	
		func_391(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_667(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

BOOL func_391(Hash hParam0, int iParam1, Hash hParam2) // Position - 0xD7AD Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return true;

	if (!func_393(hParam0))
		return false;

	if (!func_156(false))
		return false;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, hParam0, iParam1, hParam2);
	return true;
}

BOOL func_392(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0xD7E8 Hash - 0x59CC5407 ^0xB9F9E5A1
{
	Hash weaponHash;
	var unk;
	int num;
	Hash weaponHash2;
	BOOL flag;

	weaponHash = func_388(hParam0, false);

	if (WEAPON::IS_WEAPON_VALID(weaponHash))
	{
		if (func_62() == -1)
		{
			func_389(weaponHash);
		
			if (hParam1 == 1248274121)
				func_668(weaponHash);
		}
	
		if (!func_653(hParam0, &unk, 1, false, false))
		{
			func_649(hParam0, 1, false, uParam2, hParam1);
			num = func_669(weaponHash);
		
			if (WEAPON::_IS_WEAPON_SNIPER(weaponHash))
			{
				func_390(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("weapon_fishingrod") || weaponHash == joaat("weapon_kit_binoculars"))
			{
				func_390(weaponHash, 0, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("WEAPON_LASSO"))
			{
				func_390(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash))
			{
				if (weaponHash == joaat("weapon_melee_knife_john") && !func_670())
					return false;
			
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(hParam0))
				{
				}
				else if (!func_671(weaponHash))
				{
					func_390(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
				}
				else
				{
					func_390(weaponHash, WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 4, bParam3, bParam4, 0, false, hParam1, false);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash))
			{
				weaponHash2 = func_672(Global_35, 2, false, true);
			
				if (func_665(weaponHash2) && !Global_43891 && weaponHash2 != weaponHash && !func_385(24) && bParam4)
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, weaponHash2);
			
				flag = true;
			
				if (func_665(weaponHash2) && func_385(24))
					if (!func_390(weaponHash, num, bParam3, bParam4, 3, flag, hParam1, false))
						return false;
				else if (!func_390(weaponHash, num, bParam3, bParam4, 0, flag, hParam1, false))
					return false;
			}
			else if (!func_390(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false))
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
		func_150(480, true);

	return true;
}

BOOL func_393(Hash hParam0) // Position - 0xD9F4 Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

BOOL func_394(Hash hParam0, var uParam1, Hash hParam2) // Position - 0xDA02 Hash - 0x8FE8AA03 ^0x8ABA2B4
{
	int num;
	int weaponClipSize;
	int ammo;
	int pedAmmoByType;
	Hash weaponTypeFromAmmoType;
	int num2;
	int num3;

	if (!func_393(hParam0))
		return false;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);
	pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	if (func_665(weaponTypeFromAmmoType))
		WEAPON::GET_MAX_AMMO(Global_35, &ammo, weaponTypeFromAmmoType);

	num2 = ammo - pedAmmoByType;

	if (WEAPON::IS_WEAPON_BOW(weaponTypeFromAmmoType))
		weaponClipSize = 5;
	else
		weaponClipSize = WEAPON::GET_WEAPON_CLIP_SIZE(weaponTypeFromAmmoType);

	if (*uParam1 > 0)
		num3 = *uParam1;
	else if (*uParam1 < 0)
		num3 = weaponClipSize * MISC::ABSI(*uParam1);

	if (func_257(joaat("provision_trinket_crow_beak"), 1, false) && hParam2 == -897553835)
		num3 = BUILTIN::CEIL((float)num3 * 1.1f);

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
		func_428(func_673(hParam0), func_266(hParam0), true);
		return false;
	}

	if (ammo == pedAmmoByType + num)
		if (func_62() == -1)
			if (func_296(Global_1835011[14 /*74*/].f_1, true))
				func_150(416, false);

	if (num == 0)
		return false;

	if (func_156(false))
	{
		if (func_391(hParam0, num, hParam2))
		{
			*uParam1 = num;
			return true;
		}
	}
	else
	{
		return func_433(hParam0, *uParam1, hParam2);
	}

	return false;
}

void func_395(Hash hParam0) // Position - 0xDB4B Hash - 0x4FF3DD4C ^0xAF84DD67
{
	var unk;

	if (hParam0 == joaat("provision_talisman_eagle_talon") && !func_674() || hParam0 != joaat("provision_talisman_eagle_talon"))
		if (func_675(Global_35, hParam0, &unk))
			func_130(PLAYER::PLAYER_PED_ID(), hParam0, 0, -358215195, true, true, true, false, true, true);

	switch (hParam0)
	{
		case joaat("provision_talisman_buffalo_horn"):
			Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
			func_419();
			break;
	
		case joaat("provision_talisman_bear_claw"):
			Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
			func_419();
			break;
	
		case joaat("provision_talisman_eagle_talon"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_417();
			break;
	
		case joaat("provision_talisman_raven_claw"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.2f;
			func_415();
			break;
	
		case joaat("provision_talisman_alligator_tooth"):
			Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
			func_419();
			break;
	}

	return;
}

void func_396(Hash hParam0) // Position - 0xDC52 Hash - 0xA92CE7CF ^0x8CEA2EC6
{
	switch (hParam0)
	{
		case joaat("provision_trinket_shark_tooth"):
			Global_40.f_11095.f_68 = Global_40.f_11095.f_68 + 0.1f;
			break;
	
		case joaat("provision_trinket_cat_eye"):
			Global_40.f_11095.f_70 = Global_40.f_11095.f_70 + 0.2f;
			break;
	
		case joaat("provision_trinket_turtle_shell"):
			Global_40.f_11095.f_69 = Global_40.f_11095.f_69 + 0.1f;
			func_677();
			break;
	
		case joaat("provision_trinket_fox_claw"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_417();
			break;
	
		case joaat("provision_trinket_hawk_talon"):
			Global_40.f_11095.f_64 = Global_40.f_11095.f_64 + 0.3f;
			func_676();
			break;
	
		case joaat("provision_trinket_beaver_tooth"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
			func_415();
			break;
	
		case joaat("provision_trinket_iguana_scale"):
			Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
			func_418();
			break;
	
		case joaat("provision_trinket_coyote_fang"):
			Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
			break;
	
		case joaat("provision_trinket_bison_horn"):
			Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
			func_416();
			break;
	
		case joaat("provision_trinket_lion_paw"):
			Global_40.f_11095.f_57 = Global_40.f_11095.f_57 + 0.1f;
			break;
	
		case joaat("provision_trinket_cougar_fang"):
			Global_40.f_11095.f_57 = Global_40.f_11095.f_57 + 0.1f;
			break;
	
		case joaat("provision_trinket_moose_antler"):
			Global_40.f_11095.f_55 = Global_40.f_11095.f_55 + 0.1f;
			break;
	
		case joaat("provision_trinket_owl_feather"):
			Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.15f;
			Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.15f;
			Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.15f;
			func_419();
			break;
	}

	return;
}

struct<2> func_397(int iParam0) // Position - 0xDE3D Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

void func_398(var uParam0, var uParam1, int iParam2) // Position - 0xDE4F Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

struct<2> func_399(int iParam0, int iParam1) // Position - 0xDE5F Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_400(Hash hParam0) // Position - 0xDE75 Hash - 0xF29DD96C ^0x175841E3
{
	BOOL flag;

	flag = func_111(hParam0, -2017733358);

	if (func_678() < 3)
		if (flag)
			if (func_680(func_679(hParam0), hParam0))
				func_428(79, func_266(func_679(hParam0)), true);
			else
				func_428(78, func_266(func_679(hParam0)), true);
		else
			func_428(80, func_266(func_681(hParam0)), true);

	return;
}

BOOL func_401() // Position - 0xDEE2 Hash - 0x452521BB ^0x7FA3002C
{
	if (func_682(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_682(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400) || func_682(joaat("document_arthur_high_bounty_1"), 400) || func_682(joaat("document_arthur_high_bounty_2"), 400) || func_682(joaat("document_arthur_has_poster_1"), 400) || func_682(joaat("document_arthur_has_poster_2"), 400))
		return true;

	return false;
}

int func_402(Hash hParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0xDF58 Hash - 0x44FDFBC7 ^0xD59B23EE
{
	int num;
	Hash hash;

	num = func_683(hParam0, bParam6, iParam7);

	if (!bParam1)
		func_684(num, sParam4, iParam5);

	hash = 752097756;

	if (bParam6)
		hash = -897553835;

	func_685(num, bParam1, iParam2, iParam3, hash);
	return num;
}

void func_403(Hash hParam0) // Position - 0xDF9F Hash - 0x9BA47EC0 ^0xC5DB4E3B
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_285(43, 0, 0, joaat("exotic_stage_01"), func_686(1), false, -1, false);
			func_687(1);
			break;
	
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_285(39, 0, 0, 0, 0, false, 1, false);
			func_284(39, 0, 0, 0, 0, -1, 0);
			func_289(16);
			break;
	
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_285(51, 0, 0, joaat("taxidermy_order_04"), 0, false, 4, false);
			func_284(51, 0, 0, 0, 0, -1, 0);
			func_286(8192);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_285(43, 0, 0, joaat("exotic_stage_02"), func_686(2), false, -1, false);
			func_687(2);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_285(43, 0, 0, joaat("exotic_stage_03"), func_686(4), false, -1, false);
			func_687(4);
			break;
	
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_285(49, 0, 0, 0, 0, false, 1, false);
			func_284(49, 0, 0, 0, 0, -1, 0);
			func_295(16);
			break;
	
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_285(51, 0, 0, joaat("taxidermy_order_05"), 0, false, 1, false);
			func_284(51, 0, 0, 0, 0, -1, 0);
			func_286(524288);
			break;
	
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_285(41, 0, 0, 0, 0, false, 1, false);
			func_284(41, 0, 0, 0, 0, -1, 0);
			func_292(8);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_285(43, 0, 0, joaat("exotic_stage_05"), func_686(16), false, -1, false);
			func_687(16);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_285(43, 0, 0, joaat("exotic_stage_04"), func_686(8), false, -1, false);
			func_687(8);
			break;
	}

	return;
}

void func_404(Hash hParam0) // Position - 0xE135 Hash - 0x7DB0E964 ^0xC7C463BF
{
	if (func_688() == 1)
	{
		if (func_281(39))
		{
			func_150(342, false);
		}
		else
		{
			func_150(343, false);
			func_289(1);
		}
	}

	if (func_688() >= 30)
		func_150(344, false);

	func_285(39, 0, 0, 0, 0, false, -1, false);
	func_284(39, 0, 0, func_688(), 30, 1, 0);
	return;
}

void func_405(Hash hParam0) // Position - 0xE194 Hash - 0xD7DD81BD ^0x9CB6E38C
{
	if (func_689() == 1)
	{
		if (func_281(49))
		{
			func_150(409, false);
		}
		else
		{
			func_150(410, false);
			func_295(1);
		}
	}

	if (func_689() >= 10)
		func_150(411, false);

	func_285(49, 0, 0, 0, 0, false, -1, false);
	func_284(49, 0, 0, func_689(), 10, 1, 0);
	return;
}

void func_406(Hash hParam0) // Position - 0xE1F3 Hash - 0x68B64163 ^0x7FDDC87D
{
	int num;

	switch (hParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_05"), 1);
			func_150(438, false);
			func_690(joaat("taxidermy_order_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &num, true, 0, false);
			func_285(51, 0, 0, joaat("taxidermy_order_05"), num, false, -1, false);
			func_284(51, 0, 0, num, func_573(joaat("taxidermy_order_05"), 20), 1, 0);
			func_286(32768);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_04"), 1);
			func_690(joaat("taxidermy_order_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &num, true, 0, false);
			func_285(51, 0, 0, joaat("taxidermy_order_04"), num, false, -1, false);
			func_284(51, 0, 0, num, func_573(joaat("taxidermy_order_04"), 20), 1, 0);
			func_286(512);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_03"), 1);
			func_690(joaat("taxidermy_order_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &num, true, 0, false);
			func_285(51, 0, 0, joaat("taxidermy_order_03"), num, false, -1, false);
			func_284(51, 0, 0, num, func_573(joaat("taxidermy_order_03"), 20), 1, 0);
			func_286(64);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_01"), 1);
			func_150(437, false);
			func_150(440, false);
			func_690(joaat("taxidermy_order_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &num, true, 0, false);
			func_285(51, 0, 0, joaat("taxidermy_order_01"), num, false, -1, false);
			func_284(51, 0, 0, num, func_573(joaat("taxidermy_order_01"), 20), 1, 0);
			func_286(1);
			func_691(-748969569, false, false);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_02"), 1);
			func_690(joaat("taxidermy_order_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &num, true, 0, false);
			func_285(51, 0, 0, joaat("taxidermy_order_02"), num, false, -1, false);
			func_284(51, 0, 0, num, func_573(joaat("taxidermy_order_02"), 20), 1, 0);
			func_286(8);
			break;
	
		default:
			func_150(439, false);
			break;
	}

	return;
}

void func_407() // Position - 0xE3E1 Hash - 0xC8FE42DB ^0x507D23E9
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("sp_chal_expl_root")) < 2)
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("sp_chal_expl_root"), joaat("acw_expl_rank_01_treasure"), 1);

	return;
}

void func_408(Hash hParam0, int iParam1) // Position - 0xE405 Hash - 0x51E4CC2F ^0x54D846FD
{
	int num;
	int num2;

	num2 = 0;

	if (func_62() == -1)
	{
		if (!func_281(43))
		{
			if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
				func_150(348, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
				func_150(350, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
				func_150(352, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_of_night"))
				func_150(400, false);
		}
		else if (func_111(hParam0, 412399755))
		{
			func_692(joaat("exotic_stage_01"));
		
			if (func_693() == 0)
			{
				func_657(false, 10);
				num2 = func_694(hParam0, iParam1, 1);
			
				if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
				{
					if (func_695(hParam0) < func_696(hParam0))
					{
						func_285(43, hParam0, iParam1, joaat("exotic_stage_01"), num2, false, -1, false);
						func_284(43, 0, 0, num2, 30, 1, 0);
					}
				}
			}
		}
	
		if (!func_281(44))
		{
			if (hParam0 == joaat("PROVISION_HERON_FEATHER"))
				func_150(354, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_slipper"))
				func_150(399, false);
			else if (hParam0 == joaat("provision_ro_flower_moccasin"))
				func_150(401, false);
		}
		else if (func_111(hParam0, 709057512))
		{
			func_692(joaat("exotic_stage_02"));
		
			if (func_693() == 1)
			{
				func_657(false, 10);
				num2 = func_694(hParam0, iParam1, 2);
			
				if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
				{
					if (func_695(hParam0) < func_696(hParam0))
					{
						func_285(43, hParam0, iParam1, joaat("exotic_stage_02"), num2, false, -1, false);
						func_284(43, 0, 0, num2, 37, 1, 0);
					}
				}
			}
		}
	
		if (!func_281(45))
		{
			if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				func_150(359, false);
			else if (hParam0 == joaat("provision_ro_flower_acunas_star"))
				func_150(394, false);
			else if (hParam0 == joaat("provision_ro_flower_cigar"))
				func_150(395, false);
			else if (hParam0 == joaat("provision_ro_flower_ghost"))
				func_150(398, false);
		}
		else if (func_111(hParam0, -1478961327))
		{
			func_692(joaat("exotic_stage_03"));
		
			if (func_693() == 2)
			{
				func_657(false, 10);
				num2 = func_694(hParam0, iParam1, 4);
			
				if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!(func_697(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
					{
						func_698(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
						func_656(48);
					}
				
					if (func_695(hParam0) < func_696(hParam0))
					{
						func_285(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_284(43, 0, 0, num2, 40, 1, 0);
					}
				}
				else if (hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
				{
					if (func_695(hParam0) < func_696(hParam0))
					{
						func_285(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_284(43, 0, 0, num2, 40, 1, 0);
					}
				}
			}
		}
	
		if (!func_281(46))
		{
			if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
				func_150(356, false);
			else if (hParam0 == joaat("provision_ro_flower_night_scented"))
				func_150(402, false);
			else if (hParam0 == joaat("provision_ro_flower_rat_tail"))
				func_150(404, false);
			else if (hParam0 == joaat("provision_ro_flower_spider"))
				func_150(406, false);
		}
		else if (func_111(hParam0, -1238404098))
		{
			func_692(joaat("exotic_stage_04"));
		
			if (func_693() == 3)
			{
				func_657(false, 10);
				num2 = func_694(hParam0, iParam1, 8);
			
				if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
				{
					if (func_695(hParam0) < func_696(hParam0))
					{
						func_285(43, hParam0, iParam1, joaat("exotic_stage_04"), num2, false, -1, false);
						func_284(43, 0, 0, num2, 50, 1, 0);
					}
				}
			}
		}
	
		if (!func_281(47))
		{
			if (hParam0 == joaat("provision_ro_flower_clamshell"))
				func_150(396, false);
			else if (hParam0 == joaat("provision_ro_flower_dragons"))
				func_150(397, false);
			else if (hParam0 == joaat("provision_ro_flower_sparrows"))
				func_150(405, false);
			else if (hParam0 == joaat("provision_ro_flower_queens"))
				func_150(403, false);
		}
		else if (func_111(hParam0, 1160548794))
		{
			func_692(joaat("exotic_stage_05"));
		
			if (func_693() == 4)
			{
				func_657(false, 10);
				num2 = func_694(hParam0, iParam1, 16);
			
				if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
				{
					if (func_695(hParam0) < func_696(hParam0))
					{
						func_285(43, hParam0, iParam1, joaat("exotic_stage_05"), num2, false, -1, false);
						func_284(43, 0, 0, num2, 25, 1, 0);
					}
				}
			}
		}
	}

	return;
}

void func_409(Hash hParam0) // Position - 0xE91E Hash - 0x5FDB9C87 ^0xFFDE9D68
{
	int num;

	if (hParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!(func_697(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
		{
			func_698(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
			func_656(48);
		}
	}

	return;
}

void func_410(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xE95E Hash - 0x306960CD ^0xBFFBAE09
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < 5; i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("taxidermy"), joaat("taxidermy_order"));
	
		if (func_257(func_699(collectableItemHash, 10), 1, false))
			if (bParam2)
				func_700(hParam0, collectableItemHash, num, iParam1, bParam2);
			else
				func_701(hParam0, collectableItemHash, bParam3);
	}

	return;
}

void func_411(Hash hParam0, Hash hParam1, Entity eParam2) // Position - 0xE9BE Hash - 0x2973E533 ^0x2C76667A
{
	int num;

	if (func_62() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(eParam2))
		{
			num = MISC::_0x6F02B5E50511721E(eParam2);
		
			if (num < -1)
			{
			}
			else if (num >= 0)
			{
				func_402(0, false, 1065353216, 1, 0, 0, hParam1 == -897553835, num);
				return;
			}
		}
	}

	switch (hParam0)
	{
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_402(joaat("REWARD_TAXIDERMY_STAGE_2"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_billstack"):
			func_402(joaat("reward_billstack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_RARE_FISH"):
			func_402(joaat("REWARD_RARE_FISH"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_BILLFOLD_SML"):
			func_402(joaat("reward_billfold_sml"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINCUP_LG"):
			func_402(joaat("REWARD_COINCUP_LG"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_402(joaat("REWARD_TAXIDERMY_STAGE_4"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case -1394529493:
			func_402(joaat("REWARD_FIVE_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TEN_DOLLARS"):
			func_402(joaat("REWARD_TEN_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_702())
				func_402(joaat("REWARD_MONEYSTACK_LARGE"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_moneystack"):
			func_402(joaat("reward_moneystack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_ALL"):
			func_402(joaat("REWARD_CARD_SET_ALL"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_CARD_SET_RARE"):
			func_402(joaat("REWARD_CARD_SET_RARE"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_402(joaat("REWARD_TAXIDERMY_STAGE_3"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_COINCUP_SM"):
			func_402(joaat("REWARD_COINCUP_SM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_402(joaat("REWARD_TAXIDERMY_STAGE_1"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_moneyclip"):
			func_402(joaat("reward_moneyclip"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_coinstack"):
			func_402(joaat("REWARD_COINS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_one_dollar"):
			func_402(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINSACK"):
			func_402(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_402(joaat("REWARD_CALLOWAY_LETTER"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coin"):
			func_402(joaat("reward_coin"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_BILLFOLD"):
			func_402(joaat("reward_billfold"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_COMMON"):
			func_402(joaat("REWARD_CARD_SET_COMMON"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coinpurse"):
			func_402(joaat("reward_coinpurse"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_402(joaat("REWARD_TAXIDERMY_STAGE_5"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("currency_cash"):
			func_402(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	}

	return;
}

void func_412(Hash hParam0) // Position - 0xED96 Hash - 0x7B1EFD1 ^0x61F0FB99
{
	if (func_281(41))
		func_150(363, false);
	else
		func_150(362, false);

	switch (hParam0)
	{
		case joaat("provision_fish_chain_pickerel_legendary"):
			func_703(joaat("legendary_fish_02"));
			func_704(joaat("legendary_fishing_spot_02"));
			func_705(joaat("legendary_fishing_spot_02"));
			func_657(false, 10);
			break;
	
		case joaat("provision_fish_muskie_legendary"):
			func_703(joaat("legendary_fish_06"));
			func_704(joaat("legendary_fishing_spot_06"));
			func_705(joaat("legendary_fishing_spot_06"));
			func_657(false, 10);
			break;
	
		case joaat("provision_fish_bluegill_legendary"):
			func_703(joaat("legendary_fish_13"));
			func_704(joaat("legendary_fishing_spot_13"));
			func_705(joaat("legendary_fishing_spot_13"));
			func_657(false, 10);
			break;
	
		case joaat("provision_fish_lake_sturgeon_legendary"):
			func_703(joaat("legendary_fish_03"));
			func_704(joaat("legendary_fishing_spot_03"));
			func_705(joaat("legendary_fishing_spot_03"));
			func_657(false, 10);
			break;
	
		case joaat("provision_fish_redfin_pickerel_legendary"):
			func_703(joaat("legendary_fish_08"));
			func_704(joaat("legendary_fishing_spot_08"));
			func_705(joaat("legendary_fishing_spot_08"));
			func_657(false, 10);
			break;
	
		case joaat("provision_fish_steelhead_trout_legendary"):
			func_703(joaat("legendary_fish_12"));
			func_704(joaat("legendary_fishing_spot_12"));
			func_705(joaat("legendary_fishing_spot_12"));
			func_657(false, 10);
			break;
	
		case joaat("provision_fish_longnose_gar_legendary"):
			func_703(joaat("legendary_fish_05"));
			func_704(joaat("legendary_fishing_spot_05"));
			func_705(joaat("legendary_fishing_spot_05"));
			func_657(false, 10);
			break;
	
		case joaat("provision_fish_largemouth_bass_legendary"):
			func_703(joaat("legendary_fish_04"));
			func_704(joaat("legendary_fishing_spot_04"));
			func_705(joaat("legendary_fishing_spot_04"));
			func_657(false, 10);
			break;
	
		case joaat("provision_fish_northern_pike_legendary"):
			func_703(joaat("legendary_fish_14"));
			func_704(joaat("legendary_fishing_spot_14"));
			func_705(joaat("legendary_fishing_spot_14"));
			break;
	
		case joaat("provision_fish_rock_bass_legendary"):
			func_703(joaat("legendary_fish_09"));
			func_704(joaat("legendary_fishing_spot_09"));
			func_705(joaat("legendary_fishing_spot_09"));
			func_657(false, 10);
			break;
	
		case joaat("provision_fish_perch_legendary"):
			func_703(joaat("legendary_fish_07"));
			func_704(joaat("legendary_fishing_spot_07"));
			func_705(joaat("legendary_fishing_spot_07"));
			func_657(false, 10);
			break;
	
		case joaat("provision_fish_bullhead_catfish_legendary"):
			func_703(joaat("legendary_fish_01"));
			func_704(joaat("legendary_fishing_spot_01"));
			func_705(joaat("legendary_fishing_spot_01"));
			func_657(false, 10);
			break;
	
		case joaat("provision_fish_sockeye_salmon_legendary"):
			func_703(joaat("legendary_fish_11"));
			func_704(joaat("legendary_fishing_spot_11"));
			func_705(joaat("legendary_fishing_spot_11"));
			func_657(false, 10);
			break;
	
		case joaat("provision_fish_smallmouth_bass_legendary"):
			func_703(joaat("legendary_fish_10"));
			func_704(joaat("legendary_fishing_spot_10"));
			func_705(joaat("legendary_fishing_spot_10"));
			func_657(false, 10);
			break;
	}

	return;
}

void func_413(Hash hParam0, var uParam1) // Position - 0xF015 Hash - 0xC6F24F1D ^0xC6F24F1D
{
	var unk;

	func_632(hParam0, uParam1, &unk);
	return;
}

BOOL func_414(var uParam0, BOOL bParam1) // Position - 0xF027 Hash - 0x2DC8D50 ^0x79739B7E
{
	int num;
	int num2;
	int i;
	var unk;
	BOOL flag;
	Hash hash;
	Hash hash2;

	unk.f_9 = joaat("SLOTID_NONE");
	flag = false;
	*uParam0 = 0;
	hash = func_672(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, true, false);
	hash2 = func_672(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, true, false);

	if (func_245("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_233(&unk, i, num, num2))
			{
				if (WEAPON::_IS_WEAPON_ONE_HANDED(unk.f_4))
				{
					if (!bParam1)
					{
						if (unk.f_4 == hash || unk.f_4 == hash2)
						{
						}
						else if (!flag)
						{
							*uParam0 = unk.f_4;
							flag = true;
						}
					}
				
					if (!flag)
					{
						*uParam0 = unk.f_4;
						flag = true;
					}
				}
			}
		}
	
		func_244(num);
	
		if (*uParam0 != 0)
			return true;
	}

	return false;
}

void func_415() // Position - 0xF0F0 Hash - 0x774616D ^0xF8A3E77D
{
	PLAYER::_SET_WEAPON_DEGRADATION_MODIFIER(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_60);
	return;
}

void func_416() // Position - 0xF10A Hash - 0xC65F3A3C ^0xD750E3C1
{
	float num;
	float num2;

	num = Global_40.f_11095.f_62;
	num2 = Global_40.f_11095.f_62 + Global_40.f_11095.f_61;
	PLAYER::_SET_PLAYER_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f - num, 1f - num2);
	return;
}

void func_417() // Position - 0xF13F Hash - 0xD548C250 ^0x2F524E3B
{
	PLAYER::_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(PLAYER::PLAYER_ID(), 1f / (1f + Global_40.f_11095.f_58));
	return;
}

void func_418() // Position - 0xF15B Hash - 0x774616D ^0x91C5BAF4
{
	PLAYER::_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_63);
	return;
}

void func_419() // Position - 0xF175 Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_706();
	func_707();
	func_708();
	return;
}

void func_420(int iParam0, int iParam1, BOOL bParam2) // Position - 0xF18C Hash - 0x968DA278 ^0x83E70881
{
	Hash hash;
	char* str;
	char* str2;
	char* str3;
	Vector3 vector;

	switch (iParam0)
	{
		case -220219788:
			str = "COL_TH_OBJ";
			str3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_poisonous_trail");
			break;
	
		case 6410548:
			str3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_landmarks_of_riches");
			break;
	
		case 218622660:
			str3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_tresor_des_morts");
			break;
	
		case 390004462:
			str3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_elemental_trail");
			break;
	
		case 499813453:
			str = "COL_TH_OBJ";
			str3 = "COL_TH_SUB_JACK_HALL";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_jack_hall");
			break;
	
		case 666607663:
			str = "COL_TH_OBJ";
			str3 = "COL_TH_SUB_HIGH_STAKES";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_high_stakes");
			break;
	}

	switch (iParam1)
	{
		case joaat("treasure_hunt_loot_12"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
	
		case joaat("treasure_hunt_loot_13"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
	
		case joaat("treasure_hunt_loot_02"):
			str2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
	
		case joaat("treasure_hunt_loot_18"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
	
		case joaat("treasure_hunt_loot_03"):
			str2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
	
		case joaat("treasure_hunt_loot_19"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
	
		case joaat("treasure_hunt_loot_04"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
	
		case joaat("treasure_hunt_loot_16"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
	
		case joaat("treasure_hunt_loot_17"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
	
		case joaat("treasure_hunt_loot_05"):
			str2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
	
		case joaat("treasure_hunt_loot_10"):
			str2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
	
		case joaat("treasure_hunt_loot_07"):
			str2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
	
		case joaat("treasure_hunt_loot_21"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
	
		case joaat("treasure_hunt_loot_01"):
			str2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
	
		case joaat("treasure_hunt_loot_11"):
			str2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
	
		case joaat("treasure_hunt_loot_06"):
			str2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
	
		case joaat("treasure_hunt_loot_24"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	
		case joaat("treasure_hunt_loot_20"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
	
		case joaat("treasure_hunt_loot_09"):
			str2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
	
		case joaat("treasure_hunt_loot_23"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
	
		case joaat("treasure_hunt_loot_22"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
	
		case joaat("treasure_hunt_loot_08"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
	
		case joaat("treasure_hunt_loot_14"):
			str = "COL_TH_OBJ_RDL";
			str2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
	
		case joaat("treasure_hunt_loot_15"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
	}

	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hash))
		UILOG::_UILOG_REMOVE_ENTRY(3, hash);

	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hash))
		UILOG::_UILOG_ADD_ENTRY_HASH(3, hash, vector, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(str2), 0);

	if (bParam2)
	{
		switch (iParam0)
		{
			case -220219788:
				str = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
		
			case 6410548:
				str = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		
			case 218622660:
				str = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
		
			case 390004462:
				str = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
		
			case 499813453:
				str = "COL_TH_JACK_HALL_COMPLETE";
				break;
		
			case 666607663:
				str = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
		}
	}

	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hash, MISC::GET_HASH_KEY(str), str, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, hash, true);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, hash, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, hash, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, hash, MISC::VAR_STRING(2, str3));
	return;
}

void func_421(int iParam0, BOOL bParam1) // Position - 0xF564 Hash - 0x922C415B ^0x6B3B0508
{
	Hash hash;
	char* str;
	char* str2;
	char* str3;

	switch (iParam0)
	{
		case -220219788:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_POISONOUS_TRAIL";
			hash = joaat("col_th_sub_poisonous_trail");
			break;
	
		case 6410548:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			hash = joaat("col_th_sub_landmarks_of_riches");
			break;
	
		case 218622660:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			hash = joaat("col_th_sub_tresor_des_morts");
			break;
	
		case 390004462:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			hash = joaat("col_th_sub_elemental_trail");
			break;
	
		case 499813453:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_JACK_HALL";
			hash = joaat("col_th_sub_jack_hall");
			break;
	
		case 666607663:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_HIGH_STAKES";
			hash = joaat("col_th_sub_high_stakes");
			break;
	}

	str3 = "COL_CTX_PLAYER_LOG";

	if (bParam1)
		str = "MISSION_COMPLETE";

	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	func_570(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	return;
}

void func_422(int iParam0) // Position - 0xF67B Hash - 0x25D46568 ^0x354A75AA
{
	Global_40.f_12004.f_7 = Global_40.f_12004.f_7 || iParam0;
	return;
}

void func_423(int iParam0) // Position - 0xF696 Hash - 0x25D46568 ^0x1D3325E9
{
	Global_40.f_12004.f_8 = Global_40.f_12004.f_8 || iParam0;
	return;
}

void func_424(int iParam0) // Position - 0xF6B1 Hash - 0x25D46568 ^0x2B49A91A
{
	Global_40.f_12004.f_9 = Global_40.f_12004.f_9 || iParam0;
	return;
}

void func_425(int iParam0) // Position - 0xF6CC Hash - 0x25D46568 ^0x71AC48D1
{
	Global_40.f_12004.f_10 = Global_40.f_12004.f_10 || iParam0;
	return;
}

void func_426(int iParam0) // Position - 0xF6E7 Hash - 0x25D46568 ^0xFA2D4760
{
	Global_40.f_12004.f_11 = Global_40.f_12004.f_11 || iParam0;
	return;
}

void func_427(int iParam0) // Position - 0xF702 Hash - 0x25D46568 ^0x2140FCBF
{
	Global_40.f_12004.f_12 = Global_40.f_12004.f_12 || iParam0;
	return;
}

void func_428(int iParam0, eBlipSprite ebsParam1, BOOL bParam2) // Position - 0xF71D Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_364(iParam0, &num, &num2);

	if (!func_365(iParam0, num, num2, bParam2))
		return;

	if (!func_644(iParam0, 1024))
		return;

	func_366(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	return;
}

void func_429(int iParam0, eBlipSprite ebsParam1, BOOL bParam2, BOOL bParam3) // Position - 0xF77D Hash - 0x692A8F54 ^0x2BADE95C
{
	int num;
	int num2;

	func_364(iParam0, &num, &num2);

	if (!func_365(iParam0, num, num2, bParam2))
		return;

	if (!func_644(iParam0, 1024))
		return;

	func_366(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;

	if (!bParam3)
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	else
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;

	return;
}

Hash func_430() // Position - 0xF7F8 Hash - 0xB996E1A6 ^0x8FBE5D65
{
	int numFound;
	Hash collectableItemHash;
	int i;
	int num;
	int endRange;
	int randomIntInRange;

	numFound = COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), 0);

	if (numFound == func_654())
		return func_431();

	endRange = func_654() - numFound;
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);

	for (i = 0; i < func_654(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (!func_709(collectableItemHash))
		{
			if (randomIntInRange == num)
				return func_655(collectableItemHash);
		
			num = num + 1;
		}
	}

	return 0;
}

Hash func_431() // Position - 0xF872 Hash - 0x354121B4 ^0x6B7FEC83
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, func_654());
	return func_655(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(randomIntInRange, joaat("CIGARETTE_CARDS"), 0));
}

void func_432(var uParam0) // Position - 0xF895 Hash - 0x26E9B20B ^0x108E1842
{
	switch (*uParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = joaat("consumable_cigarette_box");
			break;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
			*uParam0 = joaat("consumable_cocaine_chewing_gum");
			break;
	
		case joaat("consumable_chewing_tobacco_used"):
			*uParam0 = joaat("consumable_chewing_tobacco");
			break;
	
		case joaat("consumable_cigarette_box_cheap_used"):
			*uParam0 = joaat("consumable_cigarette_box_cheap");
			break;
	}

	return;
}

BOOL func_433(Hash hParam0, int iParam1, Hash hParam2) // Position - 0xF8EA Hash - 0x1EF65EF0 ^0x1EF65EF0
{
	var unk;
	var unk6;

	if (!func_161(hParam0, 0))
		return 0;

	if (iParam1 < 1)
		return 0;

	unk = { func_153(hParam0, false, true) };
	unk6 = { func_154(hParam0, unk, unk.f_4, false) };
	return func_710(hParam0, &unk6, &unk, iParam1, hParam2, false);
}

void func_434(Hash hParam0) // Position - 0xF939 Hash - 0x90E372CB ^0xEE55522E
{
	eStackSize stackSize;
	Hash hash;
	Hash hash2;

	if (func_62() != -1)
		return;

	switch (func_121(hParam0))
	{
		case -2061583405:
			if (hParam0 == joaat("clothing_item_hat_pzero_000") || hParam0 == joaat("clothing_p3_player_three_ms1_hat_000_000"))
				func_127(32, hParam0, 0, 0, false);
			break;
	
		case -999503751:
			stackSize = func_126(hParam0);
		
			if (func_588(stackSize))
				func_711(stackSize, stackSize >= 0 && stackSize <= 5, true);
			else
				func_127(30, hParam0, 0, 0, false);
		
			if (func_610() == -2125499975 || func_610() == -449205311)
			{
				switch (hParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_127(32, hParam0, 0, 0, false);
						break;
				}
			}
			else if (func_610() == 1160113249)
			{
				switch (hParam0)
				{
					case -361635024:
						func_127(32, hParam0, 0, 0, false);
						break;
				}
			}
			break;
	
		case -525676072:
			if (!func_329(-525676072, false))
				if (func_712(-525676072, &hash))
					func_127(33, hash, 0, 0, false);
		
			func_127(32, hParam0, 0, 0, false);
			break;
	
		case 81053684:
			if (hParam0 == joaat("kit_bandana") && func_605(81053684, false) <= 0)
				func_127(32, hParam0, 0, 0, false);
			break;
	}

	if (hParam0 == joaat("clothing_sp_offhand_000") || hParam0 == -1515874150 || hParam0 == joaat("upgrade_offhand_holster"))
	{
		if (!func_713(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
			func_130(Global_35, hParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
	
		func_386(24);
	
		if (func_414(&hash2, false))
			func_390(hash2, 0, false, true, 3, false, 752097756, false);
	}

	return;
}

void func_435(Hash hParam0) // Position - 0xFB0B Hash - 0xCA585644 ^0x516CBCE8
{
	if (func_111(hParam0, 943695443))
		func_714(0, hParam0);
	else if (func_111(hParam0, -2096528786))
		func_714(1, hParam0);
	else if (func_111(hParam0, -1094167013))
		func_714(2, hParam0);
	else if (func_111(hParam0, 1936654645))
		func_714(3, hParam0);
	else if (func_111(hParam0, 1306489306))
		func_714(4, hParam0);
	else if (func_111(hParam0, 435762317))
		func_714(5, hParam0);
	else if (func_111(hParam0, 1259363210))
		func_714(6, hParam0);
	else if (func_111(hParam0, 881398259))
		func_714(7, hParam0);
	else if (func_111(hParam0, -541549214))
		func_714(8, hParam0);
	else if (func_111(hParam0, 130796156))
		func_714(-1, hParam0);

	return;
}

int func_436(Hash hParam0, int iParam1) // Position - 0xFC01 Hash - 0xFACD027 ^0xBE1FDD6
{
	var unk;
	var unk5;

	unk5.f_1 = 10;
	func_715(&unk5, joaat("LOOT_TYPE_NORMAL"));
	return func_716(hParam0, &unk5, &unk, iParam1);
}

void func_437(Hash hParam0) // Position - 0xFC2A Hash - 0x3BD36909 ^0x17029712
{
	switch (hParam0)
	{
		case joaat("provision_bird_feather_flight"):
			if (func_62() == -1)
				if (func_296(Global_1835011[4 /*74*/].f_1, true))
					func_150(109, true);
			break;
	}

	return;
}

void func_438(Hash hParam0, int iParam1) // Position - 0xFC63 Hash - 0x3053C451 ^0x7EBADDE5
{
	char* str;

	str = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_717(0));
	func_637(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", iParam1, str), "inventory_items", func_719(hParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

struct<4> func_439(BOOL bParam0) // Position - 0xFCA3 Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_154(joaat("character"), func_720(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> func_440(BOOL bParam0) // Position - 0xFCBF Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_199(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_154(923904168, func_439(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_154(923904168, func_439(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_154(923904168, func_439(bParam0), -740156546, false);
}

BOOL func_441(Hash hParam0, BOOL bParam1) // Position - 0xFD54 Hash - 0x62864AB ^0xBC339691
{
	if (func_121(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_385(24);
		else
			return true;

	return false;
}

BOOL func_442(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0xFD8D Hash - 0x4285A587 ^0x4285A587
{
	return func_340(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_443(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0xFDA5 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_721(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_444(BOOL bParam0) // Position - 0xFDC6 Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_199(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_154(271701509, func_439(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_154(271701509, func_439(bParam0), 12999093, false);
}

BOOL func_445(Hash hParam0, Hash hParam1) // Position - 0xFE2A Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_121(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_446(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0xFE89 Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_199(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

int func_447(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5) // Position - 0xFEB9 Hash - 0x4C6CAF1 ^0xEE857D47
{
	int num;
	var unk;
	int num2;
	var unk15;
	var unk44;
	var unk62;

	num = -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return num;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_446(uParam0, &unk, true, false))
		return num;

	if (unk.f_10 == iParam4)
		return num;

	num2 = func_119(unk.f_4);

	if (num2 == joaat("HORSE"))
	{
		unk15 = { func_722(uParam0, true) };
		unk15.f_10 = iParam4;
		num = func_723(joaat("UPDATE"), &unk15, bParam5);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("CLOTHING"))
	{
		unk44 = { func_724(uParam0, true) };
		unk44.f_10 = iParam4;
		num = func_725(joaat("UPDATE"), &unk44, bParam5);
	
		if (num == -1)
			return num;
	}
	else
	{
		unk62 = { func_726(&unk) };
		unk62.f_10 = iParam4;
		num = func_727(joaat("UPDATE"), &unk62, bParam5);
	
		if (num == -1)
			return num;
	}

	return num;
}

BOOL func_448() // Position - 0xFFB0 Hash - 0x79BF13D1 ^0xA856906C
{
	if (Global_1935689.f_9445 != Global_1935689.f_19.f_203 - 1 || func_166(func_165(0), Global_1935689.f_9440, false) > 0 || Global_1935689.f_9445 == 15)
		return true;

	return false;
}

int func_449(Hash hParam0, int iParam1, Hash hParam2, int iParam3) // Position - 0xFFFB Hash - 0x19A1917A ^0x160C1647
{
	var unk;
	int i;
	int num;

	unk = 15;
	PED::_0xB29C553BA582D09E(&unk, hParam0, iParam1, func_224(hParam2));

	for (i = 0; i < 15; i = i + 1)
	{
		if (func_161(unk[i], 0) && !func_111(unk[i], 1286414894) && !(unk[i] == hParam2))
		{
			func_152(unk[i], 1, false, false, false, 752097756, 0, 0, 0, false);
		
			if (iParam3 != 0)
				if (iParam3 == unk[i])
					num = num + 1;
			else
				num = num + 1;
		}
	}

	func_157(func_156(false), true, 0);
	return num;
}

struct<10> func_450(int iParam0, int iParam1, int iParam2, int iParam3, Hash hParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x100A9 Hash - 0x440EE211 ^0xAE2816F9
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

	if (hParam4 != 0)
		num.f_4 = hParam4;

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

BOOL func_451(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int* piParam11, int iParam12) // Position - 0x1017D Hash - 0xB0933807 ^0x5CBA43FF
{
	*uParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, piParam11, iParam12);

	if (*uParam10 >= 0)
		return true;

	return false;
}

Hash func_452(int iParam0, int iParam1) // Position - 0x1019E Hash - 0x3644D28E ^0x6DB2088F
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

int func_453(int iParam0) // Position - 0x101E1 Hash - 0x6B3C6310 ^0x9A4DF434
{
	if (iParam0 < 0)
		return 0;

	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

void func_454(BOOL bParam0) // Position - 0x10202 Hash - 0x210BBB81 ^0x210BBB81
{
	if (func_368(bParam0))
		Global_1392040 = Global_1392040 - Global_1392040 && bParam0;

	return;
}

int func_455(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, Hash hParam4) // Position - 0x10223 Hash - 0x423274ED ^0x50A2C4A6
{
	Ped ped;

	iParam1 = func_728(PLAYER::PLAYER_PED_ID(), hParam0, iParam1, bParam2);

	if (iParam1 <= 0)
		return iParam1;

	ped = func_165(0);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		func_456(&ped, hParam0, &iParam1, bParam3, hParam4);

	return iParam1;
}

int func_456(var uParam0, Hash hParam1, var uParam2, BOOL bParam3, Hash hParam4) // Position - 0x10267 Hash - 0x69EE725C ^0x4869D6F1
{
	int inventoryIdFromPed;
	int num;
	var statId;
	int num2;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return 0;

	inventoryIdFromPed = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(*uParam0);
	num = func_462(inventoryIdFromPed, hParam1);

	if (func_729(*uParam0, hParam1, *uParam2, bParam3, hParam4))
	{
		statId = { func_361(hParam1) };
	
		if (STATS::STAT_ID_IS_VALID(&statId))
			STATS::_STAT_ID_DECREMENT_INT(&statId, *uParam2);
	
		if (func_730(hParam1))
		{
			func_731(*uParam0, hParam1, *uParam2);
		}
		else
		{
			func_731(*uParam0, hParam1, *uParam2);
			func_728(*uParam0, hParam1, *uParam2, true);
		}
	
		num2 = num - func_462(inventoryIdFromPed, hParam1);
		*uParam2 = *uParam2 - num2;
		return 1;
	}

	return 0;
}

int func_457(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x1030F Hash - 0x5AC5E89C ^0x5AC5E89C
{
	int num;
	int num2;
	int num3;

	num = func_264(hParam0, false, false);

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
		if (!func_149(hParam0, num2, bParam2, hParam3, false))
			return 0;

	if (num3 > 0)
	{
		if (!func_732(hParam0, num3, bParam2, hParam3))
			return 0;
	
		if (!bParam2)
			func_123("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, true);
	}

	return 1;
}

BOOL func_458(BOOL bParam0) // Position - 0x10386 Hash - 0x96106777 ^0x8FA2F1AF
{
	Ped lastMount;

	if (func_62() == -1)
	{
		if (Global_1914319.f_17370 || bParam0 || Global_1914319.f_16855 == 2)
		{
			lastMount = PED::_GET_LAST_MOUNT(Global_35);
		
			if (lastMount != func_85(7))
				return true;
		}
		else if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			lastMount = PED::GET_MOUNT(Global_35);
		
			if (lastMount != func_85(7))
				return true;
		}
	}
	else
	{
		lastMount = PED::_GET_LAST_MOUNT(func_459());
	
		if (lastMount != PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX()))
			return true;
	}

	return false;
}

Ped func_459() // Position - 0x10411 Hash - 0x14A4F660 ^0xC2F042AC
{
	return PLAYER::GET_PLAYER_PED(255);
}

BOOL func_460() // Position - 0x1041F Hash - 0x41DEC386 ^0x41DEC386
{
	if (func_272(Global_1935689.f_9436, 1) || func_272(Global_1935689.f_9436, 2) || func_272(Global_1935689.f_9436, 4))
		return true;

	return false;
}

int func_461(Hash hParam0, BOOL bParam1) // Position - 0x1045F Hash - 0xDC5E36FA ^0x81D9138B
{
	Ped ped;
	int num;

	num = func_264(hParam0, bParam1, false);

	if (func_272(Global_1935689.f_9436, 1))
	{
		ped = func_85(func_241(0));
		num = num + func_462(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(ped), hParam0);
	}

	if (func_272(Global_1935689.f_9436, 2))
	{
		ped = func_85(func_241(1));
		num = num + func_462(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(ped), hParam0);
	}

	if (func_272(Global_1935689.f_9436, 4))
	{
		ped = func_85(func_241(6));
		num = num + func_462(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(ped), hParam0);
	}

	return num;
}

int func_462(int iParam0, Hash hParam1) // Position - 0x104F5 Hash - 0x9ED796B6 ^0xF436F83
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_161(hParam1, 0))
		return 0;

	guid = { func_733(iParam0, hParam1) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_463(Ped pedParam0, int iParam1) // Position - 0x10533 Hash - 0x25D0971D ^0xF7D4E234
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

BOOL func_464() // Position - 0x10572 Hash - 0x8FB36F20 ^0x8FB36F20
{
	return Global_1894899 & 4 != 0;
}

BOOL func_465() // Position - 0x10582 Hash - 0x340E4DFD ^0xEE72B432
{
	return func_734(512);
}

BOOL func_466(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x10591 Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_735(bParam1, bParam2, bParam3);

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

BOOL func_467(int iParam0, int iParam1) // Position - 0x106C6 Hash - 0x718DD1EF ^0xD9260236
{
	return iParam0->f_2 && iParam1 != false;
}

BOOL func_468() // Position - 0x106D7 Hash - 0x8650DF77 ^0x8650DF77
{
	return Global_1310750.f_16077 != 0;
}

BOOL func_469(Hash hParam0) // Position - 0x106E8 Hash - 0xDF6FE81 ^0xAC897192
{
	int i;

	i = 0;

	for (i = 0; i < Global_1934603.f_161; i = i + 1)
	{
		if (hParam0 == MISC::GET_HASH_KEY(&(Global_1934603[i /*16*/].f_10)))
			return true;
	}

	return false;
}

BOOL func_470(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x10722 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_736())
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
		num = func_737(Global_1898164.f_1[0 /*5*/]);
	
		if (func_344(num) && func_738(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_568(Global_1898164.f_1[0 /*5*/]))
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

BOOL func_471(int iParam0) // Position - 0x10926 Hash - 0xC67CC87B ^0x695B9936
{
	return Global_1914296.f_22 && iParam0 != false;
}

int func_472() // Position - 0x10939 Hash - 0x4228A1C2 ^0xB47FB21D
{
	return Global_1897952.f_41;
}

BOOL func_473(int iParam0) // Position - 0x10947 Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_9419 && iParam0 != false;
}

BOOL func_474(eStackSize essParam0) // Position - 0x1095A Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_357(essParam0))
		return false;

	return func_739(essParam0, 33554432);
}

BOOL func_475() // Position - 0x1097B Hash - 0x378FC94F ^0x378FC94F
{
	return Global_1894899 & true != 0 && func_144() != -1;
}

int func_476(eStackSize essParam0) // Position - 0x10996 Hash - 0xE4DA9E55 ^0xA7262997
{
	if (!func_357(essParam0))
		return 0;

	return Global_1888801[essParam0 /*35*/].f_20;
}

BOOL func_477(eStackSize essParam0) // Position - 0x109B6 Hash - 0xF30C3D47 ^0xF30C3D47
{
	if (func_476(essParam0) != 5)
		return false;

	switch (essParam0)
	{
		case 28:
		case 33:
		case 75:
		case 117:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_478() // Position - 0x109F1 Hash - 0xD4692F94 ^0xD4692F94
{
	eStackSize stackSize;

	stackSize = func_144();

	switch (stackSize)
	{
		case 0:
			return true;
	
		case 3:
			return true;
	
		case 7:
			return true;
	
		case 18:
			return true;
	
		case 24:
			return true;
	
		case 41:
			return true;
	
		case 44:
			return true;
	
		case 46:
			return true;
	
		case 47:
			return true;
	
		case 51:
			return true;
	
		case 53:
			return true;
	
		case 63:
			return true;
	
		case 73:
			return true;
	
		case 80:
			return true;
	
		case 82:
			return true;
	
		case 84:
			return true;
	
		case 85:
			return true;
	
		case 103:
			return true;
	
		case 106:
			return true;
	
		case 107:
			return true;
	
		case 108:
			return true;
	
		case 110:
			return true;
	
		case 120:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_479() // Position - 0x10AEE Hash - 0x75C5C6BE ^0x75C5C6BE
{
	eStackSize stackSize;
	Volume volume;
	Vector3 vector;
	Vector3 vector2;
	Vector3 vector3;

	stackSize = func_144();
	vector = { -3685.4233f, -2597.155f, -10f };
	vector2 = { 0f, 0f, -24.789701f };
	vector3 = { 116.63651f, 76.68949f, 15f };

	if (stackSize != 120)
	{
		return false;
	}
	else
	{
		volume = VOLUME::CREATE_VOLUME_CYLINDER(vector, vector2, vector3);
	
		if (func_740(Global_35, volume, true, 0))
		{
			func_741(volume);
			return true;
		}
		else
		{
			func_741(volume);
			return false;
		}
	}

	return false;
}

BOOL func_480(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x10B73 Hash - 0x4F47D7F1 ^0x1C676405
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
			return true;
	else if (func_742(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
		return true;

	return false;
}

BOOL func_481(var uParam0, var uParam1, var uParam2, float fParam3) // Position - 0x10BCE Hash - 0x303D641D ^0x303D641D
{
	if (func_743(uParam0, fParam3))
		return true;

	if (func_744(uParam0, fParam3))
		return true;

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x10BF9 Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

int func_483(var uParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x10C02 Hash - 0x6C0BC7C7 ^0x6C0BC7C7
{
	int i;
	int num;
	float num2;
	float num3;

	num = -1;
	num2 = 100000000f;

	for (i = 0; i < 12; i = i + 1)
	{
		if (!bParam3 || func_745(i))
		{
			num3 = func_746(i, uParam0);
		
			if (num3 < num2)
			{
				num = i;
				num2 = num3;
			}
		}
	}

	return num;
}

BOOL func_484(int iParam0) // Position - 0x10C57 Hash - 0xA059D395 ^0xE5C5C571
{
	return func_272(Global_1935496.f_7, iParam0);
}

Entity func_485(Ped pedParam0) // Position - 0x10C6B Hash - 0x3D354C79 ^0x6A3F9034
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

void func_486(int iParam0, int iParam1) // Position - 0x10CCB Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_487(Ped pedParam0) // Position - 0x10CDC Hash - 0x1A9D46BF ^0x1806B677
{
	Object* p_object;
	ItemSet itemset;
	BOOL flag;
	int itemsetSize;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	p_object = func_747();

	if (!ENTITY::DOES_ENTITY_EXIST(p_object))
		return false;

	itemset = ITEMSET::CREATE_ITEMSET(false);

	if (!ITEMSET::IS_ITEMSET_VALID(itemset))
		return false;

	ITEMSET::_CLEAR_ITEMSET(itemset);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(pedParam0, itemset);
	flag = false;
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);

	if (itemsetSize > 0)
		if (ITEMSET::IS_IN_ITEMSET(p_object, itemset))
			flag = true;

	ITEMSET::DESTROY_ITEMSET(itemset);

	if (flag)
		return true;

	return false;
}

struct<18> func_488(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x10D65 Hash - 0x84700F53 ^0xB9E7AA96
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
	num.f_13 = -1;
	num.f_14 = -1;
	num.f_15 = -1;
	num.f_16 = -1;
	num.f_17 = -1;

	if (hParam0 != 0)
		num = hParam0;

	if (iParam1 != 0 && iParam1 != joaat("SLOTID_NONE"))
		num.f_1 = iParam1;

	if (iParam2 != 0 && iParam2 != joaat("SLOTID_NONE"))
		num.f_2 = iParam2;

	if (iParam3 != 0 && iParam3 != joaat("SLOTID_NONE"))
		num.f_3 = iParam3;

	if (iParam4 != 0)
		num.f_4 = iParam4;

	if (iParam5 != 0)
		num.f_5 = iParam5;

	return num;
}

BOOL func_489(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x10E37 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_199(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_490(Hash hParam0) // Position - 0x10E5C Hash - 0xA177C2D7 ^0x45332B51
{
	int num;

	num = func_119(hParam0);

	if (num == joaat("WEAPON") && hParam0 != joaat("weapon_kit_binoculars") && hParam0 != joaat("weapon_kit_camera"))
		return false;

	if (num == joaat("Money") && hParam0 != joaat("money_loanshark_gwen_debt"))
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
			switch (func_121(hParam0))
			{
				case -525676072:
					if (hParam0 == joaat("kit_mask_grey_cloth"))
						return true;
					else
						return false;
					break;
			
				case 81053684:
					return true;
			
				default:
					return false;
			}
			break;
	}

	if (func_121(hParam0) == -829303394)
		return false;

	return true;
}

void func_491(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0x10F74 Hash - 0xBCD1CB67 ^0x26CF6942
{
	if (bParam2)
		INVENTORY::_INVENTORY_ENABLE_ITEM(iParam0, hParam1);
	else
		INVENTORY::_INVENTORY_DISABLE_ITEM(iParam0, hParam1, 0);

	return;
}

BOOL func_492(Hash hParam0) // Position - 0x10F95 Hash - 0xE539E1A0 ^0xE539E1A0
{
	return func_748(func_121(hParam0), hParam0);
}

void func_493(int iParam0, BOOL bParam1) // Position - 0x10FA9 Hash - 0x8D8E849B ^0x82A532B3
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
	func_749(iParam0, unk, bParam1, false);
	return;
}

void func_494(int iParam0, BOOL bParam1) // Position - 0x1101D Hash - 0x8D8E849B ^0x82A532B3
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
	func_749(iParam0, unk, bParam1, false);
	return;
}

void func_495(int iParam0, BOOL bParam1) // Position - 0x11091 Hash - 0x8D8E849B ^0x82A532B3
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
	func_749(iParam0, unk, bParam1, false);
	return;
}

void func_496(int iParam0, BOOL bParam1) // Position - 0x1110E Hash - 0x8D8E849B ^0x82A532B3
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
	func_749(iParam0, unk, bParam1, false);
	return;
}

void func_497(int iParam0, var uParam1) // Position - 0x11182 Hash - 0x8BE66D08 ^0xEC2B3A25
{
	if (uParam1->f_1 == 1)
		INVENTORY::_INVENTORY_ENABLE_ITEM(iParam0, *uParam1);
	else
		INVENTORY::_INVENTORY_DISABLE_ITEM(iParam0, *uParam1, 0);

	return;
}

BOOL func_498(int iParam0) // Position - 0x111A8 Hash - 0x94742B76 ^0x429CA177
{
	if (iParam0 < 0 || iParam0 > 19)
		return false;

	if (Global_1935496.f_72[iParam0 /*2*/] == 0)
		return false;

	Global_1935496.f_72[iParam0 /*2*/] = 0;
	Global_1935496.f_72[iParam0 /*2*/].f_1 = -1;
	return true;
}

void func_499() // Position - 0x111F1 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_500(int iParam0, Any anParam1) // Position - 0x111FD Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_750(iParam0))
		return false;

	*anParam1 = Global_1914270[iParam0];

	if (*anParam1 == 0)
		return false;

	return true;
}

int func_501(eStackSize essParam0, int iParam1) // Position - 0x1122A Hash - 0x8A1A59F3 ^0x8A1A59F3
{
	if (iParam1 == 11)
		return 101;
	else if (iParam1 == 32)
		return 126;
	else if (iParam1 == 34)
		return 127;

	switch (essParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
			
				case 31:
					return 118;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
			
				case 6:
					return 143;
			
				case 26:
					return 142;
			
				case 27:
					return 144;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					return 39;
			
				case 1:
					return 46;
			
				case 2:
					return 45;
			
				case 3:
					return 42;
			
				case 4:
					return 41;
			
				case 6:
					return 43;
			
				case 7:
					return 47;
			
				case 8:
					return 37;
			
				case 9:
					return 44;
			
				case 10:
					return 38;
			
				case 12:
					return 48;
			
				case 13:
					return 49;
			
				case 14:
					return 50;
			
				case 15:
					return 36;
			
				case 18:
					return 55;
			
				case 21:
					return 54;
			
				case 22:
					return 51;
			
				case 29:
					return 109;
			
				case 30:
					return 110;
			
				case 31:
					return 111;
			
				case 33:
					return 52;
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
			
				case 6:
					return 147;
			
				case 19:
					return 58;
			
				case 26:
					return 146;
			
				case 27:
					return 148;
			
				default:
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
			
				default:
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
			
				default:
					break;
			}
			break;
	
		case 23:
			switch (iParam1)
			{
				case 1:
					return 24;
			
				case 2:
					return 23;
			
				default:
					break;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 2:
					return 65;
			
				case 3:
					return 61;
			
				case 9:
					return 63;
			
				case 10:
					return 60;
			
				case 20:
					return 62;
			
				case 22:
					return 64;
			
				case 29:
					return 114;
			
				case 31:
					return 115;
			
				case 33:
					return 66;
			
				default:
					break;
			}
			break;
	
		case 28:
			switch (iParam1)
			{
				case 1:
					return 88;
			
				case 2:
					return 89;
			
				case 3:
					return 87;
			
				default:
					break;
			}
			break;
	
		case 38:
			switch (iParam1)
			{
				case 1:
					return 15;
			
				case 2:
					return 14;
			
				case 3:
					return 7;
			
				case 7:
					return 17;
			
				case 8:
					return 9;
			
				case 9:
					return 13;
			
				case 10:
					return 10;
			
				case 15:
					return 6;
			
				case 21:
					return 12;
			
				case 22:
					return 16;
			
				case 29:
					return 106;
			
				case 30:
					return 107;
			
				case 31:
					return 108;
			
				case 33:
					return 11;
			
				default:
					break;
			}
			break;
	
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
			
				default:
					break;
			}
			break;
	
		case 69:
			switch (iParam1)
			{
				case 1:
					return 21;
			
				case 2:
					return 20;
			
				case 3:
					return 19;
			
				case 4:
					return 18;
			
				case 31:
					return 105;
			
				default:
					break;
			}
			break;
	
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
			
				case 6:
					return 139;
			
				case 19:
					return 56;
			
				case 26:
					return 138;
			
				case 27:
					return 140;
			
				default:
					break;
			}
			break;
	
		case 76:
			switch (iParam1)
			{
				case 0:
					return 73;
			
				case 1:
					return 78;
			
				case 2:
					return 77;
			
				case 3:
					return 74;
			
				case 6:
					return 75;
			
				case 8:
					return 69;
			
				case 9:
					return 76;
			
				case 10:
					return 72;
			
				case 15:
					return 68;
			
				case 20:
					return 79;
			
				case 22:
					return 80;
			
				case 29:
					return 102;
			
				case 30:
					return 103;
			
				case 31:
					return 104;
			
				case 33:
					return 70;
			
				default:
					break;
			}
			break;
	
		case 78:
			switch (iParam1)
			{
				case 1:
					return 3;
			
				case 2:
					return 2;
			
				case 6:
					return 0;
			
				case 22:
					return 1;
			
				case 29:
					return 120;
			
				case 31:
					return 121;
			
				default:
					break;
			}
			break;
	
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
			
				case 6:
					return 130;
			
				case 19:
					return 59;
			
				case 26:
					return 129;
			
				case 27:
					return 131;
			
				default:
					break;
			}
			break;
	
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
			
				default:
					break;
			}
			break;
	
		case 90:
		case MICRO:
			switch (iParam1)
			{
				case 18:
					return 34;
			
				default:
					break;
			}
			break;
	
		case 92:
			switch (iParam1)
			{
				case 1:
					return 85;
			
				case 2:
					return 86;
			
				case 4:
					return 82;
			
				case 9:
					return 84;
			
				case 30:
					return 116;
			
				case 31:
					return 117;
			
				default:
					break;
			}
			break;
	
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
			
				case 6:
					return 134;
			
				case 19:
					return 57;
			
				case 26:
					return 133;
			
				case 27:
					return 135;
			
				default:
					break;
			}
			break;
	
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
			
				default:
					break;
			}
			break;
	
		case 105:
			switch (iParam1)
			{
				case 1:
					return 31;
			
				case 2:
					return 30;
			
				case 3:
					return 28;
			
				case 4:
					return 27;
			
				case 6:
					return 29;
			
				case 10:
					return 26;
			
				case 15:
					return 25;
			
				case 22:
					return 32;
			
				case 29:
					return 112;
			
				case 31:
					return 113;
			
				case 33:
					return 33;
			
				default:
					break;
			}
			break;
	
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
			
				default:
					break;
			}
			break;
	
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
			
				default:
					break;
			}
			break;
	
		case 115:
			switch (iParam1)
			{
				case 3:
					return 90;
			
				case 6:
					return 91;
			
				case 9:
					return 94;
			
				case 10:
					return 92;
			
				case 33:
					return 93;
			
				default:
					break;
			}
			break;
	
		case 117:
			switch (iParam1)
			{
				case 1:
					return 100;
			
				case 2:
					return 99;
			
				case 31:
					return 123;
			
				default:
					break;
			}
			break;
	
		case 120:
			switch (iParam1)
			{
				case 2:
					return 96;
			
				case 3:
					return 95;
			
				default:
					break;
			}
			break;
	
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
			
				default:
					break;
			}
			break;
	
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
			
				default:
					break;
			}
			break;
	}

	return -1;
}

BOOL func_502(Ped pedParam0, int iParam1, float fParam2) // Position - 0x11A3E Hash - 0x96F7C3D9 ^0x96F7C3D9
{
	if (!func_226(iParam1))
		return false;

	if (func_752(pedParam0, func_751(iParam1), true) < fParam2)
		return true;

	return false;
}

void func_503() // Position - 0x11A6C Hash - 0x2E3B7213 ^0xD3F7C739
{
	int num;

	num = func_507();

	if (func_507() == 822208792)
		num = 0;

	if (func_27(false))
		if (func_251() == 2)
			num = -693134279;
		else
			num = -182626652;

	if (func_68())
		num = -2074770370;

	func_70(num);
	return;
}

void func_504(Hash hParam0, int iParam1, char* sParam2, int iParam3) // Position - 0x11ABE Hash - 0xE14F3B20 ^0xF827B29F
{
	int dataContainerFromChildIndex;
	BOOL flag;
	int num;
	int num2;

	dataContainerFromChildIndex = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(hParam0, Global_1935689.f_9416);
	flag = func_240(iParam1);
	num = iParam1;
	num2 = dataContainerFromChildIndex;

	if (flag)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1935689.f_9452, Global_1935689.f_9416);
		Global_1935689.f_9417 = Global_1935689.f_9416;
	}

	DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(8, num2, sParam2, iParam3, num, flag);
	Global_1935689.f_9418[Global_1935689.f_9416] = iParam1;
	Global_1935689.f_9416 = Global_1935689.f_9416 + 1;
	return;
}

void func_505(Hash hParam0) // Position - 0x11B3C Hash - 0xE1107B89 ^0xAA39EE11
{
	if (func_84())
		func_504(hParam0, -283002878, "Horse", joaat("satchel_nav_horse"));

	return;
}

void func_506(Hash hParam0) // Position - 0x11B62 Hash - 0x54EEBD9C ^0x6F079810
{
	if (func_27(false))
		if (func_251() == 2)
			func_504(hParam0, -693134279, "Send", joaat("satchel_nav_send"));
		else
			func_504(hParam0, -182626652, "Sell", joaat("satchel_nav_sell"));
	else if (func_68())
		func_504(hParam0, -2074770370, "Donations", joaat("satchel_nav_donate"));

	return;
}

int func_507() // Position - 0x11BC3 Hash - 0x4228A1C2 ^0x58D4D226
{
	return Global_1935689.f_18;
}

BOOL func_508(Hash hParam0, var uParam1) // Position - 0x11BD1 Hash - 0x4A27386E ^0xBC93C855
{
	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < Global_1946054.f_2657.f_19)
	{
		if (hParam0 == Global_1946054.f_2657[*uParam1])
			return 1;
	
		*uParam1 = *uParam1 + 1;
	}

	return 0;
}

void func_509(BOOL bParam0) // Position - 0x11C11 Hash - 0x809E815 ^0xABB9FC5C
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

BOOL func_510(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x11C35 Hash - 0x72399051 ^0x6D1C1C66
{
	var outData;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_161(hParam0, 0))
		return false;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
	{
		!bParam5;
		return false;
	}

	!bParam5;
	*uParam3 = outData.f_3;

	for (i = 0; i < outData.f_3; i = i + 1)
	{
		!bParam5;
		uParam2->[i /*2*/] = { outData.f_4[i /*2*/] };
	}

	if (bParam4)
		func_753(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

int func_511(int iParam0) // Position - 0x11CD2 Hash - 0xF3DAE918 ^0xA65130AC
{
	switch (iParam0)
	{
		case 0:
			return joaat("SLOTID_SATCHEL");
	
		case 1:
			return -1360128126;
	
		case 2:
			return 1426626782;
	
		case 3:
			return 1227915917;
	
		default:
		
	}

	return joaat("SLOTID_SATCHEL");
}

int func_512(Hash hParam0, var uParam1) // Position - 0x11D1F Hash - 0x9C6CFD9C ^0x9C6CFD9C
{
	return func_754(Global_35, hParam0, uParam1);
}

int func_513(Hash hParam0, var uParam1) // Position - 0x11D32 Hash - 0xF32A4791 ^0x3F65D777
{
	Ped mountOwnedByPlayer;

	if (func_62() == -1)
		mountOwnedByPlayer = func_85(7);
	else
		mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());

	return func_754(mountOwnedByPlayer, hParam0, uParam1);
}

void func_514(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x11D60 Hash - 0x125E1FB8 ^0x58C5F328
{
	*uParam3 = PED::_GET_PED_DAMAGE_CLEANLINESS(pedParam0);
	*uParam2 = FLOCK::_GET_ANIMAL_RARITY(pedParam0);

	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_GET_PED_QUALITY(pedParam0);
	
		switch (*uParam4)
		{
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		
			case 0:
				*uParam1 = 0;
				break;
		
			case 1:
				*uParam1 = 1;
				break;
		}
	}

	return;
}

BOOL func_515(int iParam0, Hash hParam1, float* pfParam2) // Position - 0x11DD5 Hash - 0xFC746606 ^0xFC746606
{
	var unk;
	var unk6;
	int num;

	*pfParam2 = 1f;

	if (!func_226(iParam0))
		return false;

	if (!func_161(hParam1, 0))
		return false;

	if (!func_500(22, &unk))
		return false;

	unk.f_2 = -1023752283;
	unk.f_3 = hParam1;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		num = func_755(iParam0);
		func_756(num, &unk6);
		unk.f_2 = unk6;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(pfParam2, &unk);
	
		if (*pfParam2 < 1f)
			*pfParam2 = 1f;
	
		return true;
	}

	return false;
}

int func_516(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x11E5A Hash - 0x9C65FCD1 ^0x9391B601
{
	var unk;
	int num;
	int i;
	int collectionId;
	int numInCollection;
	Hash filter;
	int num2;
	var data;
	int size;
	int collectionId2;
	int j;
	Hash hash;
	int num3;

	unk = 15;

	if (func_111(hParam0, -5284486))
	{
		filter = -1;
		filter.f_1 = -1;
		filter.f_2 = -1;
		filter.f_3 = -1;
		filter.f_4 = -1;
		filter.f_5 = -1;
		filter.f_6 = -1;
		filter.f_7 = -1;
		filter.f_8 = -1;
		filter.f_13 = -1;
		filter.f_14 = -1;
		filter.f_15 = -1;
		filter.f_16 = -1;
		filter.f_17 = -1;
		filter = hParam0;
		collectionId = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(1, &filter, &numInCollection);
	
		if (collectionId != -1)
		{
			if (numInCollection > 0)
				bParam4 = true;
		
			INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(collectionId);
		}
	
		num2 = 0;
	
		if (func_510(hParam0, hParam1, &unk, &num, bParam2, bParam3))
		{
			for (i = 0; i < num; i = i + 1)
			{
				if (unk[i /*2*/] == joaat("currency_cash") || unk[i /*2*/] == joaat("currency_gold_bar"))
				{
					num2 = num2 + unk[i /*2*/].f_1;
					break;
				}
			
				if (unk[i /*2*/] == 0)
					break;
			}
		}
	
		data = -1;
		data.f_1 = -1;
		data.f_2 = -1;
		data.f_3 = -1;
		data.f_4 = -1;
		data.f_5 = -1;
		data.f_6 = -1;
		data.f_7 = -1;
		data.f_8 = -1;
		num3 = func_259(hParam0, 862142561);
	
		if (num3 != 0)
		{
			data.f_8 = num3;
			collectionId2 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&data, &size, 1);
		
			if (collectionId2 != -1)
			{
				for (j = 0; j < size; j = j + 1)
				{
					hash = func_452(j, collectionId2);
				
					if (func_161(hash, 0) && hash != hParam0)
					{
						if (bParam4)
						{
							num2 = num2 + func_516(hash, -915411861, true, false, false);
						}
						else
						{
							filter = hash;
							collectionId = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(1, &filter, &numInCollection);
						
							if (collectionId != -1)
							{
								if (numInCollection == 0)
									num2 = num2 + func_516(hash, -915411861, true, false, false);
							
								INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(collectionId);
							}
						}
					}
				}
			
				ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(collectionId2);
			}
		}
	
		return num2;
	}

	if (!func_510(hParam0, hParam1, &unk, &num, bParam2, bParam3))
	{
		!bParam3;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == joaat("currency_cash") || unk[i /*2*/] == joaat("currency_gold_bar"))
			return unk[i /*2*/].f_1;
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam3;
	return 0;
}

BOOL func_517(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x120BC Hash - 0x271191BA ^0xF79A5B58
{
	var outData;
	int i;

	*uParam3 = 0;

	if (!func_161(hParam0, 0))
		return false;

	outData.f_4 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SELL_PRICE(hParam0, hParam1, &outData))
		return false;

	!bParam4;
	*uParam3 = outData.f_3;

	if (*uParam2 < outData.f_3)
		return false;

	for (i = 0; i < outData.f_3; i = i + 1)
	{
		!bParam4;
		uParam2->[i /*2*/] = { outData.f_4[i /*2*/] };
	}

	return true;
}

BOOL func_518(int iParam0) // Position - 0x1213C Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case -1162387149:
		case joaat("SLOTID_SATCHEL"):
			return true;
	}

	return false;
}

BOOL func_519(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x12160 Hash - 0xB6B420BD ^0x591AD86
{
	BOOL flag;

	flag = false;

	if (iParam1 == 0 || iParam1 == -2074770370 || bParam2 || func_27(false))
		flag = true;

	if (!bParam2)
		if (!func_161(hParam0, 0) || hParam0 == 1259508039 || hParam0 == joaat("kit_wardrobe"))
			return false;

	if (!flag && func_757(hParam0))
		return false;

	switch (iParam1)
	{
		case -2074770370:
			if (Global_1935689.f_17 == 1 || Global_1935689.f_17 == 2)
				return func_759(hParam0, iParam1);
			else if (func_259(hParam0, -949239683) == -1337515701 && hParam0 != joaat("kit_player_pocketwatch"))
				return true;
			else
				return func_111(hParam0, -111938901);
			break;
	
		case -1666604090:
			return func_111(hParam0, -193035453);
	
		case -1559802791:
			return func_111(hParam0, 1422457563);
	
		case -1268291907:
			return func_111(hParam0, 1360707454);
	
		case -693134279:
			return func_384(hParam0, 8388608);
	
		case -283002878:
		case 0:
			if (!func_27(false))
			{
				if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
					return true;
			
				if (func_519(hParam0, -1559802791, true) || func_519(hParam0, -1268291907, true) || func_519(hParam0, -96974025, true) || func_519(hParam0, -1666604090, true) || func_519(hParam0, 1561961676, true) || func_519(hParam0, -156634416, true) || func_519(hParam0, 1061777683, true) || func_519(hParam0, -2074770370, true) || func_519(hParam0, -693134279, true) || func_519(hParam0, -182626652, true) || func_758(hParam0))
					return true;
			}
			else
			{
				return true;
			}
			break;
	
		case -182626652:
			if (func_269(hParam0, Global_1914319.f_16855.f_1))
				return true;
			break;
	
		case -156634416:
			return func_111(hParam0, -928967997);
	
		case -96974025:
			return func_111(hParam0, 1009210113);
	
		case 1061777683:
			return func_111(hParam0, 747873593);
	
		case 1561961676:
			return func_111(hParam0, -111938901);
	}

	return false;
}

BOOL func_520(Hash hParam0) // Position - 0x1240F Hash - 0x2C0A6F39 ^0xD6675939
{
	if (func_26())
	{
		return func_519(hParam0, -2074770370, false);
	}
	else if (func_23())
	{
		if (func_111(hParam0, 96549393))
			return false;
	
		if (func_111(hParam0, -111938901) || func_259(hParam0, -949239683) == -1337515701)
			return true;
	
		if (func_111(hParam0, -121341956))
			return true;
	
		return false;
	}
	else if (func_24())
	{
		if (func_111(hParam0, 1765172170) || func_111(hParam0, -458578204) || func_111(hParam0, -1919515848) || func_111(hParam0, 1443104131) || func_111(hParam0, 1490540191) || func_111(hParam0, 1573112293) || func_111(hParam0, 1939071949) || func_111(hParam0, 1174751405) || func_111(hParam0, 845883585))
			return false;
	
		if (!func_111(hParam0, joaat("ci_tag_item_meat_animal")) && !func_111(hParam0, -839724752) && !func_111(hParam0, -1457797660) && !func_111(hParam0, 1286414894))
			return false;
	
		if (func_760(hParam0) == 0)
			return false;
	}

	if (func_27(false))
		if (Global_1914319.f_16855 == 2)
			return true;
		else if (!func_269(hParam0, Global_1914319.f_16855.f_1))
			return false;
	else if (!func_68())
		if (func_111(hParam0, -1242251796))
			return false;

	if (func_111(hParam0, 949916894) || hParam0 == joaat("document_player_journal"))
		if (!func_492(hParam0))
			return false;

	if (!func_27(false))
		if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_199(false), hParam0, func_27(false)))
			return false;

	return true;
}

float func_521(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x12619 Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

Vector3 func_522(eStackSize essParam0) // Position - 0x12661 Hash - 0x563C355B ^0x563C355B
{
	switch (essParam0)
	{
		case 0:
			return -1343.6992f, 2429.3972f, 307.0626f;
	
		case 1:
			return -123.1805f, -28.8611f, 94.8478f;
	
		case 2:
			return 667.9077f, -1252.7803f, 42.9221f;
	
		case 3:
			return 1880.8066f, -1873.2307f, 41.8094f;
	
		case 4:
			return 1422.6255f, -7332.473f, 80.5977f;
	
		case 5:
			return 2254.96f, -758.12f, 41.75f;
	
		case 6:
			return 2351.2817f, 1362.0768f, 104.9752f;
	
		case 7:
			return -2593.2102f, 453.95334f, 145.9973f;
	
		case 8:
			return func_761();
	
		default:
		
	}

	return 0f, 0f, 0f;
}

float func_523() // Position - 0x12741 Hash - 0xC6D918D ^0xC6D918D
{
	eStackSize stackSize;

	stackSize = func_762();

	switch (stackSize)
	{
		case 4:
			return 50f;
	
		case 9:
			return 50f;
	
		case 22:
			return 120f;
	
		case 37:
			return 120f;
	
		case 43:
			return 50f;
	
		case 58:
			return 50f;
	
		case 71:
			return 50f;
	
		case 79:
			return 50f;
	
		case 98:
			return 60f;
	}

	return 25f;
}

BOOL func_524(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x127F5 Hash - 0x4421204 ^0x961A610F
{
	if (bParam7)
		return BUILTIN::VDIST2(vParam0, vParam3) <= fParam6 * fParam6;

	return func_742(vParam0, vParam3) <= fParam6 * fParam6;
}

BOOL func_525(Ped pedParam0) // Position - 0x12829 Hash - 0xDECE401E ^0xE1B33432
{
	var unk;
	float num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	unk = { func_522(func_358()) };
	num = func_523();

	if (func_524(ENTITY::GET_ENTITY_COORDS(pedParam0, true, false), unk, num, false))
		return true;

	return false;
}

BOOL func_526(int iParam0) // Position - 0x12879 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return iParam0 != 0;
}

void func_527(int iParam0, BOOL bParam1) // Position - 0x12885 Hash - 0x9AEABBC4 ^0x9C5BBE87
{
	if (bParam1)
		Global_1935689.f_19.f_2[iParam0 /*2*/].f_1 = bParam1;

	return;
}

void func_528(int iParam0, BOOL bParam1) // Position - 0x128A2 Hash - 0x1BF05C5 ^0x3F975FFA
{
	int num;

	num = Global_1935689.f_19.f_1;
	func_763(num, iParam0);
	func_527(num, bParam1);

	if (func_68())
	{
		if (!func_764(num))
		{
			func_765(num);
			return;
		}
	}

	func_766(iParam0);
	return;
}

Hash func_529(Entity eParam0) // Position - 0x128E4 Hash - 0xC81C18F9 ^0xACAAEE80
{
	Ped pedIndexFromEntityIndex;
	int num;
	var unk;
	var unk2;
	var unk3;
	int num2;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	if (!ENTITY::IS_ENTITY_A_PED(eParam0))
		return 0;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
		return 0;

	func_514(pedIndexFromEntityIndex, &unk, &unk2, &num, &unk3);

	if (func_767(&num2, pedIndexFromEntityIndex, num, unk))
	{
	}

	return num2;
}

Hash func_530(Entity eParam0) // Position - 0x12940 Hash - 0x715B29E5 ^0xAF0BC29E
{
	Hash carriableFromEntity;
	Ped pedIndexFromEntityIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	carriableFromEntity = ENTITY::_GET_CARRIABLE_FROM_ENTITY(eParam0);

	if (carriableFromEntity == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(eParam0))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);
			carriableFromEntity = func_768(pedIndexFromEntityIndex);
		}
	}

	return carriableFromEntity;
}

BOOL func_531(Hash hParam0) // Position - 0x1297F Hash - 0x242F1AF ^0x1D0FE23F
{
	Hash hash;

	if (hParam0 != 0)
	{
		if (func_384(hParam0, 8388608))
		{
			hash = func_699(func_769(hParam0), 10);
		
			if (hash != 0 && func_257(hash, 1, false))
			{
				Global_1901328.f_94 = 1;
				return func_770(func_769(hParam0), hParam0);
			}
			else if (hParam0 == func_699(func_771(hParam0), 5))
			{
				if (!func_772(39))
					return false;
				else
					return true;
			}
			else if (hParam0 == func_699(func_773(hParam0), 5))
			{
				if (!func_772(49))
					return false;
				else
					return true;
			}
			else if (func_774(hParam0))
			{
				if (!func_772(41))
					return false;
				else
					return func_776(func_775(hParam0), 5, false);
			}
			else if (func_777(hParam0))
			{
				if (func_257(-1813857561, 1, false))
					if (!func_772(48))
						return false;
					else
						return true;
				else
					return false;
			}
			else if (func_778(hParam0))
			{
				if (!func_772(38))
					return false;
				else
					return true;
			}
			else if (hParam0 == -1813857561)
			{
				return false;
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
	}

	return false;
}

BOOL func_532(int iParam0) // Position - 0x12AC5 Hash - 0xEFF1F628 ^0xEFF1F628
{
	if (func_779())
		if (Global_1914319.f_16855 == iParam0)
			return true;

	return false;
}

void func_533(var uParam0, BOOL bParam1) // Position - 0x12AE5 Hash - 0xD07D4570 ^0xD07D4570
{
	Ped ped;
	Ped ped2;
	Ped ped3;

	ped = func_85(func_241(0));
	ped2 = func_85(func_241(1));
	ped3 = func_85(func_241(6));

	if (bParam1 || func_272(Global_1935689.f_9436, 1))
		func_780(&ped, uParam0);

	if (bParam1 || func_272(Global_1935689.f_9436, 2))
		func_780(&ped2, uParam0);

	if (bParam1 || func_272(Global_1935689.f_9436, 4))
		func_780(&ped3, uParam0);

	return;
}

int func_534(var uParam0, BOOL bParam1) // Position - 0x12B6B Hash - 0xAAC4D7D8 ^0x24AF1280
{
	Ped ped;
	Ped ped2;
	Ped ped3;
	int i;
	int inventoryItemCountWithItemid;
	int num;

	ped = func_85(func_241(0));
	ped2 = func_85(func_241(1));
	ped3 = func_85(func_241(6));

	for (i = 0; i < 999; i = i + 1)
	{
		if (func_161(uParam0->[i], 0))
		{
			if (func_272(Global_1935689.f_9436, 1))
				inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(ped), uParam0->[i], false);
		
			if (func_272(Global_1935689.f_9436, 2))
				inventoryItemCountWithItemid = inventoryItemCountWithItemid + INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(ped2), uParam0->[i], false);
		
			if (func_272(Global_1935689.f_9436, 4))
				inventoryItemCountWithItemid = inventoryItemCountWithItemid + INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(ped3), uParam0->[i], false);
		
			if (bParam1 && inventoryItemCountWithItemid > 0)
				func_781(uParam0->[i], inventoryItemCountWithItemid, false);
		
			num = num + 1;
		}
	}

	return num;
}

void func_535(var uParam0, var uParam1, BOOL bParam2) // Position - 0x12C45 Hash - 0x16B02D0C ^0x912CE3C1
{
	var unk;
	int num;
	int num2;
	int i;
	int inventoryIdFromPed;
	var unk19;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return;

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

	if (func_782(inventoryIdFromPed, &unk, &num, &num2))
	{
		i = 0;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_233(&unk19, i, num, num2))
			{
				if (func_161(unk19.f_4, 0) && unk19.f_4 != 1259508039)
				{
					*uParam1 = *uParam1 + 1;
				
					if (bParam2 && func_249(unk19.f_4))
						func_255(unk19, 0);
				}
			}
		}
	
		func_244(num);
	}

	return;
}

int func_536(Hash hParam0, int iParam1) // Position - 0x12D4C Hash - 0x7CE1A52B ^0x35B4CDB3
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
	int num;

	if (iParam1 < 0)
		iParam1 = func_199(false);

	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, hParam0, &year, &month, &day, &hour, &minute, &second))
		return -15;

	func_783(&num, year);
	func_784(&num, month);
	func_785(&num, day);
	func_786(&num, hour);
	func_787(&num, minute);
	func_788(&num, second);
	return num;
}

void func_537(var uParam0, int iParam1, var uParam2, var uParam3) // Position - 0x12DB1 Hash - 0x6B8F14D7 ^0x6AEAD01F
{
	int i;
	var unk;
	var unk2;

	for (i = iParam1; i <= 15; i = i + 1)
	{
		unk = uParam0->[i /*2*/];
		unk2 = uParam0->[i /*2*/].f_1;
		uParam0->[i /*2*/] = *uParam2;
		uParam0->[i /*2*/].f_1 = *uParam3;
		*uParam2 = unk;
		*uParam3 = unk2;
	}

	return;
}

void func_538(var uParam0) // Position - 0x12DFD Hash - 0x88780629 ^0x88780629
{
	int i;

	for (i = 0; i < 16; i = i + 1)
	{
		func_781(uParam0->[i /*2*/], func_166(func_165(0), uParam0->[i /*2*/], false), false);
	}

	return;
}

Vector3 func_539(Hash hParam0) // Position - 0x12E33 Hash - 0x519EC1E6 ^0x181FDEE
{
	int num;

	if (!func_789(hParam0, &num, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
	{
		num.f_1 = joaat("inventory_items");
		num = joaat("_placeholder");
	}

	return num;
}

int func_540(Hash hParam0) // Position - 0x12E67 Hash - 0xE138944F ^0x7B9B0BF9
{
	if (!INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, 1879048192))
		return 0;

	if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, 268435456))
		return 1;

	if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, 536870912))
		return 2;

	return 3;
}

void func_541(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, int iParam4, BOOL bParam5, int iParam6, int iParam7) // Position - 0x12EB0 Hash - 0xF5D2AB6D ^0x19DC681C
{
	int dataContainerFromChildIndex;
	int num;

	dataContainerFromChildIndex = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689.f_9449, Global_1935689.f_9443);
	num = dataContainerFromChildIndex;
	DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(0, num, hParam1, uParam2->f_1, *uParam2, iParam4, bParam3, bParam5, iParam6, iParam7);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_HASH_ALIAS(Global_1935689.f_9449, Global_1935689.f_9443, hParam0);
	Global_1935689.f_9443 = Global_1935689.f_9443 + 1;
	return;
}

void func_542() // Position - 0x12F0E Hash - 0x4872B085 ^0x1A8607E4
{
	int inventoryId;
	BOOL flag;
	int inventoryId2;
	BOOL flag2;

	if (func_62() != -1)
		return;

	if (func_257(joaat("kit_camp"), 1, false))
	{
		if (func_790())
		{
			inventoryId = func_199(false);
			flag = INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(inventoryId, joaat("kit_camp"), func_27(false));
			func_149(joaat("kit_camp"), 1, true, -142743235, false);
			func_152(joaat("kit_camp_simple"), 1, true, 0, 0, 752097756, 0, 0, 0, 0);
			Global_1935496.f_125 = 0;
			Global_1935496.f_126 = 1;
		
			if (flag)
				INVENTORY::_INVENTORY_DISABLE_ITEM(inventoryId, joaat("kit_camp_simple"), 0);
			else
				INVENTORY::_INVENTORY_ENABLE_ITEM(inventoryId, joaat("kit_camp_simple"));
		}
	}
	else if (func_257(joaat("kit_camp_simple"), 1, false))
	{
		if (!func_790())
		{
			inventoryId2 = func_199(false);
			flag2 = INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(inventoryId2, joaat("kit_camp_simple"), func_27(false));
			func_149(joaat("kit_camp_simple"), 1, true, -142743235, false);
			func_152(joaat("kit_camp"), 1, true, false, false, 752097756, 0, 0, 0, false);
			Global_1935496.f_125 = 1;
			Global_1935496.f_126 = 0;
		
			if (flag2)
				INVENTORY::_INVENTORY_DISABLE_ITEM(inventoryId2, joaat("kit_camp"), 0);
			else
				INVENTORY::_INVENTORY_ENABLE_ITEM(inventoryId2, joaat("kit_camp"));
		}
	}

	return;
}

void func_543() // Position - 0x1302D Hash - 0x5C7B0C1B ^0xCC6F5695
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
	func_791(&unk, false, true, false);
	return;
}

BOOL func_544(Hash hParam0, int iParam1) // Position - 0x130A5 Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_161(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_359(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_245("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_233(&unk, i, num, num2))
			{
			}
			else if (!func_665(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_244(num);
				return true;
			}
		}
	
		func_244(num);
	}

	return false;
}

BOOL func_545(int iParam0) // Position - 0x1314D Hash - 0x7946919E ^0x7946919E
{
	return !(iParam0 <= 0);
}

BOOL func_546(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1315A Hash - 0x77ECC81C ^0x6B9E3122
{
	if (bParam2)
		if (!func_545(iParam0))
			return false;

	if (Global_1572887.f_12 != -1)
		return Global_36638[iParam0] && bParam1 != false;

	return Global_40.f_9274[iParam0] && bParam1 != false;
}

void func_547(BOOL bParam0) // Position - 0x1319D Hash - 0x4D9C0B85 ^0xCC6963B3
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9468, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9467, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9464, !bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9465, !bParam0);
	return;
}

Any func_548() // Position - 0x131DB Hash - 0x766C9B31 ^0xDB0EFDF8
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689.f_9468))
		return Global_1935689.f_9466;

	return Global_1935689.f_9463;
}

void func_549(Hash hParam0) // Position - 0x13205 Hash - 0x8BD88A41 ^0x4EAEDB79
{
	if (func_121(hParam0) == -854348463)
	{
		if (hParam0 == joaat("provision_rcm_pocket_watch"))
			func_792();
		else
			func_547(false);
	}
	else if (func_259(hParam0, 1224357681) == joaat("CI_TAG_FOLDER_KIT_KEEPSAKES"))
	{
		switch (hParam0)
		{
			case joaat("provision_pearsons_naval_compass"):
			case joaat("provision_mollys_pocket_mirror"):
			case joaat("provision_beaus_gift_1"):
				func_547(false);
				break;
		
			default:
				func_792();
				break;
		}
	}
	else if (func_111(hParam0, 1101678925) || func_111(hParam0, 1686880204) || func_111(hParam0, 173360570) || func_111(hParam0, -121341956) || func_111(hParam0, 2000026003) || func_111(hParam0, -1540973036) || func_111(hParam0, 1192444843) || func_111(hParam0, -1242251796) || func_111(hParam0, 2084895747) || func_259(hParam0, 1224357681) == joaat("CI_TAG_FOLDER_KIT_KEYCHAIN") || func_220(hParam0) && !func_111(hParam0, 316290104) || hParam0 == joaat("consumable_coffee_gnds_reg") || hParam0 == joaat("kit_gun_oil"))
	{
		func_792();
	}
	else if (func_121(hParam0) == 1802292908 && func_259(hParam0, -949239683) == 0 && !(hParam0 == joaat("document_player_journal")))
	{
		func_792();
	}
	else if (func_220(hParam0))
	{
		if (func_111(hParam0, 316290104))
			func_547(true);
		else
			func_547(true);
	}
	else if (func_111(hParam0, 316290104) || func_159(hParam0, true, false))
	{
		func_547(true);
	}
	else
	{
		func_547(false);
	}

	return;
}

Hash func_550(Hash hParam0) // Position - 0x133E6 Hash - 0x934A9372 ^0x5C25D189
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689.f_9468))
	{
		if (func_111(hParam0, 316290104))
			return joaat("SATCHEL_PROMPT_BREAKDOWN");
		else if (func_159(hParam0, true, false))
			return -2086473757;
	}
	else if (func_111(hParam0, 1147021565))
	{
		if (func_111(hParam0, -1242251796))
			return -31549930;
	
		switch (func_259(hParam0, -949239683))
		{
			case -1919515848:
			case -262371497:
			case 845883585:
			case 1174751405:
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
	else if (func_259(hParam0, 1224357681) == joaat("CI_TAG_FOLDER_KIT_WATCHES"))
	{
		return -1948542959;
	}

	return -31549930;
}

void func_551(Hash hParam0, var uParam1) // Position - 0x13504 Hash - 0xABD22A8D ^0x92F4B411
{
	BOOL flag;
	var unk;
	var unk15;

	flag = true;

	switch (func_121(hParam0))
	{
		case -1793506273:
		case 235313564:
		case 320213863:
			if (!func_111(hParam0, 949916894) && !func_111(hParam0, 747873593) && !(func_259(hParam0, -949239683) == -1337515701) && !func_111(hParam0, 1147021565))
				flag = false;
			break;
	
		case -1691255343:
			if (hParam0 == 1993672959 || hParam0 == joaat("kit_gun_oil"))
				flag = false;
			break;
	}

	if (func_119(hParam0) == joaat("Money"))
		flag = false;

	if (func_259(hParam0, -949239683) == -1337515701)
	{
		unk.f_9 = joaat("SLOTID_NONE");
		unk15 = { func_153(hParam0, false, false) };
	
		if (func_793(unk15, -1162387149, &unk, false))
			if (unk.f_4 == hParam0)
				flag = false;
	}

	if (func_111(hParam0, 316290104))
	{
		flag = func_156(false);
		!flag;
	}
	else if (func_159(hParam0, true, false))
	{
		if (func_62() == false || !func_794())
			flag = false;
		else
			flag = true;
	
		!flag;
	}

	if (!DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "focusable"))
		flag = false;

	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(func_562(), flag);
	return;
}

BOOL func_552() // Position - 0x13664 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1935689.f_12;
}

int func_553(Hash hParam0, BOOL bParam1) // Position - 0x13672 Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_488(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_639(&unk, func_440(false));

	if (!func_489(&unk, &num, &num2, false))
		return 0;

	func_244(num);
	return num2;
}

int func_554(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x136D0 Hash - 0x9D75BA2C ^0xE0E521B7
{
	if (!func_161(hParam0, 0))
		return 0;

	if (!func_156(false))
		bParam2 = true;

	if (bParam2 || !func_795(hParam0))
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_199(bParam3), hParam0);
}

BOOL func_555(int iParam0) // Position - 0x1371E Hash - 0xA376F75 ^0xA376F75
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 21:
		case 22:
		case 24:
		case 25:
		case 30:
		case 32:
		case 35:
		case 36:
			return true;
	
		default:
			return false;
	}

	return false;
}

Hash func_556(Hash hParam0) // Position - 0x1378B Hash - 0x33F7D399 ^0x18C3F003
{
	if (!func_161(hParam0, 0))
		return 0;

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_DESCRIPTION_HASH(hParam0);
}

int func_557(Hash hParam0) // Position - 0x137A8 Hash - 0x93EBE895 ^0x93EBE895
{
	int num;
	int i;
	Ped ped;

	num = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		ped = func_796(i);
		num = num + func_797(ped, hParam0);
	}

	return num;
}

BOOL func_558(Hash hParam0) // Position - 0x137DC Hash - 0xF495F797 ^0xF495F797
{
	int num;
	Ped ped;
	BOOL num2;
	int i;
	int num3;
	int num4;
	int num5;

	for (i = 0; i < 4; i = i + 1)
	{
		num3 = 0;
		num4 = 0;
		num5 = 0;
		num = i;
		ped = func_796(num);
		func_798(ped, hParam0, &num3, &num4, &num2);
		num5 = num3 + num4;
	
		switch (num)
		{
			case 0:
				if (num3 > 0)
					return true;
				else if (num4 > 0)
					return false;
				break;
		
			default:
				if (ENTITY::DOES_ENTITY_EXIST(ped))
				{
					switch (num5)
					{
						case 0:
							break;
					
						case 1:
							if (num3 == 1)
								return true;
							else
								return false;
							break;
					
						case 2:
							if (num3 == 2)
								return true;
							else if (num3 == 1)
								return num2;
							else
								return false;
							break;
					}
				}
				break;
		}
	}

	return false;
}

BOOL func_559(Hash hParam0) // Position - 0x138A8 Hash - 0xA839C3B7 ^0xFE515ADA
{
	int i;
	int num;

	i = 0;
	num = Global_1914319.f_17378.f_1010.f_201;

	if (hParam0 != 0)
	{
		if (num < 200)
		{
			for (i = 0; i < num; i = i + 1)
			{
				if (Global_1914319.f_17378.f_1010[i] == hParam0)
					return 1;
			}
		}
	}

	return 0;
}

BOOL func_560(Hash hParam0, int iParam1) // Position - 0x138F9 Hash - 0xBD05594F ^0xF2BC2977
{
	if (func_62() == -1)
		if (iParam1 == 61)
			if (func_111(hParam0, 1490540191))
				return true;

	return false;
}

BOOL func_561(Hash hParam0, int iParam1) // Position - 0x13923 Hash - 0x83A1723C ^0x83A1723C
{
	var unk;
	int num;
	Hash hash;

	if (hParam0 == 0)
		return 0;

	if (iParam1 == -1)
		return 0;

	num = func_799(iParam1);

	if (num == -1)
		return 0;

	if (!func_500(6, &unk))
		return 0;

	unk.f_2 = -815325344;
	unk.f_3 = func_800(num);

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

Hash func_562() // Position - 0x139A5 Hash - 0x766C9B31 ^0xDB0EFDF8
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689.f_9468))
		return Global_1935689.f_9467;

	return Global_1935689.f_9464;
}

BOOL func_563(Hash hParam0) // Position - 0x139CF Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

int func_564(Hash hParam0) // Position - 0x139E5 Hash - 0x5FC245A8 ^0x222CF07D
{
	if (func_161(hParam0, 0))
	{
		if (func_111(hParam0, -1242251796))
		{
			if (func_111(hParam0, 2060589226))
				return func_46();
		
			return func_45();
		}
		else if (func_111(hParam0, 1919582297))
		{
			return func_36();
		}
		else if (func_111(hParam0, 1147021565))
		{
			return func_35();
		}
	}

	if (Global_1935496.f_12)
		return func_45();
	else
		return func_35();

	return func_35();
}

BOOL func_565(Hash hParam0) // Position - 0x13A6F Hash - 0xE3FE29A5 ^0x72E17A42
{
	if (func_111(hParam0, 1147021565) || func_111(hParam0, -136654233) || func_111(hParam0, -524514947) || func_111(hParam0, -1238310989) || func_111(hParam0, 1765172170) || func_111(hParam0, 1490540191) || func_111(hParam0, 1573112293) || func_111(hParam0, -1242251796) || func_111(hParam0, 1919582297) || func_111(hParam0, -2085281117) || hParam0 == joaat("consumable_offal"))
		return true;

	return false;
}

void func_566(int iParam0, int iParam1) // Position - 0x13B31 Hash - 0xC0D8FAC3 ^0xE4233006
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);

	if (iParam1 == 1)
		func_801(true);

	return;
}

void func_567(int iParam0) // Position - 0x13B4A Hash - 0x23AE6B73 ^0x23AE6B73
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
	
		func_566(Global_40.f_11922[i], 0);
		Global_40.f_11922[i] = 0;
		num = 1;
	}

	if (num == 1)
		func_801(true);

	return;
}

BOOL func_568(int iParam0) // Position - 0x13BB8 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

void func_569(int iParam0, int iParam1) // Position - 0x13BEB Hash - 0xB1BDF10D ^0xB21C30B2
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_3 = iParam1;
	return;
}

int func_570(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, const char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0x13C0B Hash - 0x51CE9407 ^0x19439D00
{
	int num;
	int num2;
	int num3;

	num = -2;
	num = iParam7;
	num.f_1 = sParam8;
	num.f_2 = sParam9;
	num.f_3 = iParam11;
	num.f_4 = iParam4;
	num.f_4.f_1 = iParam6;
	num.f_4.f_2 = sParam5;
	num2.f_7 = 1;
	num2 = iParam10;
	num2.f_1 = sParam0;
	num2.f_2 = sParam1;
	num2.f_3 = 0;
	num2.f_4 = hParam2;
	num2.f_5 = hParam3;
	num3 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&num, &num2, bParam12, bParam13);
	return num3;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(Hash hParam0) // Position - 0x13C82 Hash - 0xA17D549C ^0x1A6D4390
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			return "COL_CC_INV_SET";
	
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			return "COL_CC_ACT_SET";
	
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			return "COL_CC_GRL_SET";
	
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			return "COL_CC_ART_SET";
	
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			return "COL_CC_LND_SET";
	
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			return "COL_CC_PAM_SET";
	
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			return "COL_CC_SPT_SET";
	
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			return "COL_CC_AML_SET";
	
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			return "COL_CC_PLT_SET";
	
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			return "COL_CC_GUN_SET";
	
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			return "COL_CC_HOR_SET";
	
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return "COL_CC_VEH_SET";
	
		default:
		
	}

	return "";
}

int func_572(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x13D31 Hash - 0xB88D7AA5 ^0x36259347
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
	num2.f_4 = hParam2;
	num2.f_5 = hParam3;
	num3 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&num, &num2, bParam9, bParam10);
	return num3;
}

int func_573(Hash hParam0, int iParam1) // Position - 0x13D92 Hash - 0xB815F93D ^0xDF1F4B5F
{
	var unk;
	int num;

	if (!func_500(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, &unk);
	return num;
}

char* func_574(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0x13DC1 Hash - 0xF20034E5 ^0xB09CC078
{
	switch (iParam1)
	{
		case joaat("CIGARETTE_CARDS"):
			if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_CC_COMPLETE";
			else if (func_382() >= 12)
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_802(), 12);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_803(), 12);
			break;
	
		case -1531394072:
			if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_EX_COMPLETE";
			else
				sParam3 = MISC::VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", iParam4, iParam5);
			break;
	
		case joaat("dino_bones"):
			if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_DB_COMPLETE";
			else if (func_688() >= 30)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_804(), 30);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_688(), 30);
			break;
	
		case joaat("taxidermy"):
			if (iParam2 == 3)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			else if (iParam2 == 4)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_READ_VACATION");
			else if (iParam2 == 5)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_ON_VACATION");
			else if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			else if (iParam2 == 8)
				sParam3 = "COL_TX_COMPLETE";
			else
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", iParam4, func_573(iParam6, 20));
			break;
	
		case 1995362678:
			if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_LF_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_LF_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_LF_COMPLETE";
			else
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_805(), 13);
			break;
	
		case joaat("rock_carvings"):
			if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_RC_COMPLETE";
			else if (func_689() >= 10)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_806(), 10);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_689(), 10);
			break;
	}

	return sParam3;
}

BOOL func_575(int iParam0, Hash hParam1, Hash hParam2) // Position - 0x140B1 Hash - 0xC978E890 ^0x1621426E
{
	if (hParam2 == joaat("CIGARETTE_CARDS"))
		if (hParam1 == joaat("col_cc_intro"))
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("col_cc_intro_pre")))
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("col_cc_intro_pre"));
	else if (hParam2 == joaat("dino_bones"))
		if (hParam1 == joaat("col_db_intro"))
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("col_db_intro_pre")))
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("col_db_intro_pre"));
	else if (hParam2 == joaat("rock_carvings"))
		if (hParam1 == joaat("col_rc_intro"))
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("col_rc_intro_pre")))
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("col_rc_intro_pre"));

	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hParam1))
		UILOG::_UILOG_REMOVE_ENTRY(3, hParam1);

	return true;
}

BOOL func_576(int iParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, char* sParam5, char* sParam6) // Position - 0x1415E Hash - 0xC1094219 ^0x58B3963B
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hParam1))
		UILOG::_UILOG_ADD_ENTRY_HASH(3, hParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);

	return true;
}

BOOL func_577(int iParam0, Hash hParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, Hash hParam6, Hash hParam7) // Position - 0x1418A Hash - 0xD1184F03 ^0x47C2A228
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, hParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, hParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, hParam1, hParam6, hParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, hParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

BOOL func_578(int iParam0, Hash hParam1, Hash hParam2, int iParam3, Hash hParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0x141D9 Hash - 0x486F524F ^0x64D8785E
{
	int i;
	BOOL flag;
	Hash hash;

	flag = false;

	for (i = 0; i < iParam6; i = i + 1)
	{
		if (hParam2 == joaat("CIGARETTE_CARDS"))
		{
			hash = func_807(i);
		
			if (hParam4 == hash)
				flag = true;
			else
				flag = func_257(hash, 1, false) || func_809(func_808(hash));
		
			if (iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_807(i))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_807(i)), flag, true, false);
		}
	
		if (hParam2 == joaat("dino_bones"))
		{
			if (i == 0)
			{
				flag = func_688() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_810(i)), func_810(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_804() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_810(i)), func_810(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_810(i)), func_810(i), flag, true, false);
			}
		}
	
		if (hParam2 == -1531394072)
		{
			hash = func_699(iParam3, func_811(i));
		
			if (iParam5 == 8)
				flag = true;
			else if (bParam9)
				if (hParam4 == hash)
					flag = func_695(hash) - iParam7 >= func_573(iParam3, func_812(i));
				else
					flag = func_695(hash) >= func_573(iParam3, func_812(i));
			else if (hParam4 == hash)
				flag = func_695(hash) + iParam7 >= func_573(iParam3, func_812(i));
			else
				flag = func_695(hash) >= func_573(iParam3, func_812(i));
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(hash)), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(hash), flag, true, false);
		}
	
		if (hParam2 == 1995362678)
		{
			if (func_814(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
				flag = true;
			else if (iParam5 == 8)
				flag = true;
			else
				flag = false;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, hParam2, 0))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, hParam2, 0)), flag, true, false);
		}
	
		if (hParam2 == joaat("rock_carvings"))
		{
			if (i == 0)
			{
				flag = func_689() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_816(i)), func_816(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_806() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_816(i)), func_816(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_816(i)), func_816(i), flag, true, false);
			}
		}
	
		if (hParam2 == joaat("taxidermy"))
		{
			hash = func_699(iParam3, func_811(i));
		
			if (bParam9)
				if (hParam4 == hash)
					flag = func_695(hash) - iParam7 >= 1;
				else
					flag = func_817(hash);
			else if (hParam4 == hash)
				flag = true;
			else
				flag = func_817(hash);
		
			if (iParam5 == 7 || iParam5 == 3 || iParam5 == 4 || iParam5 == 5 || iParam5 == 0 || iParam5 == 1 || iParam5 == 2 || iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_818(hash)), func_818(hash), flag, true, false);
		}
	}

	return true;
}

BOOL func_579(int iParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x1454E Hash - 0x3C34F826 ^0x3C164EEB
{
	BOOL flag;

	flag = false;

	if (iParam3 == 8)
		flag = true;
	else
		flag = false;

	if (hParam2 == joaat("CIGARETTE_CARDS"))
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", flag, true, false);

	if (hParam2 == -1531394072)
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", flag, true, false);

	if (hParam2 == 1995362678)
	{
		if (func_805() >= 13)
			flag = true;
		else
			flag = false;
	
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", flag, true, false);
	}

	if (iParam3 == 7 || iParam3 == 3 || iParam3 == 4 || iParam3 == 5 || iParam3 == 0 || iParam3 == 1 || iParam3 == 2 || iParam3 == 8)
		flag = true;
	else
		flag = false;

	if (hParam2 == joaat("taxidermy"))
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", flag, true, false);

	return true;
}

BOOL func_580(int iParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x14657 Hash - 0xBE0BA427 ^0x588A6FB8
{
	if (func_568(func_819(0)) && func_820(0) == 1 || func_820(0) == 8 || func_820(0) == 6)
		iParam3 = 7;

	if (hParam2 == joaat("dino_bones") || hParam2 == 1995362678 || hParam2 == joaat("rock_carvings"))
	{
		if (iParam3 == 7)
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, hParam1, 1, "");
	}
	else if (hParam2 == joaat("taxidermy"))
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, hParam1, 1, "");
			}
		}
	}

	return true;
}

int func_581(int iParam0) // Position - 0x146F7 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_568(iParam0))
		return -1;

	return func_821(iParam0);
}

int func_582() // Position - 0x14713 Hash - 0x6AC5469B ^0xEA730EC
{
	Hash weaponHash;
	int weaponHash2;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
		return 1;

	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash2, true, 1, false);

	if (weaponHash2 == joaat("WEAPON_UNARMED"))
		if (weaponHash == joaat("WEAPON_UNARMED"))
			return 1;
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) && !func_822(weaponHash) && !PED::IS_PED_FULLY_ON_MOUNT(Global_35, true) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
			return 3;
		else if (weaponHash == joaat("weapon_kit_binoculars"))
			return 1;
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && func_822(weaponHash) || weaponHash == joaat("WEAPON_LASSO"))
			return 1;
		else
			return 0;
	else if (weaponHash == joaat("WEAPON_UNARMED"))
		return 1;
	else
		return 0;

	return 0;
}

void func_583(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x14809 Hash - 0x7DB16548 ^0xD430BAB
{
	if (!TASK::CAN_START_ITEM_INTERACTION(pedParam0, hParam1, hParam2, iParam3))
	{
		ATTRIBUTE::STOP_ITEM_PREVIEW();
	}
	else
	{
		TASK::START_TASK_ITEM_INTERACTION(pedParam0, hParam1, hParam2, iParam3, 0, -1082130432);
		Global_1935496.f_26 = 1;
	}

	return;
}

void func_584(Hash hParam0, BOOL bParam1) // Position - 0x14841 Hash - 0x87EB26BF ^0x55136C8F
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
	var unk28;
	var unk29;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;

	outData.f_1 = 20;

	if (func_111(hParam0, 1573112293) || func_111(hParam0, 672467738) || func_111(hParam0, -550842268))
		flag = true;

	if (func_119(hParam0) == joaat("consumable"))
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
				health = func_823(0, outData2.f_2);
				func_824(outData2.f_2, true);
				func_825(0, 7000);
				flag3 = true;
			}
			else if (-1104847406 == outData2.f_1)
			{
				deadeye = func_823(2, outData2.f_2);
				func_826(outData2.f_2);
				func_825(2, 7000);
				flag2 = true;
			}
			else if (381158954 == outData2.f_1)
			{
				stamina = func_823(1, outData2.f_2);
				func_827(outData2.f_2);
				func_825(1, 7000);
			}
			else if (joaat("EFFECT_HEALTH_CORE") == outData2.f_1)
			{
				num = func_828(outData2.f_2, outData2.f_5);
			
				if (func_829(&unk28, &unk29, num))
				{
					func_830(num, true, flag, bParam1);
					func_825(0, 7000);
				}
			
				flag3 = true;
			}
			else if (joaat("EFFECT_DEADEYE_CORE") == outData2.f_1)
			{
				num2 = func_828(outData2.f_2, outData2.f_5);
			
				if (func_829(&unk28, &unk29, num2))
				{
					func_831(num2, true, flag, bParam1);
					func_825(2, 7000);
				}
			
				flag2 = true;
			}
			else if (joaat("EFFECT_STAMINA_CORE") == outData2.f_1)
			{
				num3 = func_828(outData2.f_2, outData2.f_5);
			
				if (func_829(&unk28, &unk29, num3))
				{
					func_832(num3, true, flag, bParam1);
					func_825(1, 7000);
				}
			}
			else if (joaat("Effect_Health_Core_Gold") == outData2.f_1)
			{
				num4 = func_833(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_834(19, num4);
				flag3 = true;
			}
			else if (joaat("Effect_Deadeye_Core_Gold") == outData2.f_1)
			{
				num4 = func_833(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_834(20, num4);
				flag2 = true;
			}
			else if (joaat("Effect_Stamina_Core_Gold") == outData2.f_1)
			{
				num4 = func_833(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_834(18, num4);
			}
			else if (1869697234 == outData2.f_1)
			{
				num4 = func_833(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_834(0, num4);
				flag3 = true;
			}
			else if (1342237631 == outData2.f_1)
			{
				num4 = func_833(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_834(2, num4);
				flag2 = true;
			}
			else if (-1240225157 == outData2.f_1)
			{
				num4 = func_833(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_834(1, num4);
			}
			else if (-816334026 == outData2.f_1)
			{
				func_835(BUILTIN::TO_FLOAT(outData2.f_2), true);
			}
		}
	
		if (flag3)
			if (num > 0f || health > 0f)
				flag4 = true;
	
		if (flag4 || func_111(hParam0, -537818634))
			func_398(func_638(joaat("medicine_items_used")), 1);
	
		if (func_111(hParam0, -1457797660))
			func_398(func_638(joaat("provision_items_used")), 1);
	
		if (flag2)
			func_398(func_638(joaat("DEADEYE_ITEMS_USED")), 1);
	
		PLAYER::_SET_USED_ITEM_EFFECT(health, stamina, deadeye, BUILTIN::ROUND(num / 2f), BUILTIN::ROUND(num3 / 2f), BUILTIN::ROUND(num2 / 2f));
	}

	return;
}

BOOL func_585(Ped pedParam0, Hash hParam1, BOOL bParam2) // Position - 0x14BB1 Hash - 0xC5F24F4E ^0x107F90DC
{
	if (!bParam2)
		if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
			return false;

	return PED::_IS_META_PED_USING_COMPONENT(pedParam0, hParam1);
}

void func_586(int iParam0, BOOL bParam1, int iParam2) // Position - 0x14BD5 Hash - 0x50964517 ^0x50964517
{
	int num;
	int num2;

	num = func_836(iParam0);
	num2 = func_260(&num);

	if (num2 != iParam0)
		func_837(num2, 4);

	if (!func_545(iParam0))
		return;

	if (func_261(iParam0))
		return;

	func_837(iParam0, 4);
	func_838(iParam0, bParam1);

	if (!func_839(iParam0))
		func_840(iParam0, true, false);

	if (bParam1)
		if (!func_470(0, false, true))
			func_657(true, 6);

	return;
}

void func_587(int iParam0) // Position - 0x14C4B Hash - 0xF3266748 ^0x6568F713
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		if (iParam0 == 1)
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");

	return;
}

BOOL func_588(eStackSize essParam0) // Position - 0x14C91 Hash - 0x76C5FB13 ^0x76C5FB13
{
	if (essParam0 < 0 || essParam0 >= 95)
		return false;

	return true;
}

BOOL func_589(eStackSize essParam0, BOOL bParam1) // Position - 0x14CB0 Hash - 0xA750EBE5 ^0xA750EBE5
{
	if (!func_588(essParam0))
		return false;

	return Global_40.f_7157[essParam0 /*3*/] && bParam1 != false;
}

BOOL func_590(Ped pedParam0) // Position - 0x14CD5 Hash - 0xD9604B15 ^0x3B7B69F4
{
	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	if (func_521(Global_35, pedParam0, false, true) < 2f && PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_35, pedParam0))
		return true;

	return false;
}

BOOL func_591(int iParam0) // Position - 0x14D0D Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_592(int iParam0) // Position - 0x14D22 Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

BOOL func_593() // Position - 0x14D42 Hash - 0x8905DA1C ^0xB020CE54
{
	if (Global_1946054.f_2793)
		return true;

	if (MISC::ABSI(MISC::GET_GAME_TIMER() - Global_1946054.f_2791) < 1250)
		return true;

	if (func_841())
		return true;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
		return true;

	return false;
}

BOOL func_594(Hash hParam0) // Position - 0x14D8C Hash - 0x76026CA6 ^0xF319C9CA
{
	Hash hash;

	hash = func_121(hParam0);

	if (hash == 81053684 || hash == -525676072)
		return 1;

	return 0;
}

BOOL func_595(Hash hParam0) // Position - 0x14DBA Hash - 0x2073EBE2 ^0x2073EBE2
{
	Hash hash;

	if (hParam0 == 0)
		return 0;

	hash = 0;

	if (func_601(&hash))
		if (hParam0 == hash)
			return 1;

	return 0;
}

BOOL func_596(var uParam0) // Position - 0x14DE4 Hash - 0xF2A750AD ^0xEE67A154
{
	if (-1829635046 == func_842(81053684))
		if (func_601(uParam0))
			return true;
	else if (func_843(-525676072, uParam0))
		if (func_601(uParam0))
			return true;

	return false;
}

Hash func_597() // Position - 0x14E29 Hash - 0xFCC5278F ^0xAA4EF978
{
	int num;

	num = joaat("mask_off_left_hand");

	switch (func_582())
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

Hash func_598() // Position - 0x14E80 Hash - 0xFCC5278F ^0x56FDCD49
{
	int num;

	num = joaat("bandana_off_left_hand");

	switch (func_582())
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

Hash func_599() // Position - 0x14ED7 Hash - 0xFCC5278F ^0xB987E402
{
	int num;

	num = joaat("mask_on_left_hand");

	switch (func_582())
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

Hash func_600() // Position - 0x14F2E Hash - 0xFCC5278F ^0xD976DFE7
{
	int num;

	num = joaat("bandana_on_left_hand");

	switch (func_582())
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

BOOL func_601(var uParam0) // Position - 0x14F85 Hash - 0x313F44CF ^0x6235E18A
{
	if (func_843(81053684, uParam0))
		return true;

	if (func_843(-525676072, uParam0))
		return true;

	return false;
}

void func_602(var uParam0) // Position - 0x14FB2 Hash - 0x7C3D914C ^0xB1998A7B
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;

	if (uParam0->f_12)
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_13);

	uParam0->f_12 = 0;
	return;
}

void func_603(BOOL bParam0) // Position - 0x15010 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1946054 = Global_1946054 - Global_1946054 && bParam0;
	return;
}

void func_604(int iParam0, int iParam1, int iParam2) // Position - 0x15028 Hash - 0x8A858A95 ^0xC4492E92
{
	Global_1946054.f_57[func_334(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_334(iParam0, 1) /*11*/].f_10 - Global_1946054.f_57[func_334(iParam0, 1) /*11*/].f_10 && iParam1;
	return;
}

int func_605(int iParam0, BOOL bParam1) // Position - 0x15067 Hash - 0x6C404ADF ^0x7D516F33
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946054.f_2657.f_21;
	
		case -1719060085:
			return Global_1946054.f_2657.f_24;
	
		case -999503751:
			if (bParam1)
				return Global_1946054.f_2657.f_20;
			else
				return func_844();
			break;
	
		case -525676072:
			return Global_1946054.f_2657.f_22;
	
		case -413129408:
			return Global_1946054.f_2657.f_25;
	
		case 81053684:
			return Global_1946054.f_2657.f_23;
	}

	return 0;
}

int func_606(int iParam0, BOOL bParam1) // Position - 0x150F6 Hash - 0x14DDA26B ^0xFFF4A8D0
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case -2061583405:
			num = Global_1946054.f_2657.f_26.f_1;
			break;
	
		case -1719060085:
			num = 1;
			break;
	
		case -999503751:
			num = Global_1946054.f_2657.f_26;
			break;
	
		case -525676072:
			num = Global_1946054.f_2657.f_26.f_2;
			break;
	
		case -413129408:
			num = 1;
			break;
	
		case 81053684:
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

BOOL func_607(Hash hParam0) // Position - 0x15199 Hash - 0x701FABE1 ^0x8D951E11
{
	if (func_62() == -1)
		if (Global_40.f_4283 != 0)
			if (hParam0 == 1164374808)
				return false;

	return true;
}

BOOL func_608(Hash hParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x151C2 Hash - 0x23FDC0AC ^0x7E5464B5
{
	var unk;
	Hash hash;

	hash = hParam0;

	if (Global_1946054.f_2657.f_19 >= 18)
		return 0;

	if (*iParam1 >= iParam2)
		return 0;

	if (func_508(hash, &unk))
		return 0;

	if (bParam3 && !func_845(hParam0, false))
		return 0;

	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = hash;

	if (func_121(hParam0) != -999503751)
		func_846(&(Global_1946054.f_2657.f_26.f_26), hParam0, Global_1946054.f_2657.f_19);

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 + 1;
	*iParam1 = *iParam1 + 1;
	return 1;
}

int func_609(Hash hParam0, BOOL bParam1) // Position - 0x1526A Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_153(hParam0, false, false) };
	guid = { func_154(hParam0, unk, unk.f_4, false) };

	if (func_340(hParam0, unk, unk.f_4, false) <= 0)
		return 0;

	INVENTORY::_0x0349404A22736740(bParam1, func_199(false), &guid);
	return 1;
}

int func_610() // Position - 0x152B6 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1946054.f_1;
}

void func_611() // Position - 0x152C4 Hash - 0x859243 ^0xC9B77C68
{
	int i;

	if (func_62() == -1)
	{
		for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
		{
			Global_26796[i] = Global_1946054.f_2657[i];
		}
	
		Global_26796.f_20 = Global_1946054.f_2657.f_20;
		Global_26796.f_21 = Global_1946054.f_2657.f_21;
		Global_26796.f_22 = Global_1946054.f_2657.f_22;
		Global_26796.f_23 = Global_1946054.f_2657.f_23;
		Global_26796.f_24 = Global_1946054.f_2657.f_24;
		Global_26796.f_19 = Global_1946054.f_2657.f_19;
		return;
	}

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		Global_36638.f_45.f_350[i] = Global_1946054.f_2657[i];
	}

	Global_36638.f_45.f_350.f_20 = Global_1946054.f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946054.f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946054.f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946054.f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946054.f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946054.f_2657.f_19;
	return;
}

void func_612(BOOL bParam0, BOOL bParam1) // Position - 0x153FA Hash - 0x4F2782D4 ^0x9FBFC876
{
	if (bParam1)
		func_847(0);

	if (bParam0)
	{
		func_322(8);
		func_322(512);
	}
	else
	{
		func_322(8);
		func_322(16);
	}

	return;
}

void func_613(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x1542D Hash - 0x50C09208 ^0x50C09208
{
	func_848(hParam0, false, false);
	func_330(hParam1, true, bParam2, false);
	return;
}

int func_614(int iParam0, int iParam1) // Position - 0x15447 Hash - 0xE1D12727 ^0xA46110B3
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
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHIN");
	
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

void func_615() // Position - 0x15696 Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1378 = Global_1946054.f_1497;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1378.f_1[i /*3*/] = { Global_1946054.f_1497.f_1[i /*3*/] };
	}

	return;
}

int func_616(Hash hParam0) // Position - 0x156DD Hash - 0xAD4E1DF8 ^0x7BAA459F
{
	int num;
	int num2;

	num = 0;
	num2 = 22;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_111(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 37;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_111(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 12;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_111(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 29;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_111(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 30;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_111(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 31;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_111(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	return num;
}

void func_617(int iParam0) // Position - 0x1582E Hash - 0x65A082AE ^0x65A082AE
{
	func_604(iParam0, 8, 6);
	return;
}

void func_618(int iParam0) // Position - 0x1583F Hash - 0x20214C72 ^0x20214C72
{
	func_849(&(Global_1946054.f_2589), iParam0);
	return;
}

void func_619(int iParam0, int iParam1) // Position - 0x15854 Hash - 0x2AD6C09E ^0x2AD6C09E
{
	func_850(&(Global_1946054.f_2589), iParam0, iParam1);
	return;
}

void func_620(Hash hParam0, int iParam1, int iParam2) // Position - 0x1586B Hash - 0xDEDED6D0 ^0xA620FD73
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_621(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1587E Hash - 0xC0B7C171 ^0x28B721CF
{
	int num;
	int num2;
	Hash hash;
	int num3;

	num2 = 12;
	hash = func_121(hParam0->f_1[iParam2 /*3*/]);
	num3 = 0;

	if (bParam3)
		num3 = 3;

	if (func_851(iParam2, 65536) && hParam0->f_1[num2 /*3*/] == -452402570)
	{
		hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		hParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_619(num2, num3);
	}

	if (func_713(-1586649372) && func_851(iParam2, 524288))
	{
		num2 = 33;
		hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		hParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_619(num2, num3);
	}

	switch (hash)
	{
		case -1719060085:
		case -852381396:
		case 153430294:
		case 1033860813:
		case 1096747416:
		case 1282123855:
			func_852(hParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case -1423861687:
			func_852(hParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			num2 = 16;
		
			if (hParam0->f_1[num2 /*3*/].f_1 == joaat("base"))
			{
				hParam0->f_1[num2 /*3*/].f_1 = -1539589426;
			
				if (bParam4)
					func_619(num2, num3);
			}
		
			if (hParam0->f_1[num2 /*3*/].f_1 == 1530758430)
			{
				hParam0->f_1[num2 /*3*/].f_1 = 1334603721;
			
				if (bParam4)
					func_619(num2, num3);
			}
			break;
	
		case -923693316:
			num2 = 36;
		
			if (hParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				hParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				hParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_619(num2, num3);
			}
		
			if (hParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_853(Global_1946054.f_1497.f_1[num2 /*3*/]) || func_111(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				hParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				hParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_619(num2, num3);
			}
			break;
	
		case -839140560:
			if (hParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				num2 = 37;
			
				if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_619(num2, num3);
				}
			
				num2 = 38;
			
				if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_619(num2, num3);
				}
			
				num2 = 35;
			
				if (-923693316 == func_121(hParam0->f_1[num2 /*3*/]))
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_619(num2, num3);
				}
			}
			else
			{
				num2 = 35;
			
				if (func_853(hParam1) && hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && -923693316 == func_121(hParam0->f_1[num2 /*3*/]))
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_619(num2, num3);
				}
			}
			break;
	
		case -497931013:
			func_852(hParam0, true & bParam4, false, true, bParam3);
			break;
	
		case 688587926:
			func_852(hParam0, false, true & bParam4, true & bParam4, bParam3);
			num2 = 22;
		
			if (hParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				break;
		
			num = 16;
		
			if (hParam0->f_1[num /*3*/].f_1 == joaat("base") || hParam0->f_1[num /*3*/].f_1 == 1530758430)
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_619(num2, num3);
			}
			break;
	
		case 698653232:
			if (hParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				num2 = 12;
			
				if (hParam0->f_1[num2 /*3*/] == joaat("clothing_hl_player_necktie_004_3"))
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_619(num2, num3);
				}
			}
		
			func_852(hParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case 1769055947:
			num2 = 36;
		
			if (hParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_111(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				hParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				hParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_619(num2, num3);
			}
			break;
	
		case 1868067663:
			func_852(hParam0, true & bParam4, true & bParam4, false, bParam3);
			num2 = 22;
		
			if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_619(num2, num3);
			}
			break;
	}

	switch (func_121(hParam1))
	{
		case -525676072:
			num2 = 12;
		
			if (81053684 == func_121(hParam0->f_1[num2 /*3*/]) || func_111(hParam0->f_1[num2 /*3*/], 866047851))
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_619(num2, num3);
			}
			break;
	
		case 81053684:
			num2 = 10;
		
			if (-525676072 == func_121(hParam0->f_1[num2 /*3*/]))
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_619(num2, num3);
			}
			break;
	}

	return;
}

Hash func_622(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3) // Position - 0x15EC2 Hash - 0x68649B2F ^0x68649B2F
{
	BOOL flag;

	flag = func_854(0);

	if (hParam2 != 0 && func_855(hParam0, flag, hParam2, bParam3) != -1)
		return hParam2;

	if (func_856(hParam0, func_614(iParam1, 1), &hParam2))
		return hParam2;

	return 0;
}

void func_623(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x15F08 Hash - 0xE06CF505 ^0xBC49746F
{
	int num;
	int num2;
	int i;
	int num3;
	int num4;
	int num5;
	BOOL flag;
	BOOL flag2;
	int num6;

	flag = func_62() != -1;
	flag2 = func_854(0);

	if (func_327(32768))
		num2 = num2 + 1;

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num5 = func_614(num, 1);
		
			if (func_857(num5, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
			{
			}
			else if (func_857(num5, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
			{
			}
			else
			{
				num4 = func_858(hParam0->f_1[num /*3*/], num5, flag2, flag);
			
				if (num2 + num4 > 31)
				{
					num3 = i;
					break;
				}
			
				num2 = num2 + num4;
			}
		}
	}

	num6 = func_859(hParam0);

	if (num3 > 0)
	{
		if (!func_327(524288))
		{
			func_322(524288);
			num2 = num2 - num6;
		}
	
		for (i = num3; i <= 38; i = i + 1)
		{
			num = Global_1946054.f_57.f_430[i];
		
			if (num <= -1 || num >= 39)
			{
			}
			else
			{
				num5 = func_614(num, 1);
			
				if (func_857(num5, 8))
				{
				}
				else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
				{
				}
				else if (func_857(num5, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
				{
				}
				else
				{
					num4 = func_858(hParam0->f_1[num /*3*/], num5, flag2, flag);
				
					if (num2 + num4 > 31)
					{
						hParam0->f_1[num /*3*/] = Global_1946054.f_57[num /*11*/];
						hParam0->f_1[num /*3*/].f_1 = 0;
					
						if (bParam1)
							func_619(num, iParam2);
					}
				
					num2 = num2 + num4;
				}
			}
		}
	}

	if (num2 + num6 < 31)
		func_603(524288);

	return;
}

void func_624(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x16125 Hash - 0x234E957C ^0xF69883
{
	int i;

	if (*iParam0 <= 0)
		return;

	for (i = 0; i < *iParam0; i = i + 1)
	{
		func_860(iParam0->f_2[i /*2*/], bParam1, bParam2);
	}

	if (func_62() == -1)
	{
		if (Global_40.f_7729 != 0 || !func_861(2, Global_26796.f_776) || Global_1946054.f_1497 != func_862(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096;
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] | 4096;
				Global_1946054.f_1497 = func_862(Global_40.f_7729);
				Global_1946054.f_1378 = func_862(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_863(-1, false, 6);
			}
		}
	}

	if (bParam3)
		func_612(false, true);

	return;
}

BOOL func_625(int iParam0, int iParam1) // Position - 0x16244 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_626(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x16253 Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_591(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_591(20))
				return;
		}
	}

	func_592(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_322(8);
	return;
}

BOOL func_627() // Position - 0x16357 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1914319.f_17375;
}

BOOL func_628() // Position - 0x16366 Hash - 0xF0382EDE ^0x243CDD32
{
	int ransackScenarioPointPedIsUsing;

	if (func_779())
	{
		ransackScenarioPointPedIsUsing = TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		return ransackScenarioPointPedIsUsing != 0;
	}

	return false;
}

BOOL func_629() // Position - 0x16387 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1898068;
}

var func_630(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x16393 Hash - 0x63C3F71D ^0x3019B977
{
	var value;
	Player bitIndex;
	int i;
	BOOL flag;
	BOOL flag2;
	Player player;
	Any any;
	BOOL flag3;
	Volume volume;
	BOOL flag4;
	Player player2;
	Ped playerPed;

	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&value);

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return value;

	if (func_864() != 0)
	{
		bitIndex = PLAYER::PLAYER_ID();
	
		if (bitIndex >= 0 && bitIndex < 32)
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, bitIndex);
	
		return value;
	}

	i = 0;
	flag = false;
	flag2 = false;
	player = Global_1224589.f_5;
	any = Global_1224589.f_9;
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_865());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_865());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_865());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_866(PLAYER::GET_PLAYER_TEAM(player));

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
		if (Global_1224589.f_16[i])
		{
			player2 = Global_1224589.f_115[i];
			flag = false;
			flag2 = false;
		
			if (flag4 & true != 0 && player2 == player)
				flag = true;
		
			if (func_867(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1224589.f_49[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_868(i) != 1)
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
					if (GANG::NETWORK_GET_GANG_ID(player2) != any)
						flag = true;
		
			if (!flag)
				if (flag4 & 65536 != 0)
					if (!func_869(player2))
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

int func_631(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18) // Position - 0x16722 Hash - 0xDAC4446E ^0x51EF643B
{
	if (!func_870(uParam0))
		return 0;

	uParam0->f_2[*uParam0 /*18*/] = { uParam1 };
	*uParam0 = *uParam0 + 1;
	return 1;
}

void func_632(Hash hParam0, var uParam1, var uParam2) // Position - 0x16752 Hash - 0x38E6C2DD ^0xA4FE6475
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

BOOL func_633() // Position - 0x1695E Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1911774;
}

void func_634(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1696B Hash - 0xD988E1C5 ^0xEB41314B
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = hParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = bParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = bParam3;

	if (Global_1911774.f_3 < 20)
		Global_1911774.f_3 = Global_1911774.f_3 + 1;

	return;
}

var func_635(BOOL bParam0, var uParam1, var uParam2) // Position - 0x169D5 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_636(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x169EC Hash - 0x92B705D3 ^0xB783F681
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

int func_637(const char* sParam0, const char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x16ADF Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_871(sParam0, sParam1, hParam2);
	return num2;
}

struct<2> func_638(int iParam0) // Position - 0x16B42 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

void func_639(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x16B52 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

void func_640(Hash hParam0, int iParam1) // Position - 0x16B6D Hash - 0x86EED885 ^0xCCBC7389
{
	int num;

	num = 0;

	if (func_62() == -1)
	{
		if (func_281(43))
		{
			if (func_111(hParam0, 412399755))
			{
				func_692(joaat("exotic_stage_01"));
			
				if (func_693() == 0)
				{
					func_657(false, 10);
					num = func_872(hParam0, iParam1, 1);
				
					if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
						if (func_695(hParam0) < func_696(hParam0))
							func_285(43, hParam0, iParam1, joaat("exotic_stage_01"), num, true, -1, false);
				}
			}
		}
	
		if (func_281(44))
		{
			if (func_111(hParam0, 709057512))
			{
				func_692(joaat("exotic_stage_02"));
			
				if (func_693() == 1)
				{
					func_657(false, 10);
					num = func_872(hParam0, iParam1, 2);
				
					if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
						if (func_695(hParam0) < func_696(hParam0))
							func_285(43, hParam0, iParam1, joaat("exotic_stage_02"), num, true, -1, false);
				}
			}
		}
	
		if (!func_281(45))
		{
			if (func_111(hParam0, -1478961327))
			{
				func_692(joaat("exotic_stage_03"));
			
				if (func_693() == 2)
				{
					func_657(false, 10);
					num = func_872(hParam0, iParam1, 4);
				
					if (hParam0 == joaat("PROVISION_GATOR_EGG") || hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
						if (func_695(hParam0) < func_696(hParam0))
							func_285(43, hParam0, iParam1, joaat("exotic_stage_03"), num, true, -1, false);
				}
			}
		}
	
		if (!func_281(46))
		{
			if (func_111(hParam0, -1238404098))
			{
				func_692(joaat("exotic_stage_04"));
			
				if (func_693() == 3)
				{
					func_657(false, 10);
					num = func_872(hParam0, iParam1, 8);
				
					if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
						if (func_695(hParam0) < func_696(hParam0))
							func_285(43, hParam0, iParam1, joaat("exotic_stage_04"), num, true, -1, false);
				}
			}
		}
	
		if (!func_281(47))
		{
			if (func_111(hParam0, 1160548794))
			{
				func_692(joaat("exotic_stage_05"));
			
				if (func_693() == 4)
				{
					func_657(false, 10);
					num = func_872(hParam0, iParam1, 16);
				
					if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
						if (func_695(hParam0) < func_696(hParam0))
							func_285(43, hParam0, iParam1, joaat("exotic_stage_05"), num, true, -1, false);
				}
			}
		}
	}

	return;
}

BOOL func_641(int iParam0, int iParam1) // Position - 0x16E51 Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_62() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_642(int iParam0) // Position - 0x16E84 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_62() != -1)
		if (func_644(iParam0, 4))
			return false;
	else if (func_644(iParam0, 2))
		return false;

	return true;
}

BOOL func_643(int iParam0) // Position - 0x16EB4 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_644(iParam0, 65536) && !func_644(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_644(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_644(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_644(int iParam0, int iParam1) // Position - 0x16F60 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_645(int iParam0) // Position - 0x16F79 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_646() // Position - 0x16F8C Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

BOOL func_647(Hash hParam0) // Position - 0x16F9B Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_119(hParam0) == joaat("WEAPON");
}

BOOL func_648(Hash hParam0) // Position - 0x16FAF Hash - 0x8471597D ^0x85715A53
{
	var unk;

	if (func_62() != -1)
		return false;

	if (func_384(hParam0, 1048576))
		return false;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return func_653(hParam0, &unk, 1, false, false);

	return func_257(hParam0, 1, false);
}

void func_649(Hash hParam0, int iParam1, BOOL bParam2, var uParam3, Hash hParam4) // Position - 0x16FF3 Hash - 0x8D4768B0 ^0x68D8A424
{
	Hash weaponHash;

	if (func_119(hParam0) != joaat("WEAPON"))
		return;

	weaponHash = func_388(hParam0, false);

	if (!WEAPON::IS_WEAPON_VALID(weaponHash))
		return;

	if (bParam2 || !func_664(weaponHash))
	{
		if (func_62() == -1)
			func_389(weaponHash);
	
		if (bParam2 || !WEAPON::HAS_PED_GOT_WEAPON(Global_35, weaponHash, 0, false) && func_264(hParam0, false, false) == 0)
		{
			if (!*uParam3 && !(hParam4 == 1248274121))
			{
				func_360(hParam0, iParam1, false, false, false);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}

	return;
}

void func_650(Hash hParam0, var uParam1) // Position - 0x1709A Hash - 0xAE8D4BA4 ^0x3C850E20
{
	var unk;

	if (func_111(hParam0, 58855631))
	{
		func_873(hParam0, -915411861, &unk, true);
		*uParam1 = *uParam1 * unk;
	}

	return;
}

int func_651(Hash hParam0, BOOL bParam1) // Position - 0x170C8 Hash - 0xE0F47B47 ^0x52A64D28
{
	if (func_393(hParam0))
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_199(bParam1), hParam0, false);
}

BOOL func_652() // Position - 0x170F2 Hash - 0x221AE79E ^0x8AFE11D8
{
	if (func_62() != -1)
		return false;

	if (!func_280())
		return false;

	if (!func_296(Global_1835011[1 /*74*/].f_1, true))
		return true;

	if (func_296(Global_1835011[2 /*74*/].f_1, true) && func_296(Global_1347702[120 /*49*/].f_15, true) && !func_296(Global_1835011[4 /*74*/].f_1, true))
		return true;

	if (func_296(Global_1835011[37 /*74*/].f_1, true) && !func_296(Global_1835011[39 /*74*/].f_1, true))
		return true;

	if (func_296(Global_1835011[57 /*74*/].f_1, true) && !func_296(Global_1835011[60 /*74*/].f_1, true))
		return true;

	if (func_296(Global_1835011[26 /*74*/].f_1, true) && !func_296(Global_1347702[67 /*49*/].f_15, true))
		return true;

	if (func_296(Global_1835011[62 /*74*/].f_1, true) && func_296(Global_1835011[63 /*74*/].f_1, true) && !func_296(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_296(Global_1835011[75 /*74*/].f_1, true) && !func_296(Global_1347702[1 /*49*/].f_15, true))
		return true;

	if (func_296(Global_1835011[76 /*74*/].f_1, true) && !func_296(Global_1835011[77 /*74*/].f_1, true))
		return true;

	if (func_296(Global_1835011[40 /*74*/].f_1, true) && func_296(Global_1835011[41 /*74*/].f_1, true) && !func_296(Global_1835011[44 /*74*/].f_1, true))
		return true;

	if (func_296(Global_1835011[62 /*74*/].f_1, true) && func_296(Global_1835011[63 /*74*/].f_1, true) && !func_296(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_296(Global_1835011[65 /*74*/].f_1, true) && func_296(Global_1835011[66 /*74*/].f_1, true) && !func_296(Global_1835011[67 /*74*/].f_1, true))
		return true;

	return false;
}

BOOL func_653(Hash hParam0, Any* panParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x17338 Hash - 0x6FD18E8B ^0x7C3C83FA
{
	var unk;
	var unk5;
	var unk27;
	int num;
	int inventoryItemCountWithItemid;

	func_874(&hParam0);

	if (!func_161(hParam0, 0))
		return 0;

	if (!func_156(false))
		bParam3 = true;

	if (func_647(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		{
			unk = { func_440(false) };
			unk5.f_9 = joaat("SLOTID_NONE");
		
			if (!func_442(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
				return 0;
			else if (func_443(hParam0, &unk5, joaat("SLOTID_WEAPON_0")))
				return 0;
		
			if (func_441(hParam0, true))
				if (!func_442(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					return 0;
				else if (func_443(hParam0, &unk5, joaat("SLOTID_WEAPON_1")))
					return 0;
		}
		else if (!func_875(hParam0, &unk27, false))
		{
			return 0;
		}
	
		return 1;
	}

	num = func_554(hParam0, panParam1, bParam3, bParam4);

	if (num < 0)
		return 0;
	else if (num == 0)
		return 1;

	if (bParam3 || !func_795(hParam0))
		inventoryItemCountWithItemid = func_340(hParam0, *panParam1, panParam1->f_4, bParam4);
	else
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_199(bParam4), hParam0, false);

	if (inventoryItemCountWithItemid + iParam2 > num)
		return 1;

	return 0;
}

int func_654() // Position - 0x1747D Hash - 0xCF63D31C ^0x4A7E574E
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), 0);
}

Hash func_655(Hash hParam0) // Position - 0x1748F Hash - 0xD6E12BEB ^0xB2E8744E
{
	return COLLECTION::_0xEC3959E9950BF56B(hParam0);
}

void func_656(int iParam0) // Position - 0x1749D Hash - 0x246F2C0 ^0x1534606D
{
	int num;
	float value;

	if (func_62() != -1)
		return;

	num = func_876(iParam0);
	value = func_877(iParam0);

	if (Global_1347477.f_117 || !func_385(31) || !func_878(num))
		return;

	if (value <= 0f)
		return;

	if (func_879(num) >= 7)
		return;

	if (num == 1)
		value = value * (1f + Global_40.f_11095.f_57);
	else if (num == 0)
		value = value * (1f + Global_40.f_11095.f_55);
	else if (num == 2)
		value = value * (1f + Global_40.f_11095.f_56);

	value = value * (float)Global_1347477.f_182;
	value = BUILTIN::TO_FLOAT(BUILTIN::ROUND(value));
	func_880(num, Global_40.f_11095.f_11[num] + value, false);
	func_637(MISC::VAR_STRING(6, func_881(iParam0), value), "itemtype_textures", func_882(num), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

void func_657(BOOL bParam0, int iParam1) // Position - 0x1759C Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_883(&Global_0, 8);

	if (!func_280() || func_62() != -1)
		return;

	func_883(&Global_0, 1);
	return;
}

Hash func_658(int iParam0) // Position - 0x175E2 Hash - 0xB8EC44B7 ^0x693BD882
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET");
	
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET");
	
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET");
	
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET");
	
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET");
	
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET");
	
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET");
	
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET");
	
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET");
	
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET");
	
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET");
	
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET");
	
		default:
		
	}

	return 0;
}

BOOL func_659(int iParam0) // Position - 0x1769B Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_660(int iParam0) // Position - 0x176AE Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

void func_661(int iParam0) // Position - 0x176D8 Hash - 0x48EBE6BD ^0x358C7E90
{
	int num;
	int num2;
	int offset;
	int address;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	address = Global_40.f_7857[num2];
	MISC::SET_BIT(&address, offset);
	Global_40.f_7857[num2] = address;
	return;
}

void func_662(int iParam0) // Position - 0x17712 Hash - 0x3ECC2C39 ^0xB51AFDB0
{
	Hash hash;

	switch (iParam0)
	{
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
	
		case 2:
			if (!Global_1879534 && func_280() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
				func_572("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_150(586, false);
			break;
	
		case 3:
			if (!Global_1879534 && func_280() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
				func_572("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_150(587, false);
			break;
	
		case 4:
			if (!Global_1879534 && func_280() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
				func_572("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_150(588, false);
			break;
	
		case 5:
			if (!Global_1879534 && func_280() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
				func_572("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_150(589, false);
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
			func_884(true);
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
			break;
	
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_885(1);
			break;
	
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_885(2);
			break;
	
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_885(3);
			break;
	
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
	
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
	
		case 23:
			PLAYER::_SET_MOUNT_PROMPT_DISABLED(false);
			break;
	
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
		
			if (func_62() == -1)
			{
				if (!func_713(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_892(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_670())
						hash = -1515874150;
					else
						hash = joaat("clothing_sp_offhand_000");
				
					if (!func_257(hash, 1, false))
						func_433(hash, 1, 752097756);
				
					func_130(Global_35, hash, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
				}
			}
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
			break;
	
		case 33:
			func_886(true);
			break;
	
		case 34:
			func_887(true);
			break;
	
		case 35:
			func_888(true);
			break;
	
		case 36:
			break;
	
		case 37:
			func_889(false);
			break;
	
		case 38:
			func_890(false);
			break;
	
		case 39:
			func_891(false);
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
			break;
	
		case 45:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
	
		case 46:
			func_893();
			break;
	
		case 47:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
	
		case 48:
			if (func_62() == -1)
				if (!func_257(1013902307, 1, false))
					func_433(1013902307, 1, 752097756);
			break;
	
		case 49:
			if (func_62() == -1)
				if (!func_257(786809402, 1, false))
					func_433(786809402, 1, 752097756);
			break;
	
		case 50:
			if (func_62() == -1)
			{
				if (!func_257(1013902307, 1, false))
					func_433(1013902307, 1, 752097756);
			
				if (!func_257(142640135, 1, false))
					func_433(142640135, 1, 752097756);
			}
			break;
	
		case 51:
			if (func_62() == -1)
			{
				if (!func_257(786809402, 1, false))
					func_433(786809402, 1, 752097756);
			
				if (!func_257(-518019409, 1, false))
					func_433(-518019409, 1, 752097756);
			}
			break;
	
		case 52:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
	
		case 53:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
	
		case 54:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
	
		case 55:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("compendium"), true);
			break;
	
		case 56:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}

	return;
}

BOOL func_663(Hash hParam0) // Position - 0x17D3A Hash - 0x8C6B1607 ^0xB465A08C
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_VISIBLE(weaponUnlock))
		return true;

	return false;
}

BOOL func_664(Hash hParam0) // Position - 0x17D62 Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

BOOL func_665(Hash hParam0) // Position - 0x17D8A Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

Hash func_666(int iParam0, int iParam1) // Position - 0x17DA5 Hash - 0xEA82FE59 ^0xEA82FE59
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
	
		case 1:
			return -1783281882;
	
		case 2:
			return 1704602624;
	
		case 3:
			return 1214181762;
	
		case 4:
			return 1520605650;
	
		case 5:
			return 551482925;
	
		case 6:
			return 843929315;
	
		case 7:
			return 1974334822;
	
		case 8:
			return -1963435638;
	
		case 9:
			return -430578371;
	
		case 10:
			return -730381952;
	
		case 11:
			return -1500304973;
	
		case 12:
			return -253503777;
	
		case 13:
			return 1352275534;
	
		case 14:
			return 1666399168;
	
		case 15:
			return -1911121386;
	
		case 16:
			return 1756656691;
	
		case 17:
			return -1774867076;
	
		case 18:
			return -421952220;
	
		case 19:
			return -1087003323;
	
		case 20:
			return 1231618917;
	
		case 21:
			return -1183777174;
	
		case 22:
			return -841767082;
	
		case 23:
			return 1043717005;
	
		case 24:
			return 142663787;
	
		case 25:
			return 1718143051;
	
		case 26:
			return -6605744;
	
		case 27:
			return 953047564;
	
		case 28:
			return 769706682;
	
		case 29:
			return 1635590003;
	
		case 30:
			return -2047978619;
	
		case 31:
			return -586319254;
	
		case 32:
			return 249896112;
	
		case 33:
			return -1060513333;
	
		case 34:
			return 1317351007;
	
		case 35:
			return -500478573;
	
		case 36:
			return -806573802;
	
		case 37:
			return -1109949204;
	
		case 38:
			return -740156546;
	
		case 39:
			return -684532710;
	
		case 40:
			return 1158805436;
	
		case 41:
			return -559473670;
	
		case 42:
			return -797147251;
	
		case 43:
			return -382216265;
	
		case 44:
			return 1419177114;
	
		case 45:
			return 1704297235;
	
		case 46:
			return -1139016418;
	
		case 47:
			return 897705377;
	
		case 48:
			return 17961769;
	
		case 49:
			return 205582207;
	
		case 50:
			return 900740963;
	
		case 51:
			return -1369589344;
	
		case 52:
			return -1695823795;
	
		case 53:
			return -41453074;
	
		case 54:
			return 539767227;
	
		case 55:
			return 1210490314;
	
		case 56:
			return -399684751;
	
		case 57:
			return 2138893455;
	
		case 58:
			return -1617010487;
	
		case 59:
			return -832377028;
	
		case 60:
			return -428040245;
	
		case 61:
			return 1279288897;
	
		case 62:
			return -594897905;
	
		case 63:
			return -1360459240;
	
		case 64:
			return 1838428396;
	
		case 65:
			return -1467846997;
	
		case 66:
			return -490610263;
	
		case 67:
			return -1885413079;
	
		case 68:
			return 708884155;
	
		case 69:
			return joaat("BB_FEMALE_LOWERS_BLUE_LEATHER_ZIPPERS") /* collision: BB_FEMALE_LOWERS_BLUE_LEATHER_ZIPPERS */;
	
		case 70:
			return -1912136700;
	
		case 71:
			return -1268031552;
	
		case 72:
			return 1177953227;
	
		case 73:
			return 2130805296;
	
		case 74:
			return 38093490;
	
		case 75:
			return -269153218;
	
		case 76:
			return -1995068011;
	
		case 77:
			return -164284834;
	
		case 78:
			return 1446463345;
	
		case 79:
			return 1501315823;
	
		case 80:
			return -750379482;
	
		case 81:
			return -929560937;
	
		case 82:
			return 608323241;
	
		case 83:
			return 1030796013;
	
		case 84:
			return 1915057434;
	
		case 85:
			return -1582276476;
	
		case 86:
			return 692059311;
	
		case 87:
			return 2062839241;
	
		case 88:
			return -1884531872;
	
		case 89:
			return -866434534;
	
		case 90:
			return -1252192421;
	
		case 91:
			return 1243288963;
	
		case 92:
			return -1953772189;
	
		case 93:
			return 754411745;
	
		case 94:
			return 545309006;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

void func_667(Hash hParam0, int iParam1) // Position - 0x1A143 Hash - 0xBFC80B98 ^0x997FC438
{
	int ammo;
	int ammo2;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_35, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo2 = func_894(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, hParam0, ammo2);
	}

	return;
}

void func_668(Hash hParam0) // Position - 0x1A18B Hash - 0x708BD33E ^0xEEF81D82
{
	char* propertyName;
	char* propertyName2;
	eStackSize value;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
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

	DECORATOR::DECOR_SET_INT(Global_35, propertyName, hParam0);
	value = func_895();
	func_896(&value, 0, 0, 0, 1, 0, 0, false);
	DECORATOR::DECOR_SET_INT(Global_35, propertyName2, value);
	return;
}

int func_669(Hash hParam0) // Position - 0x1A25A Hash - 0x62B2BF56 ^0x18236051
{
	int num;
	int pedAmmoByType;

	if (func_822(hParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, joaat("ammo_arrow")) <= 0)
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
	
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
	
		if (pedAmmoByType >= num)
			num = 0;
		else if (pedAmmoByType > 0)
			num = num - pedAmmoByType;
	}

	return num;
}

BOOL func_670() // Position - 0x1A2D6 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_62() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_671(Hash hParam0) // Position - 0x1A2FB Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

Hash func_672(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1A30D Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

int func_673(Hash hParam0) // Position - 0x1A333 Hash - 0x119612CE ^0xEB4896D6
{
	Hash weaponTypeFromAmmoType;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);

	if (WEAPON::IS_WEAPON_A_GUN(weaponTypeFromAmmoType))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_385(50))
			{
				if (!func_385(48))
					return 133;
			
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_385(51))
			{
				if (!func_385(49))
					return 134;
			
				return 136;
			}
		}
	}

	return 137;
}

BOOL func_674() // Position - 0x1A39F Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_675(Ped pedParam0, Hash hParam1, var uParam2) // Position - 0x1A3B0 Hash - 0x4FC4FA99 ^0x540DBE26
{
	var unk;
	BOOL isMP;
	BOOL metaPedType;
	Hash hash;
	int num;
	int num2;
	int num3;
	BOOL flag;
	Hash componentHash;
	int num4;
	int num5;
	int numComponentsInPed;

	if (!func_161(hParam1, 0))
		return false;

	if (func_119(hParam1) != joaat("CLOTHING"))
		return false;

	isMP = func_62() != -1;
	metaPedType = PED::_GET_META_PED_TYPE(pedParam0);

	if (func_121(hParam1) == -999503751)
		return true;

	num = func_897(hParam1);

	if (num == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}

	flag = false;
	componentHash = hParam1;

	if (func_111(hParam1, 866047851))
	{
		num2 = func_334(num, 1);
	
		if (func_616(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[num2 /*3*/] != componentHash)
		{
			*uParam2 = -265166256;
			return false;
		}
	
		flag = true;
	}

	switch (num)
	{
		case -1944638739:
			num2 = 35;
		
			if (Global_1946054.f_1497.f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_111(hParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return false;
			}
			break;
	
		case -1505978566:
			if (func_843(1868067663, &unk))
			{
				*uParam2 = 939463734;
				return false;
			}
		
			[[fallthrough]];
	
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!flag)
				break;
		
			numComponentsInPed = PED::_GET_NUM_COMPONENTS_IN_PED(pedParam0);
			num5 = func_858(componentHash, num, metaPedType, isMP);
			num4 = func_858(Global_1946054.f_1497.f_1[num2 /*3*/], num, metaPedType, isMP);
		
			if ((numComponentsInPed + num5) - num4 > 31)
			{
				*uParam2 = -1608241763;
				return false;
			}
			break;
	
		case 1742327865:
			if (PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(componentHash, metaPedType, isMP) == joaat("neckties") && PED::_IS_META_PED_USING_COMPONENT(pedParam0, -1455751347))
			{
				*uParam2 = 111371848;
				return false;
			}
		
			num2 = 10;
			hash = func_121(Global_1946054.f_1497.f_1[num2 /*3*/]);
		
			if (flag && hash == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
	
		case 1900541263:
			num2 = 36;
		
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				*uParam2 = 2143522536;
				return false;
			}
		
			if (PED::_IS_META_PED_USING_COMPONENT(pedParam0, -1968556728))
			{
				*uParam2 = -849690042;
				return false;
			}
			break;
	
		case 1958421083:
			hash = func_121(hParam1);
			num2 = 36;
			num3 = 35;
		
			if (hParam1 != Global_1946054.f_57[num3 /*11*/] && func_111(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				*uParam2 = -357399012;
				return false;
			}
		
			if (hash == 1769055947 || hash == 1545016984)
				break;
		
			if (hParam1 != Global_1946054.f_57[num3 /*11*/] && func_853(Global_1946054.f_1497.f_1[num2 /*3*/]))
			{
				*uParam2 = -357399012;
				return false;
			}
		
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				*uParam2 = 2143522536;
				return false;
			}
			break;
	}

	*uParam2 = 0;
	return true;
}

void func_676() // Position - 0x1A6C0 Hash - 0xA141D86C ^0xD3302552
{
	PLAYER::_SET_BOW_STAMINA_DRAIN_SPEED(PLAYER::PLAYER_ID(), 1f - (Global_40.f_11095.f_64 + Global_1347477.f_175));
	return;
}

void func_677() // Position - 0x1A6E1 Hash - 0xDC6E219D ^0xBD2A18DD
{
	float num;
	float num2;

	num = Global_40.f_11095.f_44;
	num2 = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - num - Global_40.f_11095.f_69);
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), 1f - num);
	PLAYER::SET_PLAYER_STAMINA_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - num);
	PLAYER::_SET_PLAYER_STAMINA_SPRINT_DEPLETION_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - num2);
	return;
}

int func_678() // Position - 0x1A736 Hash - 0x6F6FB6A ^0x6F6FB6A
{
	int num;
	int i;

	for (i = 0; i < 26; i = i + 1)
	{
		if (func_257(func_898(i), 1, false))
			num = num + 1;
	}

	return num;
}

Hash func_679(Hash hParam0) // Position - 0x1A768 Hash - 0xBD10D1A2 ^0xAD2FE305
{
	switch (hParam0)
	{
		case joaat("PROVISION_BUFFALO_HORN_LEGENDARY"):
		case joaat("provision_earring_silver"):
		case joaat("provision_rs_abalone_shell_fragment"):
			return joaat("provision_talisman_buffalo_horn");
	
		case joaat("PROVISION_BEAR_LEGENDARY_CLAW"):
		case joaat("provision_bracelet_silver"):
		case joaat("provision_rc_quartz_chunk"):
			return joaat("provision_talisman_bear_claw");
	
		case joaat("provision_bracelet_gold"):
		case joaat("provision_cc_vintage_handcuffs"):
		case joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"):
			return joaat("provision_talisman_alligator_tooth");
	
		case joaat("provision_rf_wood_cobalt"):
		case joaat("provision_earring_gold"):
		case joaat("PROVISION_BOAR_TUSK_LEGENDARY"):
			return joaat("provision_talisman_boar_tusk");
	
		case joaat("PROVISION_OLD_BRASS_COMPASS"):
			return joaat("provision_talisman_raven_claw");
	}

	return 0;
}

BOOL func_680(int iParam0, Hash hParam1) // Position - 0x1A7FE Hash - 0x33707815 ^0xEA5B7C5C
{
	Hash hash;
	Hash hash2;

	switch (iParam0)
	{
		case joaat("provision_talisman_buffalo_horn"):
			if (hParam1 == joaat("PROVISION_BUFFALO_HORN_LEGENDARY"))
			{
				hash = joaat("provision_rs_abalone_shell_fragment");
				hash2 = joaat("provision_earring_silver");
			}
			else if (hParam1 == joaat("provision_rs_abalone_shell_fragment"))
			{
				hash = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				hash2 = joaat("provision_earring_silver");
			}
			else
			{
				hash = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				hash2 = joaat("provision_rs_abalone_shell_fragment");
			}
			break;
	
		case joaat("provision_talisman_bear_claw"):
			if (hParam1 == joaat("PROVISION_BEAR_LEGENDARY_CLAW"))
			{
				hash = joaat("provision_rc_quartz_chunk");
				hash2 = joaat("provision_bracelet_silver");
			}
			else if (hParam1 == joaat("provision_rc_quartz_chunk"))
			{
				hash = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				hash2 = joaat("provision_bracelet_silver");
			}
			else
			{
				hash = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				hash2 = joaat("provision_rc_quartz_chunk");
			}
			break;
	
		case joaat("provision_talisman_boar_tusk"):
			if (hParam1 == joaat("PROVISION_BOAR_TUSK_LEGENDARY"))
			{
				hash = joaat("provision_rf_wood_cobalt");
				hash2 = joaat("provision_earring_gold");
			}
			else if (hParam1 == joaat("provision_rf_wood_cobalt"))
			{
				hash = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				hash2 = joaat("provision_earring_gold");
			}
			else
			{
				hash = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				hash2 = joaat("provision_rf_wood_cobalt");
			}
			break;
	
		case joaat("provision_talisman_alligator_tooth"):
			if (hParam1 == joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"))
			{
				hash = joaat("provision_cc_vintage_handcuffs");
				hash2 = joaat("provision_bracelet_gold");
			}
			else if (hParam1 == joaat("provision_cc_vintage_handcuffs"))
			{
				hash = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				hash2 = joaat("provision_bracelet_gold");
			}
			else
			{
				hash = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				hash2 = joaat("provision_cc_vintage_handcuffs");
			}
			break;
	}

	if (func_257(hash, 1, false) && func_257(hash2, 1, false))
		return true;

	return false;
}

Hash func_681(Hash hParam0) // Position - 0x1A95F Hash - 0xB8EC44B7 ^0x8CFD1640
{
	switch (hParam0)
	{
		case joaat("PROVISION_WOLF_HEART_LEGENDARY"):
			return joaat("provision_trinket_wolf_heart");
	
		case joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY"):
			return joaat("provision_trinket_pronghorn_antler");
	
		case joaat("PROVISION_FOX_CLAW_LEGENDARY"):
			return joaat("provision_trinket_fox_claw");
	
		case joaat("PROVISION_COYOTE_FANG_LEGENDARY"):
			return joaat("provision_trinket_coyote_fang");
	
		case joaat("PROVISION_RAM_HORN_LEGENDARY"):
			return joaat("provision_trinket_ram_horn");
	
		case joaat("PROVISION_BUCK_ANTLER_LEGENDARY"):
			return joaat("provision_trinket_buck_antler");
	
		case joaat("PROVISION_ELK_ANTLER_LEGENDARY"):
			return joaat("provision_trinket_elk_antler");
	
		case joaat("PROVISION_COUGAR_FANG_LEGENDARY"):
			return joaat("provision_trinket_cougar_fang");
	
		case joaat("PROVISION_BISON_HORN_LEGENDARY"):
			return joaat("provision_trinket_bison_horn");
	
		case joaat("provision_lions_paw"):
			return joaat("provision_trinket_lion_paw");
	
		case joaat("PROVISION_MOOSE_ANTLER_LEGENDARY"):
			return joaat("provision_trinket_moose_antler");
	
		case joaat("PROVISION_BEAVER_TOOTH_LEGENDARY"):
			return joaat("provision_trinket_beaver_tooth");
	
		case joaat("PROVISION_PANTHER_EYE_LEGENDARY"):
			return joaat("provision_trinket_panther_eye");
	
		default:
		
	}

	return 0;
}

BOOL func_682(Hash hParam0, int iParam1) // Position - 0x1AA26 Hash - 0xB78A2FC ^0x6E3EB1C7
{
	eStackSize stackSize;

	stackSize = func_899(hParam0);

	if (stackSize != -15)
	{
		func_896(&stackSize, 0, iParam1, 0, 0, 0, 0, false);
		return !func_900(stackSize, true);
	}

	return false;
}

int func_683(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x1AA58 Hash - 0xE2402AAF ^0x47ECB962
{
	float num;
	int num2;
	int i;
	Hash hash;

	if (iParam2 != -1)
		return iParam2;

	num = 1f;

	if (bParam1 && func_257(joaat("provision_trinket_elk_antler"), 1, false))
		num = num + 0.1f;

	num2.f_1 = 10;
	num2.f_12 = 10;
	MISC::_LOOT_TABLES_GET_INFO(Global_35, true, true, hParam0, &num2, 0);

	for (i = 0; i < num2; i = i + 1)
	{
		if (num2.f_1[i] == joaat("currency_cash"))
		{
			return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
		else
		{
			hash = num2.f_1[i];
		
			if (func_161(hash, 0) && func_111(hash, -1921346699))
				return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
	}

	return 0;
}

void func_684(int iParam0, const char* sParam1, int iParam2) // Position - 0x1AB1D Hash - 0x4DF85B80 ^0x439E3728
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_EARN";

	func_637(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	return;
}

void func_685(int iParam0, BOOL bParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0x1AB5E Hash - 0x9636EF60 ^0x355C8D65
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
	
		if (func_901())
			num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value) * 0.1f);
	
		iParam0 = iParam0 + num2;
		value = value + num2;
		func_637(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		iParam0 = iParam0 - num;
	
		if (num > 0)
		{
			func_902(num);
			func_903(num, 0, 0);
		}
	
		func_637(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", value), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	}
	else
	{
		value = iParam0;
	}

	if (value > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(value, hParam4);
		func_398(func_638(joaat("CAREER_CASH")), value);
	}

	return;
}

int func_686(int iParam0) // Position - 0x1AC3A Hash - 0xC69F7374 ^0xCEC8F963
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;

	num = 0;

	switch (iParam0)
	{
		case 1:
			hash = joaat("PROVISION_EGRET_PLUME_LITTLE");
			hash2 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			hash3 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			hash4 = joaat("provision_ro_flower_lady_of_night");
			break;
	
		case 2:
			hash = joaat("PROVISION_HERON_FEATHER");
			hash2 = joaat("provision_ro_flower_lady_slipper");
			hash3 = joaat("provision_ro_flower_moccasin");
			break;
	
		case 4:
			hash = joaat("PROVISION_GATOR_EGG");
			hash2 = joaat("provision_ro_flower_acunas_star");
			hash3 = joaat("provision_ro_flower_cigar");
			hash4 = joaat("provision_ro_flower_ghost");
			break;
	
		case 8:
			hash = joaat("PROVISION_SPOONBILL_FEATHER");
			hash2 = joaat("provision_ro_flower_night_scented");
			hash3 = joaat("provision_ro_flower_rat_tail");
			hash4 = joaat("provision_ro_flower_spider");
			break;
	
		case 16:
			hash = joaat("provision_ro_flower_clamshell");
			hash2 = joaat("provision_ro_flower_dragons");
			hash3 = joaat("provision_ro_flower_queens");
			hash4 = joaat("provision_ro_flower_sparrows");
			break;
	}

	num2 = func_695(hash);
	num3 = func_695(hash2);
	num4 = func_695(hash3);
	num6 = func_696(hash);
	num7 = func_696(hash2);
	num8 = func_696(hash3);

	if (iParam0 != 2)
	{
		num5 = func_695(hash4);
		num9 = func_696(hash4);
	}

	if (num2 >= num6)
		num = num + num6;
	else
		num = num + num2;

	if (num3 >= num7)
		num = num + num7;
	else
		num = num + num3;

	if (num4 >= num8)
		num = num + num8;
	else
		num = num + num4;

	if (iParam0 != 2)
		if (num5 >= num9)
			num = num + num9;
		else
			num = num + num5;

	return num;
}

void func_687(int iParam0) // Position - 0x1ADAD Hash - 0x25D46568 ^0xF36E5C55
{
	Global_40.f_12004.f_2 = Global_40.f_12004.f_2 || iParam0;
	return;
}

int func_688() // Position - 0x1ADC8 Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_904(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_689() // Position - 0x1AE01 Hash - 0xCF63D31C ^0x5129EE00
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("rock_carvings"), 0);
}

BOOL func_690(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x1AE13 Hash - 0x9548C303 ^0x2CDF6383
{
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;

	switch (hParam0)
	{
		case joaat("taxidermy_order_05"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			break;
	
		case joaat("taxidermy_order_02"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			break;
	
		case joaat("taxidermy_order_01"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
				hash = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
				hash = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			break;
	
		case joaat("taxidermy_order_04"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			break;
	
		case joaat("taxidermy_order_03"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			break;
	}

	if (hParam0 == joaat("taxidermy_order_01"))
	{
		if (bParam3)
			if (func_817(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_817(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_817(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_817(hash))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_02"))
	{
		if (bParam3)
			if (func_817(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_817(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_817(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_817(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_817(hash) && func_817(hash2))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_03"))
	{
		if (bParam3)
			if (func_817(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_817(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_817(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_817(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_817(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_817(hash) && func_817(hash2) && func_817(hash3))
			return true;
	}
	else
	{
		if (bParam3)
			if (func_817(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_817(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_817(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_817(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_817(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_817(hash4))
			*uParam2 = *uParam2 + 1;
	
		if (func_817(hash) && func_817(hash2) && func_817(hash3) && func_817(hash4))
			return true;
	}

	return false;
}

void func_691(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1B2D8 Hash - 0x5A64C5C8 ^0x6D52F178
{
	!bParam2;

	switch (iParam0)
	{
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_907();
			func_905(iParam0);
			break;
	
		case -1925798111:
			func_905(-1925798111);
			func_906(-919512195);
			func_906(420709909);
			func_906(1703426636);
			break;
	
		case -1838352012:
			func_906(-1674179981);
			func_906(-1835851517);
			func_905(-1838352012);
			break;
	
		case -1835851517:
			func_906(-1674179981);
			func_906(-1838352012);
			func_905(-1835851517);
			break;
	
		case -1738165526:
			func_905(-1738165526);
			func_906(0);
			func_906(473295046);
			break;
	
		case -1717960576:
			func_906(210001842);
			func_905(-1717960576);
			break;
	
		case -1674179981:
			func_906(-1835851517);
			func_906(-1838352012);
			func_905(-1674179981);
			break;
	
		case -1612662716:
			func_906(1822001510);
			func_905(-1612662716);
			break;
	
		case -1414537028:
			func_906(38162571);
			func_906(1350391819);
			func_906(54073871);
			func_905(-1414537028);
			break;
	
		case -1311865656:
			func_905(-1311865656);
			func_906(1509509592);
			func_906(-959357075);
			func_906(405586984);
			break;
	
		case -1271608261:
			func_906(-150493654);
			func_906(1846061697);
			func_906(-1145519186);
			func_905(-1271608261);
			break;
	
		case -1223121209:
			func_905(-1223121209);
			func_906(630808005);
			break;
	
		case -1145519186:
			func_906(-150493654);
			func_906(-1271608261);
			func_906(1846061697);
			func_905(-1145519186);
			break;
	
		case -1124061431:
			func_906(198200492);
			func_905(-1124061431);
			func_906(52706132);
			func_906(-259123672);
			break;
	
		case -1080627546:
			if (bParam1)
				func_905(-1080627546);
			else
				func_906(-1080627546);
			break;
	
		case -1056767524:
		case -538889627:
		case -538880323:
			func_906(-538889627);
			func_906(-538880323);
			func_906(-1056767524);
			func_905(iParam0);
			break;
	
		case -959357075:
			func_905(-959357075);
			func_906(1509509592);
			func_906(405586984);
			func_906(-1311865656);
			break;
	
		case -919512195:
			func_905(-919512195);
			func_906(-1925798111);
			func_906(420709909);
			func_906(1703426636);
			break;
	
		case -664252410:
			func_906(2019386373);
			func_906(2109952320);
			func_905(-664252410);
			break;
	
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_908();
			func_905(iParam0);
			break;
	
		case -524145696:
			if (bParam1)
				func_905(-524145696);
			else
				func_906(-524145696);
		
			func_906(1626481264);
			func_906(282809459);
			break;
	
		case -502324015:
			func_906(1497516462);
			func_906(2016141805);
			func_906(1010885152);
			func_905(-502324015);
			break;
	
		case -434590080:
			func_906(1376646519);
			func_906(931649776);
			func_906(1743048395);
			func_906(449774763);
			func_905(-434590080);
			break;
	
		case -404698347:
			func_906(1306158345);
			func_906(1952610440);
			func_906(-223469678);
			func_906(1517904467);
			func_905(-404698347);
			break;
	
		case -259123672:
			func_906(198200492);
			func_906(-1124061431);
			func_906(52706132);
			func_905(-259123672);
			break;
	
		case -223469678:
			func_906(1306158345);
			func_906(1952610440);
			func_906(-404698347);
			func_906(1517904467);
			func_905(-223469678);
			break;
	
		case -150493654:
			func_906(-1271608261);
			func_906(1846061697);
			func_906(-1145519186);
			func_905(-150493654);
			break;
	
		case 0:
			func_905(0);
			func_906(473295046);
			func_906(-1738165526);
			break;
	
		case 38162571:
			func_906(-1414537028);
			func_906(1350391819);
			func_906(54073871);
			func_905(38162571);
			break;
	
		case 52706132:
			func_906(198200492);
			func_906(-1124061431);
			func_905(52706132);
			func_906(-259123672);
			break;
	
		case 54073871:
			func_906(-1414537028);
			func_906(38162571);
			func_906(1350391819);
			func_905(54073871);
			break;
	
		case 198200492:
			func_905(198200492);
			func_906(-1124061431);
			func_906(52706132);
			func_906(-259123672);
			break;
	
		case 210001842:
			func_906(-1717960576);
			func_905(210001842);
			break;
	
		case 280705402:
			func_906(1766284049);
			func_906(1926308480);
			func_905(280705402);
			break;
	
		case 282809459:
			func_905(282809459);
			func_906(1626481264);
			func_906(-524145696);
			break;
	
		case 405586984:
			func_905(405586984);
			func_906(1509509592);
			func_906(-959357075);
			func_906(-1311865656);
			break;
	
		case 420709909:
			func_905(420709909);
			func_906(-919512195);
			func_906(-1925798111);
			func_906(1703426636);
			break;
	
		case 439465264:
			if (func_909(1609506757))
				if (bParam1)
					func_905(439465264);
				else
					func_906(439465264);
			break;
	
		case 449774763:
			func_906(1376646519);
			func_906(931649776);
			func_906(-434590080);
			func_906(1743048395);
			func_905(449774763);
			break;
	
		case 473295046:
			func_905(473295046);
			func_906(0);
			func_906(-1738165526);
			break;
	
		case 630808005:
			func_905(630808005);
			func_906(-1223121209);
			break;
	
		case 885203519:
			if (bParam1)
				func_905(885203519);
			else
				func_906(885203519);
			break;
	
		case 931649776:
			func_906(1376646519);
			func_906(-434590080);
			func_906(1743048395);
			func_906(449774763);
			func_905(931649776);
			break;
	
		case 932909855:
			func_905(932909855);
			func_906(2051822093);
			break;
	
		case 1010885152:
			func_906(1497516462);
			func_906(2016141805);
			func_905(1010885152);
			func_906(-502324015);
			break;
	
		case 1306158345:
			func_906(1952610440);
			func_906(-223469678);
			func_906(-404698347);
			func_906(1517904467);
			func_905(1306158345);
			break;
	
		case 1350391819:
			func_906(-1414537028);
			func_906(38162571);
			func_906(54073871);
			func_905(1350391819);
			break;
	
		case 1376646519:
			func_906(931649776);
			func_906(-434590080);
			func_906(1743048395);
			func_906(449774763);
			func_905(1376646519);
			break;
	
		case 1453909576:
			func_905(1453909576);
			func_906(1643531967);
			break;
	
		case 1497516462:
			func_905(1497516462);
			func_906(2016141805);
			func_906(1010885152);
			func_906(-502324015);
			break;
	
		case 1509509592:
			func_905(1509509592);
			func_906(405586984);
			func_906(-959357075);
			func_906(-1311865656);
			break;
	
		case 1517904467:
			func_906(1306158345);
			func_906(1952610440);
			func_906(-223469678);
			func_906(-404698347);
			func_905(1517904467);
			break;
	
		case 1609506757:
			if (bParam1)
			{
				func_906(439465264);
				func_905(1609506757);
			}
			else
			{
				func_906(1609506757);
				func_906(439465264);
			}
			break;
	
		case 1626481264:
			func_905(1626481264);
			func_906(-524145696);
			func_906(282809459);
			break;
	
		case 1643531967:
			func_905(1643531967);
			func_906(1453909576);
			break;
	
		case 1703426636:
			func_905(1703426636);
			func_906(-919512195);
			func_906(-1925798111);
			func_906(420709909);
			break;
	
		case 1743048395:
			func_906(1376646519);
			func_906(931649776);
			func_906(-434590080);
			func_906(449774763);
			func_905(1743048395);
			break;
	
		case 1766284049:
			func_906(280705402);
			func_906(1926308480);
			func_905(1766284049);
			break;
	
		case 1822001510:
			func_906(-1612662716);
			func_905(1822001510);
			break;
	
		case 1846061697:
			func_906(-150493654);
			func_906(-1271608261);
			func_906(-1145519186);
			func_905(1846061697);
			break;
	
		case 1926308480:
			func_906(1766284049);
			func_906(280705402);
			func_905(1926308480);
			break;
	
		case 1952610440:
			func_906(1306158345);
			func_906(-223469678);
			func_906(-404698347);
			func_906(1517904467);
			func_905(1952610440);
			break;
	
		case 2016141805:
			func_906(1497516462);
			func_905(2016141805);
			func_906(1010885152);
			func_906(-502324015);
			break;
	
		case 2019386373:
			func_906(-664252410);
			func_906(2109952320);
			func_905(2019386373);
			break;
	
		case 2051822093:
			func_905(2051822093);
			func_906(932909855);
			break;
	
		case 2109952320:
			func_906(2019386373);
			func_906(-664252410);
			func_905(2109952320);
			break;
	
		default:
			if (bParam1)
				if (!func_909(iParam0))
					func_905(iParam0);
			else if (func_909(iParam0))
				func_906(iParam0);
			break;
	}

	return;
}

void func_692(Hash hParam0) // Position - 0x1BDFB Hash - 0x70E5F07F ^0x70E5F07F
{
	if (!func_910(hParam0))
		func_912(func_911(hParam0));

	return;
}

int func_693() // Position - 0x1BE17 Hash - 0x40F73196 ^0x4F871B7D
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (func_910(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, -1531394072, 0)))
			num = num + 1;
	}

	return num;
}

int func_694(Hash hParam0, int iParam1, int iParam2) // Position - 0x1BE4F Hash - 0xED49A216 ^0x75828FFF
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;

	num = 0;

	switch (iParam2)
	{
		case 1:
			hash = joaat("PROVISION_EGRET_PLUME_LITTLE");
			hash2 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			hash3 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			hash4 = joaat("provision_ro_flower_lady_of_night");
			break;
	
		case 2:
			hash = joaat("PROVISION_HERON_FEATHER");
			hash2 = joaat("provision_ro_flower_lady_slipper");
			hash3 = joaat("provision_ro_flower_moccasin");
			break;
	
		case 4:
			hash = joaat("PROVISION_GATOR_EGG");
			hash2 = joaat("provision_ro_flower_acunas_star");
			hash3 = joaat("provision_ro_flower_cigar");
			hash4 = joaat("provision_ro_flower_ghost");
			break;
	
		case 8:
			hash = joaat("PROVISION_SPOONBILL_FEATHER");
			hash2 = joaat("provision_ro_flower_night_scented");
			hash3 = joaat("provision_ro_flower_rat_tail");
			hash4 = joaat("provision_ro_flower_spider");
			break;
	
		case 16:
			hash = joaat("provision_ro_flower_clamshell");
			hash2 = joaat("provision_ro_flower_dragons");
			hash3 = joaat("provision_ro_flower_queens");
			hash4 = joaat("provision_ro_flower_sparrows");
			break;
	}

	num2 = func_695(hash);
	num3 = func_695(hash2);
	num4 = func_695(hash3);
	num6 = func_696(hash);
	num7 = func_696(hash2);
	num8 = func_696(hash3);

	if (iParam2 != 2)
	{
		num5 = func_695(hash4);
		num9 = func_696(hash4);
	}

	if (hParam0 == hash)
		if (num2 + iParam1 >= num6)
			num = num + num6;
		else
			num = num + num2 + iParam1;
	else if (num2 >= num6)
		num = num + num6;
	else
		num = num + num2;

	if (hParam0 == hash2)
		if (num3 + iParam1 >= num7)
			num = num + num7;
		else
			num = num + num3 + iParam1;
	else if (num3 >= num7)
		num = num + num7;
	else
		num = num + num3;

	if (hParam0 == hash3)
		if (num4 + iParam1 >= num8)
			num = num + num8;
		else
			num = num + num4 + iParam1;
	else if (num4 >= num8)
		num = num + num8;
	else
		num = num + num4;

	if (iParam2 != 2)
		if (hParam0 == hash4)
			if (num5 + iParam1 >= num9)
				num = num + num9;
			else
				num = num + num5 + iParam1;
		else if (num5 >= num9)
			num = num + num9;
		else
			num = num + num5;

	return num;
}

int func_695(Hash hParam0) // Position - 0x1C063 Hash - 0x3E479F4F ^0x3E479F4F
{
	int num;

	if (func_257(hParam0, 1, false))
		num = func_264(hParam0, false, false);

	return num;
}

int func_696(Hash hParam0) // Position - 0x1C082 Hash - 0xEED5739D ^0xEED5739D
{
	switch (hParam0)
	{
		case joaat("provision_ro_flower_clamshell"):
			return 5;
	
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return 5;
	
		case joaat("provision_ro_flower_acunas_star"):
			return 3;
	
		case joaat("provision_ro_flower_cigar"):
			return 7;
	
		case joaat("provision_ro_flower_rat_tail"):
			return 10;
	
		case joaat("PROVISION_HERON_FEATHER"):
			return 20;
	
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return 5;
	
		case joaat("provision_ro_flower_night_scented"):
			return 5;
	
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return 5;
	
		case joaat("provision_ro_flower_lady_of_night"):
			return 15;
	
		case joaat("provision_ro_flower_sparrows"):
			return 10;
	
		case joaat("provision_ro_flower_queens"):
			return 5;
	
		case joaat("provision_ro_flower_spider"):
			return 5;
	
		case joaat("provision_ro_flower_dragons"):
			return 5;
	
		case joaat("provision_ro_flower_lady_slipper"):
			return 7;
	
		case joaat("provision_ro_flower_moccasin"):
			return 10;
	
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return 30;
	
		case joaat("provision_ro_flower_ghost"):
			return 5;
	
		case joaat("PROVISION_GATOR_EGG"):
			return 25;
	
		default:
		
	}

	return 0;
}

int func_697(Hash hParam0) // Position - 0x1C15B Hash - 0xD6E12BEB ^0x1BFBC7C9
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0);
}

void func_698(Hash hParam0, int iParam1) // Position - 0x1C169 Hash - 0xAEE04633 ^0x64A87C96
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, iParam1);
	return;
}

Hash func_699(Hash hParam0, int iParam1) // Position - 0x1C179 Hash - 0xB815F93D ^0x864481B4
{
	var unk;
	int num;

	if (!func_500(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, &unk);
	return num;
}

void func_700(Hash hParam0, Hash hParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x1C1A8 Hash - 0xC19694F5 ^0xC19694F5
{
	if (hParam0 == func_699(hParam1, 5) || hParam0 == func_699(hParam1, 6) || hParam0 == func_699(hParam1, 7) || hParam0 == func_699(hParam1, 8) || hParam0 == func_699(hParam1, 9))
	{
		func_690(hParam1, hParam0, &iParam2, false, iParam3, bParam4);
		func_285(51, 0, 0, hParam1, iParam2, false, -1, false);
		func_284(51, 0, 0, 0, 0, -1, 0);
	}

	return;
}

void func_701(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x1C22A Hash - 0xCAA72529 ^0xCAA72529
{
	int num;

	num = 1;

	if (hParam0 == func_699(hParam1, 5) || hParam0 == func_699(hParam1, 6) || hParam0 == func_699(hParam1, 7) || hParam0 == func_699(hParam1, 8) || hParam0 == func_699(hParam1, 9))
	{
		if (func_690(hParam1, hParam0, &num, false, 0, false))
		{
			func_285(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_284(51, 0, 0, num, func_573(hParam1, 20), 1, 0);
		}
		else
		{
			func_285(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_284(51, 0, 0, num, func_573(hParam1, 20), 1, 0);
		}
	}

	return;
}

BOOL func_702() // Position - 0x1C2EB Hash - 0xFE7975D2 ^0x5148ACFC
{
	if (func_345(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
		return true;

	return false;
}

void func_703(Hash hParam0) // Position - 0x1C314 Hash - 0x70E4913D ^0x3306E40C
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	return;
}

void func_704(Hash hParam0) // Position - 0x1C323 Hash - 0xB02A89A ^0x586D0DC7
{
	if (!func_913(hParam0))
		COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);

	return;
}

void func_705(Hash hParam0) // Position - 0x1C33C Hash - 0x70E4913D ^0xC7621DBD
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(hParam0, 1);
	return;
}

float func_706() // Position - 0x1C34B Hash - 0xB0642BCC ^0x4D6FEEA4
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	int value;
	float num9;
	float num10;

	if (func_914())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_915(2);

	if (Global_1347477.f_119)
		return func_915(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_916();
	num3 = func_917();
	num4 = func_918();
	num5 = func_919();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_920());
	num8 = func_915(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_921(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_922(3, num9, num9 > 100f);
	return func_923(num8, -100f, 100f);
}

float func_707() // Position - 0x1C474 Hash - 0x951B1CCC ^0x7B312694
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	int value;
	float num9;
	float num10;

	if (func_914())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_915(1);

	if (Global_1347477.f_119)
		return func_915(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_916();
	num3 = func_917();
	num4 = func_918();
	num5 = func_919();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_920());
	num8 = func_915(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_921(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_922(2, num9, num9 > 100f);
	return func_923(num8, -100f, 100f);
}

float func_708() // Position - 0x1C59D Hash - 0x4D146F4A ^0xFC60D2FE
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	int value;
	float num9;
	float num10;

	if (func_914())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_915(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_924())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_925())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_915(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_916();
	num3 = func_917();
	num4 = func_918();
	num5 = func_919();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_920());
	num8 = func_915(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_921(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_922(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_915(0);

	return func_923(num8, -100f, 100f);
}

BOOL func_709(Hash hParam0) // Position - 0x1C744 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_710(Hash hParam0, Any* panParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x1C754 Hash - 0x86E39CDA ^0xCF922D1
{
	!func_161(hParam0, 0);

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_653(hParam0, panParam2, iParam3, bParam5, false))
		return 0;

	if (!func_156(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_199(false), panParam1, panParam2, hParam0, panParam2->f_4, iParam3, hParam4))
		return 0;

	return 1;
}

void func_711(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1C7B6 Hash - 0xC1426DBB ^0xC1426DBB
{
	Hash hash;

	if (!func_588(essParam0))
		return;

	if (func_319(essParam0))
		return;

	if (!func_926(essParam0))
		func_927(essParam0, true, false);

	hash = func_862(essParam0);

	if (hash != 0 && !(essParam0 >= 0 && essParam0 <= 5))
		if (func_589(essParam0, 512))
			func_127(30, hash, 0, 0, false);

	if (!func_928() && !bParam1 && !func_470(0, false, true))
		func_123(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, hash)), 10000, 0, 0, 0, true);

	func_929(essParam0, 6);

	if (bParam2)
		if (!func_470(0, false, true))
			func_657(true, 4);

	return;
}

BOOL func_712(Hash hParam0, var uParam1) // Position - 0x1C87C Hash - 0x8324C1A5 ^0xBCA9CBC8
{
	int i;
	Hash hash;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_121(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	return false;
}

BOOL func_713(int iParam0) // Position - 0x1C8C0 Hash - 0xEB793C30 ^0xF0C7C18C
{
	if (iParam0 == -358215195)
		return false;

	return Global_1946054.f_1497.f_1[func_334(iParam0, 1) /*3*/] != Global_1946054.f_57[func_334(iParam0, 1) /*11*/];
}

void func_714(int iParam0, Hash hParam1) // Position - 0x1C8F8 Hash - 0x1B56319F ^0x3D9B5946
{
	if (func_111(hParam1, 130796156))
	{
		func_930(hParam1, false);
	}
	else if (func_111(hParam1, 930141731))
	{
		func_930(hParam1, true);
		func_931(iParam0);
	}

	return;
}

void func_715(var uParam0, int iParam1) // Position - 0x1C933 Hash - 0x84556899 ^0xA18AFCFA
{
	int i;

	if (iParam1 == 0)
		return;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->f_1[i] == iParam1)
			return;
	
		if (iParam1 == joaat("LOOTER_PED_IS_MALE") && uParam0->f_1[i] == joaat("LOOTER_PED_IS_FEMALE") || iParam1 == joaat("LOOTER_PED_IS_FEMALE") && uParam0->f_1[i] == joaat("LOOTER_PED_IS_MALE") || iParam1 == joaat("LOOT_TYPE_NORMAL") && uParam0->f_1[i] == joaat("LOOT_TYPE_SKINNING") || iParam1 == joaat("LOOT_TYPE_SKINNING") && uParam0->f_1[i] == joaat("LOOT_TYPE_NORMAL"))
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

int func_716(Hash hParam0, var uParam1, Any anParam2, int iParam3) // Position - 0x1CA14 Hash - 0xD7FAFF38 ^0x7903CCF6
{
	var unk;
	int num;

	if (hParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_932(uParam1);
	SECURE_STORE(&unk, hParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_2.f_1 = 10;
	num = iParam3;
	num.f_2 = { *uParam1 };
	func_933(anParam2, hParam0, num);
	return 1;
}

int func_717(int iParam0) // Position - 0x1CA7D Hash - 0x6AA34421 ^0x7B821F1
{
	return Global_1900073.f_159[iParam0];
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x1CA8F Hash - 0xA17D549C ^0xBB49A78C
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

Hash func_719(Hash hParam0) // Position - 0x1CB66 Hash - 0x42CB27A1 ^0xAE7DBAA9
{
	Hash num;

	if (!func_789(hParam0, &num, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
		return joaat("_placeholder");

	return num;
}

struct<4> func_720() // Position - 0x1CB90 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

BOOL func_721(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x1CB9C Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_199(false);
	*panParam1 = { func_154(hParam0, func_440(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

struct<29> func_722(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x1CBE1 Hash - 0xD34D8048 ^0xAE0F4AAB
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

	unk = { func_726(&unk30) };
	unk.f_17 = { unk30.f_16 };
	unk.f_25 = unk30.f_25;
	unk.f_26 = unk30.f_27;
	unk.f_27 = unk30.f_28;
	unk.f_28 = unk30.f_24;
	return unk;
}

int func_723(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x1CC7A Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_934(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_935(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_935(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 29))
	{
		func_935(num, 1);
		return num;
	}

	return -1;
}

struct<18> func_724(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x1CD01 Hash - 0x3EBED8E9 ^0x3FFB16B
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

	unk = { func_726(&unk19) };
	unk.f_17 = unk19.f_14;
	return unk;
}

int func_725(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x1CD74 Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_936(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_935(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_935(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 18))
	{
		func_935(num, 1);
		return num;
	}

	return -1;
}

struct<17> func_726(var uParam0) // Position - 0x1CDFB Hash - 0x4CD39800 ^0x7DC5804
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
	return unk;
}

int func_727(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x1CE4F Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_937(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_935(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_935(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17))
	{
		func_935(num, 1);
		return num;
	}

	return -1;
}

int func_728(Ped pedParam0, Hash hParam1, int iParam2, BOOL bParam3) // Position - 0x1CED6 Hash - 0x83735129 ^0x5FB639F3
{
	Hash hash;
	ItemSet itemset;
	Entity entityFromItem;
	int i;
	int itemsetSize;
	int num;
	var unk;
	var unk2;
	var unk3;
	Ped pedIndexFromEntityIndex;

	if (!PED::IS_PED_CARRYING_SOMETHING(pedParam0))
		return iParam2;

	itemset = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(pedParam0, itemset);
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);

	for (i = 0; i < itemsetSize; i = i + 1)
	{
		if (iParam2 == 0)
			break;
	
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
	
		if (!ENTITY::DOES_ENTITY_EXIST(entityFromItem))
		{
		}
		else
		{
			if (ENTITY::IS_ENTITY_A_PED(entityFromItem))
			{
				pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem);
				func_514(pedIndexFromEntityIndex, &unk, &unk2, &num, &unk3);
				func_767(&hash, pedIndexFromEntityIndex, num, unk);
			
				if (!func_161(hash, 0))
					hash = func_530(entityFromItem);
			}
			else
			{
				hash = func_530(entityFromItem);
			}
		
			if (hash == hParam1)
			{
				PED::DETACH_CARRIABLE_ENTITY(entityFromItem, false, false);
			
				if (bParam3)
				{
					func_938(entityFromItem);
					ENTITY::_DELETE_CARRIABLE(&entityFromItem);
				}
			
				iParam2 = iParam2 - 1;
			}
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemset);
	return iParam2;
}

BOOL func_729(Ped pedParam0, Hash hParam1, int iParam2, BOOL bParam3, Hash hParam4) // Position - 0x1CFB6 Hash - 0x4239382B ^0xCA53D4CD
{
	int inventoryIdFromPed;
	int num;

	inventoryIdFromPed = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0);

	if (func_939(pedParam0))
	{
		num = func_940(pedParam0);
	
		if (func_161(hParam1, 0))
			if (func_730(hParam1))
				func_941(num, hParam1, iParam2);
	}

	return func_942(inventoryIdFromPed, hParam1, iParam2, bParam3, hParam4);
}

BOOL func_730(Hash hParam0) // Position - 0x1D002 Hash - 0x32CFAC25 ^0x32CFAC25
{
	int i;
	int num;
	Hash hash;

	if (!func_943(hParam0))
		return false;

	for (i = 0; i < 57; i = i + 1)
	{
		num = func_944(i, 1);
		hash = num;
	
		if (hParam0 == hash)
			return true;
	}

	return false;
}

int func_731(Ped pedParam0, Hash hParam1, int iParam2) // Position - 0x1D044 Hash - 0x40489E01 ^0xFB04AC2C
{
	int i;
	Hash peltId;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return iParam2;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	peltId = hParam1;

	for (i = 2; i >= 0; i = i + -1)
	{
		if (PED::_GET_PELT_FROM_HORSE(pedParam0, i) == peltId)
		{
			PED::_CLEAR_PELT_FROM_HORSE(pedParam0, peltId);
			iParam2 = iParam2 - 1;
		}
	
		if (iParam2 <= 0)
			break;
	}

	return iParam2;
}

BOOL func_732(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x1D0AC Hash - 0xD12DD6C0 ^0x9850E73C
{
	var statId;

	statId = { func_361(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);

	func_945(hParam0, iParam1);
	return func_946(hParam0, iParam1, bParam2, hParam3);
}

struct<4> func_733(int iParam0, Hash hParam1) // Position - 0x1D0E3 Hash - 0x4379F5A3 ^0xD8DD7D07
{
	var unk;

	unk = { func_947(iParam0) };
	return func_948(iParam0, hParam1, unk, unk.f_4);
}

BOOL func_734(int iParam0) // Position - 0x1D105 Hash - 0xF2C0DFFC ^0xF2C0DFFC
{
	switch (func_62())
	{
		case -1:
			return Global_1357549.f_1495 && iParam0 != false;
	}

	return false;
}

BOOL func_735(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1D130 Hash - 0xC9655EC3 ^0x88C9AFE1
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

BOOL func_736() // Position - 0x1D1CE Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_737(int iParam0) // Position - 0x1D221 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_568(iParam0))
		return -1;

	return func_950(func_949(iParam0));
}

BOOL func_738(int iParam0, int iParam1) // Position - 0x1D241 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_739(eStackSize essParam0, BOOL bParam1) // Position - 0x1D250 Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[essParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[essParam0 /*11*/] && bParam1 != false;
}

BOOL func_740(Ped pedParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0x1D283 Hash - 0x6735ACA9 ^0xD6205CC6
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, bParam2, iParam3);
}

void func_741(Volume volParam0) // Position - 0x1D2B9 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

float func_742(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x1D2D0 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

BOOL func_743(Vector3 vParam0, var uParam1, var uParam2, float fParam3) // Position - 0x1D2EE Hash - 0x97B2D4F4 ^0x726D5358
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (func_951(i))
			if (BUILTIN::VDIST(func_952(i), vParam0) < fParam3)
				return true;
	}

	return false;
}

BOOL func_744(Vector3 vParam0, var uParam1, var uParam2, float fParam3) // Position - 0x1D32A Hash - 0x79B25540 ^0x79B25540
{
	int i;

	for (i = 0; i < Global_40.f_450; i = i + 1)
	{
		if (Global_40.f_450[i] > -1 && Global_40.f_450[i] < 200)
			if (BUILTIN::VDIST(func_953(Global_40.f_450[i]), vParam0) < fParam3)
				return true;
		else
			break;
	}

	return false;
}

BOOL func_745(int iParam0) // Position - 0x1D391 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return true;
	}

	return false;
}

float func_746(int iParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x1D3C7 Hash - 0xA3FC3EE3 ^0xE0E564B4
{
	if (func_954(iParam0))
		return BUILTIN::VDIST(VEHICLE::_GET_TRAIN_POSITION_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1), vParam1);

	return 100000000f;
}

Object* func_747() // Position - 0x1D3F7 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1900383.f_393;
}

BOOL func_748(int iParam0, Hash hParam1) // Position - 0x1D406 Hash - 0xA6B7C703 ^0x65E3369D
{
	if (func_111(hParam1, 1573112293))
		return func_955(hParam1);

	switch (iParam0)
	{
		case -1823706425:
			return func_187(128);
	
		case -1393202694:
		case 2041469314:
			return func_955(hParam1);
	
		case -854348463:
			return func_187(16384);
	
		case -525676072:
			return func_187(8);
	
		case -77448735:
			if (func_565(hParam1))
				return func_955(hParam1);
			break;
	
		case 81053684:
			return func_187(4);
	
		case 1779021115:
			if (func_161(hParam1, 0))
				if (hParam1 == joaat("weapon_kit_camera"))
					return func_187(64);
		
			return func_187(32);
	
		case 1802292908:
			return func_187(16);
	
		default:
			if (func_161(hParam1, 0))
			{
				if (func_111(hParam1, 1192444843) || func_111(hParam1, -1540973036))
					return func_187(4096);
				else if (func_111(hParam1, 1919582297))
					return func_187(8192);
				else if (func_111(hParam1, 1147021565))
					return func_187(2);
			
				switch (hParam1)
				{
					case joaat("upgrade_upg_mortar_pestle"):
					case -1448210800:
						return func_187(2048);
				
					case joaat("kit_horse_brush"):
						return func_187(1024);
				}
			}
		
			return func_187(1);
	}

	return func_187(1);
}

void func_749(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, BOOL bParam19, BOOL bParam20) // Position - 0x1D594 Hash - 0x6BBC6855 ^0x887CD5D2
{
	int num;
	int num2;
	int i;
	var unk;

	num = -1;
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_489(&uParam1, &num, &num2, bParam20))
	{
		i = 0;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_233(&unk, i, num, num2))
				func_491(iParam0, unk.f_4, bParam19);
		}
	}

	func_244(num);
	return;
}

BOOL func_750(int iParam0) // Position - 0x1D5F3 Hash - 0x3270B633 ^0x3270B633
{
	return iParam0 > -1 && iParam0 < 25;
}

Vector3 func_751(int iParam0) // Position - 0x1D609 Hash - 0x19C525E7 ^0x19C525E7
{
	if (!func_226(iParam0))
		return 0f, 0f, 0f;

	switch (iParam0)
	{
		case 0:
			return 2947.0547f, 1320.1497f, 43.8203f;
	
		case 1:
			return 2947.64f, 1344.9012f, 43.899f;
	
		case 2:
			return 2939.0627f, 1287.116f, 43.6529f;
	
		case 3:
			return 2932.97f, 1282.56f, 43.67f;
	
		case 4:
			return -2842.2114f, 137.3398f, 183.8268f;
	
		case 5:
			return -1005.9343f, -540.8262f, 97.9502f;
	
		case 7:
			return -784.49f, -1321.95f, 42.88f;
	
		case 9:
			return -814.4116f, -1367.2427f, 43.7509f;
	
		case 10:
			return -753.42194f, -1284.2399f, 43.200493f;
	
		case 12:
			return -813.6f, -1373.8f, 44.2f;
	
		case 13:
			return -868.33563f, -1366.2074f, 44.753105f;
	
		case 14:
			return -875.03f, -1327.09f, 42.97f;
	
		case 15:
			return -875.02f, -1326.71f, 42.97f;
	
		case 16:
			return -805.72f, -1330.5f, 42.67f;
	
		case 17:
			return -762.0716f, -1293.5487f, 42.8355f;
	
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
	
		case 20:
			return 1521.91f, 441.15f, 89.68f;
	
		case 21:
			return 1523.63f, 442.65f, 89.68f;
	
		case 22:
			return 2161.5f, -618.5f, 43f;
	
		case 23:
			return -1092.88f, -575.69f, 81.41f;
	
		case 24:
			return -1094.35f, -577.48f, 81.41f;
	
		case 25:
			return 1294.0844f, -1303.1022f, 76.0418f;
	
		case 26:
			return 1297.4229f, -1278.4122f, 75.65752f;
	
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
	
		case 28:
			return 1329.7546f, -1294.2175f, 76.0092f;
	
		case 29:
			return 1323.7344f, -1321.7745f, 77.8924f;
	
		case 30:
			return 1226.71f, -1295.08f, 75.9f;
	
		case 31:
			return 1230.34f, -1298.5785f, 75.9027f;
	
		case 32:
			return 1332.5504f, -1298.679f, 75.35602f;
	
		case 34:
			return 2076.8354f, 1000.8294f, 111.4973f;
	
		case 35:
			return 1209.0531f, -193.1814f, 101.97852f;
	
		case 36:
			return 2644.1882f, -1292.5067f, 51.2496f;
	
		case 37:
			return 2657.4658f, -1180.9601f, 53.2785f;
	
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
	
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
	
		case 41:
			return 2859.51f, -1202.16f, 48.59f;
	
		case 42:
			return 2825.6067f, -1318.2065f, 45.7557f;
	
		case 43:
			return 2718f, -1287f, 49.6f;
	
		case 44:
			return 2508.212f, -1449.6539f, 48.415234f;
	
		case 45:
			return 2748.8113f, -1398.2766f, 45.18309f;
	
		case 46:
			return 2747.8245f, -1396.3843f, 45.18309f;
	
		case 47:
			return 2555.09f, -1166.97f, 52.68f;
	
		case 48:
			return 2842.45f, -1227.66f, 46.66f;
	
		case 49:
			return 2817.6404f, -1325.0112f, 47.00512f;
	
		case 50:
			return 2836.9917f, -1305.805f, 45.6964f;
	
		case 51:
			return 2683.84f, -1399.6421f, 45.37881f;
	
		case 54:
			return 2734.1738f, -1119.7551f, 50.10792f;
	
		case 55:
			return 2832.0198f, -1225.5627f, 46.6422f;
	
		case 56:
			return -142.072f, -23.5242f, 95.0883f;
	
		case 57:
			return 675.3091f, -1251.2332f, 43.0152f;
	
		case 58:
			return 1875.2003f, -1859.1821f, 41.8f;
	
		case 59:
			return 2366.0842f, 1347.1224f, 105.1305f;
	
		case 60:
			return -1753.404f, -392.557f, 155.2576f;
	
		case 61:
			return -1790f, -388.27f, 159.33f;
	
		case 62:
			return -1818.99f, -370.94f, 162.3f;
	
		case 63:
			return -1819.8796f, -561.8194f, 157.23232f;
	
		case 64:
			return -1773.3142f, -393.91223f, 155.56471f;
	
		case 65:
			return -1763.7804f, -385.1118f, 156.7401f;
	
		case 67:
			return -2251.0344f, -1916.9109f, 115.9488f;
	
		case 68:
			return -307.96432f, 773.6048f, 117.70312f;
	
		case 69:
			return -306.3f, 815.08f, 117.98f;
	
		case 70:
			return 0f, 0f, 0f;
	
		case 72:
			return -338.8647f, 767.4334f, 115.56277f;
	
		case 73:
			return -287.9538f, 804.0544f, 118.3859f;
	
		case 74:
			return -324f, 803.72f, 116.88f;
	
		case 75:
			return -281.82f, 778.97f, 118.5f;
	
		case 76:
			return -369.44574f, 786.69354f, 115.9904f;
	
		case 77:
			return -178.0316f, 628.06213f, 113.08961f;
	
		case 78:
			return -175.03769f, 631.79987f, 113.08961f;
	
		case 79:
			return -325.53195f, 773.6285f, 117.50383f;
	
		case 80:
			return -272.7182f, 785.6115f, 117.4202f;
	
		case 82:
			return 3025.7864f, 562.7253f, 43.7167f;
	
		case 84:
			return 2967.2727f, 796.7416f, 52.5948f;
	
		case 85:
			return 2986.94f, 574.9f, 43.64f;
	
		case 86:
			return 2986.2236f, 569.94684f, 43.62284f;
	
		case 87:
			return -1302.9513f, 394.6608f, 94.3817f;
	
		case 88:
			return -1299.8906f, 401.36154f, 94.38248f;
	
		case 89:
			return -1300.8296f, 399.75986f, 94.38248f;
	
		case 90:
			return -5487.1973f, -2939.0383f, -1.3872f;
	
		case 91:
			return -5507.9927f, -2964.8442f, -1.6215f;
	
		case 92:
			return -5509.0186f, -2947.4353f, -2.8934f;
	
		case 93:
			return -5518.0713f, -2906.2173f, -2.7513f;
	
		case 94:
			return -5520.701f, -3044.4265f, -1.40419f;
	
		case 95:
			return -3687.3f, -2623.39f, -14.44f;
	
		case 99:
			return -5227.3574f, -3470.0674f, -20.49293f;
	
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

float func_752(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x1DE30 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

void func_753(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x1DE58 Hash - 0x7EFAC478 ^0x4E4217E0
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
								unk13[i /*2*/].f_1 = unk13[i /*2*/].f_1 - outData2.f_1;
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

int func_754(Ped pedParam0, Hash hParam1, var uParam2) // Position - 0x1DFBF Hash - 0x2FEB5004 ^0xF9843320
{
	Hash hash;
	ItemSet itemset;
	Entity entityFromItem;
	int i;
	int itemsetSize;
	int num;
	var unk;
	var unk2;
	var unk3;
	Ped pedIndexFromEntityIndex;

	if (!func_161(hParam1, 0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (!PED::IS_PED_CARRYING_SOMETHING(pedParam0))
		return 0;

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
			if (ENTITY::IS_ENTITY_A_PED(entityFromItem))
			{
				pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem);
				func_514(pedIndexFromEntityIndex, &unk, &unk2, &num, &unk3);
				func_767(&hash, pedIndexFromEntityIndex, num, unk);
			}
			else
			{
				hash = func_530(entityFromItem);
			}
		
			if (hash == hParam1)
			{
				*uParam2 = entityFromItem;
				ITEMSET::DESTROY_ITEMSET(itemset);
				return 1;
			}
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemset);
	return 0;
}

int func_755(int iParam0) // Position - 0x1E08B Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_957(func_956(iParam0));
}

void func_756(int iParam0, var uParam1) // Position - 0x1E09D Hash - 0xBF936816 ^0xD35EFA2C
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

BOOL func_757(Hash hParam0) // Position - 0x1E19A Hash - 0x94D015F5 ^0x14C4310B
{
	int i;

	for (i = 0; i < Global_1935689.f_19.f_1; i = i + 1)
	{
		if (func_234(hParam0, Global_1935689.f_19.f_2[i /*2*/]))
			return true;
	}

	return false;
}

BOOL func_758(Hash hParam0) // Position - 0x1E1D5 Hash - 0x41E81FD3 ^0x6129C7A4
{
	if (func_111(hParam0, -839724752))
		return func_111(hParam0, 1937586541);

	return false;
}

BOOL func_759(Hash hParam0, int iParam1) // Position - 0x1E1FA Hash - 0xD64A2C8D ^0x52F52E2B
{
	if (func_111(hParam0, 173360570))
		return 0;

	switch (Global_1935689.f_17)
	{
		case 1:
			if (iParam1 == -2074770370)
				if (func_111(hParam0, joaat("ci_tag_item_meat_animal")) || func_111(hParam0, -839724752) || func_111(hParam0, -136654233))
					return 1;
			break;
	
		case 2:
			if (iParam1 == -2074770370)
				if (func_111(hParam0, joaat("ci_tag_item_meat_animal")) || func_111(hParam0, -839724752) || func_111(hParam0, -136654233) || func_111(hParam0, 554195525) || func_111(hParam0, -1238310989) || func_111(hParam0, 2127114599) || func_111(hParam0, -1864584831) || func_111(hParam0, 1068498601) || func_111(hParam0, 1967571132))
					return 1;
			break;
	
		default:
			break;
	}

	return 0;
}

int func_760(Hash hParam0) // Position - 0x1E318 Hash - 0x773BFB67 ^0x773BFB67
{
	if (func_384(hParam0, 4))
		return 0;

	return 1;
}

Vector3 func_761() // Position - 0x1E32F Hash - 0xEE6F6785 ^0xEE6F6785
{
	if (func_958(70))
		return -1634.2521f, -1358.5771f, 83.9077f;

	if (func_958(73))
		return -1665.4187f, -1346.2577f, 84.11175f;

	return -1641.1001f, -1359.9785f, 83.4932f;
}

eStackSize func_762() // Position - 0x1E37C Hash - 0xC5B83CF5 ^0xD520990E
{
	return Global_40.f_4283.f_1;
}

void func_763(int iParam0, int iParam1) // Position - 0x1E38C Hash - 0x9DC90D4D ^0x8E5F6E64
{
	Global_1935689.f_19.f_2[iParam0 /*2*/] = iParam1;
	return;
}

BOOL func_764(int iParam0) // Position - 0x1E3A2 Hash - 0xA67D24A0 ^0xEDAA4F24
{
	return Global_1935689.f_19.f_2[iParam0 /*2*/].f_1;
}

void func_765(int iParam0) // Position - 0x1E3B8 Hash - 0xD2BB9581 ^0x4A78448E
{
	Global_1935689.f_19.f_2[iParam0 /*2*/] = 0;
	Global_1935689.f_19.f_2[iParam0 /*2*/].f_1 = 0;
	return;
}

void func_766( Param0) // Position - 0x1E3DC Hash - 0x9CC4A877 ^0xCE40286E
{
	 Var0;
	int num;

	Var0 = Param0;
	num.f_1 = func_959(Var0);
	num = func_960(Var0);
	func_541(joaat("folder_item"), Param0, &num, func_961(Param0), 1, 0, 0, joaat("COLOR_PURE_WHITE"));
	Global_1935689.f_19.f_203 = Global_1935689.f_19.f_203 + 1;
	Global_1935689.f_19.f_1 = Global_1935689.f_19.f_1 + 1;
	return;
}

BOOL func_767(Any anParam0, Ped pedParam1, int iParam2, var uParam3) // Position - 0x1E439 Hash - 0xF684EE16 ^0xD8F147D7
{
	int num;
	var unk;
	BOOL flag;

	num = uParam3;
	unk = iParam2;

	if (num < unk)
		iParam2 = num;

	flag = PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(anParam0, pedParam1, iParam2);
	return flag;
}

Hash func_768(Ped pedParam0) // Position - 0x1E462 Hash - 0xF32C828D ^0x75879223
{
	int num;
	var unk;
	var unk2;
	var unk3;
	int num2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (!ENTITY::GET_IS_ANIMAL(pedParam0) && !ENTITY::_GET_IS_BIRD(pedParam0))
		return 0;

	func_514(pedParam0, &unk, &unk2, &num, &unk3);
	func_767(&num2, pedParam0, num, unk);

	if (num2 != 0)
		return num2;

	switch (num)
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

int func_769(Hash hParam0) // Position - 0x1E4EF Hash - 0x26530429 ^0xECF5329B
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			return joaat("taxidermy_order_05");
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			return joaat("taxidermy_order_04");
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			return joaat("taxidermy_order_03");
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			return joaat("taxidermy_order_01");
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			return joaat("taxidermy_order_02");
	
		default:
		
	}

	return 0;
}

BOOL func_770(int iParam0, Hash hParam1) // Position - 0x1E546 Hash - 0x97EE4136 ^0x97EE4136
{
	int num;

	num = func_573(iParam0, 20);

	if (num == 5)
		if (func_776(iParam0, 5, false) && func_776(iParam0, 6, false) && func_776(iParam0, 7, false) && func_776(iParam0, 8, false) && func_776(iParam0, 9, false))
			return func_384(hParam1, 8388608);
	else if (num == 4)
		if (func_776(iParam0, 5, false) && func_776(iParam0, 6, false) && func_776(iParam0, 7, false) && func_776(iParam0, 8, false))
			return func_384(hParam1, 8388608);
	else if (num == 3)
		if (func_776(iParam0, 5, false) && func_776(iParam0, 6, false) && func_776(iParam0, 7, false))
			return func_384(hParam1, 8388608);
	else if (num == 2)
		if (func_776(iParam0, 5, false) && func_776(iParam0, 6, false))
			return func_384(hParam1, 8388608);

	return false;
}

Hash func_771(Hash hParam0) // Position - 0x1E66B Hash - 0xB8EC44B7 ^0x1B1A64FC
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_14"):
			return joaat("bone_13");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_06"):
			return joaat("bone_05");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_25"):
			return joaat("bone_24");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_11"):
			return joaat("bone_10");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_03"):
			return joaat("bone_02");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_28"):
			return joaat("bone_27");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_09"):
			return joaat("bone_08");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_22"):
			return joaat("bone_21");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_21"):
			return joaat("bone_20");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_17"):
			return joaat("bone_16");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_24"):
			return joaat("bone_23");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_07"):
			return joaat("bone_06");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_18"):
			return joaat("bone_17");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_15"):
			return joaat("bone_14");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_23"):
			return joaat("bone_22");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_08"):
			return joaat("bone_07");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_20"):
			return joaat("bone_19");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_19"):
			return joaat("bone_18");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_04"):
			return joaat("bone_03");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_27"):
			return joaat("bone_26");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_01"):
			return joaat("bone_00");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_30"):
			return joaat("bone_29");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_12"):
			return joaat("bone_11");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_02"):
			return joaat("bone_01");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_29"):
			return joaat("bone_28");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_10"):
			return joaat("bone_09");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_26"):
			return joaat("bone_25");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_16"):
			return joaat("bone_15");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_05"):
			return joaat("bone_04");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_13"):
			return joaat("bone_12");
	
		default:
		
	}

	return 0;
}

BOOL func_772(eStackSize essParam0) // Position - 0x1E820 Hash - 0x6E1FF8D2 ^0xA37D6FD2
{
	if (func_62() != -1)
		return false;

	if (!func_344(essParam0))
		return false;

	return func_296(Global_1347702[essParam0 /*49*/].f_15, true);
}

Hash func_773(Hash hParam0) // Position - 0x1E851 Hash - 0xB8EC44B7 ^0xCC0DC7B6
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_08"):
			return joaat("rock_07_hrt");
	
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_07"):
			return joaat("rock_06_hrt");
	
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_03"):
			return joaat("rock_02_cml");
	
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_09"):
			return joaat("rock_08_roa");
	
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_04"):
			return joaat("rock_03_cml");
	
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_05"):
			return joaat("rock_04_bgv");
	
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_06"):
			return joaat("rock_05_bgv");
	
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_01"):
			return joaat("rock_00_grz");
	
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_02"):
			return joaat("rock_01_grz");
	
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_10"):
			return joaat("rock_09_roa");
	
		default:
		
	}

	return 0;
}

BOOL func_774(Hash hParam0) // Position - 0x1E8EE Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("provision_fish_chain_pickerel_legendary"):
		case joaat("provision_fish_muskie_legendary"):
		case joaat("provision_fish_bluegill_legendary"):
		case joaat("provision_fish_lake_sturgeon_legendary"):
		case joaat("provision_fish_redfin_pickerel_legendary"):
		case joaat("provision_fish_steelhead_trout_legendary"):
		case joaat("provision_fish_longnose_gar_legendary"):
		case joaat("provision_fish_largemouth_bass_legendary"):
		case joaat("provision_fish_rock_bass_legendary"):
		case joaat("provision_fish_perch_legendary"):
		case joaat("provision_fish_bullhead_catfish_legendary"):
		case joaat("provision_fish_sockeye_salmon_legendary"):
		case joaat("provision_fish_smallmouth_bass_legendary"):
			return true;
	}

	return false;
}

int func_775(Hash hParam0) // Position - 0x1E954 Hash - 0xB8EC44B7 ^0x75D9F70F
{
	switch (hParam0)
	{
		case joaat("provision_fish_chain_pickerel_legendary"):
			return joaat("legendary_fish_02");
	
		case joaat("provision_fish_muskie_legendary"):
			return joaat("legendary_fish_06");
	
		case joaat("provision_fish_bluegill_legendary"):
			return joaat("legendary_fish_13");
	
		case joaat("provision_fish_lake_sturgeon_legendary"):
			return joaat("legendary_fish_03");
	
		case joaat("provision_fish_redfin_pickerel_legendary"):
			return joaat("legendary_fish_08");
	
		case joaat("provision_fish_steelhead_trout_legendary"):
			return joaat("legendary_fish_12");
	
		case joaat("provision_fish_longnose_gar_legendary"):
			return joaat("legendary_fish_05");
	
		case joaat("provision_fish_largemouth_bass_legendary"):
			return joaat("legendary_fish_04");
	
		case joaat("provision_fish_rock_bass_legendary"):
			return joaat("legendary_fish_09");
	
		case joaat("provision_fish_perch_legendary"):
			return joaat("legendary_fish_07");
	
		case joaat("provision_fish_bullhead_catfish_legendary"):
			return joaat("legendary_fish_01");
	
		case joaat("provision_fish_sockeye_salmon_legendary"):
			return joaat("legendary_fish_11");
	
		case joaat("provision_fish_smallmouth_bass_legendary"):
			return joaat("legendary_fish_10");
	
		default:
		
	}

	return 0;
}

BOOL func_776(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1EA1B Hash - 0xC1832837 ^0xFC89CC12
{
	Hash hash;

	hash = func_699(iParam0, iParam1);

	if (hash == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT") || hash == joaat("provision_fish_bullhead_catfish_legendary") || hash == joaat("provision_fish_chain_pickerel_legendary") || hash == joaat("provision_fish_perch_legendary") || hash == joaat("provision_fish_redfin_pickerel_legendary") || hash == joaat("provision_fish_rock_bass_legendary") || hash == joaat("provision_fish_bluegill_legendary"))
	{
		if (func_257(hash, 1, false))
		{
			if (bParam2)
			{
				Global_1901328.f_94 = 1;
				func_149(hash, 1, false, -142743235, false);
			}
		
			return true;
		}
	}
	else if (hash == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT") || hash == joaat("provision_fish_lake_sturgeon_legendary") || hash == joaat("provision_fish_longnose_gar_legendary") || hash == joaat("provision_fish_muskie_legendary") || hash == joaat("provision_fish_largemouth_bass_legendary") || hash == joaat("provision_fish_smallmouth_bass_legendary") || hash == joaat("provision_fish_sockeye_salmon_legendary") || hash == joaat("provision_fish_steelhead_trout_legendary"))
	{
		if (func_962(hash, bParam2))
			return true;
	}

	return false;
}

BOOL func_777(Hash hParam0) // Position - 0x1EC24 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("provision_ro_flower_clamshell"):
		case joaat("provision_ro_flower_acunas_star"):
		case joaat("provision_ro_flower_cigar"):
		case joaat("provision_ro_flower_rat_tail"):
		case joaat("provision_ro_flower_night_scented"):
		case joaat("provision_ro_flower_lady_of_night"):
		case joaat("provision_ro_flower_sparrows"):
		case joaat("provision_ro_flower_queens"):
		case joaat("provision_ro_flower_spider"):
		case joaat("provision_ro_flower_dragons"):
		case joaat("provision_ro_flower_lady_slipper"):
		case joaat("provision_ro_flower_moccasin"):
		case joaat("provision_ro_flower_ghost"):
			return true;
	}

	return false;
}

BOOL func_778(Hash hParam0) // Position - 0x1EC8A Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return true;
	}

	return false;
}

BOOL func_779() // Position - 0x1ECEA Hash - 0x7AD82543 ^0x1E438C72
{
	return Global_1914319.f_17369 || Global_1914319.f_18996.f_1;
}

void func_780(var uParam0, var uParam1) // Position - 0x1ED08 Hash - 0x12030C6A ^0x6D16C1AB
{
	int i;
	var unk;
	int num;
	int num2;
	int j;
	int inventoryIdFromPed;
	var unk19;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return;

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

	if (func_782(inventoryIdFromPed, &unk, &num, &num2))
	{
		j = 0;
	
		for (j = 0; j < num2; j = j + 1)
		{
			if (func_233(&unk19, j, num, num2))
			{
				if (func_161(unk19.f_4, 0) && unk19.f_4 != 1259508039)
				{
					if (func_249(unk19.f_4))
					{
						for (i = 0; i < 999; i = i + 1)
						{
							if (uParam1->[i] == unk19.f_4 || !func_161(uParam1->[i], 0))
								break;
						}
					
						if (!func_161(Global_1935689.f_223[i], 0))
							uParam1->[i] = unk19.f_4;
					}
				}
			}
		}
	
		func_244(num);
	}

	return;
}

void func_781(var uParam0, int iParam1, BOOL bParam2) // Position - 0x1EE4A Hash - 0x83453A52 ^0xF98DE85D
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");
	unk.f_4 = uParam0;
	unk.f_11 = iParam1;

	if (!bParam2)
		func_255(unk, 0);
	else
		func_236(unk, 0);

	return;
}

BOOL func_782(int iParam0, Any* panParam1, var uParam2, int* piParam3) // Position - 0x1EE88 Hash - 0x691EB829 ^0xDB420511
{
	*uParam2 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(iParam0, panParam1, piParam3);

	if (*uParam2 >= 0)
		return true;

	return false;
}

void func_783(var uParam0, int iParam1) // Position - 0x1EEA9 Hash - 0xD05180BA ^0x39589262
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

void func_784(var uParam0, int iParam1) // Position - 0x1EF2F Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_785(var uParam0, int iParam1) // Position - 0x1EF6B Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_963(*uParam0);
	num2 = func_964(*uParam0);

	if (iParam1 < 1 || iParam1 > func_965(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_786(var uParam0, int iParam1) // Position - 0x1EFBE Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_787(var uParam0, int iParam1) // Position - 0x1EFF9 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_788(var uParam0, int iParam1) // Position - 0x1F032 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_789(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x1F06A Hash - 0x92B705D3 ^0xB783F681
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

BOOL func_790() // Position - 0x1F160 Hash - 0x5042ED24 ^0xBB33230E
{
	Ped ped;
	float num;

	ped = func_85(7);
	num = -1f;

	if (!ENTITY::IS_ENTITY_DEAD(ped))
	{
		if (func_346(7) != 0)
		{
			num = func_136(7);
		
			if (num != -1f)
				if (func_137(Global_35, ped, num, true))
					return false;
		}
	}

	if (func_138() != 0)
		if (ENTITY::DOES_ENTITY_EXIST(Global_1900383.f_393))
			if (func_137(Global_35, Global_1900383.f_393, 5f, true))
				return false;

	return true;
}

void func_791(Any* panParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1F1D4 Hash - 0x9DD0C951 ^0x4F3B32EE
{
	int num;
	int num2;
	int i;
	var unk;

	num = -1;
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_489(panParam0, &num, &num2, bParam1))
	{
		i = 0;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_233(&unk, i, num, num2))
			{
				if (!func_235(&unk, 0, false))
				{
				}
				else if (bParam2)
				{
					func_258(unk.f_4, bParam3);
				}
				else
				{
					func_246(unk);
				}
			}
		}
	}

	func_244(num);
	return;
}

void func_792() // Position - 0x1F251 Hash - 0xFBE678B9 ^0x8656B441
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9468, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9467, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9464, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9465, false);
	return;
}

BOOL func_793(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, BOOL bParam6) // Position - 0x1F289 Hash - 0x80B0B89C ^0x78EC1C55
{
	var outGuid;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(func_199(bParam6), &uParam0, hParam4, &outGuid))
		return false;

	if (!func_446(outGuid, panParam5, bParam6, false))
		return false;

	return true;
}

BOOL func_794() // Position - 0x1F2CD Hash - 0xEA4BE447 ^0x26D2E00E
{
	int scenarioPointTypePedIsUsing;
	int num;

	if (Global_1392040.f_2)
		return false;

	if (func_185())
		return false;

	if (func_118())
		return false;

	if (Global_1935496.f_10)
		return false;

	if (Global_1935496.f_11)
		return false;

	if (Global_1935496.f_12)
		return false;

	if (!func_958(15))
		return false;

	if (func_779())
		return false;

	if (func_966(8192))
		return false;

	if (TASK::IS_PED_EXITING_SCENARIO(Global_35, true))
		return false;

	if (func_475())
		return false;

	if (func_368(8388608))
	{
		scenarioPointTypePedIsUsing = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35);
		num = scenarioPointTypePedIsUsing;
	
		if (num == joaat("world_player_camp_fire_kneel1") || num == joaat("world_player_camp_fire_kneel2") || num == joaat("world_player_camp_fire_kneel3") || num == joaat("world_player_camp_fire_kneel4"))
			return true;
	
		return false;
	}

	if (!func_173(false, true))
		return false;

	return true;
}

BOOL func_795(Hash hParam0) // Position - 0x1F3C4 Hash - 0x1BC045DA ^0x469FDDE1
{
	if (func_967(hParam0, joaat("DEFAULT")) == 0)
		return false;

	return true;
}

Ped func_796(int iParam0) // Position - 0x1F3E0 Hash - 0xBA66DF96 ^0xBA66DF96
{
	switch (iParam0)
	{
		case 0:
			return Global_35;
	
		case 1:
			if (func_272(Global_1935689.f_9436, 4))
				return func_85(6);
			break;
	
		case 2:
			if (func_272(Global_1935689.f_9436, 2))
				return func_85(1);
			break;
	
		case 3:
			if (func_272(Global_1935689.f_9436, 1))
				return func_85(7);
			break;
	}

	return _INVALID_PLAYER_INDEX();
}

var func_797(Ped pedParam0, Hash hParam1) // Position - 0x1F463 Hash - 0x4CDE654A ^0x4CDE654A
{
	var unk;
	var unk2;
	var unk3;

	func_798(pedParam0, hParam1, &unk, &unk2, &unk3);
	return unk;
}

void func_798(Ped pedParam0, Hash hParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1F47B Hash - 0xE0C1F5A0 ^0xE13C4FDF
{
	var unk;
	int num;
	int i;
	Entity entity;
	var unk5;
	int j;

	if (!func_220(hParam1))
		return;

	if (func_968(pedParam0))
	{
		for (i = 0; i < 3; i = i + 1)
		{
			num = func_969(i);
		
			if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk, pedParam0, num, 0))
			{
			}
			else
			{
				entity = unk.f_3;
			
				if (!ENTITY::DOES_ENTITY_EXIST(entity))
				{
				}
				else if (hParam1 == func_248(entity))
				{
					if (ENTITY::_IS_ENTITY_FULLY_LOOTED(entity))
					{
						if (i == 0 || i == 2)
							*uParam4 = 1;
					
						*uParam2 = *uParam2 + 1;
					}
					else
					{
						*uParam3 = *uParam3 + 1;
					}
				}
			}
		}
	}
	else if (PED::IS_PED_CARRYING_SOMETHING(pedParam0))
	{
		unk5 = 10;
		func_970(Global_35, &unk5, 1);
	
		for (j = 0; j < 10; j = j + 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(unk5[j]))
			{
			}
			else if (hParam1 == func_248(unk5[j]))
			{
				if (ENTITY::_IS_ENTITY_FULLY_LOOTED(unk5[j]))
				{
					if (j == 0)
						*uParam4 = 1;
				
					*uParam2 = *uParam2 + 1;
				}
				else
				{
					*uParam3 = *uParam3 + 1;
				}
			}
		}
	}

	return;
}

int func_799(int iParam0) // Position - 0x1F591 Hash - 0x1497AC6A ^0x1497AC6A
{
	if (!(iParam0 > -1 && iParam0 < 153))
		return -1;

	switch (iParam0)
	{
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
	
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
	
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
	
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
	
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
	
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
	
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
	
		case 9:
		case 37:
		case 69:
			return 8;
	
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
	
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
	
		case 12:
		case 54:
			return 21;
	
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
	
		case 17:
		case 47:
			return 7;
	
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
	
		case 22:
			return 17;
	
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
	
		case 48:
			return 12;
	
		case 49:
			return 13;
	
		case 50:
			return 14;
	
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
	
		case 62:
		case 79:
			return 20;
	
		case 101:
			return 11;
	
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
	
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
	
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
	
		case 126:
			return 32;
	
		case 127:
			return 34;
	
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
	
		case 136:
			return 5;
	
		case 149:
			return 23;
	
		case 150:
			return 24;
	
		case 151:
			return 25;
	
		case 152:
			return 24;
	
		default:
		
	}

	return -1;
}

int func_800(int iParam0) // Position - 0x1F9E5 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_971(iParam0);
}

void func_801(BOOL bParam0) // Position - 0x1F9F3 Hash - 0xED2925F ^0xCA812B62
{
	if (bParam0)
		func_972(&(Global_40.f_12019.f_42), 1);
	else
		func_973(&(Global_40.f_12019.f_42), 1);

	return;
}

int func_802() // Position - 0x1FA1D Hash - 0xA91AE85E ^0xA91AE85E
{
	return func_974(Global_40.f_12019);
}

int func_803() // Position - 0x1FA2F Hash - 0x5DD72DA6 ^0x5DD72DA6
{
	int num;
	int i;
	Hash hash;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		hash = func_658(i);
	
		if (func_257(hash, 1, false) || func_809(func_808(hash)))
			num = num + 1;
	}

	return num;
}

int func_804() // Position - 0x1FA78 Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_975(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_805() // Position - 0x1FAB1 Hash - 0x73582AAF ^0xDAB74775
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 14; i = i + 1)
	{
		if (func_814(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
			num = num + 1;
	}

	return num;
}

int func_806() // Position - 0x1FAEA Hash - 0xCF63D31C ^0x129791
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("rock_carvings"), 0);
}

int func_807(int iParam0) // Position - 0x1FAFC Hash - 0xB8EC44B7 ^0x693BD882
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET");
	
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET");
	
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET");
	
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET");
	
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET");
	
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET");
	
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET");
	
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET");
	
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET");
	
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET");
	
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET");
	
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET");
	
		default:
		
	}

	return 0;
}

BOOL func_808(Hash hParam0) // Position - 0x1FBB5 Hash - 0x6931DCCD ^0x96AB98B4
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			return 128;
	
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			return true;
	
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			return 16;
	
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			return 8;
	
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			return 256;
	
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			return 2;
	
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			return 1024;
	
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			return 4;
	
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			return 512;
	
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			return 32;
	
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			return 64;
	
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return 2048;
	
		default:
		
	}

	return false;
}

BOOL func_809(BOOL bParam0) // Position - 0x1FC4B Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12019 && bParam0 != false;
}

char* func_810(int iParam0) // Position - 0x1FC5E Hash - 0x5BCE232D ^0xDA3EF3BF
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
	
		case 1:
			return "COL_DB_SEND";
	
		case 2:
			return "COL_DB_COLLECT";
	
		default:
		
	}

	return "";
}

int func_811(int iParam0) // Position - 0x1FC98 Hash - 0xDD8DC1C4 ^0xDD8DC1C4
{
	switch (iParam0)
	{
		case 0:
			return 5;
	
		case 1:
			return 6;
	
		case 2:
			return 7;
	
		case 3:
			return 8;
	
		case 4:
			return 9;
	
		default:
		
	}

	return 5;
}

int func_812(int iParam0) // Position - 0x1FCDD Hash - 0x499196F8 ^0x499196F8
{
	switch (iParam0)
	{
		case 0:
			return 15;
	
		case 1:
			return 16;
	
		case 2:
			return 17;
	
		case 3:
			return 18;
	
		case 4:
			return 19;
	
		default:
		
	}

	return 15;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(Hash hParam0) // Position - 0x1FD26 Hash - 0xA17D549C ^0xFE2C1295
{
	switch (hParam0)
	{
		case joaat("provision_ro_flower_clamshell"):
			return "COL_RO_CLAMSHELL_FOUND";
	
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return "COL_EP_SNOWY_FOUND";
	
		case joaat("provision_ro_flower_acunas_star"):
			return "COL_RO_ACUNAS_STAR_FOUND";
	
		case joaat("provision_ro_flower_cigar"):
			return "COL_RO_CIGAR_FOUND";
	
		case joaat("provision_ro_flower_rat_tail"):
			return "COL_RO_RAT_TAIL_FOUND";
	
		case joaat("PROVISION_HERON_FEATHER"):
			return "COL_HF_FOUND";
	
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return "COL_EP_REDDISH_FOUND";
	
		case joaat("provision_ro_flower_night_scented"):
			return "COL_RO_NIGHT_SCENTED_FOUND";
	
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return "COL_EP_LITTLE_FOUND";
	
		case joaat("provision_ro_flower_lady_of_night"):
			return "COL_RO_LADY_OF_NIGHT_FOUND";
	
		case joaat("provision_ro_flower_sparrows"):
			return "COL_RO_SPARROWS_FOUND";
	
		case joaat("provision_ro_flower_queens"):
			return "COL_RO_QUEENS_FOUND";
	
		case joaat("provision_ro_flower_spider"):
			return "COL_RO_SPIDER_FOUND";
	
		case joaat("provision_ro_flower_dragons"):
			return "COL_RO_DRAGONS_FOUND";
	
		case joaat("provision_ro_flower_lady_slipper"):
			return "COL_RO_LADY_SLIPPER_FOUND";
	
		case joaat("provision_ro_flower_moccasin"):
			return "COL_RO_MOCCASIN_FOUND";
	
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return "COL_SF_FOUND";
	
		case joaat("provision_ro_flower_ghost"):
			return "COL_RO_GHOST_FOUND";
	
		case joaat("PROVISION_GATOR_EGG"):
			return "COL_GF_FOUND";
	
		default:
		
	}

	return "";
}

BOOL func_814(Hash hParam0) // Position - 0x1FE33 Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Hash hParam0) // Position - 0x1FE43 Hash - 0xA17D549C ^0x62FE0E6D
{
	switch (hParam0)
	{
		case joaat("legendary_fish_01"):
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
	
		case joaat("legendary_fish_03"):
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
	
		case joaat("legendary_fish_07"):
			return "PROVISION_FISH_PERCH_LEGENDARY";
	
		case joaat("legendary_fish_05"):
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
	
		case joaat("legendary_fish_06"):
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
	
		case joaat("legendary_fish_04"):
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
	
		case joaat("legendary_fish_09"):
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
	
		case joaat("legendary_fish_08"):
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
	
		case joaat("legendary_fish_11"):
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
	
		case joaat("legendary_fish_13"):
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
	
		case joaat("legendary_fish_12"):
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
	
		case joaat("legendary_fish_10"):
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
	
		case joaat("legendary_fish_02"):
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
	
		default:
		
	}

	return "";
}

char* func_816(int iParam0) // Position - 0x1FEFF Hash - 0x5BCE232D ^0x5F9B53FA
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
	
		case 1:
			return "COL_RC_SEND";
	
		case 2:
			return "COL_RC_COLLECT";
	
		default:
		
	}

	return "";
}

BOOL func_817(Hash hParam0) // Position - 0x1FF39 Hash - 0x5C411CF ^0x5C411CF
{
	if (func_976(hParam0) && func_257(hParam0, 1, false))
		return 1;
	else if (func_977(hParam0) && func_978(hParam0))
		return 1;

	return 0;
}

char* func_818(Hash hParam0) // Position - 0x1FF77 Hash - 0xE908687D ^0x936BB8
{
	if (!func_161(hParam0, 0))
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(func_266(hParam0));
}

int func_819(int iParam0) // Position - 0x1FF9A Hash - 0x6AA34421 ^0x2D6E2AEF
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_820(int iParam0) // Position - 0x1FFAC Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

int func_821(int iParam0) // Position - 0x1FFC0 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_979(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_822(Hash hParam0) // Position - 0x20003 Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

float func_823(int iParam0, int iParam1) // Position - 0x20011 Hash - 0x882BA7B3 ^0xDE52A593
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
			pedStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_35));
			pedMaxStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false));
			num = 50;
			break;
	
		case 1:
			pedStamina = PED::_GET_PED_STAMINA(Global_35);
			pedMaxStamina = PED::_GET_PED_MAX_STAMINA(Global_35);
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

void func_824(int iParam0, BOOL bParam1) // Position - 0x200C6 Hash - 0x9D46840B ^0xDAAD5146
{
	int value;
	int healthAmount;

	value = 50 * iParam0;
	healthAmount = value + ENTITY::GET_ENTITY_HEALTH(Global_35);

	if (bParam1 && value < 0)
		ENTITY::_CHANGE_ENTITY_HEALTH(Global_35, BUILTIN::TO_FLOAT(value), 0, 0);
	else if (iParam0 <= 0 || healthAmount > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false))
		ENTITY::SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false), 0);
	else
		ENTITY::SET_ENTITY_HEALTH(Global_35, healthAmount, 0);

	return;
}

void func_825(int iParam0, int iParam1) // Position - 0x20137 Hash - 0xDA1E7FF9 ^0xEB114C96
{
	Global_1347477.f_9[iParam0 /*2*/] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

void func_826(int iParam0) // Position - 0x20150 Hash - 0x3A3EA746 ^0x311B4E59
{
	PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
	return;
}

void func_827(int iParam0) // Position - 0x2016B Hash - 0xD46386C8 ^0x5B34A14E
{
	int num;

	if (func_62() != -1)
		return;

	if (iParam0 == -1)
	{
		PED::_RESTORE_PED_STAMINA(Global_35, 100f);
	}
	else
	{
		num = 8;
		PED::_CHANGE_PED_STAMINA(Global_35, BUILTIN::TO_FLOAT(iParam0 * num));
	}

	return;
}

float func_828(int iParam0, float fParam1) // Position - 0x201A8 Hash - 0xDF35DF4B ^0x834D2C65
{
	return func_980(BUILTIN::TO_FLOAT(iParam0), fParam1);
}

BOOL func_829(var uParam0, var uParam1, float fParam2) // Position - 0x201BC Hash - 0xEC9C2B00 ^0xEC9C2B00
{
	if (func_62() != -1)
		return true;

	if (!func_981(0))
		return true;

	if (fParam2 <= 0f)
		return true;

	if (*uParam0)
		return !*uParam1;

	*uParam0 = 1;

	if (!Global_1347477.f_191.f_3)
	{
		func_982(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477.f_191.f_3 = 1;
	}

	if (Global_1347477.f_191 < MISC::GET_GAME_TIMER())
		Global_1347477.f_191.f_1 = 0;

	Global_1347477.f_191.f_1 = Global_1347477.f_191.f_1 + 1;

	if (Global_1347477.f_191.f_1 > 3)
	{
		if (Global_1347477.f_191.f_2 < MISC::GET_GAME_TIMER())
		{
			func_150(0, true);
			Global_1347477.f_191.f_2 = MISC::GET_GAME_TIMER() + 480000;
		}
	
		func_982(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return false;
	}

	Global_1347477.f_191 = MISC::GET_GAME_TIMER() + 480000;
	*uParam1 = 0;
	return true;
}

void func_830(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x202A8 Hash - 0x99A7D713 ^0x99A7D713
{
	float num;

	if (func_62() == false)
	{
		func_983(0, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_915(0);

	if (bParam1)
		func_984(num);

	if (num >= 100f - 1f)
		func_985();

	if (bParam2)
		fParam0 = func_986(0, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_987(0, func_923(fParam0, -100f, 100f), bParam1);
	return;
}

void func_831(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2031A Hash - 0x2BA41710 ^0x2BA41710
{
	float num;

	if (func_62() == false)
	{
		func_983(2, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_915(2);

	if (bParam1)
		func_984(num);

	if (bParam2)
		fParam0 = func_986(2, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_987(2, func_923(fParam0, -100f, 100f), bParam1);
	return;
}

void func_832(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2037B Hash - 0x5266CD64 ^0x5266CD64
{
	float num;

	if (func_62() == false)
	{
		func_983(1, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_915(1);

	if (bParam1)
		func_984(num);

	if (bParam2)
		fParam0 = func_986(1, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_987(1, func_923(fParam0, -100f, 100f), bParam1);
	return;
}

float func_833(float fParam0, int iParam1) // Position - 0x203DC Hash - 0x4EDD98F5 ^0x4EDD98F5
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

void func_834(int iParam0, float fParam1) // Position - 0x2042E Hash - 0xE703ECFF ^0xBDAEF876
{
	Ped ped;
	char* effectName;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam1 == -1f)
		if (func_988(iParam0))
			fParam1 = 30f;
		else
			fParam1 = 30f;
	else if (fParam1 <= 0f)
		return;

	fParam1 = fParam1 * (1f + Global_40.f_11095.f_70);

	switch (iParam0)
	{
		case 0:
			effectName = func_989(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_990(-1);
			func_991(false);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/] = fParam1;
			break;
	
		case 1:
			effectName = func_989(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_992(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/] = fParam1;
			break;
	
		case 2:
			effectName = func_989(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_993(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/] = fParam1;
			break;
	
		case 18:
			func_994(1, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/].f_1 = fParam1;
			break;
	
		case 19:
			func_994(0, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/].f_1 = fParam1;
			break;
	
		case 20:
			func_994(2, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/].f_1 = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_835(float fParam0, BOOL bParam1) // Position - 0x205C1 Hash - 0xDA7BE4BE ^0xDA7BE4BE
{
	float num;
	int num2;
	int num3;
	float num4;
	float num5;

	num = func_995(13);

	if (fParam0 > 10f)
		fParam0 = 10f;

	if (!func_385(17))
		return;

	if (func_996())
	{
		num2 = func_997(num);
		num = num + fParam0;
		num3 = func_997(num);
	
		if (num2 != num3)
		{
			Global_1347477.f_195 = func_895();
			func_896(&(Global_1347477.f_195), 0, 0, 1, 0, 0, 0, false);
		}
	
		func_998(&num4, &num5);
		func_999(13, func_923(num, num4, num5));
	}

	if (bParam1)
	{
		Global_40.f_11095.f_66 = Global_40.f_11095.f_66 + 1;
	
		if (5 == Global_40.f_11095.f_66)
			func_150(94, false);
	}

	return;
}

int func_836(int iParam0) // Position - 0x20672 Hash - 0xBA965109 ^0xA132DCEE
{
	switch (iParam0)
	{
		case 1:
			return joaat("provision_ro_flower_acunas_star");
	
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
	
		case 9:
			return joaat("provision_ro_flower_cigar");
	
		case 10:
			return joaat("provision_ro_flower_clamshell");
	
		case 11:
			return joaat("consumable_herb_common_bulrush");
	
		case 12:
			return joaat("consumable_herb_creeping_thyme");
	
		case 13:
			return joaat("consumable_herb_sage");
	
		case 14:
			return joaat("provision_ro_flower_dragons");
	
		case 15:
			return joaat("consumable_herb_english_mace");
	
		case 16:
			return joaat("consumable_herb_evergreen_huckleberry");
	
		case 17:
			return joaat("provision_ro_flower_ghost");
	
		case 18:
			return joaat("consumable_herb_currant");
	
		case 19:
			return joaat("consumable_herb_sage");
	
		case 20:
			return joaat("consumable_herb_indian_tobacco");
	
		case 21:
			return joaat("provision_ro_flower_lady_of_night");
	
		case 22:
			return joaat("provision_ro_flower_lady_slipper");
	
		case 23:
			return joaat("consumable_herb_milkweed");
	
		case 24:
			return joaat("provision_ro_flower_moccasin");
	
		case 25:
			return joaat("provision_ro_flower_night_scented");
	
		case 26:
			return joaat("consumable_herb_oleander_sage");
	
		case 27:
			return joaat("consumable_herb_oregano");
	
		case 28:
			return joaat("consumable_herb_parasol_mushroom");
	
		case 29:
			return joaat("consumable_herb_prairie_poppy");
	
		case 30:
			return joaat("provision_ro_flower_queens");
	
		case 31:
			return joaat("consumable_herb_rams_head");
	
		case 32:
			return joaat("provision_ro_flower_rat_tail");
	
		case 33:
			return joaat("consumable_herb_red_raspberry");
	
		case 34:
			return joaat("consumable_herb_sage");
	
		case 35:
			return joaat("provision_ro_flower_sparrows");
	
		case 36:
			return joaat("provision_ro_flower_spider");
	
		case 37:
			return joaat("consumable_herb_vanilla_flower");
	
		case 38:
			return joaat("consumable_herb_violet_snowdrop");
	
		case 39:
			return joaat("consumable_herb_wild_carrots");
	
		case 40:
			return joaat("consumable_herb_wild_feverfew");
	
		case 41:
			return joaat("consumable_herb_wild_mint");
	
		case 42:
			return joaat("consumable_herb_wintergreen_berry");
	
		case 43:
			return joaat("consumable_herb_yarrow");
	
		default:
			break;
	}

	return 0;
}

void func_837(int iParam0, BOOL bParam1) // Position - 0x20961 Hash - 0x94511870 ^0x94511870
{
	if (!func_545(iParam0))
		return;

	if (func_62() != -1)
	{
		Global_36638[iParam0] = Global_36638[iParam0] || bParam1;
		return;
	}

	Global_40.f_9274[iParam0] = Global_40.f_9274[iParam0] || bParam1;
	return;
}

void func_838(int iParam0, BOOL bParam1) // Position - 0x209A9 Hash - 0x2762FC5A ^0x2762FC5A
{
	if (!func_545(iParam0))
		return;

	if (func_1000(iParam0))
		return;

	func_837(iParam0, 2);

	if (bParam1)
		if (!func_470(0, false, true))
			func_657(true, 6);

	return;
}

BOOL func_839(int iParam0) // Position - 0x209E7 Hash - 0x94F42F3F ^0x94F42F3F
{
	if (!func_545(iParam0))
		return false;

	return func_546(iParam0, true, true);
}

void func_840(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x20A05 Hash - 0xD71C2102 ^0xD71C2102
{
	if (!func_545(iParam0))
		return;

	if (func_839(iParam0))
		return;

	if (!bParam1)
		bParam1 = func_555(iParam0);

	if (!bParam1)
	{
		if (func_62() != -1)
		{
		}
		else
		{
			func_1001(iParam0);
		}
	}

	func_837(iParam0, true);

	if (func_62() == -1)
		func_1002(iParam0, func_276());

	func_838(iParam0, true);

	if (bParam2)
		if (!func_470(0, false, true))
			func_657(true, 6);

	return;
}

BOOL func_841() // Position - 0x20A84 Hash - 0xFF29F962 ^0xFF29F962
{
	int num;

	num = Global_1946054.f_529[9];
	num = num + Global_1946054.f_529[4];
	num = num + Global_1946054.f_529[10];
	num = num + Global_1946054.f_529[1];
	num = num + Global_1946054.f_529[2];
	num = num + Global_1946054.f_529[6];
	num = num + Global_1946054.f_529[29];
	num = num + Global_1946054.f_529[26];
	num = num + Global_1946054.f_529[18];
	num = num + Global_1946054.f_529[19];
	return num > 0;
}

Hash func_842(Hash hParam0) // Position - 0x20B29 Hash - 0x98D45ADB ^0x674EF0A2
{
	int num;

	num = func_334(func_1003(hParam0), 1);

	if (num != 39)
		return Global_1946054.f_1497.f_1[num /*3*/].f_1;

	return 0;
}

BOOL func_843(Hash hParam0, var uParam1) // Position - 0x20B58 Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_334(func_1003(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1946054.f_1497.f_1[num /*3*/] != 0 && Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
	{
		hash = Global_1946054.f_1497.f_1[num /*3*/];
	
		if (func_121(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

int func_844() // Position - 0x20BCF Hash - 0x16CCC184 ^0xC9058B80
{
	int i;
	Hash hash;
	int num;

	num = 0;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_121(hash) == -999503751)
			if (func_1004() != hash)
				num = num + 1;
	}

	return num;
}

BOOL func_845(Hash hParam0, BOOL bParam1) // Position - 0x20C20 Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_153(hParam0, false, false) };
	guid = { func_154(hParam0, unk, unk.f_4, false) };

	if (func_340(hParam0, unk, unk.f_4, false) <= 0)
		return false;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_199(false), &guid, bParam1);
	return true;
}

void func_846(var uParam0, Hash hParam1, int iParam2) // Position - 0x20C6C Hash - 0xDDA2D03E ^0x15888349
{
	if (*uParam0 >= 13)
		return;

	func_1005(iParam2, *uParam0);
	func_1006(&uParam0->f_1[*uParam0 /*5*/], hParam1, -1, true, 0);
	*uParam0 = *uParam0 + 1;
	return;
}

void func_847(int iParam0) // Position - 0x20CA2 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1946054.f_978 = iParam0;
	return;
}

void func_848(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x20CB3 Hash - 0xB00F2D2F ^0xF97C1EB9
{
	BOOL flag;

	switch (func_121(hParam0))
	{
		case -2061583405:
			flag = func_1007(hParam0, &(Global_1946054.f_2657.f_21));
			break;
	
		case -1719060085:
			flag = func_1007(hParam0, &(Global_1946054.f_2657.f_24));
			break;
	
		case -999503751:
			flag = func_1007(hParam0, &(Global_1946054.f_2657.f_20));
			break;
	
		case -525676072:
			flag = func_1007(hParam0, &(Global_1946054.f_2657.f_22));
			break;
	
		case -413129408:
			flag = func_1007(hParam0, &(Global_1946054.f_2657.f_25));
			break;
	
		case 81053684:
			flag = func_1007(hParam0, &(Global_1946054.f_2657.f_23));
			break;
	}

	if (!flag)
		return;

	if (bParam2)
		func_611();

	if (bParam1)
		func_612(false, false);

	return;
}

void func_849(int iParam0, int iParam1) // Position - 0x20D80 Hash - 0x19A9221A ^0x79EEA925
{
	int i;
	int num;
	var unk;
	var unk3;

	unk = 39;
	unk3 = 10;
	unk3.f_1 = 39;
	unk3.f_1.f_2 = 39;
	unk3.f_1.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;

	for (i = 0; i < 10; i = i + 1)
	{
		if (i < *iParam0)
		{
			if (func_1008(&iParam0->f_2[i /*2*/], 2) || iParam0->f_2[i /*2*/] == iParam1 || iParam0->f_2[i /*2*/] == 39)
			{
				iParam0->f_2[i /*2*/] = { unk };
			}
			else
			{
				if (func_1008(&iParam0->f_2[i /*2*/], 1))
					func_1009(&iParam0->f_2[i /*2*/], 2, 6);
			
				unk3[num /*2*/] = { iParam0->f_2[i /*2*/] };
				num = num + 1;
				iParam0->f_2[i /*2*/] = { unk };
			}
		}
	
		iParam0->f_2[i /*2*/] = { unk };
	}

	for (i = 0; i < num; i = i + 1)
	{
		iParam0->f_2[i /*2*/] = { unk3[i /*2*/] };
	}

	*iParam0 = num;
	return;
}

void func_850(int iParam0, int iParam1, int iParam2) // Position - 0x20EAC Hash - 0x194BB6D7 ^0x6A98F372
{
	if (*iParam0 + 1 >= 10)
		return;

	if (!func_1010(iParam0, 1))
		func_1011(iParam0, 1);

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

BOOL func_851(int iParam0, Hash hParam1) // Position - 0x20EF3 Hash - 0xECB143B0 ^0x61AB85CB
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 && hParam1 != false;
}

void func_852(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x20F0C Hash - 0xE34B9CEC ^0xAFBB60FB
{
	int num;
	int num2;
	int num3;
	int num4;

	num = 0;

	if (bParam4)
		num = 3;

	num2 = 12;
	num3 = 20;
	num4 = 16;

	if (hParam0->f_1[num4 /*3*/].f_1 == 1216705912 || hParam0->f_1[num4 /*3*/].f_1 == 654181853)
	{
		if (hParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
		{
			hParam0->f_1[num4 /*3*/].f_1 = 1334603721;
		}
		else
		{
			hParam0->f_1[num4 /*3*/].f_1 = -1539589426;
			hParam0->f_1[num2 /*3*/].f_1 = joaat("base");
		}
	
		if (bParam2)
			func_619(num2, num);
	
		if (bParam1)
			func_619(num4, num);
	}

	if (hParam0->f_1[num3 /*3*/].f_1 == -1333118809 || hParam0->f_1[num3 /*3*/].f_1 == joaat("Custom"))
	{
		hParam0->f_1[num3 /*3*/].f_1 = joaat("base");
	
		if (bParam3)
			func_619(num3, num);
	}

	return;
}

BOOL func_853(Hash hParam0) // Position - 0x20FF8 Hash - 0xDEBEF6D4 ^0xDEBEF6D4
{
	switch (hParam0)
	{
		case joaat("clothing_hl_player_boot_007_1"):
			return true;
	
		case joaat("clothing_hl_player_boot_022_2"):
			return true;
	
		case joaat("clothing_hl_player_boot_022_3"):
			return true;
	
		case joaat("clothing_hl_player_boot_009_1"):
			return true;
	
		case joaat("clothing_hl_player_boot_022_4"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_854(int iParam0) // Position - 0x2103B Hash - 0x9F9FF8A1 ^0x4AEA2041
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_610();

	num = 0;

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		num = 1;

	return num;
}

int func_855(Hash hParam0, BOOL bParam1, Hash hParam2, BOOL bParam3) // Position - 0x21061 Hash - 0x3A135443 ^0x969430D9
{
	int i;

	if (hParam2 == 0)
		return -1;

	for (i = 0; i < PED::_GET_SHOP_ITEM_NUM_WEARABLE_STATES(hParam0, bParam1, bParam3); i = i + 1)
	{
		if (PED::_GET_SHOP_ITEM_WEARABLE_STATE_BY_INDEX(hParam0, i, bParam1, bParam3) == hParam2)
			return i;
	}

	return -1;
}

BOOL func_856(Hash hParam0, int iParam1, var uParam2) // Position - 0x210A5 Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return true;
}

BOOL func_857(int iParam0, int iParam1) // Position - 0x210B6 Hash - 0x5EDC7379 ^0x87AAB49F
{
	return Global_1946054.f_57[func_334(iParam0, 1) /*11*/].f_10 && iParam1 != false;
}

int func_858(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x210D4 Hash - 0xFB14E414 ^0x5DDCA43D
{
	int num;

	if (hParam0 == Global_1946054.f_57[func_334(iParam1, 1) /*11*/])
		return 0;

	num = 0;

	if (!func_327(524288))
	{
		switch (iParam1)
		{
			case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
				num = num + 1;
				break;
		
			case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
				num = num + 1;
				break;
		}
	}

	num = num + PED::_0x31B2E7F2E3C58B89(hParam0, joaat("base"), bParam2, bParam3);
	return num;
}

int func_859(Hash hParam0) // Position - 0x2113F Hash - 0x3AB81F84 ^0x2BD03E57
{
	int num;
	int num2;

	num = 25;
	num2 = 0;

	if (hParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
		num2 = num2 + 1;

	num = 26;

	if (hParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
		num2 = num2 + 1;

	return num2;
}

void func_860(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2118A Hash - 0x475F4FBD ^0x5DA546E8
{
	if (bParam1)
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] };

	if (!bParam2)
		return;

	if (func_62() == -1)
		func_1012(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_26796.f_776);
	else
		func_1013(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_36638.f_45.f_350.f_1011);

	return;
}

BOOL func_861(BOOL bParam0, eStackSize essParam1) // Position - 0x21200 Hash - 0xAAB46313 ^0xDBD30AAB
{
	if (func_62() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		if (essParam1 > -1 && essParam1 < 5)
			return Global_26796.f_26[essParam1 /*120*/] && bParam0 != false;
	
		return false;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	if (essParam1 > -1 && essParam1 < 5)
		return Global_36638.f_45.f_350.f_26[essParam1 /*120*/] && bParam0 != false;

	return false;
}

Hash func_862(eStackSize essParam0) // Position - 0x2127D Hash - 0xB8EC44B7 ^0xE877E9C4
{
	switch (essParam0)
	{
		case 0:
			return 166243423;
	
		case 1:
			return 1383300684;
	
		case 2:
			return 2051441678;
	
		case 3:
			return 162509669;
	
		case 4:
			return 635948769;
	
		case 5:
			return 274995506;
	
		case 6:
			return 1661121390;
	
		case 7:
			return 1164374808;
	
		case 8:
			return 1160643979;
	
		case 9:
			return 624063935;
	
		case 10:
			return -1476781101;
	
		case 11:
			return 294553332;
	
		case 12:
			return 1788874135;
	
		case 13:
			return 1784889667;
	
		case 14:
			return 439606975;
	
		case 15:
			return 1560492757;
	
		case 16:
			return -769081407;
	
		case 17:
			return 1902428294;
	
		case 18:
			return -2114499732;
	
		case 19:
			return 800827126;
	
		case 20:
			return 688004210;
	
		case 21:
			return 1351927599;
	
		case 22:
			return 2032023096;
	
		case 23:
			return -291256376;
	
		case 24:
			return -1826731591;
	
		case 25:
			return 2119049229;
	
		case 26:
			return 1352942778;
	
		case 27:
			return 1964379549;
	
		case 28:
			return 1201189539;
	
		case 29:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H");
	
		case 30:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L");
	
		case 31:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H");
	
		case 32:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L");
	
		case 33:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H");
	
		case 34:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L");
	
		case 35:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H");
	
		case 36:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L");
	
		case 37:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_H");
	
		case 38:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_L");
	
		case 39:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_H");
	
		case 40:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_L");
	
		case 41:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H");
	
		case 42:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L");
	
		case 43:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H");
	
		case 44:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L");
	
		case 45:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H");
	
		case 46:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L");
	
		case 47:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H");
	
		case 48:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L");
	
		case 49:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H");
	
		case 50:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L");
	
		case 51:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H");
	
		case 52:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L");
	
		case 53:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H");
	
		case 54:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L");
	
		case 55:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H");
	
		case 56:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L");
	
		case 57:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H");
	
		case 58:
			return 1389254668;
	
		case 59:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H");
	
		case 60:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L");
	
		case 61:
			return -272211555;
	
		case 62:
			return -361635024;
	
		case 64:
			return -55563408;
	
		case 65:
			return -409616653;
	
		case 66:
			return -1243402388;
	
		case 67:
			return 65931886;
	
		case 68:
			return 1371678229;
	
		case 69:
			return 2102263084;
	
		case 70:
			return -1205612021;
	
		case 71:
			return -1914506115;
	
		case 72:
			return -926815459;
	
		case 73:
			return -389591806;
	
		case 74:
			return -1300731953;
	
		case 75:
			return 802495462;
	
		case 76:
			return 1460520700;
	
		case 77:
			return 842905332;
	
		case 78:
			return -1951220140;
	
		case 79:
			return 1511551084;
	
		case 80:
			return 523337834;
	
		case 81:
			return -1725704631;
	
		case 82:
			return -19271249;
	
		case 83:
			return 1257427489;
	
		case 84:
			return 214175524;
	
		case 85:
			return -659341240;
	
		case 86:
			return -1303643297;
	
		case 87:
			return 2038771525;
	
		case 88:
			return 411856831;
	
		case 89:
			return -535599244;
	
		case 90:
			return 1156438275;
	
		case 91:
			return -1611873049;
	
		case 92:
			return 594312243;
	
		case 93:
			return 890706995;
	
		case 94:
			return -978578725;
	
		default:
		
	}

	return 0;
}

void func_863(eStackSize essParam0, BOOL bParam1, int iParam2) // Position - 0x217B2 Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_1014(&(Global_1946054.f_1378), essParam0);
	func_1015(2, essParam0, 6);

	if (bParam1)
		func_612(false, true);

	return;
}

int func_864() // Position - 0x217DA Hash - 0x4228A1C2 ^0x4EB570BC
{
	return Global_1051081.f_11;
}

char* func_865() // Position - 0x217E8 Hash - 0x306ACA3A ^0xA3378545
{
	return "unnamed";
}

BOOL func_866(int iParam0) // Position - 0x217F4 Hash - 0xC360B8E6 ^0xCBE2AF9D
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

BOOL func_867(int iParam0) // Position - 0x21883 Hash - 0xB11233B9 ^0x48EE22B7
{
	if (Global_1572887.f_12 == -1)
		return false;

	return func_1016(32, iParam0);
}

int func_868(int iParam0) // Position - 0x218A1 Hash - 0x322F9962 ^0x249D071F
{
	if (iParam0 == 255)
		return Global_1109000.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 25;

	if (Global_1224589.f_16[iParam0])
		return Global_1108108[iParam0 /*27*/].f_1;

	return 25;
}

BOOL func_869(Player plParam0) // Position - 0x218EC Hash - 0x5FB1BEA6 ^0x62CB8856
{
	if (func_1017(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1224589.f_5, plParam0) != 1)
			func_1018(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1224589.f_5, plParam0) == 1;
}

BOOL func_870(var uParam0) // Position - 0x21925 Hash - 0xEF8B385D ^0xEF8B385D
{
	if (*uParam0 >= 40)
		return false;

	return true;
}

void func_871(const char* sParam0, const char* sParam1, Hash hParam2) // Position - 0x2193A Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

int func_872(Hash hParam0, int iParam1, int iParam2) // Position - 0x2196B Hash - 0xED49A216 ^0x75828FFF
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;

	num = 0;

	switch (iParam2)
	{
		case 1:
			hash = joaat("PROVISION_EGRET_PLUME_LITTLE");
			hash2 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			hash3 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			hash4 = joaat("provision_ro_flower_lady_of_night");
			break;
	
		case 2:
			hash = joaat("PROVISION_HERON_FEATHER");
			hash2 = joaat("provision_ro_flower_lady_slipper");
			hash3 = joaat("provision_ro_flower_moccasin");
			break;
	
		case 4:
			hash = joaat("PROVISION_GATOR_EGG");
			hash2 = joaat("provision_ro_flower_acunas_star");
			hash3 = joaat("provision_ro_flower_cigar");
			hash4 = joaat("provision_ro_flower_ghost");
			break;
	
		case 8:
			hash = joaat("PROVISION_SPOONBILL_FEATHER");
			hash2 = joaat("provision_ro_flower_night_scented");
			hash3 = joaat("provision_ro_flower_rat_tail");
			hash4 = joaat("provision_ro_flower_spider");
			break;
	
		case 16:
			hash = joaat("provision_ro_flower_clamshell");
			hash2 = joaat("provision_ro_flower_dragons");
			hash3 = joaat("provision_ro_flower_queens");
			hash4 = joaat("provision_ro_flower_sparrows");
			break;
	}

	num2 = func_695(hash);
	num3 = func_695(hash2);
	num4 = func_695(hash3);

	if (iParam2 != 2)
		num5 = func_695(hash4);

	num6 = func_696(hash);
	num7 = func_696(hash2);
	num8 = func_696(hash3);

	if (iParam2 != 2)
		num9 = func_696(hash4);

	if (num2 >= num6)
		num = num + num6;
	else
		num = num + num2;

	if (num3 >= num7)
		num = num + num7;
	else
		num = num + num3;

	if (num4 >= num8)
		num = num + num8;
	else
		num = num + num4;

	if (iParam2 != 2)
		if (num5 >= num9)
			num = num + num9;
		else
			num = num + num5;

	return num;
}

int func_873(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0x21AE4 Hash - 0x86539460 ^0x24468AF7
{
	var outData;

	if (!func_161(hParam0, 0))
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

int func_874(var uParam0) // Position - 0x21B32 Hash - 0xE0B16A5D ^0x1D9BDFB4
{
	if (!func_161(*uParam0, 0))
		return 0;

	switch (*uParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = joaat("consumable_cigarette_box");
			return 1;
	
		case joaat("upgrade_fsh_bait_cricket_tin"):
			*uParam0 = joaat("upgrade_fsh_bait_cricket");
			return 1;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
			*uParam0 = joaat("consumable_cocaine_chewing_gum");
			return 1;
	
		case joaat("consumable_chewing_tobacco_used"):
			*uParam0 = joaat("consumable_chewing_tobacco");
			return 1;
	
		case joaat("upgrade_fsh_bait_worm_can"):
			*uParam0 = joaat("upgrade_fsh_bait_worm");
			return 1;
	
		default:
		
	}

	return 0;
}

BOOL func_875(Hash hParam0, var uParam1, BOOL bParam2) // Position - 0x21BAE Hash - 0xDE5D4AAC ^0xDB35B0F6
{
	var unk;
	Hash hash;
	var unk6;
	BOOL flag;
	int i;

	if (!func_161(hParam0, 0))
		return false;

	unk = { func_153(hParam0, false, true) };
	hash = joaat("SLOTID_WEAPON_0");
	unk6.f_9 = joaat("SLOTID_NONE");
	flag = false;

	for (i = 0; i < 4; i = i + 1)
	{
		hash = func_666(398 + i, 1);
	
		if (func_442(hParam0, &unk, hash, false))
		{
			flag = func_443(hParam0, &unk6, hash);
		
			if (bParam2 && flag || !flag)
			{
				*uParam1 = hash;
				return true;
			}
		}
	}

	return false;
}

int func_876(int iParam0) // Position - 0x21C42 Hash - 0x92F940EE ^0x92F940EE
{
	int num;

	num = iParam0;

	if (num >= 1 && num <= 23)
		return 0;
	else if (num >= 24 && num <= 34)
		return 1;
	else if (num >= 35 && num <= 55)
		return 2;

	return 0;
}

float func_877(int iParam0) // Position - 0x21C96 Hash - 0xBAFBA316 ^0xBAFBA316
{
	switch (iParam0)
	{
		case 1:
			return 5f;
	
		case 2:
			return 20f;
	
		case 3:
			return 10f;
	
		case 4:
			return 10f;
	
		case 5:
			return 20f;
	
		case 6:
			return 10f;
	
		case 7:
			return 15f;
	
		case 8:
			return 15f;
	
		case 9:
			return 20f;
	
		case 10:
			return 5f;
	
		case 11:
			return 5f;
	
		case 12:
			return 10f;
	
		case 13:
			return 20f;
	
		case 14:
			return 30f;
	
		case 15:
			return 5f;
	
		case 16:
			return 5f;
	
		case 17:
			return 3f;
	
		case 18:
			return 20f;
	
		case 19:
			return func_1019(iParam0);
	
		case 20:
			return 25f;
	
		case 21:
			return 50f;
	
		case 22:
			return 100f;
	
		case 23:
			return 150f;
	
		case 24:
			return 20f;
	
		case 25:
			return 10f;
	
		case 26:
			return 20f;
	
		case 27:
			return 20f;
	
		case 28:
			return 20f;
	
		case 29:
			return 20f;
	
		case 30:
			return func_1019(iParam0);
	
		case 31:
			return 25f;
	
		case 32:
			return 50f;
	
		case 33:
			return 100f;
	
		case 34:
			return 150f;
	
		case 35:
			return 1f;
	
		case 36:
			return 5f;
	
		case 37:
			return 1f;
	
		case 38:
			return 3f;
	
		case 39:
			return 1f;
	
		case 40:
			return 1f;
	
		case 41:
			return 1f;
	
		case 42:
			return 5f;
	
		case 43:
			return 10f;
	
		case 44:
			return 5f;
	
		case 45:
			return 5f;
	
		case 46:
			return 10f;
	
		case 47:
			return 10f;
	
		case 48:
			return 5f;
	
		case 49:
			return 20f;
	
		case 50:
			return func_1019(iParam0);
	
		case 51:
			return 25f;
	
		case 52:
			return 50f;
	
		case 53:
			return 100f;
	
		case 54:
			return 150f;
	
		case 55:
			return 5f;
	
		default:
		
	}

	return 0f;
}

BOOL func_878(int iParam0) // Position - 0x21F64 Hash - 0x2B2275C1 ^0x2B2275C1
{
	switch (iParam0)
	{
		case 0:
			return func_385(18);
	
		case 1:
			return func_385(19);
	
		case 2:
			return func_385(20);
	
		default:
		
	}

	return true;
}

int func_879(int iParam0) // Position - 0x21FA2 Hash - 0xBCE241D5 ^0x339AC097
{
	return func_1020(Global_40.f_11095.f_11[iParam0]);
}

void func_880(int iParam0, float fParam1, BOOL bParam2) // Position - 0x21FBA Hash - 0xFC76D814 ^0x758E9A9F
{
	int num;
	float num2;
	int num3;
	int num4;

	if (func_62() != -1)
		return;

	if (Global_1347477.f_117 || !func_385(31))
		return;

	num = func_879(iParam0);
	num2 = Global_40.f_11095.f_11[iParam0];

	if (num >= 7)
		return;

	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	num3 = func_879(iParam0);

	if (func_1021(iParam0) && func_1022(iParam0))
	{
		if (!bParam2)
		{
			num4 = func_1023(num2, fParam1);
		
			if (fParam1 > (float)func_1024(iParam0) && num3 > num || num4 != 0)
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (num3 > num)
						func_150(func_1025(iParam0), false);
				
					func_1026(iParam0, num3, num4);
					func_825(iParam0, 7000);
				}
			
				Global_1347477.f_8 = 1;
			}
		}
	}

	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
	return;
}

char* func_881(int iParam0) // Position - 0x220BC Hash - 0xEB40D7A4 ^0x28B39904
{
	return "PLAYER_RPG_XP_GAIN";
}

Hash func_882(int iParam0) // Position - 0x220C8 Hash - 0x21FAF347 ^0xAF7D8F21
{
	switch (iParam0)
	{
		case 0:
			return joaat("itemtype_player_health");
	
		case 1:
			return joaat("itemtype_player_stamina");
	
		case 2:
			return joaat("itemtype_player_deadeye");
	
		default:
		
	}

	return 0;
}

void func_883(Hash hParam0, int iParam1) // Position - 0x22103 Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_884(BOOL bParam0) // Position - 0x22116 Hash - 0xB584A39F ^0xFC4CA802
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
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

void func_885(int iParam0) // Position - 0x22154 Hash - 0x2EDDC601 ^0xD5F96979
{
	Hash itemContextByIndex;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1954819.f_5.f_1))
		return;

	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1954819.f_5.f_1) > iParam0)
	{
		itemContextByIndex = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1954819.f_5.f_1, iParam0);
	
		if (itemContextByIndex == Global_1954819.f_5.f_2[iParam0 /*36*/])
			return;
	}

	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954819.f_5.f_1, iParam0, "pause_info_panel_list", Global_1954819.f_5.f_2[iParam0 /*36*/]);
	return;
}

void func_886(BOOL bParam0) // Position - 0x221C2 Hash - 0x731EA76E ^0xD49C9ADF
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
	return;
}

void func_887(BOOL bParam0) // Position - 0x221FC Hash - 0x731EA76E ^0xCC0310C8
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
	return;
}

void func_888(BOOL bParam0) // Position - 0x22236 Hash - 0x731EA76E ^0xC0281252
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
	return;
}

void func_889(BOOL bParam0) // Position - 0x22270 Hash - 0x6ED794F8 ^0x98C24F9E
{
	Hash hash;

	hash = 398076311;

	if (bParam0)
		HUD::_ENABLE_HUD_CONTEXT(hash);
	else
		HUD::_DISABLE_HUD_CONTEXT(hash);

	return;
}

void func_890(BOOL bParam0) // Position - 0x22293 Hash - 0x15EA8A2D ^0x6EE74130
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

void func_891(BOOL bParam0) // Position - 0x222D5 Hash - 0xBAD014C9 ^0x3FDE3E28
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

Hash func_892(int iParam0) // Position - 0x22317 Hash - 0x5B34E283 ^0x820CF35B
{
	if (iParam0 == -358215195)
		return 0;

	return Global_1946054.f_1497.f_1[func_334(iParam0, 1) /*3*/];
}

void func_893() // Position - 0x2233F Hash - 0x68C5513E ^0xDCD966E2
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_1027();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_389(joaat("weapon_revolver_cattleman_john"));
		func_433(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_389(joaat("weapon_melee_knife_john"));
		func_433(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}

	return;
}

int func_894(int iParam0, int iParam1) // Position - 0x223B7 Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

eStackSize func_895() // Position - 0x223CD Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_896(eStackSize essParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x223D9 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_964(*essParam0);
	i = func_963(*essParam0);
	num2 = func_1028(*essParam0);
	j = func_1029(*essParam0);
	k = func_1030(*essParam0);
	l = func_1031(*essParam0);

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

	for (m = func_965(i, num); num2 > m; m = func_965(i, num))
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

	func_1032(essParam0, l, k, j, num2, i, num);
	return;
}

int func_897(Hash hParam0) // Position - 0x22561 Hash - 0xD5A0FAAB ^0x54F422C9
{
	var unk;

	unk = { func_153(hParam0, true, false) };
	return func_333(unk.f_4);
}

Hash func_898(int iParam0) // Position - 0x2257D Hash - 0xB8EC44B7 ^0xD4FF48D5
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_BEAVER_TOOTH_LEGENDARY");
	
		case 1:
			return joaat("PROVISION_BISON_HORN_LEGENDARY");
	
		case 2:
			return joaat("PROVISION_BUCK_ANTLER_LEGENDARY");
	
		case 3:
			return joaat("PROVISION_COUGAR_FANG_LEGENDARY");
	
		case 4:
			return joaat("PROVISION_COYOTE_FANG_LEGENDARY");
	
		case 5:
			return joaat("PROVISION_ELK_ANTLER_LEGENDARY");
	
		case 6:
			return joaat("PROVISION_FOX_CLAW_LEGENDARY");
	
		case 7:
			return joaat("provision_lions_paw");
	
		case 8:
			return joaat("PROVISION_MOOSE_ANTLER_LEGENDARY");
	
		case 9:
			return joaat("PROVISION_PANTHER_EYE_LEGENDARY");
	
		case 10:
			return joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY");
	
		case 11:
			return joaat("PROVISION_RAM_HORN_LEGENDARY");
	
		case 12:
			return joaat("PROVISION_WOLF_HEART_LEGENDARY");
	
		case 13:
			return joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
	
		case 14:
			return joaat("provision_cc_vintage_handcuffs");
	
		case 15:
			return joaat("provision_bracelet_gold");
	
		case 16:
			return joaat("PROVISION_BEAR_LEGENDARY_CLAW");
	
		case 17:
			return joaat("provision_rc_quartz_chunk");
	
		case 18:
			return joaat("provision_bracelet_silver");
	
		case 19:
			return joaat("PROVISION_BOAR_TUSK_LEGENDARY");
	
		case 20:
			return joaat("provision_rf_wood_cobalt");
	
		case 21:
			return joaat("provision_earring_gold");
	
		case 22:
			return joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
	
		case 23:
			return joaat("provision_rs_abalone_shell_fragment");
	
		case 24:
			return joaat("provision_earring_silver");
	
		case 25:
			return joaat("PROVISION_OLD_BRASS_COMPASS");
	
		default:
		
	}

	return 0;
}

eStackSize func_899(Hash hParam0) // Position - 0x226FA Hash - 0xEF74E9FE ^0xEF74E9FE
{
	return func_536(hParam0, -1);
}

BOOL func_900(eStackSize essParam0, BOOL bParam1) // Position - 0x22709 Hash - 0x10DE2364 ^0x10DE2364
{
	return func_1033(func_895(), essParam0, bParam1);
}

BOOL func_901() // Position - 0x2271D Hash - 0x35D5C88E ^0x2371BCA7
{
	if (func_674())
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();

	return false;
}

void func_902(int iParam0) // Position - 0x22734 Hash - 0xB9BB46A1 ^0xB9BB46A1
{
	if (iParam0 <= 0)
		return;

	if (Global_40.f_4283.f_325 + iParam0 < 0)
		return;

	func_1034(Global_40.f_4283.f_325 + iParam0);
	return;
}

void func_903(int iParam0, const char* sParam1, int iParam2) // Position - 0x22768 Hash - 0x56940320 ^0x7B9A64C3
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_GANG_MONEY_EARN";

	if (func_901())
		func_637(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings_special"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);
	else
		func_637(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);

	return;
}

BOOL func_904(Hash hParam0) // Position - 0x227D4 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

void func_905(int iParam0) // Position - 0x227E4 Hash - 0xE2FB6CC5 ^0x3F95ACE7
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_1035(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
	{
		MISC::SET_BIT(&Global_40.f_283[num2], offset);
	}
	else
	{
		num3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	
		if (num3 == 255)
		{
			Global_1058888.f_40497.f_46 = 1;
			MISC::SET_BIT(&Global_1058888.f_40497.f_14[num2], offset);
		}
		else
		{
			MISC::SET_BIT(&Global_1055058[num3 /*116*/].f_72[num2], offset);
		}
	
		MISC::SET_BIT(&Global_1058888.f_40497[num2], offset);
	}

	Global_1934765 = 0;
	return;
}

void func_906(int iParam0) // Position - 0x2287D Hash - 0xE2FB6CC5 ^0x5A2D5EFE
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_1035(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
	{
		MISC::CLEAR_BIT(&Global_40.f_283[num2], offset);
	}
	else
	{
		num3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	
		if (num3 == 255)
		{
			Global_1058888.f_40497.f_46 = 1;
			MISC::CLEAR_BIT(&Global_1058888.f_40497.f_14[num2], offset);
		}
		else
		{
			MISC::CLEAR_BIT(&Global_1055058[num3 /*116*/].f_72[num2], offset);
		}
	}

	Global_1934765 = 0;
	return;
}

void func_907() // Position - 0x22903 Hash - 0x480C4EB2 ^0xAA61B05F
{
	func_906(-939420910);
	func_906(-1187950766);
	func_906(356365161);
	func_906(753127042);
	func_906(-2038424081);
	func_906(1884271742);
	func_906(459290420);
	return;
}

void func_908() // Position - 0x2294A Hash - 0xD73EDD4 ^0xB34A84FD
{
	func_906(704802028);
	func_906(588987611);
	func_906(2008888900);
	func_906(1649996811);
	func_906(227918160);
	func_906(168171957);
	func_906(1193080109);
	func_906(-491981251);
	func_906(-639037538);
	func_906(-618620429);
	return;
}

BOOL func_909(int iParam0) // Position - 0x229AC Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_1035(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

BOOL func_910(Hash hParam0) // Position - 0x229FB Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_911(Hash hParam0) // Position - 0x22A0B Hash - 0xEAAB2463 ^0xEAAB2463
{
	switch (hParam0)
	{
		case joaat("exotic_stage_02"):
			return 2;
	
		case joaat("exotic_stage_01"):
			return 1;
	
		case joaat("exotic_stage_05"):
			return 16;
	
		case joaat("exotic_stage_04"):
			return 8;
	
		case joaat("exotic_stage_03"):
			return 4;
	
		default:
		
	}

	return 0;
}

void func_912(int iParam0) // Position - 0x22A50 Hash - 0x25D46568 ^0x96CB7C96
{
	Global_40.f_12019.f_43 = Global_40.f_12019.f_43 || iParam0;
	return;
}

BOOL func_913(Hash hParam0) // Position - 0x22A6B Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

BOOL func_914() // Position - 0x22A7B Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_915(int iParam0) // Position - 0x22A97 Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

float func_916() // Position - 0x22AA9 Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_995(13);
	num2 = func_997(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_917() // Position - 0x22AEC Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_918() // Position - 0x22B07 Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_674())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_919() // Position - 0x22B26 Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_920() // Position - 0x22B68 Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_921(int iParam0, int iParam1, BOOL bParam2) // Position - 0x22B76 Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_1036(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_922(int iParam0, float fParam1, BOOL bParam2) // Position - 0x22BC2 Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_1036(iParam0, 2, false, false);
	str = MISC::VAR_STRING(2, str, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[2], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[2], bParam2);

	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_28[2], joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_28[2], joaat("COLOR_WHITE"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], false);
	}

	return;
}

float func_923(float fParam0, float fParam1, float fParam2) // Position - 0x22D08 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_924() // Position - 0x22D2F Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_995(12) <= -99f;
}

BOOL func_925() // Position - 0x22D43 Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_995(12) >= 99f;
}

BOOL func_926(eStackSize essParam0) // Position - 0x22D57 Hash - 0x2EF48521 ^0x2EF48521
{
	if (!func_588(essParam0))
		return false;

	if (func_589(essParam0, 2))
		return true;

	return false;
}

void func_927(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x22D7C Hash - 0xC49CD38D ^0xC49CD38D
{
	if (!func_588(essParam0))
		return;

	if (!func_926(essParam0))
	{
		func_929(essParam0, 2);
	
		if (bParam2)
			if (!func_470(0, false, true))
				func_657(true, 4);
	
		if (!func_928() && !bParam1 && !func_470(0, false, true))
			func_123(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_1037(essParam0)), 10000, 0, 0, 0, true);
	}

	return;
}

BOOL func_928() // Position - 0x22DF1 Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

void func_929(eStackSize essParam0, BOOL bParam1) // Position - 0x22E11 Hash - 0x9A8E96E6 ^0x9A8E96E6
{
	if (!func_588(essParam0))
		return;

	Global_40.f_7157[essParam0 /*3*/] = Global_40.f_7157[essParam0 /*3*/] || bParam1;
	return;
}

void func_930(Hash hParam0, BOOL bParam1) // Position - 0x22E3D Hash - 0xC1237140 ^0xC1237140
{
	int num;

	num = func_1038(hParam0);

	switch (num)
	{
		case 0:
			if (bParam1)
				func_386(50);
			else
				func_386(48);
			break;
	
		case 1:
			if (bParam1)
				func_386(51);
			else
				func_386(49);
			break;
	
		case 2:
			if (bParam1)
			{
				if (!func_1039(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_415();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_415();
			}
			break;
	
		case 3:
			func_386(24);
		
			if (bParam1)
			{
				if (!func_1039(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_415();
				}
			}
			break;
	}

	return;
}

void func_931(int iParam0) // Position - 0x22F1C Hash - 0x562E9379 ^0x562E9379
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1040(0))
				num = num + 1;
		
			if (func_1040(2))
				num = num + 1;
		
			if (func_1040(4))
				num = num + 1;
		
			if (!func_1041(16))
			{
				if (num == 1)
				{
					func_1042();
					func_150(456, true);
					func_1043(16);
				}
			}
		
			if (!func_1041(32))
			{
				if (num >= 3)
				{
					func_1042();
					func_150(456, true);
					func_1043(32);
				}
			}
			break;
	
		case 1:
		case 3:
		case 7:
			if (func_1040(1))
				num = num + 1;
		
			if (func_1040(3))
				num = num + 1;
		
			if (func_1040(7))
				num = num + 1;
		
			if (!func_1041(1))
			{
				if (num == 1)
				{
					func_1044();
					func_150(457, true);
					func_1043(1);
				}
			}
		
			if (!func_1041(2))
			{
				if (num >= 3)
				{
					func_1044();
					func_150(457, true);
					func_1043(2);
				}
			}
			break;
	
		case 5:
		case 6:
		case 8:
			if (func_1040(5))
				num = num + 1;
		
			if (func_1040(6))
				num = num + 1;
		
			if (func_1040(8))
				num = num + 1;
		
			if (!func_1041(4))
			{
				if (num == 1)
				{
					func_1045();
					func_150(455, true);
					func_1043(4);
				}
			}
		
			if (!func_1041(8))
			{
				if (num >= 3)
				{
					func_1045();
					func_150(455, true);
					func_1043(8);
				}
			}
			break;
	}

	return;
}

void func_932(var uParam0) // Position - 0x230B3 Hash - 0x2CE00B72 ^0x958A4727
{
	func_715(uParam0, joaat("MULTIPLAYER_GAME"));

	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_715(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_715(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_933(Any anParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x230ED Hash - 0x2A3EC766 ^0xE5AAC4BD
{
	int i;
	var unk;

	if (!func_1046(anParam0))
		return;

	if (Global_1223851 < 20)
	{
		Global_1223851 = Global_1223851 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1223851.f_1[i /*21*/] = { Global_1223851.f_1[i + 1 /*21*/] };
		}
	}

	unk.f_7.f_2.f_1 = 10;
	unk = { *anParam0 };
	unk.f_4 = hParam1;
	unk.f_6 = 1;
	unk.f_7 = { uParam2 };
	Global_1223851.f_1[Global_1223851 - 1 /*21*/] = { unk };
	return;
}

BOOL func_934(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x2318E Hash - 0x494940FE ^0x1E1EAABF
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 29, panParam2, 0);
}

void func_935(int iParam0, int iParam1) // Position - 0x231A5 Hash - 0x18C74423 ^0xA1132A0
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1223212; i = i + 1)
	{
		if (Global_1223212.f_1[i /*9*/] == iParam0)
		{
			if (Global_1223212.f_1[i /*9*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1223212.f_1[i /*9*/].f_1 = iParam1;
			}
		
			return;
		}
	}

	func_1047(iParam0, iParam1);
	return;
}

BOOL func_936(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x23207 Hash - 0xAEE55F03 ^0x36ABCD3F
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

BOOL func_937(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x2321E Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

void func_938(Entity eParam0) // Position - 0x23235 Hash - 0xC5AA53DE ^0x680DD5A
{
	Ped pedIndexFromEntityIndex;
	int num;
	eStackSize stackSize;
	var unk;
	int num2;
	int i;

	if (!ENTITY::IS_ENTITY_A_PED(eParam0))
		return;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);
	num = 878851736;
	stackSize = Global_40.f_4283;

	if (func_1048(ENTITY::GET_ENTITY_MODEL(pedIndexFromEntityIndex), stackSize))
	{
		num = -1708424762;
	}
	else
	{
		unk = 10;
		func_225(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0), &unk);
	
		for (i = 0; i < 10; i = i + 1)
		{
			if (!func_161(unk[i], 0))
			{
			}
			else if (!func_219(unk[i]))
			{
			}
			else
			{
				num2 = func_1049(unk[i], stackSize);
			
				if (func_1050(num2, num))
					num = num2;
			}
		}
	}

	func_1051(&num);

	if (func_1050(num, Global_1357549.f_1492))
		Global_1357549.f_1492 = num;

	return;
}

BOOL func_939(Ped pedParam0) // Position - 0x232FF Hash - 0x9634B86A ^0x7C777CAE
{
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	num = func_940(pedParam0);

	if (num == -1)
		return false;

	return true;
}

int func_940(Ped pedParam0) // Position - 0x2333D Hash - 0xD44AE303 ^0xA29D7F05
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

void func_941(int iParam0, Hash hParam1, int iParam2) // Position - 0x23382 Hash - 0xAC28FF72 ^0xA969E0AB
{
	Hash hash;
	int num;

	iParam0 = func_241(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	hash = func_1052(hParam1);
	num = func_1053(hash, 1);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num] = Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num] - iParam2;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num] = func_1054(Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num], 0, 10);
	return;
}

BOOL func_942(int iParam0, Hash hParam1, int iParam2, BOOL bParam3, Hash hParam4) // Position - 0x2340F Hash - 0x58967A60 ^0x975E68C3
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	var statId;

	if (!func_161(hParam1, 0))
		return 0;

	flag = hParam4 == 562618531;
	flag2 = hParam4 == 1992602754;
	flag3 = hParam4 == -1387038764;

	if (!func_1055(iParam0, hParam1, 1))
		return 0;

	statId = { func_361(hParam1) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_462(iParam0, hParam1) - iParam2 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam2);
		}
		else if (func_462(iParam0, hParam1) - iParam2 < 0)
		{
			func_942(iParam0, hParam1, func_264(hParam1, false, false), bParam3, hParam4);
			return 0;
		}
	}

	if (!func_1056(iParam0, hParam1, iParam2, hParam4, bParam3))
		return 0;

	if (!func_156(false))
		bParam3 = true;

	if (!bParam3 && hParam1 != 1309979101)
		func_360(hParam1, -iParam2, flag, flag2, flag3);

	return 1;
}

BOOL func_943(Hash hParam0) // Position - 0x234F2 Hash - 0x33F7D399 ^0xEB534519
{
	if (!func_161(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IS_ANIMAL_PELT(hParam0);
}

int func_944(int iParam0, int iParam1) // Position - 0x2350F Hash - 0xE1D12727 ^0xC55B8D95
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_beaver_fur");
	
		case 1:
			return joaat("PROVISION_BEAVER_FUR_POOR");
	
		case 2:
			return joaat("PROVISION_BEAVER_FUR_PRISTINE");
	
		case 3:
			return joaat("PROVISION_BEAVER_LEGENDARY_FUR_PRISTINE");
	
		case 4:
			return joaat("PROVISION_BOAR_LEGENDARY_SKIN_PRISTINE");
	
		case 5:
			return joaat("provision_boar_skin");
	
		case 6:
			return joaat("PROVISION_BOAR_SKIN_POOR");
	
		case 7:
			return joaat("PROVISION_BOAR_SKIN_PRISTINE");
	
		case 8:
			return joaat("provision_buck_fur");
	
		case 9:
			return joaat("PROVISION_BUCK_FUR_POOR");
	
		case 10:
			return joaat("PROVISION_BUCK_FUR_PRISTINE");
	
		case 11:
			return joaat("PROVISION_BUCK_LEGENDARY_FUR_PRISTINE");
	
		case 12:
			return joaat("provision_cougar_fur");
	
		case 13:
			return joaat("PROVISION_COUGAR_FUR_POOR");
	
		case 14:
			return joaat("PROVISION_COUGAR_FUR_PRISTINE");
	
		case 15:
			return joaat("PROVISION_COUGAR_LEGENDARY_FUR_PRISTINE");
	
		case 16:
			return joaat("provision_coyote_fur");
	
		case 17:
			return joaat("PROVISION_COYOTE_FUR_POOR");
	
		case 18:
			return joaat("PROVISION_COYOTE_FUR_PRISTINE");
	
		case 19:
			return joaat("PROVISION_COYOTE_LEGENDARY_FUR_PRISTINE");
	
		case 20:
			return joaat("provision_deer_hide");
	
		case 21:
			return joaat("PROVISION_DEER_HIDE_POOR");
	
		case 22:
			return joaat("PROVISION_DEER_HIDE_PRISTINE");
	
		case 23:
			return joaat("provision_fox_fur");
	
		case 24:
			return joaat("PROVISION_FOX_FUR_POOR");
	
		case 25:
			return joaat("PROVISION_FOX_FUR_PRISTINE");
	
		case 26:
			return joaat("PROVISION_FOX_LEGENDARY_FUR_PRISTINE");
	
		case 27:
			return joaat("provision_goat_hair");
	
		case 28:
			return joaat("PROVISION_GOAT_HAIR_POOR");
	
		case 29:
			return joaat("PROVISION_GOAT_HAIR_PRISTINE");
	
		case 30:
			return joaat("provision_javelina_skin");
	
		case 31:
			return joaat("PROVISION_JAVELINA_SKIN_POOR");
	
		case 32:
			return joaat("PROVISION_JAVELINA_SKIN_PRISTINE");
	
		case 33:
			return joaat("provision_loanshark_skins");
	
		case 34:
			return joaat("provision_panther_fur");
	
		case 35:
			return joaat("PROVISION_PANTHER_FUR_POOR");
	
		case 36:
			return joaat("PROVISION_PANTHER_FUR_PRISTINE");
	
		case 37:
			return joaat("PROVISION_PANTHER_LEGENDARY_FUR_PRISTINE");
	
		case 38:
			return joaat("provision_pig_skin");
	
		case 39:
			return joaat("PROVISION_PIG_SKIN_POOR");
	
		case 40:
			return joaat("PROVISION_PIG_SKIN_PRISTINE");
	
		case 41:
			return joaat("provision_pronghorn_fur");
	
		case 42:
			return joaat("PROVISION_PRONGHORN_FUR_POOR");
	
		case 43:
			return joaat("PROVISION_PRONGHORN_FUR_PRISTINE");
	
		case 44:
			return joaat("PROVISION_PRONGHORN_LEGENDARY_FUR_PRISTINE");
	
		case 45:
			return joaat("provision_ram_hide");
	
		case 46:
			return joaat("PROVISION_RAM_HIDE_POOR");
	
		case 47:
			return joaat("PROVISION_RAM_HIDE_PRISTINE");
	
		case 48:
			return joaat("PROVISION_RAM_LEGENDARY_HIDE_PRISTINE");
	
		case 49:
			return joaat("provision_sheep_wool");
	
		case 50:
			return joaat("PROVISION_SHEEP_WOOL_POOR");
	
		case 51:
			return joaat("PROVISION_SHEEP_WOOL_PRISTINE");
	
		case 52:
			return joaat("provision_wolf_fur");
	
		case 53:
			return joaat("PROVISION_WOLF_FUR_POOR");
	
		case 54:
			return joaat("PROVISION_WOLF_FUR_PRISTINE");
	
		case 55:
			return joaat("PROVISION_WOLF_LEGENDARY_FUR_PRISTINE");
	
		case 56:
			return 0;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

void func_945(Hash hParam0, int iParam1) // Position - 0x23848 Hash - 0xE499CB2B ^0xBF16EE8A
{
	Ped mountOwnedByPlayer;

	if (func_62() == -1)
		mountOwnedByPlayer = func_85(7);
	else
		mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());

	func_731(mountOwnedByPlayer, hParam0, iParam1);
	return;
}

BOOL func_946(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x23877 Hash - 0x1DFD4C48 ^0x2E953DF6
{
	var unk;
	var unk6;

	if (!func_161(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_439(false) };
	unk.f_4 = 724026534;
	unk6 = { func_154(hParam0, unk, unk.f_4, false) };
	return func_274(hParam0, &unk6, &unk, iParam1, hParam3, bParam2, false);
}

struct<5> func_947(int iParam0) // Position - 0x238CE Hash - 0xE091DFA ^0x699D572
{
	var unk;

	unk = { func_948(iParam0, joaat("character"), func_720(), joaat("SLOTID_NONE")) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	return unk;
}

struct<4> func_948(int iParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6) // Position - 0x238FB Hash - 0x5F68FD81 ^0xF6C5E078
{
	var outGuid;

	if (!func_161(hParam1, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, hParam1, hParam6, &outGuid);
	return outGuid;
}

BOOL func_949(int iParam0) // Position - 0x23928 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_950(BOOL bParam0) // Position - 0x23966 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_951(int iParam0) // Position - 0x23979 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_1057(Global_1835011[iParam0 /*74*/].f_1);
}

Vector3 func_952(int iParam0) // Position - 0x239A5 Hash - 0x3E6E91A9 ^0x3E6E91A9
{
	return func_1058(iParam0);
}

Vector3 func_953(eStackSize essParam0) // Position - 0x239B3 Hash - 0xC80D35E3 ^0xC80D35E3
{
	var unk;

	if (!func_344(essParam0))
		return 0f, 0f, 0f;

	unk = { 0f, 0f, 0f };

	if (func_1059(essParam0, &unk))
		Global_1347702[essParam0 /*49*/].f_24 = { unk };

	return Global_1347702[essParam0 /*49*/].f_24;
}

BOOL func_954(int iParam0) // Position - 0x239F9 Hash - 0x96EC57 ^0x2A07EA1A
{
	if (func_1060(iParam0))
		return VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1);

	return false;
}

BOOL func_955(Hash hParam0) // Position - 0x23A1D Hash - 0x67C144F9 ^0x5C039CD8
{
	if (func_161(hParam0, 0))
	{
		if (func_111(hParam0, -1242251796))
		{
			if (func_111(hParam0, 2060589226))
				return func_187(512);
		
			return func_187(256);
		}
		else if (func_111(hParam0, 1919582297))
		{
			return func_187(8192);
		}
	}

	if (Global_1935496.f_12)
		return func_187(256);
	else
		return func_187(2);

	return func_187(2);
}

int func_956(int iParam0) // Position - 0x23A9D Hash - 0xA776614E ^0xA776614E
{
	if (!func_226(iParam0))
		return -1;

	if (iParam0 == 34 && func_144() == MICRO)
		return 128;

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 120:
		case 121:
			return 78;
	
		case 4:
			return 13;
	
		case 5:
			return 14;
	
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
		case 106:
		case 107:
		case 108:
			return 38;
	
		case 18:
		case 19:
		case 20:
		case 21:
		case 105:
			return 69;
	
		case 22:
		case 118:
			return 3;
	
		case 23:
		case 24:
			return 23;
	
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 112:
		case 113:
			return 105;
	
		case 34:
			return 90;
	
		case 35:
			return 101;
	
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
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
		case 109:
		case 110:
		case 111:
			return 5;
	
		case 56:
			return 71;
	
		case 57:
			return 98;
	
		case 58:
			return 9;
	
		case 59:
			return 79;
	
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 114:
		case 115:
			return 26;
	
		case 67:
			return 113;
	
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 102:
		case 103:
		case 104:
			return 76;
	
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 116:
		case 117:
			return 92;
	
		case 87:
		case 88:
		case 89:
			return 28;
	
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
			return 115;
	
		case 95:
		case 96:
		case 97:
			return 120;
	
		case 98:
			return 123;
	
		case 99:
		case 100:
		case 123:
			return 117;
	
		case 119:
			return 65;
	
		case 122:
			return 82;
	
		case 124:
			return 110;
	
		case 125:
			return 127;
	
		case 128:
		case 129:
		case 130:
		case 131:
			return 79;
	
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 98;
	
		case 137:
		case 138:
		case 139:
		case 140:
			return 71;
	
		case 141:
		case 142:
		case 143:
		case 144:
			return 4;
	
		case 145:
		case 146:
		case 147:
		case 148:
			return 9;
	
		default:
		
	}

	return -1;
}

int func_957(int iParam0) // Position - 0x23EE3 Hash - 0x224FC50D ^0x224FC50D
{
	if (iParam0 < 0)
		return -1;
	else if (iParam0 <= 10)
		return 0;
	else if (iParam0 <= 29)
		return 1;
	else if (iParam0 <= 32)
		return 2;
	else if (iParam0 <= 36)
		return 3;
	else if (iParam0 <= 39)
		return 4;
	else if (iParam0 <= 49)
		return 7;
	else if (iParam0 <= 56)
		return 6;
	else if (iParam0 <= 61)
		return 8;
	else if (iParam0 <= 76)
		return 9;
	else if (iParam0 <= 92)
		return 10;
	else if (iParam0 <= 106)
		return 11;
	else if (iParam0 <= 113)
		return 12;
	else if (iParam0 <= 116)
		return 13;
	else if (iParam0 <= 119)
		return 14;
	else if (iParam0 <= 125)
		return 15;
	else if (iParam0 <= 127)
		return 16;

	return -1;
}

BOOL func_958(int iParam0) // Position - 0x23FDF Hash - 0x58807A07 ^0x42D3B067
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_296(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

int func_959(int iParam0) // Position - 0x24040 Hash - 0x935DFE56 ^0xB7C469D8
{
	int num;
	int num2;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1935689.f_9475))
		return 0;

	num = Global_1935689.f_9475;
	num.f_2 = 1;
	num.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num2, &num);
	return num2;
}

int func_960(int iParam0) // Position - 0x2407A Hash - 0xB96AB95E ^0xC6F5AB0B
{
	int num;
	int num2;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1935689.f_9475))
		return 0;

	num = Global_1935689.f_9475;
	num.f_2 = 0;
	num.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num2, &num);
	return num2;
}

BOOL func_961( Param0) // Position - 0x240B4 Hash - 0xFB3823CC ^0xFB3823CC
{
	if (func_1061(Param0))
		return func_32(16);
	else if (func_1062(Param0))
		return func_1063();
	else if (func_1064(Param0))
		return func_32(2);

	return true;
}

BOOL func_962(Hash hParam0, BOOL bParam1) // Position - 0x240F6 Hash - 0xD42AA8CA ^0x22FA3BAF
{
	Entity entityFromItem;
	int num;
	var unk;
	Hash hash;
	ItemSet itemset;
	int itemsetSize;
	int i;
	int num2;
	var unk12;
	var unk13;
	var unk14;
	Ped pedIndexFromEntityIndex;
	int j;
	Hash hash2;
	Ped pedIndexFromEntityIndex2;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		unk = 10;
		itemset = ITEMSET::CREATE_ITEMSET(false);
		PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, itemset);
	
		if (ITEMSET::IS_ITEMSET_VALID(itemset))
		{
			itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);
		
			for (i = 0; i < itemsetSize; i = i + 1)
			{
				entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
			
				if (!ENTITY::DOES_ENTITY_EXIST(entityFromItem))
				{
				}
				else if (ENTITY::GET_IS_ANIMAL(entityFromItem) || ENTITY::_GET_IS_BIRD(entityFromItem))
				{
					pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem);
					num = func_225(pedIndexFromEntityIndex, &unk);
					hash2 = func_529(entityFromItem);
				
					if (hash2 == hParam0)
					{
						if (bParam1)
						{
							Global_1901328.f_94 = 1;
							ENTITY::_DELETE_CARRIABLE(&entityFromItem);
							func_360(hash2, -1, false, false, false);
							Global_1901328.f_94 = 0;
						}
					
						ITEMSET::DESTROY_ITEMSET(itemset);
						return true;
					}
				
					for (j = 0; j < num; j = j + 1)
					{
						if (unk[j] == hParam0)
						{
							if (bParam1)
							{
								Global_1901328.f_94 = 1;
								ENTITY::_DELETE_CARRIABLE(&entityFromItem);
								func_360(unk[j], -1, false, false, false);
								Global_1901328.f_94 = 0;
							}
						
							ITEMSET::DESTROY_ITEMSET(itemset);
							return true;
						}
					}
				}
				else
				{
					pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem);
					func_514(pedIndexFromEntityIndex2, &unk12, &unk13, &num2, &unk14);
				
					if (func_767(&hash, pedIndexFromEntityIndex2, num2, unk12))
					{
						if (hash == hParam0)
						{
							if (bParam1)
							{
								Global_1901328.f_94 = 1;
								ENTITY::_DELETE_CARRIABLE(&entityFromItem);
								func_360(hash, -1, false, false, false);
								Global_1901328.f_94 = 0;
							}
						
							ITEMSET::DESTROY_ITEMSET(itemset);
							return true;
						}
					}
				}
			}
		
			ITEMSET::DESTROY_ITEMSET(itemset);
		}
		else
		{
			return false;
		}
	}

	return func_1065(hParam0, bParam1);
}

int func_963(eStackSize essParam0) // Position - 0x24283 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 22) & 15;
}

int func_964(eStackSize essParam0) // Position - 0x24296 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(essParam0, 26) & 31 * MISC::IS_BIT_SET(essParam0, 31) ? -1 : 1) + 1898;
}

int func_965(int iParam0, int iParam1) // Position - 0x242BB Hash - 0x893AC59E ^0x893AC59E
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

BOOL func_966(BOOL bParam0) // Position - 0x24355 Hash - 0xC67CC87B ^0x88ADC254
{
	return Global_1392040.f_1 && bParam0 != false;
}

int func_967(Hash hParam0, Hash hParam1) // Position - 0x24368 Hash - 0x39B5DB67 ^0xD5694E3C
{
	if (hParam1 == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

BOOL func_968(Ped pedParam0) // Position - 0x24382 Hash - 0x966B8CCF ^0xFAFF1653
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (PED::_IS_THIS_MODEL_A_HORSE(entityModel))
		return true;

	return false;
}

int func_969(int iParam0) // Position - 0x243AE Hash - 0x1B64DC55 ^0x1B64DC55
{
	switch (iParam0)
	{
		case 0:
			return 4;
	
		case 1:
			return 5;
	
		case 2:
			return 6;
	}

	return 0;
}

int func_970(Ped pedParam0, var uParam1, int iParam2) // Position - 0x243E6 Hash - 0xA73ED9C1 ^0xC2062AF6
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

int func_971(int iParam0) // Position - 0x24462 Hash - 0xB8EC44B7 ^0x486668F8
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
			return joaat("ST_MARKET");
	
		case 13:
			return joaat("ST_FRENCH_MARKET");
	
		case 14:
			return -1227686818;
	
		case 15:
			return joaat("st_bank");
	
		case 17:
			return joaat("st_bait");
	
		case 18:
			return joaat("st_trapper");
	
		case 19:
			return joaat("st_pearson");
	
		case 20:
			return joaat("st_hotel");
	
		case 21:
			return joaat("st_photo_studio");
	
		case 22:
			return joaat("ST_NEWSPAPER_BOY");
	
		case 23:
			return joaat("st_weapon_mod_store");
	
		case 24:
			return joaat("st_clothing");
	
		case 25:
			return joaat("st_camp_shaving");
	
		case 26:
			return joaat("st_quartermaster");
	
		case 27:
			return joaat("st_horse_trainer");
	
		case 28:
			return joaat("st_blacksmith");
	
		case 29:
			return joaat("st_bountyhunting_mp_return");
	
		case 30:
			return joaat("st_coach");
	
		case 31:
			return -732027686;
	
		case 32:
			return joaat("st_wilderness_supplies");
	
		case 33:
			return joaat("st_bartender");
	
		case 34:
			return joaat("st_handheld");
	
		default:
		
	}

	return 0;
}

void func_972(BOOL bParam0, int iParam1) // Position - 0x2464F Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

void func_973(BOOL bParam0, int iParam1) // Position - 0x24660 Hash - 0x9815F445 ^0x9815F445
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

int func_974(BOOL bParam0) // Position - 0x24675 Hash - 0x22A87A6A ^0x22A87A6A
{
	int i;

	for (i = 0; bParam0 != false; i = i + 1)
	{
		bParam0 = bParam0 && bParam0 - 1;
	}

	return i;
}

BOOL func_975(Hash hParam0) // Position - 0x2469A Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

BOOL func_976(Hash hParam0) // Position - 0x246AA Hash - 0xB8632262 ^0xB8632262
{
	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return true;
	
		default:
		
	}

	return false;
}

int func_977(Hash hParam0) // Position - 0x24751 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
{
	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return 1;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return 1;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return 1;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return 1;
	
		default:
		
	}

	return 0;
}

int func_978(Hash hParam0) // Position - 0x2478A Hash - 0xFEF68B9C ^0xE8DB1D9E
{
	Entity entity;
	Hash model;
	int i;

	model.f_10 = 10;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!func_1066(&entity, 0, i, &model) && !func_1066(&entity, 1, i, &model))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(model))
		{
			func_1067(entity, &model);
		
			if (func_161(model.f_1, 0))
				return 1;
		}
	}

	return 0;
}

int func_979(int iParam0) // Position - 0x247F6 Hash - 0x6EC15CF9 ^0xE613EBE0
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

float func_980(float fParam0, float fParam1) // Position - 0x24877 Hash - 0x2BA4B8ED ^0x2BA4B8ED
{
	if (fParam1 != 0f)
		return (fParam1 / 100f) * 200f;

	return (fParam0 / 8f) * 200f;
}

BOOL func_981(int iParam0) // Position - 0x248A5 Hash - 0x548D1D18 ^0x4AC0DF7D
{
	if (func_670())
		return false;

	return func_296(Global_1347702[58 /*49*/].f_15, true);
}

BOOL func_982(Ped pedParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x248C7 Hash - 0x281BDD5E ^0x8899ECCD
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
	return func_1068(pedParam0, &str);
}

void func_983(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2490E Hash - 0x6775E582 ^0x6775E582
{
	if (bParam4)
		fParam1 = func_986(iParam0, fParam1, true);

	func_1070(iParam0, func_1069(iParam0, 2) + fParam1, bParam2, bParam3, true, 2);
	return;
}

void func_984(float fParam0) // Position - 0x2493D Hash - 0x92695771 ^0xE2D71C0D
{
	if (fParam0 >= 100f - 1f)
		AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
	else
		AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);

	return;
}

void func_985() // Position - 0x24971 Hash - 0xB36799A8 ^0x76458B55
{
	Global_40.f_11095.f_11[14] = 100f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
	return;
}

float func_986(int iParam0, float fParam1, BOOL bParam2) // Position - 0x2499E Hash - 0xFB55A421 ^0xFB55A421
{
	eStackSize stackSize;
	int num;

	stackSize = func_895();
	func_1071(&stackSize, 0, 0, 0, 1, 0, 0);
	num = func_1072(iParam0, 2);

	if (func_1033(stackSize, func_1073(iParam0, 2), true))
	{
		func_1074(iParam0, 0, 2);
		num = 0;
	}

	if (num >= 2)
	{
		func_150(88, bParam2);
		return 0f;
	}

	func_1075(iParam0, func_895(), 2);
	func_1074(iParam0, num + 1, 2);
	return fParam1;
}

void func_987(int iParam0, float fParam1, BOOL bParam2) // Position - 0x24A07 Hash - 0x8FDCEA1F ^0x46BCD39D
{
	int value;
	char* variableName;

	if (func_62() != -1)
		return;

	if (!func_385(15))
		return;

	Global_40.f_11095[iParam0] = fParam1;
	value = func_1076(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_1077(iParam0), value);
	func_1079(func_1078(iParam0), 100f * (BUILTIN::TO_FLOAT(value) / 100f), false);

	if (fParam1 <= func_1080(15) && iParam0 == 1 && PED::IS_PED_ON_FOOT(Global_35) && !PED::IS_PED_SWIMMING(Global_35))
		func_150(84, true);

	if (fParam1 <= -99.999f)
		func_150(func_1081(iParam0), true);

	variableName = func_1082(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(variableName))
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, variableName, BUILTIN::TO_FLOAT(value), -1);

	return;
}

BOOL func_988(int iParam0) // Position - 0x24AE0 Hash - 0x3FEE6090 ^0x3FEE6090
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

char* func_989(int iParam0) // Position - 0x24B0F Hash - 0x5BCE232D ^0xC8C557B4
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

void func_990(int iParam0) // Position - 0x24B49 Hash - 0x265AFF44 ^0xECA4C539
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(ped);

	num = func_1083(2);
	func_1084(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

void func_991(BOOL bParam0) // Position - 0x24B86 Hash - 0x9114E741 ^0x8984E174
{
	if (func_62() != -1)
		return;

	if (bParam0 && ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0))
		return;

	if (Global_40.f_11095.f_43 == bParam0)
		return;

	if (bParam0)
	{
		func_150(89, true);
		ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
	}
	else
	{
		func_150(90, true);
		ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
	}

	func_1085(1, bParam0, true);
	func_419();
	Global_40.f_11095.f_43 = bParam0;
	return;
}

void func_992(int iParam0) // Position - 0x24BF4 Hash - 0x89FD216F ^0xA46E837F
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_0xFC3B580C4380B5B7(ped);

	num = func_1086(2);
	func_1087(BUILTIN::TO_FLOAT(iParam0 * num));
	return;
}

void func_993(int iParam0) // Position - 0x24C30 Hash - 0x265AFF44 ^0x6BC758B3
{
	Player player;
	int num;

	player = PLAYER::PLAYER_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PLAYER::_0x57D9991DC1334151(player);

	num = func_1088(2);
	func_1089(BUILTIN::TO_FLOAT(iParam0 * num), false);
	return;
}

void func_994(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x24C6D Hash - 0x5C29635D ^0x5C29635D
{
	func_1070(iParam0, 100f, bParam1, bParam2, true, 2);
	return;
}

float func_995(int iParam0) // Position - 0x24C87 Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

BOOL func_996() // Position - 0x24C9B Hash - 0xF6B2CBD4 ^0x78757C46
{
	if (func_62() != -1)
		return false;

	if (Global_1347477.f_200)
		return false;

	if (Global_1347477.f_195 == -15)
		return true;

	return func_900(Global_1347477.f_195, false);
}

int func_997(float fParam0) // Position - 0x24CD7 Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

void func_998(var uParam0, var uParam1) // Position - 0x24CF2 Hash - 0x9E01892C ^0x3EC1D72C
{
	if (!func_280())
	{
		*uParam0 = -100f;
		*uParam1 = 100f;
		return;
	}

	*uParam0 = Global_40.f_11095.f_40;
	*uParam1 = Global_40.f_11095.f_41;
	return;
}

void func_999(int iParam0, float fParam1) // Position - 0x24D2B Hash - 0x45CA0D9B ^0xF445EDFE
{
	int num;
	BOOL flag;
	char* str;

	Global_40.f_11095.f_11[iParam0] = fParam1;

	if (iParam0 == 12)
	{
		flag = fParam1 != 0f;
		str = fParam1 < 0f ? "rpg_cold" : "rpg_hot";
		func_1090(1, flag, true, str);
		func_1091(!flag, fParam1 < 0f, flag);
		num = func_1076(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
		func_419();
	}
	else if (iParam0 == 10)
	{
		num = func_1076(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
	}
	else if (iParam0 == 16)
	{
		num = func_1076(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num * 100);
	}
	else if (iParam0 == 13)
	{
	}

	return;
}

BOOL func_1000(int iParam0) // Position - 0x24E01 Hash - 0xE139661B ^0xE139661B
{
	if (!func_545(iParam0))
		return false;

	return func_546(iParam0, 2, true);
}

void func_1001(int iParam0) // Position - 0x24E1F Hash - 0xC5BA52D ^0xC5BA52D
{
	switch (iParam0)
	{
		case 2:
			func_150(214, false);
			break;
	
		case 3:
			func_150(215, false);
			break;
	
		case 4:
			func_150(233, false);
			break;
	
		case 5:
			func_150(210, false);
			break;
	
		case 6:
			func_150(229, false);
			break;
	
		case 7:
			func_150(226, false);
			break;
	
		case 8:
			func_150(234, false);
			break;
	
		case 11:
			break;
	
		case 12:
			func_150(237, false);
			break;
	
		case 13:
			func_150(221, false);
			break;
	
		case 15:
			func_150(217, false);
			break;
	
		case 16:
			func_150(211, false);
			break;
	
		case 18:
			func_150(228, false);
			break;
	
		case 19:
			func_150(222, false);
			break;
	
		case 20:
			func_150(227, false);
			break;
	
		case 23:
			func_150(218, false);
			break;
	
		case 26:
			func_150(220, false);
			break;
	
		case 27:
			func_150(238, false);
			break;
	
		case 28:
			func_150(235, false);
			break;
	
		case 29:
			func_150(230, false);
			break;
	
		case 31:
			func_150(236, false);
			break;
	
		case 33:
			func_150(212, false);
			break;
	
		case 34:
			func_150(223, false);
			break;
	
		case 37:
			func_150(219, false);
			break;
	
		case 38:
			func_150(224, false);
			break;
	
		case 39:
			func_150(231, false);
			break;
	
		case 40:
			func_150(225, false);
			break;
	
		case 41:
			func_150(239, false);
			break;
	
		case 42:
			func_150(213, false);
			break;
	
		case 43:
			func_150(216, false);
			break;
	}

	return;
}

void func_1002(int iParam0, BOOL bParam1) // Position - 0x25008 Hash - 0xE05A2D67 ^0x31D6C1E4
{
	switch (iParam0)
	{
		case 1:
			if (bParam1 == true)
				func_277(joaat("journal_herb_acunas_star_orchid_ar"), 0);
			else
				func_277(joaat("journal_herb_acunas_star_orchid_jn"), 0);
			break;
	
		case 2:
			if (bParam1 == true)
				func_277(joaat("journal_herb_alaskan_ginseng_ar"), 0);
			else
				func_277(joaat("journal_herb_alaskan_ginseng_jn"), 0);
			break;
	
		case 3:
			if (bParam1 == true)
				func_277(joaat("journal_herb_american_ginseng_ar"), 0);
			else
				func_277(joaat("journal_herb_american_ginseng_jn"), 0);
			break;
	
		case 4:
			if (bParam1 == true)
				func_277(joaat("journal_herb_bay_bolete_ar"), 0);
			else
				func_277(joaat("journal_herb_bay_bolete_jn"), 0);
			break;
	
		case 5:
			if (bParam1 == true)
				func_277(joaat("journal_herb_blackberry_ar"), 0);
			else
				func_277(joaat("journal_herb_blackberry_jn"), 0);
			break;
	
		case 6:
			if (bParam1 == true)
				func_277(joaat("journal_herb_black_currant_ar"), 0);
			else
				func_277(joaat("journal_herb_black_currant_jn"), 0);
			break;
	
		case 7:
			if (bParam1 == true)
				func_277(joaat("journal_herb_burdock_root_ar"), 0);
			else
				func_277(joaat("journal_herb_burdock_root_jn"), 0);
			break;
	
		case 8:
			if (bParam1 == true)
				func_277(joaat("journal_herb_chanterelle_ar"), 0);
			else
				func_277(joaat("journal_herb_chanterelle_jn"), 0);
			break;
	
		case 9:
			if (bParam1 == true)
				func_277(joaat("journal_herb_cigar_orchid_ar"), 0);
			else
				func_277(joaat("journal_herb_cigar_orchid_jn"), 0);
			break;
	
		case 10:
			if (bParam1 == true)
				func_277(joaat("journal_herb_clamshell_orchid_ar"), 0);
			else
				func_277(joaat("journal_herb_clamshell_orchid_jn"), 0);
			break;
	
		case 11:
			if (bParam1 == true)
				func_277(joaat("journal_herb_bulrush_ar"), 0);
			else
				func_277(joaat("journal_herb_bulrush_jn"), 0);
			break;
	
		case 12:
			if (bParam1 == true)
				func_277(joaat("journal_herb_creeping_thyme_ar"), 0);
			else
				func_277(joaat("journal_herb_creeping_thyme_jn"), 0);
			break;
	
		case 13:
			if (bParam1 == true)
				func_277(joaat("journal_herb_desert_sage_ar"), 0);
			else
				func_277(joaat("journal_herb_desert_sage_jn"), 0);
			break;
	
		case 14:
			if (bParam1 == true)
				func_277(joaat("journal_herb_dragons_mouth_orchid_ar"), 0);
			else
				func_277(joaat("journal_herb_dragons_mouth_orchid_jn"), 0);
			break;
	
		case 15:
			if (bParam1 == true)
				func_277(joaat("journal_herb_english_mace_ar"), 0);
			else
				func_277(joaat("journal_herb_english_mace_jn"), 0);
			break;
	
		case 16:
			if (bParam1 == true)
				func_277(joaat("journal_herb_huckleberry_ar"), 0);
			else
				func_277(joaat("journal_herb_huckleberry_jn"), 0);
			break;
	
		case 17:
			if (bParam1 == true)
				func_277(joaat("journal_herb_ghost_orchid_ar"), 0);
			else
				func_277(joaat("journal_herb_ghost_orchid_jn"), 0);
			break;
	
		case 18:
			if (bParam1 == true)
				func_277(joaat("journal_herb_golden_currant_ar"), 0);
			else
				func_277(joaat("journal_herb_golden_currant_jn"), 0);
			break;
	
		case 19:
			if (bParam1 == true)
				func_277(joaat("journal_herb_hummingbird_sage_ar"), 0);
			else
				func_277(joaat("journal_herb_hummingbird_sage_jn"), 0);
			break;
	
		case 20:
			if (bParam1 == true)
				func_277(joaat("journal_herb_indian_tobacco_ar"), 0);
			else
				func_277(joaat("journal_herb_indian_tobacco_jn"), 0);
			break;
	
		case 21:
			if (bParam1 == true)
				func_277(joaat("journal_herb_lady_of_the_night_orchid_ar"), 0);
			else
				func_277(joaat("journal_herb_lady_of_the_night_orchid_jn"), 0);
			break;
	
		case 22:
			if (bParam1 == true)
				func_277(joaat("journal_herb_lady_slipper_orchid_ar"), 0);
			else
				func_277(joaat("journal_herb_lady_slipper_orchid_jn"), 0);
			break;
	
		case 23:
			if (bParam1 == true)
				func_277(joaat("journal_herb_milkweed_ar"), 0);
			else
				func_277(joaat("journal_herb_milkweed_jn"), 0);
			break;
	
		case 24:
			if (bParam1 == true)
				func_277(joaat("journal_herb_moccasin_orchid_ar"), 0);
			else
				func_277(joaat("journal_herb_moccasin_orchid_jn"), 0);
			break;
	
		case 25:
			if (bParam1 == true)
				func_277(joaat("journal_herb_night_scented_orchid_ar"), 0);
			else
				func_277(joaat("journal_herb_night_scented_orchid_jn"), 0);
			break;
	
		case 26:
			if (bParam1 == true)
				func_277(joaat("journal_herb_oleander_sage_ar"), 0);
			else
				func_277(joaat("journal_herb_oleander_sage_jn"), 0);
			break;
	
		case 27:
			if (bParam1 == true)
				func_277(joaat("journal_herb_oregano_ar"), 0);
			else
				func_277(joaat("journal_herb_oregano_jn"), 0);
			break;
	
		case 28:
			if (bParam1 == true)
				func_277(joaat("journal_herb_parasol_ar"), 0);
			else
				func_277(joaat("journal_herb_parasol_jn"), 0);
			break;
	
		case 29:
			if (bParam1 == true)
				func_277(joaat("journal_herb_prairie_poppy_ar"), 0);
			else
				func_277(joaat("journal_herb_prairie_poppy_jn"), 0);
			break;
	
		case 30:
			if (bParam1 == true)
				func_277(joaat("journal_herb_queens_orchids_ar"), 0);
			else
				func_277(joaat("journal_herb_queens_orchids_jn"), 0);
			break;
	
		case 31:
			if (bParam1 == true)
				func_277(joaat("journal_herb_ramshead_orchid_ar"), 0);
			else
				func_277(joaat("journal_herb_ramshead_orchid_jn"), 0);
			break;
	
		case 32:
			if (bParam1 == true)
				func_277(joaat("journal_herb_rat_tail_orchid_ar"), 0);
			else
				func_277(joaat("journal_herb_rat_tail_orchid_jn"), 0);
			break;
	
		case 33:
			if (bParam1 == true)
				func_277(joaat("journal_herb_raspberry_ar"), 0);
			else
				func_277(joaat("journal_herb_raspberry_jn"), 0);
			break;
	
		case 34:
			if (bParam1 == true)
				func_277(joaat("journal_herb_red_sage_ar"), 0);
			else
				func_277(joaat("journal_herb_red_sage_jn"), 0);
			break;
	
		case 35:
			if (bParam1 == true)
				func_277(joaat("journal_herb_sparrows_egg_orchid_ar"), 0);
			else
				func_277(joaat("journal_herb_sparrows_egg_orchid_jn"), 0);
			break;
	
		case 36:
			if (bParam1 == true)
				func_277(joaat("journal_herb_spider_orchid_ar"), 0);
			else
				func_277(joaat("journal_herb_spider_orchid_jn"), 0);
			break;
	
		case 37:
			if (bParam1 == true)
				func_277(joaat("journal_herb_vanilla_flower_ar"), 0);
			else
				func_277(joaat("journal_herb_vanilla_flower_jn"), 0);
			break;
	
		case 38:
			if (bParam1 == true)
				func_277(joaat("journal_herb_violet_snowdrop_ar"), 0);
			else
				func_277(joaat("journal_herb_violet_snowdrop_jn"), 0);
			break;
	
		case 39:
			if (bParam1 == true)
				func_277(joaat("journal_herb_carrot_ar"), 0);
			else
				func_277(joaat("journal_herb_carrot_jn"), 0);
			break;
	
		case 40:
			if (bParam1 == true)
				func_277(joaat("journal_herb_feverfew_ar"), 0);
			else
				func_277(joaat("journal_herb_feverfew_jn"), 0);
			break;
	
		case 41:
			if (bParam1 == true)
				func_277(joaat("journal_herb_mint_ar"), 0);
			else
				func_277(joaat("journal_herb_mint_jn"), 0);
			break;
	
		case 42:
			if (bParam1 == true)
				func_277(joaat("journal_herb_winterberry_ar"), 0);
			else
				func_277(joaat("journal_herb_winterberry_jn"), 0);
			break;
	
		case 43:
			if (bParam1 == true)
				func_277(joaat("journal_herb_yarrow_ar"), 0);
			else
				func_277(joaat("journal_herb_yarrow_jn"), 0);
			break;
	
		default:
			break;
	}

	return;
}

int func_1003(Hash hParam0) // Position - 0x2567D Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_333(outSlotId);
}

Hash func_1004() // Position - 0x256A0 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1946054.f_1497;
}

void func_1005(int iParam0, int iParam1) // Position - 0x256AF Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_1006(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x256C8 Hash - 0x45C7B33 ^0xF6637CED
{
	if (PED::_IS_META_PED_ASSET_VALID(uParam0->f_3.f_1))
		func_1092(uParam0);

	if (iParam2 == -1)
	{
		uParam0->f_1 = func_334(func_897(hParam1), 1);
		uParam0->f_1 == -1;
	}
	else
	{
		uParam0->f_1 = iParam2;
	}

	uParam0->f_2 = iParam4;
	*uParam0 = hParam1;
	uParam0->f_3 = 0;

	if (bParam3)
		func_1093(uParam0);

	return;
}

BOOL func_1007(Hash hParam0, int iParam1) // Position - 0x25724 Hash - 0xC4C2E73D ^0x83FF84C9
{
	int num;
	Hash hash;

	hash = hParam0;

	if (!func_508(hash, &num))
		return 0;

	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*iParam1 = 0;
	
		if (func_121(hParam0) != -999503751)
			func_1094(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
	
		Global_1946054.f_2657[0] = 0;
		return 1;
	}

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 - 1;
	*iParam1 = *iParam1 - 1;
	Global_1946054.f_2657[num] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;

	if (func_121(hParam0) != -999503751)
		func_1094(&(Global_1946054.f_2657.f_26), num, Global_1946054.f_2657.f_19);

	func_845(hParam0, true);
	return 1;
}

BOOL func_1008(var uParam0, int iParam1) // Position - 0x2580A Hash - 0x718DD1EF ^0xA172DFD1
{
	return uParam0->f_1 && iParam1 != false;
}

void func_1009(var uParam0, int iParam1, int iParam2) // Position - 0x2581B Hash - 0xDEDED6D0 ^0xB4D62998
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_1010(int iParam0, int iParam1) // Position - 0x2582E Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_1011(int iParam0, int iParam1) // Position - 0x2583F Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

void func_1012(Hash hParam0, int iParam1, eStackSize essParam2) // Position - 0x25852 Hash - 0xC2C59C9E ^0x9DCB6812
{
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_1013(Hash hParam0, int iParam1, eStackSize essParam2) // Position - 0x258AD Hash - 0x7711D950 ^0x19070BC5
{
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_1014(Hash hParam0, eStackSize essParam1) // Position - 0x25917 Hash - 0x5B4F430F ^0xA0DE91CC
{
	int i;

	if (func_62() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		Global_26796.f_26[essParam1 /*120*/].f_1 = *hParam0;
	
		for (i = 0; i < 39; i = i + 1)
		{
			func_1012(&hParam0->f_1[i /*3*/], i, essParam1);
		}
	
		return;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	Global_36638.f_45.f_350.f_26[essParam1 /*120*/].f_1 = *hParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_1013(&hParam0->f_1[i /*3*/], i, essParam1);
	}

	return;
}

void func_1015(BOOL bParam0, eStackSize essParam1, int iParam2) // Position - 0x259B2 Hash - 0x22FA317E ^0x7C0991BF
{
	if (func_62() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		if (essParam1 > -1 && essParam1 < 5)
			Global_26796.f_26[essParam1 /*120*/] = Global_26796.f_26[essParam1 /*120*/] || bParam0;
	
		return;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	if (essParam1 > -1 && essParam1 < 5)
		Global_36638.f_45.f_350.f_26[essParam1 /*120*/] = Global_36638.f_45.f_350.f_26[essParam1 /*120*/] || bParam0;

	return;
}

BOOL func_1016(int iParam0, int iParam1) // Position - 0x25A3A Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_1095(&(Global_1109000.f_4), num, 5);

	if (iParam1 == func_1096())
		return func_1095(&(Global_1109000.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1224589.f_16[iParam1])
		return func_1095(&(Global_1108108[iParam1 /*27*/].f_4), num, 5);

	return false;
}

BOOL func_1017(Player plParam0) // Position - 0x25AAE Hash - 0x80018C76 ^0x60939258
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1058888.f_49041), plParam0))
		return true;

	return false;
}

void func_1018(Player plParam0) // Position - 0x25ACD Hash - 0x3D7F326C ^0x47EF75AB
{
	Player player;

	if (func_1097() != false || func_62() != false)
		return;

	player = plParam0;

	if (!Global_1224589.f_16[player])
	{
		func_1098(plParam0);
		return;
	}

	if (Global_1058888.f_42287.f_1[player /*5*/] == 1)
		return;

	func_1099(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1058888.f_42287.f_1[player /*5*/] = 1;
	return;
}

float func_1019(int iParam0) // Position - 0x25B3B Hash - 0x212D15D1 ^0x936F419E
{
	int num;
	int num2;
	float num3;
	float num4;
	int num5;
	int num6;
	int num7;

	num5 = func_876(iParam0);

	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			num4 = Global_40.f_11095.f_11[num5];
			num6 = func_1020(num4);
			num = num6;
			num7 = num + 1;
			num2 = func_1100(num7) - func_1100(num6);
			num3 = (float)num2 * 0.25f;
			return num3;
	
		default:
		
	}

	return -1f;
}

int func_1020(float fParam0) // Position - 0x25BA5 Hash - 0x3E9B0DE9 ^0x3E9B0DE9
{
	if (fParam0 <= (float)-1)
		return -1;

	if (fParam0 < (float)50)
		return 0;

	if (fParam0 < (float)100)
		return 1;

	if (fParam0 < (float)200)
		return 2;

	if (fParam0 < (float)350)
		return 3;

	if (fParam0 < (float)550)
		return 4;

	if (fParam0 < (float)800)
		return 5;

	if (fParam0 < (float)1100)
		return 6;

	return 7;
}

int func_1021(int iParam0) // Position - 0x25C31 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 1;
	
		case 2:
			return 1;
	
		case 4:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_1022(int iParam0) // Position - 0x25C6A Hash - 0xB8632262 ^0xB8632262
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 1;
	
		case 2:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 1;
	
		case 12:
			return 1;
	
		case 13:
			return 1;
	
		case 14:
			return 1;
	
		case 16:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_1023(float fParam0, float fParam1) // Position - 0x25CE9 Hash - 0xD6DD6059 ^0x47213A0D
{
	int num;
	float num2;
	float num3;
	float num4;
	int num5;
	int num6;

	num = func_1020(fParam0);
	num2 = BUILTIN::TO_FLOAT(func_1100(num));
	num3 = BUILTIN::TO_FLOAT(func_1100(num + 1));
	num4 = num3 - num2;
	num5 = BUILTIN::FLOOR(((fParam0 - num2) / num4) * 4f);
	num6 = BUILTIN::FLOOR(((fParam1 - num2) / num4) * 4f);

	if (num5 == num6)
		return 0;

	if (num6 >= 4 || num6 < 0)
		return 0;

	return num6;
}

int func_1024(int iParam0) // Position - 0x25D5C Hash - 0x49D35AE6 ^0xCCB27CDD
{
	int num;

	if (func_1101(iParam0, &num))
		return func_1100(num);

	switch (iParam0)
	{
		case 0:
			if (func_1102())
				return 550;
			else
				return 100;
			break;
	
		case 1:
			if (func_1102())
				return 550;
			else
				return 50;
			break;
	
		case 2:
			if (func_1102())
				return 550;
			else
				return 50;
			break;
	
		case 4:
			return 0;
	}

	return 0;
}

int func_1025(int iParam0) // Position - 0x25DE8 Hash - 0xEE6D3E20 ^0xEE6D3E20
{
	switch (iParam0)
	{
		case 0:
			return 246;
	
		case 1:
			return 248;
	
		case 2:
			return 247;
	
		default:
		
	}

	return -1;
}

void func_1026(int iParam0, int iParam1, int iParam2) // Position - 0x25E1A Hash - 0x29688DE6 ^0x4F19CE6B
{
	char* str;
	const char* str2;
	BOOL flag;
	int num;
	const char* str3;
	char* str4;
	char* str5;
	const char* str6;
	Hash hash;
	Hash hashKey;
	const char* data;

	if (iParam1 == 0)
		return;

	num = iParam1 + 1;

	if (iParam2 != 0)
	{
		str = "RPG_LEVEL_PROGRESS_TOAST";
		str2 = MISC::VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, num + 1);
	}
	else
	{
		str = "RPG_LEVEL_INCREASED_TOAST";
		str2 = MISC::VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", num);
		flag = true;
	}

	num = num + func_1103(iParam0);
	str3 = func_1105(func_1104(num, iParam2));
	str5 = func_1106(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str5))
		str4 = "HUD_Toast_Soundset";

	str6 = MISC::VAR_STRING(10, str, func_1107(iParam0));
	hash = func_1108(iParam0);
	hashKey = MISC::GET_HASH_KEY(str3);

	if (flag)
	{
		data = str6;
		data.f_1 = str2;
		data.f_3 = hashKey;
		data.f_2 = hash;
		data.f_4 = 1;
		data.f_5 = func_1109(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&data);
	}

	func_570(str6, str2, hash, hashKey, joaat("stats_menu"), "INPUT_FEED_INTERACT_GENERIC", func_1110(iParam0), -2, str4, str5, 0, 0, true, true);
	return;
}

void func_1027() // Position - 0x25F12 Hash - 0x190164B9 ^0x2EDA1322
{
	var unk;
	var unk31;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
		return;

	unk = 29;
	func_1111(Global_35, &unk);
	unk31 = { func_439(false) };
	INVENTORY::_0xE36D4A38D28D9CFB(false);
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(5, 1, &unk31, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_1112(false);
	func_1113(7);
	func_330(joaat("kit_bandana"), true, true, false);

	if (func_610() == 1160113249)
	{
		func_330(joaat("clothing_p3_player_three_ms1_hat_000_000"), true, true, true);
		func_330(-361635024, true, true, true);
	}

	func_1114(Global_35, &unk);
	return;
}

int func_1028(eStackSize essParam0) // Position - 0x25F9B Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 17) & 31;
}

int func_1029(eStackSize essParam0) // Position - 0x25FAE Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 12) & 31;
}

int func_1030(eStackSize essParam0) // Position - 0x25FC1 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 6) & 63;
}

int func_1031(eStackSize essParam0) // Position - 0x25FD3 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 0) & 63;
}

void func_1032(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x25FE5 Hash - 0xA65AB937 ^0xA65AB937
{
	func_783(uParam0, iParam6);
	func_784(uParam0, iParam5);
	func_785(uParam0, iParam4);
	func_786(uParam0, iParam3);
	func_787(uParam0, iParam2);
	func_788(uParam0, iParam1);
	return;
}

BOOL func_1033(eStackSize essParam0, eStackSize essParam1, BOOL bParam2) // Position - 0x2601D Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_1115(essParam1) || !func_1115(essParam0))
			return true;

	return essParam0 > essParam1;
}

void func_1034(int iParam0) // Position - 0x2604A Hash - 0x7237E1A2 ^0x99714617
{
	var statId;

	if (iParam0 < 0)
		iParam0 = 0;

	Global_40.f_4283.f_325 = iParam0;
	statId = { func_638(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&statId, iParam0, true);
	return;
}

int func_1035(int iParam0, int iParam1) // Position - 0x2607D Hash - 0x8FA0E29 ^0xC3F68E87
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
	
		case -2106214197:
			return 104;
	
		case -2101264851:
			return 195;
	
		case -2073072369:
			return 59;
	
		case -2069570138:
			return 25;
	
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 357;
	
		case -2058120606:
			return 197;
	
		case -2038424081:
			return 49;
	
		case -2034257789:
			return 92;
	
		case -2022369555:
			return 265;
	
		case -2021582629:
			return 112;
	
		case -2020023971:
			return 278;
	
		case -1957523409:
			return 208;
	
		case -1952856164:
			return 165;
	
		case -1949204933:
			return 276;
	
		case -1925798111:
			return 41;
	
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 353;
	
		case -1852605133:
			return 10;
	
		case -1847672446:
			return 376;
	
		case -1840704908:
			return 289;
	
		case -1838712533:
			return 26;
	
		case -1838352012:
			return 57;
	
		case -1835851517:
			return 56;
	
		case -1831552326:
			return 123;
	
		case -1825294305:
			return 266;
	
		case -1824738758:
			return 277;
	
		case -1818850842:
			return 253;
	
		case -1799960545:
			return 257;
	
		case -1764522338:
			return 372;
	
		case -1763509974:
			return 141;
	
		case -1741667789:
			return 64;
	
		case -1738165526:
			return 3;
	
		case -1718674470:
			return 23;
	
		case -1717960576:
			return 61;
	
		case -1711895055:
			return 13;
	
		case -1706438978:
			return 233;
	
		case -1700452710:
			return 53;
	
		case -1674179981:
			return 55;
	
		case -1666278201:
			return 33;
	
		case -1612662716:
			return 201;
	
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 322;
	
		case -1582926490:
			return 146;
	
		case -1579419919:
			return 147;
	
		case -1558439474:
			return 301;
	
		case -1556423728:
			return 218;
	
		case -1532284567:
			return 116;
	
		case -1530132748:
			return 311;
	
		case -1524512402:
			return 209;
	
		case -1523910291:
			return 155;
	
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 338;
	
		case -1447311849:
			return 215;
	
		case -1436021162:
			return 172;
	
		case -1433686245:
			return 12;
	
		case -1425209566:
			return 32;
	
		case -1419919497:
			return 22;
	
		case -1414537028:
			return 73;
	
		case -1405998267:
			return 105;
	
		case -1344601768:
			return 314;
	
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 331;
	
		case -1329135070:
			return 140;
	
		case -1318987693:
			return 222;
	
		case -1311865656:
			return 37;
	
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 320;
	
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 321;
	
		case -1282804314:
			return 270;
	
		case -1278074582:
			return 171;
	
		case -1271608261:
			return 98;
	
		case -1257057567:
			return 21;
	
		case -1241340344:
			return 300;
	
		case -1236261996:
			return 235;
	
		case -1232809834:
			return 113;
	
		case -1230112817:
			return 170;
	
		case -1223121209:
			return 126;
	
		case -1215445344:
			return 131;
	
		case -1209597203:
			return 333;
	
		case -1206122982:
			return 156;
	
		case -1187950766:
			return 45;
	
		case -1179948750:
			return 136;
	
		case -1170496998:
			return 46;
	
		case -1164215952:
			return 234;
	
		case -1151084372:
			return 124;
	
		case -1145519186:
			return 100;
	
		case -1124061431:
			return 242;
	
		case -1123615607:
			return 29;
	
		case -1080627546:
			return 378;
	
		case -1077783786:
			return 194;
	
		case -1063147448:
			return 151;
	
		case -1062490780:
			return 79;
	
		case -1060078174:
			return 239;
	
		case -1056767524:
			return 176;
	
		case -1053549743:
			return 58;
	
		case -1029225159:
			return 106;
	
		case -1014145132:
			return 288;
	
		case -978957786:
			return 251;
	
		case -959357075:
			return 36;
	
		case -950054349:
			return 152;
	
		case -939420910:
			return 44;
	
		case -939114198:
			return 221;
	
		case -919512195:
			return 40;
	
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 336;
	
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 334;
	
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 356;
	
		case -879507474:
			return 236;
	
		case -868076593:
			return 84;
	
		case -857964358:
			return 83;
	
		case -853383233:
			return 65;
	
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 339;
	
		case -828139293:
			return 260;
	
		case -811637947:
			return 245;
	
		case -796902762:
			return 88;
	
		case -792853067:
			return 254;
	
		case -789397228:
			return 262;
	
		case -785605431:
			return 250;
	
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 345;
	
		case -764163380:
			return 228;
	
		case -748969569:
			return 78;
	
		case -741351766:
			return 60;
	
		case -736853952:
			return 366;
	
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 340;
	
		case -699277634:
			return 4;
	
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 323;
	
		case -683458244:
			return 80;
	
		case -666014935:
			return 157;
	
		case -664512648:
			return 67;
	
		case -664252410:
			return 191;
	
		case -644722288:
			return 261;
	
		case -640663440:
			return 214;
	
		case -639037538:
			return 185;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

char* func_1036(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x27196 Hash - 0xC24B5846 ^0x4349237D
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					else
						return bParam3 ? "PMPLAYER_CONDITION_TEMPERATURE_COLD" : "PMPLAYER_CONDITION_TEMPERATURE_HOT";
					break;
			
				case 2:
					return bParam2 ? "PMPLAYER_CONDITION_HONOR_GOOD" : "PMPLAYER_CONDITION_HONOR_BAD";
			}
			break;
	
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
			
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
			
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
			
				default:
					break;
			}
			break;
	}

	return "";
}

char* func_1037(eStackSize essParam0) // Position - 0x2723E Hash - 0xCCDB3731 ^0xFF1F3D77
{
	Hash hash;

	hash = func_862(essParam0);

	if (hash == 0)
		return "OUT_UNKNOWN";

	return func_818(hash);
}

int func_1038(Hash hParam0) // Position - 0x27261 Hash - 0x9F080DD1 ^0x9F080DD1
{
	int num;

	if (func_1116(hParam0))
		num = 0;
	else if (func_1117(hParam0))
		num = 1;
	else if (func_1118(hParam0))
		num = 2;
	else if (func_1119(hParam0))
		num = 3;

	return num;
}

BOOL func_1039(int iParam0) // Position - 0x272A4 Hash - 0x8AC2B33E ^0x8AC2B33E
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 9; i = i + 1)
	{
		if (func_257(func_1120(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num > 1)
		return true;

	return false;
}

BOOL func_1040(int iParam0) // Position - 0x272E4 Hash - 0x626B55E1 ^0x626B55E1
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		if (func_257(func_1121(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num >= 4)
		return true;

	return false;
}

BOOL func_1041(int iParam0) // Position - 0x27323 Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12003 && iParam0 != false;
}

void func_1042() // Position - 0x27336 Hash - 0x40D9944C ^0x169F6962
{
	int num;

	if (func_62() != -1)
		return;

	func_433(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	num = func_879(1);
	func_1026(1, num, 0);
	return;
}

void func_1043(int iParam0) // Position - 0x27368 Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12003 = Global_40.f_12003 || iParam0;
	return;
}

void func_1044() // Position - 0x2737F Hash - 0x1D33C94B ^0xA2EE5507
{
	int num;

	if (func_62() != -1)
		return;

	func_433(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	num = func_879(2);
	func_1026(2, num, 0);
	return;
}

void func_1045() // Position - 0x273B1 Hash - 0xB797F7DC ^0xFD986A22
{
	int num;

	if (func_62() != -1)
		return;

	func_433(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	num = func_879(0);
	func_1026(0, num, 0);
	return;
}

BOOL func_1046(Any anParam0) // Position - 0x273E3 Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

void func_1047(int iParam0, int iParam1) // Position - 0x27419 Hash - 0x26256B16 ^0x79A35F4E
{
	int i;
	int num;

	if (iParam0 == -1)
		return;

	if (Global_1223212 < 20)
	{
		Global_1223212 = Global_1223212 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1223212.f_1[i /*9*/] = { Global_1223212.f_1[i + 1 /*9*/] };
		}
	}

	num = -1;
	num = iParam0;
	num.f_1 = iParam1;
	Global_1223212.f_1[Global_1223212 - 1 /*9*/] = { num };
	return;
}

BOOL func_1048(Hash hParam0, eStackSize essParam1) // Position - 0x27496 Hash - 0xF5E57FDF ^0xF5E57FDF
{
	switch (essParam1)
	{
		case 1:
			switch (hParam0)
			{
				case joaat("a_c_duck_01"):
				case joaat("A_C_Rabbit_01"):
				case joaat("a_c_pronghorn_01"):
					return true;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (hParam0)
			{
				case joaat("a_c_buck_01"):
				case joaat("a_c_turkey_01"):
				case joaat("a_c_turkey_02"):
				case joaat("a_c_fishrainbowtrout_01_lg"):
				case joaat("a_c_fishrainbowtrout_01_ms"):
				case joaat("a_c_deer_01"):
					return true;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (hParam0)
			{
				case joaat("a_c_alligator_01"):
				case joaat("a_c_alligator_02"):
				case joaat("a_c_alligator_03"):
				case joaat("a_c_fishlargemouthbass_01_ms"):
				case joaat("a_c_fishlargemouthbass_01_lg"):
				case joaat("a_c_carolinaparakeet_01"):
					return true;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (hParam0)
			{
				case joaat("a_c_elk_01"):
				case joaat("a_c_fishsalmonsockeye_01_ms"):
				case joaat("a_c_fishsalmonsockeye_01_lg"):
				case joaat("a_c_fishsalmonsockeye_01_ml"):
				case joaat("a_c_quail_01"):
					return true;
			
				default:
					break;
			}
			break;
	}

	return false;
}

int func_1049(Hash hParam0, eStackSize essParam1) // Position - 0x27573 Hash - 0xC5733D28 ^0xFB197C4
{
	if (!func_161(hParam0, 0))
		return 878851736;

	if (!func_219(hParam0))
		return 878851736;

	if (func_1122(hParam0, essParam1))
		return -1708424762;
	else if (func_111(hParam0, -1690954218))
		return -1760041550;
	else if (func_111(hParam0, 1149630095))
		return -1760041550;
	else if (func_111(hParam0, 194498509))
		return 116793994;
	else if (func_111(hParam0, 43251425))
		return 1869130580;

	return 1869130580;
}

BOOL func_1050(int iParam0, int iParam1) // Position - 0x2761C Hash - 0xD4119D7E ^0x719C18FD
{
	var unk;
	int num;
	int num2;
	int i;

	unk = 10;
	unk[0] = 878851736;
	unk[1] = 1762298001;
	unk[2] = 1869130580;
	unk[3] = 1336518004;
	unk[4] = 116793994;
	unk[5] = 515084529;
	unk[6] = -1760041550;
	unk[7] = -1977068039;
	unk[8] = -1708424762;
	unk[9] = -399865011;
	num = -1;
	num2 = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (unk[i] == iParam0)
		{
			num = i;
			break;
		}
	}

	if (num == -1)
		return false;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (unk[i] == iParam1)
		{
			num2 = i;
			break;
		}
	}

	if (num2 == -1)
		return false;

	return num > num2;
}

void func_1051(var uParam0) // Position - 0x276F9 Hash - 0x4298C46 ^0x74410755
{
	if (Global_40.f_4283.f_313 > 1)
	{
		switch (*uParam0)
		{
			case -1760041550:
				*uParam0 = -1977068039;
				break;
		
			case -1708424762:
				*uParam0 = -399865011;
				break;
		
			case 116793994:
				*uParam0 = 515084529;
				break;
		
			case 878851736:
				*uParam0 = 1762298001;
				break;
		
			case 1869130580:
				*uParam0 = 1336518004;
				break;
		}
	}

	return;
}

Hash func_1052(Hash hParam0) // Position - 0x2776C Hash - 0x2D6C03B6 ^0x2D6C03B6
{
	if (!func_730(hParam0))
		return 0;

	return hParam0;
}

int func_1053(Hash hParam0, int iParam1) // Position - 0x27784 Hash - 0x5E5FF029 ^0x5E5FF029
{
	switch (hParam0)
	{
		case joaat("provision_beaver_fur"):
			return 0;
	
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 7;
	
		case joaat("provision_deer_hide"):
			return 20;
	
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 14;
	
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 29;
	
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return 1;
	
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 17;
	
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return 43;
	
		case joaat("PROVISION_COYOTE_LEGENDARY_FUR_PRISTINE"):
			return 19;
	
		case joaat("provision_javelina_skin"):
			return 30;
	
		case joaat("provision_sheep_wool"):
			return 49;
	
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 40;
	
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return 22;
	
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return 42;
	
		case joaat("PROVISION_BUCK_LEGENDARY_FUR_PRISTINE"):
			return 11;
	
		case joaat("provision_buck_fur"):
			return 8;
	
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 18;
	
		case joaat("PROVISION_RAM_LEGENDARY_HIDE_PRISTINE"):
			return 48;
	
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 10;
	
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return 21;
	
		case joaat("provision_ram_hide"):
			return 45;
	
		case joaat("provision_panther_fur"):
			return 34;
	
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 39;
	
		case joaat("PROVISION_BEAVER_LEGENDARY_FUR_PRISTINE"):
			return 3;
	
		case joaat("PROVISION_PRONGHORN_LEGENDARY_FUR_PRISTINE"):
			return 44;
	
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return 31;
	
		case joaat("provision_pig_skin"):
			return 38;
	
		case 0:
			return 56;
	
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return 53;
	
		case joaat("provision_fox_fur"):
			return 23;
	
		case joaat("provision_cougar_fur"):
			return 12;
	
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 25;
	
		case joaat("PROVISION_WOLF_LEGENDARY_FUR_PRISTINE"):
			return 55;
	
		case joaat("provision_pronghorn_fur"):
			return 41;
	
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return 54;
	
		case joaat("PROVISION_PANTHER_LEGENDARY_FUR_PRISTINE"):
			return 37;
	
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 28;
	
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return 2;
	
		case joaat("provision_wolf_fur"):
			return 52;
	
		case joaat("provision_coyote_fur"):
			return 16;
	
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return 6;
	
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return 51;
	
		case joaat("PROVISION_COUGAR_LEGENDARY_FUR_PRISTINE"):
			return 15;
	
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return 35;
	
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return 9;
	
		case joaat("PROVISION_FOX_LEGENDARY_FUR_PRISTINE"):
			return 26;
	
		case joaat("PROVISION_FOX_FUR_POOR"):
			return 24;
	
		case joaat("provision_goat_hair"):
			return 27;
	
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return 50;
	
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return 47;
	
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return 46;
	
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return 13;
	
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return 32;
	
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return 36;
	
		case joaat("provision_loanshark_skins"):
			return 33;
	
		case joaat("PROVISION_BOAR_LEGENDARY_SKIN_PRISTINE"):
			return 4;
	
		case joaat("provision_boar_skin"):
			return 5;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_1054(int iParam0, int iParam1, int iParam2) // Position - 0x27A10 Hash - 0x1D7642BB ^0x1D7642BB
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

BOOL func_1055(int iParam0, Hash hParam1, int iParam2) // Position - 0x27A35 Hash - 0x5E31EF6C ^0x5E31EF6C
{
	if (!func_161(hParam1, 0))
		return false;

	return func_462(iParam0, hParam1) >= iParam2;
}

BOOL func_1056(int iParam0, Hash hParam1, int iParam2, Hash hParam3, BOOL bParam4) // Position - 0x27A57 Hash - 0x1ABECC38 ^0x1ABECC38
{
	var unk;
	var unk6;

	if (!func_161(hParam1, 0))
		return false;

	if (iParam2 < 1)
		return false;

	unk = { func_947(iParam0) };
	unk6 = { func_948(iParam0, hParam1, unk, unk.f_4) };
	return func_1123(iParam0, hParam1, &unk6, iParam2, hParam3, bParam4);
}

BOOL func_1057(int iParam0) // Position - 0x27AA6 Hash - 0x8EF26C67 ^0x9855652A
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
	
		num = func_821(iParam0);
	}

	if (num == 1)
		return 1;

	if (num == 2)
		return 1;

	return 0;
}

Vector3 func_1058(int iParam0) // Position - 0x27B11 Hash - 0xACD6F870 ^0xDE230469
{
	if (func_1124(iParam0))
		return func_1125(iParam0);

	return Global_1835011[iParam0 /*74*/].f_18;
}

BOOL func_1059(eStackSize essParam0, var uParam1) // Position - 0x27B37 Hash - 0xF607B79C ^0x9512C6CD
{
	if (essParam0 == 90)
	{
		if (func_1126(Global_1347702[essParam0 /*49*/].f_15) != 0)
		{
			Global_1347702[essParam0 /*49*/].f_18 = 80f;
			*uParam1 = { 1015.1127f, 159.72952f, 103.01753f };
			return true;
		}
	}
	else if (essParam0 == 96)
	{
		if (Global_1347702[essParam0 /*49*/].f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return true;
		}
		else
		{
			*uParam1 = { -1629.7104f, -1338.3771f, 82.0174f };
			return true;
		}
	}

	return false;
}

BOOL func_1060(int iParam0) // Position - 0x27BCD Hash - 0xB32B029D ^0xB32B029D
{
	if (iParam0 <= -1 || iParam0 >= 13)
		return false;

	return true;
}

BOOL func_1061(int iParam0) // Position - 0x27BEC Hash - 0x119AB8B0 ^0x119AB8B0
{
	switch (iParam0)
	{
		case joaat("CI_TAG_FOLDER_TAXIDERMIST_ORDERS"):
		case joaat("CI_TAG_FOLDER_LETTERS"):
		case joaat("CI_TAG_FOLDER_TREASURE_MAPS"):
		case joaat("CI_TAG_FOLDER_PHOTOGRAPHS"):
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

	if (func_1127(iParam0))
		return true;

	return false;
}

BOOL func_1062(int iParam0) // Position - 0x27C6B Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case joaat("CI_TAG_FOLDER_KIT_WATCHES"):
			return true;
	}

	return false;
}

BOOL func_1063() // Position - 0x27C89 Hash - 0x77F1FEBE ^0x77F1FEBE
{
	return func_32(1);
}

BOOL func_1064(int iParam0) // Position - 0x27C96 Hash - 0xE48228D0 ^0xE48228D0
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

BOOL func_1065(Hash hParam0, BOOL bParam1) // Position - 0x27D08 Hash - 0xB6F8966C ^0x3A39AAD0
{
	int num;
	int num2;
	int i;
	var unk;
	var unk19;
	Ped ped;
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
	unk.f_13 = -1;
	unk.f_14 = -1;
	unk.f_15 = -1;
	unk.f_16 = -1;
	unk.f_17 = -1;
	unk19.f_9 = joaat("SLOTID_NONE");
	unk.f_1 = joaat("SLOTID_SATCHEL");
	ped = func_165(0);

	if (ENTITY::DOES_ENTITY_EXIST(ped) && func_782(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(ped), &unk, &num, &num2))
	{
		i = 0;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_233(&unk19, i, num, num2))
			{
				if (hParam0 == unk19.f_4)
				{
					if (bParam1)
					{
						num3 = 1;
						func_456(&ped, hParam0, &num3, true, -142743235);
					}
				
					func_244(num);
					return 1;
				}
			}
		}
	
		func_244(num);
	}

	return 0;
}

BOOL func_1066(var uParam0, int iParam1, int iParam2, var uParam3) // Position - 0x27DFA Hash - 0x3AEC80A5 ^0x823C1FFF
{
	Ped ped;
	var unk;
	int num;

	if (func_242(iParam1) && !func_1128(iParam1))
		ped = func_85(iParam1);
	else
		return false;

	func_1129(uParam3);
	num = func_969(iParam2);

	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk, ped, num, 0))
		return false;

	*uParam0 = unk.f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return false;

	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(*uParam0))
		return false;

	*uParam3 = ENTITY::GET_ENTITY_MODEL(*uParam0);
	uParam3->f_2 = ENTITY::_0xD21C7418C590BB40(*uParam0);
	uParam3->f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(*uParam0);
	return true;
}

void func_1067(Entity eParam0, var uParam1) // Position - 0x27E99 Hash - 0x9E997175 ^0xEF5C18F2
{
	Ped pedIndexFromEntityIndex;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
	{
		func_514(pedIndexFromEntityIndex, &(uParam1->f_5), &(uParam1->f_6), &(uParam1->f_7), &(uParam1->f_4));
	
		if (func_767(&(uParam1->f_1), pedIndexFromEntityIndex, uParam1->f_7, uParam1->f_5))
		{
		}
	}

	return;
}

BOOL func_1068(Ped pedParam0, Any* panParam1) // Position - 0x27EE3 Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

float func_1069(int iParam0, int iParam1) // Position - 0x27EF3 Hash - 0xB4BF1B35 ^0x79981B44
{
	if (iParam1 == 2)
		iParam1 = func_1130();

	switch (iParam1)
	{
		case 0:
			return Global_1954819.f_753.f_5[iParam0 /*3*/];
	
		case 1:
			return Global_1954819.f_866.f_2.f_5[iParam0 /*3*/];
	
		default:
		
	}

	return -1f;
}

int func_1070(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x27F3E Hash - 0xB3CE93F ^0x69980D29
{
	Ped ped;

	if (iParam5 == 2)
		iParam5 = func_1130();

	ped = PLAYER::PLAYER_PED_ID();

	if (bParam2)
		if (fParam1 >= 100f)
			AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
		else
			AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);

	if (bParam3)
		func_1131(iParam0, 7000, iParam5);

	if (fParam1 > 100f)
		fParam1 = 100f;
	else if (fParam1 < 0f)
		fParam1 = 0f;

	func_1132(ped, iParam0, fParam1);
	func_1133(iParam0, fParam1, bParam4, iParam5);

	if (!ENTITY::IS_ENTITY_DEAD(ped))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(ped, func_1077(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}

	return 1;
}

void func_1071(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x27FF4 Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;

	num = func_964(*uParam0);
	i = func_963(*uParam0);
	j = func_1028(*uParam0);
	k = func_1029(*uParam0);
	l = func_1030(*uParam0);
	m = func_1031(*uParam0);

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
	
		num3 = func_965(num2, num);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_1032(uParam0, m, l, k, j, i, num);
	return;
}

int func_1072(int iParam0, int iParam1) // Position - 0x28167 Hash - 0xAAC15258 ^0xF098E005
{
	if (iParam1 == 2)
		iParam1 = func_1130();

	switch (iParam1)
	{
		case 0:
			return Global_1954819.f_753.f_5[iParam0 /*3*/].f_2;
	
		case 1:
			return Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_2;
	
		default:
		
	}

	return -1;
}

eStackSize func_1073(int iParam0, int iParam1) // Position - 0x281B6 Hash - 0xAAC15258 ^0x5B988360
{
	if (iParam1 == 2)
		iParam1 = func_1130();

	switch (iParam1)
	{
		case 0:
			return Global_1954819.f_753.f_5[iParam0 /*3*/].f_1;
	
		case 1:
			return Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_1;
	
		default:
		
	}

	return -15;
}

void func_1074(int iParam0, int iParam1, int iParam2) // Position - 0x28207 Hash - 0x8F2CCCF2 ^0x7EED1EE3
{
	if (iParam2 == 2)
		iParam2 = func_1130();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_1075(int iParam0, eStackSize essParam1, int iParam2) // Position - 0x2825C Hash - 0x8F2CCCF2 ^0xDB456F85
{
	if (iParam2 == 2)
		iParam2 = func_1130();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/].f_1 = essParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_1 = essParam1;
			break;
	
		default:
			break;
	}

	return;
}

int func_1076(int iParam0) // Position - 0x282B1 Hash - 0xC1A484EF ^0xB46B3CEC
{
	float num;

	num = BUILTIN::TO_FLOAT(iParam0 + 100) / 200f;
	return BUILTIN::CEIL(100f * num);
}

int func_1077(int iParam0) // Position - 0x282D5 Hash - 0x26AB94C2 ^0x26AB94C2
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

int func_1078(int iParam0) // Position - 0x28304 Hash - 0x5163992 ^0x5163992
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 2;
	
		case 2:
			return 3;
	
		default:
		
	}

	return 0;
}

void func_1079(int iParam0, float fParam1, BOOL bParam2) // Position - 0x28333 Hash - 0x67180CD8 ^0x6965D1E9
{
	char* str;

	str = func_1036(iParam0, 0, false, false);
	str = MISC::VAR_STRING(2, str, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[0], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[0], bParam2);
	return;
}

float func_1080(int iParam0) // Position - 0x28383 Hash - 0x56878B22 ^0xF716EA88
{
	float num;

	num = BUILTIN::TO_FLOAT(iParam0) / 100f;
	return (num * 200f) - 100f;
}

int func_1081(int iParam0) // Position - 0x283A7 Hash - 0x68BC9945 ^0x68BC9945
{
	switch (iParam0)
	{
		case 0:
			return 87;
	
		case 1:
			return 85;
	
		case 2:
			return 86;
	
		default:
		
	}

	return -1;
}

char* func_1082(int iParam0) // Position - 0x283D9 Hash - 0x5BCE232D ^0x99FB4A77
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

int func_1083(int iParam0) // Position - 0x28413 Hash - 0x7401DE8A ^0xC8FAA995
{
	if (iParam0 == 2)
		iParam0 = func_1130();

	switch (iParam0)
	{
		case 0:
			return Global_1954819.f_850;
	
		case 1:
			return Global_1954819.f_866.f_115;
	
		default:
		
	}

	return -1;
}

void func_1084(float fParam0, Ped pedParam1) // Position - 0x28452 Hash - 0x2062487E ^0xADB8AE45
{
	if (fParam0 == 0f)
		return;

	if (pedParam1 == 0)
		pedParam1 = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	ENTITY::_CHANGE_ENTITY_HEALTH(pedParam1, fParam0, 0, 0);
	return;
}

void func_1085(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x28494 Hash - 0x15F4D03F ^0x38F95A43
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_5, bParam2);
	return;
}

int func_1086(int iParam0) // Position - 0x284C4 Hash - 0x4B3CC2BE ^0x5B1CA90F
{
	if (iParam0 == 2)
		iParam0 = func_1130();

	switch (iParam0)
	{
		case 0:
			return Global_1954819.f_850.f_2;
	
		case 1:
			return Global_1954819.f_866.f_115.f_2;
	
		default:
		
	}

	return -1;
}

void func_1087(float fParam0) // Position - 0x28507 Hash - 0xEBF0A2AB ^0x54370C29
{
	Ped ped;

	if (fParam0 == 0f)
		return;

	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return;

	PED::_CHANGE_PED_STAMINA(ped, fParam0);
	return;
}

int func_1088(int iParam0) // Position - 0x28541 Hash - 0x4B3CC2BE ^0x6D5E7BC6
{
	if (iParam0 == 2)
		iParam0 = func_1130();

	switch (iParam0)
	{
		case 0:
			return Global_1954819.f_850.f_1;
	
		case 1:
			return Global_1954819.f_866.f_115.f_1;
	
		default:
		
	}

	return -1;
}

void func_1089(float fParam0, BOOL bParam1) // Position - 0x28584 Hash - 0x1FE7F29A ^0xE2FCD967
{
	Player player;
	Ped ped;
	float playerSpecialAbilityMultiplier;

	player = PLAYER::PLAYER_ID();
	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(player) && fParam0 > 0f)
		return;

	if (fParam0 == 0f)
		return;

	playerSpecialAbilityMultiplier = PLAYER::_GET_PLAYER_SPECIAL_ABILITY_MULTIPLIER(player);

	if (fParam0 < 0f && bParam1 == true)
		bParam1 = false;

	if (!bParam1)
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(player, 1f);

	if (fParam0 > 0f)
		PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(player, fParam0, 0, 0, 0);
	else
		PLAYER::_SPECIAL_ABILITY_DRAIN_BY_AMOUNT(player, fParam0, 0);

	if (!bParam1)
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(player, playerSpecialAbilityMultiplier);

	return;
}

void func_1090(int iParam0, BOOL bParam1, BOOL bParam2, char* sParam3) // Position - 0x28618 Hash - 0x3C2F3887 ^0xD0B646ED
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_9, sParam3);
	return;
}

void func_1091(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2865C Hash - 0x620F816C ^0x10DFE187
{
	char* str;

	str = func_1036(0, 1, bParam0, bParam1);
	str = MISC::VAR_STRING(2, str);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[1], bParam2);

	if (bParam0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], false);
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[1], "rpg_cold");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[1], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[1], "rpg_hot");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[1], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], true);
	}

	return;
}

void func_1092(var uParam0) // Position - 0x28754 Hash - 0xB6E53040 ^0xB4A5DF25
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1134(&(uParam0->f_3));
	return;
}

void func_1093(var uParam0) // Position - 0x28772 Hash - 0xEA76ACA4 ^0x1B09C151
{
	if (uParam0->f_3)
		return;

	func_1135(&(uParam0->f_3), *uParam0, uParam0->f_2);
	return;
}

void func_1094(int iParam0, int iParam1, int iParam2) // Position - 0x28793 Hash - 0x76104A96 ^0xBBB9FCC8
{
	int num;
	int num2;

	num2 = func_1136(iParam1);
	func_1137(iParam1, iParam2);

	if (num2 >= 0 && iParam0->f_26 > 0)
	{
		func_1138(&(iParam0->f_26), num2);
	
		if (func_1139(iParam0->f_26, &num))
			func_1140(num, num2);
	}

	return;
}

BOOL func_1095(var uParam0, int iParam1, int iParam2) // Position - 0x287DC Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

int func_1096() // Position - 0x28813 Hash - 0x4228A1C2 ^0xF4FC0436
{
	return Global_1109000.f_245;
}

BOOL func_1097() // Position - 0x28821 Hash - 0x4228A1C2 ^0x1EB92889
{
	return Global_1572887.f_13;
}

void func_1098(Player plParam0) // Position - 0x2882F Hash - 0xB00E785D ^0x2BE12BE6
{
	Player player;

	if (Global_1572887.f_13 != false || Global_1572887.f_12 != false)
		return;

	player = plParam0;

	if (Global_1058888.f_42287.f_1[player /*5*/] == 0)
		return;

	func_1099(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1058888.f_42287.f_1[player /*5*/] = 0;
	return;
}

void func_1099(Player plParam0) // Position - 0x2888A Hash - 0x803C3DC4 ^0x78AECBF
{
	if (Global_1058888.f_42287.f_1[plParam0 /*5*/].f_1 != 0)
	{
		Global_1058888.f_42287.f_1[plParam0 /*5*/].f_2 = 0;
		Global_1058888.f_42287.f_1[plParam0 /*5*/].f_1 = 0;
	}

	return;
}

int func_1100(int iParam0) // Position - 0x288CB Hash - 0xD14E7A6C ^0x65ACC420
{
	switch (iParam0)
	{
		case -1:
			return -1;
	
		case 0:
			return 0;
	
		case 1:
			return 50;
	
		case 2:
			return 100;
	
		case 3:
			return 200;
	
		case 4:
			return 350;
	
		case 5:
			return 550;
	
		case 6:
			return 800;
	
		case 7:
			return 1100;
	
		default:
		
	}

	return 0;
}

BOOL func_1101(int iParam0, var uParam1) // Position - 0x28941 Hash - 0x7D48C204 ^0x7D48C204
{
	return false;
}

BOOL func_1102() // Position - 0x2894A Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

int func_1103(int iParam0) // Position - 0x28953 Hash - 0xDB2BFD59 ^0x5419B7B7
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_199(false), joaat("UPGRADE_HEALTH_TANK_1"), false);
	
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_199(false), joaat("UPGRADE_STAMINA_TANK_1"), false);
	
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_199(false), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}

	return 0;
}

struct<4> func_1104(int iParam0, int iParam1) // Position - 0x289B5 Hash - 0xD5391B76 ^0x72F1918
{
	var unk;

	if (iParam0 >= 10)
		iParam1 = 0;

	TEXT_LABEL_ASSIGN_STRING(&unk, "TOAST_RPG_LEVEL_", 32);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 32);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 32);
	TEXT_LABEL_APPEND_INT(&unk, iParam1, 32);
	return unk;
}

const char* func_1105(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x289E7 Hash - 0x1D52DDA1 ^0x2CC95A61
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_1106(int iParam0) // Position - 0x289FB Hash - 0x5BCE232D ^0x9725CE0D
{
	switch (iParam0)
	{
		case 0:
			return "stamina" /*Stamina*/;
	
		case 1:
			return "health";
	
		case 2:
			return "dead_eye_level_up";
	
		default:
		
	}

	return "";
}

char* func_1107(int iParam0) // Position - 0x28A35 Hash - 0x5BCE232D ^0x1E251FFF
{
	switch (iParam0)
	{
		case 0:
			return "RPG_HEALTH";
	
		case 1:
			return "RPG_STAMINA";
	
		case 2:
			return "RPG_DEADEYE";
	
		default:
		
	}

	return "";
}

int func_1108(int iParam0) // Position - 0x28A6F Hash - 0x21FAF347 ^0x467E3BE5
{
	switch (iParam0)
	{
		case 0:
			return joaat("toast_rpg_level_health");
	
		case 1:
			return joaat("toast_rpg_level_stamina");
	
		case 2:
			return joaat("toast_rpg_level_deadeye");
	
		default:
		
	}

	return 0;
}

int func_1109(int iParam0) // Position - 0x28AAA Hash - 0x5163992 ^0x5163992
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 2;
	
		case 2:
			return 3;
	
		default:
		
	}

	return 0;
}

int func_1110(int iParam0) // Position - 0x28AD9 Hash - 0x21FAF347 ^0xA8C8F0DA
{
	switch (iParam0)
	{
		case 0:
			return joaat("stats_health");
	
		case 1:
			return joaat("stats_stamina");
	
		case 2:
			return joaat("stats_deadeye");
	
		default:
		
	}

	return 0;
}

void func_1111(Ped pedParam0, Any* panParam1) // Position - 0x28B14 Hash - 0x2B5AFE28 ^0xF454BB04
{
	var src;
	int i;
	Hash weaponHash;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	src = 29;
	MISC::COPY_SCRIPT_STRUCT(panParam1, &src, 30);

	for (i = 0; i < 29; i = i + 1)
	{
		weaponHash = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, i, true);
	
		if (func_665(weaponHash))
			panParam1->[i] = weaponHash;
		else
			panParam1->[i] = 0;
	}

	return;
}

void func_1112(BOOL bParam0) // Position - 0x28B79 Hash - 0x717F0B01 ^0x717F0B01
{
	int i;
	Hash hash;

	for (i = 17; i >= 0; i = i + -1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_161(hash, 0))
			func_848(hash, false, bParam0);
	
		Global_1946054.f_2657[i] = 0;
	}

	Global_1946054.f_2657.f_20 = 0;
	Global_1946054.f_2657.f_21 = 0;
	Global_1946054.f_2657.f_22 = 0;
	Global_1946054.f_2657.f_23 = 0;
	Global_1946054.f_2657.f_24 = 0;
	Global_1946054.f_2657.f_25 = 0;
	Global_1946054.f_2657.f_19 = 0;
	Global_1946054.f_2657.f_26.f_6 = 0;
	return;
}

void func_1113(int iParam0) // Position - 0x28C12 Hash - 0xA42FEE36 ^0x2BB3D8A2
{
	int i;
	int num;
	Hash hash;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;

	if (func_62() == -1)
	{
		func_1141(352481484);
	
		for (i = 0; i < Global_26796.f_19; i = i + 1)
		{
			Global_1946054.f_2657[i] = Global_26796[i];
		}
	
		Global_1946054.f_2657.f_20 = Global_26796.f_20;
		Global_1946054.f_2657.f_21 = Global_26796.f_21;
		Global_1946054.f_2657.f_22 = Global_26796.f_22;
		Global_1946054.f_2657.f_23 = Global_26796.f_23;
		Global_1946054.f_2657.f_24 = Global_26796.f_24;
		Global_1946054.f_2657.f_25 = Global_26796.f_25;
		Global_1946054.f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		for (i = 0; i < Global_36638.f_45.f_350.f_19; i = i + 1)
		{
			Global_1946054.f_2657[i] = Global_36638.f_45.f_350[i];
		}
	
		Global_1946054.f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946054.f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946054.f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946054.f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946054.f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946054.f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946054.f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_121(hash) != -999503751)
			func_846(&(Global_1946054.f_2657.f_26.f_26), hash, i);
	
		if (func_845(hash, false))
			func_131(hash, Global_1946054.f_1497.f_1[num /*3*/] == Global_1946054.f_2657[i]);
	}

	return;
}

void func_1114(Ped pedParam0, var uParam1) // Position - 0x28E02 Hash - 0xEFD384E2 ^0xD2D4DFA3
{
	int i;
	int weaponHash;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	for (i = 0; i < 29; i = i + 1)
	{
		if (uParam1->[i] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, uParam1->[i], 0, false))
				if (func_664(uParam1->[i]))
					WEAPON::GIVE_WEAPON_TO_PED(pedParam0, uParam1->[i], 0, false, false, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
		
			weaponHash = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, i, true);
		
			if (weaponHash != uParam1->[i])
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam1->[i], true, i, false, false);
		}
	}

	return;
}

BOOL func_1115(eStackSize essParam0) // Position - 0x28EAB Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (essParam0 == -15)
		return false;

	num = func_1031(essParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_1030(essParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_1029(essParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_964(essParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_963(essParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_1028(essParam0);

	if (num6 < 1 || num6 > func_965(num5, num4))
		return false;

	return true;
}

BOOL func_1116(Hash hParam0) // Position - 0x28F87 Hash - 0x1FFCC90D ^0x701F5DF1
{
	if (!func_161(hParam0, 0))
		return false;

	if (func_111(hParam0, -1066545920))
		return true;

	return false;
}

BOOL func_1117(Hash hParam0) // Position - 0x28FB1 Hash - 0x1FFCC90D ^0xAD3356F0
{
	if (!func_161(hParam0, 0))
		return false;

	if (func_111(hParam0, -284267618))
		return true;

	return false;
}

BOOL func_1118(Hash hParam0) // Position - 0x28FDB Hash - 0x1FFCC90D ^0xE43ED45D
{
	if (!func_161(hParam0, 0))
		return false;

	if (func_111(hParam0, 363491182))
		return true;

	return false;
}

BOOL func_1119(Hash hParam0) // Position - 0x29005 Hash - 0x1FFCC90D ^0xCB06CB57
{
	if (!func_161(hParam0, 0))
		return false;

	if (func_111(hParam0, 1406113494))
		return true;

	return false;
}

Hash func_1120(int iParam0, int iParam1) // Position - 0x2902F Hash - 0xD72223E5 ^0xD72223E5
{
	switch (iParam1)
	{
		case 0:
			return func_1142(iParam0);
	
		case 1:
			return func_1143(iParam0);
	
		case 2:
			return func_1144(iParam0);
	
		case 3:
			return func_1145(iParam0);
	}

	return 0;
}

Hash func_1121(int iParam0, int iParam1) // Position - 0x29088 Hash - 0x8B23AC7F ^0x8B23AC7F
{
	switch (iParam1)
	{
		case 0:
			return func_1146(iParam0);
	
		case 1:
			return func_1147(iParam0);
	
		case 2:
			return func_1148(iParam0);
	
		case 3:
			return func_1149(iParam0);
	
		case 4:
			return func_1150(iParam0);
	
		case 5:
			return func_1151(iParam0);
	
		case 6:
			return func_1152(iParam0);
	
		case 7:
			return func_1153(iParam0);
	
		case 8:
			return func_1154(iParam0);
	}

	return 0;
}

BOOL func_1122(Hash hParam0, eStackSize essParam1) // Position - 0x2913B Hash - 0xF5E57FDF ^0xF5E57FDF
{
	switch (essParam1)
	{
		case 1:
			switch (hParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
					return true;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (hParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
				case joaat("provision_fish_steelhead_trout_poor"):
				case joaat("provision_fish_steelhead_trout"):
				case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
					return true;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (hParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
				case joaat("provision_fish_largemouth_bass"):
				case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
				case joaat("provision_fish_largemouth_bass_poor"):
					return true;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (hParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
				case joaat("provision_fish_sockeye_salmon_poor"):
				case joaat("PROVISION_MATURE_VENISON"):
				case joaat("provision_fish_sockeye_salmon"):
				case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
					return true;
			
				default:
					break;
			}
			break;
	}

	return false;
}

BOOL func_1123(int iParam0, Hash hParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x2926C Hash - 0xBC47E790 ^0xD04171B4
{
	var unk;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_563(hParam1))
		return 0;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_1155(iParam0, *panParam2, &unk, false))
		return 0;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(iParam0, panParam2, iParam3, hParam4))
		return 0;

	return 1;
}

BOOL func_1124(int iParam0) // Position - 0x292E4 Hash - 0x67D822A ^0x67D822A
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1156(&Global_1835011[iParam0 /*74*/]);
	}

	return false;
}

Vector3 func_1125(int iParam0) // Position - 0x29314 Hash - 0x695A7658 ^0x6D3D4EDB
{
	switch (iParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
	
		case 34:
			return 2544.9822f, -1187.3444f, 52.3104f;
	}

	return Global_1835011[iParam0 /*74*/].f_18;
}

int func_1126(int iParam0) // Position - 0x29366 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_568(iParam0))
		return -1;

	return func_1157(iParam0);
}

BOOL func_1127(int iParam0) // Position - 0x29382 Hash - 0xE48228D0 ^0xE48228D0
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

BOOL func_1128(int iParam0) // Position - 0x293E2 Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_241(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_242(iParam0))
		return false;

	ped = func_85(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return true;

	return false;
}

void func_1129(var uParam0) // Position - 0x29436 Hash - 0x6843C143 ^0xA531F0D1
{
	int i;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;

	for (i = 0; i < 10; i = i + 1)
	{
		uParam0->f_10[i /*8*/] = 0;
		uParam0->f_10[i /*8*/].f_1 = 0;
		uParam0->f_10[i /*8*/].f_2 = 0;
		uParam0->f_10[i /*8*/].f_3 = 0;
		uParam0->f_10[i /*8*/].f_4 = 0;
		uParam0->f_10[i /*8*/].f_5 = 0;
		uParam0->f_10[i /*8*/].f_6 = 0;
		uParam0->f_10[i /*8*/].f_7 = 0;
	}

	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
	return;
}

int func_1130() // Position - 0x294DD Hash - 0x2EE4DDA7 ^0x2EE4DDA7
{
	if (func_1158())
		return 1;

	return 0;
}

void func_1131(int iParam0, int iParam1, int iParam2) // Position - 0x294F1 Hash - 0x22949E32 ^0xF7641F46
{
	if (iParam2 == 2)
		iParam2 = func_1130();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_15[iParam0 /*3*/] = iParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_15[iParam0 /*3*/] = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_1132(Ped pedParam0, int iParam1, float fParam2) // Position - 0x29542 Hash - 0x10CC1594 ^0xA098FFFF
{
	char* str;

	str = func_1082(iParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
		PED::_SET_PED_BLACKBOARD_FLOAT(pedParam0, func_1159(iParam1), fParam2, -1);

	return;
}

void func_1133(int iParam0, float fParam1, BOOL bParam2, int iParam3) // Position - 0x2956E Hash - 0x31C6C7F2 ^0x7DF2B018
{
	int gameTimer;

	if (iParam3 == 2)
		iParam3 = func_1130();

	gameTimer = MISC::GET_GAME_TIMER();
	func_1160(iParam0, fParam1, iParam3);

	if (bParam2)
		func_1161(iParam0, gameTimer, iParam3);

	return;
}

void func_1134(var uParam0) // Position - 0x295A1 Hash - 0x1F1EBE47 ^0xBF1144AB
{
	if (*uParam0 && PED::_IS_META_PED_ASSET_VALID(uParam0->f_1))
	{
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_1);
		uParam0->f_1 = -1;
	}

	*uParam0 = 0;
	return;
}

void func_1135(var uParam0, Any anParam1, int iParam2) // Position - 0x295CD Hash - 0x8EB42709 ^0xB749D0A2
{
	int metaPedType;

	metaPedType = func_1162(func_610());

	if (*uParam0)
		func_1134(uParam0);

	uParam0->f_1 = PED::_REQUEST_META_PED_COMPONENT(metaPedType, anParam1, 0, func_62() != -1, iParam2);
	*uParam0 = 1;
	return;
}

int func_1136(int iParam0) // Position - 0x29604 Hash - 0xF467740D ^0xD2664C5C
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_1137(int iParam0, int iParam1) // Position - 0x2961B Hash - 0x91F4E65D ^0xD2E825BC
{
	int num;

	num = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = num;
	return;
}

void func_1138(var uParam0, int iParam1) // Position - 0x29663 Hash - 0x344D10E ^0xFB8D9D9B
{
	*uParam0 = *uParam0 - 1;
	func_1092(&uParam0->f_1[iParam1 /*5*/]);
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
	return;
}

BOOL func_1139(int iParam0, var uParam1) // Position - 0x29694 Hash - 0xE231A73F ^0x924E070C
{
	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < Global_1946054.f_2657.f_19)
	{
		if (Global_1946054.f_2657.f_26.f_7[*uParam1] == iParam0)
			return true;
	
		*uParam1 = *uParam1 + 1;
	}

	return false;
}

void func_1140(int iParam0, int iParam1) // Position - 0x296D8 Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_1141(int iParam0) // Position - 0x296F1 Hash - 0x958E8FB2 ^0x9CA4541C
{
	int num;
	int num2;
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
	unk = { func_488(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, iParam0) };

	if (func_489(&unk, &num, &num2, false))
	{
		if (num2 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946054.f_2657.f_26.f_2 = 5;
					Global_1946054.f_2657.f_26.f_1 = 5;
					Global_1946054.f_2657.f_26 = 5;
					break;
			}
		}
	
		func_244(num);
	}

	return;
}

Hash func_1142(int iParam0) // Position - 0x297BB Hash - 0xC02FF737 ^0xE6E3E291
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_gator");
	
		case 1:
			return joaat("provision_reinforced_bandolier_bear");
	
		case 2:
			return joaat("provision_reinforced_bandolier_boar");
	
		case 3:
			return joaat("provision_reinforced_bandolier_buffalo");
	
		case 4:
			return joaat("provision_reinforced_bandolier_cougar");
	
		case 5:
			return joaat("provision_reinforced_bandolier_deer");
	
		case 6:
			return joaat("provision_reinforced_bandolier_panther");
	
		case 7:
			return joaat("provision_reinforced_bandolier_rabbit");
	
		case 8:
			return joaat("provision_reinforced_bandolier_snake");
	
		default:
		
	}

	return 0;
}

Hash func_1143(int iParam0) // Position - 0x2984A Hash - 0xC02FF737 ^0x9CC78C98
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_gunbelt_gator");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_bear");
	
		case 2:
			return joaat("provision_reinforced_gunbelt_boar");
	
		case 3:
			return joaat("provision_reinforced_gunbelt_buffalo");
	
		case 4:
			return joaat("provision_reinforced_gunbelt_cougar");
	
		case 5:
			return joaat("provision_reinforced_gunbelt_deer");
	
		case 6:
			return joaat("provision_reinforced_gunbelt_panther");
	
		case 7:
			return joaat("provision_reinforced_gunbelt_rabbit");
	
		case 8:
			return joaat("provision_reinforced_gunbelt_snake");
	
		default:
		
	}

	return 0;
}

Hash func_1144(int iParam0) // Position - 0x298D9 Hash - 0xC02FF737 ^0x26BFE76B
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_holster_gator");
	
		case 1:
			return joaat("provision_reinforced_holster_bear");
	
		case 2:
			return joaat("provision_reinforced_holster_boar");
	
		case 3:
			return joaat("provision_reinforced_holster_buffalo");
	
		case 4:
			return joaat("provision_reinforced_holster_cougar");
	
		case 5:
			return joaat("provision_reinforced_holster_deer");
	
		case 6:
			return joaat("provision_reinforced_holster_panther");
	
		case 7:
			return joaat("provision_reinforced_holster_rabbit");
	
		case 8:
			return joaat("provision_reinforced_holster_snake");
	
		default:
		
	}

	return 0;
}

Hash func_1145(int iParam0) // Position - 0x29968 Hash - 0xC02FF737 ^0xC89D76B1
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_offhand_gator");
	
		case 1:
			return joaat("provision_reinforced_offhand_bear");
	
		case 2:
			return joaat("provision_reinforced_offhand_boar");
	
		case 3:
			return joaat("provision_reinforced_offhand_buffalo");
	
		case 4:
			return joaat("provision_reinforced_offhand_cougar");
	
		case 5:
			return joaat("provision_reinforced_offhand_deer");
	
		case 6:
			return joaat("provision_reinforced_offhand_panther");
	
		case 7:
			return joaat("provision_reinforced_offhand_rabbit");
	
		case 8:
			return joaat("provision_reinforced_offhand_snake");
	
		default:
		
	}

	return 0;
}

Hash func_1146(int iParam0) // Position - 0x299F7 Hash - 0x51E02475 ^0x6FAD83C9
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_gator");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_gator");
	
		case 2:
			return joaat("provision_reinforced_holster_gator");
	
		case 3:
			return joaat("provision_reinforced_offhand_gator");
	
		default:
		
	}

	return 0;
}

Hash func_1147(int iParam0) // Position - 0x29A40 Hash - 0x51E02475 ^0x73BA00BD
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_bear");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_bear");
	
		case 2:
			return joaat("provision_reinforced_holster_bear");
	
		case 3:
			return joaat("provision_reinforced_offhand_bear");
	
		default:
		
	}

	return 0;
}

Hash func_1148(int iParam0) // Position - 0x29A89 Hash - 0x51E02475 ^0xD39CAF97
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_boar");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_boar");
	
		case 2:
			return joaat("provision_reinforced_holster_boar");
	
		case 3:
			return joaat("provision_reinforced_offhand_boar");
	
		default:
		
	}

	return 0;
}

Hash func_1149(int iParam0) // Position - 0x29AD2 Hash - 0x51E02475 ^0xB8F3F001
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_buffalo");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_buffalo");
	
		case 2:
			return joaat("provision_reinforced_holster_buffalo");
	
		case 3:
			return joaat("provision_reinforced_offhand_buffalo");
	
		default:
		
	}

	return 0;
}

Hash func_1150(int iParam0) // Position - 0x29B1B Hash - 0x51E02475 ^0xCED8E5FA
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_cougar");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_cougar");
	
		case 2:
			return joaat("provision_reinforced_holster_cougar");
	
		case 3:
			return joaat("provision_reinforced_offhand_cougar");
	
		default:
		
	}

	return 0;
}

Hash func_1151(int iParam0) // Position - 0x29B64 Hash - 0x51E02475 ^0x25F7B61
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_deer");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_deer");
	
		case 2:
			return joaat("provision_reinforced_holster_deer");
	
		case 3:
			return joaat("provision_reinforced_offhand_deer");
	
		default:
		
	}

	return 0;
}

Hash func_1152(int iParam0) // Position - 0x29BAD Hash - 0x51E02475 ^0xE0DEBCEF
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_panther");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_panther");
	
		case 2:
			return joaat("provision_reinforced_holster_panther");
	
		case 3:
			return joaat("provision_reinforced_offhand_panther");
	
		default:
		
	}

	return 0;
}

Hash func_1153(int iParam0) // Position - 0x29BF6 Hash - 0x51E02475 ^0x50FB5131
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_rabbit");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_rabbit");
	
		case 2:
			return joaat("provision_reinforced_holster_rabbit");
	
		case 3:
			return joaat("provision_reinforced_offhand_rabbit");
	
		default:
		
	}

	return 0;
}

Hash func_1154(int iParam0) // Position - 0x29C3F Hash - 0x51E02475 ^0x8656D204
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_snake");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_snake");
	
		case 2:
			return joaat("provision_reinforced_holster_snake");
	
		case 3:
			return joaat("provision_reinforced_offhand_snake");
	
		default:
		
	}

	return 0;
}

BOOL func_1155(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, Any* panParam5, BOOL bParam6) // Position - 0x29C88 Hash - 0x9301D070 ^0x96DC8844
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam0, &uParam1, panParam5, !bParam6))
		return false;

	return true;
}

BOOL func_1156(int iParam0) // Position - 0x29CB4 Hash - 0xDFF4679C ^0x26F038D0
{
	if (func_1163(&(iParam0->f_29), 62))
	{
		switch (func_1164())
		{
			case 1:
				if (!func_1163(&(iParam0->f_29), 6))
					return false;
				break;
		
			case 2:
				if (!func_1163(&(iParam0->f_29), 8))
					return false;
				break;
		
			case 4:
				if (!func_1163(&(iParam0->f_29), 16))
					return false;
				break;
		
			case 8:
				if (!func_1163(&(iParam0->f_29), 32))
					if (func_1163(&(iParam0->f_29), 2))
						if (func_1029(func_895()) < 5)
							return false;
					else
						return false;
				break;
		}
	}

	return true;
}

int func_1157(int iParam0) // Position - 0x29D5E Hash - 0xB1EC3C9 ^0x256D499C
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_3;

	return 0;
}

BOOL func_1158() // Position - 0x29D7D Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1954819.f_866;
}

char* func_1159(int iParam0) // Position - 0x29D8C Hash - 0x5BCE232D ^0x9633243F
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

void func_1160(int iParam0, float fParam1, int iParam2) // Position - 0x29DC6 Hash - 0x22949E32 ^0x7BF032F1
{
	if (iParam2 == 2)
		iParam2 = func_1130();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/] = fParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/] = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_1161(int iParam0, int iParam1, int iParam2) // Position - 0x29E17 Hash - 0x8F2CCCF2 ^0x17FB84D
{
	if (iParam2 == 2)
		iParam2 = func_1130();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_15[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_15[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

int func_1162(int iParam0) // Position - 0x29E6C Hash - 0xB4860741 ^0xB4860741
{
	if (func_62() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
		
			case -449205311:
				return 0;
		
			case 1160113249:
				return 0;
		
			default:
			
		}
	
		return 0;
	}

	switch (iParam0)
	{
		case joaat("MPC_PLAYER_TYPE_MP_FEMALE"):
			return 1;
	
		case joaat("MPC_PLAYER_TYPE_MP_MALE"):
			return 0;
	
		default:
		
	}

	return 0;
}

BOOL func_1163(var uParam0, int iParam1) // Position - 0x29EC3 Hash - 0x68CD914D ^0x68CD914D
{
	BOOL flag;

	flag = *uParam0 && iParam1;

	if (!(flag == false))
		return true;

	return false;
}

int func_1164() // Position - 0x29EE3 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899516;
}

