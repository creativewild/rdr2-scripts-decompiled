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
	Hash hScriptParam_0 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x1F7432A8 ^0x75EA6F87
{
	Any any;
	Any any2;
	int num;
	int eventData;
	BOOL flag;
	BOOL flag2;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
		func_1();

	flag = func_2() == -1;

	while (flag || !func_3(false, false))
	{
		flag2 = !func_4(1024) && !func_4(32) || !func_4(64);
	
		while (UIEVENTS::EVENTS_UI_IS_PENDING(hScriptParam_0) && flag2)
		{
			if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(hScriptParam_0, &eventData))
			{
				if (DATABINDING::DATABINDING_IS_ENTRY_VALID(eventData.f_3))
				{
				}
			
				switch (eventData)
				{
					case -2075827635:
						if (eventData.f_2 != joaat("GENERIC_SHOP_UI_NEXT_SCENE"))
							if (eventData.f_2 != joaat("GENERIC_SHOP_UI_PREV_SCENE"))
								if (eventData.f_2 == joaat("GENERIC_SHOP_UI_NEXT_PAGE"))
									func_5(128);
								else if (eventData.f_2 == 516329682)
									func_5(256);
							else
								func_5(256);
						else
							func_5(128);
					
						func_4(16);
						func_5(1024);
						break;
				
					case -1740156697:
						func_9(&(eventData.f_3));
						func_10(eventData.f_1);
						num = func_11();
					
						if (num == -627085098 || num == 1751567119 || num == -419167294 || num == -841939068)
						{
							any = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(eventData.f_3, func_12());
							any2 = any;
							func_13(any2);
						}
						else if (num != 336033112 || num != 0)
						{
							any = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(eventData.f_3, func_14());
							any2 = any;
							func_13(any2);
						}
					
						if (eventData.f_2 != joaat("GENERIC_SHOP_UI_NEXT_PAGE"))
							func_5(2);
						else
							func_5(32);
					
						func_5(1024);
						break;
				
					case -1203660660:
						if (eventData.f_2 == joaat("GENERIC_SHOP_UI_SECONDARY_SELECT"))
						{
						}
						else
						{
							func_19(eventData.f_1);
							num = func_20();
							func_21(&(eventData.f_3));
						
							if (num != 336033112 || num != 0)
							{
								any = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(eventData.f_3, func_14());
								any2 = any;
								func_22(any2);
							}
						}
					
						func_23(eventData.f_2);
					
						if (eventData.f_2 == joaat("GENERIC_SHOP_UI_EXIT"))
							func_5(512);
					
						func_5(8);
						func_5(1024);
						break;
				
					case -1151569080:
						if (eventData.f_2 == joaat("GENERIC_SHOP_UI_PALETTE_FOCUS"))
						{
							func_6(eventData.f_1);
							func_5(4);
							func_5(32768);
							func_5(2);
							func_5(1024);
						}
						else
						{
							func_7(eventData.f_1);
							func_8(eventData.f_2);
						
							if (DATABINDING::DATABINDING_IS_ENTRY_VALID(eventData.f_3))
								func_9(&(eventData.f_3));
						
							func_5(16384);
							func_5(1024);
						}
						break;
				
					case -722926211:
					case 703281244:
						func_5(64);
						func_5(1024);
						break;
				
					case -632467210:
						func_15(&(eventData.f_3));
						func_16(eventData.f_1);
						num = func_17();
					
						if (num != 336033112 || num != 0)
						{
							any = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(eventData.f_3, func_14());
							any2 = any;
							func_18(any2);
						}
					
						func_5(32768);
						func_5(1024);
						break;
				
					case -120002582:
						func_24(eventData.f_2);
						func_5(4096);
						func_5(1024);
						break;
				
					case -114265581:
						func_24(eventData.f_2);
						func_5(4096);
						func_5(1024);
						break;
				
					case 368072021:
						func_25(eventData.f_2);
						func_26(eventData.f_1);
						func_5(8192);
						func_5(1024);
						break;
				
					case 922460030:
						if (eventData.f_2 == joaat("GENERIC_SHOP_UI_ENTRY"))
						{
							Global_1915656.f_20241.f_3.f_3 = 1;
						}
						else if (eventData.f_2 != joaat("GENERIC_SHOP_UI_BYPASS"))
						{
						}
						else if (Global_1915656.f_20241.f_3.f_3)
						{
							Global_1915656.f_20241.f_3.f_3 = 0;
							Global_1915656.f_20241.f_3.f_2 = 0;
						}
						else
						{
							Global_1915656.f_20241.f_3.f_2 = 1;
						}
						break;
				
					default:
						break;
				}
			
				UIEVENTS::EVENTS_UI_POP_MESSAGE(hScriptParam_0);
			}
		}
	
		BUILTIN::WAIT(0);
	}

	func_1();
	return;
}

void func_1() // Position - 0x3FE Hash - 0x94986482 ^0xC23B0B53
{
	func_27();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

int func_2() // Position - 0x40E Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_3(BOOL bParam0, BOOL bParam1) // Position - 0x41C Hash - 0x8CDC02F2 ^0xDB4E8541
{
	int i;

	if (Global_1572887.f_13)
		return false;

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
			return true;
		}
	}

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
		{
			case 0:
				return true;
		
			case 1:
				return true;
		
			case 2:
				if (!bParam0)
					return true;
				break;
		
			case 3:
				return true;
		
			case 4:
				return true;
		
			default:
				return true;
		}
	}

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i) == 1976253964)
			return true;
	}

	return false;
}

