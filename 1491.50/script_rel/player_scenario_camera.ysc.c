#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
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
	var uLocal_30 = 1;
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
	Any anLocal_45 = 0;
	int iLocal_46 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xE08B73E3 ^0x6B185566
{
	anLocal_45 = anScriptParam_0;
	iLocal_46 = anScriptParam_0.f_1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(&func_6))
		func_1();

	while (func_2())
	{
		BUILTIN::WAIT(0);
	}

	func_1();
	return;
}

void func_1() // Position - 0x33 Hash - 0x27B6F2C7 ^0xB6E8D240
{
	SCRIPTS::_0xE7282390542F570D(anLocal_45);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_2() // Position - 0x46 Hash - 0x25B70927 ^0x9643FB4E
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !TASK::DOES_SCENARIO_POINT_EXIST(iLocal_46) || !PED::IS_PED_USING_THIS_SCENARIO(PLAYER::PLAYER_PED_ID(), iLocal_46))
	{
		func_3();
		return false;
	}

	return func_4();
}

void func_3() // Position - 0x83 Hash - 0xDA93B40C ^0xC7845429
{
	if (iLocal_0.f_44)
	{
		if (CAM::_IS_CAM_DATA_DICT_LOADED(&(iLocal_0.f_1)))
			CAM::_UNLOAD_CAMERA_DATA_DICT(&(iLocal_0.f_1));
	
		if (CAM::_IS_CAMERA_AVAILABLE(&(iLocal_0.f_1)))
			CAM::_CAM_DESTROY(&(iLocal_0.f_1));
	
		iLocal_0.f_44 = 0;
	}

	if (DATAFILE::PARSEDDATA_IS_FILE_LOADED(iLocal_0.f_34))
		DATAFILE::_PARSEDDATA_UNLOAD_FILE(iLocal_0.f_34);

	return;
}

BOOL func_4() // Position - 0xD0 Hash - 0xB0528571 ^0xDADB95FC
{
	switch (iLocal_0)
	{
		case 0:
			iLocal_0.f_32 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false);
		
			if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_0.f_32))
				return 0;
		
			iLocal_0.f_33 = TASK::_GET_SCENARIO_POINT_ENTITY(iLocal_0.f_32);
			iLocal_0.f_34 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(82155782);
			iLocal_0.f_35 = TASK::_GET_SCENARIO_POINT_TYPE(iLocal_0.f_32);
			iLocal_0 = 1;
			break;
	
		case 1:
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && DATAFILE::PARSEDDATA_IS_FILE_LOADED(iLocal_0.f_34))
			{
				func_5();
			
				if (!func_6())
				{
					func_3();
					iLocal_0 = 5;
					return 0;
				}
			
				DATAFILE::_PARSEDDATA_UNLOAD_FILE(iLocal_0.f_34);
				func_7("player_scenario_orbit_cam", &(iLocal_0.f_36));
				iLocal_0 = 2;
			}
			break;
	
		case 2:
			if (func_8())
				iLocal_0 = 3;
			break;
	
		case 3:
			if (iLocal_0.f_33 != 0)
				CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(iLocal_0.f_33);
		
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
				iLocal_0 = 4;
			break;
	
		case 4:
			func_3();
			iLocal_0 = 5;
			break;
	
		case 5:
			return 0;
	}

	return 1;
}

void func_5() // Position - 0x1D0 Hash - 0xDBBE0902 ^0xD8C9B877
{
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(iLocal_0.f_34, -1296226829, "CameraData/Scenarios/Camera");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(iLocal_0.f_34, 279908099, "CameraData/Scenarios/Camera(%i):scenario");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(iLocal_0.f_34, -302997874, "CameraData/Scenarios/Camera(%i):request");
	return;
}

BOOL func_6() // Position - 0x20B Hash - 0x5AACB13D ^0xF2119CC9
{
	var unk;
	int numNodes;
	int i;
	var unk6;

	unk = iLocal_0.f_34;
	unk.f_2 = -1296226829;
	numNodes = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&unk);
	i = 0;

	for (i = 0; i < numNodes; i = i + 1)
	{
		unk.f_3 = i;
		unk.f_2 = 279908099;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk6, &unk);
	
		if (unk6 == iLocal_0.f_35)
		{
			unk.f_2 = -302997874;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(iLocal_0.f_36), &unk);
			return true;
		}
	}

	return false;
}

void func_7(char* sParam0, char* sParam1) // Position - 0x27A Hash - 0x61345BF4 ^0xD2AA160D
{
	TEXT_LABEL_ASSIGN_STRING(&(iLocal_0.f_1), sParam0, 64);
	TEXT_LABEL_ASSIGN_STRING(&(iLocal_0.f_1.f_8), sParam1, 64);
	CAM::_LOAD_CAMERA_DATA_DICT(&(iLocal_0.f_1));
	iLocal_0.f_44 = 1;
	return;
}

BOOL func_8() // Position - 0x2A1 Hash - 0x75E1EDF3 ^0xE39313CB
{
	if (CAM::_IS_CAM_DATA_DICT_LOADED(&(iLocal_0.f_1)) && !CAM::_IS_CAMERA_AVAILABLE(&(iLocal_0.f_1)))
	{
		CAM::_CAM_CREATE(&(iLocal_0.f_1));
		iLocal_0.f_1.f_16 = Global_35;
		iLocal_0.f_1.f_21 = 1;
		iLocal_0.f_1.f_22 = { 0f, 0f, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_0.f_32, true) };
		CAM::_0xAC77757C05DE9E5A(&(iLocal_0.f_1));
		return true;
	}

	return false;
}

