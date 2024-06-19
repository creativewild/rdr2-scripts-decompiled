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
#endregion

void main() // Position - 0x0 Hash - 0xDABC6D06 ^0xDCBD1C28
{
	func_1();

	while (!func_2())
	{
		func_3();
		BUILTIN::WAIT(0);
	}

	func_4();
	func_5();
	return;
}

void func_1() // Position - 0x28 Hash - 0x590BEAB6 ^0x835A2F40
{
	int gameTimer;

	gameTimer = MISC::GET_GAME_TIMER();
	func_6(32, -1);
	func_7();

	if (func_8())
		func_5();

	func_9();
	func_10(false);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	return;
}

BOOL func_2() // Position - 0x5B Hash - 0x5C18CA54 ^0x5C18CA54
{
	if (func_11(false, false))
		return true;

	return false;
}

void func_3() // Position - 0x71 Hash - 0xFAEEA443 ^0xFAEEA443
{
	if (func_12())
		func_13();

	func_14();
	return;
}

void func_4() // Position - 0x88 Hash - 0xD8C6DE12 ^0xD8C6DE12
{
	func_15();
	return;
}

void func_5() // Position - 0x94 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_6(int iParam0, int iParam1) // Position - 0xA0 Hash - 0xB0CBCD25 ^0x1C1F3615
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_5();

	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
	return;
}

int func_7() // Position - 0xBD Hash - 0x1FABDECD ^0x67C342BC
{
	int scriptStatus;
	int gameTimer;
	int timeoutTime;

	scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	gameTimer = MISC::GET_GAME_TIMER();
	timeoutTime = NETWORK::NETWORK_GET_TIMEOUT_TIME();

	if (timeoutTime < 50000)
		timeoutTime = 50000;

	while (scriptStatus != 2)
	{
		MISC::GET_GAME_TIMER() - gameTimer > timeoutTime - 5000;
	
		if (MISC::GET_GAME_TIMER() - gameTimer > 300000)
			func_5();
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
			
				case 1:
					func_5();
					break;
			
				case 2:
					func_5();
					break;
			
				case 3:
					func_5();
					break;
			
				case 4:
					func_5();
					break;
			
				default:
					break;
			}
		}
	
		if (scriptStatus == 3 || scriptStatus == 4 || scriptStatus == 5 || scriptStatus == 6)
			func_5();
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			func_5();
	
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
			func_5();
	
		if (func_16() == 0)
			if (func_17())
				func_5();
	
		BUILTIN::WAIT(0);
		scriptStatus = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_5();

	return 1;
}

BOOL func_8() // Position - 0x1CE Hash - 0xCCBAEBD5 ^0x6A02E5CB
{
	if (Global_1572887.f_10)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	return false;
}

void func_9() // Position - 0x1FC Hash - 0x6B65C3E7 ^0x7EA81720
{
	int i;

	func_18();

	for (i = 0; i <= 4; i = i + 1)
	{
		Global_1265286[i /*10*/].f_1 = TASK::_0xE1C105E6BBA48270();
	}

	func_19();
	return;
}

void func_10(BOOL bParam0) // Position - 0x22C Hash - 0x2B211437 ^0xE0D702E
{
	int num;
	var unk;
	int num2;

	num = MISC::GET_SYSTEM_TIME() + 180000;
	num2 = 0;
	unk = { unk };

	while (true)
	{
		num2 = num2 + 1;
	
		if (bParam0)
			NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
			
				case 1:
					func_5();
					break;
			
				case 2:
					func_5();
					break;
			
				case 3:
					func_5();
					break;
			
				case 4:
					func_5();
					break;
			
				default:
					break;
			}
		}
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return;
	
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			TEXT_LABEL_ASSIGN_STRING(&unk, "HOST", 64);
		else
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLIENT", 64);
	
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
			return;
	
		if (MISC::GET_SYSTEM_TIME() >= num)
		{
			func_5();
			return;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

BOOL func_11(BOOL bParam0, BOOL bParam1) // Position - 0x2F3 Hash - 0x8CDC02F2 ^0xDB4E8541
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

BOOL func_12() // Position - 0x3D3 Hash - 0x14157621 ^0x8059B122
{
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1051645.f_16[16], false))
		return false;

	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_scan_manager", -1, true, 0))
		return false;

	return PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1051645.f_16[16]);
}

void func_13() // Position - 0x417 Hash - 0x116775E4 ^0x628D73CB
{
	int num;

	while (num < 5)
	{
		func_20(Global_1264306.f_146);
		Global_1264306.f_146 = Global_1264306.f_146 + 1;
	
		if (Global_1264306.f_146 > 4)
			Global_1264306.f_146 = 0;
	
		num = num + 1;
	}

	return;
}

void func_14() // Position - 0x457 Hash - 0x470BA3E4 ^0x34557CF0
{
	int num;

	while (num < 3)
	{
		func_21(Global_1265286.f_74);
		Global_1265286.f_74 = Global_1265286.f_74 + 1;
	
		if (Global_1265286.f_74 > 4)
			Global_1265286.f_74 = 0;
	
		num = num + 1;
	}

	func_22();
	return;
}

void func_15() // Position - 0x49B Hash - 0xC98F18FA ^0xC73C6792
{
	int i;

	for (i = 0; i <= 21; i = i + 1)
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1265286.f_51[i]))
			VOLUME::DELETE_VOLUME(Global_1265286.f_51[i]);
	}

	return;
}

int func_16() // Position - 0x4D5 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_17() // Position - 0x4E3 Hash - 0x4228A1C2 ^0x1E29B662
{
	return Global_1051645.f_8;
}

void func_18() // Position - 0x4F1 Hash - 0xC5D9F326 ^0x2D2BAF2A
{
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1264306, 147, 7);
	func_23(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1264306), 147, "g_mpScanManagerHostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1264453, 833, 8);
	func_24(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&Global_1264453[0 /*26*/]), 833, "g_mpScanManagerPlayerData");
	return;
}

