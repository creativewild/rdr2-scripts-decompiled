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
#endregion

void main() // Position - 0x0 Hash - 0x223173A9 ^0x3EAC24FF
{
	BOOL flag;

	fLocal_14 = 1f;
	fLocal_15 = 1f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	flag = false;

	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED() && !flag)
	{
		func_2();
		func_3();
		BUILTIN::WAIT(0);
	}

	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x50 Hash - 0xEF186CC3 ^0xF69AE512
{
	var unk;

	Global_1940252.f_1556.f_4168.f_10 = unk;
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_2() // Position - 0x6A Hash - 0x73EDCFFF ^0xF42DC35F
{
	if (func_4())
	{
		Global_1940252.f_1556.f_4168.f_2088 = 1;
	}
	else if (Global_1940252.f_1556.f_4168.f_2088)
	{
		func_5(Global_1940252.f_1556.f_4168.f_10);
		Global_1940252.f_1556.f_4168.f_2088 = 0;
	}

	return;
}

void func_3() // Position - 0xB8 Hash - 0x8668F3FD ^0xF2F8D7C5
{
	int eventData;
	Hash hash;
	int num;
	var unk4;
	var unk41;
	Hash hash2;

	hash = joaat("Abilities");
	unk4.f_7 = 1;
	unk4.f_13 = -1;
	unk4.f_15 = -1;
	unk4.f_16 = -1;
	unk4.f_17 = -1;
	unk4.f_18 = -1;
	unk4.f_19 = -1;
	unk4.f_35 = -1;

	while (UIEVENTS::EVENTS_UI_IS_PENDING(hash))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(hash, &eventData))
		{
			switch (eventData)
			{
				case -2075827635:
					switch (eventData.f_2)
					{
						case joaat("ABILITY_CARD_UI_EVENT_MENU_LOAD_EVENT"):
							func_6(func_7(), true);
						
							if (!UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(joaat("Abilities"), joaat("proceed")))
								UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(joaat("Abilities"), joaat("exit"));
							break;
					
						case joaat("ABILITY_CARD_UI_EVENT_MENU_LOAD_LOCAL_PLAYER_EVENT"):
							func_6(PLAYER::PLAYER_ID(), true);
						
							if (!UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(joaat("Abilities"), joaat("proceed")))
								UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(joaat("Abilities"), joaat("exit"));
							break;
					}
				
					UIEVENTS::EVENTS_UI_POP_MESSAGE(hash);
					break;
			
				case -1740156697:
					switch (eventData.f_2)
					{
						case -1895040713:
							func_8(eventData.f_3);
							break;
					
						case -1559642356:
							Global_1940252.f_1556.f_4168.f_10 = eventData.f_3;
							func_5(eventData.f_3);
							break;
					
						case -273357828:
							func_9(eventData.f_3);
							break;
					}
				
					UIEVENTS::EVENTS_UI_POP_MESSAGE(hash);
					break;
			
				case -1203660660:
					switch (eventData.f_2)
					{
						case -1636950965:
							func_11(eventData.f_3, &unk4, 2, -1);
							func_16(unk4, func_15());
							break;
					
						case -191804968:
							func_11(eventData.f_3, &unk4, 2, -1);
							hash2 = func_21(func_20(&unk4) + 1);
						
							if (unk4.f_23 && func_22(hash2, &(unk41.f_2)))
							{
								unk41.f_1 = 0;
							}
							else if (unk4.f_24 && func_23(hash2, &(unk41.f_2)))
							{
								unk41.f_1 = func_24(hash2, joaat("currency_cash"), unk41.f_2, true, false);
							}
							else if (unk4.f_25)
							{
								unk41.f_2 = -489628648;
								unk41.f_1 = func_18(hash2, unk41.f_2);
							}
							else if (unk4.f_26)
							{
								unk41.f_2 = -570078785;
								unk41.f_1 = func_18(hash2, unk41.f_2);
							}
							else
							{
								break;
							}
						
							if (unk41.f_1 < 0)
								break;
						
							unk41 = unk4;
							func_19(func_15(), 2, unk41);
							break;
					
						case 85169314:
							func_11(eventData.f_3, &unk4, 2, -1);
						
							if (unk4.f_29)
								unk41.f_2 = unk4.f_31;
							else if (unk4.f_30)
								unk41.f_2 = unk4.f_31;
							else if (unk4.f_32)
								unk41.f_2 = -915411861;
							else if (unk4.f_33)
								unk41.f_2 = -570078785;
							else
								break;
						
							if (!func_17(unk41.f_2))
							{
								unk41.f_1 = func_18(unk4.f_2, unk41.f_2);
							
								if (unk41.f_1 <= 0)
									break;
							}
						
							unk41 = unk4;
							func_19(func_15(), 1, unk41);
							break;
					
						case 473608166:
							num = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(eventData.f_3, "ability_card_loadout_index");
							func_13(num);
							break;
					
						case 536653807:
							func_11(eventData.f_3, &unk4, 2, -1);
							func_12(&unk4);
							break;
					
						case 928621134:
							num = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(eventData.f_3, "ability_card_loadout_index");
							func_14(num);
							break;
					}
				
					UIEVENTS::EVENTS_UI_POP_MESSAGE(hash);
					break;
			
				case -722926211:
					switch (eventData.f_2)
					{
						case -27281482:
							func_10(-1);
							break;
					}
				
					UIEVENTS::EVENTS_UI_POP_MESSAGE(hash);
					break;
			
				case 703281244:
					switch (eventData.f_2)
					{
						case -27281482:
							func_10(1);
							break;
					}
				
					UIEVENTS::EVENTS_UI_POP_MESSAGE(hash);
					break;
			
				default:
					UIEVENTS::EVENTS_UI_POP_MESSAGE(hash);
					break;
			}
		}
	}

	return;
}

BOOL func_4() // Position - 0x444 Hash - 0xD667DFE0 ^0xD3024B31
{
	if (Global_1940085.f_105 != -1)
		return true;

	if (Global_1940085.f_105.f_2 != -1)
		return true;

	return HUD::BUSYSPINNER_IS_ON();
}

void func_5(Any anParam0) // Position - 0x46E Hash - 0xC415F42D ^0x8AD4A407
{
	int num;

	num.f_7 = 1;
	num.f_13 = -1;
	num.f_15 = -1;
	num.f_16 = -1;
	num.f_17 = -1;
	num.f_18 = -1;
	num.f_19 = -1;
	num.f_35 = -1;
	func_11(anParam0, &num, 2, -1);
	func_26(&Global_1940252.f_1556.f_4168.f_37[func_25(num, 1) /*44*/], &num);
	func_27(&(Global_1940252.f_1556.f_4168.f_1936), num);
	func_28(num);
	func_29(num);
	return;
}

void func_6(Player plParam0, BOOL bParam1) // Position - 0x4F3 Hash - 0x80F39B4D ^0x9DE40D9F
{
	if (bParam1)
		func_30(0);

	if (PLAYER::PLAYER_ID() == plParam0)
		func_31(0);
	else
		func_31(1);

	func_32(0, plParam0);
	func_32(1, plParam0);
	func_32(2, plParam0);
	func_32(3, plParam0);
	return;
}

Player func_7() // Position - 0x537 Hash - 0xC4D46652 ^0x56D4FACB
{
	Player playerFromGamerHandle;
	Player player;

	playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1940252.f_1556.f_8));

	if (!func_33())
		return PLAYER::PLAYER_ID();

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerFromGamerHandle))
		return PLAYER::PLAYER_ID();

	player = playerFromGamerHandle;

	if (player < 0)
		return PLAYER::PLAYER_ID();

	if (player >= 32)
		return PLAYER::PLAYER_ID();

	return playerFromGamerHandle;
}

void func_8(Any anParam0) // Position - 0x58F Hash - 0xC415F42D ^0x8AD4A407
{
	int num;
	int num2;

	num.f_7 = 1;
	num.f_13 = -1;
	num.f_15 = -1;
	num.f_16 = -1;
	num.f_17 = -1;
	num.f_18 = -1;
	num.f_19 = -1;
	num.f_35 = -1;
	num2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(anParam0, "ability_card_loadout_index");
	func_30(num2);
	func_11(anParam0, &num, 2, -1);
	func_34(&(Global_1940252.f_1556.f_4168.f_1985), &num, num2);
	func_28(num);
	func_29(num);
	return;
}

void func_9(Any anParam0) // Position - 0x608 Hash - 0x627B6EA4 ^0xDCAEC289
{
	int num;
	var unk;

	num = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(anParam0, "ability_card_upgrade_tier_index");
	unk.f_7 = 1;
	unk.f_13 = -1;
	unk.f_15 = -1;
	unk.f_16 = -1;
	unk.f_17 = -1;
	unk.f_18 = -1;
	unk.f_19 = -1;
	unk.f_35 = -1;
	func_11(anParam0, &unk, 2, num);
	func_35(&Global_1940252.f_1556.f_4168.f_1797[num /*46*/], unk);
	func_36(&(Global_1940252.f_1556.f_4168.f_2034), unk);
	func_37(num);
	func_29(unk);
	return;
}

int func_10(int iParam0) // Position - 0x698 Hash - 0x825E5A47 ^0xB2575152
{
	int num;
	int num2;
	int num3;

	num = Global_1940252.f_1556.f_4168.f_2085;

	if (num == joaat("deadeye"))
		return 0;

	num2 = func_38(Global_1940252.f_1556.f_4168.f_2085, 1);
	num3 = num2 + iParam0;

	if (num3 < 2)
		num3 = 4;
	else if (num3 > 4)
		num3 = 2;

	num = func_39(num3, 1);
	func_40(num, 0);
	return 1;
}

void func_11(Any anParam0, var uParam1, int iParam2, int iParam3) // Position - 0x6FE Hash - 0xA124B0D4 ^0xA124B0D4
{
	func_41(anParam0, uParam1);
	func_42(*uParam1, uParam1, iParam2, iParam3);
	return;
}

void func_12(var uParam0) // Position - 0x71C Hash - 0x7521A7F6 ^0xEBB5B53F
{
	func_43(*uParam0);

	if (UISTATEMACHINE::UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(joaat("Abilities")))
		UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(joaat("Abilities"), -1316999016);

	return;
}

void func_13(int iParam0) // Position - 0x749 Hash - 0x3B103126 ^0xBE62AF11
{
	int num;

	func_30(iParam0);

	if (func_44(iParam0))
		num = joaat("deadeye");
	else if (!func_45(iParam0, true))
		num = func_47(func_46(iParam0, true));
	else
		num = joaat("Combat");

	func_40(num, func_46(iParam0, true));

	if (UISTATEMACHINE::UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(joaat("Abilities")))
		UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(joaat("Abilities"), -2109508723);

	return;
}

