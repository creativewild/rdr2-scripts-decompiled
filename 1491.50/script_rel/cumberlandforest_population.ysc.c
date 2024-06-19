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
	Volume volLocal_14 = 0;
	Volume volLocal_15 = 0;
	Volume volLocal_16 = 0;
	Volume volLocal_17 = 0;
	Volume volLocal_18 = 0;
	Volume volLocal_19 = 0;
	Volume volLocal_20 = 0;
	Volume volLocal_21 = 0;
	const char* sLocal_22 = 0;
	Volume volLocal_23 = 0;
	Volume volLocal_24 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x4BB7909E ^0x3C1315BB
{
	int num;
	int num2;
	BOOL flag;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	func_1();
	func_2();
	func_3();
	func_4();
	volLocal_24 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-62.722f, 1237.699f, 171.558f, 0f, 0f, -149.673f, 9.464f, 6.4f, 4.872f, "Six Point - m_volCabin");
	volLocal_23 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-43.43f, 1218.674f, 178.511f, 0f, 0f, 64.393f, 78.051f, 80.713f, 30.156f, "Six Point - m_volCamp");
	num = 0;
	func_5(&num, 5);
	func_5(&num, 0);
	func_5(&num, 11);
	num2 = 0;
	func_5(&num2, 5);
	func_5(&num2, 0);
	func_5(&num2, 17);
	func_5(&num2, 28);
	COMPANION::_0x3CAAD93FA5B9579A(volLocal_24, 2, num);
	COMPANION::_0x3CAAD93FA5B9579A(volLocal_23, 2, num2);
	flag = true;

	while (flag)
	{
		BUILTIN::WAIT(0);
	}

	func_6();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0xDD Hash - 0x93CB8779 ^0xB3D1DA9
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT();
		func_6();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	return;
}

void func_2() // Position - 0x116 Hash - 0x820B8CA ^0x64435050
{
	volLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(352.5f, 1492.5f, 160f, 0f, 0f, 0f, 75f, 75f, 50f, "m_volOldFortWallace_Restriction");
	func_7(volLocal_14, true);
	volLocal_15 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBacchusStation_Restriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_15, 576.5f, 1692.5f, 190f, 0f, 0f, -45f, 40f, 22f, 15f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_15, 565f, 1713f, 190f, 0f, 0f, 0f, 33f, 33f, 15f);
	func_8(volLocal_15, 0, false, true);
	volLocal_16 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSixPointCabin_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_16, -61.782875f, 1236.5985f, 171.7316f, 0f, 0f, 30.499935f, 17.574043f, 11.672787f, 13.050807f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_16, -26.603022f, 1223.1174f, 175.03629f, 0f, 0f, 0f, 17.604649f, 14.424184f, 5.206519f);
	func_9(volLocal_16, 0, false, true);
	volLocal_17 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(800f, 890f, 118f, 0f, 0f, 66f, 80f, 65f, 12f, "m_volCarmodyDell_Restriction");
	func_10(volLocal_17, true);
	return;
}