void func_19() // Position - 0x538 Hash - 0x76449FA ^0xDEC3DA90
{
	Global_1265286.f_51[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2661.152f, -1484.681f, 46.283f, 0f, 0f, 0f, 100f, 13.5f, 10.25f, "BadTiles_SaintDenisTrainTracks");
	Global_1265286.f_51[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(3523.964f, 817.257f, 42f, 0f, 0f, 80.1952f, 2275.5f, 610.5f, 200f, "BadTiles_Annesburg");
	Global_1265286.f_51[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(3734.058f, -840.8746f, 42f, 0f, 0f, 105.94523f, 1417.75f, 1235.25f, 200f, "BadTiles_Siska");
	Global_1265286.f_51[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2772.144f, -2239.1997f, 42f, 0f, 0f, 27.369724f, 3500f, 736.5f, 200f, "BadTiles_SaintDenisBay");
	Global_1265286.f_51[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1.913f, -2816.89f, 42f, 0f, 0f, 0.36973f, 2529.75f, 913.25f, 200f, "BadTiles_SouthFlatIronLake");
	Global_1265286.f_51[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1113.942f, -2260.829f, 42f, 0f, 0f, 0f, 283.25f, 420f, 200f, "BadTiles_QuakersCove");
	Global_1265286.f_51[6] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(458.91583f, -1037.3069f, 52.07294f, 0f, 0f, 0f, 160f, 160f, 30f, "BadTiles_ScarlettMeadowsTreelessIsland");
	Global_1265286.f_51[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-3094.862f, -2471.42f, 59.01997f, 0f, 0f, -10f, 19f, 5f, 4f, "BadTiles_ArmadilloCliff");
	Global_1265286.f_51[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-221.1699f, 1336.444f, 163.4222f, 0f, 0f, 0f, 85.8828f, 114.2864f, 61.82489f, "RelocateOrigin_DakotaRiverCanyon");
	Global_1265286.f_51[9] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(461.5739f, 1603.8229f, 196.7019f, 0f, 0f, 0f, 100f, 125f, 50f, "RelocateOrigin_DakotaRiverCanyonEast");
	Global_1265286.f_51[10] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5187.7007f, -2106.909f, 24.13687f, 0f, 0f, 6.750001f, 200f, 140f, 100f, "RelocateOrigin_RathskellerFork");
	Global_1265286.f_51[12] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-6695.0723f, -3567.2473f, -22.213814f, 0f, 0f, 30.497292f, 150f, 100f, 50f, "RelocateOrigin_CoronadoNorth");
	Global_1265286.f_51[11] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-6569.904f, -3773.8467f, -12.749483f, 0f, 0f, 16.918154f, 280f, 100f, 50f, "RelocateOrigin_CoronadoSouth");
	Global_1265286.f_51[13] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-3411.9392f, -1815.859f, 56.371956f, 0f, 0f, 0f, 300f, 100f, 50f, "RelocateOrigin_HennigansSteadRailBridge");
	Global_1265286.f_51[14] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2640.393f, 700.1597f, 172.832f, 0f, 0f, 0f, 80f, 80f, 80f, "RelocateOrigin_HangingDogRanchCave");
	Global_1265286.f_51[15] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(435.58255f, 1784.9181f, 190.0176f, 0f, 0f, -10.500001f, 191f, 43.5f, 20f, "RelocateOrigin_BachhusBridge");
	Global_1265286.f_51[16] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-220.09155f, 1302.6873f, 177.1935f, 0f, 0f, -44.749992f, 750f, 2500f, 345f, "CanyonArea_DakotaRiverCanyon");
	Global_1265286.f_51[18] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1142.3066f, 1793.6736f, 194.5337f, 0f, 0f, 24.871191f, 150f, 100f, 20f, "UnscannableVolume_OCreaghsRunTrainTunnelEast");
	Global_1265286.f_51[17] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1006.59143f, 1730.7596f, 194.5337f, 0f, 0f, 24.87119f, 150f, 100f, 20f, "UnscannableVolume_OCreaghsRunTrainTunnelWest");
	Global_1265286.f_51[19] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2119.513f, 79.233116f, 253.92262f, 0f, 0f, 0f, 100f, 103.5f, 40f, "UnscannableVolume_MountShannCave");
	Global_1265286.f_51[20] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2720.393f, 700.15967f, 172.83205f, 0f, 0f, 0f, 80f, 80f, 80f, "UnscannableVolume_HangingDogRanchCave");
	Global_1265286.f_51[21] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2269.4268f, 1091.326f, 56.730907f, 0f, 0f, 0f, 100f, 110f, 80f, "UnscannableVolume_ElysianPoolCave");
	return;
}

void func_20(int iParam0) // Position - 0x9BA Hash - 0x12F5E565 ^0x12F5E565
{
	var unk;
	var unk4;
	var unk5;

	func_25(iParam0);

	switch (Global_1264306[iParam0 /*29*/])
	{
		case 0:
			if (func_27(iParam0, 2, func_26(iParam0)))
			{
				if (func_27(iParam0, 64, func_26(iParam0)))
					func_28(iParam0, 1);
				else
					func_29(iParam0, 0);
			}
			else if (func_30(iParam0, 4, func_26(iParam0)))
			{
				unk = { func_31(iParam0) };
			
				if (_IS_NULL_VECTOR(unk))
				{
					func_29(iParam0, 0);
				}
				else
				{
					Global_1264306[iParam0 /*29*/].f_22 = { unk };
					func_33(iParam0, 1);
				}
			}
			break;
	
		case 1:
			if (func_34(Global_1264306[iParam0 /*29*/].f_22, &unk4))
			{
				unk5 = { func_35(unk4) };
			
				if (!_IS_NULL_VECTOR(unk5))
				{
					Global_1264306[iParam0 /*29*/].f_22 = { unk5 };
				}
				else
				{
					func_29(iParam0, 0);
					return;
				}
			}
		
			if (func_36(Global_1264306[iParam0 /*29*/].f_12.f_1, Global_1264306[iParam0 /*29*/].f_22))
			{
				Global_1264306[iParam0 /*29*/].f_12.f_4 = { func_37(Global_1264306[iParam0 /*29*/].f_12.f_1 - Global_1264306[iParam0 /*29*/].f_22) };
				Global_1264306[iParam0 /*29*/].f_12.f_8 = 35f;
				func_38(iParam0, 48);
				func_29(iParam0, 0);
				return;
			}
		
			func_33(iParam0, 2);
			break;
	
		case 2:
			if (func_27(iParam0, 8, func_26(iParam0)))
			{
				if (func_30(iParam0, 16, func_26(iParam0)))
				{
					func_29(iParam0, 0);
				}
				else
				{
					func_39(iParam0);
					return;
				}
			}
			break;
	}

	return;
}