int func_14(int iParam0) // Position - 0x7B7 Hash - 0x9AF81FD7 ^0x9AF81FD7
{
	int num;

	num = func_46(iParam0, true);
	return func_19(iParam0, 3, num);
}

int func_15() // Position - 0x7D3 Hash - 0x7A15C96F ^0x7A15C96F
{
	return Global_1940252.f_1556.f_4168.f_2086;
}

int func_16(var uParam0, int iParam1) // Position - 0x7E8 Hash - 0xC2FBCA79 ^0xC2FBCA79
{
	var unk;

	unk = uParam0;
	return func_19(iParam1, 0, unk);
}

BOOL func_17(int iParam0) // Position - 0x7FF Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case -1551258934:
		case -1103707655:
		case 205718222:
		case 866168015:
			return true;
	
		default:
		
	}

	return false;
}

int func_18(Hash hParam0, Hash hParam1) // Position - 0x82C Hash - 0x20FAF4E8 ^0x20FAF4E8
{
	return func_48(hParam0, hParam1, true, false, true, 0);
}

int func_19(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x840 Hash - 0x1A6EA907 ^0x9B69BBEE
{
	int num;

	if (func_49(iParam0))
		return 0;

	if (iParam1 < 0 || iParam1 >= 4)
		return 0;

	num = -1;
	num.f_1 = -1;
	num.f_7 = -1;
	num.f_7.f_1 = -1;
	num = iParam1;
	num.f_2 = { uParam2 };
	num.f_1 = 0;
	Global_1149432.f_4621.f_52[iParam0 /*17*/] = { num };
	return 1;
}

int func_20(var uParam0) // Position - 0x8AE Hash - 0x521A9FDE ^0x181BA54
{
	int num;
	int i;
	var guid;
	Hash hash;

	if (!func_50(*uParam0))
		return -1;

	if (!func_51(uParam0->f_2, 0))
		return -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(uParam0->f_3)))
		return 0;

	for (i = 0; i < 3; i = i + 1)
	{
		hash = func_21(i);
		guid = { func_52(hash, uParam0->f_3, 1635590003, true) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			break;
	
		num = i;
	}

	return num;
}

Hash func_21(int iParam0) // Position - 0x929 Hash - 0xB2C0E981 ^0xB2C0E981
{
	int num;

	num = iParam0;
	return func_53(num);
}

BOOL func_22(Hash hParam0, var uParam1) // Position - 0x93B Hash - 0x4D07B4AD ^0x4D07B4AD
{
	*uParam1 = func_54(hParam0, true);
	return *uParam1 != 0;
}

BOOL func_23(Hash hParam0, var uParam1) // Position - 0x952 Hash - 0x4D07B4AD ^0x4D07B4AD
{
	*uParam1 = func_55(hParam0, true);
	return *uParam1 != 0;
}

int func_24(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x969 Hash - 0x89D1598B ^0xCCC7E0FA
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (func_56(hParam0) || func_57(hParam0, 1077060302))
		return func_59(func_58(hParam0, false), iParam1, hParam2, bParam4, true);

	if (!func_60(hParam0, hParam2, &unk, &num, bParam3, bParam4))
	{
		!bParam4;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == iParam1)
			return unk[i /*2*/].f_1;
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam4;
	return 0;
}

int func_25(int iParam0, int iParam1) // Position - 0xA04 Hash - 0xF70C7FF6 ^0xF70C7FF6
{
	switch (iParam0)
	{
		case joaat("net_player_ability__strange_medicine"):
			return 18;
	
		case joaat("net_player_ability__focus_fire"):
			return 5;
	
		case joaat("net_player_ability__necessity_breeds"):
			return 10;
	
		case joaat("net_player_ability__the_gift_of_focus"):
			return 20;
	
		case joaat("NET_PLAYER_ABILITY__RIDE_LIKE_THE_WIND"):
			return 33;
	
		case joaat("NET_PLAYER_ABILITY__FOOL_ME_ONCE"):
			return 32;
	
		case joaat("NET_PLAYER_ABILITY__GUNSLINGERS_CHOICE"):
			return 34;
	
		case joaat("net_player_ability__come_back_stronger"):
			return 3;
	
		case joaat("net_player_ability__winning_streak"):
			return 24;
	
		case joaat("net_player_ability__kick_in_the_butt"):
			return 26;
	
		case joaat("net_player_ability__peak_condition"):
			return 14;
	
		case joaat("net_player_ability__the_short_game"):
			return 21;
	
		case joaat("NET_PLAYER_ABILITY__OVERRIDE_REVENGE_SLOW_TIME"):
			return 25;
	
		case joaat("NET_PLAYER_ABILITY__IRON_LUNG"):
			return 30;
	
		case joaat("net_player_ability__the_unblinking_eye"):
			return 22;
	
		case 0:
			return 0;
	
		case joaat("NET_PLAYER_ABILITY__FRIENDS_FOR_LIFE"):
			return 31;
	
		case joaat("net_player_ability__never_without_one"):
			return 11;
	
		case joaat("net_player_ability__of_single_purpose"):
			return 12;
	
		case joaat("net_player_ability__a_moment_to_recuperate"):
			return 1;
	
		case joaat("net_player_ability__slippery_bastard"):
			return 16;
	
		case joaat("net_player_ability__paint_it_black"):
			return 13;
	
		case joaat("net_player_ability__take_the_pain_away"):
			return 19;
	
		case joaat("net_player_ability__eye_for_an_eye"):
			return 4;
	
		case joaat("net_player_ability__cold_blooded"):
			return 2;
	
		case joaat("net_player_ability__hunker_down"):
			return 8;
	
		case joaat("net_player_ability__quite_an_inspiration"):
			return 15;
	
		case joaat("net_player_ability__to_fight_another_day"):
			return 23;
	
		case joaat("net_player_ability__horseman"):
			return 7;
	
		case joaat("net_player_ability__live_for_the_fight"):
			return 27;
	
		case joaat("net_player_ability__hangman"):
			return 6;
	
		case joaat("net_player_ability__strength_in_numbers"):
			return 29;
	
		case joaat("net_player_ability__slow_and_steady"):
			return 17;
	
		case joaat("net_player_ability__landons_patience"):
			return 9;
	
		case joaat("net_player_ability__sharpshooter"):
			return 28;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_26(var uParam0, var uParam1) // Position - 0xB9E Hash - 0x44E7AD70 ^0xDE52D6E6
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, uParam1->f_11);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_3, uParam1->f_12);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_4, uParam1->f_9);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_5, uParam1->f_10);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_41, func_61(uParam1->f_1, uParam1->f_13));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_6, *uParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_7, func_62(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_34, uParam1->f_22);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_12, uParam1->f_20);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_13, !uParam1->f_20);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_35, func_63(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_14, !uParam1->f_21);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_15, uParam1->f_33);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_16, uParam1->f_32);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_17, uParam1->f_34);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_18, func_64(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_19, uParam1->f_26);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_20, uParam1->f_25);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_21, uParam1->f_27);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_22, !uParam1->f_14 && uParam1->f_20);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_23, !uParam1->f_14);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_24, !uParam1->f_14 && func_65(4));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_25, func_66(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_26, func_67(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_27, func_68(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_28, func_69(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_29, uParam1->f_34 && func_69(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_30, uParam1->f_27 && func_69(uParam1));

	if (uParam1->f_29)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_31, func_70(0));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_32, func_71(0));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_31, func_70(func_72(uParam1->f_17)));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_32, func_71(func_73(uParam1->f_17)));
	}

	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_33, uParam1->f_18);

	if (!uParam1->f_21)
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_43, func_74(uParam1->f_16));

	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_36, uParam1->f_13);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_38, uParam1->f_15);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_40, func_75(uParam1->f_13));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_10, uParam1->f_25);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, !uParam1->f_21);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_8, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_9, false);
	return;
}

void func_27(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37) // Position - 0xDFC Hash - 0xD61BC3B3 ^0xB683DA85
{
	int num;

	func_26(uParam0, &uParam1);
	num = func_75(uParam1.f_13);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_44, MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOCUS_XP_INFO", uParam1.f_15, num));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45, func_76(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_47, func_77(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_46, func_78(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_48, func_79(&uParam1));
	return;
}

void func_28(int iParam0) // Position - 0xE64 Hash - 0x646928F0 ^0x646928F0
{
	func_80(iParam0);
	return;
}

void func_29(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36) // Position - 0xE72 Hash - 0x71F022B9 ^0x9B4DA693
{
	int num;

	if (!func_81())
		return;

	num = func_82();

	if (func_83())
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_1556.f_4168.f_5, true);
	else if (num == 1)
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_1556.f_4168.f_5, true);
	else
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_1556.f_4168.f_5, false);

	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_1556.f_4168.f_4, func_84(uParam0));
	return;
}

void func_30(int iParam0) // Position - 0xEEA Hash - 0x49584173 ^0x49584173
{
	func_85(iParam0);
	func_86(iParam0);
	return;
}

void func_31(int iParam0) // Position - 0xEFE Hash - 0x44A1728F ^0x44A1728F
{
	Global_1940252.f_1556.f_4168.f_2083 = iParam0;
	return;
}

void func_32(int iParam0, Player plParam1) // Position - 0xF15 Hash - 0xD129B15F ^0xD129B15F
{
	if (func_87())
		func_88(iParam0, true);
	else
		func_89(plParam1, iParam0, true);

	return;
}

BOOL func_33() // Position - 0xF37 Hash - 0x694260F8 ^0x2325A459
{
	return NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Global_1940252.f_1556.f_8));
}

void func_34(var uParam0, var uParam1, int iParam2) // Position - 0xF4C Hash - 0x7E535261 ^0x7E535261
{
	func_90(iParam2, uParam1);
	func_26(uParam0, uParam1);
	return;
}

void func_35(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37) // Position - 0xF64 Hash - 0x7C32FC1E ^0x7C32FC1E
{
	func_26(uParam0, &uParam1);
	return;
}

