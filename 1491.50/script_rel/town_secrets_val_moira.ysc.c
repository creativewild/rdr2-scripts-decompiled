#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 2;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 1;
	var uLocal_6 = 0;
	var uLocal_7 = 24;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
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
	int iLocal_109 = 0;
	var uScriptParam_0 = 0;
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

void main() // Position - 0x0 Hash - 0x6D450A5 ^0x1AEFC79B
{
	int idOfThisThread;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
		func_1(&idOfThisThread);

	while (func_2(&idOfThisThread))
	{
		switch (iLocal_109)
		{
			case 0:
				if (func_3(&idOfThisThread))
					iLocal_109 = 1;
			
				idOfThisThread = SCRIPTS::GET_ID_OF_THIS_THREAD();
				break;
		
			case 1:
				func_4(&idOfThisThread);
			
				if (func_6(func_5()))
					iLocal_109 = 2;
			
				if (idOfThisThread.f_2)
					iLocal_109 = 2;
				break;
		
			case 2:
				func_1(&idOfThisThread);
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1(&idOfThisThread);
	return;
}

void func_1(var uParam0) // Position - 0x88 Hash - 0xEB8FD153 ^0x81DAD274
{
	if (uParam0->f_1)
		return;

	func_7(uParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_2(var uParam0) // Position - 0xA4 Hash - 0x7C7E3F99 ^0x96BAC17B
{
	if (uParam0->f_1)
		return true;

	if (func_8() != func_9())
		return false;

	if (func_10(Global_1935630, 2097152))
		return false;

	return true;
}

BOOL func_3(var uParam0) // Position - 0xDA Hash - 0xD8339586 ^0x20E3C6B7
{
	int num;
	int num2;

	if (func_11(func_5(), 4))
	{
		func_12(&(iLocal_0.f_108), 1);
		num = 1;
	}

	if (num && num2 && !func_6(func_5()))
		func_13(func_5());

	return true;
}

void func_4(var uParam0) // Position - 0x11D Hash - 0xA2EDAFA9 ^0x27F8280D
{
	float num;
	BOOL flag;

	num = func_15(Global_35, func_14(0), true);
	flag = false;

	if (iLocal_0 < 5)
	{
		if (num < 20f)
		{
			if (func_16(Global_35, iLocal_0.f_5[0], true, 0))
				flag = true;
		
			if (PED::IS_PED_SHOOTING(Global_35) || func_17(PLAYER::GET_PLAYER_INDEX(), true, false, true) || LAW::_0xF46108C50A22B029())
			{
				func_12(&(iLocal_0.f_108), 5);
				iLocal_0 = 5;
			}
		}
	}

	switch (iLocal_0)
	{
		case 0:
			if (func_6(func_5()))
			{
				func_18(&iLocal_0, 6);
				return;
			}
		
			if (num < 20f && !PED::IS_PED_FULLY_ON_MOUNT(Global_35, true))
				func_18(&iLocal_0, 1);
			break;
	
		case 1:
			if (!func_19())
				return;
		
			func_18(&iLocal_0, 2);
			break;
	
		case 2:
			if (!func_20())
				return;
		
			func_18(&iLocal_0, 3);
			break;
	
		case 3:
			if (!func_21(&iLocal_0))
				return;
		
			func_18(&iLocal_0, 4);
			break;
	
		case 4:
			if (!func_22(iLocal_0.f_108, 1))
				if (flag)
					func_12(&(iLocal_0.f_108), 1);
		
			if (num > 40f)
				func_18(&iLocal_0, 5);
		
			if (func_22(iLocal_0.f_108, 1) && !func_22(iLocal_0.f_108, 4))
			{
				switch (iLocal_0.f_1)
				{
					case 0:
						if (func_25(&(iLocal_0.f_7), func_24(func_23(0)), false, -1, false, false))
						{
							func_26(&(iLocal_0.f_105));
							func_27(joaat("CSTAG_SP_TRELAWNY_FAMILY"), 1017034651, 1120952528, -1, 1, true, false);
							func_28(&(iLocal_0.f_1), 1);
						}
						break;
				
					case 1:
						if (func_29(&(iLocal_0.f_105)) > 3f && !func_30(true) && func_25(&(iLocal_0.f_7), func_24(func_23(1)), false, -1, false, false))
							func_28(&(iLocal_0.f_1), 2);
						break;
				
					case 2:
						if (func_29(&(iLocal_0.f_105)) > 3f && !func_30(true) && func_25(&(iLocal_0.f_7), func_24(func_23(2)), false, -1, false, false))
						{
							func_12(&(iLocal_0.f_108), 4);
							func_31(&(iLocal_0.f_105));
							func_32(func_5(), 4);
							func_28(&(iLocal_0.f_1), -1);
						}
						break;
				}
			}
		
			if (!func_6(func_5()) && func_11(func_5(), 4) && !func_30(true))
			{
				func_13(func_5());
				func_18(&iLocal_0, 5);
			}
			break;
	
		case 5:
			func_33(&iLocal_0);
		
			if (func_30(true))
				func_34(true, false, false);
		
			if (func_6(func_5()) || func_22(iLocal_0.f_108, 5))
				func_18(&iLocal_0, 6);
			else
				func_18(&iLocal_0, 0);
			break;
	
		case 6:
			break;
	}

	return;
}

int func_5() // Position - 0x3F6 Hash - 0xDF9E118A ^0xDF9E118A
{
	return 3;
}

BOOL func_6(int iParam0) // Position - 0x3FF Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_11(iParam0, 2);
}

void func_7(var uParam0) // Position - 0x40E Hash - 0xAC47CEBA ^0xB7A06E24
{
	int num;
	int num2;
	int i;

	i = 0;

	for (i = 0; i <= 2 - 1; i = i + 1)
	{
		num = i;
	
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_0.f_2[num]))
			PED::DELETE_PED(&iLocal_0.f_2[num]);
	}

	for (i = 0; i <= 1 - 1; i = i + 1)
	{
		num2 = i;
	
		if (VOLUME::DOES_VOLUME_EXIST(iLocal_0.f_5[num2]))
			VOLUME::DELETE_VOLUME(iLocal_0.f_5[num2]);
	}

	if (HUD::_DOES_TEXT_BLOCK_EXIST(func_35()))
		if (HUD::TEXT_BLOCK_IS_LOADED(func_35()))
			HUD::_TEXT_BLOCK_DELETE(func_35());

	return;
}

eStackSize func_8() // Position - 0x49D Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

eStackSize func_9() // Position - 0x4AB Hash - 0xCAC54F7C ^0xCAC54F7C
{
	return 76;
}

BOOL func_10(int iParam0, int iParam1) // Position - 0x4B5 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_11(int iParam0, BOOL bParam1) // Position - 0x4C4 Hash - 0xA750EBE5 ^0xA750EBE5
{
	if (!func_36(iParam0))
		return false;

	return Global_40.f_9020[iParam0] && bParam1 != false;
}

void func_12(var uParam0, int iParam1) // Position - 0x4E9 Hash - 0xF55E891F ^0xF55E891F
{
	func_37(uParam0, iParam1);
	return;
}

void func_13(int iParam0) // Position - 0x4F9 Hash - 0xCF51B75C ^0xCF51B75C
{
	func_32(iParam0, 2);
	return;
}

Vector3 func_14(int iParam0) // Position - 0x508 Hash - 0x72DB1375 ^0x72DB1375
{
	switch (iParam0)
	{
		case 0:
			return -277.78015f, 807.9898f, 121.59975f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

float func_15(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x533 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

BOOL func_16(Ped pedParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0x55B Hash - 0x6735ACA9 ^0xD6205CC6
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, bParam2, iParam3);
}

BOOL func_17(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x591 Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_38(bParam1, bParam2, bParam3);

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

void func_18(var uParam0, int iParam1) // Position - 0x6C6 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_19() // Position - 0x6D3 Hash - 0x62987750 ^0x67E5C92C
{
	int i;
	int num;

	for (i = 0; i <= 2 - 1; i = i + 1)
	{
		num = i;
		STREAMING::REQUEST_MODEL(func_39(num), false);
	}

	PED::_RESERVE_AMBIENT_PEDS(2);

	if (HUD::_DOES_TEXT_BLOCK_EXIST(func_35()))
		HUD::TEXT_BLOCK_REQUEST(func_35());

	return true;
}

BOOL func_20() // Position - 0x718 Hash - 0x6CD7B2BF ^0xE1AF2FE6
{
	BOOL num;
	int i;
	int num2;

	num = 1;

	for (i = 0; i <= 2 - 1; i = i + 1)
	{
		num2 = i;
	
		if (!STREAMING::HAS_MODEL_LOADED(func_39(num2)))
			num = 0;
	}

	if (!HUD::TEXT_BLOCK_IS_LOADED(func_35()))
		num = 0;

	return num;
}

BOOL func_21(var uParam0) // Position - 0x75D Hash - 0x103266C6 ^0x4DFBB2A7
{
	int i;
	int num;
	int num2;
	Vector3 vector;

	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED() < 2)
		return false;

	if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
		return false;

	for (i = 0; i <= 2 - 1; i = i + 1)
	{
		num = i;
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[num]))
		{
			uParam0->f_2[num] = func_41(func_39(num), func_40(num), 0f, true, true, 0, true, true, true, false, false, false, false);
			return false;
		}
	}

	for (i = 0; i <= 1 - 1; i = i + 1)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_5[i]))
		{
			num2 = i;
			vector = { func_42(num2) };
			uParam0->f_5[i] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(vector.f_10, vector, vector.f_3, vector.f_6, vector.f_9);
		}
	}

	func_43(&(uParam0->f_7), uParam0->f_2[0], "VAL_Sheriff", false);
	func_43(&(uParam0->f_7), uParam0->f_2[1], "MOIRA", false);
	AUDIO::STOP_PED_SPEAKING(uParam0->f_2[0], true);
	AUDIO::STOP_PED_SPEAKING(uParam0->f_2[1], true);
	return true;
}