void func_21(int iParam0) // Position - 0xB61 Hash - 0x6917342D ^0x6917342D
{
	int num;
	BOOL flag;
	int num2;
	float num3;
	float groundZ;

	num = func_26(iParam0);

	if (func_40(iParam0, -1) != num)
		func_41(iParam0);

	switch (Global_1264306[iParam0 /*29*/])
	{
		case 0:
			if (!func_42(iParam0, 2, -1) && !func_42(iParam0, 4, -1))
			{
				if (!func_43(Global_1264306[iParam0 /*29*/].f_12.f_1))
				{
					func_44(iParam0, 64);
					func_44(iParam0, 2);
					return;
				}
			
				Global_1265286[iParam0 /*10*/].f_6 = { Global_1264306[iParam0 /*29*/].f_12.f_4 };
				func_44(iParam0, 1);
			
				if (!func_45(Global_1264306[iParam0 /*29*/].f_12.f_1, &Global_1265286[iParam0 /*10*/], &flag, Global_1264306[iParam0 /*29*/].f_12, false, Global_1264306[iParam0 /*29*/].f_12.f_8, 1101004800, -1138501878, -1138501878, Global_1264306[iParam0 /*29*/].f_12.f_7))
				{
					if (flag)
						func_44(iParam0, 2);
				}
				else
				{
					Global_1265286[iParam0 /*10*/].f_3.f_2 = Global_1265286[iParam0 /*10*/].f_3.f_2 + 10f;
				
					if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Global_1265286[iParam0 /*10*/].f_3, &groundZ, false))
					{
						func_44(iParam0, 2);
						return;
					}
					else if (groundZ == 0f)
					{
						func_44(iParam0, 2);
						return;
					}
				
					if (!PATHFIND::IS_NAVMESH_LOADED_IN_AREA(Global_1265286[iParam0 /*10*/].f_3, Global_1265286[iParam0 /*10*/].f_3))
					{
						func_44(iParam0, 2);
						return;
					}
				
					Global_1265286[iParam0 /*10*/].f_3.f_2 = groundZ;
					Global_1264453[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*26*/][iParam0 /*5*/].f_2 = { Global_1265286[iParam0 /*10*/].f_3 };
					func_44(iParam0, 4);
				}
			}
			break;
	
		case 2:
			if (!func_42(iParam0, 8, -1))
			{
				if (!func_46(iParam0, 4))
				{
					num3 = BUILTIN::VDIST(Global_34, Global_1264306[iParam0 /*29*/].f_22);
				
					if (num3 < 18f)
					{
						func_44(iParam0, 16);
						func_44(iParam0, 8);
						return;
					}
				}
			
				if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PLAYER::PLAYER_ID(), Global_1264306[iParam0 /*29*/].f_22, 1.5f, 100f))
				{
					if (!func_42(iParam0, 32, -1))
					{
						Global_1265286[iParam0 /*10*/].f_9 = GRAPHICS::CREATE_TRACKED_POINT();
					
						if (Global_1265286[iParam0 /*10*/].f_9 != 0 || Global_1265286[iParam0 /*10*/].f_9 != -1)
						{
							GRAPHICS::SET_TRACKED_POINT_INFO(Global_1265286[iParam0 /*10*/].f_9, Global_1264306[iParam0 /*29*/].f_22 + { 0.5f, 0f, 0f }, 1f);
							func_44(iParam0, 32);
						}
						else
						{
							func_44(iParam0, 8);
							return;
						}
					}
				
					num2 = GRAPHICS::_0xDFE332A5DA6FE7C9(Global_1265286[iParam0 /*10*/].f_9);
				
					if (num2 != -1)
					{
						if (GRAPHICS::IS_TRACKED_POINT_VISIBLE(Global_1265286[iParam0 /*10*/].f_9))
							func_44(iParam0, 16);
					
						if (Global_1265286[iParam0 /*10*/].f_9 != 0 && Global_1265286[iParam0 /*10*/].f_9 != -1 && GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1265286[iParam0 /*10*/].f_9))
							GRAPHICS::DESTROY_TRACKED_POINT(Global_1265286[iParam0 /*10*/].f_9);
					
						func_44(iParam0, 8);
					}
				}
				else
				{
					func_44(iParam0, 8);
				}
			}
			break;
	}

	return;
}

void func_22() // Position - 0xE7D Hash - 0x1E93F649 ^0x793BA77C
{
	if (!func_47())
		return;

	if (func_48(Global_1265286.f_75))
	{
		func_49();
		return;
	}

	if (!func_50(Global_1265286.f_86))
		func_51(&(Global_1265286.f_86));

	if (func_52(Global_1265286.f_86) > 1000)
	{
		func_49();
		return;
	}

	return;
}

int func_23(int iParam0, int iParam1, char* sParam2) // Position - 0xED6 Hash - 0x4A2623DD ^0x4A2623DD
{
	return 1;
}

int func_24(int iParam0, int iParam1, char* sParam2) // Position - 0xEDF Hash - 0x4A2623DD ^0x4A2623DD
{
	return 1;
}

void func_25(int iParam0) // Position - 0xEE8 Hash - 0x4588C74F ^0x6E7884F2
{
	if (Global_1264306[iParam0 /*29*/] == -1)
		return;

	if (!func_50(Global_1264306[iParam0 /*29*/].f_27))
		func_51(&(Global_1264306[iParam0 /*29*/].f_27));

	if (Global_1264306[iParam0 /*29*/] == 4 || Global_1264306[iParam0 /*29*/] == 3)
	{
		if (func_52(Global_1264306[iParam0 /*29*/].f_27) > 5000)
		{
			func_53(iParam0);
			return;
		}
	}
	else if (func_52(Global_1264306[iParam0 /*29*/].f_27) > 10000)
	{
		func_28(iParam0, 3);
		return;
	}

	return;
}

int func_26(int iParam0) // Position - 0xF7A Hash - 0xD3725A76 ^0xCA9A0804
{
	return Global_1264306[iParam0 /*29*/].f_1.f_2;
}

BOOL func_27(int iParam0, int iParam1, int iParam2) // Position - 0xF8E Hash - 0xBFE8A89 ^0x4FEA26A7
{
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i)) && !func_42(iParam0, iParam1, i) || func_40(iParam0, i) != iParam2)
			return false;
	}

	return true;
}

void func_28(int iParam0, int iParam1) // Position - 0xFDC Hash - 0x76914FBC ^0x724F4CE5
{
	func_51(&(Global_1264306[iParam0 /*29*/].f_27));
	func_54(iParam0, iParam1);
	func_33(iParam0, 4);
	return;
}

void func_29(int iParam0, int iParam1) // Position - 0x1001 Hash - 0xE1422FBD ^0x493CABAE
{
	if (Global_1264306[iParam0 /*29*/].f_26 > 0)
		Global_1264306[iParam0 /*29*/].f_26 = Global_1264306[iParam0 /*29*/].f_26 - 1;

	if (Global_1264306[iParam0 /*29*/].f_26 > 0)
		func_55(iParam0);
	else
		func_28(iParam0, iParam1);

	return;
}

BOOL func_30(int iParam0, int iParam1, int iParam2) // Position - 0x104C Hash - 0x799F8F ^0x5F407D55
{
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i)) && func_42(iParam0, iParam1, i) && func_40(iParam0, i) == iParam2)
			return true;
	}

	return false;
}