void func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37) // Position - 0xF74 Hash - 0x2E372673 ^0xCCDCF1B1
{
	func_26(uParam0, &uParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45, func_76(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_47, func_77(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_46, func_78(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_48, func_79(&uParam1));
	return;
}

void func_37(int iParam0) // Position - 0xFBC Hash - 0x646928F0 ^0x646928F0
{
	func_91(iParam0);
	return;
}

int func_38(int iParam0, int iParam1) // Position - 0xFCA Hash - 0x5582EB07 ^0x5582EB07
{
	switch (iParam0)
	{
		case joaat("Defense"):
			return 4;
	
		case 0:
			return 0;
	
		case joaat("deadeye"):
			return 1;
	
		case joaat("Recovery"):
			return 3;
	
		case joaat("Combat"):
			return 2;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_39(int iParam0, int iParam1) // Position - 0x101D Hash - 0x330C2D3C ^0xC9296B9F
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return joaat("deadeye");
	
		case 2:
			return joaat("Combat");
	
		case 3:
			return joaat("Recovery");
	
		case 4:
			return joaat("Defense");
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

void func_40(int iParam0, int iParam1) // Position - 0x107E Hash - 0x34EE2DC4 ^0x37ED4699
{
	int i;
	int num;

	if (!func_92(iParam0))
	{
		func_93(iParam1);
		return;
	}

	if (iParam0 == joaat("deadeye"))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_1556.f_4168.f_13, false);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_1556.f_4168.f_13, true);
	
		for (i = 0; i < 5; i = i + 1)
		{
			num = func_39(i, 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_1556.f_4168.f_15[i /*4*/].f_1, iParam0 == num);
		}
	}

	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940252.f_1556.f_4168.f_3, func_94(iParam0));
	func_95(iParam0);
	func_93(iParam1);
	return;
}

void func_41(Any anParam0, var uParam1) // Position - 0x1120 Hash - 0x805DA386 ^0x397F5D27
{
	*uParam1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(anParam0, "ability_card_ability_hash");
	uParam1->f_13 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(anParam0, "ability_card_tier");
	return;
}

BOOL func_42(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0x1141 Hash - 0x76126869 ^0x76126869
{
	if (!func_96())
		return false;

	return func_97(iParam0, uParam1, iParam2, iParam3);
}

void func_43(int iParam0) // Position - 0x1161 Hash - 0xC415F42D ^0x8AD4A407
{
	var unk;
	var unk38;
	int i;

	unk.f_7 = 1;
	unk.f_13 = -1;
	unk.f_15 = -1;
	unk.f_16 = -1;
	unk.f_17 = -1;
	unk.f_18 = -1;
	unk.f_19 = -1;
	unk.f_35 = -1;
	unk38.f_7 = 1;
	unk38.f_13 = -1;
	unk38.f_15 = -1;
	unk38.f_16 = -1;
	unk38.f_17 = -1;
	unk38.f_18 = -1;
	unk38.f_19 = -1;
	unk38.f_35 = -1;

	for (i = 0; i < 3; i = i + 1)
	{
		unk = { unk38 };
		func_42(iParam0, &unk, 2, i);
		func_35(&Global_1940252.f_1556.f_4168.f_1797[i /*46*/], unk);
	
		if (func_98(i))
			func_36(&(Global_1940252.f_1556.f_4168.f_2034), unk);
	}

	return;
}

BOOL func_44(int iParam0) // Position - 0x1230 Hash - 0xAA902A68 ^0xAA902A68
{
	if (!func_99(iParam0))
		return false;

	return iParam0 == 0;
}

BOOL func_45(int iParam0, BOOL bParam1) // Position - 0x124A Hash - 0xC0789AC ^0xC0789AC
{
	Hash hash;
	var unk;
	int num;
	BOOL flag;

	hash = func_100(iParam0);
	unk = { func_101(bParam1) };
	num = func_102(&unk, hash, bParam1);
	flag = num == 0;
	return flag;
}

int func_46(int iParam0, BOOL bParam1) // Position - 0x1278 Hash - 0xC822CED1 ^0xE69969C9
{
	Hash hash;
	var unk;
	Hash hash2;

	if (func_83())
		return Global_1149432.f_4804.f_34[iParam0 /*3*/];

	hash = func_100(iParam0);
	unk = { func_101(bParam1) };
	hash2 = func_103(unk, hash, 0, bParam1);

	if (!func_104(hash2))
		return 0;

	return func_105(hash2);
}

int func_47(int iParam0) // Position - 0x12CC Hash - 0xD3A441E7 ^0x40864EB0
{
	if (!func_50(iParam0))
		return 0;

	return Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_1;
}

// Unhandled jump detected. Output should be considered invalid
int func_48(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x12F6 Hash - 0x8D867191 ^0xF02772A4
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (bParam4 && hParam1 == -915411861 && func_106(hParam0, 59806960))
		hParam1 = 59806960;

	if (func_56(hParam0) || func_57(hParam0, 1077060302))
		return func_107(func_58(hParam0, false), hParam1, bParam3, true);

	if (!func_60(hParam0, hParam1, &unk, &num, bParam2, bParam3))
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

BOOL func_49(int iParam0) // Position - 0x13E6 Hash - 0xCC1041A8 ^0xB4DE0DA5
{
	if (!func_99(iParam0))
		return true;

	if (Global_1149432.f_4621.f_52[iParam0 /*17*/].f_1 != -1)
		return true;

	if (func_83())
		return true;

	return false;
}

BOOL func_50(int iParam0) // Position - 0x141F Hash - 0xDFD4BC90 ^0xDFD4BC90
{
	int num;

	num = func_25(iParam0, 1);

	if (num < 1 || num >= 35)
		return false;

	return true;
}

BOOL func_51(Hash hParam0, int iParam1) // Position - 0x1447 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

struct<4> func_52(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x1461 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_51(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_108(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

int func_53(int iParam0) // Position - 0x1492 Hash - 0x21FAF347 ^0x839ED50D
{
	switch (iParam0)
	{
		case 0:
			return -1814149473;
	
		case 1:
			return -2038682661;
	
		case 2:
			return 1942029925;
	
		default:
		
	}

	return 0;
}

Hash func_54(Hash hParam0, BOOL bParam1) // Position - 0x14CD Hash - 0x95AB4A0B ^0x95AB4A0B
{
	int i;
	int num;
	var unk;
	Hash hash;
	int j;

	unk = 15;

	for (i = 0; i < 1; i = i + 1)
	{
		hash = func_109(i);
	
		if (!func_60(hParam0, hash, &unk, &num, true, false))
		{
		}
		else
		{
			for (j = 0; j < num; j = j + 1)
			{
				if (func_110(unk[j /*2*/]))
				{
					if (!bParam1 || func_111(unk[j /*2*/], false, true, true) > 0)
						return hash;
				
					break;
				}
			
				if (unk[j /*2*/] == 0)
					break;
			}
		}
	}

	return 0;
}

Hash func_55(Hash hParam0, BOOL bParam1) // Position - 0x155E Hash - 0x1F4AAFE3 ^0x1F4AAFE3
{
	Hash hash;
	int num;
	int num2;
	var unk;
	Hash hash2;
	int i;
	Hash hash3;
	BOOL flag;
	int num3;
	int j;

	!func_51(hParam0, 0);
	hash = 0;
	num = 0;
	num2 = 0;
	unk = 15;

	for (i = 0; i < 3; i = i + 1)
	{
		hash2 = func_112(i);
	
		if (hash2 == 0)
		{
		}
		else if (!func_60(hParam0, hash2, &unk, &num2, true, false))
		{
		}
		else
		{
			flag = false;
			num3 = 0;
		
			for (j = 0; j < num2; j = j + 1)
			{
				hash3 = unk[j /*2*/];
			
				if (hash3 == 0)
					break;
			
				if (func_113(hash3))
					if (!bParam1 || func_111(hash3, false, true, true) > 0)
						flag = true;
					else if (hash3 == joaat("currency_cash"))
						num3 = unk[j /*2*/].f_1;
			
				if (hash3 == joaat("currency_cash"))
					num3 = unk[j /*2*/].f_1;
			}
		
			if (flag)
			{
				if (hash == 0)
				{
					hash = hash2;
					num = num3;
				}
				else if (num3 < num)
				{
					hash = hash2;
					num = num3;
				}
			}
		}
	}

	return hash;
}

BOOL func_56(Hash hParam0) // Position - 0x1646 Hash - 0x672E565C ^0xD531C7FC
{
	if (func_57(hParam0, 75135761))
		return true;

	return false;
}

BOOL func_57(Hash hParam0, Hash hParam1) // Position - 0x1661 Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_51(hParam0, 0))
		return func_115(func_114(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

Hash func_58(Hash hParam0, BOOL bParam1) // Position - 0x16A2 Hash - 0x6C21B9A ^0x615CAFBF
{
	var outData;

	if (!func_51(hParam0, 0))
		return func_116(func_114(hParam0), bParam1);

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData) || outData.f_5 == 0)
		return 0;

	if (bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(outData.f_5))
		return 0;

	return outData.f_5;
}

int func_59(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x16FA Hash - 0x1EBCD943 ^0x1EBCD943
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_117(hParam0, hParam2, &unk, &num, bParam3, bParam4))
	{
		!bParam3;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == iParam1)
			return unk[i /*2*/].f_1;
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam3;
	return 0;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_60(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x1766 Hash - 0x18E9762 ^0x852B384E
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_51(hParam0, 0))
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
		func_118(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

Hash func_61(var uParam0, var uParam1) // Position - 0x17F6 Hash - 0x72E3C1C6 ^0x72E3C1C6
{
	var unk;

	unk = uParam1;
	return func_119(uParam0, unk);
}

BOOL func_62(var uParam0) // Position - 0x180A Hash - 0xF84B2DCE ^0x4567DAA3
{
	return uParam0->f_1 == joaat("deadeye");
}

BOOL func_63(var uParam0) // Position - 0x181C Hash - 0x10297B5 ^0x1536CC75
{
	return uParam0->f_20 && !uParam0->f_22;
}

char* func_64(var uParam0) // Position - 0x1832 Hash - 0xF767B96F ^0x8D4A8065
{
	if (uParam0->f_29)
		return "NET_PLAYER_ABILITY_PROMPT_CLAIM_WITH_REWARD";
	else if (uParam0->f_30)
		return "IB_REDEEM";

	if (uParam0->f_33)
		return "IB_BUY_NOW";

	return "IB_BUY";
}

BOOL func_65(int iParam0) // Position - 0x1867 Hash - 0x84832E80 ^0x84832E80
{
	int num;

	num = func_120();

	switch (num)
	{
		case 0:
			return true;
	
		case 1:
			return iParam0 == 0;
	
		case 2:
			return iParam0 == 1;
	
		case 3:
			return iParam0 == 2;
	
		case 4:
			return iParam0 == 5;
	
		default:
		
	}

	return false;
}

char* func_66(var uParam0) // Position - 0x18BC Hash - 0x92E8EDF ^0x4CF932C3
{
	if (uParam0->f_23)
		return "NET_PLAYER_ABILITY_PROMPT_UPGRADE_WITH_VOUCHER";
	else if (uParam0->f_24)
		return "NET_PLAYER_ABILITY_PROMPT_UPGRADE_WITH_OFFER";
	else if (uParam0->f_26)
		return "IB_UPGRADE_NOW";

	return "IB_UPGRADE";
}

BOOL func_67(var uParam0) // Position - 0x18F6 Hash - 0x277547C9 ^0xBA8D6D33
{
	return uParam0->f_32 || uParam0->f_25 || uParam0->f_24 || uParam0->f_23;
}

BOOL func_68(var uParam0) // Position - 0x1920 Hash - 0x264A0D1 ^0x61011CBA
{
	return !func_67(uParam0) && uParam0->f_33 || uParam0->f_26;
}

BOOL func_69(var uParam0) // Position - 0x1942 Hash - 0xF7E70168 ^0xCBBEB8AF
{
	if (!uParam0->f_20 && uParam0->f_29)
		if (uParam0->f_17 < 0)
			return false;
		else if (func_121(uParam0->f_17))
			return true;

	if (func_67(uParam0))
		if (uParam0->f_17 < 0)
			return false;
		else if (func_121(uParam0->f_17))
			return true;
	else if (func_68(uParam0))
		if (uParam0->f_18 < 0)
			return false;
		else if (func_122(uParam0->f_18))
			return true;

	return false;
}

char* func_70(int iParam0) // Position - 0x19CB Hash - 0xCCEDF737 ^0x2075CB05
{
	return MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(iParam0), 0);
}

char* func_71(int iParam0) // Position - 0x19DE Hash - 0xDA455C71 ^0x5807856D
{
	if (iParam0 == 0)
		return "00";

	return func_70(iParam0);
}

int func_72(int iParam0) // Position - 0x19F9 Hash - 0x15FBACEE ^0x15FBACEE
{
	return iParam0 / 100;
}

int func_73(int iParam0) // Position - 0x1A06 Hash - 0xC56E4E97 ^0xC56E4E97
{
	return iParam0 % 100;
}

char* func_74(int iParam0) // Position - 0x1A13 Hash - 0x55DC299C ^0xB9A151DE
{
	var buffer;

	if (iParam0 <= -1)
		return "";

	MISC::_INT_TO_STRING(iParam0, "%i", &buffer);
	return func_123(buffer);
}

int func_75(int iParam0) // Position - 0x1A3C Hash - 0xB2C0E981 ^0xB2C0E981
{
	var unk;

	unk = iParam0;
	return func_124(unk);
}

char* func_76(var uParam0) // Position - 0x1A4E Hash - 0xDC97243 ^0xBC9330E7
{
	if (uParam0->f_20)
	{
		if (uParam0->f_23)
			return "NET_PLAYER_ABILITY_PRICE_TYPE_UPGRADE_VOUCHER";
		else if (uParam0->f_24)
			return "NET_PLAYER_ABILITY_PRICE_TYPE_UPGRADE_OFFER";
	
		return "IB_UPGRADE";
	}

	if (uParam0->f_29)
		return "SHOP_REWARD_PRICE";
	else if (uParam0->f_30)
		return "SHOP_OFFER_PRICE";

	return "IB_PRICE";
}

char* func_77(var uParam0) // Position - 0x1AA6 Hash - 0x8D18AE5A ^0xCB17B483
{
	if (uParam0->f_20 && uParam0->f_23)
		return "IB_FREE";

	if (uParam0->f_29)
		return "IB_FREE";
	else if (uParam0->f_20 && !uParam0->f_27)
		return "NET_PLAYER_ABILITY_ADDITIONAL_XP_REQUIRED";

	return "";
}

BOOL func_78(var uParam0) // Position - 0x1AF2 Hash - 0xDB34AFF8 ^0xAC9571C5
{
	if (uParam0->f_29)
		return true;
	else if (!uParam0->f_27 && uParam0->f_20)
		return true;

	return false;
}

BOOL func_79(var uParam0) // Position - 0x1B1E Hash - 0x10297B5 ^0x9B508DCA
{
	return uParam0->f_21 && !uParam0->f_14;
}

void func_80(int iParam0) // Position - 0x1B34 Hash - 0x44A1728F ^0x44A1728F
{
	Global_1940252.f_1556.f_4168.f_2084 = iParam0;
	return;
}

BOOL func_81() // Position - 0x1B4B Hash - 0x11DC3931 ^0x4C2DF3FB
{
	return UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("Abilities"));
}

int func_82() // Position - 0x1B5C Hash - 0x7A15C96F ^0x7A15C96F
{
	return Global_1940252.f_1556.f_4168.f_2083;
}

BOOL func_83() // Position - 0x1B71 Hash - 0x571E21D9 ^0x571E21D9
{
	return func_125(0) && func_125(5);
}

const char* func_84(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36) // Position - 0x1B88 Hash - 0x163CC9E8 ^0x87DAA5D7
{
	const char* str;
	Hash uiappCurrentActivityByHash;

	str = func_127(func_126(), joaat("COLOR_PURE_WHITE"));

	if (func_83())
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_OVERRIDEN");
	else if (func_82() == 1)
		return MISC::VAR_STRING(10, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_REMOTE_PLAYER_MODE", str);

	if (!func_81())
		return "INVALID";

	uiappCurrentActivityByHash = UIAPPS::_GET_UIAPP_CURRENT_ACTIVITY_BY_HASH(joaat("Abilities"));

	if (uiappCurrentActivityByHash == joaat("abilities_menu_loadout"))
		return func_128(func_15());
	else if (uiappCurrentActivityByHash == joaat("abilities_menu_selection"))
		return func_129(&uParam0);
	else if (uiappCurrentActivityByHash == 756463805)
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_UPGRADE");

	return "INVALID";
}

void func_85(int iParam0) // Position - 0x1C2E Hash - 0x44A1728F ^0x44A1728F
{
	Global_1940252.f_1556.f_4168.f_2086 = iParam0;
	return;
}

void func_86(int iParam0) // Position - 0x1C45 Hash - 0x71693656 ^0x1A5C421A
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940252.f_1556.f_4168.f_12, iParam0);
	return;
}

BOOL func_87() // Position - 0x1C5F Hash - 0xA064F862 ^0xA064F862
{
	return func_82() == 0;
}

void func_88(int iParam0, BOOL bParam1) // Position - 0x1C6D Hash - 0xE8FD9A64 ^0x13831B53
{
	var unk;
	int num;

	unk.f_7 = 1;
	unk.f_13 = -1;
	unk.f_15 = -1;
	unk.f_16 = -1;
	unk.f_17 = -1;
	unk.f_18 = -1;
	unk.f_19 = -1;
	unk.f_35 = -1;
	num = func_46(iParam0, true);

	if (!func_42(num, &unk, 0, -1))
		func_130(&unk);

	func_131(iParam0, &Global_1940252.f_1556.f_4168.f_1579[iParam0 /*54*/], unk);

	if (bParam1 && func_132(iParam0))
		func_34(&(Global_1940252.f_1556.f_4168.f_1985), &unk, iParam0);

	return;
}

void func_89(Player plParam0, int iParam1, BOOL bParam2) // Position - 0x1D06 Hash - 0xCAA34924 ^0xD33993FF
{
	Player player;
	int num;
	var unk;

	player = plParam0;
	num = Global_1155150[player /*30*/].f_5[iParam1 /*3*/];
	unk.f_7 = 1;
	unk.f_13 = -1;
	unk.f_15 = -1;
	unk.f_16 = -1;
	unk.f_17 = -1;
	unk.f_18 = -1;
	unk.f_19 = -1;
	unk.f_35 = -1;
	unk.f_13 = Global_1155150[player /*30*/].f_5[iParam1 /*3*/].f_1;

	if (!func_42(num, &unk, 1, -1))
		func_130(&unk);

	func_133(iParam1, &Global_1940252.f_1556.f_4168.f_1579[iParam1 /*54*/], unk, Global_1155150[player /*30*/].f_5[iParam1 /*3*/].f_2);

	if (bParam2 && func_132(iParam1))
		func_34(&(Global_1940252.f_1556.f_4168.f_1985), &unk, iParam1);

	return;
}

void func_90(int iParam0, var uParam1) // Position - 0x1DCE Hash - 0x31A46272 ^0x5A777D16
{
	if (!func_50(*uParam1))
	{
		uParam1->f_11 = func_134(iParam0);
		uParam1->f_12 = func_135(iParam0);
	}

	return;
}

void func_91(int iParam0) // Position - 0x1DF5 Hash - 0x44A1728F ^0x44A1728F
{
	Global_1940252.f_1556.f_4168.f_2087 = iParam0;
	return;
}

BOOL func_92(int iParam0) // Position - 0x1E0C Hash - 0xB4708716 ^0xB4708716
{
	if (iParam0 == Global_1940252.f_1556.f_4168.f_2085)
		return false;

	Global_1940252.f_1556.f_4168.f_2085 = iParam0;
	return true;
}

void func_93(int iParam0) // Position - 0x1E3A Hash - 0xA478865 ^0xA478865
{
	if (iParam0 == 0)
		func_136(0);
	else
		func_136(func_137(iParam0));

	return;
}

const char* func_94(int iParam0) // Position - 0x1E5A Hash - 0x8700F264 ^0xDF40427D
{
	switch (iParam0)
	{
		case joaat("Defense"):
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_CATEGORY_TITLE_DEFENSE");
	
		case joaat("deadeye"):
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_CATEGORY_TITLE_DEAD_EYE");
	
		case joaat("Recovery"):
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_CATEGORY_TITLE_RECOVERY");
	
		case joaat("Combat"):
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_CATEGORY_TITLE_COMBAT");
	
		default:
		
	}

	return "NULL";
}

void func_95(int iParam0) // Position - 0x1EB6 Hash - 0x48B764AD ^0xED8AD6CF
{
	int num;
	int num2;
	int i;

	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1940252.f_1556.f_4168.f_36);
	num.f_7 = 1;
	num.f_13 = -1;
	num.f_15 = -1;
	num.f_16 = -1;
	num.f_17 = -1;
	num.f_18 = -1;
	num.f_19 = -1;
	num.f_35 = -1;

	for (i = 0; i < 35; i = i + 1)
	{
		num2 = Global_1149432.f_11.f_1562.f_1611[i];
	
		if (!func_42(num2, &num, 2, -1))
		{
		}
		else if (!func_138(num))
		{
		}
		else if (num.f_36)
		{
		}
		else if (!func_50(num))
		{
		}
		else if (iParam0 != num.f_1)
		{
		}
		else
		{
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1940252.f_1556.f_4168.f_36, i, "ability_card", Global_1940252.f_1556.f_4168.f_37[func_25(num2, 1) /*44*/]);
		}
	}

	return;
}

BOOL func_96() // Position - 0x1F95 Hash - 0x75308892 ^0x8FF4889D
{
	return DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1149432.f_8);
}

BOOL func_97(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0x1FA7 Hash - 0xDA71A48F ^0xDA71A48F
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Hash hash;
	Hash hash2;
	Player playerFromGamerHandle;
	var unk;

	if (iParam2 == 2)
		flag = func_82() == 1;
	else if (iParam2 == 1)
		flag = true;
	else
		flag = false;

	if (iParam3 != -1)
		flag2 = true;

	if (!func_50(iParam0))
	{
		func_130(uParam1);
		return 0;
	}

	*uParam1 = Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/];
	uParam1->f_2 = Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_2;
	uParam1->f_1 = Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_1;
	uParam1->f_8 = Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_3;
	uParam1->f_16 = Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_4;
	uParam1->f_35 = Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_7;
	uParam1->f_36 = Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_8;

	if (!func_51(uParam1->f_2, 0))
	{
		func_130(uParam1);
		return 0;
	}

	flag3 = true;

	if (!func_50(*uParam1))
	{
		func_130(uParam1);
		return 0;
	}

	if (!flag)
	{
		if (func_83())
		{
			uParam1->f_19 = func_139(*uParam1);
			uParam1->f_20 = 1;
			uParam1->f_21 = 1;
			uParam1->f_9 = Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_5;
			uParam1->f_10 = Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_6;
		
			if (func_99(uParam1->f_19))
				uParam1->f_13 = Global_1149432.f_4804.f_34[uParam1->f_19 /*3*/].f_1;
			else
				uParam1->f_13 = 0;
		}
		else
		{
			uParam1->f_19 = func_140(*uParam1);
			hash = func_100(uParam1->f_19);
			uParam1->f_3 = { func_52(uParam1->f_2, func_101(flag3), hash, flag3) };
			uParam1->f_21 = func_141(uParam1);
			uParam1->f_13 = func_20(uParam1);
			uParam1->f_15 = func_142(uParam1);
			uParam1->f_20 = func_143(uParam1);
			uParam1->f_22 = func_144(uParam1);
			uParam1->f_14 = func_145(uParam1);
			uParam1->f_25 = func_146(uParam1);
			uParam1->f_26 = func_147(uParam1);
			uParam1->f_24 = func_148(uParam1);
			uParam1->f_23 = func_149(uParam1);
			uParam1->f_27 = func_150(uParam1);
			uParam1->f_29 = func_151(uParam1);
			uParam1->f_30 = func_152(uParam1);
			uParam1->f_32 = func_153(uParam1);
			uParam1->f_33 = func_154(uParam1);
			uParam1->f_34 = func_155(uParam1);
			hash2 = -915411861;
		
			if (!uParam1->f_20)
			{
				if (uParam1->f_30 || uParam1->f_29)
					hash2 = uParam1->f_31;
			
				uParam1->f_17 = func_18(Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_2, hash2);
			}
			else
			{
				if (uParam1->f_24 || uParam1->f_23)
					hash2 = uParam1->f_28;
			
				uParam1->f_17 = func_156(uParam1->f_13, hash2);
			}
		
			uParam1->f_18 = func_18(Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_2, -570078785);
		
			if (flag2)
			{
				uParam1->f_29 = 0;
				uParam1->f_30 = 0;
			
				if (uParam1->f_25)
					uParam1->f_25 = iParam3 == uParam1->f_13 + 1;
			
				if (uParam1->f_27)
					uParam1->f_27 = iParam3 == uParam1->f_13 + 1;
			
				if (uParam1->f_20)
					uParam1->f_20 = uParam1->f_13 >= iParam3;
			
				uParam1->f_13 = iParam3;
			}
		
			if (uParam1->f_20)
			{
				uParam1->f_9 = Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_3;
				uParam1->f_10 = Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_6;
			}
			else
			{
				func_157(uParam1);
			}
		}
	}
	else
	{
		playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1940252.f_1556.f_8));
		uParam1->f_9 = Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_3;
		uParam1->f_10 = Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_6;
	
		if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(playerFromGamerHandle))
		{
			uParam1->f_19 = func_158(*uParam1, playerFromGamerHandle);
		
			if (func_99(uParam1->f_19))
			{
				unk = { Global_1155150[playerFromGamerHandle /*30*/].f_5[uParam1->f_19 /*3*/] };
				uParam1->f_13 = unk.f_1;
				uParam1->f_21 = func_159(&(unk.f_2), 1);
			}
		}
	}

	uParam1->f_11 = func_160(uParam1);
	uParam1->f_12 = func_161(Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/], uParam1);
	return 1;
}