BOOL func_22(int iParam0, int iParam1) // Position - 0x861 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

char* func_23(int iParam0) // Position - 0x870 Hash - 0x9E6FF0D8 ^0x9E6FF0D8
{
	switch (iParam0)
	{
		case 0:
			return "VVSM1_ACTION_A";
	
		case 1:
			return "VVSM1_ACTION_B";
	
		case 2:
			return "VVSM1_ACTION_C";
	
		default:
		
	}

	return "";
}

Vector3 func_24(char* sParam0) // Position - 0x8A7 Hash - 0xB2B2D053 ^0xB2B2D053
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam0, 24);
	return unk;
}

BOOL func_25(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x8B9 Hash - 0x4863E989 ^0xB2E91EEF
{
	BOOL flag;

	if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&uParam1))
		flag = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&uParam1);
	else
		flag = true;

	if (flag)
	{
		func_44(uParam1, uParam0);
	
		if (bParam6)
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
		else
			AUDIO::START_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
	
		if (bParam4)
			AUDIO::_0x40CA665AB9D8D505(&uParam1, iParam5);
	}

	return flag;
}

void func_26(var uParam0) // Position - 0x913 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_45(uParam0, 0f);
	return;
}

int func_27(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x922 Hash - 0x8BF3BA53 ^0xECA3E26
{
	int i;
	eStackSize stackSize;
	int num;
	int num2;
	int j;

	for (i = 0; i < 60; i = i + 1)
	{
		if (Global_40.f_4283.f_6[i /*5*/] == iParam0)
			return 1;
	}

	num = func_46(iParam0);
	num2 = func_47(iParam0);

	for (i = 0; i < 60; i = i + 1)
	{
		if (Global_40.f_4283.f_6[i /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[i /*5*/] = iParam0;
			Global_40.f_4283.f_6[i /*5*/].f_2 = iParam1;
			Global_40.f_4283.f_6[i /*5*/].f_3 = num2;
		
			if (iParam3 > 0)
			{
				stackSize = func_48();
				func_49(&stackSize, 0, 0, iParam3, 0, 0, 0, false);
			}
			else
			{
				stackSize = -15;
			}
		
			Global_40.f_4283.f_6[i /*5*/].f_1 = stackSize;
			Global_40.f_4283.f_6[i /*5*/].f_4 = num;
			func_50(iParam0, true);
		
			if (func_51(num))
			{
				for (j = 0; j < 60; j = j + 1)
				{
					if (Global_40.f_4283.f_6[j /*5*/].f_4 == num && Global_40.f_4283.f_6[j /*5*/] != iParam0)
						func_52(&Global_40.f_4283.f_6[j /*5*/], true, false);
				}
			}
		
			if (bParam5)
				if (bParam6)
					func_53(1, iParam0);
				else
					func_54(1, iParam0);
		
			return 1;
		}
	}

	return 0;
}

void func_28(var uParam0, int iParam1) // Position - 0xA76 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

float func_29(var uParam0) // Position - 0xA83 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_55(uParam0))
		return uParam0->f_1;

	if (func_56(uParam0))
		return uParam0->f_2;

	return func_57() - uParam0->f_1;
}

BOOL func_30(BOOL bParam0) // Position - 0xAB8 Hash - 0xD6E12BEB ^0xEB8894D
{
	return AUDIO::_IS_ANY_CONVERSATION_PLAYING(bParam0);
}

void func_31(var uParam0) // Position - 0xAC6 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_32(int iParam0, BOOL bParam1) // Position - 0xADC Hash - 0x9A8E96E6 ^0x9A8E96E6
{
	if (!func_36(iParam0))
		return;

	Global_40.f_9020[iParam0] = Global_40.f_9020[iParam0] || bParam1;
	return;
}

int func_33(var uParam0) // Position - 0xB08 Hash - 0xF0989A86 ^0xC3A8508B
{
	int i;
	int num;

	for (i = 0; i <= 2 - 1; i = i + 1)
	{
		num = i;
	
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[num]))
			PED::DELETE_PED(&uParam0->f_2[num]);
	
		if (STREAMING::IS_MODEL_VALID(func_39(num)))
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_39(num));
	
		if (HUD::TEXT_BLOCK_IS_LOADED(func_35()))
			HUD::_TEXT_BLOCK_DELETE(func_35());
	}

	for (i = 0; i <= 1 - 1; i = i + 1)
	{
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_5[i]))
			VOLUME::DELETE_VOLUME(uParam0->f_5[i]);
	}

	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() > 0)
		PED::_UNRESERVE_AMBIENT_PEDS(2);

	return 1;
}