Vector3 func_31(int iParam0) // Position - 0x1098 Hash - 0xABA9FED8 ^0x7FA5382C
{
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(i)) && func_42(iParam0, 4, i) && func_40(iParam0, i) == func_26(iParam0))
			return Global_1264453[i /*26*/][iParam0 /*5*/].f_2;
	}

	return 0f, 0f, 0f;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x10F8 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_33(int iParam0, int iParam1) // Position - 0x1122 Hash - 0x8A8B37DB ^0x8A8B37DB
{
	if (Global_1264306[iParam0 /*29*/] != iParam1)
		Global_1264306[iParam0 /*29*/] = iParam1;

	return;
}

BOOL func_34(Vector3 vParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1141 Hash - 0x665CC5BD ^0x9F31BE8D
{
	*uParam3 = 0;

	while (*uParam3 <= 7)
	{
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1265286.f_51[*uParam3], vParam0))
			return true;
	
		*uParam3 = *uParam3 + 1;
	}

	return false;
}

Vector3 func_35(int iParam0) // Position - 0x117A Hash - 0x49B90609 ^0x54852F33
{
	int randomIntInRange;

	switch (iParam0)
	{
		case 0:
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		
			switch (randomIntInRange)
			{
				case 0:
					return 2761.6313f, -1374.2727f, 46.4021f;
			
				case 1:
					return 2584.707f, -1408.8739f, 46.1841f;
			
				case 2:
					return 2657.5957f, -1359.9728f, 48.7346f;
			
				case 3:
					return 2591.5857f, -1439.4099f, 46.5108f;
			
				default:
					break;
			}
			break;
	
		case 6:
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		
			switch (randomIntInRange)
			{
				case 0:
					return 692.1992f, -1059.64f, 53.6229f;
			
				case 1:
					return 683.2755f, -1089.3861f, 54.6198f;
			
				case 2:
					return 680.8776f, -1030.8749f, 47.1735f;
			
				case 3:
					return 665.3676f, -1133.8326f, 48.3046f;
			
				case 4:
					return 682.7866f, -1116.1543f, 51.5915f;
			
				case 5:
					return 682.3309f, -1059.6082f, 53.6422f;
			
				default:
					break;
			}
			break;
	
		case 7:
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		
			switch (randomIntInRange)
			{
				case 0:
					return -3097.2742f, -2489.6965f, 70.0502f;
			
				case 1:
					return -3124.8418f, -2493.9976f, 70.9493f;
			
				case 2:
					return -3118.8677f, -2500.9978f, 70.9476f;
			
				case 3:
					return -3090.036f, -2494.092f, 72.052f;
			
				default:
					break;
			}
			break;
	}

	return 0f, 0f, 0f;
}

BOOL func_36(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x1328 Hash - 0xD2D4011B ^0xD2D4011B
{
	Vector3 vector;
	var groundZ;
	var unk3;
	float distanceBetweenCoords;
	float num;
	int i;

	if (!func_56(vParam3))
		return false;

	unk3 = { vParam3 - vParam0 };
	unk3 = { func_37(unk3) };
	distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vParam3, true);
	num = distanceBetweenCoords / 6f;

	for (i = 1; i <= 5; i = i + 1)
	{
		vector = { vParam0 + (unk3 * { num, num, num } * { (float)i, (float)i, (float)i }) };
	
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, false))
			if (MISC::ABSF(vector.f_2 - groundZ) > 30f)
				return true;
	}

	return false;
}

Vector3 func_37(float fParam0, var uParam1, var uParam2) // Position - 0x13BD Hash - 0xFB6A39D2 ^0x80C9C759
{
	float num;
	float num2;

	num = BUILTIN::VMAG(fParam0);

	if (num != 0f)
	{
		num2 = 1f / num;
		fParam0 = { fParam0 * { num2, num2, num2 } };
	}
	else
	{
		fParam0 = 0f;
		fParam0.f_1 = 0f;
		fParam0.f_2 = 0f;
	}

	return fParam0;
}

void func_38(int iParam0, int iParam1) // Position - 0x13FC Hash - 0x54D874A1 ^0x839D7A21
{
	if (Global_1264306[iParam0 /*29*/].f_12 != iParam1)
		Global_1264306[iParam0 /*29*/].f_12 = iParam1;

	return;
}

void func_39(int iParam0) // Position - 0x141F Hash - 0x6EBA91E5 ^0x51D163B5
{
	func_51(&(Global_1264306[iParam0 /*29*/].f_27));
	func_33(iParam0, 3);
	return;
}

int func_40(int iParam0, int iParam1) // Position - 0x143C Hash - 0x2D5BD9E4 ^0xE8DBD74A
{
	if (iParam1 == -1)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return Global_1264453[iParam1 /*26*/][iParam0 /*5*/].f_1;
}

void func_41(int iParam0) // Position - 0x145E Hash - 0x6413EBC8 ^0x33818DE7
{
	var src;

	if (Global_1265286[iParam0 /*10*/].f_9 != 0 && Global_1265286[iParam0 /*10*/].f_9 != -1 && GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1265286[iParam0 /*10*/].f_9))
		GRAPHICS::DESTROY_TRACKED_POINT(Global_1265286[iParam0 /*10*/].f_9);

	Global_1265286[iParam0 /*10*/].f_9 = 0;

	if (func_42(iParam0, 1, -1))
	{
		func_57(&Global_1265286[iParam0 /*10*/], 1, false);
		MISC::COPY_SCRIPT_STRUCT(&Global_1265286[iParam0 /*10*/], &src, 9);
		func_58(iParam0, 1);
	}

	Global_1265286[iParam0 /*10*/].f_2 = func_59(iParam0) - Global_1264306[iParam0 /*29*/].f_26;
	func_60(iParam0, func_26(iParam0));
	Global_1264453[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*26*/][iParam0 /*5*/] = 0;
	return;
}

BOOL func_42(int iParam0, int iParam1, int iParam2) // Position - 0x1518 Hash - 0x54C74C50 ^0xA9619EEF
{
	if (iParam2 == -1)
		iParam2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return func_61(Global_1264453[iParam2 /*26*/][iParam0 /*5*/], iParam1);
}

BOOL func_43(var uParam0, var uParam1, var uParam2) // Position - 0x153E Hash - 0x9C40EE60 ^0xC55CA5CF
{
	BOOL num;
	Any any;

	any = TASK::_0x74F0209674864CBD();

	if (TASK::_0xFE5D28B9B7837CC1(any, uParam0))
		num = 1;

	TASK::_0xBEEFBB608D2AA68A(any);
	return num;
}

void func_44(int iParam0, int iParam1) // Position - 0x1564 Hash - 0x469884B9 ^0x6B3EA9BD
{
	if (!func_42(iParam0, iParam1, -1))
		func_62(&Global_1264453[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*26*/][iParam0 /*5*/], iParam1);

	return;
}