BOOL func_98(int iParam0) // Position - 0x23E4 Hash - 0xC7C6D3DD ^0xC7C6D3DD
{
	return func_162() == iParam0;
}

BOOL func_99(int iParam0) // Position - 0x23F3 Hash - 0x55BAE114 ^0x55BAE114
{
	if (iParam0 > 3)
		return false;

	if (iParam0 < 0)
		return false;

	return true;
}

Hash func_100(int iParam0) // Position - 0x2410 Hash - 0xF3DAE918 ^0x69B760E
{
	switch (iParam0)
	{
		case 0:
			return 1317351007;
	
		case 1:
			return -500478573;
	
		case 2:
			return -806573802;
	
		case 3:
			return -1109949204;
	
		default:
		
	}

	return -1060513333;
}

struct<4> func_101(BOOL bParam0) // Position - 0x245D Hash - 0xCD4C5B4C ^0x5BC3600A
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_108(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_52(joaat("character"), func_163(), joaat("SLOTID_NONE"), bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_52(joaat("character"), func_163(), joaat("SLOTID_NONE"), false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_52(joaat("character"), func_163(), joaat("SLOTID_NONE"), bParam0);
}

int func_102(Any* panParam0, Hash hParam1, BOOL bParam2) // Position - 0x24FD Hash - 0x3D67507D ^0xEF2F6729
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_108(bParam2), panParam0, hParam1);
}