BOOL func_4(int iParam0) // Position - 0x4FC Hash - 0x69CFCCB3 ^0xD2D90638
{
	return func_28(Global_1915656.f_20241.f_3, iParam0);
}

void func_5(int iParam0) // Position - 0x513 Hash - 0x3FCE17F7 ^0x76BFA4AB
{
	func_29(&(Global_1915656.f_20241.f_3), iParam0);
	return;
}

void func_6(var uParam0) // Position - 0x52A Hash - 0x12A97D4D ^0x5A2A6B46
{
	Global_1915656.f_20241.f_3.f_19 = uParam0;
	return;
}

void func_7(var uParam0) // Position - 0x53F Hash - 0x12A97D4D ^0xF37B2785
{
	Global_1915656.f_20241.f_3.f_17 = uParam0;
	return;
}

void func_8(var uParam0) // Position - 0x554 Hash - 0x12A97D4D ^0x77A0FA92
{
	Global_1915656.f_20241.f_3.f_18 = uParam0;
	return;
}

void func_9(var uParam0) // Position - 0x569 Hash - 0xE2205B0B ^0x9647215C
{
	Global_1915656.f_20241.f_3.f_13 = *uParam0;
	return;
}

void func_10(var uParam0) // Position - 0x57F Hash - 0x12A97D4D ^0xD09CC9BB
{
	Global_1915656.f_20241.f_3.f_11 = uParam0;
	return;
}

int func_11() // Position - 0x594 Hash - 0x45A95CE6 ^0x85CCF631
{
	Any any;

	any = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(func_30(), func_31());
	return any;
}

char* func_12() // Position - 0x5AC Hash - 0xBAF7C719 ^0xBAF7C719
{
	return "uiItemID";
}

void func_13(Any anParam0) // Position - 0x5B6 Hash - 0x12A97D4D ^0xE59DE82E
{
	Global_1915656.f_20241.f_3.f_12 = anParam0;
	return;
}

char* func_14() // Position - 0x5CB Hash - 0xC67A2056 ^0xC67A2056
{
	return "uiItemEnum";
}

void func_15(var uParam0) // Position - 0x5D6 Hash - 0xE2205B0B ^0x80FE04FD
{
	Global_1915656.f_20241.f_3.f_16 = *uParam0;
	return;
}

void func_16(var uParam0) // Position - 0x5EC Hash - 0x12A97D4D ^0xFC9B5534
{
	Global_1915656.f_20241.f_3.f_14 = uParam0;
	return;
}

int func_17() // Position - 0x601 Hash - 0x45A95CE6 ^0x85CCF631
{
	Any any;

	any = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(func_32(), func_31());
	return any;
}

void func_18(Any anParam0) // Position - 0x619 Hash - 0x12A97D4D ^0x28790D19
{
	Global_1915656.f_20241.f_3.f_15 = anParam0;
	return;
}

void func_19(var uParam0) // Position - 0x62E Hash - 0x12A97D4D ^0x85DD7205
{
	Global_1915656.f_20241.f_3.f_8 = uParam0;
	return;
}

int func_20() // Position - 0x643 Hash - 0x45A95CE6 ^0x85CCF631
{
	Any any;

	any = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(func_33(), func_31());
	return any;
}

void func_21(var uParam0) // Position - 0x65B Hash - 0xE2205B0B ^0xA572868E
{
	Global_1915656.f_20241.f_3.f_10 = *uParam0;
	return;
}

void func_22(Any anParam0) // Position - 0x671 Hash - 0x12A97D4D ^0x5C3CBF7F
{
	Global_1915656.f_20241.f_3.f_9 = anParam0;
	return;
}

void func_23(var uParam0) // Position - 0x686 Hash - 0x12A97D4D ^0xB42B8E56
{
	Global_1915656.f_20241.f_3.f_1 = uParam0;
	return;
}

void func_24(var uParam0) // Position - 0x69B Hash - 0x12A97D4D ^0x57867BC7
{
	Global_1915656.f_20241.f_3.f_36 = uParam0;
	return;
}

BOOL func_25(var uParam0) // Position - 0x6B0 Hash - 0xB4C74A83 ^0x4B8B1D43
{
	BOOL flag;

	flag = Global_1915656.f_20241.f_3.f_39 != uParam0;
	Global_1915656.f_20241.f_3.f_39 = uParam0;
	return flag;
}

BOOL func_26(var uParam0) // Position - 0x6D7 Hash - 0xB4C74A83 ^0x4EA863AA
{
	BOOL flag;

	flag = Global_1915656.f_20241.f_3.f_38 != uParam0;
	Global_1915656.f_20241.f_3.f_38 = uParam0;
	return flag;
}

void func_27() // Position - 0x6FE Hash - 0x2100AD75 ^0xA2645704
{
	Global_1915656.f_20241.f_3 = 0;
	return;
}

BOOL func_28(int iParam0, int iParam1) // Position - 0x710 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_29(int iParam0, int iParam1) // Position - 0x71F Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

Any func_30() // Position - 0x730 Hash - 0x8AFFA48 ^0xE2F70263
{
	return Global_1915656.f_20241.f_3.f_13;
}

char* func_31() // Position - 0x743 Hash - 0x42EFC710 ^0x42EFC710
{
	return "uiItemType";
}

Any func_32() // Position - 0x74E Hash - 0x8AFFA48 ^0x4D47338B
{
	return Global_1915656.f_20241.f_3.f_16;
}

Any func_33() // Position - 0x761 Hash - 0x8AFFA48 ^0x82C1874B
{
	return Global_1915656.f_20241.f_3.f_10;
}