BOOL func_45(var uParam0, var uParam1, var uParam2, Any* panParam3, var uParam4, int iParam5, BOOL bParam6, Any anParam7, int iParam8, int iParam9, int iParam10, float fParam11) // Position - 0x158D Hash - 0xC31BF175 ^0x915D2C1C
{
	int num;

	switch (*panParam3)
	{
		case 0:
			if (panParam3->f_2 > 4)
			{
				*uParam4 = 1;
				return false;
			}
		
			panParam3->f_1 = TASK::_0x74F0209674864CBD();
			func_63(&(panParam3->f_1), panParam3->f_2, uParam0, iParam5, anParam7, iParam8, iParam9, iParam10, fParam11);
		
			if (!TASK::_0x1AC5A8AB50CFAA33(panParam3->f_1))
			{
			}
			else
			{
				func_64(&(panParam3->f_1), iParam5, uParam0);
			
				if (!_IS_NULL_VECTOR(panParam3->f_6))
					TASK::_0xCE4E669400E5F8AA(panParam3->f_1, func_37(panParam3->f_6));
			
				TASK::_0x2B8AF29A78024BD3(panParam3->f_1);
			}
		
			*panParam3 = 3;
			break;
	
		case 3:
			if (!TASK::_0x1AC5A8AB50CFAA33(panParam3->f_1))
				num = 4;
			else
				num = TASK::_0x0365000D8BF86531(&(panParam3->f_1));
		
			switch (num)
			{
				case 3:
					panParam3->f_3 = { TASK::_0x865732725536EE39(&(panParam3->f_1)) };
					*panParam3 = 4;
				
					if (!bParam6)
						return true;
					break;
			
				case 4:
					if (bParam6 && panParam3->f_2 < 4)
					{
						panParam3->f_2 = panParam3->f_2 + 1;
						*panParam3 = 0;
					}
					else
					{
						*uParam4 = 1;
					}
					break;
			}
			break;
	
		case 4:
			return true;
	}

	return false;
}

BOOL func_46(int iParam0, int iParam1) // Position - 0x16B2 Hash - 0xAD6C67F1 ^0x65CA03DA
{
	return func_65(Global_1264306[iParam0 /*29*/].f_12.f_9, iParam1);
}

BOOL func_47() // Position - 0x16CC Hash - 0x94241B31 ^0x41C2D4EC
{
	return Global_1265286.f_75.f_1 != -1;
}

BOOL func_48(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10) // Position - 0x16DE Hash - 0xD6D8CE78 ^0xDDF1EAC0
{
	int i;

	for (i = 0; i <= 4; i = i + 1)
	{
		if (func_66(&uParam0, &(Global_1264306[i /*29*/].f_1)))
			return true;
	}

	return false;
}

void func_49() // Position - 0x1710 Hash - 0x13E0327 ^0x93A46002
{
	var src;

	src = -1;
	src.f_1 = -1;
	src.f_2 = -1;
	MISC::COPY_SCRIPT_STRUCT(&(Global_1265286.f_75), &src, 11);
	func_67(&(Global_1265286.f_86));
	return;
}

BOOL func_50(int iParam0) // Position - 0x1743 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return iParam0 != 0;
}

void func_51(int iParam0) // Position - 0x174F Hash - 0x610FC0B7 ^0x444F5A7F
{
	*iParam0 = Global_1295666.f_16;
	return;
}

int func_52(int iParam0) // Position - 0x1760 Hash - 0x30429530 ^0xDB3DB7A7
{
	return (Global_1295666.f_16 - iParam0) * 1000;
}

void func_53(int iParam0) // Position - 0x1774 Hash - 0x7222A077 ^0x215A85BA
{
	var src;

	src = -1;
	src.f_1 = -1;
	src.f_1.f_1 = -1;
	src.f_1.f_2 = -1;
	src.f_12 = -1;
	src.f_22.f_3 = -1;
	MISC::COPY_SCRIPT_STRUCT(&Global_1264306[iParam0 /*29*/], &src, 29);
	func_67(&(Global_1264306[iParam0 /*29*/].f_27));
	return;
}

void func_54(int iParam0, int iParam1) // Position - 0x17C7 Hash - 0x4FE2E37A ^0x83FD78BC
{
	if (func_68(iParam0) != -1)
		return;

	Global_1264306[iParam0 /*29*/].f_22.f_3 = iParam1;
	return;
}

void func_55(int iParam0) // Position - 0x17EA Hash - 0x7FEA6702 ^0x41A2E918
{
	func_69(iParam0, MISC::GET_RANDOM_INT_IN_RANGE(0, 65536));

	if (func_46(iParam0, 2))
	{
		if (Global_1264306[iParam0 /*29*/].f_26 < func_59(iParam0))
		{
			func_70(iParam0, 2);
			func_71(iParam0);
		}
		else
		{
			Global_1264306[iParam0 /*29*/].f_22 = { Global_1264306[iParam0 /*29*/].f_12.f_1 };
			func_33(iParam0, 2);
		}
	}
	else if (Global_1264306[iParam0 /*29*/].f_26 == func_59(iParam0))
	{
		func_71(iParam0);
	}
	else
	{
		func_33(iParam0, 0);
	}

	return;
}

BOOL func_56(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x1875 Hash - 0x8330FD68 ^0xE09B7BC7
{
	int i;

	for (i = 16; i <= 16; i = i + 1)
	{
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1265286.f_51[i], vParam0))
			return true;
	}

	return false;
}

void func_57(Any* panParam0, int iParam1, BOOL bParam2) // Position - 0x18AB Hash - 0xDC7EB85A ^0x8E2A3227
{
	panParam0->f_2 = 0;

	if (!bParam2)
		panParam0->f_6 = { 0f, 0f, 0f };

	if (iParam1 && TASK::_0x1AC5A8AB50CFAA33(panParam0->f_1))
		TASK::_0x0365000D8BF86531(&(panParam0->f_1));

	*panParam0 = 0;
	return;
}

void func_58(int iParam0, int iParam1) // Position - 0x18E6 Hash - 0xDDF7044F ^0x3B97DC0E
{
	if (func_42(iParam0, iParam1, -1))
		func_72(&Global_1264453[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*26*/][iParam0 /*5*/], iParam1);

	return;
}

int func_59(int iParam0) // Position - 0x190E Hash - 0xD21F6B3 ^0xD21F6B3
{
	int num;

	num = 4;

	if (func_46(iParam0, 1))
		num = 1;

	return num;
}

void func_60(int iParam0, int iParam1) // Position - 0x1928 Hash - 0x943EED31 ^0xDBDDBB0A
{
	if (Global_1264453[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*26*/][iParam0 /*5*/].f_1 != iParam1)
		Global_1264453[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*26*/][iParam0 /*5*/].f_1 = iParam1;

	return;
}