Hash func_103(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x2513 Hash - 0x6EEC8CD6 ^0xB0AA3BF0
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (func_164(uParam0, hParam4, &unk, iParam5, bParam6))
		return unk.f_4;

	return 0;
}

BOOL func_104(Hash hParam0) // Position - 0x2543 Hash - 0x21DC440F ^0xBCD0CA37
{
	int num;

	num = func_165(hParam0);

	if (num == joaat("ability_card") || num == joaat("passive_card") || num == joaat("active_card"))
		return true;

	return false;
}

int func_105(Hash hParam0) // Position - 0x257F Hash - 0x303C8725 ^0x5A168A1
{
	int i;

	for (i = 0; i < 35; i = i + 1)
	{
		if (hParam0 == Global_1149432.f_11.f_1562[i /*46*/].f_2)
			return Global_1149432.f_11.f_1562[i /*46*/];
	}

	return 0;
}

BOOL func_106(Hash hParam0, Hash hParam1) // Position - 0x25BF Hash - 0xFB5CB038 ^0x83BB35B8
{
	if (!func_51(hParam0, 0))
		return false;

	if (func_56(hParam0) || func_57(hParam0, 1077060302))
		return func_166(func_58(hParam0, false), hParam1, false);

	return ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT_FROM_COST_TYPE(hParam0, hParam1) > 0;
}

int func_107(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x260B Hash - 0x45FFEF5A ^0x45FFEF5A
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_117(hParam0, hParam1, &unk, &num, bParam2, bParam3))
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

int func_108(BOOL bParam0) // Position - 0x269F Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_167() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

Hash func_109(int iParam0) // Position - 0x26E0 Hash - 0x4AFBB550 ^0x43EB9A08
{
	switch (iParam0)
	{
		case 0:
			return MISC::GET_HASH_KEY("COST_ABILITY_CARD_RANK_VOUCHER");
	
		default:
		
	}

	return 0;
}

BOOL func_110(Hash hParam0) // Position - 0x2702 Hash - 0x1B551CF7 ^0x9235FF01
{
	return func_168(hParam0) == 1946043663;
}