void func_34(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xBAA Hash - 0x7990926B ^0xBD6909E0
{
	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(bParam0, bParam1, bParam2);
	return;
}

char* func_35() // Position - 0xBBC Hash - 0xC9C2B10F ^0xC9C2B10F
{
	return "VVSM1AU";
}

BOOL func_36(int iParam0) // Position - 0xBC7 Hash - 0x75AD7F8B ^0x75AD7F8B
{
	return iParam0 > -1 && iParam0 < 4;
}

void func_37(var uParam0, int iParam1) // Position - 0xBDC Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_38(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xBED Hash - 0xC9655EC3 ^0x88C9AFE1
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

ePedType func_39(int iParam0) // Position - 0xC8B Hash - 0xF00685F3 ^0x87CB6913
{
	switch (iParam0)
	{
		case 0:
			return joaat("a_m_m_valtownfolk_01");
	
		case 1:
			return joaat("a_f_m_valprostitute_01");
	
		default:
		
	}

	return joaat("a_m_m_valtownfolk_01");
}

Vector3 func_40(int iParam0) // Position - 0xCBC Hash - 0xF6858EF6 ^0xF6858EF6
{
	switch (iParam0)
	{
		case 0:
			return -278.77014f, 808.7886f, 121.59975f;
	
		case 1:
			return -276.95807f, 809.0951f, 121.59975f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

Ped func_41(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0xCFF Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_58(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

struct<11> func_42(int iParam0) // Position - 0xD41 Hash - 0x19E1B771 ^0xA521A56C
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk = { -278.72034f, 812.5399f, 122.88185f };
			unk.f_3 = { 0f, 0f, 8.599687f };
			unk.f_6 = { 4.275794f, 2.017206f, 2.939194f };
			unk.f_9 = "TS_VAL_WALK_WALK_TRIGGER";
			unk.f_10 = joaat("volBox");
			break;
	}

	return unk;
}

void func_43(var uParam0, Ped pedParam1, char* sParam2, BOOL bParam3) // Position - 0xDA4 Hash - 0x5AD955B5 ^0x43BD5215
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (func_59(uParam0, pedParam1, sParam2))
		if (!PED::IS_PED_INJURED(pedParam1))
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam1))
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam1, bParam3);

	return;
}

