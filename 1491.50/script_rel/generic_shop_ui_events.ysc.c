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
	Hash hScriptParam_0 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x17A73136 ^0xB56020B2
{
	Any any;
	Any any2;
	int num;
	int eventData;
	BOOL flag;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
		func_1();

	while (true)
	{
		flag = !func_2(2048) && !func_2(64) || !func_2(128);
	
		while (UIEVENTS::EVENTS_UI_IS_PENDING(hScriptParam_0) && flag)
		{
			if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(hScriptParam_0, &eventData))
			{
				if (DATABINDING::DATABINDING_IS_ENTRY_VALID(eventData.f_3))
				{
				}
			
				switch (eventData)
				{
					case -2075827635:
						if (eventData.f_2 == joaat("GENERIC_SHOP_UI_NEXT_SCENE"))
							func_3(256);
						else if (eventData.f_2 != joaat("GENERIC_SHOP_UI_PREV_SCENE"))
							if (eventData.f_2 != joaat("GENERIC_SHOP_UI_NEXT_PAGE"))
								if (eventData.f_2 == 516329682)
									func_3(512);
							else
								func_3(256);
						else
							func_3(512);
					
						func_2(32);
						func_3(2048);
						break;
				
					case -1740156697:
						func_7(&(eventData.f_3), false);
						func_8(eventData.f_1, false);
						num = func_9(false);
					
						if (num != 336033112 || num != 0)
						{
							any = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(eventData.f_3, func_10());
							any2 = any;
							func_11(any2, false);
						}
					
						if (eventData.f_2 != joaat("GENERIC_SHOP_UI_NEXT_PAGE"))
							func_3(2);
						else
							func_3(64);
					
						func_3(2048);
						break;
				
					case -1203660660:
						if (eventData.f_2 != joaat("GENERIC_SHOP_UI_SECONDARY_SELECT"))
						{
							func_12(eventData.f_1);
							num = func_13();
							func_14(&(eventData.f_3));
						
							if (num != 336033112 || num != 0)
							{
								any = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(eventData.f_3, func_10());
								any2 = any;
								func_15(any2);
							}
						}
					
						func_16(eventData.f_2);
					
						if (eventData.f_2 == joaat("GENERIC_SHOP_UI_EXIT"))
							func_3(1024);
					
						func_3(16);
						func_3(2048);
						break;
				
					case -1151569080:
						if (eventData.f_2 == joaat("GENERIC_SHOP_UI_PALETTE_FOCUS"))
						{
							func_4(eventData.f_1);
							func_3(4);
							func_3(2);
							func_3(2048);
						}
						else
						{
							func_5(eventData.f_1);
							func_6(eventData.f_2);
						
							if (DATABINDING::DATABINDING_IS_ENTRY_VALID(eventData.f_3))
								func_7(&(eventData.f_3), false);
						
							func_3(32768);
							func_3(2048);
						}
						break;
				
					case -722926211:
					case 703281244:
						func_3(64);
						func_3(2048);
						break;
				
					case -120002582:
						func_17(eventData.f_2);
						func_3(8192);
						func_3(2048);
						break;
				
					case -114265581:
						func_17(eventData.f_2);
						func_3(8192);
						func_3(2048);
						break;
				
					case 368072021:
						func_18(eventData.f_2);
						func_19(eventData.f_1);
						func_3(16384);
						func_3(2048);
						break;
				
					case 922460030:
						if (eventData.f_2 == joaat("GENERIC_SHOP_UI_ENTRY"))
						{
							Global_1914319.f_16855.f_3.f_3 = 1;
						}
						else if (eventData.f_2 == joaat("GENERIC_SHOP_UI_BYPASS"))
						{
							if (Global_1914319.f_16855.f_3.f_3)
							{
								Global_1914319.f_16855.f_3.f_3 = 0;
								Global_1914319.f_16855.f_3.f_2 = 0;
							}
							else
							{
								Global_1914319.f_16855.f_3.f_2 = 1;
							}
						}
						break;
				
					case 1617053448:
						if (eventData.f_2 == -575010389)
						{
							func_4(eventData.f_1);
							func_3(8);
							func_3(2);
							func_3(2048);
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

void func_1() // Position - 0x366 Hash - 0x94986482 ^0xC23B0B53
{
	func_20();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_2(int iParam0) // Position - 0x376 Hash - 0x69CFCCB3 ^0xD2D90638
{
	return func_21(Global_1914319.f_16855.f_3, iParam0);
}

void func_3(int iParam0) // Position - 0x38D Hash - 0x3FCE17F7 ^0x76BFA4AB
{
	func_22(&(Global_1914319.f_16855.f_3), iParam0);
	return;
}

void func_4(var uParam0) // Position - 0x3A4 Hash - 0x12A97D4D ^0xF37B2785
{
	Global_1914319.f_16855.f_3.f_17 = uParam0;
	return;
}

void func_5(var uParam0) // Position - 0x3B9 Hash - 0x12A97D4D ^0x94AE3C79
{
	Global_1914319.f_16855.f_3.f_21 = uParam0;
	return;
}

void func_6(var uParam0) // Position - 0x3CE Hash - 0x12A97D4D ^0xBE266603
{
	Global_1914319.f_16855.f_3.f_22 = uParam0;
	return;
}

void func_7(var uParam0, BOOL bParam1) // Position - 0x3E3 Hash - 0x65E58972 ^0x178AB20E
{
	if (bParam1)
	{
		Global_1914319.f_16855.f_3.f_20 = Global_1914319.f_16855.f_3.f_16;
		Global_1914319.f_16855.f_3.f_16 = *uParam0;
	}
	else
	{
		Global_1914319.f_16855.f_3.f_13 = Global_1914319.f_16855.f_3.f_10;
		Global_1914319.f_16855.f_3.f_10 = *uParam0;
	}

	return;
}

void func_8(var uParam0, BOOL bParam1) // Position - 0x43B Hash - 0x952C8AC6 ^0x443E85EF
{
	if (bParam1)
	{
		Global_1914319.f_16855.f_3.f_18 = Global_1914319.f_16855.f_3.f_14;
		Global_1914319.f_16855.f_3.f_14 = uParam0;
	}
	else
	{
		Global_1914319.f_16855.f_3.f_11 = Global_1914319.f_16855.f_3.f_8;
		Global_1914319.f_16855.f_3.f_8 = uParam0;
	}

	return;
}

int func_9(BOOL bParam0) // Position - 0x491 Hash - 0x6D23D874 ^0xBBD3180C
{
	Any any;

	any = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(func_23(bParam0), func_24());
	return any;
}

char* func_10() // Position - 0x4AB Hash - 0xBAF7C719 ^0xBAF7C719
{
	return "uiItemEnum";
}

void func_11(Any anParam0, BOOL bParam1) // Position - 0x4B5 Hash - 0x952C8AC6 ^0xD0FCBF20
{
	if (bParam1)
	{
		Global_1914319.f_16855.f_3.f_19 = Global_1914319.f_16855.f_3.f_15;
		Global_1914319.f_16855.f_3.f_15 = anParam0;
	}
	else
	{
		Global_1914319.f_16855.f_3.f_12 = Global_1914319.f_16855.f_3.f_9;
		Global_1914319.f_16855.f_3.f_9 = anParam0;
	}

	return;
}

void func_12(var uParam0) // Position - 0x50B Hash - 0x12A97D4D ^0x13F4820E
{
	Global_1914319.f_16855.f_3.f_5 = uParam0;
	return;
}

int func_13() // Position - 0x520 Hash - 0x45A95CE6 ^0x85CCF631
{
	Any any;

	any = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(func_25(), func_24());
	return any;
}

void func_14(var uParam0) // Position - 0x538 Hash - 0xE2205B0B ^0x43DCE3FB
{
	Global_1914319.f_16855.f_3.f_7 = *uParam0;
	return;
}

void func_15(Any anParam0) // Position - 0x54E Hash - 0x12A97D4D ^0x796BF916
{
	Global_1914319.f_16855.f_3.f_6 = anParam0;
	return;
}

void func_16(var uParam0) // Position - 0x563 Hash - 0x12A97D4D ^0xB42B8E56
{
	Global_1914319.f_16855.f_3.f_1 = uParam0;
	return;
}

void func_17(var uParam0) // Position - 0x578 Hash - 0x12A97D4D ^0xB9E29F97
{
	Global_1914319.f_16855.f_3.f_23 = uParam0;
	return;
}

BOOL func_18(var uParam0) // Position - 0x58D Hash - 0xB4C74A83 ^0x67C6B998
{
	BOOL flag;

	flag = Global_1914319.f_16855.f_3.f_26 != uParam0;
	Global_1914319.f_16855.f_3.f_26 = uParam0;
	return flag;
}

BOOL func_19(var uParam0) // Position - 0x5B4 Hash - 0xB4C74A83 ^0x93B7F117
{
	BOOL flag;

	flag = Global_1914319.f_16855.f_3.f_25 != uParam0;
	Global_1914319.f_16855.f_3.f_25 = uParam0;
	return flag;
}

void func_20() // Position - 0x5DB Hash - 0x2100AD75 ^0xA2645704
{
	Global_1914319.f_16855.f_3 = 0;
	return;
}

BOOL func_21(int iParam0, int iParam1) // Position - 0x5ED Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_22(int iParam0, int iParam1) // Position - 0x5FC Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

Any func_23(BOOL bParam0) // Position - 0x60D Hash - 0x4C4502F7 ^0xA662B0E6
{
	if (bParam0)
		return Global_1914319.f_16855.f_3.f_16;

	return Global_1914319.f_16855.f_3.f_10;
}

char* func_24() // Position - 0x633 Hash - 0xBC5D637 ^0xBC5D637
{
	return "uiItemType";
}

Any func_25() // Position - 0x63E Hash - 0x8AFFA48 ^0x7167FD1D
{
	return Global_1914319.f_16855.f_3.f_7;
}