int func_111(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2716 Hash - 0x68EBB232 ^0xEAD633B4
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_51(hParam0, 0))
		return 0;

	num = func_165(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_169(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_170(hParam0, false);
	}

	if (func_171(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_108(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_172(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_108(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

Hash func_112(int iParam0) // Position - 0x27D8 Hash - 0x6D5F8BD6 ^0x2ED33F63
{
	switch (iParam0)
	{
		case 0:
			return MISC::GET_HASH_KEY("COST_ABILITY_CARD_RANK_COUPON");
	
		case 1:
			return MISC::GET_HASH_KEY("COST_ABILITY_CARD_RANK_COUPON_2");
	
		case 2:
			return MISC::GET_HASH_KEY("COST_ABILITY_CARD_RANK_COUPON_3");
	
		default:
		
	}

	return 0;
}

BOOL func_113(Hash hParam0) // Position - 0x281C Hash - 0x1B551CF7 ^0xC792EAB9
{
	return func_168(hParam0) == -126813555;
}

Hash func_114(Hash hParam0) // Position - 0x2830 Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

BOOL func_115(Hash hParam0, Hash hParam1) // Position - 0x283A Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_173(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

Hash func_116(Hash hParam0, BOOL bParam1) // Position - 0x2870 Hash - 0x84086197 ^0x82A85664
{
	int num;

	if (!func_173(hParam0, 2))
		return 0;

	num = 0;

	if (num != 0 && bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
		return 0;

	return num;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_117(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x28A9 Hash - 0x8AAE9761 ^0xF5D9C5DD
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_174(hParam0))
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
		func_175(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

void func_118(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x2938 Hash - 0x7EFAC478 ^0x4E4217E0
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
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_168(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

Hash func_119(int iParam0, int iParam1) // Position - 0x2B0E Hash - 0x2A94CB72 ^0xC81E5EE0
{
	switch (iParam0)
	{
		case joaat("Defense"):
			switch (iParam1)
			{
				case 0:
					return joaat("ability_card_defense_tier_1");
			
				case 1:
					return joaat("ability_card_defense_tier_2");
			
				case 2:
					return joaat("ability_card_defense_tier_3");
			
				default:
					break;
			}
			break;
	
		case joaat("deadeye"):
			switch (iParam1)
			{
				case 0:
					return joaat("ability_card_dead_eye_tier_1");
			
				case 1:
					return joaat("ability_card_dead_eye_tier_2");
			
				case 2:
					return joaat("ability_card_dead_eye_tier_3");
			
				default:
					break;
			}
			break;
	
		case joaat("Recovery"):
			switch (iParam1)
			{
				case 0:
					return joaat("ability_card_recovery_tier_1");
			
				case 1:
					return joaat("ability_card_recovery_tier_2");
			
				case 2:
					return joaat("ability_card_recovery_tier_3");
			
				default:
					break;
			}
			break;
	
		case joaat("Combat"):
			switch (iParam1)
			{
				case 0:
					return joaat("ability_card_combat_tier_1");
			
				case 1:
					return joaat("ability_card_combat_tier_2");
			
				case 2:
					return joaat("ability_card_combat_tier_3");
			
				default:
					break;
			}
			break;
	}

	return joaat("COLOR_WHITE");
}

var func_120() // Position - 0x2C0F Hash - 0x8190E5D8 ^0x5C495FE
{
	return Global_1149432.f_4621.f_163;
}

BOOL func_121(int iParam0) // Position - 0x2C20 Hash - 0x65331643 ^0x65331643
{
	if (iParam0 < 0)
		return false;

	if (func_167() == 0)
		return func_176(iParam0);

	return iParam0 <= func_177();
}

BOOL func_122(int iParam0) // Position - 0x2C4D Hash - 0x9186FF7C ^0xD4141850
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(0, iParam0);
}

char* func_123(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x2C70 Hash - 0x1D52DDA1 ^0x2CC95A61
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_124(int iParam0) // Position - 0x2C84 Hash - 0x375106C3 ^0x2926F5E3
{
	switch (iParam0)
	{
		case 0:
			return Global_1149432.f_11.f_1562.f_1647[0];
	
		case 1:
			return Global_1149432.f_11.f_1562.f_1647[1];
	
		default:
		
	}

	return -1;
}

BOOL func_125(int iParam0) // Position - 0x2CC5 Hash - 0x745CE6FE ^0x745CE6FE
{
	return func_178(&(Global_1956875.f_1565), iParam0, 1);
}

const char* func_126() // Position - 0x2CDB Hash - 0x282F0BAC ^0xC31C4C6C
{
	return func_179(Global_1940252.f_1556.f_8.f_2);
}

const char* func_127(const char* sParam0, int iParam1) // Position - 0x2CF5 Hash - 0x7FAD1594 ^0xFF0C2E5F
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);

	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);

	return func_180(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

const char* func_128(int iParam0) // Position - 0x2D33 Hash - 0x2CA8D196 ^0x74D8E972
{
	if (!func_181(iParam0))
		if (func_44(iParam0))
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_LOCKED");
		else
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_LOCKED", func_182(iParam0));
	else if (!func_45(iParam0, true))
		if (func_44(iParam0))
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_EQUIPPED");
		else
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_EQUIPPED");
	else if (func_44(iParam0))
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_OPEN");
	else
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_OPEN");

	return "INVALID";
}

const char* func_129(var uParam0) // Position - 0x2DCC Hash - 0xE5674F6A ^0x55F7F5B1
{
	int num;
	var unk;
	Hash hash;
	int num2;
	var unk17;

	if (func_183(uParam0))
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_LOCKED", func_184(uParam0->f_2, true));
	}
	else if (uParam0->f_29)
	{
		num = func_18(uParam0->f_2, -915411861);
	
		if (num <= 0)
		{
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_CLAIM_WITH_REWARD_F");
		}
		else
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "$", 128);
			TEXT_LABEL_APPEND_INT(&unk, func_72(num), 128);
			TEXT_LABEL_APPEND_STRING(&unk, ".", 128);
			TEXT_LABEL_APPEND_STRING(&unk, func_71(func_73(num)), 128);
			return MISC::VAR_STRING(10, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_CLAIM_WITH_REWARD", &unk);
		}
	}
	else if (uParam0->f_30)
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_VOUCHER");
	}
	else if (uParam0->f_32)
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_CASH");
	}
	else if (uParam0->f_24)
	{
		hash = func_21(func_20(uParam0) + 1);
	
		if (uParam0->f_25)
			num2 = func_18(hash, -489628648);
		else if (uParam0->f_26)
			num2 = func_18(hash, -570078785);
	
		TEXT_LABEL_ASSIGN_STRING(&unk17, "$", 128);
		TEXT_LABEL_APPEND_INT(&unk17, func_72(num2), 128);
		TEXT_LABEL_APPEND_STRING(&unk17, ".", 128);
		TEXT_LABEL_APPEND_STRING(&unk17, func_71(func_73(num2)), 128);
		return MISC::VAR_STRING(10, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_UPGRADE_OFFER", &unk17);
	}
	else if (uParam0->f_25)
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_UPGRADE");
	}
	else if (uParam0->f_22)
	{
		if (uParam0->f_14)
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_EQUIPPED_MAX");
		else
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_EQUIPPED");
	}
	else
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_UNEQUIPPED");
	}

	return "INVALID";
}

void func_130(var uParam0) // Position - 0x2F52 Hash - 0xC415F42D ^0x8AD4A407
{
	var unk;

	unk.f_7 = 1;
	unk.f_13 = -1;
	unk.f_15 = -1;
	unk.f_16 = -1;
	unk.f_17 = -1;
	unk.f_18 = -1;
	unk.f_19 = -1;
	unk.f_35 = -1;
	func_157(&unk);
	*uParam0 = { unk };
	return;
}

void func_131(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38) // Position - 0x2F9D Hash - 0xE5026FE6 ^0x7658A709
{
	BOOL flag;

	flag = func_181(iParam0);

	if (func_83())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_47, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_46, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_50, true);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_49, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_48, false);
		func_26(uParam1, &uParam2);
		return;
	}

	func_26(uParam1, &uParam2);

	if (flag)
		func_185(&(Global_1149432.f_4621.f_36[iParam0 /*3*/].f_2), 1);
	else
		func_186(&(Global_1149432.f_4621.f_36[iParam0 /*3*/].f_2), 1);

	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_46, flag && func_87());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_47, flag && func_87() && func_65(0));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_48, uParam2.f_22 && func_87());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_49, uParam2.f_22 && func_87() && func_65(3));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_50, flag);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_51, func_74(func_182(iParam0)));
	return;
}

BOOL func_132(int iParam0) // Position - 0x30A4 Hash - 0x36CAFC43 ^0x36CAFC43
{
	return Global_1940252.f_1556.f_4168.f_2086 == iParam0;
}

void func_133(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39) // Position - 0x30BC Hash - 0x83A1CE2F ^0xDE67C2F8
{
	func_187(uParam1, uParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_46, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_47, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_48, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_49, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_50, func_159(&uParam39, 1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_51, func_74(func_182(iParam0)));
	return;
}

const char* func_134(int iParam0) // Position - 0x3114 Hash - 0x8700F264 ^0x86EDCCD8
{
	switch (iParam0)
	{
		case 0:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_ACTIVE_SLOT_FOCUS_TITLE");
	
		case 1:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_1_FOCUS_TITLE");
	
		case 2:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_2_FOCUS_TITLE");
	
		case 3:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_3_FOCUS_TITLE");
	
		default:
		
	}

	return "NULL";
}

const char* func_135(int iParam0) // Position - 0x3170 Hash - 0x8700F264 ^0xD9FAB697
{
	switch (iParam0)
	{
		case 0:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_ACTIVE_SLOT_FOCUS_DESCRIPTION");
	
		case 1:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
	
		case 2:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
	
		case 3:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
	
		default:
		
	}

	return "NULL";
}

void func_136(int iParam0) // Position - 0x31CC Hash - 0x71693656 ^0xF04D5E4E
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940252.f_1556.f_4168.f_11, iParam0);
	return;
}

int func_137(int iParam0) // Position - 0x31E6 Hash - 0xD3A441E7 ^0x741C8248
{
	if (!func_50(iParam0))
		return 0;

	return Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_7;
}

BOOL func_138(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36) // Position - 0x3210 Hash - 0x39EB3A50 ^0x315EDE5
{
	if (func_57(uParam0.f_2, 216050813))
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(-1387714323))
			return false;

	return true;
}

int func_139(int iParam0) // Position - 0x323A Hash - 0x4E936638 ^0x32762DFF
{
	int i;

	if (!func_83())
		return -1;

	if (!func_50(iParam0))
		return -1;

	for (i = 0; i < 4; i = i + 1)
	{
		if (Global_1149432.f_4804.f_34[i /*3*/] == iParam0)
			return i;
	}

	return -1;
}

int func_140(int iParam0) // Position - 0x3286 Hash - 0xAF4B3698 ^0xAF4B3698
{
	int i;
	Hash hash;
	Hash hash2;

	if (!func_50(iParam0))
		return -1;

	hash2 = func_188(iParam0);

	for (i = 0; i < 4; i = i + 1)
	{
		hash = func_100(i);
	
		if (func_189(hash2, hash, true))
			return i;
	}

	return -1;
}

BOOL func_141(var uParam0) // Position - 0x32D0 Hash - 0x2BFB27C6 ^0x2172DE94
{
	if (!func_138(*uParam0))
		return false;

	if (func_143(uParam0))
		return true;

	return UNLOCK::UNLOCK_IS_UNLOCKED(uParam0->f_2);
}

int func_142(var uParam0) // Position - 0x32FE Hash - 0xC0155A86 ^0xDEDAF78B
{
	int num;
	int num2;
	int i;
	var guid;
	Hash hash;
	Hash hash2;

	if (uParam0->f_13 >= 2)
		return 0;

	if (!func_50(*uParam0))
		return -1;

	if (!func_51(uParam0->f_2, 0))
		return -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(uParam0->f_3)))
		return 0;

	for (i = 0; i < 3; i = i + 1)
	{
		hash = func_21(i);
		guid = { func_52(hash, uParam0->f_3, 1635590003, true) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			break;
	
		hash2 = func_190(i);
		num = func_191(1412640604, guid, hash2, true, false, false);
		num2 = num2 + num;
	}

	return num2;
}

BOOL func_143(var uParam0) // Position - 0x33A4 Hash - 0x575417E3 ^0x7C5F038A
{
	return func_192(uParam0->f_2, true);
}

int func_144(var uParam0) // Position - 0x33B5 Hash - 0x8603725A ^0x22747C24
{
	int i;

	if (!func_50(*uParam0))
		return 0;

	for (i = 0; i < 4; i = i + 1)
	{
		if (func_193(i, true) == uParam0->f_2)
			return 1;
	}

	return 0;
}

BOOL func_145(var uParam0) // Position - 0x33F1 Hash - 0x9EF7758 ^0x67E4E944
{
	return uParam0->f_13 >= 2;
}

BOOL func_146(var uParam0) // Position - 0x33FF Hash - 0xD54E54BA ^0x40B3BBA6
{
	return !uParam0->f_14 && uParam0->f_20 && func_194(uParam0);
}

int func_147(var uParam0) // Position - 0x3420 Hash - 0x4A181B5A ^0x4A181B5A
{
	return 0;
}

int func_148(var uParam0) // Position - 0x3429 Hash - 0x6DA4B522 ^0xF98772D8
{
	int num;
	Hash hash;
	Hash hash2;
	int num2;

	if (uParam0->f_14)
		return 0;

	if (!uParam0->f_20)
		return 0;

	if (!func_195(uParam0))
		return 0;

	num = func_20(uParam0) + 1;
	hash = func_21(num);

	if (!func_51(hash, 0))
		return 0;

	if (!func_23(hash, &hash2))
		return 0;

	uParam0->f_28 = hash2;
	num2 = func_196(num, hash2);

	if (num2 > 0 && uParam0->f_15 < num2)
		return 0;

	return 1;
}