void func_44(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0xE01 Hash - 0xFDACD718 ^0x658C9335
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

void func_45(var uParam0, float fParam1) // Position - 0xE53 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_57() - fParam1;
	func_60(uParam0, 1);
	func_61(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

int func_46(int iParam0) // Position - 0xE79 Hash - 0xF16A350D ^0xF7851618
{
	Any any;
	int num;
	var unk5;

	any = Global_1357549.f_576;
	any.f_1 = 0;
	any.f_3 = iParam0;
	num = 0;

	if (func_62(any, 70005598, &unk5, false))
		num = func_63(unk5);

	return num;
}

int func_47(int iParam0) // Position - 0xEB8 Hash - 0x5374F99F ^0x22946EC9
{
	Any any;
	int num;

	any = Global_1357549.f_576;
	any.f_1 = 0;
	any.f_3 = iParam0;
	num = 1;

	if (func_64(any, -1875502208, &num, false))
	{
	}

	return num;
}

eStackSize func_48() // Position - 0xEEF Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_49(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0xEFB Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_65(*uParam0);
	i = func_66(*uParam0);
	num2 = func_67(*uParam0);
	j = func_68(*uParam0);
	k = func_69(*uParam0);
	l = func_70(*uParam0);

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

	for (m = func_71(i, num); num2 > m; m = func_71(i, num))
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

	func_72(uParam0, l, k, j, num2, i, num);
	return;
}

void func_50(int iParam0, BOOL bParam1) // Position - 0x1083 Hash - 0x1E270DC5 ^0x18D204F7
{
	int num;
	int offset;

	func_73(iParam0, &num, &offset);

	if (bParam1)
		MISC::SET_BIT(&Global_1357549.f_1848[num], offset);
	else
		MISC::CLEAR_BIT(&Global_1357549.f_1848[num], offset);

	return;
}

BOOL func_51(int iParam0) // Position - 0x10C0 Hash - 0x27CE23B1 ^0x27CE23B1
{
	switch (iParam0)
	{
		case 0:
			return false;
	
		case 1:
			return true;
	
		case 2:
			return true;
	
		case 3:
			return true;
	
		case 4:
			return true;
	
		case 5:
			return false;
	
		case 7:
			return false;
	
		case 8:
			return true;
	
		case 9:
			return true;
	
		case 10:
			return false;
	
		case 11:
			return true;
	
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
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return false;
	
		default:
		
	}

	return false;
}

void func_52(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x11CD Hash - 0x24EF2016 ^0x7F590678
{
	if (*iParam0 == 176656832)
		return;

	func_50(*iParam0, false);

	if (bParam1)
		if (bParam2)
			func_53(2, *iParam0);
		else
			func_54(2, *iParam0);

	func_74(iParam0);
	return;
}

void func_53(int iParam0, int iParam1) // Position - 0x120E Hash - 0xBEB4F573 ^0xDF718DD5
{
	if (Global_1357549.f_1483 >= 25)
		Global_1357549.f_1483 = 0;

	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/] = iParam0;
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/].f_1 = iParam1;
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/].f_2 = 0;
	Global_1357549.f_1483 = Global_1357549.f_1483 + 1;
	return;
}

void func_54(int iParam0, int iParam1) // Position - 0x1273 Hash - 0xB8F35FB ^0xB8F35FB
{
	if (Global_1357549.f_1406 >= 50)
		return;

	if (Global_1357549.f_1252[Global_1357549.f_1406 /*3*/] != 0)
		return;

	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/] = iParam0;
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/].f_1 = iParam1;
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/].f_2 = 0;
	Global_1357549.f_1403 = Global_1357549.f_1403 + 1;
	Global_1357549.f_1406 = Global_1357549.f_1406 + 1;
	return;
}

BOOL func_55(var uParam0) // Position - 0x12FA Hash - 0x5001E582 ^0x5001E582
{
	return func_75(*uParam0, 1);
}

BOOL func_56(var uParam0) // Position - 0x130A Hash - 0x39705408 ^0x39705408
{
	return func_75(*uParam0, 2);
}

float func_57() // Position - 0x131A Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_58(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x134C Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_76(eptParam1))
		{
			func_77(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_78(pedParam0, 0, true);
	
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
			func_79(pedParam0, false);
			flag = true;
		}
	
		func_80(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

BOOL func_59(var uParam0, Entity eParam1, char* sParam2) // Position - 0x142D Hash - 0xFB1C2C0E ^0x6794528D
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

void func_60(var uParam0, int iParam1) // Position - 0x14AB Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_61(var uParam0, int iParam1) // Position - 0x14BC Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_62(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, BOOL bParam7) // Position - 0x14D1 Hash - 0x6EB69AE6 ^0xE9AB1EC1
{
	var unk;

	uParam0.f_2 = iParam5;
	unk = *uParam6;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, &uParam0))
	{
		*uParam6 = unk;
		return true;
	}
	else
	{
		bParam7;
	}

	return false;
}

int func_63(int iParam0) // Position - 0x1501 Hash - 0x696B5244 ^0x696B5244
{
	switch (iParam0)
	{
		case joaat("MOOD_JACK"):
			return 26;
	
		case joaat("MOOD_SEAN"):
			return 21;
	
		case joaat("MOOD_PEARSON"):
			return 29;
	
		case joaat("event"):
			return 6;
	
		case joaat("Griefing"):
			return 4;
	
		case joaat("MOOD_KAREN"):
			return 32;
	
		case joaat("MOOD_TRELAWNY"):
			return 35;
	
		case joaat("MOOD_ABIGAIL"):
			return 25;
	
		case joaat("MOOD_SADIE_ADLER"):
			return 24;
	
		case joaat("MOOD_SWANSON"):
			return 33;
	
		case joaat("MOOD_JAVIER"):
			return 15;
	
		case joaat("MOOD_ARTHUR"):
			return 12;
	
		case 1871598:
			return 9;
	
		case joaat("MOOD_LENNY"):
			return 22;
	
		case joaat("MOOD_TILLY"):
			return 34;
	
		case joaat("MOOD_SUSAN_GRIMSHAW"):
			return 31;
	
		case joaat("MOOD_UNCLE"):
			return 17;
	
		case joaat("MOOD_DUTCH"):
			return 13;
	
		case joaat("ARRANGEMENT"):
			return 2;
	
		case joaat("base"):
			return 1;
	
		case joaat("SUPPLY"):
			return 3;
	
		case joaat("MOOD_MOLLY_OSHEA"):
			return 28;
	
		case joaat("MOOD_HOSEA"):
			return 18;
	
		case joaat("MOOD_BILL"):
			return 16;
	
		case joaat("MOOD_MARY_BETH"):
			return 27;
	
		case joaat("MOOD_CHARLES"):
			return 20;
	
		case joaat("MOOD_STRAUSS"):
			return 30;
	
		case joaat("MOOD_ODRISCOLL"):
			return 23;
	
		case joaat("MOOD_MICAH"):
			return 19;
	
		case joaat("Vignette"):
			return 10;
	
		case joaat("FLOW_FIRST_VISIT"):
			return 8;
	
		case joaat("flow"):
			return 7;
	
		case joaat("MOOD_JOHN"):
			return 14;
	
		case joaat("VIG_CAMP_ONLY"):
			return 11;
	
		default:
		
	}

	return 0;
}