void func_3() // Position - 0x24C Hash - 0xC4054954 ^0xB7F71D2A
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_11(52) && !func_13(func_12()) && func_12() != 52)
	{
		volLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Fort Wallace - m_volThreatVolume Agg");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_18, 343.49112f, 1484.9055f, 183.65851f, 0f, 0f, 125.4594f, 50.44129f, 27.586927f, 15.203485f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_18, 366.83383f, 1481.5552f, 183.30519f, 0f, 0f, 70.84903f, 9.450991f, 11.247877f, 14.865822f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_18, 361.69266f, 1499.3264f, 183.07594f, 0f, 0f, 14.507609f, 15.727253f, 35.53953f, 16.715868f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_18, 327.8768f, 1483.8354f, 182.88647f, 0f, 0f, -11.760571f, 17.000563f, 10.342677f, 16.348568f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_18, 319.27216f, 1495.2861f, 184.54126f, 0f, 0f, -53.96134f, 23.05555f, 18.033838f, 21.160778f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_18, 320.7645f, 1509.2908f, 188.61275f, 0f, 0f, -25.218966f, 4.516489f, 7.110216f, 18.254736f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_18, 324.61423f, 1502.853f, 184.90356f, 0f, 0f, -24.952854f, 14.969668f, 13.847939f, 21.227983f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_18, 350.37363f, 1501.7808f, 184.25311f, 0f, 0f, 33.499294f, 9.61958f, 30.690605f, 13.843413f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_18, 352.13867f, 1513.7289f, 182.77222f, 0f, 0f, 24.749197f, 10.802413f, 11.259045f, 15.891851f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_18, 355.69733f, 1518.419f, 184.7034f, 0f, 0f, 0f, 1.984145f, 5.500231f, 12.257863f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(volLocal_18, 357.93124f, 1517.9846f, 184.7034f, 0f, 0f, -16.950344f, 4.391377f, 5.500231f, 12.257863f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_18, 362.5482f, 1516.3434f, 182.84227f, 0f, 0f, 0f, 3.488632f, 3.541783f, 9.602388f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_18, 366.56018f, 1473.8092f, 182.55685f, 0f, 0f, 0f, 4f, 4f, 7.516581f);
		volLocal_20 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Fort Wallace - m_volRestrictedVolume Agg");
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_20, 345.19687f, 1487.9547f, 182.55685f, 0f, 0f, 0f, 47.3f, 47.3f, 13.833291f);
		VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_20, volLocal_18);
		volLocal_21 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Fort Wallace - m_volWarningVolume Agg");
		VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_21, volLocal_20);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_21, 345.19687f, 1487.9547f, 182.55685f, 0f, 0f, 0f, 63.65347f, 68.76788f, 13.833291f);
		volLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Fort Wallace - m_volRegistrationVolume Agg");
		VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(volLocal_19, volLocal_21);
		sLocal_22 = "OLD_FORT_WALLACE";
		LAW::_CREATE_GUARD_ZONE(sLocal_22);
		LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_START(sLocal_22, volLocal_19);
		LAW::_SET_GUARD_ZONE_VOLUME_THREAT(sLocal_22, volLocal_18);
		LAW::_SET_GUARD_ZONE_VOLUME_RESTRICTED(sLocal_22, volLocal_20);
		LAW::_SET_GUARD_ZONE_VOLUME_WARNING(sLocal_22, volLocal_21);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_22, 346.9555f, 1488.2167f, 182.0683f);
		LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_END(sLocal_22, volLocal_18);
	}

	return;
}

void func_4() // Position - 0x571 Hash - 0xC536968E ^0xFA5CE438
{
	func_14(160425541, 1);
	func_14(-1127035680, 1);
	return;
}

void func_5(var uParam0, int iParam1) // Position - 0x58D Hash - 0xDFED97A2 ^0x7CA9A462
{
	int bitShift;

	bitShift = iParam1;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(1, bitShift);
	return;
}

void func_6() // Position - 0x5A7 Hash - 0xC1DECEB9 ^0x125F556
{
	COMPANION::_0x7274F84B1501B523(volLocal_24);
	COMPANION::_0x7274F84B1501B523(volLocal_23);
	LAW::_REMOVE_GUARD_ZONE(sLocal_22);
	func_15(volLocal_18);
	func_15(volLocal_20);
	func_15(volLocal_19);
	func_15(volLocal_21);
	return;
}

void func_7(Volume volParam0, BOOL bParam1) // Position - 0x5D9 Hash - 0xFE673D83 ^0xF340C8A2
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 2228479, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 2228479, 16384, 0, -1, -1, 0);

	if (bParam1)
		POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, volParam0);

	return;
}

void func_8(Volume volParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x625 Hash - 0xAB9EF6C3 ^0x6AF001EA
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_16(&iParam1, 8192);

	if (bParam3)
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);

	return;
}

void func_9(Volume volParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6A9 Hash - 0x28C5CE40 ^0xE969725E
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 0);

	if (bParam2)
		func_16(&iParam1, 8192);

	if (bParam3)
		POPULATION::_0x2161278C6322F740(iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, volParam0);

	return;
}

void func_10(Volume volParam0, BOOL bParam1) // Position - 0x724 Hash - 0xD9C0069 ^0xCF70485C
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return;

	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, 231, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, 231, 16384, 0, -1, -1, 0);

	if (bParam1)
		POPULATION::_0x2161278C6322F740(231, 16384, 0, -1, -1, volParam0);

	return;
}