int func_149(var uParam0) // Position - 0x34AF Hash - 0x6DA4B522 ^0xF98772D8
{
	int num;
	Hash hash;
	Hash hash2;
	int num2;

	if (uParam0->f_14)
		return 0;

	if (!uParam0->f_20)
		return 0;

	if (!func_195(uParam0))
		return 0;

	num = func_20(uParam0) + 1;
	hash = func_21(num);

	if (!func_51(hash, 0))
		return 0;

	if (!func_22(hash, &hash2))
		return 0;

	uParam0->f_28 = hash2;
	num2 = func_196(num, hash2);

	if (num2 > 0 && uParam0->f_15 < num2)
		return 0;

	return 1;
}

BOOL func_150(var uParam0) // Position - 0x3535 Hash - 0x277547C9 ^0x96C586C4
{
	return uParam0->f_26 || uParam0->f_25 || uParam0->f_24 || uParam0->f_23;
}

int func_151(var uParam0) // Position - 0x355F Hash - 0x77CEC19C ^0xA1FE23E4
{
	var unk;

	if (uParam0->f_20)
		return 0;

	if (!func_195(uParam0))
		return 0;

	if (!func_197(uParam0->f_2, &unk))
		return 0;

	uParam0->f_31 = unk;
	return 1;
}

int func_152(var uParam0) // Position - 0x3599 Hash - 0x77CEC19C ^0xA1FE23E4
{
	var unk;

	if (uParam0->f_20)
		return 0;

	if (!func_195(uParam0))
		return 0;

	if (!func_198(uParam0->f_2, &unk))
		return 0;

	uParam0->f_31 = unk;
	return 1;
}

BOOL func_153(var uParam0) // Position - 0x35D3 Hash - 0x60DE6E11 ^0x146DFD1B
{
	return !uParam0->f_20 && func_195(uParam0) && !uParam0->f_29 && !uParam0->f_30;
}

int func_154(var uParam0) // Position - 0x35FF Hash - 0x4A181B5A ^0x4A181B5A
{
	return 0;
}

BOOL func_155(var uParam0) // Position - 0x3608 Hash - 0x277547C9 ^0x6801CB29
{
	return uParam0->f_33 || uParam0->f_32 || uParam0->f_29 || uParam0->f_30;
}

int func_156(int iParam0, Hash hParam1) // Position - 0x3632 Hash - 0xA02E9F94 ^0xA02E9F94
{
	Hash hash;

	hash = func_21(iParam0 + 1);
	return func_18(hash, hParam1);
}

void func_157(var uParam0) // Position - 0x364C Hash - 0x75E1382E ^0x96B64415
{
	uParam0->f_9 = joaat("ability_card_back");
	uParam0->f_10 = joaat("ability_cards");
	return;
}

int func_158(int iParam0, Player plParam1) // Position - 0x3666 Hash - 0x821ABED5 ^0x44758B64
{
	int i;
	Player player;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam1))
		return -1;

	if (!func_50(iParam0))
		return -1;

	player = plParam1;

	for (i = 0; i < 4; i = i + 1)
	{
		if (Global_1155150[player /*30*/].f_5[i /*3*/] == iParam0)
			return i;
	}

	return -1;
}

BOOL func_159(var uParam0, int iParam1) // Position - 0x36B9 Hash - 0x320397CF ^0x320397CF
{
	return func_199(*uParam0, iParam1);
}

const char* func_160(var uParam0) // Position - 0x36CA Hash - 0x5CDAE2EC ^0x8E230707
{
	return MISC::VAR_STRING(42, "MP_ABILITY_CARD_DISPLAY_STRING", MISC::VAR_STRING(0, uParam0->f_8), MISC::VAR_STRING(2, func_200(uParam0->f_13)));
}

char* func_161(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46) // Position - 0x36F2 Hash - 0x47D6153D ^0xC6F1378E
{
	if (!func_201(uParam46->f_13))
		return "NULL";

	return MISC::VAR_STRING(0, uParam0.f_9[uParam46->f_13 /*12*/].f_11);
}

int func_162() // Position - 0x371E Hash - 0x7A15C96F ^0x7A15C96F
{
	return Global_1940252.f_1556.f_4168.f_2087;
}

struct<4> func_163() // Position - 0x3733 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

BOOL func_164(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, int iParam6, BOOL bParam7) // Position - 0x373F Hash - 0xA6C1C993 ^0x7035E80B
{
	int inventoryId;

	inventoryId = func_108(bParam7);

	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(inventoryId, &uParam0, hParam4) <= iParam6)
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(inventoryId, &uParam0, hParam4, iParam6, panParam5))
		return false;

	return true;
}

int func_165(Hash hParam0) // Position - 0x3779 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_51(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_166(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x37A4 Hash - 0xDFD4B035 ^0x7F7C43A6
{
	if (!func_174(hParam0))
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_COUNT_FROM_COST_TYPE(hParam0, hParam1) == 0)
		return false;

	if (bParam2)
		return !func_202(hParam0, hParam1);

	return true;
}

int func_167() // Position - 0x37DC Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

Hash func_168(Hash hParam0) // Position - 0x37EA Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_51(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

Hash func_169(Hash hParam0, int iParam1) // Position - 0x3815 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_51(hParam0, 0))
		return 0;

	num = func_165(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_57(hParam0, 1399091007))
	{
		func_203(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_170(Hash hParam0, BOOL bParam1) // Position - 0x388F Hash - 0xF271562B ^0x8AA3413F
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_204(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam1)
		func_206(&unk, func_205(false));

	if (!func_207(&unk, &num, &num2, false))
		return 0;

	func_208(num);
	return num2;
}

int func_171(Hash hParam0, Hash hParam1) // Position - 0x38EE Hash - 0x865BD5D3 ^0xA4D690BD
{
	if (hParam1 == 0)
		return 0;

	if (func_173(func_114(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

struct<4> func_172(Hash hParam0, BOOL bParam1) // Position - 0x391A Hash - 0x8EFC92E9 ^0xE8DA0FF0
{
	var unk;

	unk = { func_209(hParam0, bParam1, 0) };
	return func_52(hParam0, unk, unk.f_4, bParam1);
}

BOOL func_173(Hash hParam0, int iParam1) // Position - 0x393F Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

BOOL func_174(Hash hParam0) // Position - 0x3959 Hash - 0x3FD9EF89 ^0x3FC8CAC6
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(hParam0);
}

void func_175(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x3971 Hash - 0x7EFAC478 ^0x4E4217E0
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
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_168(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

BOOL func_176(int iParam0) // Position - 0x3B47 Hash - 0x6C22F57C ^0x1F3736DE
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_177() // Position - 0x3B6A Hash - 0xD56F3AB7 ^0x4ED7D083
{
	if (func_167() == 0)
		return MONEY::_NETWORK_GET_CASH_BALANCE();

	return MONEY::_MONEY_GET_CASH_BALANCE();
}

BOOL func_178(Any* panParam0, int iParam1, int iParam2) // Position - 0x3B85 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

const char* func_179(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x3BBC Hash - 0xE80420B9 ^0x2740E778
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

const char* func_180(const char* sParam0, int iParam1) // Position - 0x3BD0 Hash - 0x9E99F03 ^0x6C87E368
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

BOOL func_181(int iParam0) // Position - 0x3BEA Hash - 0xB3316880 ^0xDB6BB2BF
{
	switch (iParam0)
	{
		case 0:
			return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_CARD_SLOT_DEADEYE"));
	
		case 1:
			return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_CARD_SLOT_PASSIVE_0"));
	
		case 2:
			return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_CARD_SLOT_PASSIVE_1"));
	
		case 3:
			return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_CARD_SLOT_PASSIVE_2"));
	
		default:
		
	}

	return false;
}

int func_182(int iParam0) // Position - 0x3C43 Hash - 0xA766542B ^0xA766542B
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 10;
	
		case 2:
			return 20;
	
		case 3:
			return 40;
	
		default:
		
	}

	return -1;
}

BOOL func_183(var uParam0) // Position - 0x3C7F Hash - 0xA983C847 ^0x8B5925F0
{
	return !uParam0->f_20 && !func_195(uParam0);
}

int func_184(Hash hParam0, BOOL bParam1) // Position - 0x3C98 Hash - 0xEB6A5583 ^0x541A2EC7
{
	int outData;

	if (!func_51(hParam0, 0))
		return -1;

	UNLOCK::_UNLOCK_GET_ITEM_ROLE_UNLOCK_INFO(hParam0, &outData);

	if (outData.f_1 < 1)
		return -1;
	else if (func_57(hParam0, 81450561) || func_57(hParam0, 1342455455))
		return -1;

	switch (outData)
	{
		case joaat("CHARACTER_RANK_TRADER"):
		case joaat("CHARACTER_RANK_BOUNTY_HUNTER"):
		case joaat("CHARACTER_RANK_COLLECTOR"):
			if (bParam1)
				return outData.f_1;
		
			return -1;
	
		case joaat("CHARACTER_RANK"):
			return outData.f_1;
	
		case joaat("CHARACTER_RANK_INTRO"):
			return 1;
	
		default:
		
	}

	return -1;
}

void func_185(int iParam0, int iParam1) // Position - 0x3D2B Hash - 0xF55E891F ^0xF55E891F
{
	func_210(iParam0, iParam1);
	return;
}

void func_186(int iParam0, int iParam1) // Position - 0x3D3B Hash - 0xF55E891F ^0xF55E891F
{
	func_211(iParam0, iParam1);
	return;
}

void func_187(var uParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37) // Position - 0x3D4B Hash - 0xB74AE026 ^0x28D0B6C2
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, hParam1.f_11);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_3, hParam1.f_12);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_4, hParam1.f_9);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_5, hParam1.f_10);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_41, func_61(hParam1.f_1, hParam1.f_13));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_6, hParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_36, hParam1.f_13);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_7, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_34, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_12, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_13, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_35, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_14, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_15, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_16, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_17, false);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_18, "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_19, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_20, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_21, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_22, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_23, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_23, false);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_25, "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_26, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_27, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_28, false);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_31, "");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_32, "");
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_33, -1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_43, "");
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_38, -1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_40, -1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_10, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_8, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_9, false);
	return;
}

Hash func_188(int iParam0) // Position - 0x3ECA Hash - 0xD3A441E7 ^0x1186289D
{
	if (!func_50(iParam0))
		return 0;

	return Global_1149432.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_2;
}