BOOL func_61(int iParam0, int iParam1) // Position - 0x1957 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_62(int iParam0, int iParam1) // Position - 0x1966 Hash - 0xF55E891F ^0xF55E891F
{
	func_73(iParam0, iParam1);
	return;
}

void func_63(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, Any anParam6, int iParam7, int iParam8, int iParam9, float fParam10) // Position - 0x1976 Hash - 0xF3743088 ^0xD7A675F3
{
	int num;
	int num2;

	if (!_IS_NULL_VECTOR(uParam2))
		TASK::_0x2064B33F6E6B92D4(*uParam0, uParam2);

	TASK::_0x9B6A58FDB0024F12(*uParam0, iParam7);

	switch (iParam5)
	{
		case 27:
			TASK::_0xB8E3486D107F4194(*uParam0, 90f);
			TASK::_0x827A58CED9D4D5B4(*uParam0, 180f);
			break;
	
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
			break;
	
		case 42:
			TASK::_0xB8E3486D107F4194(*uParam0, fParam10);
			break;
	
		case 48:
			TASK::_0x827A58CED9D4D5B4(*uParam0, anParam6);
			break;
	
		default:
			TASK::_0x827A58CED9D4D5B4(*uParam0, anParam6);
		
			if (fParam10 != 0f)
				TASK::_0xB8E3486D107F4194(*uParam0, fParam10);
			break;
	}

	switch (iParam5)
	{
		case 0:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 14:
		case 15:
		case 16:
		case 18:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 32:
		case 33:
		case 34:
		case 35:
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
			TASK::_0xE9225354FB7437A7(*uParam0, 1);
			break;
	}

	switch (iParam5)
	{
		case 12:
		case 13:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 8192);
			break;
	}

	switch (iParam5)
	{
		case 2:
		case 3:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 5);
			break;
	}

	switch (iParam5)
	{
		case 35:
		case 43:
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			break;
	}

	if (iParam8 == -0.01f)
	{
		switch (iParam5)
		{
			case 0:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 55f);
				break;
		
			case 2:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 25f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
		
			case 4:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 2.5f);
				break;
		
			case 5:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
		
			case 6:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 7:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 8:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 9:
				TASK::_0x954451EA2D2120FB(*uParam0, 12f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 18f);
				break;
		
			case 10:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
		
			case 11:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				break;
		
			case 12:
			case 13:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, (80f - 40f) / 2f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 0f);
				break;
		
			case 14:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
		
			case 15:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 40f);
				break;
		
			case 16:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
		
			case 18:
				TASK::_0x954451EA2D2120FB(*uParam0, 1f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 20f);
				break;
		
			case 20:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 21:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
		
			case 22:
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
		
			case 23:
			case 24:
			case 25:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 26:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
		
			case 27:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
		
			case 28:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 50f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 45f);
				break;
		
			case 29:
				TASK::_0x954451EA2D2120FB(*uParam0, 15f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 25f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 20f);
				break;
		
			case 30:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
		
			case 31:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 140f);
				break;
		
			case 32:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 125f);
				break;
		
			case 33:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 34:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 35:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
		
			case 36:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_74(10f, 40f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_74(30f, 60f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 37:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_74(40f, 80f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_74(50f, 90f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 38:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_74(30f, 60f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_74(50f, 80f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 39:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_74(0f, 10f, 1f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_74(5f, 15f, 1f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 3f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 3f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 40:
				TASK::_0x2EB977293923C723(*uParam0, 40f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_74(60f, 120f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_74(100f, 130f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 20f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 41:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_74(10f, 35f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_74(25f, 50f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 42:
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_74(50f, 70f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_74(65f, 85f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 43:
				TASK::_0x2EB977293923C723(*uParam0, func_74(95f, 90f, 80f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, func_74(95f, 90f, 80f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_74(125f, 115f, 100f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 44:
			case 45:
				TASK::_0x2EB977293923C723(*uParam0, 60f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_74(60f, 80f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_74(75f, 95f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 46:
				num = func_75(uParam2, true);
				num2 = func_76(uParam2);
			
				if (num2 == 15 || num2 == 14 || num2 == 13 || num2 == 9 && num == -1 || num2 == 4 && num == -1)
				{
					TASK::_0x2EB977293923C723(*uParam0, func_74(100f, 80f, -5f, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, func_74(100f, 80f, -5f, iParam1));
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_74(110f, 160f, 12.5f, iParam1));
				}
				else
				{
					TASK::_0x2EB977293923C723(*uParam0, func_74(100f, 70f, -7.5f, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, 70f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_74(80f, 150f, 17.5f, iParam1));
				}
			
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
			
				if (iParam1 <= 2)
				{
					TASK::_0x19BC99C678FBA139(*uParam0, 2, 0);
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
				break;
		
			case 47:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_74(50f, 90f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
			
				if (iParam1 <= 2)
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				break;
		
			case 48:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, func_74(100f, 70f, -7.5f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_74(150f, 190f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
			
				if (iParam1 <= 2)
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				break;
		
			case 49:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x2EB977293923C723(*uParam0, 50f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_74(10f, 50f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 50:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_74(30f, 70f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_74(65f, 95f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 25f);
				TASK::_0x450080DDEDB91258(*uParam0, 25f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 51:
				TASK::_0x2EB977293923C723(*uParam0, 25f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_74(25f, 35f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_74(40f, 50f, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 8f);
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 52:
				TASK::_0x2EB977293923C723(*uParam0, 0f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_74(40f, 100f, 10f, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			default:
				if (iParam1 == 0)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 1f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 5f);
				}
				else if (iParam1 == 1)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 5f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				}
				else if (iParam1 == 2)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 15f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 35f);
				}
				else
				{
					iParam1 = 3;
					TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
					TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
					TASK::_0x954451EA2D2120FB(*uParam0, 35f);
				
					if (iParam5 != 19)
						TASK::_0x0F4F6C4CE471259D(*uParam0, 160f);
					else
						TASK::_0x0F4F6C4CE471259D(*uParam0, 65f);
				}
				break;
		}
	}
	else
	{
		TASK::_0x954451EA2D2120FB(*uParam0, iParam8);
		TASK::_0x0F4F6C4CE471259D(*uParam0, iParam9);
	}

	return;
}

void func_64(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4) // Position - 0x2784 Hash - 0xF7709AA0 ^0xA0B87357
{
	switch (iParam1)
	{
		case 0:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
	
		case 1:
		case 19:
		case 20:
		case 45:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	
		case 2:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
	
		case 3:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
	
		case 4:
		case 5:
		case 6:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 7:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 8:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 9:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 10:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
	
		case 11:
		case 30:
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 12:
		case 13:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			TASK::_0xBC3F847AE2C3DC65(*uParam0, 25f);
			TASK::_0x450080DDEDB91258(*uParam0, 25f);
			break;
	
		case 14:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	
		case 15:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
	
		case 16:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 5, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 17:
			TASK::_0x2EB977293923C723(*uParam0, 40f);
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	
		case 18:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
	
		case 21:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
	
		case 22:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 23:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 24:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 25:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 26:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
	
		case 27:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 74, 0);
			break;
	
		case 28:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
	
		case 29:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 12, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	
		case 31:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
	
		case 32:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
	
		case 33:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 3, 0);
			break;
	
		case 34:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 35:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
	
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			break;
	
		case 41:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			break;
	
		case 42:
		case 44:
		case 49:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
	
		case 43:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 5, 0);
			break;
	
		case 46:
		case 47:
		case 48:
			if (func_75(uParam2, true) == 5)
			{
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 53, 1, 0);
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 74, 1, 0);
			}
			else
			{
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			}
		
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
	
		case 50:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
	
		case 51:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			break;
	
		case 52:
			break;
	
		case 53:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 9, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			break;
	}

	return;
}

BOOL func_65(int iParam0, int iParam1) // Position - 0x2F44 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_66(var uParam0, var uParam1) // Position - 0x2F53 Hash - 0xD3440D0F ^0xAB7AF985
{
	if (uParam0->f_1 != uParam1->f_1)
		return false;

	if (*uParam0 != *uParam1)
		return false;

	if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_3), &(uParam1->f_3)))
		return false;

	return true;
}

void func_67(int iParam0) // Position - 0x2F8C Hash - 0x4918B04C ^0x4918B04C
{
	*iParam0 = 0;
	return;
}

int func_68(int iParam0) // Position - 0x2F98 Hash - 0xD3725A76 ^0xD8F5E177
{
	return Global_1264306[iParam0 /*29*/].f_22.f_3;
}

void func_69(int iParam0, int iParam1) // Position - 0x2FAC Hash - 0xBE5DF38B ^0x8CC95B21
{
	if (Global_1264306[iParam0 /*29*/].f_1.f_2 != iParam1)
		Global_1264306[iParam0 /*29*/].f_1.f_2 = iParam1;

	return;
}

void func_70(int iParam0, int iParam1) // Position - 0x2FD3 Hash - 0x90221229 ^0x201F98F7
{
	if (func_46(iParam0, iParam1))
		func_77(&(Global_1264306[iParam0 /*29*/].f_12.f_9), iParam1);

	return;
}

void func_71(int iParam0) // Position - 0x2FF8 Hash - 0x2074E26 ^0xA2592E2E
{
	var unk;
	var unk4;
	var unk7;
	var unk10;
	int i;

	unk = { Global_1264306[iParam0 /*29*/].f_12.f_1 };

	if (func_78(unk, &unk10))
	{
		Global_1264306[iParam0 /*29*/].f_12.f_1 = { func_79(unk10) };
		func_38(iParam0, 47);
		func_33(iParam0, 0);
		return;
	}

	if (func_80(unk, &unk10))
	{
		Global_1264306[iParam0 /*29*/].f_22 = { func_81(unk10) };
		func_33(iParam0, 2);
		return;
	}

	if (func_82(unk))
	{
		for (i = 0; i <= 7; i = i + 1)
		{
			unk7 = { func_83(i) };
			unk4 = { unk + unk7 };
		
			if (!func_82(unk4))
			{
				Global_1264306[iParam0 /*29*/].f_12.f_4 = { unk7 };
				Global_1264306[iParam0 /*29*/].f_12.f_8 = 35f;
				func_38(iParam0, 48);
				func_33(iParam0, 0);
				return;
			}
		}
	
		func_28(iParam0, 4);
		return;
	}

	func_33(iParam0, 0);
	return;
}

void func_72(int iParam0, int iParam1) // Position - 0x30F4 Hash - 0xF55E891F ^0xF55E891F
{
	func_84(iParam0, iParam1);
	return;
}

void func_73(int iParam0, int iParam1) // Position - 0x3104 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

float func_74(float fParam0, float fParam1, float fParam2, int iParam3) // Position - 0x3115 Hash - 0x3A11F625 ^0x3A11F625
{
	float num;

	num = fParam0;
	num = num + (fParam2 * (float)iParam3);

	if (num > fParam1)
		num = fParam1;

	return num;
}

int func_75(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x313A Hash - 0x4DC6667D ^0xBA61FD45
{
	int num;

	num = func_85();

	if (func_86(num))
		if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[num /*36*/].f_4) && VOLUME::IS_POINT_IN_VOLUME(Global_1887363[num /*36*/].f_4, vParam0))
			return num;

	return func_87(vParam0, bParam3);
}

int func_76(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x3188 Hash - 0x56F0811C ^0x278FB5A
{
	return func_88(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

void func_77(int iParam0, int iParam1) // Position - 0x319E Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

BOOL func_78(Vector3 vParam0, var uParam1, var uParam2, var uParam3) // Position - 0x31B3 Hash - 0xDA42D599 ^0x22DE38A4
{
	*uParam3 = 8;

	while (*uParam3 <= 15)
	{
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1265286.f_51[*uParam3], vParam0))
			return true;
	
		*uParam3 = *uParam3 + 1;
	}

	return false;
}

Vector3 func_79(int iParam0) // Position - 0x31EE Hash - 0x563C355B ^0x563C355B
{
	int randomIntInRange;

	switch (iParam0)
	{
		case 8:
			return -100.8f, 1323.5f, 175.2f;
	
		case 9:
			return 466.8f, 1453.4f, 167.6f;
	
		case 10:
			return -5187.461f, -2234.0137f, 4.4936f;
	
		case 11:
			return -6340.9097f, -3696.9126f, -14.1772f;
	
		case 12:
			return -6443.8306f, -3520.8232f, -26.0969f;
	
		case 13:
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		
			switch (randomIntInRange)
			{
				case 0:
					return -3551.0925f, -1892.7413f, 6.6481f;
			
				case 1:
					return -3614.1108f, -1824.39f, 42.1228f;
			
				default:
					break;
			}
			break;
	
		case 14:
			return -2552.1104f, 676.8995f, 139.4233f;
	
		case 15:
			return 431.3042f, 1882.3427f, 200.1935f;
	}

	return 0f, 0f, 0f;
}

BOOL func_80(Vector3 vParam0, var uParam1, var uParam2, var uParam3) // Position - 0x32F2 Hash - 0x49EFD550 ^0xC2A56882
{
	*uParam3 = 17;

	while (*uParam3 <= 21)
	{
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1265286.f_51[*uParam3], vParam0))
			return true;
	
		*uParam3 = *uParam3 + 1;
	}

	return false;
}

Vector3 func_81(int iParam0) // Position - 0x332D Hash - 0xEDA250FF ^0xEA103DED
{
	int randomIntInRange;

	switch (iParam0)
	{
		case 17:
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		
			switch (randomIntInRange)
			{
				case 0:
					return 801.0809f, 1590.7611f, 191.8018f;
			
				case 1:
					return 787.089f, 1578.2063f, 192.1368f;
			
				default:
					break;
			}
			break;
	
		case 18:
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		
			switch (randomIntInRange)
			{
				case 0:
					return 1361.741f, 1834.1854f, 191.9639f;
			
				case 1:
					return 1366.3344f, 1825.9519f, 191.9067f;
			
				default:
					break;
			}
			break;
	
		case 19:
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		
			switch (randomIntInRange)
			{
				case 0:
					return -2133.4844f, 21.9821f, 267.3751f;
			
				case 1:
					return -2102.5505f, 19.7074f, 271.3395f;
			
				case 2:
					return -2138.6526f, -18.8593f, 249.3509f;
			
				case 3:
					return -2151.5254f, -30.694f, 243.5381f;
			
				default:
					break;
			}
			break;
	
		case 20:
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		
			switch (randomIntInRange)
			{
				case 0:
					return -2621.1782f, 707.432f, 166.5945f;
			
				case 1:
					return -2661.782f, 701.2828f, 182.7456f;
			
				case 2:
					return -2640.0542f, 696.5616f, 178.054f;
			
				case 3:
					return -2632.1074f, 710.8809f, 170.3972f;
			
				default:
					break;
			}
			break;
	
		case 21:
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		
			switch (randomIntInRange)
			{
				case 0:
					return 2328.9702f, 984.2775f, 74.5295f;
			
				case 1:
					return 2379.057f, 986.2366f, 73.9579f;
			
				case 2:
					return 2322.6575f, 990.1773f, 76.9349f;
			
				case 3:
					return 2358.9014f, 1005.7232f, 85.4943f;
			
				default:
					break;
			}
			break;
	}

	return 0f, 0f, 0f;
}

BOOL func_82(float fParam0, var uParam1, var uParam2) // Position - 0x353D Hash - 0x427BB0D4 ^0x7A7DF6B3
{
	float num;
	float num2;
	float num3;
	float num4;
	int numNavmeshesExistingInArea;

	num = 150f;
	num2 = num * 1.5f;
	num2 = num2 + 0.1f;
	num3 = fParam0 - num2;
	num3.f_1 = fParam0.f_1 - num2;
	num3.f_2 = fParam0.f_2 - num2;
	num4 = fParam0 + num2;
	num4.f_1 = fParam0.f_1 + num2;
	num4.f_2 = fParam0.f_2 + num2;
	numNavmeshesExistingInArea = PATHFIND::GET_NUM_NAVMESHES_EXISTING_IN_AREA(num3, num4);

	if (numNavmeshesExistingInArea < 16)
		return true;

	return false;
}

Vector3 func_83(int iParam0) // Position - 0x35B4 Hash - 0xD788B8A9 ^0x204642AF
{
	switch (iParam0)
	{
		case 0:
			return 0f, 250f, 0f;
	
		case 1:
			return BUILTIN::SIN(45f) * 250f, BUILTIN::COS(45f) * 250f, 0f;
	
		case 2:
			return 250f, 0f, 0f;
	
		case 3:
			return BUILTIN::SIN(45f) * 250f, -1f * BUILTIN::COS(45f) * 250f, 0f;
	
		case 4:
			return 0f, 250f * -1f, 0f;
	
		case 5:
			return -1f * BUILTIN::SIN(45f) * 250f, -1f * BUILTIN::COS(45f) * 250f, 0f;
	
		case 6:
			return 250f * -1f, 0f, 0f;
	
		case 7:
			return -1f * BUILTIN::SIN(45f) * 250f, BUILTIN::COS(45f) * 250f, 0f;
	}

	return 0f, 0f, 0f;
}

void func_84(int iParam0, int iParam1) // Position - 0x36CB Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

int func_85() // Position - 0x36E0 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1893611.f_2;
}

BOOL func_86(int iParam0) // Position - 0x36EE Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

int func_87(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x3704 Hash - 0xA4504257 ^0xA4504257
{
	int num;
	int num2;
	int num3;
	BOOL flag;
	int num4;

	num = func_89(vParam0);
	num2 = -1;

	if (Global_1893594[num] > 0)
	{
		num3 = Global_1893594[num] - 1;
		flag = false;
	
		while (num3 >= 0 && !flag)
		{
			num4 = Global_1892777[num /*51*/][num3];
		
			if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[num4 /*36*/].f_4))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(Global_1887363[num4 /*36*/].f_4, vParam0))
				{
					switch (Global_1887363[num4 /*36*/].f_21)
					{
						case 5:
							if (!bParam3)
							{
								num2 = num4;
								flag = true;
							}
							break;
					
						default:
							num2 = num4;
							flag = true;
							break;
					}
				}
			}
		
			num3 = num3 - 1;
		}
	}

	if (num2 != -1)
	{
	}

	return num2;
}

int func_88(Hash hParam0) // Position - 0x37BB Hash - 0x50573299 ^0x50573299
{
	switch (hParam0)
	{
		case joaat("riobravo"):
			return 14;
	
		case joaat("GaptoothRidge"):
			return 13;
	
		case joaat("scarlettmeadows"):
			return 11;
	
		case joaat("GuarmaD"):
			return 8;
	
		case joaat("GrizzliesEast"):
			return 6;
	
		case joaat("ChollaSprings"):
			return 15;
	
		case joaat("heartlands"):
			return 9;
	
		case joaat("roanoke"):
			return 10;
	
		case joaat("greatplains"):
			return 4;
	
		case joaat("bigvalley"):
			return 1;
	
		case joaat("HennigansStead"):
			return 16;
	
		case joaat("BluewaterMarsh"):
			return 2;
	
		case joaat("GrizzliesWest"):
			return 7;
	
		case joaat("talltrees"):
			return 12;
	
		case joaat("Cumberland"):
			return 3;
	
		case joaat("bayounwa"):
			return 0;
	
		default:
		
	}

	return -1;
}

int func_89(var uParam0, var uParam1, var uParam2) // Position - 0x3875 Hash - 0x5486635E ^0x2FAAB3B2
{
	int num;

	num = func_90(uParam0, 0f, 0f, 0, 2);
	return func_90(uParam0, Global_1892764[num /*3*/].f_1, Global_1892764[num /*3*/].f_2, Global_1892764[num /*3*/], 4);
}

int func_90(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6) // Position - 0x38B0 Hash - 0xA452440E ^0xD3F785A1
{
	if (fParam0 < fParam3)
		if (fParam0.f_1 < fParam4)
			return iParam5 + iParam6;
		else
			return iParam5;

	if (fParam0.f_1 < fParam4)
		return iParam5 + iParam6 + 1;

	return iParam5 + 1;
}