BOOL func_11(int iParam0) // Position - 0x76A Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_17(Global_1835011[iParam0 /*74*/].f_1);
}

int func_12() // Position - 0x796 Hash - 0xCFE69610 ^0xEDE040ED
{
	return func_18(Global_1347343.f_2);
}

BOOL func_13(int iParam0) // Position - 0x7A8 Hash - 0x77BA7B03 ^0x77BA7B03
{
	return iParam0 > -1 && iParam0 <= 80;
}

void func_14(Hash hParam0, int iParam1) // Position - 0x7BE Hash - 0x1879777F ^0x1879777F
{
	func_19(hParam0, true, 0, false, false, 0, false, false);
	return;
}

void func_15(Volume volParam0) // Position - 0x7D3 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

void func_16(var uParam0, int iParam1) // Position - 0x7EA Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_17(int iParam0) // Position - 0x7FF Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_20(iParam0);
	return num == 3 || num == 4;
}

int func_18(int iParam0) // Position - 0x81D Hash - 0xDEBCA2F ^0xDEBCA2F
{
	if (func_21(iParam0) == 1)
		return func_22(iParam0);

	return -1;
}

void func_19(Hash hParam0, BOOL bParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x839 Hash - 0xD777F4CF ^0xBFF3124C
{
	func_23(hParam0, false, false);

	if (func_24(hParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, iParam2, bParam6);
	
		if (iParam5 > 0f)
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(hParam0, iParam5);
	
		if (bParam3)
			func_25(hParam0, iParam2, true, bParam6);
		else if (bParam1)
			if (bParam4)
				func_26(hParam0, true);
			else
				func_27(hParam0, true);
		else
			func_28(hParam0, true);
	
		if (bParam7)
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(hParam0, true);
	}
	else if (func_29())
	{
	}
	else
	{
		NETWORK::NETWORK_IS_IN_SESSION();
	}

	return;
}

int func_20(int iParam0) // Position - 0x8C4 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_30(iParam0))
		return -1;

	return func_31(iParam0);
}

int func_21(int iParam0) // Position - 0x8E0 Hash - 0x355AD4D4 ^0x355AD4D4
{
	if (!func_30(iParam0))
		return 0;

	return func_33(func_32(iParam0));
}

int func_22(int iParam0) // Position - 0x900 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_30(iParam0))
		return -1;

	return func_34(func_32(iParam0));
}

Hash func_23(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x920 Hash - 0xEC5804B5 ^0x15A1D925
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0))
		if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0]) && bParam1)
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		else
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, false, false, 0, 0, false);
	else if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0]) && bParam1)
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(hParam0))
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051081.f_15[0], 0, false);

	if (bParam2)
		OBJECT::_DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED(hParam0, true);

	return hParam0;
}

BOOL func_24(Hash hParam0) // Position - 0x9C4 Hash - 0xCD60E05 ^0x368E4BC
{
	if (func_35(hParam0))
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0);

	return false;
}

void func_25(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x9DF Hash - 0x6DA9F066 ^0x2A9066C3
{
	if (func_24(hParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam2)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);
	
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, iParam1, bParam3);
	}

	return;
}

void func_26(Hash hParam0, BOOL bParam1) // Position - 0xA17 Hash - 0xC342281D ^0xB1F97AC8
{
	if (func_24(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 2 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 2);

	return;
}

void func_27(Hash hParam0, BOOL bParam1) // Position - 0xA45 Hash - 0xA39475C2 ^0x7E382EA4
{
	if (func_24(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);

	return;
}

void func_28(Hash hParam0, BOOL bParam1) // Position - 0xA73 Hash - 0x4844A91D ^0x50E23246
{
	if (func_24(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 0 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 0);

	return;
}

BOOL func_29() // Position - 0xAA1 Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_30(int iParam0) // Position - 0xAAA Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_31(int iParam0) // Position - 0xADD Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_36(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_32(int iParam0) // Position - 0xB1E Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_33(BOOL bParam0) // Position - 0xB5C Hash - 0x825A04C0 ^0x825A04C0
{
	return bParam0 & 31;
}

int func_34(BOOL bParam0) // Position - 0xB69 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_35(Hash hParam0) // Position - 0xB7C Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

int func_36(int iParam0) // Position - 0xB88 Hash - 0x6EC15CF9 ^0xE613EBE0
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