BOOL func_189(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x3EF4 Hash - 0xA4FF40AE ^0xA4FF40AE
{
	var unk;

	if (!func_104(hParam0))
		return false;

	unk = { func_101(bParam2) };

	if (func_191(hParam0, unk, hParam1, bParam2, false, false) >= 1)
		return true;

	return false;
}

Hash func_190(int iParam0) // Position - 0x3F2D Hash - 0xB2C0E981 ^0xB2C0E981
{
	int num;

	num = iParam0;
	return func_212(num);
}

int func_191(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x3F3F Hash - 0xC754D793 ^0x26C4E67C
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_51(hParam0, 0))
		return 0;

	if (!bParam7 && func_171(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_52(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_108(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_108(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_192(Hash hParam0, BOOL bParam1) // Position - 0x3FBE Hash - 0xFE538889 ^0x1BC48476
{
	var unk;

	if (!func_104(hParam0))
		return 0;

	unk = { func_101(bParam1) };

	if (func_191(hParam0, unk, -1060513333, bParam1, false, false) >= 1)
		return 1;
	else if (func_191(hParam0, unk, 1317351007, bParam1, false, false) >= 1)
		return 1;
	else if (func_191(hParam0, unk, -500478573, bParam1, false, false) >= 1)
		return 1;
	else if (func_191(hParam0, unk, -806573802, bParam1, false, false) >= 1)
		return 1;
	else if (func_191(hParam0, unk, -1109949204, bParam1, false, false) >= 1)
		return 1;

	return 0;
}

int func_193(int iParam0, BOOL bParam1) // Position - 0x4073 Hash - 0x8F245424 ^0x8F245424
{
	var unk;

	unk = { func_101(bParam1) };
	return func_103(unk, func_100(iParam0), 0, bParam1);
}

BOOL func_194(var uParam0) // Position - 0x4096 Hash - 0x155E818B ^0x801B0EF2
{
	return uParam0->f_15 >= func_75(uParam0->f_13);
}

BOOL func_195(var uParam0) // Position - 0x40AB Hash - 0xC1E22B9F ^0x6D8DE37C
{
	return UNLOCK::UNLOCK_IS_VISIBLE(uParam0->f_2);
}

int func_196(int iParam0, Hash hParam1) // Position - 0x40BB Hash - 0xF8705A52 ^0xF8705A52
{
	Hash hash;
	int num;
	var unk;
	int i;

	hash = func_21(iParam0);

	if (!func_51(hash, 0))
		return func_75(iParam0);

	unk = 15;

	if (!func_60(hash, hParam1, &unk, &num, true, false))
		return func_75(iParam0);

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] != 1412640604)
		{
		}
		else
		{
			return unk[i /*2*/].f_1;
		}
	}

	return 0;
}

BOOL func_197(Hash hParam0, var uParam1) // Position - 0x4130 Hash - 0x4D07B4AD ^0x4D07B4AD
{
	*uParam1 = func_213(hParam0, true);
	return *uParam1 != 0;
}

BOOL func_198(Hash hParam0, var uParam1) // Position - 0x4147 Hash - 0xA213590B ^0xA213590B
{
	*uParam1 = func_214(hParam0, true, false);
	return *uParam1 != 0;
}

BOOL func_199(int iParam0, int iParam1) // Position - 0x415F Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

char* func_200(var uParam0) // Position - 0x416E Hash - 0xB2C0E981 ^0xB2C0E981
{
	var unk;

	unk = uParam0;
	return func_215(unk);
}

BOOL func_201(int iParam0) // Position - 0x4180 Hash - 0x9FB5397B ^0x9FB5397B
{
	if (iParam0 >= 0 && iParam0 <= 2)
		return true;

	return false;
}

BOOL func_202(Hash hParam0, Hash hParam1) // Position - 0x419D Hash - 0x86D562BB ^0xB258F193
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

void func_203(Hash hParam0, var uParam1, var uParam2) // Position - 0x42E6 Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_204(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x44F2 Hash - 0x90CCF0F4 ^0xA5F3D799
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

	if (iParam2 != 0 && iParam2 != joaat("SLOTID_NONE"))
		hash.f_2 = iParam2;

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

struct<4> func_205(BOOL bParam0) // Position - 0x45D0 Hash - 0xC271E2E0 ^0xF6B4968C
{
	int num;

	num = func_108(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_52(923904168, func_101(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_52(923904168, func_101(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_52(923904168, func_101(bParam0), -740156546, false);
}

void func_206(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x4671 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_207(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x468C Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_108(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_208(int iParam0) // Position - 0x46B1 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

struct<5> func_209(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x46D2 Hash - 0xFD1D83A6 ^0x412BEE1D
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_101(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	num = func_165(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_220(hParam0, -1823706425))
			{
				unk = { func_52(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_220(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_52(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_52(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
			else if (func_220(hParam0, -1653629781))
			{
				unk = { func_52(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = joaat("SLOTID_NONE");
			unk = { func_219(bParam1) };
		
			switch (func_168(hParam0))
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
			unk = { func_52(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_205(bParam1) };
		
			if (iParam2 && func_216(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_217(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_217(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_218(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_221(unk, &unk28, bParam1, false, -1))
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
			else if (func_220(hParam0, -1653629781))
			{
				unk = { func_52(1384535894, unk, 1784584921, bParam1) };
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

void func_210(int iParam0, int iParam1) // Position - 0x4A46 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

void func_211(int iParam0, int iParam1) // Position - 0x4A57 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

int func_212(int iParam0) // Position - 0x4A6C Hash - 0x21FAF347 ^0xA11C0795
{
	switch (iParam0)
	{
		case 0:
			return -2047978619;
	
		case 1:
			return -586319254;
	
		case 2:
			return 249896112;
	
		default:
		
	}

	return 0;
}

Hash func_213(Hash hParam0, BOOL bParam1) // Position - 0x4AA7 Hash - 0x1EB0D738 ^0x1EB0D738
{
	int i;
	int num;
	var unk;
	Hash hash;
	int j;

	unk = 15;

	for (i = 0; i < 3; i = i + 1)
	{
		hash = func_222(i, true, false);
	
		if (!func_60(hParam0, hash, &unk, &num, true, false))
		{
		}
		else
		{
			for (j = 0; j < num; j = j + 1)
			{
				if (func_110(unk[j /*2*/]))
				{
					if (!bParam1 || func_111(unk[j /*2*/], false, true, true) > 0)
						return hash;
				
					break;
				}
			
				if (unk[j /*2*/] == 0)
					break;
			}
		}
	}

	return 0;
}

Hash func_214(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4B3A Hash - 0x147A7BD8 ^0x147A7BD8
{
	int i;
	int num;
	var unk;
	var unk2;
	Hash hash;
	Hash hash2;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	var unk3;
	Hash hash3;
	int j;

	unk3 = 15;

	for (i = 0; i < 5; i = i + 1)
	{
		hash3 = func_222(i, false, true);
	
		if (!func_60(hParam0, hash3, &unk3, &num, true, false))
		{
		}
		else
		{
			flag3 = false;
			hash2 = 0;
		
			for (j = 0; j < num; j = j + 1)
			{
				if (func_113(unk3[j /*2*/]))
				{
					if (!bParam1 || func_111(unk3[j /*2*/], false, true, true) > 0)
						flag3 = true;
				}
				else if (unk3[j /*2*/] == joaat("currency_cash") || unk3[j /*2*/] == joaat("currency_gold_bar"))
				{
					if (bParam2 && unk3[j /*2*/] == joaat("currency_cash") || !bParam2 && unk3[j /*2*/] == joaat("currency_gold_bar"))
					{
						if (hash == 0 || flag && unk3[j /*2*/].f_1 < unk)
						{
							hash2 = hash3;
							unk2 = unk3[j /*2*/].f_1;
							flag2 = 1;
						}
					}
					else if (hash == 0 || unk3[j /*2*/].f_1 < unk)
					{
						hash2 = hash3;
						unk2 = unk3[j /*2*/].f_1;
						flag2 = 0;
					}
				}
				else if (unk3[j /*2*/] == 0)
				{
					break;
				}
			}
		
			if (flag3 && hash2 != 0)
			{
				hash = hash2;
				unk = unk2;
				flag = flag2;
			}
		}
	}

	return hash;
}

char* func_215(int iParam0) // Position - 0x4C99 Hash - 0x21CE226B ^0xF35CF739
{
	switch (iParam0)
	{
		case 0:
			return "MP_PLAYER_CARD_TIER_ONE";
	
		case 1:
			return "MP_PLAYER_CARD_TIER_TWO";
	
		case 2:
			return "MP_PLAYER_CARD_TIER_THREE";
	
		default:
		
	}

	return "NP_CARD_TIER_INVALID";
}

int func_216(Hash hParam0, BOOL bParam1) // Position - 0x4CD4 Hash - 0x5D0FB4E0 ^0x17177DE5
{
	if (func_168(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_223();
		else
			return 1;

	return 0;
}

BOOL func_217(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x4D0B Hash - 0x28ECC25A ^0x28ECC25A
{
	return func_191(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_218(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x4D26 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_224(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_219(BOOL bParam0) // Position - 0x4D47 Hash - 0x9E4BFC8E ^0xE92FDA8B
{
	int num;

	num = func_108(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_52(271701509, func_101(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_52(271701509, func_101(bParam0), 12999093, false);
}

BOOL func_220(Hash hParam0, Hash hParam1) // Position - 0x4DB1 Hash - 0x3516CCA0 ^0x327E5212
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_168(hParam0);

	if (category == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (func_225(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_221(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x4E1E Hash - 0x113CD144 ^0x113CD144
{
	return func_226(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

Hash func_222(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4E34 Hash - 0xC67FD48A ^0x72A5971A
{
	int num;

	num = 0;

	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
		
			case 1:
				return 866168015;
		
			case 2:
				return -1103707655;
		
			default:
			
		}
	
		num = 3;
	}

	if (bParam2)
	{
		switch (iParam0 - num)
		{
			case 0:
				return 75922725;
		
			case 1:
				return 1070046552;
		
			case 2:
				return -1843707398;
		
			case 3:
				return -1571233163;
		
			case 4:
				return -1197011183;
		
			default:
			
		}
	}

	return 0;
}

int func_223() // Position - 0x4ED0 Hash - 0x7BDD8F67 ^0x9160E7D8
{
	if (func_227(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

BOOL func_224(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x4EED Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_108(false);
	*panParam1 = { func_52(hParam0, func_205(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_225(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0x4F32 Hash - 0x7F891916 ^0x5CD7D9F0
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(hParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, hParam2);
}

BOOL func_226(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x4F65 Hash - 0xC845006B ^0xAA568F17
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_108(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

int func_227(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4F9F Hash - 0x118F0611 ^0x5AC648CA
{
	if (func_228(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_108(bParam1), hParam0, bParam3);
}

BOOL func_228(Hash hParam0) // Position - 0x4FD2 Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