BOOL func_64(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int* piParam6, BOOL bParam7) // Position - 0x1682 Hash - 0x75EEBFEF ^0xD9E5F860
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(piParam6, &uParam0))
		return true;
	else
		bParam7;

	return false;
}

int func_65(int iParam0) // Position - 0x16A8 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_66(int iParam0) // Position - 0x16CD Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_67(int iParam0) // Position - 0x16E0 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_68(int iParam0) // Position - 0x16F3 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_69(int iParam0) // Position - 0x1706 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_70(int iParam0) // Position - 0x1718 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_71(int iParam0, int iParam1) // Position - 0x172A Hash - 0x893AC59E ^0x893AC59E
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

void func_72(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x17C4 Hash - 0xA65AB937 ^0xA65AB937
{
	func_82(uParam0, iParam6);
	func_83(uParam0, iParam5);
	func_84(uParam0, iParam4);
	func_85(uParam0, iParam3);
	func_86(uParam0, iParam2);
	func_87(uParam0, iParam1);
	return;
}

int func_73(int iParam0, var uParam1, var uParam2) // Position - 0x17FC Hash - 0x44294A7 ^0x44294A7
{
	int num;

	num = func_88(iParam0, 1);
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

void func_74(int iParam0) // Position - 0x181E Hash - 0xE426C523 ^0x42DA665A
{
	*iParam0 = 176656832;
	iParam0->f_1 = -15;
	iParam0->f_2 = 1017034651;
	iParam0->f_3 = 0;
	iParam0->f_4 = 0;
	return;
}

BOOL func_75(int iParam0, int iParam1) // Position - 0x1848 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_76(ePedType eptParam0) // Position - 0x1857 Hash - 0x5000025C ^0x5000025C
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

void func_77(Ped pedParam0, Hash hParam1) // Position - 0x1CAA Hash - 0x2AE02BA5 ^0x88C8652A
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_89(pedParam0, hParam1))
		{
			if (func_90(pedParam0, hParam1))
			{
				if (func_91(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_92(pedParam0);
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

void func_78(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x1D51 Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_79(Ped pedParam0, BOOL bParam1) // Position - 0x1D81 Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_80(Ped pedParam0, int iParam1) // Position - 0x1DC6 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

var func_81(BOOL bParam0, var uParam1, var uParam2) // Position - 0x1DED Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_82(var uParam0, int iParam1) // Position - 0x1E04 Hash - 0xD05180BA ^0x39589262
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

void func_83(var uParam0, int iParam1) // Position - 0x1E8A Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_84(var uParam0, int iParam1) // Position - 0x1EC6 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_66(*uParam0);
	num2 = func_65(*uParam0);

	if (iParam1 < 1 || iParam1 > func_71(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_85(var uParam0, int iParam1) // Position - 0x1F19 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_86(var uParam0, int iParam1) // Position - 0x1F54 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_87(var uParam0, int iParam1) // Position - 0x1F8D Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

int func_88(int iParam0, int iParam1) // Position - 0x1FC5 Hash - 0x99A93628 ^0x27AE8C83
{
	switch (iParam0)
	{
		case joaat("CSTAG_MOOD_LENNY_DEFAULT"):
			return 129;
	
		case joaat("CSTAG_ARRANGEMENT_COL_TEARDOWN"):
			return 13;
	
		case joaat("CSTAG_FLOW_MUD4_POST"):
			return 383;
	
		case joaat("CSTAG_MOOD_MARYBETH_UPBEAT"):
			return 179;
	
		case -2104294676:
			return 83;
	
		case joaat("CSTAG_MOOD_KIERAN_PRISONER"):
			return 145;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST3_POST"):
			return 297;
	
		case joaat("CSTAG_MOOD_MOLLY_DOWN"):
			return 185;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_WNT2_POST"):
			return 259;
	
		case joaat("CSTAG_FLOW_RMARY2_POST"):
			return 393;
	
		case joaat("CSTAG_FLOW_FUS1_POST"):
			return 440;
	
		case joaat("CSTAG_MOOD_MOLLY_BEAVER"):
			return 190;
	
		case joaat("CSTAG_PLAYER_GONE_SOFT"):
			return 351;
	
		case joaat("CSTAG_EVENT_HSO_LOWKEY"):
			return 277;
	
		case joaat("CSTAG_MOOD_TILLY_BEAVER"):
			return 244;
	
		case -2033572567:
			return 92;
	
		case joaat("CSTAG_FLOW_MUD1_POST"):
			return 380;
	
		case joaat("CSTAG_MOOD_SEAN_COLTER"):
			return 125;
	
		case -2006082799:
			return 56;
	
		case -1994410205:
			return 499;
	
		case joaat("CSTAG_FLOW_RDOPN_POST"):
			return 457;
	
		case joaat("CSTAG_MOOD_HOSEA_DRUNK"):
			return 96;
	
		case joaat("CSTAG_FLOW_RNATV1_POST"):
			return 435;
	
		case joaat("CSTAG_FLOW_RDOWN2_POST"):
			return 387;
	
		case joaat("CSTAG_FLOW_BRT3_ACTIVE"):
			return 285;
	
		case joaat("CSTAG_FLOW_RMARY4_POST"):
			return 460;
	
		case joaat("CSTAG_MOOD_SEAN_UPBEAT"):
			return 124;
	
		case joaat("CSTAG_FLOW_MOB1_POST"):
			return 423;
	
		case joaat("CSTAG_FLOW_NTV3_PRE"):
			return 320;
	
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_LATE"):
			return 309;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_SETUP"):
			return 29;
	
		case joaat("CSTAG_MOOD_KAREN_COLTER"):
			return 225;
	
		case joaat("CSTAG_MOOD_KIERAN_UPBEAT"):
			return 142;
	
		case -1885734028:
			return 110;
	
		case joaat("CSTAG_FLOW_RMUD33_POST"):
			return 396;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST1_POST"):
			return 257;
	
		case -1856459307:
			return 219;
	
		case -1837343824:
			return 496;
	
		case joaat("CSTAG_FLOW_RCTAX_STATUE_MISSING"):
			return 326;
	
		case joaat("CSTAG_MOOD_SWANSON_UPBEAT"):
			return 233;
	
		case joaat("CSTAG_MOOD_PEARSON_UPBEAT"):
			return 197;
	
		case joaat("CSTAG_MOOD_HOSEA_COLTER"):
			return 98;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_B"):
			return 18;
	
		case -1818590041:
			return 246;
	
		case joaat("CSTAG_MOOD_HOSEA_UPBEAT"):
			return 97;
	
		case joaat("CSTAG_FLOW_DST2_ACTIVE"):
			return 273;
	
		case joaat("CSTAG_MOOD_BILL_ANNOYED"):
			return 77;
	
		case joaat("CSTAG_BCH_BASE"):
			return 10;
	
		case joaat("CSTAG_SP_SWAMP_WEIRDO_POST"):
			return 331;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_TEARDOWN"):
			return 16;
	
		case joaat("CSTAG_FLOW_NTV2_POST"):
			return 454;
	
		case joaat("CSTAG_FLOW_GRY2_POST"):
			return 411;
	
		case joaat("CSTAG_MOOD_MICAH_BEAVER"):
			return 108;
	
		case joaat("CSTAG_MOOD_LENNY_ANNOYED"):
			return 131;
	
		case joaat("CSTAG_EVENT_SDB_LOWKEY"):
			return 312;
	
		case joaat("CSTAG_MOOD_TRELAWNY_ANNOYED"):
			return 249;
	
		case joaat("CSTAG_MOOD_PEARSON_DRUNK"):
			return 196;
	
		case joaat("CSTAG_MOOD_KIERAN_DOWN"):
			return 139;
	
		case joaat("CSTAG_FLOW_BRT3_POST"):
			return 405;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_C"):
			return 22;
	
		case joaat("CSTAG_FLOW_RBNP12_POST"):
			return 415;
	
		case joaat("CSTAG_FLOW_MOB4_POST"):
			return 426;
	
		case joaat("CSTAG_MOOD_TRELAWNY_COLTER"):
			return 252;
	
		case -1584659518:
			return 210;
	
		case joaat("CSTAG_FLOW_RSTR1_POST"):
			return 409;
	
		case -1565979762:
			return 507;
	
		case joaat("CSTAG_MOOD_ABIGAIL_DOWN"):
			return 158;
	
		case joaat("CSTAG_MOOD_UNCLE_UPBEAT"):
			return 88;
	
		case joaat("CSTAG_MOOD_CHARLES_DOWN"):
			return 112;
	
		case joaat("CSTAG_FLOW_IND3_POST"):
			return 422;
	
		case joaat("CSTAG_FLOW_RBCH11_POST"):
			return 483;
	
		case joaat("CSTAG_HONOR_LOW"):
			return 338;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_A"):
			return 17;
	
		case joaat("CSTAG_FLOW_MUD5_POST"):
			return 413;
	
		case joaat("CSTAG_MOOD_JOHN_DEFAULT"):
			return 57;
	
		case joaat("CSTAG_FLOW_SUS1_POST"):
			return 437;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_C"):
			return 27;
	
		case joaat("CSTAG_VIG_CHARLES_ITM1_PRE"):
			return 369;
	
		case joaat("CSTAG_FLOW_RABI3_POST"):
			return 482;
	
		case joaat("CSTAG_MOOD_KAREN_DRUNK"):
			return 223;
	
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_ACTIVE"):
			return 280;
	
		case -1426009748:
			return 119;
	
		case joaat("CSTAG_MOOD_PEARSON_BEAVER"):
			return 199;
	
		case joaat("CSTAG_FLOW_MAR2_POST"):
			return 472;
	
		case joaat("CSTAG_FLOW_FUD1_FISHING_POST"):
			return 289;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_B"):
			return 21;
	
		case joaat("CSTAG_FLOW_RE_PBR_HONOR_LOW_POST"):
			return 329;
	
		case joaat("CSTAG_FLOW_MOB5_POST"):
			return 427;
	
		case joaat("CSTAG_FLOW_BOU1_POST"):
			return 377;
	
		case joaat("CSTAG_MOOD_LENNY_BEAVER"):
			return 135;
	
		case joaat("CSTAG_FLOW_LAR1_POST"):
			return 470;
	
		case joaat("CSTAG_MOOD_STRAUSS_DRUNK"):
			return 205;
	
		case joaat("CSTAG_MOOD_SADIE_DEFAULT"):
			return 148;
	
		case joaat("CSTAG_FLOW_RCLDN1_PRE"):
			return 311;
	
		case joaat("CSTAG_FLOW_WNT1_POST"):
			return 373;
	
		case -1333840726:
			return 236;
	
		case -1318290630:
			return 254;
	
		case joaat("CSTAG_MOOD_CHARLES_DRUNK"):
			return 114;
	
		case joaat("CSTAG_EVENT_CLM_UPBEAT"):
			return 294;
	
		case joaat("CSTAG_MOOD_STRAUSS_UPBEAT"):
			return 206;
	
		case joaat("CSTAG_MOOD_SWANSON_DEFAULT"):
			return 229;
	
		case joaat("CSTAG_FLOW_GNG1_POST"):
			return 445;
	
		case -1235200494:
			return 165;
	
		case joaat("CSTAG_FLOW_RDOPN_PRE"):
			return 318;
	
		case joaat("CSTAG_MOOD_SEAN_DEFAULT"):
			return 120;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_B"):
			return 26;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_TEARDOWN"):
			return 23;
	
		case joaat("CSTAG_FLOW_CA_FS01_POST"):
			return 327;
	
		case joaat("CSTAG_FLOW_GUA1_POST"):
			return 442;
	
		case joaat("CSTAG_PRG_BASE"):
			return 9;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_UTP2_POST"):
			return 284;
	
		case -1171086122:
			return 41;
	
		case joaat("CSTAG_MOOD_KIERAN_DEFAULT"):
			return 138;
	
		case -1152282847:
			return 33;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_A"):
			return 25;
	
		case joaat("CSTAG_MOOD_TILLY_DEFAULT"):
			return 238;
	
		case joaat("CSTAG_MOOD_TRELAWNY_DEFAULT"):
			return 247;
	
		case joaat("CSTAG_FLOW_RABI3_OPEN"):
			return 324;
	
		case -1061998329:
			return 164;
	
		case joaat("CSTAG_MOOD_JACK_DRUNK"):
			return 169;
	
		case joaat("CSTAG_FLOW_RHMR0_POST"):
			return 391;
	
		case -1045864225:
			return 510;
	
		case joaat("CSTAG_MOOD_JOHN_DOWN"):
			return 58;
	
		case joaat("CSTAG_MOOD_JOHN_UPBEAT"):
			return 61;
	
		case joaat("CSTAG_FLOW_RJCK2_POST"):
			return 485;
	
		case -978287173:
			return 12;
	
		case joaat("CSTAG_FLOW_RMUD32_POST"):
			return 395;
	
		case joaat("CSTAG_VIG_MUD3A_WNT"):
			return 359;
	
		case joaat("CSTAG_FLOW_SAD2_POST"):
			return 486;
	
		case joaat("CSTAG_FLOW_RBCH21_POST"):
			return 484;
	
		case joaat("CSTAG_MOOD_BILL_DOWN"):
			return 76;
	
		case joaat("CSTAG_MOOD_MOLLY_DRUNK"):
			return 187;
	
		case joaat("CSTAG_FLOW_RPRSN_POST"):
			return 374;
	
		case joaat("CSTAG_MOOD_JACK_BEAVER"):
			return 172;
	
		case joaat("CSTAG_MOOD_JACK_UPBEAT"):
			return 170;
	
		case joaat("CSTAG_MOOD_MOLLY_ANNOYED"):
			return 186;
	
		case joaat("CSTAG_COL_BASE"):
			return 2;
	
		case joaat("CSTAG_MOOD_UNCLE_ANNOYED"):
			return 86;
	
		case -830432609:
			return 492;
	
		case joaat("CSTAG_MOOD_SADIE_DOWN"):
			return 149;
	
		case joaat("CSTAG_MOOD_DUTCH_UPBEAT"):
			return 52;
	
		case joaat("CSTAG_FLOW_GUA2_POST"):
			return 439;
	
		case -818926670:
			return 200;
	
		case joaat("CSTAG_MOOD_TILLY_COLTER"):
			return 243;
	
		case joaat("CSTAG_EVENT_CLM_LOWKEY"):
			return 293;
	
		case joaat("CSTAG_HSO_BASE"):
			return 3;
	
		case joaat("CSTAG_MOOD_JAVIER_ANNOYED"):
			return 68;
	
		case joaat("CSTAG_MOOD_MARYBETH_COLTER"):
			return 180;
	
		case -803062666:
			return 65;
	
		case joaat("CSTAG_MOOD_MICAH_UPBEAT"):
			return 106;
	
		case joaat("CSTAG_FLOW_DST1_POST"):
			return 372;
	
		case joaat("CSTAG_FLOW_CA_CR03_POST"):
			return 302;
	
		case joaat("CSTAG_FLOW_SADIE_TRAUMATIZED"):
			return 275;
	
		case joaat("CSTAG_VIG_CLM_ONLY"):
			return 362;
	
		case joaat("CSTAG_FLOW_RMNR1_POST"):
			return 461;
	
		case joaat("CSTAG_MOOD_TRELAWNY_UPBEAT"):
			return 251;
	
		case joaat("CSTAG_MOOD_TILLY_UPBEAT"):
			return 242;
	
		case joaat("CSTAG_FLOW_GUA3_POST"):
			return 443;
	
		case joaat("CSTAG_FLOW_WNT2_POST"):
			return 375;
	
		case joaat("CSTAG_MOOD_UNCLE_COLTER"):
			return 89;
	
		case joaat("CSTAG_EVENT_PEARSON_RESERVED"):
			return 341;
	
		case joaat("CSTAG_MOOD_MARYBETH_DEFAULT"):
			return 175;
	
		case -671103079:
			return 504;
	
		case joaat("CSTAG_EVENT_SDB_UPBEAT"):
			return 313;
	
		case joaat("CSTAG_FLOW_DEBT_COLLECTED"):
			return 345;
	
		case -650501093:
			return 509;
	
		case joaat("CSTAG_MOOD_HOSEA_DOWN"):
			return 94;
	
		case joaat("CSTAG_FLOW_BRT2_POST"):
			return 404;
	
		case -636774257:
			return 146;
	
		case joaat("CSTAG_PLAYER_DONATED_FOOD"):
			return 343;
	
		case joaat("CSTAG_MOOD_SWANSON_COLTER"):
			return 234;
	
		case joaat("CSTAG_FLOW_BRT1_POST"):
			return 403;
	
		case joaat("CSTAG_MOOD_MICAH_ANNOYED"):
			return 104;
	
		case -604891653:
			return 237;
	
		case joaat("CSTAG_FLOW_SAD3_POST"):
			return 487;
	
		case joaat("CSTAG_FLOW_MOB2_POST"):
			return 424;
	
		case joaat("CSTAG_FLOW_WNT2_OUTRO"):
			return 261;
	
		case joaat("CSTAG_FLOW_UTP2_POST"):
			return 400;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"):
			return 266;
	
		case joaat("CSTAG_MOOD_SWANSON_DRUNK"):
			return 232;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_SAL1_POST"):
			return 283;
	
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_POST"):
			return 310;
	
		case joaat("CSTAG_HONOR_HIGH"):
			return 337;
	
		case -534913305:
			return 174;
	
		case joaat("CSTAG_FLOW_SMG2_POST"):
			return 444;
	
		case joaat("CSTAG_MOOD_TRELAWNY_BEAVER"):
			return 253;
	
		case joaat("CSTAG_HR_PRHMA_VISIT_POST"):
			return 330;
	
		case joaat("CSTAG_GRIEFING_LAW_ENCOUNTER"):
			return 39;
	
		case -453449739:
			return 182;
	
		case joaat("CSTAG_MOOD_KIERAN_ANNOYED"):
			return 140;
	
		case joaat("CSTAG_FLOW_AB21_POST"):
			return 469;
	
		case joaat("CSTAG_MOOD_SADIE_ANNOYED"):
			return 150;
	
		case joaat("CSTAG_MOOD_JOHN_ANNOYED"):
			return 59;
	
		case joaat("CSTAG_MOOD_LENNY_UPBEAT"):
			return 133;
	
		case joaat("CSTAG_MOOD_KIERAN_DRUNK"):
			return 141;
	
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"):
			return 308;
	
		case joaat("CSTAG_FLOW_RDTC1_POST"):
			return 418;
	
		case -399703928:
			return 155;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_RBRT0_POST"):
			return 295;
	
		case -381477663:
			return 37;
	
		case joaat("CSTAG_ARRANGEMENT_BVH_TEARDOWN"):
			return 30;
	
		case joaat("CSTAG_FLOW_MUD3_POST"):
			return 382;
	
		case joaat("CSTAG_FLOW_CA_FS02_POST"):
			return 303;
	
		case joaat("CSTAG_FLOW_SAD5_POST"):
			return 489;
	
		case joaat("CSTAG_FLOW_MAR8_UNCLE_RECOVER"):
			return 323;
	
		case joaat("CSTAG_FLOW_DST3_ACTIVE"):
			return 288;
	
		case joaat("CSTAG_FLOW_WNT1_ACTIVE"):
			return 260;
	
		case -317452243:
			return 128;
	
		case joaat("CSTAG_FLOW_MAR4_POST"):
			return 473;
	
		case joaat("CSTAG_MOOD_PEARSON_DOWN"):
			return 194;
	
		case joaat("CSTAG_FLOW_RCLDN2_POST"):
			return 431;
	
		case joaat("CSTAG_MOOD_JAVIER_DOWN"):
			return 67;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_SETUP"):
			return 24;
	
		case joaat("CSTAG_FLOW_CA_CR04_POST"):
			return 317;
	
		case joaat("CSTAG_FLOW_MUD2_PRE"):
			return 269;
	
		case joaat("CSTAG_NEW_CAMP_FIRST_VISIT"):
			return 505;
	
		case joaat("CSTAG_FLOW_RCTAX2_POST"):
			return 490;
	
		case joaat("CSTAG_VIG_HSO_ONLY"):
			return 357;
	
		case joaat("CSTAG_FLOW_MOB3_POST"):
			return 425;
	
		case joaat("CSTAG_FLOW_TRN1_POST"):
			return 464;
	
		case joaat("CSTAG_FLOW_ODR4_POST"):
			return 429;
	
		case joaat("CSTAG_SUPPLY_HIGH"):
			return 34;
	
		case joaat("CSTAG_MOOD_STRAUSS_ANNOYED"):
			return 204;
	
		case joaat("CSTAG_FLOW_CRN1_POST"):
			return 406;
	
		case joaat("CSTAG_EVENT_BLOCK_MUSIC_CYLINDER"):
			return 354;
	
		case joaat("CSTAG_FLOW_MAR5_POST"):
			return 474;
	
		case joaat("CSTAG_PLAYER_DONATED_MONEY"):
			return 344;
	
		case joaat("CSTAG_VIG_CLM_BASE"):
			return 361;
	
		case joaat("CSTAG_FLOW_RABI1_POST"):
			return 385;
	
		case -170673728:
			return 156;
	
		case -165538585:
			return 127;
	
		case joaat("CSTAG_FLOW_WNT4_POST"):
			return 376;
	
		case joaat("CSTAG_FLOW_SDN1_POST"):
			return 438;
	
		case joaat("CSTAG_FLOW_FUS2_POST"):
			return 441;
	
		case joaat("CSTAG_MOOD_CHARLES_ANNOYED"):
			return 113;
	
		case joaat("CSTAG_MOOD_KAREN_ANNOYED"):
			return 222;
	
		case joaat("CSTAG_MOOD_HOSEA_ANNOYED"):
			return 95;
	
		case joaat("CSTAG_MOOD_SADIE_DRUNK"):
			return 151;
	
		case joaat("CSTAG_MOOD_STRAUSS_BEAVER"):
			return 208;
	
		case joaat("CSTAG_FLOW_CA_CR01_POST"):
			return 316;
	
		case joaat("CSTAG_MOOD_HOSEA_DEFAULT"):
			return 93;
	
		case joaat("CSTAG_FLOW_RUFUS_RECOVER"):
			return 325;
	
		case joaat("CSTAG_FLOW_GRY2_PRE"):
			return 290;
	
		case -98209688:
			return 55;
	
		case joaat("CSTAG_MOOD_TILLY_DOWN"):
			return 239;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_RSAD1_POST"):
			return 287;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_C"):
			return 19;
	
		case joaat("CSTAG_MOOD_MICAH_DRUNK"):
			return 105;
	
		case -58291054:
			return 201;
	
		case joaat("CSTAG_EVENT_DUTCH_PIPE"):
			return 342;
	
		case joaat("CSTAG_EVENT_OPTIONAL_HONOR_MIS_POST"):
			return 353;
	
		case -21372580:
			return 46;
	
		case joaat("CSTAG_FLOW_TRN3_POST"):
			return 466;
	
		case -8269375:
			return 137;
	
		case joaat("CSTAG_PLAYER_OPEN_WORLD_CRAZY"):
			return 350;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_89(Ped pedParam0, Hash hParam1) // Position - 0x36D2 Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_90(Ped pedParam0, Hash hParam1) // Position - 0x3700 Hash - 0xE6DC2D99 ^0x5F5371E4
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

BOOL func_91(Ped pedParam0, Hash hParam1) // Position - 0x374E Hash - 0xE6DC2D99 ^0x5F5371E4
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_89(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_92(Ped pedParam0) // Position - 0x37BC Hash - 0xD6806090 ^0xE16DA338
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

