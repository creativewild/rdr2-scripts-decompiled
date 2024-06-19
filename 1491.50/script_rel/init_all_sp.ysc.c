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
	char* sLocal_14 = 0;
	char* sLocal_15 = 0;
	char* sLocal_16 = 0;
	char* sLocal_17 = 0;
	char* sLocal_18 = 0;
	var uLocal_19 = 20;
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
	var uLocal_60 = 1;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x18FF3F58 ^0xBD11526A
{
	BOOL flag;
	int i;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	sLocal_18 = "";
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_1();
	func_3(0, &func_2);
	func_3(1, &func_4);
	func_3(2, &func_5);
	func_3(3, &func_6);
	func_3(4, &func_7);
	func_3(5, &func_8);
	func_3(6, &func_9);
	func_3(7, &func_10);
	func_3(8, &func_11);
	func_3(9, &func_12);
	func_3(10, &func_13);
	func_3(11, &func_14);
	func_3(12, &func_15);
	func_3(13, &func_16);
	func_3(14, &func_17);
	func_3(15, &func_18);
	func_3(16, &func_19);
	func_3(17, &func_20);
	func_3(18, &func_21);
	func_3(19, &func_22);
	func_24(0, &func_23);
	flag = false;

	while (!flag)
	{
		flag = true;
	
		for (i = 0; i < 20; i = i + 1)
		{
			if (!uLocal_19[i /*2*/].f_1)
			{
				uLocal_19[i /*2*/]();
			
				if (StackVal)
					uLocal_19[i /*2*/].f_1 = 1;
				else
					flag = false;
			}
		}
	
		for (i = 0; i < 1; i = i + 1)
		{
			if (!uLocal_60[i /*3*/].f_1)
			{
				uLocal_60[i /*3*/](&(uLocal_60[i /*3*/].f_2));
			
				if (StackVal)
					uLocal_60[i /*3*/].f_1 = 1;
				else
					flag = false;
			}
		}
	
		BUILTIN::WAIT(0);
	}

	func_25();
	func_26(256);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x191 Hash - 0x22535436 ^0xF34D56E3
{
	int i;

	for (i = 0; i < 20; i = i + 1)
	{
		uLocal_19[i /*2*/] = &func_27;
		uLocal_19[i /*2*/].f_1 = 0;
	}

	for (i = 0; i < 1; i = i + 1)
	{
		uLocal_60[i /*3*/] = &func_28;
		uLocal_60[i /*3*/].f_1 = 0;
	}

	return;
}

int func_2() // Position - 0x1E4 Hash - 0x2E567C5C ^0x11B5409F
{
	func_29(0, joaat("cs_dutch"), "def_comp_brain", true, true);
	func_29(1, joaat("cs_johnmarston"), "def_comp_brain", true, false);
	func_29(2, joaat("cs_javierescuella"), "def_comp_brain", true, true);
	func_29(3, joaat("cs_billwilliamson"), "def_comp_brain", true, true);
	func_29(4, joaat("cs_uncle"), "def_comp_brain", false, false);
	func_29(5, joaat("cs_hoseamatthews"), "def_comp_brain", true, false);
	func_29(6, joaat("cs_micahbell"), "def_comp_brain", true, true);
	func_29(7, joaat("cs_charlessmith"), "def_comp_brain", true, true);
	func_29(8, joaat("cs_sean"), "def_comp_brain", true, true);
	func_29(9, joaat("cs_lenny"), "def_comp_brain", true, true);
	func_29(10, joaat("cs_kieran"), "def_comp_brain", false, false);
	func_29(11, joaat("cs_mrsadler"), "def_comp_brain", true, false);
	func_29(23, joaat("cs_josiahtrelawny"), "def_comp_brain", false, true);
	func_29(17, joaat("cs_mrpearson"), "def_comp_brain", false, false);
	func_29(21, joaat("cs_revswanson"), "def_comp_brain", false, false);
	func_29(18, joaat("cs_leostrauss"), "def_comp_brain", false, false);
	func_29(14, joaat("cs_jackmarston"), "def_comp_brain", false, false);
	func_29(13, joaat("cs_abigailroberts"), "def_comp_brain", false, false);
	func_29(16, joaat("cs_mollyoshea"), "def_comp_brain", false, false);
	func_29(19, joaat("cs_susangrimshaw"), "def_comp_brain", false, false);
	func_29(15, joaat("cs_marybeth"), "def_comp_brain", false, false);
	func_29(20, joaat("cs_karen"), "def_comp_brain", false, false);
	func_29(22, joaat("cs_tilly"), "def_comp_brain", false, false);
	func_29(24, joaat("cs_cleet"), "def_comp_brain", false, false);
	func_29(25, joaat("cs_joe"), "def_comp_brain", false, false);
	func_29(26, joaat("cs_eagleflies"), "def_comp_brain", false, true);
	func_29(12, joaat("a_c_dogcatahoulacur_01"), "def_comp_brain", true, false);
	func_30(0, 0, 234527101, 234527101);
	func_30(1, 0, 234527101, 234527101);
	func_30(3, 2, 234527101, 234527101);
	func_30(2, 4, 234527101, 234527101);
	func_30(6, 5, 234527101, 234527101);
	func_30(7, 1, 234527101, 234527101);
	func_30(11, 4, 234527101, 234527101);
	func_30(5, 4, 234527101, 234527101);
	func_30(8, 0, 234527101, 234527101);
	func_30(9, 0, 234527101, 234527101);
	func_30(12, 0, 234527101, 234527101);

	if (func_31())
		return 1;

	return 0;
}

void func_3(int iParam0, int iParam1) // Position - 0x454 Hash - 0x68EB7940 ^0x8EF79B5D
{
	uLocal_19[iParam0 /*2*/] = iParam1;
	uLocal_19[iParam0 /*2*/].f_1 = 0;
	return;
}

int func_4() // Position - 0x46D Hash - 0x685FE672 ^0x6ACE1E6
{
	if (!func_32())
		func_33();

	Global_1897950 = -1;
	func_34(1, joaat("val_bartender"), 76, 0);
	func_34(2, joaat("val_slum_bartender"), 76, 0);
	func_34(8, joaat("val_barber"), 76, 1048576);
	func_34(11, joaat("val_doctor"), 76, 1048576);
	func_34(9, joaat("val_gunsmith"), 76, 1048576);
	func_34(10, joaat("val_general_store"), 76, 1048576);
	func_34(45, joaat("val_horse_shop_owner"), 76, 1048576);
	func_34(6, joaat("val_butcher"), 76, 1048576);
	func_34(14, joaat("val_piano_player"), 76, 0);
	func_34(15, joaat("VAL_HOTEL_CLEANER"), 76, 0);
	func_34(16, joaat("val_hotel_owner"), 76, 0);
	func_34(3, joaat("val_sheriff"), 76, 2097152);
	func_34(4, joaat("VAL_SHERIFF_HELPER"), 76, 2097152);
	func_34(18, joaat("val_blacksmith"), 76, 0);
	func_34(17, joaat("VAL_HANDYMAN"), 76, 0);
	func_34(7, joaat("val_auction_boss"), 76, 1048576);
	func_34(20, joaat("VAL_AUCTION_HANDYMAN"), 76, 0);
	func_34(21, joaat("VAL_HANDYMANS_WIFE"), 76, 0);
	func_34(19, joaat("val_livery"), 76, 0);
	func_34(22, joaat("val_head_prostitute"), 76, 0);
	func_34(23, joaat("VAL_PROSTITUTE_1"), 76, 0);
	func_34(24, joaat("VAL_PROSTITUTE_2"), 76, 0);
	func_34(5, joaat("val_train_clerk"), 76, 0);
	func_34(25, joaat("VAL_PRISONER_1"), 76, 0);
	func_34(26, joaat("VAL_PRISONER_2"), 76, 0);
	func_34(33, joaat("VAL_SHOW_TICKET_VENDOR"), 76, 0);
	func_34(48, joaat("val_town_dog_1"), 76, 0);
	func_34(49, joaat("VAL_TOWN_DOG_2"), 76, 0);
	func_34(50, joaat("VAL_TOWN_DOG_3"), 76, 0);
	func_34(51, joaat("val_guard_dog"), 76, 0);
	func_34(27, joaat("VAL_AUCTION_HAND"), 76, 0);
	func_34(28, joaat("VAL_AUCTION_HAND_2"), 76, 0);
	func_34(29, joaat("VAL_RANCHER_1"), 76, 0);
	func_34(30, joaat("VAL_RANCHER_2"), 76, 0);
	func_34(31, joaat("VAL_DELIVERY_MAN"), 76, 0);
	func_34(32, joaat("val_newspaper_vendor"), 76, 0);
	func_34(34, joaat("VAL_SALOON_CLEANER"), 76, 0);
	func_34(35, joaat("VAL_TOWN_FARMER"), 76, 0);
	func_34(36, joaat("VAL_TOWN_WORKER_1"), 76, 0);
	func_34(37, joaat("VAL_TOWN_WORKER_2"), 76, 0);
	func_34(38, joaat("VAL_TOWN_WORKER_3"), 76, 0);
	func_34(39, joaat("VAL_TOWN_WORKER_4"), 76, 0);
	func_34(40, joaat("VAL_TOWN_WORKER_5"), 76, 0);
	func_34(41, joaat("VAL_TOWN_WORKER_6"), 76, 0);
	func_34(42, joaat("VAL_TOWN_WORKER_7"), 76, 0);
	func_34(43, joaat("VAL_TOWN_WORKER_8"), 76, 0);
	func_34(44, joaat("VAL_TOWN_WORKER_9"), 76, 0);
	func_34(0, joaat("VAL_TOWN_DRUNK"), 76, 0);
	func_34(52, joaat("VAL_LIVERY_HORSE"), 76, 0);
	func_34(12, joaat("val_bank_manager"), 76, 0);
	func_34(13, joaat("val_bank_guard"), 76, 0);
	func_34(46, joaat("VAL_HORSE_RIDER_1"), 76, 0);
	func_34(47, joaat("VAL_HORSE_RIDER_2"), 76, 0);
	func_34(53, joaat("Val_Pigs_North"), 76, 0);
	func_34(54, joaat("Val_Pigs_West"), 76, 0);
	func_34(55, joaat("VAL_SHEEP_1"), 76, 0);
	func_34(56, joaat("VAL_SHEEP_2"), 76, 0);
	func_34(57, joaat("VAL_SHEEP_3"), 76, 0);
	func_34(58, joaat("VAL_SHEEP_4"), 76, 0);
	func_34(59, joaat("VAL_SHEEP_5"), 76, 0);
	func_34(60, joaat("VAL_SHEEP_6"), 76, 0);
	func_34(61, joaat("VAL_SHEEP_7"), 76, 0);
	func_34(62, joaat("VAL_SHEEP_8"), 76, 0);
	func_34(63, joaat("VAL_RESIDENTIAL_SHEEP_1"), 76, 0);
	func_34(69, joaat("rhd_bartender"), 105, 0);
	func_34(73, joaat("rhd_gunsmith"), 105, 1048576);
	func_34(74, joaat("rhd_general_store"), 105, 1048576);
	func_34(78, joaat("rhd_fence"), 105, 1048576);
	func_34(79, joaat("RHD_PIANO_PLAYER"), 105, 0);
	func_34(80, joaat("RHD_HOTEL_OWNER"), 105, 0);
	func_34(70, joaat("rhd_sheriff"), 105, 2097152);
	func_34(71, joaat("RHD_DEPUTY"), 105, 2097152);
	func_34(81, joaat("rhd_livery_worker"), 105, 0);
	func_34(72, joaat("rhd_train_stat_owner"), 105, 0);
	func_34(77, joaat("rhd_butcher"), 105, 0);
	func_34(82, joaat("RHD_UNDERTAKER"), 105, 0);
	func_34(76, joaat("rhd_bank_manager"), 105, 0);
	func_34(75, joaat("RHD_BANK_GUARD"), 105, 0);
	func_34(127, joaat("RHD_PRISONER"), 105, 0);
	func_34(88, joaat("rhd_newspaper_vendor"), 105, 0);
	func_34(83, joaat("RHD_GAMBLER"), 105, 0);
	func_34(84, joaat("RHD_GOOD_TIME_GIRL_1"), 105, 0);
	func_34(85, joaat("RHD_GOOD_TIME_GIRL_2"), 105, 0);
	func_34(86, joaat("RHD_GOOD_TIME_GIRL_3"), 105, 0);
	func_34(87, joaat("RHD_GOOD_TIME_GIRL_4"), 105, 0);
	func_34(89, joaat("RHD_COTTON_CARRIER_1"), 105, 0);
	func_34(90, joaat("RHD_COTTON_CARRIER_2"), 105, 0);
	func_34(91, joaat("RHD_COTTON_LOADER_1"), 105, 0);
	func_34(92, joaat("RHD_COTTON_SUPERVISOR"), 105, 0);
	func_34(93, joaat("RHD_COTTON_SWEEPER_1"), 105, 0);
	func_34(94, joaat("RHD_COTTON_SWEEPER_2"), 105, 0);
	func_34(95, joaat("RHD_STABLE_WORKER_1"), 105, 0);
	func_34(96, joaat("RHD_STABLE_WORKER_2"), 105, 0);
	func_34(97, joaat("RHD_DELIVERY_WORKER_1"), 105, 0);
	func_34(98, joaat("RHD_DELIVERY_WORKER_2"), 105, 0);
	func_34(99, joaat("RHD_MANSION_FEMALE_1"), 105, 0);
	func_34(100, joaat("RHD_MANSION_FEMALE_2"), 105, 0);
	func_34(101, joaat("RHD_MANSION_MALE_1"), 105, 0);
	func_34(102, joaat("RHD_MANSION_MALE_2"), 105, 0);
	func_34(103, joaat("rhd_mansion_worker_1"), 105, 0);
	func_34(104, joaat("rhd_mansion_worker_2"), 105, 0);
	func_34(105, joaat("rhd_parlor_worker_1"), 105, 0);
	func_34(106, joaat("RHD_BLACK_SLUMS_FEMALE_1"), 105, 0);
	func_34(107, joaat("RHD_BLACK_SLUMS_FEMALE_2"), 105, 0);
	func_34(108, joaat("RHD_BLACK_SLUMS_FEMALE_3"), 105, 0);
	func_34(109, joaat("RHD_BLACK_SLUMS_FEMALE_4"), 105, 0);
	func_34(110, joaat("RHD_BLACK_SLUMS_FEMALE_5"), 105, 0);
	func_34(111, joaat("RHD_GRAYS_GANG_1"), 105, 0);
	func_34(112, joaat("RHD_GRAYS_GANG_2"), 105, 0);
	func_34(113, joaat("RHD_GRAYS_GANG_3"), 105, 0);
	func_34(114, joaat("RHD_GRAYS_GANG_4"), 105, 0);
	func_34(115, joaat("RHD_WHITE_SLUMS_1"), 105, 0);
	func_34(116, joaat("RHD_WHITE_SLUMS_2"), 105, 0);
	func_34(117, joaat("RHD_WHITE_SLUMS_3"), 105, 0);
	func_34(118, joaat("RHD_WHITE_SLUMS_4"), 105, 0);
	func_34(119, joaat("RHD_WHITE_SLUMS_5"), 105, 0);
	func_34(120, joaat("RHD_SLUMS_DRUNK_1"), 105, 0);
	func_34(121, joaat("RHD_SLUMS_DRUNK_2"), 105, 0);
	func_34(122, joaat("RHD_SLUMS_DRUNK_3"), 105, 0);
	func_34(123, joaat("RHD_SLUMS_DRUNK_4"), 105, 0);
	func_34(124, joaat("RHD_SLUMS_DRUNK_5"), 105, 0);
	func_34(125, joaat("RHD_WHITE_SLUMS_MUSICIAN"), 105, 0);
	func_34(126, joaat("RHD_LARGE_MALE_1"), 105, 0);
	func_34(128, joaat("RHD_BLACK_SLUMS_DOG"), 105, 0);
	func_34(129, joaat("RHD_MAIN_STRIP_DOG"), 105, 0);
	func_34(130, joaat("RHD_MANSION_CAT"), 105, 0);
	func_34(131, joaat("RHD_MANSION_DOG"), 105, 0);
	func_34(132, joaat("RHD_WHITE_SLUMS_CAT_1"), 105, 0);
	func_34(133, joaat("RHD_WHITE_SLUMS_CAT_2"), 105, 0);
	func_34(134, joaat("RHD_WHITE_SLUMS_DOG"), 105, 0);
	func_34(135, joaat("RHD_WHITE_SLUMS_DOG_2"), 105, 0);
	func_34(136, joaat("RHD_WHITE_SLUMS_PIG"), 105, 0);
	func_34(744, joaat("WTC_OLD_LADY"), 29, 0);
	func_34(731, joaat("APF_BROTHER"), 77, 0);
	func_34(732, joaat("APF_SISTER"), 77, 0);
	func_34(626, joaat("CGH_FARM_HAND"), 95, 0);
	func_34(627, joaat("CGH_FIELD_GUARD"), 95, 0);
	func_34(628, joaat("CGH_FIELD_GUARD_2"), 95, 0);
	func_34(629, joaat("CGH_FIELD_GUARD_3"), 95, 0);
	func_34(630, joaat("CGH_FIELD_GUARD_4"), 95, 0);
	func_34(631, joaat("CGH_GATE_GUARD"), 95, 0);
	func_34(632, joaat("CGH_GATE_GUARD_2"), 95, 0);
	func_34(633, joaat("CGH_HORSE_GUARD"), 95, 0);
	func_34(634, joaat("CGH_HORSE_GUARD_2"), 95, 0);
	func_34(635, joaat("CGH_HOUSE_GUARD"), 95, 0);
	func_34(636, joaat("CGH_HOUSE_GUARD_2"), 95, 0);
	func_34(637, joaat("CGH_HOUSE_GUARD_3"), 95, 0);
	func_34(638, joaat("CGH_HOUSE_GUARD_4"), 95, 0);
	func_34(639, joaat("CGH_MULE"), 95, 0);
	func_34(640, joaat("CGH_OX_1"), 95, 0);
	func_34(641, joaat("CGH_OX_2"), 95, 0);
	func_34(642, joaat("CLE_CLAY"), 97, 0);
	func_34(643, joaat("CLE_CLIVE"), 97, 0);
	func_34(613, joaat("bra_stable_hand"), 93, 0);
	func_34(614, joaat("BRA_STABLE_HAND_2"), 93, 0);
	func_34(617, joaat("BRA_GATE_GUARD"), 93, 0);
	func_34(618, joaat("BRA_GATE_GUARD_2"), 93, 0);
	func_34(619, joaat("BRA_GATE_GUARD_3"), 93, 0);
	func_34(620, joaat("BRA_GATE_GUARD_4"), 93, 0);
	func_34(621, joaat("BRA_MANOR_GUARD"), 93, 0);
	func_34(622, joaat("BRA_MANOR_GUARD_2"), 93, 0);
	func_34(623, joaat("BRA_MANOR_GUARD_3"), 93, 0);
	func_34(624, joaat("BRA_MANOR_GUARD_4"), 93, 0);
	func_34(625, joaat("BRA_MANOR_GUARD_5"), 93, 0);
	func_34(616, joaat("BRA_HORSES_01"), 93, 0);
	func_34(615, joaat("BRA_OXEN_PERSCHAR_1"), 93, 0);
	func_34(644, joaat("LAG_FATHER1"), 3, 0);
	func_34(645, joaat("lag_mother1"), 3, 0);
	func_34(646, joaat("LAG_MOTHER2"), 3, 0);
	func_34(647, joaat("LAG_MOTHER3"), 3, 0);
	func_34(648, joaat("LAG_F_TEEN1"), 3, 0);
	func_34(649, joaat("LAG_F_TEEN2"), 3, 0);
	func_34(656, joaat("LAG_GRANDMOTHER1"), 3, 0);
	func_34(650, joaat("LAG_FISHERMAN1"), 3, 0);
	func_34(651, joaat("LAG_FISHERMAN2"), 3, 0);
	func_34(652, joaat("LAG_FISHERMAN4"), 3, 0);
	func_34(653, joaat("LAG_DOG_1"), 3, 0);
	func_34(654, joaat("LAG_DOG_2"), 3, 0);
	func_34(655, joaat("LAG_GOAT"), 3, 0);
	func_34(657, joaat("ora_foreman"), 6, 0);
	func_34(658, joaat("ora_guard"), 6, 0);
	func_34(207, joaat("SDN_ARTIST"), 5, 0);
	func_34(208, joaat("SDN_BANK_TELLER"), 5, 0);
	func_34(209, joaat("SDN_BANK_GUARD"), 5, 0);
	func_34(201, joaat("sdn_barber"), 5, 1048576);
	func_34(137, joaat("sdn_bartender"), 5, 0);
	func_34(138, joaat("sdn_bartender_slums"), 5, 0);
	func_34(139, joaat("sdn_butcher"), 5, 1048576);
	func_34(144, joaat("SDN_CITY_WORKER_1"), 5, 0);
	func_34(145, joaat("SDN_COM_CHURCH_WORKER_1"), 5, 0);
	func_34(146, joaat("SDN_COURTYARD_LADY_01"), 5, 0);
	func_34(147, joaat("SDN_COURTYARD_LADY_02"), 5, 0);
	func_34(148, joaat("SDN_DOCK_BOAT_GUARD_1"), 5, 0);
	func_34(149, joaat("SDN_DOCK_CASTILLE_1"), 5, 0);
	func_34(150, joaat("SDN_DOCK_CASTILLE_2"), 5, 0);
	func_34(151, joaat("SDN_DOCK_CIVIL_1"), 5, 0);
	func_34(152, joaat("SDN_DOCK_CONSTR_1") /* collision: ilo_kick_neg */, 5, 0);
	func_34(153, joaat("SDN_DOCK_CONSTR_2"), 5, 0);
	func_34(154, joaat("SDN_DOCK_CONSTR_3"), 5, 0);
	func_34(155, joaat("SDN_DOCK_CORNWALL_1"), 5, 0);
	func_34(156, joaat("SDN_DOCK_COTTON_1"), 5, 0);
	func_34(157, joaat("SDN_DOCK_COTTON_2"), 5, 0);
	func_34(158, joaat("SDN_DOCK_COTTON_3"), 5, 0);
	func_34(159, joaat("SDN_DOCK_COTTON_4"), 5, 0);
	func_34(160, joaat("SDN_DOCK_COTTON_5"), 5, 0);
	func_34(161, joaat("SDN_DOCK_COTTON_6"), 5, 0);
	func_34(162, joaat("SDN_DOCK_COTTON_7"), 5, 0);
	func_34(163, joaat("SDN_DOCK_COTTON_8"), 5, 0);
	func_34(164, joaat("SDN_DOCK_LH_1"), 5, 0);
	func_34(165, joaat("SDN_DOCK_LH_2"), 5, 0);
	func_34(166, joaat("SDN_DOCK_LH_3"), 5, 0);
	func_34(167, joaat("SDN_DOCK_LH_CAT"), 5, 0);
	func_34(168, joaat("SDN_DOCK_LH_DOG"), 5, 0);
	func_34(169, joaat("SDN_DOCK_LUMBER_1"), 5, 0);
	func_34(170, joaat("SDN_DOCK_LUMBER_2"), 5, 0);
	func_34(171, joaat("SDN_DOCK_LUMBER_3"), 5, 0);
	func_34(172, joaat("SDN_DOCK_LUMBER_4"), 5, 0);
	func_34(173, joaat("SDN_DOCK_WORKER_1"), 5, 0);
	func_34(174, joaat("SDN_DOCK_WORKER_2"), 5, 0);
	func_34(175, joaat("SDN_DOCK_WORKER_3"), 5, 0);
	func_34(176, joaat("SDN_DOCK_WORKER_4"), 5, 0);
	func_34(140, joaat("sdn_doctor"), 5, 1048576);
	func_34(177, joaat("SDN_FARMER_01"), 5, 0);
	func_34(178, joaat("SDN_FARMER_DOG_01"), 5, 0);
	func_34(210, joaat("SDN_Chicken_1"), 5, 0);
	func_34(211, joaat("SDN_Rooster_1"), 5, 0);
	func_34(212, joaat("SDN_Goat_1"), 5, 0);
	func_34(213, joaat("SDN_Goat_2"), 5, 0);
	func_34(215, joaat("SDN_COW_1"), 5, 0);
	func_34(216, joaat("SDN_COW_2"), 5, 0);
	func_34(217, joaat("SDN_BULL_2"), 5, 0);
	func_34(218, joaat("SDN_COW_3"), 5, 0);
	func_34(214, joaat("SDN_Horse_1"), 5, 0);
	func_34(255, joaat("SDN_PIG_2"), 5, 0);
	func_34(179, joaat("SDN_FARMER_WIFE_01"), 5, 0);
	func_34(180, joaat("SDN_FARMER_WIFE_02"), 5, 0);
	func_34(181, joaat("SDN_FARMER_WIFE_03"), 5, 0);
	func_34(182, joaat("SDN_FARMER_WIFE_04"), 5, 0);
	func_34(183, joaat("SDN_FARMHAND_01"), 5, 0);
	func_34(184, joaat("SDN_FARMHAND_02"), 5, 0);
	func_34(185, joaat("SDN_FARMHAND_03A"), 5, 0);
	func_34(186, joaat("SDN_FARMHAND_03B"), 5, 0);
	func_34(187, joaat("SDN_FARMHAND_04"), 5, 0);
	func_34(188, joaat("SDN_FARMHAND_05"), 5, 0);
	func_34(189, joaat("SDN_RURAL_BLACKSMITH"), 5, 0);
	func_34(190, joaat("SDN_RURAL_HOUSE_LADY_1"), 5, 0);
	func_34(191, joaat("SDN_RURAL_HOUSE_LADY_2"), 5, 0);
	func_34(192, joaat("SDN_RURAL_SLUMS_DOG_1"), 5, 0);
	func_34(193, joaat("SDN_RURAL_SLUMS_DOG_2"), 5, 0);
	func_34(194, joaat("SDN_RURAL_SLUMS_MAN_1"), 5, 0);
	func_34(195, joaat("SDN_RURAL_SLUMS_MAN_2"), 5, 0);
	func_34(196, joaat("SDN_RURAL_SLUMS_WOMAN_1"), 5, 0);
	func_34(197, joaat("SDN_RURAL_SLUMS_WOMAN_2"), 5, 0);
	func_34(198, joaat("SDN_FLOWER_ENTHUSIAST"), 5, 0);
	func_34(199, joaat("SDN_FLOWER_ENTHUSIAST_2"), 5, 0);
	func_34(200, joaat("sdn_gen_store_owner"), 5, 1048576);
	func_34(219, joaat("sdn_gen_store_shady"), 5, 1048576);
	func_34(220, joaat("SDN_GROUNDS_KEEPER_1"), 5, 0);
	func_34(221, joaat("SDN_GROUNDS_KEEPER_2"), 5, 0);
	func_34(222, joaat("SDN_GROUNDS_KEEPER_3"), 5, 0);
	func_34(223, joaat("SDN_GROUNDS_KEEPER_4"), 5, 0);
	func_34(224, joaat("SDN_GROUNDS_KEEPER_5"), 5, 0);
	func_34(202, joaat("sdn_gunsmith"), 5, 1048576);
	func_34(203, joaat("SDN_HOMEOWNER_01"), 5, 0);
	func_34(204, joaat("SDN_HOMEOWNER_02"), 5, 0);
	func_34(205, joaat("sdn_horse_shop_owner"), 5, 1048576);
	func_34(206, joaat("SDN_HOTEL_CARETAKER"), 5, 0);
	func_34(225, joaat("SDN_IND_CASTILLE_1"), 5, 0);
	func_34(226, joaat("SDN_IND_CASTILLE_2"), 5, 0);
	func_34(227, joaat("SDN_IND_CASTILLE_3"), 5, 0);
	func_34(228, joaat("SDN_IND_CASTILLE_4"), 5, 0);
	func_34(229, joaat("SDN_IND_CASTILLE_5"), 5, 0);
	func_34(230, joaat("SDN_IND_CASTILLE_6"), 5, 0);
	func_34(233, joaat("SDN_IND_COURTYARD_1"), 5, 0);
	func_34(234, joaat("SDN_IND_LAMBERT_1"), 5, 0);
	func_34(235, joaat("SDN_IND_LAMBERT_2"), 5, 0);
	func_34(236, joaat("SDN_IND_LAMBERT_3"), 5, 0);
	func_34(237, joaat("SDN_IND_LAMBERT_4"), 5, 0);
	func_34(238, joaat("SDN_IND_LAMBERT_5"), 5, 0);
	func_34(231, joaat("sdn_ind_castille_dog"), 5, 0);
	func_34(232, joaat("SDN_IND_CASTILLE_DOG_2"), 5, 0);
	func_34(239, joaat("SDN_IND_LANIK_1"), 5, 0);
	func_34(240, joaat("SDN_IND_LANIK_2"), 5, 0);
	func_34(241, joaat("sdn_market_vendor1"), 5, 0);
	func_34(242, joaat("sdn_frenchmarket_vendor_1"), 5, 0);
	func_34(243, joaat("sdn_frenchmarket_vendor_2"), 5, 0);
	func_34(245, joaat("SDN_FRENCHMARKET_FEMALE_1"), 5, 0);
	func_34(244, joaat("SDN_FRENCHMARKET_MALE_1"), 5, 0);
	func_34(246, joaat("SDN_FRENCHMARKET_WORKER_1"), 5, 0);
	func_34(247, joaat("SDN_FRENCHMARKET_WORKER_2"), 5, 0);
	func_34(248, joaat("SDN_SLUMSMARKET_FEMALE_1"), 5, 0);
	func_34(249, joaat("SDN_MARKET_WORKER_1"), 5, 0);
	func_34(250, joaat("sdn_musician"), 5, 0);
	func_34(251, joaat("sdn_newspaper_vendor"), 5, 0);
	func_34(252, joaat("SDN_PARK_CARETAKER_1"), 5, 0);
	func_34(253, joaat("SDN_PARK_CARETAKER_2"), 5, 0);
	func_34(254, joaat("SDN_PARK_CARETAKER_3"), 5, 0);
	func_34(256, joaat("sdn_police_chief"), 5, 0);
	func_34(265, joaat("SDN_PARK_POLICE"), 5, 0);
	func_34(266, joaat("SDN_PARK_POLICE_2"), 5, 0);
	func_34(257, joaat("SDN_COM_POLICE_1"), 5, 0);
	func_34(258, joaat("SDN_COM_POLICE_2"), 5, 0);
	func_34(259, joaat("SDN_COM_POLICE_3"), 5, 0);
	func_34(260, joaat("SDN_DOCK_POLICE_1"), 5, 0);
	func_34(261, joaat("SDN_DOCK_POLICE_2"), 5, 0);
	func_34(262, joaat("SDN_FRENCH_POLICE_1"), 5, 0);
	func_34(263, joaat("SDN_FRENCH_POLICE_2"), 5, 0);
	func_34(264, joaat("SDN_FRENCH_POLICE_3"), 5, 0);
	func_34(267, joaat("SDN_GARDEN_POLICE_1"), 5, 0);
	func_34(268, joaat("SDN_GARDEN_POLICE_2"), 5, 0);
	func_34(269, joaat("SDN_GARDEN_POLICE_3"), 5, 0);
	func_34(270, joaat("SDN_GARDEN_POLICE_4"), 5, 0);
	func_34(271, joaat("SDN_GARDEN_POLICE_5"), 5, 0);
	func_34(272, joaat("SDN_GARDEN_POLICE_6"), 5, 0);
	func_34(273, joaat("SDN_GARDEN_POLICE_7"), 5, 0);
	func_34(274, joaat("SDN_GARDEN_POLICE_8"), 5, 0);
	func_34(275, joaat("SDN_GARDEN_POLICE_9"), 5, 0);
	func_34(276, joaat("SDN_GARDEN_POLICE_10"), 5, 0);
	func_34(277, joaat("sdn_garden_cat"), 5, 0);
	func_34(278, joaat("sdn_garden_dog"), 5, 0);
	func_34(279, joaat("SDN_GARDEN_DRINKER_1"), 5, 0);
	func_34(280, joaat("SDN_GARDEN_DRINKER_2"), 5, 0);
	func_34(143, joaat("sdn_photographer"), 5, 0);
	func_34(281, joaat("SDN_PRISONER_1"), 5, 0);
	func_34(282, joaat("SDN_PRISONER_2"), 5, 0);
	func_34(283, joaat("SDN_SHOW_TICKET_VENDOR"), 5, 1048576);
	func_34(284, joaat("SDN_SHOW_TICKET_VENDOR_2"), 5, 1048576);
	func_34(142, joaat("sdn_tailor"), 5, 1048576);
	func_34(305, joaat("SDN_TOURIST_MALE_1"), 5, 0);
	func_34(306, joaat("SDN_TOURIST_FEMALE_1"), 5, 0);
	func_34(141, joaat("SDN_TRAINSTATIONWORKER"), 5, 0);
	func_34(285, joaat("SDN_WAGON_DELIVERY_1"), 5, 0);
	func_34(286, joaat("SDN_WAGON_DELIVERY_2"), 5, 0);
	func_34(322, joaat("SDN_FRENCH_COURTYARD_DOG"), 5, 0);
	func_34(316, joaat("SDN_FRENCH_RAKER"), 5, 0);
	func_34(317, joaat("SDN_FRENCH_SALOON_1"), 5, 0);
	func_34(318, joaat("SDN_FRENCH_SALOON_2"), 5, 0);
	func_34(319, joaat("SDN_FRENCH_SALOON_3"), 5, 0);
	func_34(320, joaat("SDN_FRENCH_PROSTITUTE_1"), 5, 0);
	func_34(321, joaat("SDN_FRENCH_TRUMPET_MALE_1"), 5, 0);
	func_34(323, joaat("SDN_FRENCH_LOWERCLASS_WOMAN"), 5, 0);
	func_34(324, joaat("SDN_FRENCH_SWEEPER"), 5, 0);
	func_34(287, joaat("SDN_SLUMS_SALOON_1"), 5, 0);
	func_34(288, joaat("SDN_SLUMS_SALOON_2"), 5, 0);
	func_34(289, joaat("SDN_SLUMS_SALOON_PIANO"), 5, 0);
	func_34(298, joaat("SDN_SLUMS_PROSTITUTE_1"), 5, 0);
	func_34(299, joaat("SDN_SOUP_KITCHEN_1"), 5, 0);
	func_34(300, joaat("SDN_SOUP_KITCHEN_2"), 5, 0);
	func_34(301, joaat("SDN_SOUP_KITCHEN_3"), 5, 0);
	func_34(302, joaat("SDN_SOUP_KITCHEN_4"), 5, 0);
	func_34(303, joaat("SDN_SOUP_KITCHEN_5"), 5, 0);
	func_34(304, joaat("SDN_SOUP_KITCHEN_6"), 5, 0);
	func_34(290, joaat("SDN_SLUMS_MALE_RES_1"), 5, 0);
	func_34(291, joaat("SDN_SLUMS_MALE_RES_2"), 5, 0);
	func_34(292, joaat("SDN_SLUMS_MALE_RES_3"), 5, 0);
	func_34(293, joaat("SDN_SLUMS_FEMALE_RES_1"), 5, 0);
	func_34(294, joaat("SDN_SLUMS_FEMALE_RES_2"), 5, 0);
	func_34(295, joaat("SDN_SLUMS_SHADY"), 5, 0);
	func_34(296, joaat("SDN_SLUMS_FISHERMAN"), 5, 0);
	func_34(297, joaat("SDN_SLUMS_ARTIST"), 5, 0);
	func_34(307, joaat("SDN_CEMETERY_KEEPER"), 5, 0);
	func_34(308, joaat("SDN_CHURCH_KEEPER"), 5, 0);
	func_34(309, joaat("SDN_SLUMS_PIG_1"), 5, 0);
	func_34(310, joaat("SDN_SLUMS_PIG_2"), 5, 0);
	func_34(311, joaat("sdn_slums_dog_1"), 5, 0);
	func_34(312, joaat("sdn_slums_dog_2"), 5, 0);
	func_34(313, joaat("sdn_slums_dog_3"), 5, 0);
	func_34(314, joaat("sdn_slums_dog_4"), 5, 0);
	func_34(315, joaat("sdn_slums_dog_5"), 5, 0);
	func_34(334, joaat("SIS_BRIDGE_GUARD"), 32, 0);
	func_34(335, joaat("SIS_BRIDGE_GUARD_2"), 32, 0);
	func_34(325, joaat("SIS_COURTYARD_GUARD"), 32, 0);
	func_34(326, joaat("SIS_COURTYARD_GUARD_2"), 32, 0);
	func_34(327, joaat("SIS_COURTYARD_GUARD_3"), 32, 0);
	func_34(328, joaat("SIS_COURTYARD_GUARD_4"), 32, 0);
	func_34(336, joaat("SIS_DOCKS_GUARD"), 32, 0);
	func_34(337, joaat("SIS_FIELD_GUARD"), 32, 0);
	func_34(338, joaat("SIS_FIELD_GUARD_2"), 32, 0);
	func_34(339, joaat("SIS_FIELD_GUARD_3"), 32, 0);
	func_34(340, joaat("SIS_FIELD_GUARD_4"), 32, 0);
	func_34(329, joaat("SIS_GATE_GUARD"), 32, 0);
	func_34(330, joaat("SIS_GATE_GUARD_2"), 32, 0);
	func_34(331, joaat("SIS_GATE_GUARD_3"), 32, 0);
	func_34(332, joaat("SIS_GATE_GUARD_4"), 32, 0);
	func_34(333, joaat("SIS_GATE_GUARD_5"), 32, 0);
	func_34(341, joaat("SIS_WALL_GUARD"), 32, 0);
	func_34(342, joaat("SIS_WALL_GUARD_2"), 32, 0);
	func_34(343, joaat("SIS_WALL_GUARD_3"), 32, 0);
	func_34(344, joaat("SIS_WALL_GUARD_4"), 32, 0);
	func_34(345, joaat("TBL_HOMEOWNER_MALE_RESIDENT"), 115, 0);
	func_34(351, joaat("tbl_bartender"), 115, 0);
	func_34(352, joaat("tbl_butcher"), 115, 0);
	func_34(346, joaat("TBL_HOMEOWNER_FEMALE_RESIDENT"), 115, 0);
	func_34(347, joaat("tbl_horse_shop_owner"), 115, 0);
	func_34(375, joaat("TBL_RANCHER"), 115, 0);
	func_34(372, joaat("TBL_RANCH_HORSES"), 115, 0);
	func_34(373, joaat("TBL_RANCH_WORKER_1"), 115, 0);
	func_34(374, joaat("TBL_RANCH_WORKER_2"), 115, 0);
	func_34(348, joaat("tbl_sherrif"), 115, 2097152);
	func_34(367, joaat("TBL_SALOON_PATRON_1"), 115, 0);
	func_34(368, joaat("TBL_SALOON_PATRON_2"), 115, 0);
	func_34(369, joaat("TBL_SALOON_PATRON_3"), 115, 0);
	func_34(370, joaat("TBL_SALOON_WORKER_1"), 115, 0);
	func_34(371, joaat("TBL_SALOON_WORKER_2"), 115, 0);
	func_34(349, joaat("TBL_SHERRIF_DEPUTY"), 115, 0);
	func_34(350, joaat("TBL_SHERRIF_DEPUTY_3"), 115, 0);
	func_34(353, joaat("tbl_general_store_owner"), 115, 0);
	func_34(366, joaat("TBL_SCAVENGER"), 115, 0);
	func_34(354, joaat("TBL_PIANO_PLAYER"), 115, 0);
	func_34(355, joaat("TBL_DOG_1"), 115, 0);
	func_34(356, joaat("TBL_DOG_2"), 115, 0);
	func_34(357, joaat("TBL_RESIDENTS_DOG"), 115, 0);
	func_34(358, joaat("TBL_RANCH_DOG"), 115, 0);
	func_34(359, joaat("TBL_PRISONER_1"), 115, 0);
	func_34(360, joaat("TBL_PRISONER_2"), 115, 0);
	func_34(361, joaat("TBL_PRISONER_3"), 115, 0);
	func_34(362, joaat("TBL_PRISONER_4"), 115, 0);
	func_34(363, joaat("TBL_PRISONER_5"), 115, 0);
	func_34(364, joaat("TBL_PRISONER_6"), 115, 0);
	func_34(365, joaat("tbl_gunsmith_owner"), 115, 0);
	func_34(376, joaat("TWR_RANCH_GUARD"), 125, 0);
	func_34(377, joaat("TWR_RANCH_GUARD_2"), 125, 0);
	func_34(378, joaat("TWR_RANCH_GUARD_3"), 125, 0);
	func_34(379, joaat("TWR_RANCH_GUARD_4"), 125, 0);
	func_34(507, joaat("ben_trainstationworker"), 117, 0);
	func_34(791, joaat("RID_HORSES_PERSCHAR_1"), 124, 0);
	func_34(792, joaat("RID_HORSES_PERSCHAR_2"), 124, 0);
	func_34(793, joaat("RID_HORSESHOP_DOG"), 124, 0);
	func_34(380, joaat("LEV_DOG"), 61, 0);
	func_34(381, joaat("Lev_GOAT"), 61, 0);
	func_34(589, joaat("emr_father"), 69, 0);
	func_34(591, joaat("emr_gardener"), 69, 0);
	func_34(592, joaat("EMR_GARDENER2"), 69, 0);
	func_34(593, joaat("emr_handyman"), 69, 0);
	func_34(598, joaat("emr_son1"), 69, 0);
	func_34(602, joaat("EMR_CAT"), 69, 0);
	func_34(603, joaat("EMR_CAT_2"), 69, 0);
	func_34(604, joaat("EMR_CHICKENS_PERSCHAR_1"), 69, 0);
	func_34(605, joaat("EMR_COWS_PERSCHAR_1"), 69, 0);
	func_34(609, joaat("EMR_GOATS_PERSCHAR_1"), 69, 0);
	func_34(610, joaat("EMR_HORSES_PERSCHAR_1"), 69, 0);
	func_34(611, joaat("EMR_OX_PERSCHAR_1"), 69, 0);
	func_34(612, joaat("EMR_ROOSTER_PERSCHAR_1"), 69, 0);
	func_34(599, joaat("EMR_SHEEP_PERSCHAR_1"), 69, 0);
	func_34(600, joaat("EMR_SHEEP_PERSCHAR_2"), 69, 0);
	func_34(601, joaat("EMR_SHEEP_PERSCHAR_3"), 69, 0);
	func_34(606, joaat("emr_dog"), 69, 0);
	func_34(607, joaat("EMR_DOG_02"), 69, 0);
	func_34(608, joaat("EMR_DOG_03"), 69, 0);
	func_34(594, joaat("emr_farmhand1"), 69, 0);
	func_34(595, joaat("emr_farmhand2"), 69, 0);
	func_34(596, joaat("emr_farmhand3"), 69, 0);
	func_34(597, joaat("EMR_FARMHAND4"), 69, 0);
	func_34(590, joaat("VEM_COLOUR_1_MCT_MATTE_MATTE_FOR_t24_v4") /* collision: emr_trainstationworker */, 69, 0);
	func_34(554, joaat("DOR_THOMASDOWN"), 68, 32);
	func_34(555, joaat("DOR_EDITHDOWN"), 68, 32);
	func_34(556, joaat("DOR_ARCHIEDOWN"), 68, 32);
	func_34(557, joaat("DOR_RANCHHAND"), 68, 0);
	func_34(565, joaat("dor_husband"), 68, 0);
	func_34(560, joaat("DOWNS_RANCH_PIGS_PERSCHAR_1"), 68, 0);
	func_34(561, joaat("DOWNS_RANCH_GOATS_PERSCHAR_1"), 68, 0);
	func_34(562, joaat("DOWNS_RANCH_OX_PERSCHAR_1"), 68, 0);
	func_34(563, joaat("DOR_FRIENDLY_DOG"), 68, 0);
	func_34(564, joaat("DOR_GUARD_DOG"), 68, 0);
	func_34(558, joaat("DOWNS_RANCH_DEMO_COWS"), 68, 32);
	func_34(559, joaat("DOWNS_RANCH_DEMO_COWS_2"), 68, 32);
	func_34(691, joaat("ofw_officer1"), 35, 0);
	func_34(692, joaat("OFW_OFFICER2"), 35, 0);
	func_34(693, joaat("OFW_OFFICER3"), 35, 0);
	func_34(696, joaat("ofw_enlisted1"), 35, 0);
	func_34(697, joaat("OFW_ENLISTED2"), 35, 0);
	func_34(698, joaat("OFW_ENLISTED3"), 35, 0);
	func_34(699, joaat("OFW_ENLISTED4"), 35, 0);
	func_34(700, joaat("OFW_ENLISTED5"), 35, 0);
	func_34(694, joaat("OFW_DOG"), 35, 0);
	func_34(695, joaat("OFW_DOG_2"), 35, 0);
	func_34(701, joaat("wap_shopkeeper"), 56, 1048576);
	func_34(704, joaat("wap_headbrave"), 56, 0);
	func_34(703, joaat("wap_official"), 56, 0);
	func_34(705, joaat("wap_siouxchef"), 56, 0);
	func_34(702, joaat("wap_medicineman"), 56, 0);
	func_34(706, joaat("WAP_HORSE_1"), 56, 0);
	func_34(707, joaat("WAP_HORSE_2"), 56, 0);
	func_34(708, joaat("WAP_HORSE_3"), 56, 0);
	func_34(659, joaat("BUT_CONSTRUCTION_DRUNK_1"), 82, 0);
	func_34(660, joaat("BUT_CONSTRUCTION_DRUNK_2"), 82, 0);
	func_34(665, joaat("but_shaman"), 82, 32);
	func_34(674, joaat("BUT_CHICKENS_PERSCHAR_1"), 82, 0);
	func_34(675, joaat("BUT_CHICKENS_PERSCHAR_2"), 82, 0);
	func_34(676, joaat("BUT_CHICKENS_PERSCHAR_3"), 82, 0);
	func_34(677, joaat("BUT_CHICKENS_PERSCHAR_4"), 82, 0);
	func_34(678, joaat("BUT_CHICKENS_PERSCHAR_5"), 82, 0);
	func_34(661, joaat("BUT_FISHERMAN"), 82, 0);
	func_34(662, joaat("BUT_FISHERMAN_FRIEND"), 82, 0);
	func_34(679, joaat("BUT_GOATS_PERSCHAR_1"), 82, 0);
	func_34(680, joaat("BUT_GOATS_PERSCHAR_2"), 82, 0);
	func_34(681, joaat("BUT_GOATS_PERSCHAR_3"), 82, 0);
	func_34(682, joaat("BUT_RESIDENT_DOG_1"), 82, 0);
	func_34(683, joaat("BUT_RESIDENT_DOG_2"), 82, 0);
	func_34(684, joaat("BUT_OX_PERSCHAR_1"), 82, 0);
	func_34(685, joaat("BUT_PIGS_PERSCHAR_1"), 82, 0);
	func_34(686, joaat("BUT_ROAMING_PIG"), 82, 0);
	func_34(663, joaat("BUT_RESIDENT_FATHER"), 82, 0);
	func_34(664, joaat("BUT_RESIDENT_MOTHER"), 82, 0);
	func_34(666, joaat("BUT_RESIDENT_SON"), 82, 0);
	func_34(687, joaat("BUT_ROOSTER_PERSCHAR_1"), 82, 0);
	func_34(688, joaat("BUT_ROOSTER_PERSCHAR_2"), 82, 0);
	func_34(667, joaat("BUT_SHACK_MAID_1"), 82, 0);
	func_34(668, joaat("BUT_SHACK_MAID_2"), 82, 0);
	func_34(689, joaat("but_solitary_farmer"), 82, 0);
	func_34(690, joaat("but_solitary_dog"), 82, 0);
	func_34(669, joaat("BUT_SUPPLY_SHACK_CIV_1"), 82, 0);
	func_34(670, joaat("BUT_SUPPLY_SHACK_CIV_2"), 82, 0);
	func_34(671, joaat("BUT_SUPPLY_SHACK_CIV_3"), 82, 0);
	func_34(672, joaat("BUT_RESIDENT_MALE_1"), 82, 0);
	func_34(673, joaat("BUT_RESIDENT_MALE_2"), 82, 0);
	func_34(474, joaat("PRIN_P4_28") /* collision: str_general_store */, 26, 1048576);
	func_34(472, joaat("str_sheriff"), 26, 2097152);
	func_34(473, joaat("str_sheriff_deputy"), 26, 2097152);
	func_34(476, joaat("str_freight_clerk"), 26, 0);
	func_34(483, joaat("str_mayor"), 26, 32);
	func_34(477, joaat("str_newspaper_vendor"), 26, 0);
	func_34(487, joaat("STR_CONSTRUCTION_1"), 26, 0);
	func_34(488, joaat("STR_CONSTRUCTION_2"), 26, 0);
	func_34(489, joaat("STR_CONSTRUCTION_3"), 26, 0);
	func_34(492, joaat("str_welcome_center_clerk"), 26, 0);
	func_34(490, joaat("STR_CONSTR_WIFE_1"), 26, 32);
	func_34(491, joaat("STR_CONSTR_WIFE_2"), 26, 32);
	func_34(501, joaat("STR_TOWN_CAT"), 26, 0);
	func_34(502, joaat("str_town_dog"), 26, 0);
	func_34(497, joaat("STR_TOURIST_MALE_1"), 26, 0);
	func_34(498, joaat("STR_TOURIST_MALE_2"), 26, 0);
	func_34(485, joaat("STR_WOOD_CHOPPER_1"), 26, 0);
	func_34(486, joaat("str_wood_chop_wife"), 26, 0);
	func_34(481, joaat("STR_BLACKSMITH"), 26, 0);
	func_34(480, joaat("STR_HORSESHOP_RANCHHAND"), 26, 0);
	func_34(&func_2, joaat("STR_RANCHER"), 26, 0);
	func_34(475, joaat("STR_FISHERMAN"), 26, 0);
	func_34(482, joaat("STR_PERSCHAR_HORSES"), 26, 0);
	func_34(494, joaat("STR_TOWN_WORKER_1"), 26, 0);
	func_34(495, joaat("STR_TOWN_WORKER_2"), 26, 0);
	func_34(496, joaat("STR_TOWN_WORKER_3"), 26, 0);
	func_34(493, joaat("STR_LAZY_WORKER"), 26, 0);
	func_34(499, joaat("STR_PRISONER_01"), 26, 0);
	func_34(500, joaat("STR_PRISONER_02"), 26, 0);
	func_34(478, joaat("str_butcher"), 26, 0);
	func_34(479, joaat("str_horse_shop_owner"), 26, 0);
	func_34(709, joaat("PHR_DAVID_GEDDES"), -1, 0);
	func_34(710, joaat("PHR_TOM_DICKENS"), -1, 0);
	func_34(711, joaat("PHR_MRS_GEDDES"), -1, 0);
	func_34(714, joaat("PHR_ABE"), -1, 0);
	func_34(712, joaat("PHR_ANGUS_GEDDES"), -1, 0);
	func_34(713, joaat("PHR_DUNCAN_GEDDES"), -1, 0);
	func_34(719, joaat("PHR_RANCH_HAND1"), 22, 0);
	func_34(720, joaat("PHR_RANCH_HAND2"), 22, 0);
	func_34(721, joaat("PHR_RANCH_HAND3"), 22, 0);
	func_34(722, joaat("PHR_RANCH_HAND4"), 22, 0);
	func_34(723, joaat("PHR_RANCH_HAND5"), 22, 0);
	func_34(715, joaat("PHR_DOG"), 22, 0);
	func_34(716, joaat("PHR_COWS_1"), 22, 0);
	func_34(717, joaat("PHR_HORSES_1"), 22, 0);
	func_34(718, joaat("PHR_OXEN_1"), 22, 0);
	func_34(724, joaat("MAP_DOG_1"), 110, 0);
	func_34(725, joaat("MAP_ARTIST"), 110, 0);
	func_34(726, joaat("MAP_ARTIST_WIFE"), 110, 0);
	func_34(727, joaat("MAP_BLACKSMITH"), 110, 0);
	func_34(728, joaat("MAP_BLACKSMITH_WIFE"), 110, 0);
	func_34(729, joaat("MAP_WORKER"), 110, 0);
	func_34(730, joaat("MAP_WORKER_WIFE"), 110, 0);
	func_34(566, joaat("ckt_worker"), 65, 0);
	func_34(567, joaat("CKT_WORKER_2"), 65, 0);
	func_34(568, joaat("htl_foreman"), 65, 0);
	func_34(569, joaat("CKT_FOREMAN_2"), 65, 0);
	func_34(572, joaat("CKT_GUARD_1"), 65, 0);
	func_34(573, joaat("CKT_GUARD_2"), 65, 0);
	func_34(574, joaat("CKT_GUARD_3"), 65, 0);
	func_34(575, joaat("CKT_GUARD_4"), 65, 0);
	func_34(576, joaat("CKT_GUARD_5"), 65, 0);
	func_34(577, joaat("CKT_GUARD_6"), 65, 0);
	func_34(578, joaat("CKT_GUARD_7"), 65, 0);
	func_34(579, joaat("CKT_GUARD_8"), 65, 0);
	func_34(580, joaat("CKT_GUARD_9"), 65, 0);
	func_34(581, joaat("CKT_GUARD_10"), 65, 0);
	func_34(582, joaat("CKT_GUARD_11"), 65, 0);
	func_34(583, joaat("CKT_GUARD_12"), 65, 0);
	func_34(584, joaat("CKT_GUARD_13"), 65, 0);
	func_34(585, joaat("CKT_GUARD_14"), 65, 0);
	func_34(586, joaat("CKT_GUARD_15"), 65, 0);
	func_34(587, joaat("CKT_GUARD_16"), 65, 0);
	func_34(588, joaat("CKT_GUARD_17"), 65, 0);
	func_34(570, joaat("CKT_DOG"), 65, 0);
	func_34(571, joaat("CKT_DOG_2"), 65, 0);
	func_34(443, joaat("vht_bartender"), 92, 0);
	func_34(444, joaat("vht_exotic_store"), 92, 1048576);
	func_34(471, joaat("vht_musician"), 92, 0);
	func_34(446, joaat("VHT_TOWN_RESIDENT_1"), 92, 0);
	func_34(447, joaat("VHT_TOWN_RESIDENT_2"), 92, 0);
	func_34(448, joaat("VHT_TOWN_RESIDENT_3"), 92, 0);
	func_34(449, joaat("VHT_RESIDENTS_GUARD_DOG"), 92, 0);
	func_34(450, joaat("VHT_SALOON_PATRON_1"), 92, 0);
	func_34(451, joaat("VHT_SALOON_PATRON_2"), 92, 0);
	func_34(452, joaat("VHT_SALOON_PATRON_3"), 92, 0);
	func_34(453, joaat("VHT_SALOON_PATRON_4"), 92, 0);
	func_34(445, joaat("VHT_HARMONICA_PLAYER"), 92, 0);
	func_34(454, joaat("VHT_SCAVENGER"), 92, 0);
	func_34(459, joaat("vht_horse_shop_owner"), 92, 0);
	func_34(460, joaat("VHT_HORSE_SHOP_DOG"), 92, 0);
	func_34(455, joaat("VHT_SQUATTER_1"), 92, 0);
	func_34(456, joaat("VHT_SQUATTER_2"), 92, 0);
	func_34(457, joaat("VHT_SQUATTER_3"), 92, 0);
	func_34(458, joaat("VHT_SQUATTER_4"), 92, 0);
	func_34(461, joaat("vht_squatter_dog"), 92, 0);
	func_34(462, joaat("vht_town_dog_1"), 92, 0);
	func_34(463, joaat("vht_gen_guard_dog"), 92, 0);
	func_34(465, joaat("VHT_TOWN_GRIEFER"), 92, 0);
	func_34(464, joaat("VHT_TOWN_DRUNK"), 92, 0);
	func_34(466, joaat("VHT_PROSTITUTE_1"), 92, 0);
	func_34(467, joaat("VHT_PROSTITUTE_2"), 92, 0);
	func_34(468, joaat("VHT_HORSE_1"), 92, 0);
	func_34(469, joaat("VHT_GOAT_1"), 92, 0);
	func_34(470, joaat("vht_station_clerk"), 92, 0);
	func_34(741, joaat("cfj_father"), 96, 0);
	func_34(743, joaat("cfj_son"), 96, 0);
	func_34(742, joaat("cfj_son_older"), 96, 0);
	func_34(513, joaat("blw_general_store"), 38, 1048576);
	func_34(516, joaat("blw_horse_shop_owner"), 38, 1048576);
	func_34(517, joaat("BLW_HORSES"), 38, 0);
	func_34(521, joaat("blw_tailor"), 38, 1048576);
	func_34(529, joaat("blw_barber"), 38, 1048576);
	func_34(532, joaat("blw_butcher"), 38, 1048576);
	func_34(522, joaat("blw_train_worker"), 38, 0);
	func_34(524, joaat("blw_newspaper"), 38, 0);
	func_34(514, joaat("blw_photographer"), 38, 0);
	func_34(515, joaat("blw_piano_player"), 38, 0);
	func_34(509, joaat("blw_police_chief"), 38, 0);
	func_34(510, joaat("BLW_POLICE_DEPUTY"), 38, 0);
	func_34(511, joaat("BLW_PRISONER_01"), 38, 0);
	func_34(512, joaat("BLW_PRISONER_02"), 38, 0);
	func_34(519, joaat("blw_bank_clerk"), 38, 0);
	func_34(520, joaat("Blw_Bank_Guard"), 38, 0);
	func_34(508, joaat("blw_bartender"), 38, 0);
	func_34(525, joaat("blw_ticket_vendor"), 38, 0);
	func_34(526, joaat("blw_livery_worker"), 38, 0);
	func_34(527, joaat("BLW_LIVERY_WORKER_02"), 38, 0);
	func_34(528, joaat("BLW_LIVERY_WORKER_02_WIFE"), 38, 0);
	func_34(530, joaat("BLW_BLACKSMITH"), 38, 0);
	func_34(531, joaat("BLW_BLACKSMITH_DOG"), 38, 0);
	func_34(533, joaat("Blw_Carriage_House"), 38, 0);
	func_34(518, joaat("BLW_COWS"), 38, 0);
	func_34(534, joaat("BLW_CHEF"), 38, 0);
	func_34(535, joaat("BLW_CONSTRUCTION_01"), 38, 0);
	func_34(536, joaat("BLW_CONSTRUCTION_02"), 38, 0);
	func_34(537, joaat("BLW_CONSTRUCTION_03"), 38, 0);
	func_34(538, joaat("BLW_CONSTRUCTION_04"), 38, 0);
	func_34(539, joaat("BLW_CONSTRUCTION_ASSISTANT"), 38, 0);
	func_34(540, joaat("BLW_CONSTRUCTION_BOSS"), 38, 0);
	func_34(541, joaat("BLW_CONSTRUCTION_FOREMAN_1"), 38, 0);
	func_34(542, joaat("BLW_CONSTRUCTION_FOREMAN_2"), 38, 0);
	func_34(543, joaat("BLW_GROCERY_FARMER"), 38, 0);
	func_34(544, joaat("BLW_HANDYMAN_1"), 38, 0);
	func_34(545, joaat("BLW_HANDYMAN_2"), 38, 0);
	func_34(546, joaat("BLW_HOMEOWNER_1"), 38, 0);
	func_34(547, joaat("BLW_HOMEOWNER_2"), 38, 0);
	func_34(548, joaat("BLW_SLUM_01"), 38, 0);
	func_34(549, joaat("BLW_SLUM_WIFE_01"), 38, 0);
	func_34(550, joaat("BLW_TENT_CHEF"), 38, 0);
	func_34(551, joaat("BLW_TENT_CHEF_WIFE"), 38, 0);
	func_34(523, joaat("BLW_CHICKENS_01"), 38, 0);
	func_34(552, joaat("BLW_WAGON_DELIVERY_1"), 38, 0);
	func_34(553, joaat("BLW_WAGON_DELIVERY_2"), 38, 0);
	func_34(432, joaat("amd_bartender"), 120, 0);
	func_34(433, joaat("AMD_BAR_PATRON"), 120, 0);
	func_34(434, joaat("amd_general_store"), 120, 0);
	func_34(435, joaat("amd_undertaker"), 120, 0);
	func_34(436, joaat("AMD_UNDERTAKER_HELPER_1"), 120, 0);
	func_34(437, joaat("AMD_CORPSE_WAGON_DRIVER"), 120, 0);
	func_34(434, joaat("amd_general_store"), 120, 0);
	func_34(438, joaat("AMD_CHICKENS_1"), 120, 0);
	func_34(439, joaat("AMD_DOG_1"), 120, 0);
	func_34(440, joaat("AMD_DOG_2"), 120, 0);
	func_34(441, joaat("AMD_HORSES_1"), 120, 0);
	func_34(442, joaat("AMD_PIGS_1"), 120, 0);
	func_34(385, joaat("asb_gunsmith"), 78, 1048576);
	func_34(382, joaat("asb_sheriff"), 78, 2097152);
	func_34(383, joaat("ASB_DEPUTY"), 78, 2097152);
	func_34(386, joaat("asb_newspaper_vendor"), 78, 0);
	func_34(430, joaat("ASB_PRISONER_01"), 78, 0);
	func_34(431, joaat("ASB_PRISONER_02"), 78, 0);
	func_34(387, joaat("ASB_GUARD_01"), 78, 0);
	func_34(388, joaat("ASB_GUARD_02"), 78, 0);
	func_34(389, joaat("ASB_GUARD_03"), 78, 0);
	func_34(390, joaat("ASB_GUARD_04"), 78, 0);
	func_34(391, joaat("ASB_GUARD_05"), 78, 0);
	func_34(392, joaat("ASB_GUARD_06"), 78, 0);
	func_34(393, joaat("ASB_GUARD_07"), 78, 0);
	func_34(394, joaat("ASB_HORSES_01"), 78, 0);
	func_34(&func_1, joaat("ASB_LUMBER_WORKER_01"), 78, 0);
	func_34(402, joaat("ASB_LUMBER_WORKER_02"), 78, 0);
	func_34(403, joaat("ASB_LUMBER_WORKER_03"), 78, 0);
	func_34(395, joaat("ASB_PLANT_WORKER_01"), 78, 0);
	func_34(396, joaat("ASB_PLANT_WORKER_02"), 78, 0);
	func_34(397, joaat("ASB_PLANT_WORKER_03"), 78, 0);
	func_34(398, joaat("ASB_PLANT_WORKER_04"), 78, 0);
	func_34(399, joaat("ASB_PLANT_WORKER_05"), 78, 0);
	func_34(400, joaat("ASB_PLANT_WORKER_06"), 78, 0);
	func_34(404, joaat("ASB_MINE_WORKER_01"), 78, 0);
	func_34(405, joaat("ASB_MINE_WORKER_02"), 78, 0);
	func_34(406, joaat("ASB_MINE_WORKER_03"), 78, 0);
	func_34(407, joaat("ASB_MINE_WORKER_04"), 78, 0);
	func_34(408, joaat("ASB_MINE_WORKER_05"), 78, 0);
	func_34(409, joaat("ASB_MINE_WORKER_06"), 78, 0);
	func_34(410, joaat("ASB_MINE_WORKER_07"), 78, 0);
	func_34(411, joaat("ASB_MINE_WORKER_08"), 78, 0);
	func_34(412, joaat("ASB_MINE_WORKER_09"), 78, 0);
	func_34(413, joaat("ASB_MINE_WORKER_10"), 78, 0);
	func_34(414, joaat("ASB_MINE_WORKER_11"), 78, 0);
	func_34(415, joaat("ASB_MINE_WORKER_12"), 78, 0);
	func_34(416, joaat("ASB_WORKER_WIFE_01"), 78, 0);
	func_34(417, joaat("ASB_WORKER_WIFE_02"), 78, 0);
	func_34(418, joaat("ASB_WORKER_WIFE_03"), 78, 0);
	func_34(419, joaat("ASB_WORKER_WIFE_04"), 78, 0);
	func_34(420, joaat("ASB_WORKER_WIFE_05"), 78, 0);
	func_34(421, joaat("ASB_WORKER_WIFE_06"), 78, 0);
	func_34(422, joaat("ASB_WORKER_WIFE_07"), 78, 0);
	func_34(423, joaat("ASB_WORKER_WIFE_08"), 78, 0);
	func_34(424, joaat("ASB_WORKER_WIFE_09"), 78, 0);
	func_34(425, joaat("ASB_WORKER_WIFE_10"), 78, 0);
	func_34(426, joaat("ASB_WORKER_WIFE_11"), 78, 0);
	func_34(427, joaat("ASB_WORKER_WIFE_12"), 78, 0);
	func_34(428, joaat("ASB_WORKER_WIFE_13"), 78, 0);
	func_34(429, joaat("ASB_WORKER_WIFE_14"), 78, 0);
	func_34(384, joaat("asb_trainstationworker"), 78, 0);
	func_34(768, joaat("MLH_COWS_PERSCHAR_1"), 86, 0);
	func_34(769, joaat("MLH_COWS_PERSCHAR_2"), 86, 0);
	func_34(770, joaat("MLH_COWS_PERSCHAR_3"), 86, 0);
	func_34(771, joaat("MLH_PIGS_PERSCHAR_1"), 86, 0);
	func_34(772, joaat("MLH_GUARD_DOG"), 86, 0);
	func_34(773, joaat("MFR_CAT"), 126, 0);
	func_34(774, joaat("MFR_CHICKENS_PERSCHAR_1"), 126, 0);
	func_34(775, joaat("MFR_CHICKENS_PERSCHAR_2"), 126, 0);
	func_34(776, joaat("MFR_DOG_PERSCHAR_1"), 126, 0);
	func_34(777, joaat("MFR_DOG_PERSCHAR_2"), 126, 0);
	func_34(778, joaat("MFR_ROOSTERS_PERSCHAR_1"), 126, 0);
	func_34(779, joaat("MFR_ROOSTERS_PERSCHAR_2"), 126, 0);
	func_34(780, joaat("pai_ranchhand_02"), 21, 0);
	func_34(782, joaat("PAI_COWS"), 21, 0);
	func_34(781, joaat("PAI_DOG"), 21, 0);
	func_34(764, joaat("lns_tenant_1"), 102, 0);
	func_34(765, joaat("lns_tenant_2"), 102, 0);
	func_34(766, joaat("lns_tenant_3"), 102, 0);
	func_34(767, joaat("lns_tenant_4"), 102, 0);
	func_34(745, joaat("cro_rancher"), 66, 0);
	func_34(746, joaat("cro_ranch_hand"), 66, 0);
	func_34(747, joaat("CRO_FRIENDLY_DOG"), 66, 0);
	func_34(748, joaat("CRO_GUARD_DOG"), 66, 0);
	func_34(749, joaat("CRO_MULE"), 66, 0);
	func_34(750, joaat("CRO_OX_1"), 66, 0);
	func_34(751, joaat("grh_ranch_hand"), 70, 0);
	func_34(754, joaat("Grh_Chickens"), 70, 0);
	func_34(752, joaat("Grh_Rooster"), 70, 0);
	func_34(753, joaat("Grh_Pigs"), 70, 0);
	func_34(755, joaat("DAI_BULL"), 100, 0);
	func_34(760, joaat("dai_rancher"), 100, 0);
	func_34(761, joaat("dai_ranch_hand"), 100, 0);
	func_34(762, joaat("DAI_GUARD_DOG"), 100, 0);
	func_34(756, joaat("DAI_COWS_PERSCHAR_1"), 100, 0);
	func_34(757, joaat("DAI_COWS_PERSCHAR_2"), 100, 0);
	func_34(758, joaat("DAI_COWS_PERSCHAR_3"), 100, 0);
	func_34(759, joaat("Dai_Donkey"), 100, 0);
	func_34(763, joaat("DAI_SICK_COW"), 100, 0);
	func_34(794, joaat("che_father"), 42, 0);
	func_34(795, joaat("che_daughter"), 42, 0);
	func_34(796, joaat("che_son_01"), 42, 0);
	func_34(797, joaat("che_son_02"), 42, 0);
	func_34(798, joaat("che_son_03"), 42, 0);
	func_34(733, joaat("lar_tenant_01"), 72, 0);
	func_34(735, joaat("LAR_DOG"), 72, 0);
	func_34(734, joaat("LARNED_SOD_GOAT_PERSCHAR_1"), 72, 0);
	func_34(736, joaat("CRD_CHICKENS_1"), 64, 0);
	func_34(737, joaat("CRD_DOG"), 64, 0);
	func_34(740, joaat("crd_tenant_02"), 64, 32);
	func_34(783, joaat("rkf_rancher"), 116, 0);
	func_34(784, joaat("rkf_ranch_hand"), 116, 0);
	func_34(790, joaat("RKF_GOATS_PERSCHAR"), 116, 0);
	func_34(789, joaat("RKF_CHICKENS_PERSCHAR"), 116, 0);
	func_34(785, joaat("rkf_dog_1"), 116, 0);
	func_34(786, joaat("rkf_dog_2"), 116, 0);
	func_34(787, joaat("rkf_dog_3"), 116, 0);
	func_34(788, joaat("rkf_dog_4"), 116, 0);
	func_34(799, joaat("rks_tenant"), 89, 0);
	func_34(800, joaat("RKS_DOG"), 89, 0);
	func_34(801, joaat("rgs_postmaster"), 23, 0);
	func_34(802, joaat("wal_train_clerk"), 28, 0);
	func_34(803, joaat("wal_genshopkeeper"), 28, 0);
	func_34(503, joaat("Heartlands_Swanson_Station_Pigs_1"), 75, 0);
	func_34(505, joaat("SWA_CARETAKER"), 75, 0);
	func_34(506, joaat("SWA_CARETAKER_2"), 75, 0);
	func_34(504, joaat("SWA_DOG"), 75, 0);
	func_34(804, joaat("SCM_HORSE_SHOP_OWNER"), 101, 0);
	func_34(805, joaat("SCM_PERSCHAR_HORSES"), 101, 0);
	func_34(806, joaat("SCM_HORSE_SHOP_RANCHHAND"), 101, 0);
	func_34(807, joaat("ea_lcmp_foreman"), 11, 0);
	func_34(810, joaat("EA_LCMP_CHOPPER_1"), 11, 0);
	func_34(811, joaat("EA_LCMP_CHOPPER_2"), 11, 0);
	func_34(812, joaat("EA_LCMP_CHOPPER_3"), 11, 0);
	func_34(813, joaat("EA_LCMP_CHOPPER_4"), 11, 0);
	func_34(814, joaat("EA_LCMP_WORKER_01"), 11, 0);
	func_34(815, joaat("EA_LCMP_WORKER_02"), 11, 0);
	func_34(816, joaat("EA_LCMP_WORKER_03"), 11, 0);
	func_34(817, joaat("EA_LCMP_WORKER_04"), 11, 0);
	func_34(818, joaat("EA_LCMP_WORKER_05"), 11, 0);
	func_34(819, joaat("EA_LCMP_WORKER_06"), 11, 0);
	func_34(820, joaat("EA_LCMP_WORKER_07"), 11, 0);
	func_34(821, joaat("EA_LCMP_WORKER_08"), 11, 0);
	func_34(822, joaat("EA_LCMP_WORKER_09"), 11, 0);
	func_34(823, joaat("EA_LCMP_WORKER_10"), 11, 0);
	func_34(824, joaat("EA_LCMP_WORKER_11"), 11, 0);
	func_34(825, joaat("EA_LCMP_WORKER_12"), 11, 0);
	func_34(826, joaat("EA_LCMP_WORKER_13"), 11, 0);
	func_34(827, joaat("EA_LCMP_WORKER_14"), 11, 0);
	func_34(828, joaat("EA_LCMP_WORKER_15"), 11, 0);
	func_34(829, joaat("EA_LCMP_WORKER_16"), 11, 0);
	func_34(830, joaat("EA_LCMP_WORKER_17"), 11, 0);
	func_34(831, joaat("EA_LCMP_WORKER_18"), 11, 0);
	func_34(832, joaat("EA_LCMP_WORKER_19"), 11, 0);
	func_34(833, joaat("EA_LCMP_WORKER_20"), 11, 0);
	func_34(808, joaat("EA_LCMP_DOG"), 11, 0);
	func_34(809, joaat("EA_LCMP_DOG_2"), 11, 0);
	func_34(64, joaat("ea_hmstd_foreman"), 76, 4194304);
	func_34(65, joaat("ea_hmstd_worker_1"), 76, 4194304);
	func_34(66, joaat("ea_hmstd_worker_2"), 76, 4194304);
	func_34(67, joaat("EA_HMSTD_MAN"), 76, 4194304);
	func_34(68, joaat("EA_HMSTD_WOMAN"), 76, 4194304);
	func_34(858, joaat("CARMODY_DELL_COWS_PERSCHAR_1"), -1, 256);
	func_34(859, joaat("Crd_Bull"), -1, 256);
	func_34(860, joaat("Crd_Donkey"), -1, 256);
	func_34(834, joaat("ea_rcamp_foreman"), 128, 0);
	func_34(835, joaat("EA_RCAMP_GUARD_01"), 128, 0);
	func_34(836, joaat("EA_RCAMP_GUARD_02"), 128, 0);
	func_34(837, joaat("EA_RCAMP_GUARD_03"), 128, 0);
	func_34(838, joaat("EA_RCAMP_WORKER_01"), 128, 0);
	func_34(839, joaat("EA_RCAMP_WORKER_02"), 128, 0);
	func_34(840, joaat("EA_RCAMP_WORKER_03"), 128, 0);
	func_34(841, joaat("EA_RCAMP_WORKER_04"), 128, 0);
	func_34(842, joaat("EA_RCAMP_WORKER_05"), 128, 0);
	func_34(843, joaat("EA_RCAMP_WORKER_06"), 128, 0);
	func_34(844, joaat("EA_RCAMP_WORKER_07"), 128, 0);
	func_34(845, joaat("EA_RCAMP_WORKER_08"), 128, 0);
	func_34(846, joaat("EA_RCAMP_WORKER_09"), 128, 0);
	func_34(847, joaat("EA_RCAMP_WORKER_10"), 128, 0);
	func_34(848, joaat("EA_RCAMP_WORKER_11"), 128, 0);
	func_34(849, joaat("EA_RCAMP_WORKER_12"), 128, 0);
	func_34(850, joaat("EA_RCAMP_WORKER_13"), 128, 0);
	func_34(851, joaat("EA_RCAMP_WORKER_14"), 128, 0);
	func_34(852, joaat("EA_RCAMP_WORKER_15"), 128, 0);
	func_34(853, joaat("EA_RCAMP_WORKER_16"), 128, 0);
	func_34(854, joaat("EA_RCAMP_WORKER_17"), 128, 0);
	func_34(855, joaat("EA_RCAMP_WORKER_18"), 128, 0);
	func_34(856, joaat("EA_RCAMP_WORKER_19"), 128, 0);
	func_34(857, joaat("EA_RCAMP_WORKER_20"), 128, 0);
	func_34(875, joaat("GAP_COUGAR_1"), -1, 256);
	func_34(876, joaat("GAP_GOAT_1"), -1, 256);
	func_34(878, joaat("Great_Plains_Buffalo_Herd_Perschar_1"), -1, 256);
	func_34(877, joaat("Grt_Blw_Outskirts_1"), -1, 256);
	func_34(865, joaat("GRIZZLIES_RAVEN"), -1, 256);
	func_34(861, joaat("Grizzlies_Bear_01"), -1, 256);
	func_34(862, joaat("CARMODY_DELL_COWS_PERSCHAR_1"), -1, 256);
	func_34(863, joaat("Crd_Bull"), -1, 256);
	func_34(864, joaat("Crd_Donkey"), -1, 256);
	func_34(868, joaat("Heartlands_Buffalo_Herd_Perschar_1"), -1, 256);
	func_34(873, joaat("HRT_CRO_RANCH_HAND_2"), -1, 256);
	func_34(874, joaat("HRT_CRO_RANCH_HAND_3"), -1, 256);
	func_34(866, joaat("Heartlands_Deer_Herd_Perschar_1"), -1, 256);
	func_34(867, joaat("Heartlands_Pronghorn_Herd_Perschar_1"), -1, 256);
	func_34(869, joaat("HRT_CRD_TENANT_01"), -1, 256);
	func_34(870, joaat("CARMODY_DELL_COWS_PERSCHAR_1"), -1, 256);
	func_34(871, joaat("Crd_Bull"), -1, 256);
	func_34(872, joaat("Crd_Donkey"), -1, 256);
	func_34(879, joaat("BGV_COUGAR_1"), -1, 256);
	func_34(883, joaat("BGV_DELIVERY_1"), -1, 256);
	func_34(884, joaat("BGV_DELIVERY_2"), -1, 256);
	func_34(881, joaat("Big_Valley_Deer_Herd_Perschar_1"), -1, 256);
	func_34(882, joaat("Big_Valley_Bear_Perschar_1"), -1, 256);
	func_34(880, joaat("BGV_Wolves_1"), -1, 256);
	func_34(885, joaat("BGV_PAI_RANCHHAND_01"), -1, 288);
	func_34(888, joaat("CHO_COUGAR_1"), -1, 256);
	func_34(889, joaat("CHO_RID_HORSESHOP_OWNER"), -1, 256);
	func_34(890, joaat("CHO_RID_HORSESHOP_WIFE"), -1, 256);
	func_34(891, joaat("CHO_RID_HORSESHOP_RANCHHAND_1"), -1, 256);
	func_34(892, joaat("CHO_RID_HORSESHOP_RANCHHAND_2"), -1, 256);
	func_34(886, joaat("TBL_DELIVERY_RESIDENT"), -1, 256);
	func_34(887, joaat("TBL_DELIVERY_RESIDENT_2"), -1, 256);
	func_34(901, joaat("RIO_Cougar_1"), -1, 256);
	func_34(904, joaat("ROA_COAL_DELIVERY1"), -1, 256);
	func_34(905, joaat("ROA_MLH_RANCHHAND"), -1, 256);
	func_34(906, joaat("ROA_MLH_RANCHHAND_2"), -1, 256);
	func_34(893, joaat("MFR_HORSES_PERSCHAR_1"), -1, 256);
	func_34(894, joaat("MFR_COWS_PERSCHAR_2"), -1, 256);
	func_34(900, joaat("HEN_MFR_RANCHER"), -1, 256);
	func_34(895, joaat("HEN_MFR_RANCH_HAND"), -1, 256);
	func_34(896, joaat("HEN_MFR_RANCH_HAND_2"), -1, 256);
	func_34(897, joaat("HEN_MFR_RANCH_HAND_3"), -1, 256);
	func_34(898, joaat("HEN_MFR_RANCH_HAND_4"), -1, 256);
	func_34(899, joaat("HEN_MFR_BLACKSMITH"), -1, 256);
	func_34(908, joaat("SCM_WHITE_SLUMS_1"), -1, 256);
	func_34(909, joaat("SCM_BRA_FIELD_GUARD"), -1, 256);
	func_34(910, joaat("SCM_BRA_FIELD_GUARD_2"), -1, 256);
	func_34(911, joaat("SCM_BRA_FIELD_GUARD_3"), -1, 256);
	func_34(912, joaat("SCM_BRA_FIELD_GUARD_4"), -1, 256);
	func_34(913, joaat("SCM_BRA_FIELD_GUARD_5"), -1, 256);
	func_34(914, joaat("SCM_BRA_FIELD_GUARD_6"), -1, 256);
	func_34(915, joaat("SCM_BRA_HORSE_GUARD"), -1, 256);
	func_34(916, joaat("SCM_BRA_HORSE_GUARD_2"), -1, 256);
	func_34(917, joaat("SCM_BRA_HORSE_GUARD_3"), -1, 256);
	func_34(918, joaat("SCM_CALIGA_GUARD_1"), -1, 256);
	func_34(919, joaat("SCM_CALIGA_GUARD_2"), -1, 256);
	func_34(920, joaat("SCM_HORSE_SHOP_OWNER"), -1, 1048576);
	func_34(921, joaat("SCM_LOVE_TRIANGLE_OX"), -1, 256);
	func_34(922, joaat("SCM_DAI_RANCHHAND_1"), -1, 256);
	func_34(923, joaat("SCM_DAI_RANCHHAND_2"), -1, 256);
	func_34(907, joaat("SCM_PANTHER_1"), -1, 256);
	func_34(924, joaat("TAL_BEAR_1"), -1, 256);
	func_34(925, joaat("TAL_COUGAR_1"), -1, 256);
	func_34(926, joaat("TAL_WOLVES_1"), -1, 256);
	func_34(927, joaat("Bayou_Panther_Perschar_1"), -1, 256);
	func_34(928, joaat("LAG_FATHER2"), -1, 256);
	func_34(929, joaat("LAG_M_TEEN1"), -1, 256);
	func_34(930, joaat("LAG_M_TEEN2"), -1, 256);
	func_34(931, joaat("LAG_GRANDFATHER1"), -1, 256);
	func_34(932, joaat("GLO_BLW_WAGON_DELIVERY_3"), -1, 512);
	func_34(933, joaat("GLO_RHD_SDN_DRIVER_1"), -1, 512);
	func_34(934, joaat("GLO_RHD_SDN_DRIVER_2"), -1, 512);
	func_34(935, joaat("GLO_COAL_DELIVERY3"), -1, 512);
	func_34(936, joaat("GLO_DAIRY_DELIVERY1"), -1, 512);
	func_34(937, joaat("GLO_DAIRY_DELIVERY3"), -1, 512);
	func_34(938, joaat("GLO_LUMBER_DELIVERY1"), -1, 544);
	func_34(939, joaat("GLO_LUMBER_DELIVERY2"), -1, 544);
	func_34(940, joaat("GLO_LUMBER_DELIVERY3"), -1, 544);
	func_34(941, joaat("GLO_OIL_DELIVERY1"), -1, 512);
	func_34(942, joaat("GLO_OIL_DELIVERY_VAL"), -1, 544);
	func_34(943, joaat("GLO_OIL_DELIVERY2"), -1, 512);
	func_34(944, joaat("GLO_OIL_DELIVERY3"), -1, 512);
	func_34(945, joaat("GLO_ORANGE_DELIVERY1"), -1, 512);
	func_34(946, joaat("GLO_ORANGE_DELIVERY2"), -1, 512);
	func_34(947, joaat("GLO_ORANGE_DELIVERY3"), -1, 512);
	func_34(948, joaat("GLO_TIMBER_DELIVERY1"), -1, 544);
	func_34(949, joaat("GLO_TIMBER_DELIVERY2"), -1, 544);
	func_34(950, joaat("GLO_TIMBER_DELIVERY3_PART1"), -1, 544);
	func_34(951, joaat("GLO_TIMBER_DELIVERY3_PART2"), -1, 544);
	func_34(952, joaat("GLO_WILDERNESS_TRAPPER"), -1, 512);
	return 1;
}

int func_5() // Position - 0x3B35 Hash - 0xA72A73D3 ^0xA72A73D3
{
	eStackSize i;

	Global_1879534.f_7300 = 32;
	func_35();
	func_36();
	func_37();
	func_38();
	func_39();
	func_40();
	func_41();
	func_42();
	func_43();
	func_44();
	func_45();
	func_46();
	func_47();
	func_48();
	func_49();
	func_50();
	func_51();
	func_52();
	func_53();
	func_54();
	func_55();
	func_56();
	func_57();
	func_58();
	func_59();
	func_60();
	func_61();
	func_62();
	func_63();
	func_64();
	func_65();
	func_66();
	func_67();
	i = Global_1879534.f_7300;

	for (i = Global_1879534.f_7300; i <= 32 - 1; i = i + 1)
	{
		func_68(i);
	}

	func_26(1024);
	return 1;
}

int func_6() // Position - 0x3BFC Hash - 0x4F027289 ^0x2EF834C9
{
	func_69();
	func_70();
	func_26(2048);
	return 1;
}

int func_7() // Position - 0x3C14 Hash - 0x9E2413C5 ^0x5449C999
{
	VOLUME::_0x748C5F51A18CB8F0(false);
	func_71(0, 0, "ABIGAIL11", "RABI1", "rcm_abigail11", -1, -146.9627f, -15.7764f, 95.2415f, 0, joaat("blip_scm_abigail"), 262151, 100f);
	func_71(3, 3, "BANDP10", "RBNP10", "rcm_beau_and_penelope10", -1, 1736.4272f, -1375.1089f, 42.9164f, 0, joaat("blip_scm_grays"), 67240067, 200f);
	func_71(4, 3, "BANDP11", "RBNP11", "rcm_beau_and_penelope11", 5, 1790.7458f, -1311.7535f, 43.1925f, joaat("cs_beaugray"), joaat("blip_scm_beau"), 1310737, 120f);
	func_71(5, 3, "BANDP12", "RBNP12", "rcm_beau_and_penelope12", -1, 1863.6979f, -1349.3895f, 41.2784f, 0, joaat("blip_scm_beau"), 262149, 250f);
	func_71(21, 18, "BRAT01", "RBRT0", "rcm_braithwaites01", -1, 660.1356f, -1257.4368f, 44.0746f, 0, joaat("blip_scm_abigail"), 67239943, 120f);
	func_71(37, 23, "COACHROBBERY1", "RCHRB", "rcm_coach_robbery1", -1, 675.0945f, -1217.2367f, 44.386f, 0, joaat("blip_scm_trelawney"), 262151, 120f);
	func_71(58, 33, "DOCTORSOPINION1", "RDOPN", "rcm_doctors_opinion1", -1, 2802.5806f, -1177.6244f, 45.9451f, 0, 0, 134480023, 85f);
	func_71(59, 34, "DOWN1", "RDOWN1", "rcm_down1", 60, -171.1026f, -25.1129f, 94.9136f, 0, joaat("blip_scm_strauss"), 67, 120f);
	func_71(60, 34, "DOWNA", "RDOWNA", "rcm_down1_2", -1, -171.1026f, -25.1129f, 94.9136f, 0, joaat("blip_scm_strauss"), 12529, 150f);
	func_71(61, 34, "DOWN2", "RDOWN2", "rcm_down2", -1, -135.48f, -33.46f, 95.08f, 0, joaat("blip_ambient_tithing"), 97, 60f);
	func_71(62, 34, "DOWN3", "RDOWN3", "rcm_down3", -1, -815.8262f, 343.8745f, 99.3458f, 0, joaat("blip_scm_strauss"), 262341, 120f);
	func_71(63, 35, "DUSTER21", "RDST2", "rcm_dusters21", -1, -138.2931f, -13.8407f, 95.3376f, 0, joaat("blip_scm_kieran"), 262215, 120f);
	func_71(64, 36, "DUSTER61", "RDST61", "rcm_dusters61", -1, 2362.5247f, 1308.0251f, 111.6106f, 0, joaat("blip_scm_sadie"), 67108931, 90f);
	func_71(65, 36, "DUSTER62", "RDST62", "rcm_dusters62", -1, -2110.1992f, 660.5305f, 119.8892f, 0, joaat("blip_scm_sadie"), 1310725, 100f);
	func_71(66, 37, "DUTCH11", "RDTC1", "rcm_dutch11", -1, -129.82828f, -32.11561f, 94.94459f, 0, joaat("blip_mission_dutch"), 262215, 150f);
	func_71(67, 38, "DUTCH21", "RDTC2", "rcm_dutch21", -1, 672.7785f, -1246.1567f, 42.9398f, 0, joaat("blip_mission_dutch"), 296039, 1112014848);
	func_71(68, 39, "DUTCH31", "RDCH3", "rcm_dutch31", -1, 2247.6946f, -798.5478f, 43.1559f, 0, joaat("blip_mission_dutch"), 262151, 130f);
	func_71(76, 42, "EXCONFED11", "RXCF1", "rcm_exconfed11", -1, 677.1235f, -1288.5509f, 42.4063f, 0, joaat("blip_scm_lenny"), 262151, 120f);
	func_71(82, 45, "GANG01", "RGNG01", "rcm_gang01", -1, 3009.2625f, 477.1921f, 40.8607f, 0, 0, 132323, 1112014848);
	func_71(83, 45, "GANG02", "RGNG02", "rcm_gang02", -1, 2974.4414f, 474.3331f, 46.86f, 0, 0, 134489253, 1112014848);
	func_71(94, 51, "HOMEROB00", "RHMR0", "rcm_homerob00", -1, 1407.78f, 265.42505f, 88.61228f, 0, joaat("blip_mission_hosea"), 1351687, 200f);
	func_71(97, 54, "MARY01", "RMARY1", "rcm_mary01", 98, -126.0832f, -38.3759f, 94.6333f, 0, joaat("blip_scm_letter"), 67240027, 1112014848);
	func_71(98, 54, "MARY02", "RMARY2", "rcm_mary02", -1, -380.78f, 917.269f, 118.9613f, 0, joaat("blip_rc_old_flame"), 67240133, 36f);
	func_71(106, 58, "MOB01", "RMOB01", "rcm_mob01", -1, 2793.8547f, -1169.5304f, 46.924f, 0, joaat("blip_scm_bronte"), 67109063, 1112014848);
	func_71(107, 58, "MOB02", "RMOB02", "rcm_mob02", -1, 2686.9543f, -1122.447f, 49.7002f, 0, joaat("blip_scm_bronte"), 67108935, 1112014848);
	func_71(108, 59, "MONROE11", "RMNR1", "rcm_monroe11", -1, 471.1853f, 2226.889f, 246.2259f, 0, joaat("blip_scm_monroe"), 2359303, 150f);
	func_71(112, 60, "MUDTOWN31", "RMUD31", "rcm_mudtown3_1", 112, -141.5388f, -57.201f, 93.9626f, 0, joaat("blip_mission_john"), 131283, 100f);
	func_71(113, 60, "MUDTOWN32", "RMUD32", "rcm_mudtown3_2", 113, 505.0512f, 704.0245f, 115.0716f, 0, joaat("blip_mission_john"), 274609, 1112014848);
	func_71(114, 60, "MUDTOWN33", "RMUD33", "rcm_mudtown3_3", -1, -144.0388f, -56.981f, 93.9626f, 0, joaat("blip_mission_john"), 67240005, 100f);
	func_71(115, 62, "NATIVE1", "RNATV1", "rcm_native1", -1, 2531.1f, -1312.83f, 48.19f, joaat("cs_evelynmiller"), joaat("blip_rc"), 67764227, 120f);
	func_71(116, 62, "NATIVE2", "RNATV2", "rcm_native2", -1, 223.26f, 512.19f, 125.45f, 0, joaat("blip_scm_eagle_flies"), 1310725, 350f);
	func_71(120, 64, "PEARSON1", "RPRSN", "rcm_pearson1", -1, -1346.9675f, 2402.0608f, 306.5004f, 0, joaat("blip_scm_pearson"), 262151, 120f);
	func_71(134, 68, "SADIE1", "RSAD1", "rcm_sadie11", -1, 677.3743f, -1251.831f, 43.0154f, 0, joaat("blip_scm_pearson"), 262151, 130f);
	func_71(6, 4, "BANDP20", "RBNP20", "rcm_beau_and_penelope20", 7, 2340.9143f, 1359.6686f, 105.3503f, 0, joaat("blip_scm_letter"), 2228234, 120f);
	func_71(7, 4, "BANDP21", "RBNP21", "rcm_beau_and_penelope21", -1, 895.2736f, -1866.4296f, 42.6791f, 0, joaat("blip_scm_penelope"), 40108164, 120f);
	func_71(22, 19, "CALDERON1", "RCLDN1", "rcm_calderon1", 23, 2815.65f, -1222.53f, 46.57f, joaat("cs_brotherdorkins"), joaat("blip_rc"), 35913794, 70f);
	func_71(23, 19, "CALDERON2", "RCLDN2", "rcm_calderon2", -1, 2819.0276f, -1110.2545f, 45.9487f, joaat("cs_sistercalderon"), joaat("blip_scm_dorkins"), 40108100, 120f);
	func_71(24, 20, "CALDERON21", "RCLD21", "rcm_calderon21", 25, 2733.1482f, -1248.8151f, 48.8597f, joaat("cs_sistercalderon"), joaat("blip_rc"), 2228290, 120f);
	func_71(25, 20, "CALDERON22", "RCLD22", "rcm_calderon22", -1, 2733.1482f, -1248.8151f, 48.8597f, 0, joaat("blip_scm_calderon"), 6557892, 125f);
	func_71(26, 21, "CALLOWAY1", "RCAL11", "rcm_callaway1", -1, -240.2066f, 768.6583f, 117.085f, joaat("cs_jimcalloway"), joaat("blip_rc"), 1179714, 40f);
	func_71(27, 21, "CALLOWAYB", "RCAL1B", "rcm_callaway12", 28, -239.1001f, 770.5522f, 117.1001f, 0, joaat("blip_rc_calloway"), 131072, 40f);
	func_71(28, 21, "CALLOWAY2", "RCAL12", "rcm_callaway2", 29, 2857.9482f, -1370.6865f, 43.5575f, 0, joaat("blip_rc_calloway"), 131072, 1112014848);
	func_71(29, 21, "CALLOWAY3", "RCAL13", "rcm_callaway3", -1, 2907.6565f, 1314.2664f, 44.67463f, joaat("cs_asbdeputy_01"), joaat("blip_rc_calloway"), 537133124, 36f);
	func_71(30, 22, "CHAINGANG1", "RBWCG1", "rcm_chain_gang1", 31, 1276.24f, -1389.17f, 79.86f, joaat("cs_chainprisoner_01"), joaat("blip_rc"), 1704002, 140f);
	func_71(31, 22, "CHAINGANG2", "RBWCG2", "rcm_chain_gang2", 32, 1311.78f, -1298.51f, 74.93f, 0, joaat("blip_rc_chain_gang"), 12528, 1112014848);
	func_71(32, 22, "CHAINGANG3", "RBWCG3", "rcm_chain_gang3", 33, 1215.95f, -1425.98f, 70.45f, 0, joaat("blip_rc_chain_gang"), 1310784, 100f);
	func_71(33, 22, "CHAINGANG4", "RBWCG4", "rcm_chain_gang4", 34, 902.15f, -384.86f, 88.3f, joaat("cs_chainprisoner_01"), joaat("blip_rc"), 1572928, 150f);
	func_71(34, 22, "CHAINGANG5", "RBWCG5", "rcm_chain_gang5", 35, 902.15f, -384.86f, 88.3f, 0, joaat("blip_rc_chain_gang"), 4320, 150f);
	func_71(35, 22, "CHAINGANG6", "RBWCG6", "rcm_chain_gang6", 36, 902.15f, -384.86f, 88.3f, 0, joaat("blip_rc_chain_gang"), 262208, 150f);
	func_71(36, 22, "CHAINGANG7", "RBWCG7", "rcm_chain_gang7", -1, -2459.21f, 838f, 145.37f, joaat("cs_chainprisoner_01"), joaat("blip_rc"), 538836996, 80f);
	func_71(38, 24, "CIGCARD1", "RCCIG", "rcm_collect_cigarette_cards1", -1, -343.5616f, -369.2671f, 87.0759f, joaat("cs_cigcardguy"), joaat("blip_rc"), 72482822, 50f * 4f);
	func_71(39, 25, "DINOBONE11", "RCDIN1", "rcm_collect_dinosaur_bones11", -1, 122.7758f, -185.4978f, 116.4383f, joaat("cs_dinoboneslady"), joaat("blip_rc"), 68288642, 50f * 4f);
	func_71(40, 25, "DINOBONE12", "RCDIN2", "rcm_collect_dinosaur_bones12", -1, 197.275f, 985.9788f, 189.2538f, joaat("cs_dinoboneslady"), joaat("blip_rc_deborah"), 608176132, 1112014848);
	func_71(43, 27, "EXOTICS1", "RCEXO1", "rcm_collect_exotics1", -1, 2586.4937f, -1009.1538f, 43.24f, joaat("cs_exoticcollector"), joaat("blip_rc"), 68296706, 1112014848);
	func_71(44, 27, "EXOTICS2", "RCEXO2", "rcm_collect_exotics2", -1, 2586.4937f, -1009.1538f, 43.24f, joaat("cs_exoticcollector"), joaat("blip_rc_algernon_wasp"), 67250176, 1112014848);
	func_71(45, 27, "EXOTICS3", "RCEXO3", "rcm_collect_exotics3", -1, 2586.4937f, -1009.1538f, 43.24f, joaat("cs_exoticcollector"), joaat("blip_rc_algernon_wasp"), 67250176, 1112014848);
	func_71(46, 27, "EXOTICS4", "RCEXO4", "rcm_collect_exotics4", -1, 2586.4937f, -1009.1538f, 43.24f, joaat("cs_exoticcollector"), joaat("blip_rc_algernon_wasp"), 67250176, 1112014848);
	func_71(47, 27, "EXOTICS5", "RCEXO5", "rcm_collect_exotics5", -1, 2586.4937f, -1009.1538f, 43.24f, joaat("cs_exoticcollector"), joaat("blip_rc_algernon_wasp"), 67250176, 1112014848);
	func_71(48, 27, "EXOTICS6", "RCEXO6", "rcm_collect_exotics6", -1, 2586.4937f, -1009.1538f, 43.24f, joaat("cs_exoticcollector"), joaat("blip_rc_algernon_wasp"), 608315460, 1112014848);
	func_71(41, 26, "RAREFISH11", "RCFSH1", "rcm_collect_rare_fish1", -1, 337.3075f, -684.5404f, 41.8362f, joaat("cs_fishcollector"), joaat("blip_rc"), 68288642, 50f * 4f);
	func_71(42, 26, "RAREFISH12", "RCFSH2", "rcm_collect_rare_fish2", -1, 341.9155f, -665.392f, 41.8046f, joaat("cs_fishcollector"), joaat("blip_rc_jeremy_gill"), 541067652, 1112014848);
	func_71(49, 28, "ROCKFACE1", "RCRKF1", "rcm_collect_rock_faces1", -1, -2178.646f, -245.6886f, 191.1569f, joaat("cs_francis_sinclair"), joaat("blip_rc"), 68288514, 100f);
	func_71(50, 28, "ROCKFACE2", "RCRKF2", "rcm_collect_rock_faces2", -1, -2173.9255f, -247.408f, 191.8229f, joaat("cs_mrs_sinclair"), joaat("blip_scm_frances"), 608307204, 100f);
	func_71(51, 29, "TAXIDERMY1", "RCTAX1", "rcm_collect_taxidermy1", -1, -1678.8323f, -335.5439f, 172.9001f, joaat("cs_taxidermist"), joaat("blip_rc_hobbs"), 68290882, 1112014848);
	func_71(52, 29, "TAXIDERMY2", "RCTAX2", "rcm_collect_taxidermy2", -1, -1638.4972f, -1361.4358f, 83.3966f, 0, joaat("blip_rc"), 608305412, 1112014848);
	func_71(53, 30, "CRACKPOT1", "RCKPT1", "rcm_crackpot1", 54, 2463.36f, -1372.69f, 44.3262f, joaat("cs_crackpotinventor"), joaat("blip_rc"), 1310786, 120f);
	func_71(54, 30, "CRACKPOT2", "RCKPT2", "rcm_crackpot2", 55, 2517.1875f, 2289.3486f, 176.3516f, joaat("cs_crackpotinventor"), joaat("blip_rc_crackpot"), 262208, 300f);
	func_71(55, 30, "CRACKPOT3", "RCKPT3", "rcm_crackpot3", -1, 2517.1875f, 2289.3486f, 176.3516f, 0, 0, 536875092, 100f);
	func_71(56, 31, "CRAWLEY1", "RCRAW", "rcm_crawley1", -1, 2011.776f, -504.0132f, 40.983f, joaat("u_m_o_oldcajun_01"), joaat("blip_rc"), 537921542, 150f);
	func_71(57, 32, "CREOLE1", "RCRLE", "rcm_creole1", -1, 1380.51f, -1337.51f, 77f, joaat("cs_creoledoctor"), joaat("blip_rc"), 538181702, 120f);
	func_71(69, 40, "EDOWN21", "REDW21", "rcm_edith_down21", 70, 2935.4045f, 1377.7489f, 43.5814f, joaat("cs_edithdown"), joaat("blip_scm_edith"), 37486786, 120f);
	func_71(70, 40, "EDOWN22", "REDW22", "rcm_edith_down22", -1, 2956.1465f, 1340.4901f, 43.8751f, joaat("cs_archiedown"), joaat("blip_scm_edith"), 41156612, 60f);
	func_71(77, 43, "FORMYART1", "RFMA1", "rcm_for_my_art1", 78, 2794.64f, -1168.4f, 46.92f, 0, joaat("blip_rc"), 1179842, 36f);
	func_71(78, 43, "FORMYART2", "RFMA2", "rcm_for_my_art2", 79, 2738.72f, -1207.39f, 48.66f, 0, joaat("blip_rc_art"), 1310784, 50f);
	func_71(79, 43, "FORMYART3", "RFMA3", "rcm_for_my_art3", 80, 2700.241f, -1187.5516f, 55.0907f, 0, joaat("blip_rc_art"), 262336, 150f);
	func_71(80, 43, "FORMYART4", "RFMA4", "rcm_for_my_art4", -1, 2739.74f, -1315.64f, 47.63f, joaat("cs_frenchartist"), joaat("blip_rc_art"), 538706116, 120f);
	func_71(81, 44, "FUNDRAISER", "REFND", "rcm_fundraiser", -1, 2504.0542f, -1152.9459f, 48.26756f, 0, joaat("blip_rc"), 86519878, 120f);
	func_71(84, 46, "GUNSLINGER1", "RGUN11", "rcm_gunslinger1_1", 85, -62.69012f, -404.37378f, 69.91233f, joaat("cs_famousgunslinger_01"), joaat("blip_rc_gunslinger_1"), 1050634, 120f);
	func_71(85, 46, "GUNSLINGER12", "RGUN12", "rcm_gunslinger1_2", -1, -63.25864f, -404.92618f, 69.9287f, joaat("cs_famousgunslinger_01"), joaat("blip_rc_gunslinger_1"), 262340, 120f);
	func_71(86, 47, "GUNSLINGER2", "RGUN2", "rcm_gunslinger2_1", -1, -967.5845f, 2181.6238f, 339.4473f, joaat("cs_famousgunslinger_02"), joaat("blip_rc_gunslinger_2"), 264398, 200f);
	func_71(87, 48, "GUNSLINGER3", "RGUN3", "rcm_gunslinger3_1", -1, 1231.3499f, -1299.6838f, 75.9034f, 0, joaat("blip_rc_gunslinger_3"), 264398, 50f);
	func_71(88, 49, "GUNSLINGER51", "RGUN5", "rcm_gunslinger5_1", -1, 2492.9922f, -420.52896f, 43.78334f, joaat("cs_famousgunslinger_05"), joaat("blip_rc_gunslinger_5"), 1312846, 120f);
	func_71(89, 50, "HEREKITTY1", "RKTTY1", "rcm_here_kitty_kitty1", 90, 1604.3173f, -262.3793f, 78.2036f, joaat("cs_ringmaster"), joaat("blip_rc"), 1179650, 250f);
	func_71(90, 50, "HEREKITTY2", "RKTTY2", "rcm_here_kitty_kitty2", 91, 1015.1127f, 159.72952f, 103.01753f, 0, joaat("blip_rc_kitty"), 262272, 250f);
	func_71(91, 50, "HEREKITTY3", "RKTTY3", "rcm_here_kitty_kitty3", 92, 1491.2394f, -1118.5366f, 55.39496f, 0, joaat("blip_rc_kitty"), 1310720, 250f);
	func_71(92, 50, "HEREKITTY4", "RKTTY4", "rcm_here_kitty_kitty4", 93, 1408.0139f, 280.6987f, 88.45465f, 0, joaat("blip_rc_kitty"), 1310848, 200f);
	func_71(93, 50, "HEREKITTY5", "RKTTY5", "rcm_here_kitty_kitty5", -1, 1581.761f, -259.8209f, 79.8f, joaat("cs_ringmaster"), joaat("blip_rc_kitty"), 537264132, 250f);
	func_71(95, 52, "HOMEROB01", "RHMRB", "rcm_homerob01", -1, 668.80084f, -1233.8356f, 43.15567f, 0, joaat("blip_robbery_home"), 23068678, 100f);
	func_71(99, 55, "MARY31", "RMARY3", "rcm_mary31", -1, 1905.66f, -1860.5337f, 47.18359f, 0, joaat("blip_scm_letter"), 6291530, 1112014848);
	func_71(101, 57, "MASON1", "RMASN1", "rcm_mason1", 102, -1365.9f, -726.54f, 91.08f, joaat("cs_albertmason"), joaat("blip_rc"), 1310914, 120f);
	func_71(102, 57, "MASON2", "RMASN2", "rcm_mason2", 103, -1651.18f, 628.19f, 125.4f, joaat("cs_albertmason"), joaat("blip_rc_albert"), 1310784, 120f);
	func_71(103, 57, "MASON3", "RMASN3", "rcm_mason3", 104, 1358.591f, 554.5364f, 87.3964f, joaat("cs_albertmason"), joaat("blip_rc_albert"), 3407936, 200f);
	func_71(104, 57, "MASON4", "RMASN4", "rcm_mason4", 105, 2387.4587f, -580.6672f, 41.0198f, joaat("cs_albertmason"), joaat("blip_rc_albert"), 1310784, 120f);
	func_71(105, 57, "MASON5", "RMASN5", "rcm_mason5", -1, -231.24f, 226.84f, 94.4f, joaat("cs_albertmason"), joaat("blip_rc_albert"), 538312708, 400f);
	func_71(109, 61, "MAYR1", "RMAYR1", "rcm_mr_mayor1", -1, 2401.393f, -1071.014f, 47.473f, joaat("cs_henrilemiux"), joaat("blip_rc_henri"), 264258, 50f);
	func_71(110, 61, "MAYR2", "RMAYR2", "rcm_mr_mayor2", 111, 2401.393f, -1071.014f, 47.473f, joaat("cs_henrilemiux"), joaat("blip_rc_henri"), 2112, 50f);
	func_71(111, 61, "MAYR3", "RMAYR3", "rcm_mr_mayor3", -1, 2401.393f, -1071.014f, 47.473f, 0, joaat("blip_rc_henri"), 537133188, 50f);
	func_71(117, 63, "OHBROTHER1", "ROBT1", "rcm_oh_brother1", 118, -323.86f, 794.53f, 116.89f, 0, joaat("blip_rc"), 1310786, 100f);
	func_71(118, 63, "OHBROTHER2", "ROBT2", "rcm_oh_brother2", 119, -303.77f, 817.93f, 117.41f, 0, joaat("blip_rc"), 1310784, 100f);
	func_71(119, 63, "OHBROTHER3", "ROBT3", "rcm_oh_brother3", -1, -1049.4f, 426.08f, 53.89f, 0, joaat("blip_rc"), 538181700, 120f);
	func_71(121, 65, "POISONEDWELL1", "RHNTN1", "rcm_poisoned_well1", 122, 2538.461f, 432.7961f, 64.0455f, joaat("rcsp_poisonedwell_males_01"), joaat("blip_rc"), 1835074, 120f);
	func_71(122, 65, "POISONEDWELL2", "RHNTN2", "rcm_poisoned_well2", 123, 2556.25f, 806.7f, 75.3f, 0, joaat("blip_rc_obediah_hinton"), 262144, 200f);
	func_71(123, 65, "POISONEDWELL3", "RHNTN3", "rcm_poisoned_well3", 124, 2397.81f, 609.74f, 66.21f, 0, joaat("blip_rc_obediah_hinton"), 12416, 120f);
	func_71(124, 65, "POISONEDWELL4", "RHNTN4", "rcm_poisoned_well4", 125, 2556.25f, 806.7f, 75.3f, joaat("cs_obediahhinton"), joaat("blip_rc_obediah_hinton"), 131072, 150f);
	func_71(125, 65, "POISONEDWELL5", "RHNTN5", "rcm_poisoned_well5", -1, 2281.98f, 1198.91f, 108.09f, 0, joaat("blip_rc_obediah_hinton"), 538181636, 150f);
	func_71(127, 67, "LIGHTNING1", "RRTL1", "rcm_ride_the_lightning1", 128, 2829.0527f, -1055.8986f, 43.0369f, joaat("cs_professorbell"), joaat("blip_rc"), 3801090, 60f);
	func_71(128, 67, "LIGHTNING2", "RRTL2", "rcm_ride_the_lightning2", -1, 1226.67f, -1295.04f, 75.9f, 0, joaat("blip_rc_lightning"), 2101376, 36f);
	func_71(129, 67, "LIGHTNING3", "RRTL3", "rcm_ride_the_lightning3", 130, 2536.865f, -275.3683f, 42.8264f, 0, joaat("blip_rc_lightning"), 2361472, 150f);
	func_71(130, 67, "LIGHTNING4", "RRTL4", "rcm_ride_the_lightning4", 131, 2507.1333f, -1307.1693f, 47.9537f, 0, joaat("blip_rc_lightning"), 2363520, 36f);
	func_71(131, 67, "LIGHTNING5", "RRTL5", "rcm_ride_the_lightning5", 132, 2829.0527f, -1055.8986f, 43.0369f, joaat("cs_professorbell"), joaat("blip_rc_lightning"), 2752512, 60f);
	func_71(132, 67, "LIGHTNING6", "RRTL6", "rcm_ride_the_lightning6", 133, 1281.7521f, 908.6993f, 126.8532f, 0, joaat("blip_rc_lightning"), 2359488, 300f);
	func_71(133, 67, "LIGHTNING7", "RRTL7", "rcm_ride_the_lightning7", -1, 2689.054f, -1120.1738f, 49.6621f, joaat("cs_professorbell"), joaat("blip_rc_lightning"), 540934148, 140f);
	func_71(135, 69, "SERIALKILLER1", "RSKLR", "rcm_serial_killer1", -1, -609.3224f, 521.8002f, 95.1998f, 0, joaat("blip_rc"), 546572422, 55f);
	func_71(136, 70, "SLAVE1", "RSLVC1", "rcm_slave_catcher1", 137, 1244.57f, -1275.52f, 74.96f, joaat("cs_slavecatcher"), joaat("blip_rc"), 1179714, 200f);
	func_71(137, 70, "SLAVE2", "RSLVC2", "rcm_slave_catcher2", -1, 1264.6116f, -404.1218f, 97.0883f, 0, joaat("blip_rc_slave_catcher"), 537133124, 36f);
	func_71(138, 71, "STRAUSS11", "RSTR1", "rcm_strauss11", -1, 655.3615f, -1234.3291f, 43.1254f, 0, joaat("blip_scm_strauss"), 6422598, 100f);
	func_71(139, 72, "STRAUSS21", "RSTR2", "rcm_strauss21", -1, 1970.7648f, -1872.171f, 41.6262f, 0, joaat("blip_scm_strauss"), 6422598, 120f);
	func_71(140, 73, "STRAUSS31", "RSTR31", "rcm_strauss31", 141, 2327.984f, 1330.677f, 106.157f, 0, joaat("blip_scm_strauss"), 2228290, 100f);
	func_71(141, 73, "STRAUSS32", "RSTR32", "rcm_strauss32", 142, 2328.0605f, 1329.3677f, 106.1765f, 0, joaat("blip_scm_strauss"), 2101488, 1112014848);
	func_71(142, 73, "STRAUSS33", "RSTR33", "rcm_strauss33", -1, 2327.984f, 1330.677f, 106.157f, 0, joaat("blip_scm_strauss"), 6684748, 100f);
	func_71(143, 74, "THEODDFELLOWS1", "RODDF1", "rcm_the_odd_fellows1", 144, 2945.7275f, 526.6201f, 45.84f, joaat("cs_oddfellowspinhead"), joaat("blip_rc"), 1835010, 60f);
	func_71(144, 74, "THEODDFELLOWS2", "RODDF2", "rcm_the_odd_fellows2", -1, 2312.7861f, 27.78194f, 48.40265f, 0, joaat("blip_rc_odd_fellows"), 538181700, 140f);
	func_71(147, 77, "WARVET1", "RWARV1", "rcm_war_veteran1", 148, 1479.4359f, 1335.1656f, 161.3365f, joaat("cs_warvet"), joaat("blip_rc"), 786498, 140f);
	func_71(148, 77, "WARVET2", "RWARV2", "rcm_war_veteran2", 149, 1698.4572f, 1511.3707f, 146.8702f, joaat("cs_warvet"), joaat("blip_rc_war_veteran"), 786496, 200f);
	func_71(149, 77, "WARVET3", "RWARV3", "rcm_war_veteran3", 150, 1699.1414f, 1508.6964f, 146.8712f, joaat("cs_warvet"), joaat("blip_rc_war_veteran"), 786496, 200f);
	func_71(150, 77, "WARVET4", "RWARV4", "rcm_war_veteran4", -1, 1698.4572f, 1511.3707f, 146.8702f, joaat("cs_warvet"), joaat("blip_rc_war_veteran"), 537657412, 200f);
	func_71(11, 7, "BHDUEL1", "RBDUL", "rcm_bounty_duel1", -1, -2336.1123f, 105.0412f, 221.6922f, 0, joaat("blip_mission_bounty"), 8653446, 60f);
	func_71(12, 8, "BHEXCONFED1", "RBCON", "rcm_bounty_exconfed1", -1, 2505.874f, 286.573f, 71.9487f, joaat("u_m_m_uniexconfedsbounty_01"), joaat("blip_mission_bounty"), 8653446, 120f);
	func_71(13, 9, "BHRANCHER1", "RBRAN", "rcm_bounty_rancher1", -1, 1647.4116f, -608.9368f, 42.4184f, joaat("u_m_m_htlrancherbounty_01"), joaat("blip_mission_bounty"), 8653446, 150f);
	func_71(153, 79, "BHTARGET3", "RBT03", "rcm_bh_laramie_sleeping", -1, -1947.6469f, 427.8162f, 118.9041f, 0, joaat("blip_mission_bounty"), 8653702, 250f);
	func_71(14, 10, "BHTARGET5", "RBT05", "rcm_bh_wife_and_lover", -1, -1215.0905f, 369.9232f, 64.0378f, 0, joaat("blip_mission_bounty"), 8653446, 250f);
	func_71(154, 80, "BHTARGET12", "RBT12", "rcm_bh_camp_return", -1, 1425.841f, -2186.84f, 47.99936f, 0, joaat("blip_mission_bounty"), 8653446, 250f);
	func_71(15, 11, "BHTARGET14", "RBT14", "rcm_bh_shack_escape", -1, 1361.01f, -2066.81f, 52.23f, 0, joaat("blip_mission_bounty"), 8653446, 70f);
	func_71(16, 12, "BHTARGET15", "RBT15", "rcm_bh_sd_saloon", -1, 2794.52f, -1170.6395f, 46.924f, 0, joaat("blip_mission_bounty"), 8653702, 50f);
	func_71(17, 13, "BHTARGET18", "RBT18", "rcm_bh_skinner_brother", -1, -2000.8f, -1829.5f, 113.3f, 0, joaat("blip_mission_bounty"), 8653702, 200f);
	func_71(18, 14, "BHTARGET20", "RBT20", "rcm_bh_skinner_search", -1, -1982.37f, -1430.89f, 115.58f, 0, joaat("blip_mission_bounty"), 8653702, 200f);
	func_71(155, 15, "BHTARGET21", "RBT21", "rcm_bh_blackwater_hunt", -1, -799.8206f, -1232.5028f, 42.552f, 0, joaat("blip_mission_bounty"), 8653702, 175f);
	func_71(19, 16, "BHTARGET22", "RBT22", "rcm_bh_bandito_shack", -1, -5409f, -3655f, -22.2f, 0, joaat("blip_mission_bounty"), 8653702, 250f);
	func_71(20, 17, "BHTARGET23", "RBT23", "rcm_bh_bandito_mine", -1, -5970.8423f, -3245.562f, -22.5793f, 0, joaat("blip_mission_bounty"), 8653702, 250f);
	func_71(1, 1, "ABIGAIL22", "RABI22", "rcm_abigail22", -1, -1606.8734f, -1376.3584f, 81.81185f, 0, joaat("blip_mission_john"), 67143009, 1112014848);
	func_71(2, 2, "ABIGAIL31", "RABI3", "rcm_abigail31", -1, -1637.1824f, -1363.2678f, 83.4566f, 0, joaat("blip_scm_abigail"), 262407, 120f);
	func_71(8, 5, "BEECHERS11", "RBCH11", "rcm_beechers11", 9, -814.331f, -1278.1016f, 42.6377f, 0, joaat("blip_scm_ansel_atherton"), 67240259, 1112014848);
	func_71(9, 5, "BEECHERS12", "RBCH12", "rcm_beechers12", -1, -1635.6947f, -1355.4095f, 82.9339f, 0, joaat("blip_scm_ansel_atherton"), 262469, 200f);
	func_71(10, 6, "BEECHERS21", "RBCH21", "rcm_beechers21", -1, -1638.8595f, -1359.027f, 82.9803f, 0, joaat("blip_scm_uncle"), 262403, 250f);
	func_71(71, 41, "EVELYN1", "RMLLR1", "rcm_evelyn_miller1", 72, -2068.5754f, -1063.0669f, 134.9549f, joaat("cs_evelynmiller"), joaat("blip_rc"), 1573314, 1112014848);
	func_71(72, 41, "EVELYN2", "RMLLR2", "rcm_evelyn_miller2", 73, -2374.5898f, -1594.1897f, 153.4694f, joaat("cs_evelynmiller"), joaat("blip_scm_evelyn"), 1835328, 100f);
	func_71(73, 41, "EVELYN3", "RMLLR3", "rcm_evelyn_miller3", 74, -2373.404f, -1592.4968f, 153.0315f, 0, joaat("blip_scm_evelyn"), 256, 1112014848);
	func_71(74, 41, "EVELYN4", "RMLLR4", "rcm_evelyn_miller4", 75, -2373.404f, -1592.4968f, 153.0315f, 0, 0, 4592, 1112014848);
	func_71(75, 41, "EVELYN5", "RMLLR5", "rcm_evelyn_miller5", -1, -2373.404f, -1592.4968f, 153.0315f, 0, 0, 671355188, 1112014848);
	func_71(96, 53, "JACK21", "RJCK2", "rcm_jack2", -1, -1629.7104f, -1338.3771f, 82.0174f, 0, joaat("blip_scm_jack"), 262407, 140f);
	func_71(100, 56, "MARYBETH1", "RMRYB", "rcm_marybeth1", -1, -171.3529f, 631.9009f, 113.0321f, 0, 0, 67240214, 1112014848);
	func_71(126, 66, "RAINSFALL1", "RRFA1", "rcm_rains_fall1", -1, 2937.5f, 1276.5f, 45.1f, 0, 0, 67240214, 1112014848);
	func_71(145, 75, "TILLY1", "RTLLY", "rcm_tilly1", -1, 2595.41f, -1198.08f, 52.23f, 0, 0, 67240214, 1112014848);
	func_71(151, 78, "HERBALISTCAMP1", "REHEC1", "rcm_herbalist_camp", 152, 556.271f, 172.08f, 133.34348f, 0, joaat("blip_rc"), 1048642, 250f);
	func_71(152, 78, "HERBALISTCAMP2", "REHEC2", "rcm_herbalist_camp", -1, 557.4186f, 170.2608f, 134.348f, 0, -1176045274, 536875076, 250f);
	func_71(146, 76, "TREASUREHUNTER1", "RETH", "rcm_treasure_hunter", -1, -586.4957f, -344.5864f, 81.4029f, joaat("cs_treasurehunter"), joaat("blip_rc"), 68190278, 200f);
	func_72(1, 12);
	func_72(23, 1);
	func_72(33, 24);
	func_72(36, 24);
	func_72(54, 24);
	func_72(55, 48);
	func_72(70, 4);
	func_72(72, 24);
	func_72(73, 24);
	func_72(78, 24);
	func_72(79, 24);
	func_72(80, 48);
	func_72(102, 48);
	func_72(103, 48);
	func_72(104, 48);
	func_72(105, 48);
	func_72(113, 1);
	func_72(118, 24);
	func_72(119, 24);
	func_72(122, 24);
	func_72(133, 24);
	func_72(148, 24);
	func_72(149, 24);
	func_72(150, 24);
	func_73(0, joaat("WEATHER_GROUP_NO_PRECIPITATION"), true);
	func_73(2, joaat("WEATHER_GROUP_NO_PRECIPITATION"), true);
	func_73(23, joaat("WEATHER_GROUP_NO_PRECIPITATION"), true);
	func_73(24, joaat("WEATHER_GROUP_NO_PRECIPITATION"), true);
	func_73(53, joaat("WEATHER_GROUP_NO_PRECIPITATION"), true);
	func_73(54, joaat("WEATHER_GROUP_THUNDERSTORM"), true);
	func_73(59, joaat("WEATHER_GROUP_NO_PRECIPITATION"), true);
	func_73(71, joaat("WEATHER_GROUP_NO_PRECIPITATION"), true);
	func_73(72, joaat("WEATHER_GROUP_NO_PRECIPITATION"), true);
	func_73(69, joaat("WEATHER_GROUP_NO_PRECIPITATION"), true);
	func_73(81, joaat("WEATHER_GROUP_NO_PRECIPITATION"), true);
	func_73(89, joaat("WEATHER_GROUP_NO_PRECIPITATION"), true);
	func_73(91, joaat("WEATHER_GROUP_NO_PRECIPITATION"), true);
	func_73(92, joaat("WEATHER_GROUP_NO_PRECIPITATION"), true);
	func_73(93, joaat("WEATHER_GROUP_NO_PRECIPITATION"), true);
	func_73(101, joaat("WEATHER_GROUP_NO_PRECIPITATION"), true);
	func_73(102, joaat("WEATHER_GROUP_NO_PRECIPITATION"), true);
	func_73(103, joaat("WEATHER_GROUP_NO_PRECIPITATION"), true);
	func_73(104, joaat("WEATHER_GROUP_NO_PRECIPITATION"), true);
	func_73(105, joaat("WEATHER_GROUP_NO_PRECIPITATION"), true);
	func_73(117, joaat("WEATHER_GROUP_NO_PRECIPITATION"), false);
	func_73(118, joaat("WEATHER_GROUP_NO_PRECIPITATION"), false);
	func_73(119, joaat("WEATHER_GROUP_NO_PRECIPITATION"), true);
	func_73(115, joaat("WEATHER_GROUP_NO_PRECIPITATION"), true);
	func_73(133, joaat("WEATHER_GROUP_NO_PRECIPITATION"), true);
	func_73(134, joaat("WEATHER_GROUP_NO_PRECIPITATION"), true);
	func_73(144, joaat("WEATHER_GROUP_NO_PRECIPITATION"), true);
	func_73(145, joaat("WEATHER_GROUP_NO_PRECIPITATION"), false);
	func_73(146, joaat("WEATHER_GROUP_NO_PRECIPITATION"), true);
	func_73(147, joaat("WEATHER_GROUP_NO_PRECIPITATION"), true);

	if (Global_1879534 == false)
	{
		func_74(2, Global_1347702[2 /*49*/].f_16 + 50f);
		func_74(12, Global_1347702[12 /*49*/].f_16 + 40f);
		func_74(13, Global_1347702[13 /*49*/].f_16 + 40f);
		func_74(23, Global_1347702[23 /*49*/].f_16 + 30f);
		func_74(32, Global_1347702[32 /*49*/].f_16 + 30f);
		func_74(56, Global_1347702[56 /*49*/].f_16 + 50f);
		func_74(54, Global_1347702[54 /*49*/].f_16 + 50f);
		func_74(58, Global_1347702[58 /*49*/].f_16 + 50f);
		func_74(63, Global_1347702[63 /*49*/].f_16 + 40f);
		func_74(81, Global_1347702[81 /*49*/].f_16 + 30f);
		func_74(151, 410f);
		func_74(152, 410f);
		func_74(90, Global_1347702[90 /*49*/].f_16 + 25f);
		func_74(91, Global_1347702[91 /*49*/].f_16 + 25f);
		func_74(96, Global_1347702[96 /*49*/].f_16 + 50f);
		func_74(120, Global_1347702[120 /*49*/].f_16 + 100f);
		func_74(123, Global_1347702[123 /*49*/].f_16 + 50f);
		func_74(129, Global_1347702[129 /*49*/].f_16 + 60f);
		func_74(132, Global_1347702[132 /*49*/].f_16 + 60f);
		func_74(144, Global_1347702[144 /*49*/].f_16 + 50f);
		func_75(3, 35f);
		func_75(4, 20f);
		func_75(11, 30f);
		func_75(13, 80f);
		func_75(12, 110f);
		func_75(153, 100f);
		func_75(14, 80f);
		func_75(154, 100f);
		func_75(15, 60f);
		func_75(17, 100f);
		func_75(18, 85f);
		func_75(155, 65f);
		func_75(19, 65f);
		func_75(20, 60f);
		func_75(26, 45f);
		func_75(30, 40f);
		func_75(32, 30f);
		func_75(33, 55f);
		func_75(36, 40f);
		func_75(38, 35f);
		func_75(39, 80f);
		func_75(43, 45f);
		func_75(41, 40f);
		func_75(49, 40f);
		func_75(51, 65f);
		func_75(53, 32f);
		func_75(56, 35f);
		func_75(57, 17f);
		func_75(62, 50f);
		func_75(65, 42f);
		func_75(69, 25f);
		func_75(70, 30f);
		func_75(71, 25f);
		func_75(72, 25f);
		func_75(77, 12f);
		func_75(78, 17f);
		func_75(80, 20f);
		func_75(84, 35f);
		func_75(86, 50f);
		func_75(88, 45f);
		func_75(89, 75f);
		func_75(90, 130f);
		func_75(91, 60f);
		func_75(92, 85f);
		func_75(94, 47f);
		func_75(101, 40f);
		func_75(102, 40f);
		func_75(103, 40f);
		func_75(104, 40f);
		func_75(105, 40f);
		func_75(106, 25f);
		func_75(107, 25f);
		func_75(116, 30f);
		func_75(117, 20f);
		func_75(118, 20f);
		func_75(119, 20f);
		func_75(121, 55f);
		func_75(123, 100f);
		func_75(125, 35f);
		func_75(127, 28f);
		func_75(129, func_76(13));
		func_75(132, 100f);
		func_75(133, 20f);
		func_75(135, 75f);
		func_75(136, 22f);
		func_75(143, 20f);
		func_75(144, 50f);
		func_75(151, 100f);
		func_75(146, 135f);
		func_78(0, func_77(13) || func_77(14));
		func_78(2, func_77(13) || func_77(4));
		func_78(10, func_77(4) || func_77(7));
		func_78(21, func_77(13));
		func_78(37, func_77(23));
		func_78(59, func_77(18));
		func_78(63, func_77(10));
		func_78(64, func_77(11));
		func_78(65, func_77(11));
		func_78(66, func_77(0) || func_77(5));
		func_78(67, func_77(0) || func_77(5) || func_77(9) || func_77(2));
		func_78(68, func_77(0) || func_77(7));
		func_78(76, func_77(9));
		func_78(94, func_77(5));
		func_78(95, func_77(8));
		func_78(96, func_77(14) || func_77(12));
		func_78(112, func_77(1) || func_77(8));
		func_78(114, func_77(1) || func_77(8));
		func_78(116, func_77(26));
		func_78(120, func_77(17));
		func_78(134, func_77(11) || func_77(17));
		func_78(138, func_77(18));
		func_78(139, func_77(18));
		func_78(140, func_77(18));
		func_78(142, func_77(22));
		func_79(53, 1026);
		func_79(54, 128);
		func_79(56, 128);
		func_79(57, 1030);
		func_79(39, 1030);
		func_79(79, 1026);
		func_79(81, 8192);
		func_79(101, 1026);
		func_79(102, 1026);
		func_79(103, 1026);
		func_79(104, 1026);
		func_79(105, 1026);
		func_79(109, 128);
		func_79(110, 128);
		func_79(111, 128);
		func_79(122, 8);
		func_79(148, 1026);
		func_79(149, 1026);
		func_79(150, 1026);
		func_79(155, 640);
		func_79(128, 7);
		func_79(52, 7);
		func_79(71, 1026);
		func_80(6, 1f);
		func_80(22, 30f);
		func_80(26, 15f);
		func_80(27, 15f);
		func_80(30, 50f);
		func_80(32, 100f);
		func_80(33, 150f);
		func_80(34, 100f);
		func_80(36, 100f);
		func_80(41, 10f);
		func_80(53, 50f);
		func_80(54, 150f);
		func_80(58, 0f);
		func_80(59, 3f);
		func_80(61, 2f);
		func_80(76, 3f);
		func_80(81, 50f);
		func_80(84, 60f);
		func_80(85, 60f);
		func_80(89, 150f);
		func_80(90, 180f);
		func_80(91, 75f);
		func_80(93, 150f);
		func_80(95, 4.5f);
		func_80(97, 2f);
		func_80(101, 50f);
		func_80(103, 150f);
		func_80(112, 5f);
		func_80(113, 0f);
		func_80(114, 5f);
		func_80(115, 70f);
		func_80(116, 150f);
		func_80(134, 2f);
		func_80(0, 3f);
		func_80(120, 3f);
		func_80(138, 3f);
		func_80(139, 3f);
		func_80(140, 3f);
		func_80(142, 3f);
		func_80(147, 150f);
		func_80(117, 10f);
		func_80(118, 10f);
		func_80(151, 160f);
		func_80(152, 160f);
		func_80(146, 155f);
		func_80(121, 200f);
		func_80(15, 70f);
		func_80(155, 5f);
		func_80(20, 170f);
		func_80(13, 140f);
		func_80(17, 160f);
		func_80(12, 100f);
		func_80(126, 2f);
		func_80(145, 2f);
		func_80(14, 100f);
		func_81(22, 100f);
		func_81(23, 100f);
		func_81(62, 150f);
		func_81(68, 150f);
		func_81(65, 250f);
		func_81(106, 100f);
		func_81(107, 100f);
		func_81(115, 100f);
		func_81(116, 225f);
		func_81(151, 250f);
		func_81(155, 110f);
	}

	VOLUME::_0x748C5F51A18CB8F0(true);
	return 1;
}

int func_8() // Position - 0x66FF Hash - 0x97A32496 ^0x97A32496
{
	func_82();
	return 1;
}

int func_9() // Position - 0x670C Hash - 0x5E02E77 ^0x5E02E77
{
	func_83(0, 1, 79, 2351.2817f, 1362.0768f, 104.9752f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(1, 1, 43, -1356.339f, 2443.121f, 308.1876f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(2, 1, 98, 667.9077f, -1252.7803f, 42.9221f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(3, 1, 58, 1422.6255f, -7332.473f, 80.5977f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(4, 1, 71, -125.85f, -39.9599f, 96.0908f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(5, 1, 4, 2254.96f, -758.12f, 41.75f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(6, 1, 9, 1880.8066f, -1873.2307f, 41.8094f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(7, 1, 22, -2593.2102f, 453.95334f, 145.9973f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(8, 1, 76, -324.5534f, 760.3503f, 120.6335f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(16, 1, 115, -5514.2725f, -2971.5007f, 1.2343f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(15, 1, 37, func_84(), 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(9, 1, 5, 2638.1235f, -1222.7672f, 59.7655f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(10, 1, 38, -822.6304f, -1324.959f, 48.6102f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(11, 1, 105, 1331.1494f, -1376.7789f, 80.5954f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(12, 1, 92, 2977.443f, 574.00903f, 48.1406f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(13, 1, 78, 2945.3525f, 1330.25f, 43.4528f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	func_83(14, 1, 26, -1812.6259f, -368.6117f, 166.5446f, 0f, 0f, 0f, 1.5f, 1.5f, 2.5f, 0);
	return 1;
}

int func_10() // Position - 0x69DB Hash - 0x283C5309 ^0x283C5309
{
	if (!Global_40)
	{
		func_85(1, 16);
		func_86(0);
		func_87();
	}

	func_88();
	return 1;
}

int func_11() // Position - 0x69FF Hash - 0xC100602 ^0xC100602
{
	return func_89(false);
}

int func_12() // Position - 0x6A0C Hash - 0xFA6C28C ^0x554F880C
{
	int i;
	int j;
	int num;
	Hash hash;

	func_90(&Global_1948854);
	func_91();
	num = 0;

	if (func_92(1))
	{
		Global_1946054.f_1 = Global_26796.f_775;
		func_93(false);
	
		if (Global_1946054.f_1 == -2125499975 || Global_1946054.f_1 == -449205311 && func_94(Global_1835011[4 /*74*/].f_1, true) && !func_92(16))
		{
			func_95(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
			func_96();
			func_97(16);
		}
	
		func_98();
	
		switch (Global_1946054.f_1)
		{
			case -2125499975:
			case -449205311:
				Global_40.f_39 = joaat("Player_Zero");
				Global_1935630.f_2 = Global_40.f_39;
				break;
		
			case 1160113249:
				Global_1935630.f_2 = joaat("player_three");
			
				if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::GET_ENTITY_MODEL(Global_35) != joaat("player_three"))
					Global_40.f_39 = 0;
				break;
		}
	}
	else
	{
		func_93(true);
	
		for (i = 0; i < 5; i = i + 1)
		{
			Global_26796.f_26[i /*120*/] = false;
			Global_26796.f_26[i /*120*/].f_1 = 0;
		
			for (j = 0; j < 39; j = j + 1)
			{
				hash = Global_1946054.f_57[j /*11*/];
				Global_26796.f_26[i /*120*/].f_1.f_1[j /*3*/] = { hash };
			}
		}
	
		for (j = 0; j < 39; j = j + 1)
		{
			hash = Global_1946054.f_57[j /*11*/];
			Global_1946054.f_1497.f_1[j /*3*/] = { hash };
			Global_1946054.f_1378.f_1[j /*3*/] = { hash };
		}
	
		if (Global_1946054.f_1 == 0 || Global_1946054.f_1 == -2125499975 || Global_1946054.f_1 == -449205311 || Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE") || Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		{
			func_99(-2125499975);
			func_100(&(Global_1946054.f_1378), 2020890174, &num, false, false, false, 0);
			func_101(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
			func_100(&(Global_1946054.f_1378), 1661121390, &num, false, true, false, 0);
			Global_26796.f_776 = 0;
			func_102(-1, false, true, 1, true, false);
			func_103(-1, false, false, 6);
			func_104(1420417918, 3, 3, 3, false);
			func_105(0, 5, false);
			Global_40.f_39 = joaat("Player_Zero");
			Global_1935630.f_2 = Global_40.f_39;
			Global_26796.f_775 = Global_1946054.f_1;
		}
		else if (Global_1946054.f_1 == 1160113249)
		{
			func_99(Global_1946054.f_1);
		
			switch (Global_1946054.f_1)
			{
				case 1160113249:
					Global_1935630.f_2 = joaat("player_three");
					Global_40.f_39 = 0;
					break;
			}
		}
	
		func_97(1);
		func_106(7);
	}

	Global_1347698 = 0;
	Global_1347698.f_1 = 0;
	Global_1347698.f_2 = 0;
	return 1;
}

int func_13() // Position - 0x6CE6 Hash - 0xA7BBF5D5 ^0xBCD7127
{
	func_107();

	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		func_108(0, "beat_animal_attack", 4, 90f, 3, 536872961, -1, 17, 10, 1, -1, 1, -1, -1, -1, 10800);
		func_108(1, "beat_animal_mauling", 4, 140f, 2, 4196353, -1, 17, 8, -1, -1, 0, -1, -1, -1, 10800);
		func_108(2, "beat_approach", 4, 140f, 3, -2147467135, -1, 17, 10, 15, -1, 1, -1, -1, -1, 10800);
		func_108(3, "beat_arms_deal", 4, 140f, 3, 16781313, -1, 16, 10, 4, -1, 2097153, -1, -1, -1, 10800);
		func_108(4, "beat_bear_trap", 4, 140f, 2, 4202497, -1, 18, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(5, "beat_boat_attack", 4, 140f, 3, 16781569, -1, 17, 10, 4, -1, 2097152, -1, -1, -1, 10800);
		func_108(6, "beat_booby_trap", 4, 140f, 3, -2130435839, -1, 15, 10, 4, -1, 4096, -1, -1, -1, 10800);
		func_108(7, "beat_bounty_transport", 4, 140f, 3, 8390689, -1, 17, 10, 4, -1, 1, -1, -1, -1, 5400);
		func_108(8, "beat_burning_bodies", 1, 140f, 3, 1073815809, -1, 10, 9, 4, -1, 2056, 9, -1, -1, 10800);
		func_108(9, "beat_campfire_ambush", 4, 140f, 3, 50335745, -1, 17, 8, -1, -1, 2097152, -1, -1, -1, 10800);
		func_108(10, "beat_chain_gang", 4, 140f, 3, -2139090687, 8192, 17, 8, 4, -1, 2166785, -1, -1, -1, 10800);
		func_108(11, "beat_checkpoint", 4, 140f, 3, 16781345, -1, 12, 10, 4, -1, 2097153, -1, -1, -1, 10800);
		func_108(12, "beat_coach_robbery", 4, 140f, 3, -2130702335, -1, 12, 10, 4, -1, 2097153, -1, -1, -1, 5400);
		func_108(13, "beat_corpse_cart", 4, 140f, 1, 18878497, 128, 17, 10, 4, -1, 2228224, -1, -1, -1, 10800);
		func_108(14, "beat_crashed_wagon", 4, 140f, 3, -2145384447, -1, 17, 10, 4, -1, 2097152, -1, -1, -1, 10800);
		func_108(15, "beat_del_lobo_posse", 4, 140f, 3, 16846881, -1, 10, 9, 4, -1, 0, -1, -1, -1, 5400);
		func_108(16, "beat_drunk_camp", 4, 140f, 3, 33570817, 128, 17, 11, 4, -1, 2097153, -1, -1, -1, 10800);
		func_108(17, "beat_escort", 4, 140f, 3, -2143281151, -1, 17, 10, 4, -1, 1, -1, -1, -1, 5400);
		func_108(18, "beat_executions", 4, 140f, 1, 16781313, -1, 17, 10, 4, -1, 131072, -1, -1, -1, 10800);
		func_108(19, "beat_fleeing_trespasser", 1, 100f, 3, -2147449599, -1, 10, 9, 4, -1, 2056, -1, 26, -1, 10800);
		func_108(20, "beat_friendly_outdoorsman", 4, 140f, 5, 1073745937, 8192, 12, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(21, "beat_frozen_to_death", 4, 100f, 2, 16657, -1, 17, 8, -1, -1, 2048, -1, -1, -1, 10800);
		func_108(22, "beat_fussar_chase", 4, 140f, 3, 2305, -1, 10, 9, 4, -1, 0, -1, -1, -1, 10800);
		func_108(23, "beat_gang_camp_reminder", 2, 140f, 3, 129, -1, 10, 7, 5, -1, 67585, -1, 77, -1, 10800);
		func_108(24, "beat_gold_panner", 4, 140f, 5, 4101, -1, 17, 10, 4, -1, 2101248, 9, -1, -1, 10800);
		func_108(119, "beat_herbalist_camp", 2, 140f, 4, 301993985, -1, 12, 10, 4, -1, 32771, -1, -1, -1, 10800);
		func_108(27, "beat_horse_race", 4, 140f, 3, 1073745953, 8192, 11, 10, 4, -1, 1, -1, -1, -1, 5400);
		func_108(28, "beat_hostage_rescue", 4, 140f, 2, 4202497, -1, 14, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(60, "beat_hunter", 4, 140f, 3, 8193, -1, 12, 10, 4, -1, 4096, 9, -1, -1, 10800);
		func_108(29, "beat_inbred_kidnap", 4, 140f, 1, 16781345, 128, 15, 13, 4, -1, 2228224, -1, -1, -1, 10800);
		func_108(30, "beat_injured_rider", 4, 140f, 3, -2147475455, -1, 16, 10, 4, -1, 1, -1, -1, -1, 5400);
		func_108(31, "beat_kidnap_victim", 4, 140f, 3, 4198433, -1, 17, 10, 4, -1, 0, -1, -1, -1, 5400);
		func_108(32, "beat_rally_dispute", 4, 140f, 3, 4097, 128, 17, 10, 4, 82, 1, -1, -1, -1, 10800);
		func_108(33, "beat_rally", 4, 140f, 3, 2051, 128, 17, 10, 4, -1, 2101249, 77, -1, -1, 10800);
		func_108(34, "beat_rally_setup", 4, 140f, 3, 4097, -1, 17, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(35, "beat_laramie_gang_rustling", 4, 140f, 3, 16843777, 128, 17, 10, 66, -1, 0, -1, -1, -1, 10800);
		func_108(36, "beat_locked_safe", 4, 140f, 3, 8449, -1, 17, 10, 4, -1, 0, -1, -1, -1, 1800);
		func_108(37, "beat_lone_prisoner", 4, 140f, 3, 12591297, -1, 13, 10, 6, -1, 1, -1, -1, -1, 10800);
		func_108(38, "beat_lost_friend", 4, 140f, 3, 4202881, -1, 17, 10, 4, -1, 36864, -1, -1, -1, 10800);
		func_108(39, "beat_lost_man", 4, 140f, 3, 4202753, -1, 17, 10, 4, -1, 4105, -1, -1, -1, 10800);
		func_108(40, "beat_moonshine_camp", 4, 140f, 3, 33558785, -1, 14, 10, 4, -1, 4097, 77, -1, -1, 10800);
		func_108(41, "beat_murder_campfire", 4, 100f, 1, 1073758465, -1, 17, 7, 4, -1, 393728, -1, -1, -1, 10800);
		func_108(42, "beat_naked_swimmer", 7, 140f, 5, 8453, -1, 17, 10, 4, -1, 73729, -1, -1, -1, 10800);
		func_108(43, "beat_outlaw_looter", 4, 100f, 3, -1073737719, -1, 12, 10, 4, -1, 2097152, -1, -1, -1, 10800);
		func_108(44, "beat_outlaw_transport", 4, 140f, 3, 564134945, -1, 17, 10, 4, -1, 2097153, -1, -1, -1, 5400);
		func_108(45, "beat_people_in_need_snake_bite", 4, 140f, 3, 4202497, -1, 12, 9, 4, -1, 1, -1, -1, -1, 10800);
		func_108(46, "beat_player_camp_attack", 4, 140f, 3, 151261185, -1, -1, 10, 4, -1, 77825, -1, -1, -1, 10800);
		func_108(47, "beat_player_camp_stranger", 4, 140f, 3, 134220033, -1, -1, -1, 4, -1, 77824, -1, -1, -1, 10800);
		func_108(48, "beat_poisoned", 4, 140f, 3, 4202625, -1, 21, 10, 4, -1, 1, 9, -1, -1, 10800);
		func_108(49, "beat_posse_breakout", 2, 140f, 3, -2147446655, -1, 17, 10, 6, -1, 1, -1, 14, -1, 5400);
		func_108(50, "beat_prison_wagon", 4, 140f, 3, 10493985, -1, 11, 9, 4, -1, 2097153, -1, -1, -1, 5400);
		func_108(51, "beat_rifle_practice", 4, 140f, 3, 553652481, -1, 17, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(53, "beat_savage_aftermath", 4, 140f, 1, 50405377, -1, 12, 9, 4, -1, 2232320, -1, -1, -1, 10800);
		func_108(54, "beat_savage_fight", 4, 140f, 1, 50401281, -1, 17, 10, 4, -1, 2228224, -1, -1, -1, 10800);
		func_108(56, "beat_savage_wagon", 4, 140f, 3, 1090592801, -1, 17, 10, 60, -1, 0, -1, -1, -1, 10800);
		func_108(55, "beat_savage_warning", 7, 140f, 3, 50339841, -1, 17, 10, 4, -1, 2097665, -1, -1, -1, 10800);
		func_108(57, "beat_sharp_shooter", 4, 140f, 3, 536875009, 8192, 11, 9, 4, -1, 1, 9, -1, -1, 10800);
		func_108(58, "beat_skipping_stones", 4, 140f, 5, 4373, 8192, 17, 10, 4, -1, 4097, -1, -1, -1, 10800);
		func_108(59, "beat_spooked_horse", 1, 140f, 3, 8481, 128, 17, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(61, "beat_stalking_shadows", 2, 140f, 2, 289, 128, 12, 10, 4, -1, 4096, -1, -1, -1, 10800);
		func_108(62, "beat_stranded_rider", 4, 140f, 3, -2147475455, -1, 17, 11, 4, -1, 1, -1, -1, -1, 10800);
		func_108(63, "beat_traffic_attack", 4, 100f, 3, 16781345, -1, 12, 10, 60, -1, 1, -1, -1, -1, 5400);
		func_108(64, "beat_train_holdup", 4, 185f, 3, -1593834239, -1, 14, 10, 25, -1, 16387, 25, -1, -1, 10800);
		func_108(65, "beat_trapped_woman", 4, 140f, 3, -2143285247, -1, 17, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(66, "beat_treasure_hunter", 4, 140f, 3, 8449, -1, 17, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(67, "beat_torturing_captive", 4, 140f, 1, 16777217, 128, 18, 10, 4, -1, 131073, -1, -1, -1, 10800);
		func_108(68, "beat_torch_procession", 2, 140f, 2, 8193, 128, 17, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(69, "beat_voice", 2, 140f, 3, 8193, 128, 17, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(70, "beat_wagon_threat", 4, 140f, 3, 16842785, -1, 16, 10, 4, -1, 2097152, -1, -1, -1, 10800);
		func_108(71, "beat_washed_ashore", 2, 40f, 3, 8453, -1, 9, 8, 4, -1, 2049, -1, -1, -1, 10800);
		func_108(72, "beat_wilderness_hanging", 2, 100f, 3, -1073725439, -1, 17, 8, 4, -1, 0, -1, -1, -1, 10800);
		func_108(73, "beat_wild_man", 4, 100f, 3, 8449, -1, 9, 8, 4, -1, 69633, -1, -1, -1, 10800);
		func_108(74, "beat_wild_man_cave", 4, 100f, 3, 1073758465, -1, 17, 7, 4, -1, 393728, -1, -1, -1, 10800);
		func_108(75, "beat_bandito_breakout", 1, 50f, 3, 553717763, -1, -1, -1, 4, -1, 2048, 63, -1, -1, 10800);
		func_108(76, "beat_bandito_execution", 1, 50f, 3, 16844803, -1, -1, -1, 4, -1, 1, -1, -1, -1, 10800);
		func_108(77, "beat_brontes_town_encounter", 4, 30f, 3, 1090535426, -1, 11, 8, 4, -1, 1, 9, -1, -1, 10800);
		func_108(78, "beat_bronte_patrol", 4, 70f, 3, 16814083, -1, 11, 9, 29, -1, 0, 9, 31, -1, 10800);
		func_108(79, "beat_consequence", 2, 50f, 3, 16642, 16384, 8, 2, 4, -1, 67585, 77, -1, -1, 10800);
		func_108(80, "beat_dark_alley_ambush", 4, 50f, 3, 258, 128, 13, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(81, "beat_dark_alley_bum", 4, 50f, 3, 16386, -1, 10, 9, 4, -1, 0, 77, -1, -1, 10800);
		func_108(82, "beat_dark_alley_stabber", 4, 60f, 2, 8194, 128, 17, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(83, "beat_dead_bodies", 4, 50f, 3, 69635, -1, 12, 10, 66, -1, 2097153, -1, -1, -1, 10800);
		func_108(84, "beat_dead_john", 3, 55f, 1, 147714, 128, 10, 9, 4, -1, 200961, -1, -1, -1, 10800);
		func_108(85, "beat_disabled_beggar", 4, 50f, 3, 16386, -1, 11, 9, 4, -1, 0, 77, -1, -1, 10800);
		func_108(86, "beat_domestic_dispute", 4, 60f, 3, 8467, -1, 11, 8, 4, -1, 4097, 9, -1, -1, 10800);
		func_108(87, "beat_drown_murder", 4, 50f, 1, 8194, 128, 17, 10, 4, -1, 131073, -1, -1, 58, 10800);
		func_108(88, "beat_drunk_dueler", 4, 60f, 3, 67772674, -1, 17, 11, 6, -1, 1, -1, -1, -1, 10800);
		func_108(89, "beat_duel_boaster", 4, 60f, 3, 67780610, 128, 17, 10, 6, -1, 1, -1, -1, -1, 10800);
		func_108(90, "beat_duel_winner", 4, 60f, 3, 528386, -1, 17, 11, 6, -1, 1, -1, -1, -1, 10800);
		func_108(91, "beat_fleeing_family", 4, 55f, 3, 1073807362, -1, 17, 10, 4, -1, 2101249, -1, -1, -1, 10800);
		func_108(92, "beat_foot_robbery", 4, 45f, 3, 16785410, -1, 11, 10, 4, -1, 16385, -1, -1, -1, 10800);
		func_108(94, "beat_gang_ped1_encounter", 4, 30f, 3, 1090568194, -1, 10, 8, 4, -1, 1, 9, -1, -1, 10800);
		func_108(95, "beat_intimidation_tactics", 4, 50f, 3, 16785666, 512, 17, 10, 4, -1, 0, -1, -1, -1, 10800);
		func_108(96, "beat_lemoyne_town_encounter", 4, 50f, 3, 1090535426, -1, 11, 8, 4, -1, 16385, 9, -1, -1, 10800);
		func_108(97, "beat_lost_dog", 4, 60f, 5, 4202626, -1, 17, 10, 4, 82, 1, -1, -1, -1, 10800);
		func_108(98, "beat_lost_drunk", 4, 60f, 3, 8322, -1, 15, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(99, "beat_odriscoll_town_encounter", 4, 45f, 3, 1090568194, -1, 11, 8, 5, -1, 1, 9, -1, 65, 10800);
		func_108(100, "beat_on_the_run", 4, 90f, 3, 8578, -1, 13, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(101, "beat_parlor_ambush", 4, 70f, 1, 16916738, -1, 12, 10, 4, -1, 1073942529, -1, -1, -1, 10800);
		func_108(102, "beat_peeping_tom", 4, 60f, 4, 8450, 128, 11, 10, 4, -1, 4097, -1, -1, -1, 10800);
		func_108(103, "beat_pickpocket", 4, 30f, 3, 131330, -1, 17, 10, 6, -1, 4097, -1, -1, -1, 10800);
		func_108(104, "beat_piss_pot", 4, 60f, 3, 2050, -1, 12, 10, 4, -1, 4096, 9, -1, -1, 10800);
		func_108(105, "beat_police_chase", 4, 50f, 3, 4354, -1, 13, 10, 4, -1, 1073745920, -1, -1, -1, 10800);
		func_108(106, "beat_public_hanging", 4, 60f, 2, 4354, 8192, 10, 9, 4, -1, 81921, 77, -1, -1, 10800);
		func_108(107, "beat_rat_infestation", 4, 60f, 3, 16642, -1, 10, 9, 4, -1, 69633, -1, -1, -1, 10800);
		func_108(108, "beat_rowdy_drunks", 4, 40f, 3, 67117074, 128, 11, 9, 5, -1, 69633, -1, -1, -1, 10800);
		func_108(109, "beat_show_off", 4, 60f, 3, 1073750018, 16384, 17, 10, 4, -1, 1, 77, -1, -1, 10800);
		func_108(110, "beat_slum_ambush", 4, 70f, 2, 67248386, -1, 15, 10, 31, -1, 1073743873, -1, -1, -1, 10800);
		func_108(111, "beat_street_fight", 4, 40f, 3, 67117314, -1, 12, 8, 5, -1, 1, -1, -1, -1, 10800);
		func_108(112, "beat_taunting", 4, 50f, 3, 8194, -1, 17, 10, 4, -1, 1, 77, -1, -1, 10800);
		func_108(113, "beat_town_burial", 4, 60f, 3, 8210, 8192, -1, -1, 4, -1, 4097, -1, -1, -1, 10800);
		func_108(114, "beat_town_confrontation", 3, 20f, 3, 1073750146, -1, 15, 9, 4, -1, 4097, -1, -1, -1, 10800);
		func_108(116, "beat_town_widow", 3, 20f, 3, 8322, -1, 17, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(115, "beat_town_robbery", 4, 60f, 3, 8194, 128, 13, 10, 5, -1, 1, -1, -1, -1, 10800);
		func_108(117, "beat_town_trouble", 4, 60f, 3, 16844802, -1, 15, 10, 4, -1, 1, -1, -1, -1, 10800);
		func_108(118, "beat_wealthy_couple", 4, 50f, 1, 4098, 128, 17, 10, 4, -1, 1, 57, -1, -1, 10800);
	}

	return 1;
}

int func_14() // Position - 0x7D49 Hash - 0xCA20E68 ^0x55B42466
{
	func_110(&func_109);
	return 1;
}

int func_15() // Position - 0x7D5A Hash - 0x23AF7846 ^0x23AF7846
{
	func_111(0, 6, 1);
	func_111(0, 7, 1);
	func_111(0, 1, 1);
	func_111(0, 3, 1);
	func_111(0, 10, 1);
	func_111(0, 9, 1);
	func_111(0, 4, 1);
	func_111(1, 1, 1);
	func_111(1, 10, 1);
	func_111(1, 6, 1);
	func_111(1, 3, 1);
	func_111(2, 7, 1);
	func_111(2, 1, 1);
	func_111(2, 9, 1);
	func_111(2, 10, 1);
	func_111(2, 4, 1);
	func_111(2, 3, 1);
	func_111(2, 0, 1);
	func_111(2, 2, 1);
	func_111(2, 11, 1);
	func_111(3, 9, 1);
	func_111(3, 11, 2);
	func_111(75, 15, 1);
	func_112(75, 16777216, 1);
	func_111(76, 13, 1);
	func_112(76, 1048576, 1);
	func_111(4, 1, 1);
	func_111(4, 6, 1);
	func_111(4, 10, 1);
	func_111(4, 3, 1);
	func_112(77, 8192, 2);
	func_111(5, 10, 2);
	func_111(6, 8, 1);
	func_111(6, 10, 2);
	func_111(7, 1, 2);
	func_111(7, 3, 2);
	func_111(7, 10, 2);
	func_111(7, 6, 2);
	func_111(7, 9, 2);
	func_112(78, 8192, 2);
	func_111(78, 0, 2);
	func_111(8, 15, 2);
	func_111(9, 10, 1);
	func_111(10, 11, 1);
	func_111(11, 11, 2);
	func_111(11, 0, 2);
	func_111(12, 1, 1);
	func_111(12, 3, 1);
	func_111(12, 9, 1);
	func_111(12, 11, 1);
	func_111(12, 12, 1);
	func_111(12, 13, 1);
	func_111(12, 14, 1);
	func_111(12, 15, 1);
	func_111(12, 16, 1);
	func_111(12, 4, 1);
	func_112(79, 2097152, 1);
	func_112(79, 2, 1);
	func_112(79, 65536, 1);
	func_112(79, 524288, 1);
	func_111(79, 9, 1);
	func_111(79, 10, 1);
	func_111(79, 11, 1);
	func_111(79, 1, 1);
	func_111(13, 10, 2);
	func_111(13, 2, 2);
	func_111(14, 1, 2);
	func_111(14, 11, 1);
	func_112(80, 8192, 2);
	func_111(80, 0, 2);
	func_112(81, 8192, 4);
	func_111(81, 0, 4);
	func_112(81, 8, 2);
	func_111(81, 4, 2);
	func_112(82, 8192, 2);
	func_111(82, 0, 2);
	func_112(82, 8, 2);
	func_111(82, 4, 2);
	func_112(83, 16777216, 2);
	func_111(83, 15, 2);
	func_112(84, 2097152, 2);
	func_111(84, 9, 2);
	func_111(15, 13, 3);
	func_111(15, 15, 5);
	func_111(15, 16, 4);
	func_111(15, 14, 2);
	func_112(85, 8192, 2);
	func_111(85, 0, 2);
	func_111(86, 10, 1);
	func_111(86, 11, 1);
	func_112(86, 65538, 1);
	func_112(87, 2097152, 1);
	func_112(87, 65536, 1);
	func_112(87, 4194304, 1);
	func_111(16, 1, 1);
	func_111(16, 4, 1);
	func_111(16, 9, 1);
	func_111(16, 11, 1);
	func_111(16, 10, 1);
	func_111(16, 2, 1);
	func_111(88, 10, 1);
	func_111(88, 9, 1);
	func_112(88, 4194304, 1);
	func_112(88, 2097152, 1);
	func_111(89, 11, 1);
	func_112(89, 65536, 1);
	func_111(90, 9, 1);
	func_111(90, 10, 1);
	func_112(90, 2097152, 1);
	func_112(90, 4194304, 1);
	func_111(17, 3, 1);
	func_111(17, 11, 1);
	func_111(17, 0, 1);
	func_111(17, 9, 1);
	func_111(17, 6, 1);
	func_111(18, 11, 2);
	func_111(18, 0, 2);
	func_111(18, 2, 2);
	func_112(91, 16777216, 1);
	func_111(19, 11, 1);
	func_112(19, 65536, 1);
	func_112(19, 64, 1);
	func_112(92, 2162688, 1);
	func_111(20, 1, 1);
	func_111(20, 3, 1);
	func_111(20, 9, 1);
	func_111(20, 4, 1);
	func_111(20, 11, 1);
	func_111(20, 10, 1);
	func_111(21, 7, 1);
	func_111(22, 8, 1);
	func_112(93, 8192, 1);
	func_111(23, 0, 3);
	func_111(23, 1, 3);
	func_111(23, 2, 3);
	func_111(23, 15, 3);
	func_111(23, 3, 3);
	func_111(23, 4, 3);
	func_111(23, 13, 3);
	func_111(23, 5, 3);
	func_111(23, 6, 3);
	func_111(23, 7, 3);
	func_111(23, 9, 3);
	func_111(23, 10, 3);
	func_111(23, 14, 3);
	func_111(23, 10, 3);
	func_111(23, 11, 3);
	func_111(23, 12, 3);
	func_112(94, 2097152, 4);
	func_112(94, 65536, 4);
	func_112(94, 8192, 2);
	func_111(24, 9, 1);
	func_111(24, 1, 2);
	func_111(24, 10, 2);
	func_111(24, 3, 2);
	func_111(24, 6, 2);
	func_111(119, 1, 1);
	func_111(119, 4, 1);
	func_111(119, 6, 1);
	func_111(119, 15, 1);
	func_111(119, 9, 1);
	func_111(119, 10, 1);
	func_111(119, 11, 1);
	func_111(119, 12, 1);
	func_111(27, 11, 2);
	func_111(27, 0, 2);
	func_111(27, 3, 2);
	func_111(27, 10, 2);
	func_111(27, 9, 1);
	func_111(27, 1, 2);
	func_111(27, 6, 2);
	func_111(28, 0, 1);
	func_111(28, 11, 1);
	func_111(28, 1, 1);
	func_111(29, 10, 2);
	func_111(29, 2, 2);
	func_111(30, 10, 1);
	func_111(30, 4, 1);
	func_111(30, 0, 2);
	func_111(30, 2, 2);
	func_112(95, 8192, 1);
	func_111(31, 2, 1);
	func_111(31, 11, 1);
	func_111(31, 0, 1);
	func_111(31, 10, 1);
	func_111(31, 3, 1);
	func_111(31, 1, 1);
	func_111(31, 6, 1);
	func_111(31, 9, 1);
	func_111(32, 1, 1);
	func_111(32, 10, 1);
	func_111(32, 9, 1);
	func_111(32, 11, 1);
	func_111(32, 2, 1);
	func_111(33, 1, 2);
	func_111(33, 10, 2);
	func_111(33, 9, 2);
	func_111(33, 11, 2);
	func_111(33, 2, 2);
	func_112(33, 16, 2);
	func_111(34, 1, 1);
	func_111(34, 10, 1);
	func_111(34, 9, 1);
	func_111(34, 11, 1);
	func_111(34, 2, 1);
	func_111(35, 1, 1);
	func_112(96, 73728, 3);
	func_111(36, 0, 2);
	func_111(36, 11, 2);
	func_111(36, 1, 2);
	func_111(36, 2, 2);
	func_111(36, 10, 2);
	func_111(37, 11, 2);
	func_111(37, 9, 2);
	func_111(37, 0, 2);
	func_111(37, 2, 2);
	func_112(97, 512, 1);
	func_112(97, 524288, 1);
	func_112(98, 2097152, 2);
	func_112(98, 4194304, 1);
	func_111(38, 7, 1);
	func_111(39, 1, 1);
	func_111(40, 2, 2);
	func_111(40, 0, 2);
	func_111(40, 11, 2);
	func_111(40, 10, 2);
	func_111(40, 3, 2);
	func_111(40, 9, 2);
	func_111(40, 1, 2);
	func_111(40, 6, 2);
	func_111(41, 1, 1);
	func_111(41, 11, 1);
	func_111(41, 9, 1);
	func_111(42, 11, 2);
	func_111(99, 9, 2);
	func_112(99, 2097152, 2);
	func_112(100, 524288, 1);
	func_111(43, 9, 1);
	func_111(43, 1, 1);
	func_111(43, 0, 1);
	func_111(43, 2, 1);
	func_111(43, 4, 1);
	func_111(43, 6, 1);
	func_111(43, 10, 1);
	func_111(43, 11, 1);
	func_111(43, 13, 1);
	func_111(43, 14, 1);
	func_111(43, 15, 1);
	func_111(43, 16, 1);
	func_111(43, 12, 1);
	func_111(44, 1, 1);
	func_111(44, 9, 1);
	func_111(44, 11, 1);
	func_111(44, 0, 1);
	func_112(101, 65536, 2);
	func_112(102, 2097152, 2);
	func_112(102, 524288, 1);
	func_111(103, 0, 1);
	func_111(103, 10, 1);
	func_112(103, 8192, 2);
	func_112(103, 4194304, 1);
	func_111(45, 11, 2);
	func_111(45, 0, 2);
	func_111(45, 9, 1);
	func_111(104, 0, 3);
	func_112(104, 8192, 3);
	func_111(47, 10, 1);
	func_111(46, 10, 2);
	func_111(46, 12, 2);
	func_111(48, 11, 1);
	func_111(48, 10, 1);
	func_111(48, 0, 1);
	func_112(105, 8192, 2);
	func_111(49, 1, 1);
	func_111(49, 9, 1);
	func_111(50, 1, 3);
	func_111(50, 9, 3);
	func_111(50, 10, 3);
	func_111(50, 2, 3);
	func_111(50, 11, 3);
	func_111(50, 0, 3);
	func_112(106, 2097152, 3);
	func_112(106, 65536, 2);
	func_112(106, 8, 2);
	func_112(106, 8192, 2);
	func_112(107, 8192, 2);
	func_111(51, 11, 1);
	func_112(108, 4194304, 2);
	func_112(108, 2097152, 2);
	func_112(108, 16777216, 1);
	func_111(53, 12, 2);
	func_111(54, 12, 2);
	func_111(56, 12, 2);
	func_111(56, 4, 3);
	func_111(55, 12, 1);
	func_111(57, 0, 3);
	func_111(57, 11, 3);
	func_111(57, 9, 3);
	func_111(57, 1, 3);
	func_111(57, 15, 3);
	func_111(57, 14, 3);
	func_111(57, 13, 3);
	func_112(109, 524288, 1);
	func_112(109, 65536, 1);
	func_112(109, 2, 2);
	func_111(58, 9, 2);
	func_111(58, 11, 2);
	func_111(58, 1, 2);
	func_112(110, 8192, 1);
	func_111(59, 0, 2);
	func_111(60, 6, 1);
	func_111(60, 10, 1);
	func_111(60, 1, 1);
	func_111(60, 9, 1);
	func_111(60, 4, 1);
	func_111(61, 0, 2);
	func_111(62, 1, 2);
	func_111(62, 7, 2);
	func_111(62, 6, 2);
	func_111(62, 12, 2);
	func_111(62, 4, 2);
	func_111(62, 9, 2);
	func_112(111, 2097152, 4);
	func_112(111, 4194304, 2);
	func_112(111, 8, 1);
	func_112(112, 8192, 1);
	func_111(67, 10, 1);
	func_111(68, 0, 2);
	func_111(68, 2, 2);
	func_112(113, 8, 2);
	func_112(113, 65536, 1);
	func_112(115, 2097152, 2);
	func_111(115, 9, 2);
	func_112(117, 16777216, 2);
	func_112(114, 2097152, 1);
	func_112(114, 65536, 1);
	func_112(114, 8192, 1);
	func_112(114, 4194304, 1);
	func_112(116, 2162690, 1);
	func_111(63, 1, 1);
	func_111(64, 9, 1);
	func_111(64, 11, 1);
	func_111(64, 0, 1);
	func_111(64, 15, 1);
	func_111(64, 14, 1);
	func_111(64, 13, 1);
	func_111(65, 6, 2);
	func_111(65, 9, 2);
	func_111(65, 11, 2);
	func_111(65, 10, 2);
	func_111(66, 1, 3);
	func_111(69, 0, 1);
	func_111(69, 2, 1);
	func_111(70, 1, 2);
	func_111(71, 10, 1);
	func_111(71, 9, 1);
	func_111(71, 4, 1);
	func_111(71, 8, 1);
	func_112(118, 8200, 1);
	func_111(72, 0, 2);
	func_111(72, 10, 2);
	func_111(72, 2, 2);
	func_111(73, 10, 3);
	func_111(74, 10, 1);
	func_113();
	return 1;
}

int func_16() // Position - 0x896E Hash - 0xB2DD8835 ^0xB2DD8835
{
	BOOL flag;
	int i;

	flag = false;

	for (i = 0; i < 44; i = i + 1)
	{
		if (func_114(i))
		{
			if (!Global_40 || flag)
			{
				Global_40.f_9274[i] = false;
			
				if (func_115() != -1)
					Global_36638[i] = false;
			}
		
			if (i == 43)
				func_116(43, true);
		}
	}

	return 1;
}

int func_17() // Position - 0x89CE Hash - 0x97A32496 ^0x97A32496
{
	func_117();
	return 1;
}

int func_18() // Position - 0x89DB Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_19() // Position - 0x89E4 Hash - 0x4DBAACD9 ^0xD18CA95D
{
	if (func_115() != -1)
		return 1;

	func_118(2, "loanshark_catfish", 96, 1308.7083f, -2342.7717f, 41.4922f, 1324.7544f, -2307.7056f, 47.07406f, 65f, 0, -1, -1, 1123680256, 65, 1123680256);
	func_118(7, "loanshark_horseChase1", 66, 1120.1473f, 503.3499f, 94.8851f, 1120.1473f, 503.3499f, 94.8851f, 40f, 0, -1, -1, 200f, 65, 1123680256);
	func_118(1, "loanshark_hunter", -1, -1781.541f, -180.863f, 194.142f, -1733.0145f, -200.88399f, 182.19807f, 75f, 0, -1, -1, 200f, 65, 140f);
	func_118(5, "loanshark_miner1", 78, 2757.3628f, 1370.6888f, 68.29453f, 2792.968f, 1347.9375f, 72.24879f, 50f, 0, -1, 6, 1123680256, 1, 1123680256);
	func_118(6, "loanshark_miner2", 82, 2685.2756f, 900.0816f, 90.9889f, 2689.8455f, 900.83057f, 96.28243f, 35f, 0, -1, -1, 1123680256, 81, 1123680256);
	func_118(8, "loanshark_sellHorse1", -1, -610.8f, -25.3f, 85.5f, -619.389f, -28.8628f, 84.4293f, 50f, 0, -1, -1, 1123680256, 65, 1123680256);
	func_118(4, "loanshark_soldier", -1, 1411.8564f, 1166.7433f, 184.1507f, 1418.0063f, 1129.67f, 183.486f, 120f, 0, -1, 5, 150f, 81, 140f);
	func_118(3, "loanshark_undertaker", 105, 1300.5624f, -1318.5629f, 76.5193f, 1306.8778f, -1313.5989f, 79.70631f, 15f, 0, -1, -1, 1123680256, 65, 1123680256);
	func_118(0, "loanshark_womanCry", 69, 1424.889f, 383.44193f, 89.48783f, 1422.9f, 329.34f, 87.41f, 65f, 0, -1, -1, 170f, 67, 100f);
	return 1;
}

int func_20() // Position - 0x8C1B Hash - 0x3CEF0769 ^0x82DFCC39
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		func_119(0, joaat("av_barber_shaving"), 2, -1, 5, 1);
		func_119(1, joaat("av_body_toss"), 8192, -1, 0, 0);
		func_119(2, joaat("av_butcher_shared"), 3, 77, 23, 1);
		func_119(3, joaat("av_butcher_shared"), 3, 77, 23, 1);
		func_119(4, joaat("av_chamberpot_toss"), 3, 77, 0, 1);
		func_119(6, joaat("av_drop_rabbit_table"), 2, 77, 0, 0);
		func_119(7, joaat("av_get_directions"), 3, 77, 0, 1);
		func_119(47, joaat("av_hobo_train_hop"), 3, 77, 0, 0);
		func_119(9, joaat("av_light_smoke"), 8192, 77, 0, 1);
		func_119(10, joaat("av_lumber_pass"), 64, 77, 43, 0);
		func_119(11, joaat("av_lumber_pass"), 64, 77, 43, 0);
		func_119(12, joaat("av_man_jump_fence"), 8192, -1, 0, 0);
		func_119(13, joaat("av_man_stand_at_wagon"), 8192, 77, 0, 1);
		func_119(14, joaat("av_pump_cart"), -1, -1, 0, 1);
		func_119(16, joaat("av_shopkeeper_restock"), 3, -1, 58, 1);
		func_119(17, joaat("av_shopkeeper_restock"), 3, -1, 58, 1);
		func_119(18, joaat("av_shopkeeper_restock"), 3, -1, 58, 1);
		func_119(19, joaat("av_shopkeeper_restock"), 3, -1, 58, 1);
		func_119(20, joaat("av_stage_coach"), 3, 77, 0, 0);
		func_119(21, joaat("av_starting_to_rain"), 3, 2, 62, 0);
		func_119(22, joaat("av_starting_to_rain"), 3, 2, 62, 0);
		func_119(23, joaat("av_wall_vomit"), 3, 77, 69, 1);
		func_119(24, joaat("av_wall_vomit"), 3, 77, 69, 1);
		func_119(25, joaat("av_wall_vomit"), 3, 77, 69, 1);
		func_119(26, joaat("av_wall_vomit"), 3, 77, 69, 1);
		func_119(27, joaat("av_wagon_barrel"), 3, 77, 0, 0);
		func_119(28, joaat("av_wagon_sweeper"), 2, 77, 0, 0);
		func_119(29, joaat("av_wagon_barrel"), 64, 77, 0, 0);
		func_119(30, joaat("av_walk_with_horse"), 3, 77, 0, 1);
		func_119(31, joaat("av_whisper_sit"), 14, 77, 75, 0);
		func_119(32, joaat("av_whisper_sit"), 14, 77, 75, 0);
		func_119(33, joaat("av_whore_give_money"), 12, -1, 0, 1);
		func_119(34, joaat("av_amb_camp_robbery"), -1, -1, 77, 1);
		func_119(35, joaat("av_boat_placement"), -1, 77, 0, 4);
		func_119(36, joaat("av_animal_attack"), 8192, 77, 49, 3);
		func_119(5, joaat("av_sheep_grazing"), 3, 57, 41, 3);
		func_119(37, joaat("av_traveller_gallop_past"), -1, 57, 66, 4);
		func_119(38, joaat("av_animal_carry_ride"), 3, 77, 37, 1);
		func_119(39, joaat("av_animal_carry_ride"), 8196, 57, 37, 2);
		func_119(40, joaat("av_dog_in_wagon"), 8196, 77, 67, 2);
		func_119(41, joaat("av_animal_carry_ride"), 8192, 77, 37, 2);
		func_119(42, joaat("av_female_rider_male_walker"), 8192, 77, 64, 4);
		func_119(43, joaat("av_fishing_river"), 5, 77, 38, 3);
		func_119(44, joaat("av_fishing_river"), 5, 77, 38, 3);
		func_119(45, joaat("av_animal_attack"), 8192, 57, 49, 3);
		func_119(46, joaat("av_walk_horse_carry_deer"), 8196, 57, 37, 4);
		func_119(8, joaat("av_sheep_grazing"), 3, 77, 41, 3);
		func_119(48, joaat("av_macfarlane_farmer"), 3, 77, 60, 3);
		func_119(51, joaat("av_man_with_lantern"), 128, 57, 65, 4);
		func_119(49, joaat("av_traveller_gallop_past"), 8196, 77, 65, 4);
		func_119(50, joaat("av_man_sit_read"), 3, 77, 53, 2);
		func_119(52, joaat("av_slow_rider"), 8196, 77, 66, 4);
		func_119(53, joaat("av_walk_horse_carry_deer"), 8196, 57, 37, 4);
		func_119(54, joaat("av_water_horse"), 8192, 77, 53, 3);
		func_119(55, joaat("av_rider_gallop"), 8192, 57, 65, 4);
		func_119(56, joaat("av_female_rider_male_walker"), 8196, 77, 66, 4);
		func_119(57, joaat("av_ridgeline_native"), 8196, 77, 45, 2);
		func_119(58, joaat("av_ridgeline_rider"), 8196, 77, 65, 2);
		func_119(59, joaat("av_roving_herd"), 8192, -1, 41, 3);
		func_119(15, joaat("av_sheep_grazing"), 3, 77, 41, 3);
		func_119(60, joaat("av_slow_rider"), -1, 77, 66, 4);
		func_119(61, joaat("av_traveller_gallop_past"), 8192, 57, 68, 4);
		func_119(62, joaat("av_female_rider_male_walker"), 8196, 77, 64, 4);
		func_119(63, joaat("av_female_rider_male_walker"), 8196, 77, 64, 4);
		func_119(64, joaat("av_traveller_gallop_past"), 8196, 57, 65, 4);
		func_119(66, joaat("av_wagon_back_passenger"), 8196, 77, 67, 2);
		func_119(65, joaat("av_wagon_music"), 8196, 77, 67, 4);
		func_119(67, joaat("av_walk_horse_carry_deer"), 8196, 57, 73, 4);
		func_119(68, joaat("av_walk_horse_carry_deer"), 8196, 57, 73, 4);
		func_119(69, joaat("av_walk_horse_carry_deer"), 8196, 57, 73, 4);
		func_119(70, joaat("av_walk_horse_carry_deer"), 8196, 57, 73, 4);
		func_119(71, joaat("av_walk_horse_carry_deer"), 8196, 57, 73, 4);
		func_119(72, joaat("av_walk_with_dog"), 8196, 77, 74, 4);
		func_119(73, joaat("av_walk_with_dog"), 8192, 77, 74, 4);
		func_119(74, joaat("av_water_horse"), 8196, 77, 66, 2);
		func_119(75, joaat("av_alligator_boar_leg"), 5, -1, 49, 3);
		func_119(76, joaat("av_alligator_boar_neck"), 5, -1, 49, 3);
		func_119(77, joaat("av_alligator_eat_dead_bird"), 8448, -1, 49, 3);
		func_119(78, joaat("av_cross_road"), 8192, -1, 2, 4);
		func_119(79, joaat("av_bird_flee_swarm"), 16, -1, 7, 1);
		func_119(80, joaat("av_bird_fence_swarm"), 16, -1, 7, 1);
		func_119(82, joaat("av_bear_intimidate_wolf"), 3, 77, 49, 3);
		func_119(83, joaat("av_bear_run_catch_fish"), 3, 57, 49, 3);
		func_119(84, joaat("av_bear_scratch_back"), 7, 77, 50, 3);
		func_119(85, joaat("av_bear_vs_wolves"), 8192, 77, 49, 3);
		func_119(81, joaat("av_bearblack_intimidate_bearblack"), 8192, 77, 49, 3);
		func_119(86, joaat("av_beaver_swim_with_branch"), 8192, -1, 46, 4);
		func_119(87, joaat("av_big_cat_ambush_deer"), 5, 57, 49, 3);
		func_119(88, joaat("av_big_cat_kill_raccoon"), 5, -1, 49, 3);
		func_119(89, joaat("av_bird_fence_swarm"), 8192, 77, 11, 1);
		func_119(90, joaat("av_bird_flee_swarm"), 8192, 77, 11, 1);
		func_119(91, joaat("av_bird_flee_swarm"), 8192, 57, 13, 1);
		func_119(92, joaat("av_bird_flee_swarm"), 8192, 57, 13, 1);
		func_119(93, joaat("av_bird_flee_swarm"), 8192, 57, 13, 1);
		func_119(94, joaat("av_bird_flee_swarm"), 8192, 77, 10, 1);
		func_119(95, joaat("av_bird_flee_swarm"), 8192, 77, 10, 1);
		func_119(96, joaat("av_bird_flee_swarm"), 8192, 77, 11, 1);
		func_119(97, joaat("av_bird_flee_swarm"), 128, 77, 11, 1);
		func_119(98, joaat("av_bird_flee_swarm"), 8196, 77, 11, 1);
		func_119(99, joaat("av_bird_flee_swarm"), 8192, 77, 10, 1);
		func_119(100, joaat("av_bird_flee_swarm"), 8192, 77, 12, 1);
		func_119(101, joaat("av_bird_flee_swarm"), 8192, 77, 12, 1);
		func_119(103, joaat("av_bird_land"), 8192, 77, 16, 4);
		func_119(104, joaat("av_bird_land"), 8192, 77, 16, 4);
		func_119(105, joaat("av_bird_land"), 8192, 77, 16, 4);
		func_119(106, joaat("av_bird_land"), 8192, 77, 14, 4);
		func_119(107, joaat("av_bird_land"), 8192, 77, 14, 4);
		func_119(108, joaat("av_bird_land"), 8192, 77, 14, 4);
		func_119(109, joaat("av_bird_land"), 8192, 77, 14, 4);
		func_119(110, joaat("av_bird_land"), 16, 77, 14, 4);
		func_119(111, joaat("av_bird_land"), 8192, 77, 14, 4);
		func_119(112, joaat("av_bird_land"), 8192, 77, 16, 4);
		func_119(113, joaat("av_bird_land"), 8192, 77, 16, 4);
		func_119(114, joaat("av_bird_land_swarm"), 8196, 77, 15, 1);
		func_119(115, joaat("av_bird_land_swarm"), 8192, 77, 15, 1);
		func_119(116, joaat("av_bird_on_animal"), 8192, 9, 17, 1);
		func_119(117, joaat("av_bird_on_animal"), 8192, 9, 17, 1);
		func_119(118, joaat("av_bird_on_animal"), 8192, 9, 17, 1);
		func_119(119, joaat("av_bird_on_animal"), 8192, 9, 17, 1);
		func_119(120, joaat("av_bird_on_animal"), 8192, 9, 17, 1);
		func_119(121, joaat("av_bird_on_animal"), 8192, 9, 44, 1);
		func_119(122, joaat("av_bird_swarm"), 8192, 9, 10, 4);
		func_119(123, joaat("av_bird_fence_swarm"), 8192, 77, 12, 1);
		func_119(102, joaat("av_birds_in_tree"), 8192, 77, 10, 1);
		func_119(124, joaat("av_fox_sit"), 8192, 57, 20, 4);
		func_119(125, joaat("av_cross_road"), 8196, -1, 3, 1);
		func_119(126, joaat("av_buck_and_doe"), 5, 77, 47, 2);
		func_119(127, joaat("av_bucks_fighting"), 5, 77, 47, 1);
		func_119(128, joaat("av_buffalo_vs_buffalo"), 8192, -1, 48, 1);
		func_119(129, joaat("av_ridgeline_animal"), 5, 77, 48, 1);
		func_119(130, joaat("av_fox_sit"), 8196, -1, 18, 4);
		func_119(131, joaat("av_fox_sit"), -1, -1, 18, 4);
		func_119(132, joaat("av_fox_sit"), 8192, 57, 20, 4);
		func_119(133, joaat("av_cat_carry_rat"), 8192, 77, 27, 4);
		func_119(134, joaat("av_cat_catch_bird"), 8192, 77, 27, 4);
		func_119(135, joaat("av_cross_road"), 8192, -1, 3, 4);
		func_119(136, joaat("av_coyote_catch_squirrel"), 8192, 57, 51, 2);
		func_119(137, joaat("av_animal_scavenger"), 8196, 57, 51, 2);
		func_119(138, joaat("av_wolf_takedown_miss"), 8196, 77, 49, 3);
		func_119(144, joaat("av_fox_sit"), 8196, -1, 19, 4);
		func_119(139, joaat("av_crows_and_eagles_eat_deer"), 8196, 57, 56, 4);
		func_119(140, joaat("av_crows_and_vultures_eat_deer"), 8196, 57, 56, 4);
		func_119(141, joaat("av_crows_and_vultures_eat_deer"), 8196, 57, 56, 1);
		func_119(142, joaat("av_vultures_eat_carcass"), 8196, 57, 56, 4);
		func_119(143, joaat("av_vultures_eat_carcass"), 8196, 57, 56, 1);
		func_119(145, joaat("av_dead_animal"), -1, -1, 39, 1);
		func_119(146, joaat("av_dead_animal"), -1, -1, 39, 1);
		func_119(147, joaat("av_dead_animal"), -1, -1, 39, 1);
		func_119(148, joaat("av_dead_animal"), -1, -1, 39, 1);
		func_119(149, joaat("av_dead_horse"), -1, -1, 39, 1);
		func_119(150, joaat("av_dead_horse"), -1, -1, 39, 1);
		func_119(151, joaat("av_dead_animal"), -1, -1, 61, 4);
		func_119(152, joaat("av_dead_animal"), -1, -1, 61, 4);
		func_119(153, joaat("av_dead_animal"), -1, -1, 39, 1);
		func_119(154, joaat("av_dead_animal"), -1, -1, 61, 4);
		func_119(155, joaat("av_dead_animal"), -1, -1, 39, 1);
		func_119(156, joaat("av_deer_antlers_stuck"), -1, -1, 47, 1);
		func_119(157, joaat("av_cross_road"), 8196, -1, 3, 1);
		func_119(158, joaat("av_deer_tree_rub"), 8196, 77, 47, 1);
		func_119(159, joaat("av_discoverable_parakeet"), 8192, 57, 25, 1);
		func_119(160, joaat("av_dog_chase_cat"), 8192, 77, 28, 1);
		func_119(161, joaat("av_dog_chase_tail"), 8192, 77, 28, 2);
		func_119(162, joaat("av_dogs_playing"), 7, 77, 28, 1);
		func_119(163, joaat("av_bird_flee_swarm"), 8192, 57, 13, 1);
		func_119(164, joaat("av_eagle_catch_fish"), 8192, 77, 30, 1);
		func_119(165, joaat("av_eagle_catch_rabbit"), 8192, 77, 29, 1);
		func_119(166, joaat("av_eagle_catch_seasnake"), 8192, 77, 30, 1);
		func_119(167, joaat("av_eagle_dive_catch_fish"), 8192, 77, 30, 1);
		func_119(168, joaat("av_fox_sit"), 8192, 57, 18, 4);
		func_119(169, joaat("av_fox_catch_rodent"), 8192, 77, 51, 2);
		func_119(170, joaat("av_fox_hunt_in_snow"), 3, 57, 51, 1);
		func_119(171, joaat("av_cross_road"), 16, -1, 2, 1);
		func_119(172, joaat("av_fox_sit"), 8196, 57, 46, 1);
		func_119(173, joaat("av_cross_road"), 8192, -1, 4, 1);
		func_119(174, joaat("av_hawk_catch_snake"), 8192, 77, 29, 1);
		func_119(175, joaat("av_hawk_catch_snake"), 8192, 77, 29, 1);
		func_119(176, joaat("av_fox_sit"), 8192, 57, 18, 4);
		func_119(177, joaat("av_hawk_catch_snake"), 8192, 77, 29, 1);
		func_119(178, joaat("av_ridgeline_animal"), 8192, 77, 46, 1);
		func_119(180, joaat("av_cross_road"), 8192, -1, 3, 4);
		func_119(179, joaat("av_cross_road"), 8192, -1, 3, 4);
		func_119(181, joaat("av_cross_road"), 5, -1, 2, 1);
		func_119(182, joaat("av_mangy_dog_and_vultures"), 20, 57, 56, 1);
		func_119(183, joaat("av_ridgeline_animal"), 8192, 57, 44, 1);
		func_119(184, joaat("av_moose_slipping"), 8192, 57, 44, 2);
		func_119(185, joaat("av_cross_road"), 8192, -1, 2, 4);
		func_119(186, joaat("av_owl_catch_rat"), 20, 57, 29, 1);
		func_119(187, joaat("av_fox_sit"), 20, 57, 18, 4);
		func_119(188, joaat("av_pelican_dive"), 8192, 57, 30, 1);
		func_119(189, joaat("av_fox_sit"), 8192, 57, 18, 4);
		func_119(190, joaat("av_ridgeline_animal"), 8192, 2, 40, 4);
		func_119(191, joaat("av_cross_road"), 8192, -1, 4, 1);
		func_119(192, joaat("av_squirrel_chase_squirrel"), 8192, 57, 3, 4);
		func_119(193, joaat("av_cross_road"), 8192, 57, 3, 4);
		func_119(194, joaat("av_ridgeline_animal"), 128, 57, 55, 4);
		func_119(195, joaat("av_cross_road"), 16, -1, 2, 4);
		func_119(197, joaat("av_cross_road"), 8192, -1, 4, 1);
		func_119(196, joaat("av_rams_headbutt"), 8196, 57, 46, 1);
		func_119(198, joaat("av_rats_eat_deer"), -1, 57, 55, 3);
		func_119(199, joaat("av_rats_eating_group"), -1, 57, 55, 3);
		func_119(200, joaat("av_fox_sit"), 8196, -1, 19, 4);
		func_119(201, joaat("av_fox_sit"), 8192, 57, 18, 4);
		func_119(202, joaat("av_ridgeline_animal"), 8192, -1, 54, 1);
		func_119(203, joaat("av_ridgeline_animal"), 8192, -1, 54, 1);
		func_119(204, joaat("av_ridgeline_animal"), 8192, -1, 44, 1);
		func_119(205, joaat("av_ridgeline_animal"), 8192, -1, 54, 1);
		func_119(206, joaat("av_ridgeline_animal"), 8192, -1, 54, 1);
		func_119(207, joaat("av_ridgeline_animal"), -1, 77, 54, 3);
		func_119(208, joaat("av_scavenger_on_animal"), -1, 57, 56, 1);
		func_119(209, joaat("av_seagull_catch_fish"), 8192, 57, 30, 1);
		func_119(210, joaat("av_cross_road"), 8192, -1, 4, 1);
		func_119(211, joaat("av_cross_road"), 16, -1, 2, 4);
		func_119(212, joaat("av_cross_road"), 8192, -1, 2, 4);
		func_119(213, joaat("av_squirrel_chase_squirrel"), 2, 57, 2, 4);
		func_119(214, joaat("av_cross_road"), 8192, -1, 2, 4);
		func_119(228, joaat("av_swim_wolf_chase_moose"), 8192, 57, 49, 3);
		func_119(215, joaat("av_swimming_animal"), 8192, -1, 63, 4);
		func_119(216, joaat("av_swimming_animal"), 8192, -1, 63, 4);
		func_119(217, joaat("av_swimming_animal"), -1, -1, 63, 4);
		func_119(218, joaat("av_swimming_animal"), 8192, -1, 63, 4);
		func_119(219, joaat("av_swimming_animal"), 8192, -1, 63, 4);
		func_119(220, joaat("av_swimming_animal"), 8192, -1, 63, 4);
		func_119(221, joaat("av_swimming_animal"), 8192, -1, 63, 4);
		func_119(222, joaat("av_swimming_animal"), 8192, -1, 63, 4);
		func_119(223, joaat("av_swimming_animal"), 8192, -1, 63, 4);
		func_119(224, joaat("av_swimming_animal"), 16, -1, 63, 4);
		func_119(225, joaat("av_swimming_animal"), 16, -1, 63, 4);
		func_119(226, joaat("av_swimming_animal"), -1, -1, 63, 4);
		func_119(227, joaat("av_swimming_animal"), 8192, -1, 63, 4);
		func_119(229, joaat("av_cross_road"), 3, -1, 2, 4);
		func_119(232, joaat("av_fox_sit"), 8196, -1, 19, 4);
		func_119(230, joaat("av_vultures_eat_carcass"), 8196, 57, 56, 4);
		func_119(231, joaat("av_vultures_eat_carcass"), 8196, 57, 56, 1);
		func_119(233, joaat("av_wild_animal"), -1, 57, 42, 1);
		func_119(234, joaat("av_wild_animal"), -1, 57, 42, 1);
		func_119(235, joaat("av_wild_animal"), -1, 57, 42, 1);
		func_119(236, joaat("av_wild_animal"), -1, 57, 57, 4);
		func_119(237, joaat("av_wolf_ambush_deer"), 5, 57, 49, 3);
		func_119(238, joaat("av_wolf_flee_wolves"), 8192, 57, 49, 3);
		func_119(239, joaat("av_dead_animal"), 20, -1, 49, 3);
		func_119(240, joaat("av_ridgeline_animal"), 20, -1, 50, 3);
		func_119(247, joaat("av_wolf_takedown_miss"), 5, 57, 49, 3);
		func_119(242, joaat("av_wolves_eat_deer"), 8192, 57, 49, 3);
		func_119(241, joaat("av_wolves_howling"), 20, 57, 50, 3);
		func_119(243, joaat("av_wolves_playing"), 8192, 77, 50, 3);
		func_119(244, joaat("av_wolves_playing"), 8192, 77, 50, 3);
		func_119(245, joaat("av_wolves_playing"), 8192, 77, 50, 3);
		func_119(246, joaat("av_wolves_alarmed"), 8192, 77, 50, 3);
		func_120(34);
		func_120(2);
		func_120(3);
		func_120(5);
		func_120(47);
		func_120(10);
		func_120(15);
		func_120(16);
		func_120(17);
		func_120(18);
		func_120(19);
		func_120(20);
		func_120(27);
		func_120(29);
	
		if (!func_121(159))
			if (func_122(joaat("carolina_parakeets")) != 25)
				func_123(159);
	}

	return 1;
}

int func_21() // Position - 0x9D32 Hash - 0x6730991A ^0x2B27CE97
{
	if (func_115() != -1)
		return 0;

	if (SPACTIONPROXY::_SPACTIONPROXY_MANAGER_IS_READY())
	{
		Global_1955825 = 2;
		func_124(&(Global_1955825.f_1));
		Global_1955825.f_4 = 0;
		return 1;
	}

	if (SPACTIONPROXY::_SPACTIONPROXY_MANAGER_IS_FAILED())
	{
		Global_1955825 = 3;
		func_124(&(Global_1955825.f_1));
		return 1;
	}

	if (Global_1955825 == 0)
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_START_MANAGER())
		{
			Global_1955825 = 3;
			return 1;
		}
	
		Global_1955825 = 1;
		func_124(&(Global_1955825.f_1));
		return 0;
	}

	if (Global_1955825 == 1)
	{
		if (!func_125(&(Global_1955825.f_1)))
		{
			func_126(&(Global_1955825.f_1), false);
		}
		else if (func_127(&(Global_1955825.f_1)) > 4000)
		{
			Global_1955825 = 3;
			func_124(&(Global_1955825.f_1));
			return 1;
		}
	}

	return 0;
}

int func_22() // Position - 0x9DF5 Hash - 0xD8CAF3E4 ^0xD8CAF3E4
{
	if (!Global_40)
		if (!func_128())
			return 0;

	return 1;
}

int func_23(var uParam0) // Position - 0x9E11 Hash - 0x8B876B09 ^0x8EA11BA0
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(*uParam0))
	{
		*uParam0 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(joaat("weather_groups"));
		return 0;
	}

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(*uParam0))
		return 0;

	func_129(uParam0);
	DATAFILE::_PARSEDDATA_UNLOAD_FILE(*uParam0);
	*uParam0 = 0;
	return 1;
}

void func_24(int iParam0, int iParam1) // Position - 0x9E55 Hash - 0x68EB7940 ^0x8EF79B5D
{
	uLocal_60[iParam0 /*3*/] = iParam1;
	uLocal_60[iParam0 /*3*/].f_1 = 0;
	return;
}

void func_25() // Position - 0x9E6E Hash - 0x53D1236C ^0x53D1236C
{
	if (func_115() != -1)
		return;

	func_130();
	func_131();
	func_132();
	func_133();
	func_134();
	func_135();
	func_136();
	return;
}

void func_26(BOOL bParam0) // Position - 0x9E9D Hash - 0x88AD5D ^0x88AD5D
{
	Global_21 = Global_21 || bParam0;
	return;
}

int func_27() // Position - 0x9EAE Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_28(var uParam0) // Position - 0x9EB7 Hash - 0x2DF5A077 ^0x2DF5A077
{
	return 1;
}

void func_29(eStackSize essParam0, int iParam1, char* sParam2, BOOL bParam3, BOOL bParam4) // Position - 0x9EC0 Hash - 0x19EB65D1 ^0x76A62A61
{
	if (!func_137(essParam0))
		return;

	if (func_138(essParam0) == 0)
		Global_40.f_4942[essParam0 /*60*/].f_6 = iParam1;

	func_139(essParam0, 20496, true);
	Global_1360165[essParam0 /*1157*/].f_70.f_1 = 0;

	if (bParam3)
		func_140(essParam0, 1073741824, true);

	if (bParam4)
		func_141(essParam0, true, true);

	func_143(essParam0, func_142(essParam0, 3, true));
	return;
}

void func_30(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x9F31 Hash - 0x653C1DA6 ^0xC86370A
{
	if (iParam0 <= -1 || iParam0 >= 27)
		return;

	Global_1360165[iParam0 /*1157*/].f_143 = iParam1;
	Global_1360165[iParam0 /*1157*/].f_143.f_1 = iParam2;
	Global_1360165[iParam0 /*1157*/].f_143.f_2 = iParam3;
	return;
}

BOOL func_31() // Position - 0x9F79 Hash - 0xC3936F48 ^0xC3936F48
{
	BOOL num;

	num = 1;
	func_144();
	return num;
}

BOOL func_32() // Position - 0x9F8A Hash - 0x11DC3931 ^0x1EDD7D06
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

void func_33() // Position - 0x9F9B Hash - 0x68B89BBC ^0xCB8A6E62
{
	PERSCHAR::_0x70605812ABC9FF0F(joaat("MFR_HORSES_PERSCHAR_1"), joaat("animal_horse_corral_pc_content_locked"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("SCM_PERSCHAR_HORSES"), joaat("animal_horse_corral_pc_content_locked"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("SDN_Horse_1"), joaat("animal_horse_corral_pc_content_locked"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("BRA_HORSES_01"), joaat("animal_horse_corral_pc_content_locked"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("AMD_HORSES_1"), joaat("animal_horse_corral_pc_content_locked"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("EMR_HORSES_PERSCHAR_1"), joaat("animal_horse_corral_pc_content_locked"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("TBL_RANCH_HORSES"), joaat("animal_horse_corral_scaled_pc_content_locked"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("ASB_HORSES_01"), joaat("animal_horse_corral_pc_content_locked"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("BLW_HORSES"), joaat("animal_horse_corral_pc_content_locked"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("PHR_HORSES_1"), joaat("animal_horse_corral_pc_content_locked"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("WAP_HORSE_1"), joaat("animal_horse_corral_pc_content_locked"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("WAP_HORSE_2"), joaat("animal_horse_corral_pc_content_locked"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("WAP_HORSE_3"), joaat("animal_horse_corral_pc_content_locked"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("STR_PERSCHAR_HORSES"), joaat("animal_horse_corral_pc_content_locked"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("RID_HORSES_PERSCHAR_1"), joaat("animal_horse_corral_pc_content_locked"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("RID_HORSES_PERSCHAR_2"), joaat("animal_horse_corral_pc_content_locked"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("VHT_HORSE_1"), joaat("animal_horse_corral_pc_content_locked"));
	PERSCHAR::_0x70605812ABC9FF0F(joaat("VAL_LIVERY_HORSE"), joaat("animal_horse_corral_pc_content_locked"));
	return;
}

void func_34(int iParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0xA09F Hash - 0xA10452D3 ^0xA10452D3
{
	int num;
	int num2;
	Hash perscharModelName;

	if (func_115() != -1)
		return;

	if (!func_145(iParam0))
		return;

	if (iParam2 != -1)
	{
		func_146(iParam2, &num, &num2, false, false);
	
		if (iParam0 < num || iParam0 > num2 && !func_147(iParam3, 4194304))
			return;
	}

	Global_1895087[iParam0 /*3*/] = hParam1;
	Global_1895087[iParam0 /*3*/].f_1 = 0;
	Global_1895087[iParam0 /*3*/].f_2 = 0;
	func_148(iParam0, 2 | iParam3);
	func_149(iParam0, 137);
	perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(hParam1);

	if (perscharModelName != 0)
		PED::SET_PED_MODEL_IS_SUPPRESSED(perscharModelName, true);

	return;
}

void func_35() // Position - 0xA13F Hash - 0x5C27618A ^0x5C27618A
{
	func_150();
	func_151();
	func_152();
	func_153();
	func_154();
	func_155();
	func_156();
	func_157();
	func_158();
	func_159();
	return;
}

void func_36() // Position - 0xA16F Hash - 0xEE7A0DF9 ^0x8DE101E1
{
	func_160(0);
	func_161();
	func_162(8, 0, 0, 5, 1, 1899);
	func_163(joaat("Player_Zero"));
	func_164(0);
	func_165(-75, 100);
	func_166(0, 90);
	func_166(1, 90);
	func_166(2, 90);
	func_167();
	func_168(7, true);
	func_169(178615350);
	func_170(0, 0);
	func_171(0);
	func_172(joaat("azl_camp_colter"), true, true);
	func_173(27, 0.3f, 0f);
	func_173(11, 0f, 0f);
	func_173(1, 0f, 0f);
	func_173(19, -1082130432, 0f);
	func_173(0, -1082130432, 0f);
	func_173(5, -1082130432, 0f);
	func_173(3, -1082130432, 0f);
	func_173(2, -1082130432, 0f);
	func_173(9, -1082130432, 0f);
	func_173(17, -1082130432, 0f);
	func_174(45);
	func_174(47);
	func_174(55);
	func_174(33);
	func_174(34);
	func_174(35);
	func_174(36);
	func_174(37);
	func_174(38);
	func_174(39);
	func_174(40);
	func_174(41);
	func_174(42);
	func_174(43);
	func_174(52);
	func_174(53);
	func_174(54);
	func_174(18);
	func_174(19);
	func_174(20);
	func_174(21);
	func_174(22);
	func_174(56);
	func_175(0);
	func_176(0);
	func_176(1);
	func_176(2);
	func_176(3);
	func_176(4);
	func_176(5);
	func_176(6);
	func_176(7);
	func_176(13);
	func_176(14);
	func_176(15);
	func_176(16);
	func_176(17);
	func_176(18);
	func_176(19);
	func_176(20);
	func_176(21);
	func_176(22);
	func_176(9);
	func_177(14, joaat("cs_jackmarston"));
	func_178(4, joaat("a_c_horse_gang_uncle"));
	func_177(12, joaat("a_c_dogcatahoulacur_01"));
	func_179(12, -1394723994);
	func_180(4);
	func_180(20);
	func_180(11);
	func_180(5);
	func_180(10);
	func_181(74, joaat("u_m_m_rhdgenstoreowner_01"));
	func_182(13, joaat("TSTAG_ENDLESS_SUMMER"));
	func_183(13, joaat("TSTAG_FLOW_PRE_BOUNTY_1"), -518918701, -1);
	func_184();
	func_185(false);
	func_186(38, true);
	func_186(35, true);
	func_186(32, true);
	func_187(4, true, false);
	func_187(12, true, false);
	func_187(13, true, false);
	func_187(14, true, false);
	func_187(15, true, false);
	func_187(16, true, false);
	func_188(945);
	func_189(joaat("a_c_wolf"));
	func_189(joaat("a_c_wolf_medium"));
	func_174(1);
	func_190(11);
	func_191(joaat("weapon_revolver_cattleman"), true, true, true, -1);
	func_191(joaat("weapon_melee_davy_lantern"), true, true, true, -1);
	func_191(joaat("weapon_melee_knife"), true, true, true, -1);
	func_192(1, false);
	func_193(3, 1, -1, 0, true);
	func_193(20, 1, -1, 0, true);
	func_194(14);
	func_194(207);
	func_194(227);
	func_194(228);
	func_194(237);
	func_194(238);
	func_194(239);
	func_194(240);
	func_194(241);
	func_194(242);
	func_194(243);
	func_194(244);
	func_194(245);
	func_194(246);
	func_194(247);
	func_195(10);
	func_195(11);
	func_196(0, true);
	func_196(2, true);
	func_196(1, true);
	func_196(5, true);
	func_196(4, true);
	func_196(3, true);
	func_197(0);
	func_198(356365161);
	func_198(38162571);
	func_198(1485195808);
	func_198(-1170496998);
	func_193(11, 1, -1, 0, true);
	func_176(11);
	func_176(2);
	func_199(11);
	func_171(1);
	func_200(6);
	func_169(178615350);
	func_168(7, true);
	func_190(23);
	func_190(31);
	func_190(15);
	func_190(18);
	func_190(21);
	func_174(19);
	func_174(20);
	func_174(22);
	func_174(11);
	func_201(-2147483648);
	func_202(joaat("kit_wardrobe"), 1);
	func_202(joaat("weapon_kit_binoculars"), 1);
	func_202(joaat("upgrade_upg_cooking_spit"), 1);
	func_202(joaat("kit_bandana"), 1);
	func_202(joaat("kit_mask_grey_cloth"), 1);
	func_202(joaat("document_player_journal"), 1);
	func_202(1164374808, 1);
	func_202(joaat("consumable_medicine_used"), 1);
	func_202(joaat("consumable_medicine_used"), 1);
	func_202(joaat("CLOTHING_ITEM_SATCHEL_PZ_000"), 1);
	func_202(joaat("CLOTHING_ITEM_GUNBELT_PZERO_000"), 1);
	func_202(-1992544048, 1);
	func_202(1796687236, 1);
	func_202(166243423, 1);
	func_203(joaat("whiteout"), 0);
	func_204();
	func_205();
	func_197(1);
	func_198(753127042);
	func_206(-2147483648);
	func_191(joaat("weapon_shotgun_sawedoff"), true, true, true, -1);
	func_191(joaat("weapon_repeater_carbine"), true, false, false, -1);
	func_190(19);
	func_190(22);
	func_174(20);
	func_180(1);
	func_207(1);
	func_179(1, 404503428);
	func_208(joaat("a_c_wolf"));
	func_208(joaat("a_c_wolf_medium"));
	func_209(joaat("sp_chal_band_root"));
	func_209(joaat("sp_chal_expl_root"));
	func_209(joaat("sp_chal_gamb_root"));
	func_209(joaat("sp_chal_herb_root"));
	func_209(joaat("sp_chal_horse_root"));
	func_209(joaat("sp_chal_hunt_root"));
	func_209(joaat("sp_chal_shot_root"));
	func_209(joaat("sp_chal_weap_root"));
	func_210(26);
	func_210(11);
	func_211(1, 0);
	func_211(0, 0);
	func_198(-2038424081);
	func_197(3);
	func_198(1884271742);
	func_191(joaat("weapon_thrown_dynamite"), true, true, true, -1);
	func_212(200);
	func_200(2);
	func_213(0);
	func_213(1);
	func_213(2);
	func_213(3);
	func_213(6);
	func_213(7);
	func_213(5);
	func_213(4);
	func_213(8);
	func_213(9);
	func_213(10);
	func_213(11);
	func_203(joaat("SUNNY"), 0);
	func_210(1);
	func_214(36, true);
	func_215();
	func_216(0);
	return;
}

void func_37() // Position - 0xA77F Hash - 0x5289D650 ^0x5289D650
{
	func_160(1);
	func_161();
	func_171(2);
	func_197(4);
	func_192(2, true);
	func_192(3, true);
	func_192(7, true);
	func_217(0, 0, 0, 14, -1, -1);
	func_218(joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"), 8, joaat("CSTP_NEXT_VISIT"), joaat("CSTAG_PRIORITY_CRITICAL"));
	func_218(joaat("CSTAG_FLOW_MUD1_POST_EVENING"), 12, joaat("CSTP_NEXT_VISIT"), -469960592);
	func_219(0);
	func_220(0);
	func_202(1661121390, 1);
	func_202(1560492757, 1);
	func_202(624063935, 1);
	func_202(-1826731591, 1);
	func_202(2119049229, 1);
	func_202(1352942778, 1);
	func_202(1964379549, 1);
	func_202(1201189539, 1);
	func_202(333909087, 1);
	func_202(joaat("clothing_hl_player_boot_020_1"), 1);
	func_202(joaat("clothing_hl_player_coat_021_2"), 1);
	func_202(891052755, 1);
	func_202(-1391892422, 1);
	func_202(962344255, 1);
	func_202(1160643979, 1);
	func_168(6, true);
	func_191(joaat("weapon_pistol_volcanic"), false, true, false, -1);
	func_191(joaat("weapon_rifle_springfield"), false, true, false, -1);
	func_191(joaat("weapon_rifle_varmint"), false, true, false, 526);
	func_221(1164374808, 1);
	func_221(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"), 1);
	func_169(-268604689);
	func_173(27, -1082130432, -1082130432);
	func_173(11, 0.1f, -1082130432);
	func_222(48);
	func_170(1, 0);
	func_171(1);
	func_172(joaat("azl_camp_colter"), false, true);
	func_172(joaat("azl_camp_horseshoe_overlook"), true, true);
	func_223(711);
	func_224(1230);
	func_225(1);
	func_225(5);
	func_225(20);
	func_225(4);
	func_190(33);
	func_190(34);
	func_190(35);
	func_190(37);
	func_190(38);
	func_190(39);
	func_190(40);
	func_190(41);
	func_190(43);
	func_190(26);
	func_190(11);
	func_190(16);
	func_190(17);
	func_226(194, false);
	func_198(54073871);
	func_198(-748969569);
	func_227(-1170496998);
	func_207(0);
	func_207(1);
	func_207(4);
	func_207(5);
	func_207(13);
	func_207(14);
	func_207(15);
	func_207(16);
	func_207(17);
	func_207(18);
	func_207(19);
	func_207(20);
	func_207(22);
	func_207(11);
	func_192(6, true);
	func_192(9, true);
	func_192(21, true);
	func_198(280705402);
	func_203(joaat("Misty"), 0);
	func_228(0);
	func_228(1);
	func_228(9);
	func_228(5);
	func_228(6);
	func_190(12);
	func_195(207);
	func_195(227);
	func_195(228);
	func_195(237);
	func_195(238);
	func_195(239);
	func_195(241);
	func_195(240);
	func_195(242);
	func_195(243);
	func_195(244);
	func_195(245);
	func_195(246);
	func_195(247);
	func_229(65);
	func_229(10);
	func_229(12);
	func_229(24);
	func_229(31);
	func_229(9);
	func_230(111, 1);
	func_230(66, 1);
	func_231(0, true);
	func_232(4);
	func_233(1);
	func_233(0);
	func_233(3);
	func_210(5);
	func_234(101);
	func_234(135);
	func_234(39);
	func_234(49);
	func_234(146);
	func_234(143);
	func_234(81);
	func_210(3);
	func_210(31);
	func_210(30);
	func_182(13, joaat("TSTAG_LOCKDOWN_SALOON"));
	func_183(13, 623901469, 820723243, -1);
	func_235(5);
	func_192(6, false);
	func_192(9, false);
	func_207(3);
	func_228(3);
	func_182(13, 623901469);
	func_183(13, joaat("TSTAG_LOCKDOWN_SALOON"), -2120502580, 48);
	func_193(3, 2, 6, 0, true);
	func_200(1);
	func_190(29);
	func_212(100);
	func_210(23);
	func_210(25);
	func_236(2, 0, 0);
	func_198(-736853952);
	func_235(13);
	func_227(-736853952);
	func_191(joaat("weapon_thrown_tomahawk"), true, true, true, 523);
	func_176(8);
	func_228(8);
	func_207(2);
	func_207(7);
	func_228(2);
	func_228(7);
	func_176(2);
	func_176(7);
	func_237(8, 0);
	func_211(100, 0);
	func_211(9, 0);
	func_211(5, 0);
	func_211(11, 0);
	func_183(13, -1132827806, 820723243, -1);
	func_207(5);
	func_235(14);
	func_182(13, -1132827806);
	func_193(11, 2, -1, 0, true);
	func_193(0, 2, 0, 1, true);
	func_193(1, 1, 0, 1, true);
	func_193(18, 1, 0, 3, true);
	func_230(111, 4);
	func_230(66, 4);
	func_220(2);
	func_191(joaat("weapon_sniperrifle_rollingblock"), true, true, false, -1);
	func_207(1);
	func_228(1);
	func_212(100);
	func_238(76, true, 1720);
	func_237(6, 0);
	func_211(7, 0);
	func_210(6);
	func_211(34, 0);
	func_236(1, 0, 0);
	func_211(28, 0);
	func_235(24);
	func_193(20, 4, 0, 2, true);
	func_193(3, 4, 0, 2, true);
	func_193(9, 4, 0, 2, true);
	func_237(35, 0);
	func_238(76, true, 1720);
	func_198(1010885152);
	func_198(-1558439474);
	func_215();
	func_216(1);
	return;
}

void func_38() // Position - 0xAD0F Hash - 0x85B94E50 ^0xD6E183CB
{
	func_160(2);
	func_161();
	func_182(13, joaat("TSTAG_LOCKDOWN_SALOON"));
	func_183(13, -1751068532, 820723243, -1);
	func_235(9);
	func_182(13, -1751068532);
	func_239(7, 7, -2);
	func_240(4, 5);
	func_241(7, true);
	func_207(9);
	func_193(9, 4, 0, 1, true);
	func_210(24);
	func_230(39, 1);
	func_235(11);
	func_230(39, 4);
	func_227(-1524512402);
	func_198(-1124061431);
	func_238(26, true, 1320);
	func_242(1, 0);
	func_191(joaat("weapon_revolver_schofield"), false, true, false, 525);
	func_202(joaat("upgrade_offhand_holster"), 1);
	func_212(55);
	func_237(4, 0);
	func_236(12, 0, 0);
	func_211(103, 0);
	func_243(5, 1);
	func_244(-2, 0);
	func_241(12, true);
	func_235(12);
	func_191(joaat("weapon_repeater_winchester"), true, true, false, -1);
	func_212(100);
	func_207(6);
	func_198(1846061697);
	func_198(-1524512402);
	func_198(1926308480);
	func_193(6, 4, 0, 2, true);
	func_193(0, 4, 0, 1, true);
	func_237(25, 0);
	func_245(1, 1);
	func_215();
	func_216(2);
	return;
}

void func_39() // Position - 0xAE58 Hash - 0x1D001DB3 ^0x1D001DB3
{
	func_160(3);
	func_161();
	func_235(6);
	func_193(20, 0, -1, 0, true);
	func_210(4);
	func_212(100);
	func_246(2);
	func_200(5);
	func_190(8);
	func_211(8, 0);
	func_211(15, 0);
	func_234(112);
	func_247(112);
	func_192(1, false);
	func_237(103, 0);
	func_234(113);
	func_247(113);
	func_207(1);
	func_234(114);
	func_247(114);
	func_237(16, 0);
	func_248(596);
	func_192(8, true);
	func_236(1, 0, 0);
	func_235(25);
	func_191(joaat("WEAPON_SHOTGUN_PUMP"), false, true, false, 523);
	func_190(2);
	func_207(8);
	func_192(1, false);
	func_236(1, 0, 0);
	func_237(9, 0);
	func_220(1);
	func_215();
	func_216(3);
	return;
}

void func_40() // Position - 0xAF35 Hash - 0x7FBFD108 ^0xE6AFD579
{
	func_160(4);
	func_161();
	func_241(5, true);
	func_239(9, -2, 6);
	func_249(7);
	func_236(2, 0, 0);
	func_241(6, true);
	func_182(13, joaat("TSTAG_FLOW_PRE_BOUNTY_1"));
	func_235(7);
	func_226(114, false);
	func_200(0);
	func_234(11);
	func_234(12);
	func_234(13);
	func_234(14);
	func_211(24, 0);
	func_234(15);
	func_241(32, true);
	func_249(7);
	func_215();
	func_216(4);
	return;
}

void func_41() // Position - 0xAFBE Hash - 0xEAE485C4 ^0xEAE485C4
{
	func_160(5);
	func_161();
	func_192(21, false);
	func_235(10);
	func_207(21);
	func_193(21, 1, 0, 3, true);
	func_237(2, 0);
	func_234(38);
	func_212(55);
	func_233(2);
	func_198(-1014145132);
	func_239(22, -2, -1);
	func_243(5, 1);
	func_237(31, 0);
	func_215();
	func_216(5);
	return;
}

void func_42() // Position - 0xB02C Hash - 0x7814ADEE ^0x8A2FD4D0
{
	func_160(29);
	func_161();
	func_211(13, 0);
	func_234(97);
	func_247(97);
	func_250(61, 2, 12, 10);
	func_251(62, 10, -2);
	func_240(25, 9);
	func_241(10, true);
	func_237(15, 0);
	func_234(98);
	func_247(98);
	func_198(-1060078174);
	func_252(98, 0, 27, -2);
	func_235(8);
	func_241(27, true);
	func_253(98);
	func_249(8);
	func_237(11, 0);
	func_211(40, 0);
	func_234(99);
	func_247(99);
	func_235(36);
	func_241(25, true);
	func_253(99);
	func_249(36);
	func_198(-1060078174);
	func_215();
	func_216(29);
	return;
}

void func_43() // Position - 0xB0FA Hash - 0x17DCAD0A ^0x5A1B72B7
{
	func_160(31);
	func_161();
	func_254(joaat("completed"), joaat("missions_chp2"), 1, -1);
	func_235(15);
	func_202(joaat("kit_horse_brush"), 1);
	func_193(5, 1, 0, 1, true);
	func_237(37, 0);
	func_190(30);
	func_190(42);
	func_210(27);
	func_211(47, 0);
	func_254(joaat("completed"), joaat("missions_chp3"), 2, -1);
	func_234(57);
	func_215();
	func_216(31);
	return;
}

void func_44() // Position - 0xB175 Hash - 0xB0AA8D10 ^0x1F707199
{
	func_160(6);
	func_161();
	func_164(1);
	func_198(-1764522338);
	func_235(16);
	func_190(44);
	func_198(-1764522338);
	func_207(5);
	func_193(0, 4, -1, 3, true);
	func_193(5, 4, -1, 3, true);
	func_234(89);
	func_234(95);
	func_234(138);
	func_207(18);
	func_255(5);
	func_210(28);
	func_210(18);
	func_192(0, false);
	func_192(3, false);
	func_236(3, 0, 0);
	func_235(17);
	func_245(0, 1);
	func_245(1, 1);
	func_238(76, false, 350);
	func_234(11);
	func_234(12);
	func_234(14);
	func_234(13);
	func_207(0);
	func_207(3);
	func_256(23);
	func_193(0, 4, 0, 1, true);
	func_193(3, 4, 0, 1, true);
	func_212(100);
	func_222(48);
	func_193(3, 4, 12, 0, true);
	func_237(47, 0);
	func_237(23, 0);
	func_237(28, 0);
	func_230(64, 1);
	func_211(29, 0);
	func_241(2, true);
	func_239(20, -2, 3);
	func_249(19);
	func_236(1, 0, 0);
	func_241(3, true);
	func_235(19);
	func_198(-2058120606);
	func_212(100);
	func_207(1);
	func_207(2);
	func_211(30, 0);
	func_211(27, 0);
	func_211(18, 0);
	func_211(20, 0);
	func_198(-1053549743);
	func_253(95);
	func_235(21);
	func_174(44);
	func_227(-853383233);
	func_227(-1053549743);
	func_238(105, true, 1720);
	func_238(95, true, 990);
	func_212(100);
	func_253(138);
	func_237(32, 0);
	func_257(8);
	func_198(1488286867);
	func_226(567, false);
	func_215();
	func_216(6);
	return;
}

void func_45() // Position - 0xB35D Hash - 0x3C641DEB ^0x2F22E16E
{
	func_160(7);
	func_161();
	func_164(2);
	func_192(5, true);
	func_192(1, true);
	func_182(8, joaat("TSTAG_LOCKDOWN_SALOON"));
	func_235(18);
	func_183(8, joaat("TSTAG_LOCKDOWN_SALOON"), 977356591, 48);
	func_212(100);
	func_192(2, false);
	func_192(8, false);
	func_237(29, 0);
	func_210(8);
	func_198(-1145519186);
	func_258(21);
	func_244(0, 0);
	func_241(4, true);
	func_249(20);
	func_236(2, 0, 0);
	func_241(0, true);
	func_235(20);
	func_207(8);
	func_207(5);
	func_182(8, joaat("TSTAG_LOCKDOWN_SALOON"));
	func_193(8, 4, 0, 1, true);
	func_212(100);
	func_198(1703426636);
	func_191(joaat("weapon_thrown_molotov"), true, true, true, 523);
	func_239(19, 1, -2);
	func_240(6, 2);
	func_241(1, true);
	func_237(30, 0);
	func_237(22, 0);
	func_237(24, 0);
	func_211(32, 0);
	func_192(14, false);
	func_192(19, false);
	func_192(15, false);
	func_192(22, false);
	func_192(17, false);
	func_192(4, false);
	func_192(21, false);
	func_192(20, false);
	func_192(11, false);
	func_227(1944170089);
	func_235(26);
	func_207(19);
	func_207(15);
	func_207(22);
	func_207(17);
	func_207(4);
	func_207(21);
	func_207(20);
	func_207(11);
	func_212(100);
	func_198(473295046);
	func_198(1944170089);
	func_198(-741351766);
	func_183(3, -586199837, 820723243, -1);
	func_217(0, 0, 0, 2, -1, -1);
	func_237(33, 0);
	func_215();
	func_216(7);
	return;
}

void func_46() // Position - 0xB52D Hash - 0xB3BD9F96 ^0xDB40E11E
{
	func_160(8);
	func_161();
	func_235(22);
	func_220(3);
	func_191(joaat("weapon_sniperrifle_rollingblock_exotic"), true, false, false, -1);
	func_259(2, 7, 4);
	func_237(26, 0);
	func_207(23);
	func_211(31, 0);
	func_234(37);
	func_247(37);
	func_193(23, 4, -1, 0, true);
	func_212(100);
	func_200(3);
	func_237(27, 0);
	func_215();
	func_216(8);
	return;
}

void func_47() // Position - 0xB5A4 Hash - 0x15846FE ^0x3621076F
{
	func_160(10);
	func_161();
	func_164(3);
	func_234(106);
	func_234(107);
	func_235(27);
	func_207(18);
	func_253(106);
	func_253(107);
	func_234(77);
	func_220(4);
	func_191(joaat("weapon_pistol_semiauto"), false, true, false, 523);
	func_234(30);
	func_171(1);
	func_210(9);
	func_237(51, 0);
	func_234(53);
	func_234(127);
	func_237(44, 0);
	func_183(9, -529686691, -2120502580, -1);
	func_235(28);
	func_192(10, false);
	func_192(3, false);
	func_182(9, -529686691);
	func_212(100);
	func_198(-468693731);
	func_210(12);
	func_207(14);
	func_237(40, 0);
	func_211(54, 0);
	func_211(45, 0);
	func_164(4);
	func_192(0, false);
	func_192(9, false);
	func_235(29);
	func_207(0);
	func_207(9);
	func_190(3);
	func_198(-360036154);
	func_212(100);
	func_220(5);
	func_236(1, 0, 0);
	func_235(30);
	func_212(100);
	func_236(1, 0, 0);
	func_222(1);
	func_235(31);
	func_212(100);
	func_237(56, 0);
	func_215();
	func_216(10);
	return;
}

void func_48() // Position - 0xB6FB Hash - 0x986A18ED ^0x986A18ED
{
	func_160(12);
	func_161();
	func_235(33);
	func_207(3);
	func_192(23, false);
	func_192(0, false);
	func_237(54, 0);
	func_237(50, 0);
	func_237(43, 0);
	func_171(1);
	func_234(43);
	func_234(109);
	func_235(34);
	func_212(100);
	func_191(joaat("weapon_shotgun_semiauto"), false, true, false, 523);
	func_234(110);
	func_234(56);
	func_237(52, 0);
	func_211(56, 0);
	func_211(49, 0);
	func_192(14, false);
	func_192(15, false);
	func_192(16, false);
	func_192(17, false);
	func_192(19, false);
	func_192(20, false);
	func_192(21, false);
	func_192(22, false);
	func_192(11, false);
	func_235(37);
	func_253(139);
	func_212(100);
	func_227(-468693731);
	func_227(-1825294305);
	func_257(5);
	func_257(9);
	func_198(8924991);
	func_198(665676602);
	func_192(7, false);
	func_192(1, false);
	func_192(4, false);
	func_192(13, false);
	func_192(18, false);
	func_192(12, false);
	func_217(0, 0, 0, 4, -1, -1);
	func_210(13);
	func_215();
	func_216(12);
	return;
}

void func_49() // Position - 0xB847 Hash - 0x5040EF8B ^0x5040EF8B
{
	func_160(9);
	func_161();
	func_192(22, false);
	func_192(19, false);
	func_235(35);
	func_207(22);
	func_207(19);
	func_237(46, 0);
	func_215();
	func_216(9);
	return;
}

void func_50() // Position - 0xB88A Hash - 0x8CAD00A1 ^0xA57DB07A
{
	func_160(11);
	func_161();
	func_235(2);
	func_190(32);
	func_190(14);
	func_191(joaat("weapon_repeater_carbine"), true, true, false, -1);
	func_191(joaat("WEAPON_LASSO"), true, true, true, -1);
	func_176(10);
	func_190(1);
	func_190(20);
	func_237(0, 0);
	func_211(22, 0);
	func_211(26, 0);
	func_211(35, 0);
	func_235(23);
	func_217(0, 0, 0, 7, -1, -1);
	func_198(-464836488);
	func_237(18, 0);
	func_211(46, 0);
	func_211(43, 0);
	func_236(2, 0, 0);
	func_207(0);
	func_235(32);
	func_192(0, false);
	func_257(10);
	func_198(651395116);
	func_260(2, 3);
	func_237(45, 0);
	func_237(42, 0);
	func_211(79, 0);
	func_192(0, false);
	func_235(47);
	func_190(5);
	func_202(joaat("weapon_kit_binoculars"), 1);
	func_191(joaat("weapon_repeater_henry"), false, true, false, -1);
	func_191(joaat("weapon_sniperrifle_carcano"), false, true, false, 526);
	func_237(72, 0);
	func_237(80, 0);
	func_215();
	func_216(11);
	return;
}

void func_51() // Position - 0xB9B2 Hash - 0x6706C0F6 ^0xFEFBA8FB
{
	func_160(13);
	func_161();
	func_164(5);
	func_261(-50);
	func_165(-100, 75);
	func_169(1593315648);
	func_198(373691918);
	func_198(2019386373);
	func_214(9, false);
	func_262(true);
	func_185(true);
	func_170(4, 0);
	func_171(1);
	func_172(joaat("azl_camp_shady_belle"), false, true);
	func_172(joaat("azl_camp_guarma"), true, true);
	func_173(27, 0.1f, 0.1f);
	func_263(true);
	func_168(10, true);
	func_197(38);
	func_164(6);
	func_207(6);
	func_207(3);
	func_230(6, 1);
	func_192(0, false);
	func_192(2, false);
	func_197(39);
	func_264(5, true);
	func_186(57, true);
	func_186(61, true);
	func_192(18, true);
	func_192(3, true);
	func_168(11, true);
	func_202(joaat("weapon_rifle_boltaction"), 1);
	func_202(joaat("weapon_revolver_doubleaction"), 1);
	func_202(joaat("weapon_melee_knife"), 1);
	func_202(joaat("weapon_kit_binoculars"), 1);
	func_202(joaat("weapon_kit_camera"), 1);
	func_210(14);
	func_235(40);
	func_186(57, true);
	func_186(61, true);
	func_207(2);
	func_237(58, 0);
	func_211(57, 0);
	func_164(7);
	func_197(43);
	func_198(2109952320);
	func_198(-1077783786);
	func_227(2024121624);
	func_198(1691618738);
	func_230(6, 4);
	func_217(0, 0, 0, 4, -1, -1);
	func_210(15);
	func_198(52706132);
	func_198(-502324015);
	func_198(440043364);
	func_227(-360036154);
	func_190(6);
	func_264(5, false);
	func_238(105, false, 350);
	func_238(5, false, 350);
	func_238(78, false, 350);
	func_238(26, false, 350);
	func_238(92, false, 350);
	func_238(65, false, 350);
	func_238(69, false, 350);
	func_238(93, false, 350);
	func_238(95, false, 350);
	func_238(3, false, 350);
	func_238(82, false, 350);
	func_238(56, false, 350);
	func_238(22, false, 350);
	func_238(37, false, 350);
	func_238(110, false, 350);
	func_238(39, false, 350);
	func_237(60, 0);
	func_215();
	func_216(13);
	return;
}

void func_52() // Position - 0xBC19 Hash - 0x54875D11 ^0x8C690E7E
{
	func_160(14);
	func_161();
	func_235(41);
	func_211(58, 0);
	func_197(42);
	func_227(1177464213);
	func_237(57, 0);
	func_215();
	func_216(14);
	return;
}

void func_53() // Position - 0xBC58 Hash - 0x6C9A7A53 ^0x768577EF
{
	func_160(15);
	func_161();
	func_192(0, false);
	func_192(6, false);
	func_192(2, false);
	func_192(3, false);
	func_192(18, false);
	func_192(12, false);
	func_227(373691918);
	func_265(true);
	func_185(false);
	func_169(-922193456);
	func_179(11, -2051275045);
	func_222(48);
	func_170(5, 0);
	func_171(1);
	func_172(joaat("azl_camp_guarma"), false, true);
	func_172(joaat("azl_camp_lakay"), true, true);
	func_173(27, -1082130432, -1082130432);
	func_164(8);
	func_198(-879507474);
	func_211(61, 0);
	func_204();
	func_205();
	func_197(44);
	func_190(52);
	func_190(4);
	func_203(0, 0);
	func_168(9, true);
	func_227(-879507474);
	func_258(83);
	func_220(6);
	func_198(282809459);
	func_207(7);
	func_207(4);
	func_207(13);
	func_207(14);
	func_207(15);
	func_207(17);
	func_207(18);
	func_207(19);
	func_207(20);
	func_207(21);
	func_207(22);
	func_207(11);
	func_207(0);
	func_207(6);
	func_207(2);
	func_207(3);
	func_207(12);
	func_263(false);
	func_228(11);
	func_234(121);
	func_214(9, true);
	func_198(-524145696);
	func_237(69, 0);
	func_237(62, 0);
	func_235(45);
	func_186(32, true);
	func_192(13, false);
	func_192(11, false);
	func_236(1, 0, 0);
	func_211(78, 0);
	func_235(46);
	func_192(0, false);
	func_192(6, false);
	func_187(0, true, true);
	func_187(2, true, true);
	func_187(10, true, true);
	func_207(13);
	func_207(11);
	func_192(3, false);
	func_186(32, true);
	func_220(7);
	func_191(joaat("weapon_shotgun_repeating"), false, true, false, 523);
	func_207(1);
	func_179(1, -922193456);
	func_237(65, 0);
	func_266(0, 8);
	func_237(76, 0);
	func_215();
	func_216(15);
	return;
}

void func_54() // Position - 0xBE82 Hash - 0x316C343 ^0x6F202C4D
{
	func_160(17);
	func_161();
	func_192(7, false);
	func_235(50);
	func_190(53);
	func_198(2091701359);
	func_210(16);
	func_237(79, 0);
	func_211(80, 0);
	func_192(0, false);
	func_235(51);
	func_190(54);
	func_198(-389056691);
	func_198(1485494263);
	func_211(75, 0);
	func_207(0);
	func_235(52);
	func_198(-1311865656);
	func_186(35, true);
	func_220(9);
	func_190(56);
	func_237(66, 0);
	func_215();
	func_216(17);
	return;
}

void func_55() // Position - 0xBF26 Hash - 0x5FE32FFC ^0x266A0DBF
{
	func_160(16);
	func_161();
	func_198(-622554983);
	func_198(2024383613);
	func_267(50, 0, 33, -2);
	func_235(48);
	func_252(108, 0, 33, -2);
	func_234(108);
	func_247(108);
	func_241(33, true);
	func_267(50, 0, 34, -2);
	func_252(108, 0, -2, 35);
	func_241(34, true);
	func_236(6, 0, 0);
	func_241(35, true);
	func_192(0, false);
	func_192(6, false);
	func_235(49);
	func_237(75, 0);
	func_240(28, 11);
	func_227(311708813);
	func_190(54);
	func_192(21, true);
	func_207(6);
	func_192(23, true);
	func_211(73, 0);
	func_211(67, 0);
	func_211(66, 0);
	func_207(0);
	func_240(26, 26);
	func_164(10);
	func_172(joaat("az_camp_dark_mood_zone"), true, false);
	func_235(58);
	func_198(664571177);
	func_240(24, 31);
	func_240(25, 30);
	func_198(409602249);
	func_192(7, false);
	func_237(68, 0);
	func_215();
	func_216(16);
	return;
}

void func_56() // Position - 0xC05C Hash - 0xE60AC888 ^0x3FCC6D71
{
	func_160(18);
	func_161();
	func_268(0, 4, 1);
	func_235(53);
	func_193(16, 1, 0, 3, true);
	func_193(4, 4, 0, 1, true);
	func_198(235928616);
	func_234(136);
	func_268(1, 4, 2);
	func_234(76);
	func_247(76);
	func_193(9, 4, 0, 2, true);
	func_260(2, 3);
	func_214(9, false);
	func_237(34, 0);
	func_191(joaat("weapon_rifle_boltaction"), true, true, false, -1);
	func_211(76, 0);
	func_198(-76237062);
	func_235(54);
	func_227(-76237062);
	func_171(1);
	func_210(17);
	func_207(0);
	func_207(6);
	func_237(71, 0);
	func_211(65, 0);
	func_235(55);
	func_207(3);
	func_236(2, 0, 0);
	func_235(56);
	func_198(-828139293);
	func_269(0);
	func_269(1);
	func_269(2);
	func_269(3);
	func_269(7);
	func_237(67, 0);
	func_220(8);
	func_195(14);
	func_211(68, 0);
	func_270(23);
	func_270(17);
	func_270(21);
	func_192(20, false);
	func_192(15, false);
	func_192(4, false);
	func_235(57);
	func_192(13, false);
	func_192(14, false);
	func_210(19);
	func_215();
	func_216(18);
	return;
}

void func_57() // Position - 0xC1BB Hash - 0xA4186683 ^0xA4186683
{
	func_160(19);
	func_161();
	func_270(0);
	func_270(1);
	func_270(2);
	func_270(3);
	func_270(4);
	func_270(5);
	func_270(6);
	func_270(7);
	func_270(8);
	func_270(9);
	func_270(11);
	func_270(15);
	func_270(16);
	func_270(17);
	func_270(18);
	func_270(19);
	func_270(20);
	func_270(21);
	func_270(22);
	func_270(23);
	func_192(13, false);
	func_192(14, false);
	func_192(12, false);
	func_192(24, false);
	func_192(25, false);
	func_186(35, true);
	func_186(32, true);
	func_186(38, false);
	func_187(4, false, false);
	func_187(12, false, false);
	func_187(13, false, false);
	func_187(14, false, false);
	func_187(15, false, false);
	func_187(16, false, false);
	func_187(0, false, false);
	func_187(2, false, false);
	func_187(10, false, false);
	func_271(945);
	func_171(2);
	func_197(59);
	func_172(joaat("az_camp_dark_mood_zone"), false, false);
	func_263(true);
	func_227(-828139293);
	func_213(0);
	func_213(1);
	func_213(2);
	func_213(3);
	func_213(7);
	func_238(95, false, 350);
	func_238(93, false, 350);
	func_174(26);
	func_174(46);
	func_198(-538889627);
	func_198(559573222);
	func_210(20);
	func_211(88, 0);
	func_272(false);
	func_178(11, joaat("a_c_horse_turkoman_darkbay"));
	func_235(76);
	func_198(94263042);
	func_198(-2106445152);
	func_197(77);
	func_220(13);
	func_192(7, false);
	func_207(13);
	func_207(14);
	func_207(4);
	func_207(12);
	func_214(36, false);
	func_234(52);
	func_198(-618620429);
	func_273();
	func_241(39, true);
	func_215();
	func_216(19);
	return;
}

void func_58() // Position - 0xC3B9 Hash - 0xA2AF31C8 ^0x3CD06673
{
	func_160(20);
	func_161();
	func_163(joaat("player_three"));
	func_274();
	func_164(0);
	func_191(joaat("weapon_repeater_henry"), true, true, false, -1);
	func_272(true);
	func_168(61, false);
	func_177(14, joaat("cs_jackmarston_teen"));
	func_177(12, joaat("a_c_dogrufus_01"));
	func_178(7, joaat("a_c_horse_gang_charles_endlesssummer"));
	func_178(11, joaat("a_c_horse_gang_sadie_endlesssummer"));
	func_178(4, joaat("a_c_horse_gang_uncle_endlesssummer"));
	func_179(14, -268604689);
	func_198(704802028);
	func_273();
	func_214(79, true);
	func_198(-63926460);
	func_198(374115931);
	func_198(-1241340344);
	func_198(-1425209566);
	func_198(-664512648);
	func_198(-811637947);
	func_198(-919512195);
	func_198(405586984);
	func_227(-622554983);
	func_227(1485494263);
	func_198(-25901845);
	func_198(-1738165526);
	func_227(2091701359);
	func_166(0, 90);
	func_166(1, 90);
	func_166(2, 90);
	func_183(13, joaat("TSTAG_ENDLESS_SUMMER"), -1784359682, -1);
	func_181(74, joaat("cs_mrpearson"));
	func_194(10);
	func_194(11);
	func_198(-259123672);
	func_198(-1062490780);
	func_222(48);
	func_170(7, 0);
	func_171(1);
	func_172(joaat("azl_camp_beaver_hollow"), false, true);
	func_172(joaat("azl_camp_pronghorn_ranch"), true, true);
	func_172(joaat("azl_pronghorn_ranch"), true, true);
	func_198(1850082804);
	func_175(0);
	func_162(8, 0, 0, 18, 5, 1907);
	func_275();
	func_260(0, 5);
	func_260(2, 2);
	func_260(1, 2);
	func_260(5, 2);
	func_204();
	func_205();
	func_190(45);
	func_174(16);
	func_197(60);
	func_202(joaat("WEAPON_LASSO"), 1);
	func_202(joaat("weapon_melee_knife"), 1);
	func_220(10);
	func_227(1850082804);
	func_235(61);
	func_207(13);
	func_207(14);
	func_227(1850082804);
	func_210(21);
	func_235(63);
	func_211(97, 0);
	func_197(64);
	func_237(98, 0);
	func_235(66);
	func_198(-182889087);
	func_260(4, 3);
	func_168(62, false);
	func_211(95, 0);
	func_192(13, true);
	func_192(14, true);
	func_197(67);
	func_263(false);
	func_190(46);
	func_190(16);
	func_202(-361635024, 1);
	func_202(-409616653, 1);
	func_202(-1205612021, 1);
	func_202(-1611873049, 1);
	func_202(890706995, 1);
	func_168(62, true);
	func_168(65, false);
	func_168(70, false);
	func_168(91, false);
	func_168(93, false);
	func_202(-1515874150, 1);
	func_202(1082956942, 1);
	func_202(-1282334963, 1);
	func_272(false);
	func_237(90, 0);
	func_210(22);
	func_234(51);
	func_234(42);
	func_234(71);
	func_234(126);
	func_234(100);
	func_211(91, 0);
	func_170(8, 0);
	func_171(1);
	func_198(-1056767524);
	func_172(joaat("azl_camp_pronghorn_ranch"), false, true);
	func_172(joaat("azl_pronghorn_ranch"), false, true);
	func_172(joaat("azl_camp_beechers_hope"), true, true);
	func_172(joaat("azl_beechers_hope"), true, true);
	func_211(102, 0);
	func_235(73);
	func_198(2008888900);
	func_273();
	func_176(7);
	func_237(92, 0);
	func_237(83, 0);
	func_211(93, 0);
	func_198(1649996811);
	func_273();
	func_211(85, 0);
	func_234(145);
	func_235(74);
	func_260(3, 3);
	func_198(227918160);
	func_273();
	func_235(68);
	func_237(96, 0);
	func_198(168171957);
	func_273();
	func_211(94, 0);
	func_198(1193080109);
	func_273();
	func_235(75);
	func_233(5);
	func_198(618699440);
	func_237(89, 0);
	func_215();
	func_216(20);
	return;
}

void func_59() // Position - 0xC7DC Hash - 0x927BB8C4 ^0xD548880A
{
	func_160(21);
	func_161();
	func_235(62);
	func_237(97, 0);
	func_198(-1056767524);
	func_211(98, 0);
	func_235(65);
	func_237(95, 0);
	func_215();
	func_216(21);
	return;
}

void func_60() // Position - 0xC822 Hash - 0xE4029101 ^0xE4029101
{
	func_160(22);
	func_161();
	func_235(69);
	func_237(102, 0);
	func_200(0);
	func_234(17);
	func_234(18);
	func_234(16);
	func_234(20);
	func_234(19);
	func_211(83, 0);
	func_235(72);
	func_237(85, 0);
	func_211(96, 0);
	func_235(70);
	func_237(94, 0);
	func_211(86, 0);
	func_235(71);
	func_237(99, 0);
	func_215();
	func_216(22);
	return;
}

void func_61() // Position - 0xC8AA Hash - 0x1CB0BFC0 ^0x2B1BEF27
{
	func_160(23);
	func_161();
	func_234(63);
	func_247(63);
	func_231(0, false);
	func_260(0, 3);
	func_193(10, 0, -1, 0, true);
	func_179(10, -268604689);
	func_225(10);
	func_191(joaat("weapon_shotgun_doublebarrel"), true, true, false, -1);
	func_191(joaat("weapon_thrown_throwing_knives"), true, true, true, -1);
	func_210(2);
	func_237(13, 0);
	func_211(25, 0);
	func_211(21, 0);
	func_211(23, 0);
	func_211(37, 0);
	func_192(1, true);
	func_192(5, true);
	func_234(21);
	func_210(7);
	func_211(72, 0);
	func_243(5, 1);
	func_234(64);
	func_247(64);
	func_252(64, 2, 28, -2);
	func_192(11, false);
	func_236(2, 0, 0);
	func_252(64, 0, 29, -2);
	func_241(28, true);
	func_214(16, true);
	func_234(65);
	func_247(65);
	func_198(311708813);
	func_260(0, 5);
	func_191(joaat("weapon_repeater_henry"), true, true, false, -1);
	func_241(29, true);
	func_207(11);
	func_237(73, 0);
	func_215();
	func_216(23);
	return;
}

void func_62() // Position - 0xC9DB Hash - 0x27423413 ^0x27423413
{
	func_160(24);
	func_161();
	func_211(16, 0);
	func_234(0);
	func_247(0);
	func_193(0, 1, 0, 1, true);
	func_193(13, 4, 0, 1, true);
	func_193(14, 4, 0, 3, true);
	func_202(joaat("weapon_fishingrod"), 1);
	func_237(5, 0);
	func_234(41);
	func_209(joaat("sp_chal_surv_root"));
	func_211(17, 0);
	func_234(134);
	func_247(134);
	func_225(11);
	func_179(11, 1205492208);
	func_193(11, 0, -1, 0, true);
	func_193(11, 4, 0, 3, true);
	func_193(17, 0, -1, 0, true);
	func_173(11, 1.2f, -1082130432);
	func_177(12, joaat("a_c_dogcatahoulacur_01"));
	func_179(12, -1394723994);
	func_190(28);
	func_237(20, 0);
	func_237(31, 0);
	func_211(64, 0);
	func_254(joaat("completed"), joaat("missions_chp4"), 3, 33);
	func_238(105, false, 350);
	func_238(95, false, 350);
	func_211(74, 0);
	func_254(joaat("MISSIONS_PROGRESSED"), 0, 1, 46);
	func_234(6);
	func_247(7);
	func_241(31, true);
	func_253(6);
	func_253(7);
	func_211(89, 0);
	func_276(1);
	func_247(1);
	func_233(4);
	func_172(joaat("azl_beechers_hope_farm_running"), true, true);
	func_207(14);
	func_207(13);
	func_207(12);
	func_220(12);
	func_237(86, 0);
	func_237(101, 0);
	func_211(99, 0);
	func_211(87, 0);
	func_234(2);
	func_247(2);
	func_198(-491981251);
	func_273();
	func_237(88, 0);
	func_215();
	func_216(24);
	return;
}

void func_63() // Position - 0xCB8E Hash - 0x3AF4BDF6 ^0x694C7636
{
	func_160(26);
	func_161();
	func_234(120);
	func_247(120);
	func_190(36);
	func_190(32);
	func_190(7);
	func_190(10);
	func_191(joaat("weapon_melee_knife"), true, true, false, -1);
	func_191(joaat("weapon_bow"), true, true, false, -1);
	func_190(9);
	func_190(27);
	func_190(47);
	func_190(55);
	func_237(1, 0);
	func_211(3, 0);
	func_211(2, 0);
	func_211(4, 0);
	func_211(6, 0);
	func_171(2);
	func_234(66);
	func_247(66);
	func_191(joaat("weapon_revolver_doubleaction"), false, true, false, 525);
	func_219(1);
	func_238(26, false, 350);
	func_222(48);
	func_170(2, 0);
	func_171(1);
	func_172(joaat("azl_camp_horseshoe_overlook"), false, true);
	func_172(joaat("azl_camp_clemens_point"), true, true);
	func_198(1944170089);
	func_192(18, false);
	func_169(-922193456);
	func_232(5);
	func_237(7, 0);
	func_237(17, 0);
	func_242(0, 0);
	func_239(12, 13, -2);
	func_240(2, 12);
	func_241(13, true);
	func_211(33, 0);
	func_240(29, 27);
	func_234(67);
	func_247(67);
	func_192(18, false);
	func_260(2, 4);
	func_219(2);
	func_169(-922193456);
	func_222(48);
	func_170(3, 0);
	func_171(1);
	func_172(joaat("azl_camp_clemens_point"), false, true);
	func_172(joaat("azl_camp_shady_belle"), true, true);
	func_227(1944170089);
	func_210(10);
	func_237(64, 0);
	func_192(18, false);
	func_232(5);
	func_234(117);
	func_238(76, false, 350);
	func_211(44, 0);
	func_234(139);
	func_247(139);
	func_207(18);
	func_255(5);
	func_277(0, 2);
	func_277(0, 1);
	func_277(0, 3);
	func_211(60, 0);
	func_266(0, 7);
	func_266(0, 8);
	func_266(0, 0);
	func_266(0, 1);
	func_266(0, 2);
	func_266(0, 3);
	func_198(1626481264);
	func_276(82);
	func_191(joaat("weapon_melee_cleaver"), true, true, false, -1);
	func_191(joaat("weapon_melee_hatchet"), true, true, false, -1);
	func_191(joaat("weapon_melee_machete"), true, true, false, 526);
	func_240(28, 24);
	func_240(29, 25);
	func_204();
	func_205();
	func_276(83);
	func_237(61, 0);
	func_211(69, 0);
	func_234(68);
	func_247(68);
	func_219(4);
	func_214(79, false);
	func_260(1, 3);
	func_260(2, 3);
	func_222(48);
	func_170(6, 0);
	func_192(12, false);
	func_171(1);
	func_172(joaat("azl_camp_lakay"), false, true);
	func_172(joaat("azl_camp_beaver_hollow"), true, true);
	func_192(18, false);
	func_207(23);
	func_232(5);
	func_182(13, joaat("TSTAG_FLOW_PRE_BOUNTY_1"));
	func_240(4, 32);
	func_175(0);
	func_192(16, false);
	func_257(16);
	func_191(joaat("weapon_pistol_mauser"), false, true, false, -1);
	func_234(147);
	func_237(78, 0);
	func_237(74, 0);
	func_211(59, 0);
	func_234(140);
	func_247(140);
	func_207(18);
	func_255(5);
	func_277(0, 4);
	func_247(141);
	func_278(0, 4);
	func_278(0, 5);
	func_278(0, 6);
	func_247(142);
	func_241(26, true);
	func_278(0, 4);
	func_278(0, 5);
	func_278(0, 6);
	func_253(140);
	func_253(141);
	func_253(142);
	func_270(18);
	func_255(5);
	func_211(90, 0);
	func_234(8);
	func_247(8);
	func_234(9);
	func_247(9);
	func_176(4);
	func_237(91, 0);
	func_220(11);
	func_198(588987611);
	func_273();
	func_211(92, 0);
	func_234(10);
	func_247(10);
	func_237(93, 0);
	func_211(101, 0);
	func_234(96);
	func_247(96);
	func_237(87, 0);
	func_215();
	func_216(26);
	return;
}

void func_64() // Position - 0xCF9B Hash - 0x7A6955EE ^0x7A6955EE
{
	func_160(25);
	func_161();
	func_234(59);
	func_247(59);
	func_277(0, 0);
	func_277(0, 7);
	func_277(0, 8);
	func_279(1);
	func_234(61);
	func_247(61);
	func_210(29);
	func_234(62);
	func_247(62);
	func_244(8, 0);
	func_241(9, true);
	func_258(61);
	func_276(62);
	func_241(8, true);
	func_237(3, 0);
	func_212(100);
	func_232(1);
	func_211(70, 0);
	func_234(69);
	func_247(69);
	func_211(71, 0);
	func_234(70);
	func_247(70);
	func_241(30, true);
	func_253(69);
	func_253(70);
	func_215();
	func_216(25);
	return;
}

void func_65() // Position - 0xD064 Hash - 0x862FAB4E ^0x92E6A46C
{
	func_160(27);
	func_161();
	func_192(5, false);
	func_280(596);
	func_234(94);
	func_247(94);
	func_193(5, 4, 0, 2, true);
	func_212(100);
	func_237(100, 0);
	func_207(5);
	func_211(50, 0);
	func_234(115);
	func_247(115);
	func_236(2, 0, 0);
	func_234(116);
	func_247(116);
	func_236(2, 0, 0);
	func_211(42, 0);
	func_280(529);
	func_192(7, false);
	func_237(49, 0);
	func_215();
	func_216(27);
	return;
}

void func_66() // Position - 0xD0FC Hash - 0x4530DFDB ^0x4530DFDB
{
	func_160(28);
	func_161();
	func_234(3);
	func_234(4);
	func_247(4);
	func_245(0, 1);
	func_234(5);
	func_247(5);
	func_192(1, false);
	func_245(1, 1);
	func_237(21, 0);
	func_230(33, 1);
	func_211(51, 0);
	func_234(22);
	func_247(23);
	func_241(24, true);
	func_253(22);
	func_253(23);
	func_211(62, 0);
	func_234(58);
	func_247(58);
	func_164(9);
	func_237(70, 0);
	func_237(59, 0);
	func_251(23, -2, 38);
	func_234(24);
	func_241(38, true);
	func_247(25);
	func_241(11, true);
	func_253(22);
	func_253(23);
	func_253(24);
	func_253(25);
	func_215();
	func_216(28);
	return;
}

void func_67() // Position - 0xD1DB Hash - 0x9B5114A2 ^0x9B5114A2
{
	func_160(30);
	func_161();
	func_234(26);
	func_234(84);
	func_234(86);
	func_234(87);
	func_234(88);
	func_247(84);
	func_247(85);
	func_247(86);
	func_247(87);
	func_247(88);
	func_211(52, 0);
	func_234(27);
	func_215();
	func_216(30);
	return;
}

void func_68(eStackSize essParam0) // Position - 0xD240 Hash - 0x6EF12AA9 ^0x6EF12AA9
{
	func_160(essParam0);
	func_161();
	func_215();
	func_216(essParam0);
	return;
}

void func_69() // Position - 0xD25C Hash - 0x39267FD8 ^0x6CEABDF6
{
	int i;

	i = 0;

	for (i = 0; i < 100; i = i + 1)
	{
		Global_1835011[i /*74*/] = -1;
		Global_1835011[i /*74*/].f_1 = 0;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1835011[i /*74*/].f_3), "", 32);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1835011[i /*74*/].f_8), "", 8);
		Global_1835011[i /*74*/].f_18 = { 0f, 0f, 0f };
		Global_1835011[i /*74*/].f_26 = 0;
		Global_1835011[i /*74*/].f_29 = 0;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1835011[i /*74*/].f_9), "", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1835011[i /*74*/].f_12), "", 32);
		Global_1835011[i /*74*/].f_30 = 0;
	}

	return;
}

void func_70() // Position - 0xD2FA Hash - 0xF1913B2 ^0xF73ADA95
{
	int i;

	VOLUME::_0x748C5F51A18CB8F0(false);

	for (i = 0; i <= 77; i = i + 1)
	{
		func_281(&Global_1835011[i /*74*/]);
	}

	func_282(0, 0, "winter1", "WNT1", 0, "", "", -1347.48f, 2436.06f, 307.46f, joaat("blip_mission_dutch"), 45000);
	func_282(1, 0, "winter2", "WNT2", 33280, "WNT2_INT", "winter2_intro", -1323.9657f, 2438.497f, 308.6447f, joaat("blip_scm_abigail"), 45000);
	func_282(3, 0, "winter4", "WNT4", 33280, "WNT4_INT", "winter4_intro", -1326.43f, 2441.23f, 309.64f, joaat("blip_mission_john"), 45000);
	func_283(0, "winter1_outro");
	func_283(1, "winter2_outro");
	func_283(3, "winter4_outro");
	func_283(2, "odriscolls1_outro");
	func_284(1, 15);
	func_284(1, 13);
	func_284(1, 2);
	func_284(1, 5);
	func_284(1, 22);
	func_284(1, 14);
	func_284(1, 4);
	func_284(1, 18);
	func_284(1, 20);
	func_284(1, 11);
	func_284(1, 19);
	func_284(1, 21);
	func_284(3, 0);
	func_284(3, 5);
	func_284(3, 21);
	func_284(3, 1);
	func_282(4, 1, "mudtown1", "MUD1", 32768, "MUD1_INT", "mudtown1_intro", -1316.4176f, 2421.5947f, 306.5768f, joaat("blip_mission_dutch"), 45000);
	func_282(5, 1, "mudtown2", "MUD2", 512, "MUD2_INT", "mudtown2_intro", -312.77097f, 803.34894f, 117.98486f, joaat("blip_scm_javier"), 45000);
	func_282(6, 3, "mudtown3", "MUD3", 512, "MUD3_INT", "mudtown3_intro", -100.1908f, -25.6157f, 94.9512f, joaat("blip_scm_uncle"), 45000);
	func_282(14, 1, "mudtown4", "MUD4", 12, "MUD4_INT", "mudtown4_intro", -252.9086f, 687.2473f, 112.3933f, joaat("blip_mission_john"), 45000);
	func_282(24, 1, "mudtown5", "MUD5", 0, "MUD5_INT", "mudtown5_intro", 719.8f, -1241.8495f, 45.4094f, joaat("blip_mission_bill"), 45000);
	func_285(14, 75f * 2f, 100f * 2f, 100f * 2f);
	func_282(8, 29, "mary1", "MRY1", 32768, "", "mary1_intro", 897.1398f, 1280.5978f, 233.7575f, 1460795605, 45000);
	func_282(36, 29, "mary3", "MRY3", 0, "MRY3_INT", "mary3_intro", 2676.6326f, -1266.6431f, 50.84106f, 1460795605, 45000);
	func_285(8, 75f * 2f, 100f * 2f, 100f * 2f);
	func_285(36, 75f * 1.5f, 100f * 1.5f, 200f / 1.33f);
	func_283(4, "mudtown1_outro");
	func_283(6, "mudtown3_outro");
	func_284(4, 0);
	func_284(4, 5);
	func_284(5, 3);
	func_284(5, 2);
	func_284(5, 7);
	func_284(6, 4);
	func_284(14, 1);
	func_284(24, 3);
	func_284(24, 9);
	func_284(24, 20);
	func_285(5, 75f * 2.2f, 100f * 2.2f, 1128792064);
	func_285(6, 75f * 2f, 100f * 2f, 1128792064);
	func_285(24, 75f * 3f, 100f * 3f, 1128792064);
	func_282(9, 2, "saloon1", "SAL1", 0, "SAL1_INT", "saloon1_intro", -128.8677f, -31.6843f, 95.0839f, joaat("blip_mission_dutch"), 45000);
	func_284(9, 0);
	func_284(9, 9);
	func_284(9, 16);
	func_285(9, 75f * 2f, 100f * 2f, 1128792064);
	func_283(9, "saloon1_outro");
	func_282(11, 2, "utopia1", "UTP1", 0, "UTP1_INT", "utopia1_intro", -1804.7618f, -351.7945f, 163.1185f, joaat("blip_mission_micah"), 45000);
	func_284(11, 6);
	func_282(12, 2, "utopia2", "UTP2", 0, "UTP2_INT", "utopia2_intro", -1531.9014f, -307.4734f, 141.4547f, joaat("blip_mission_micah"), 45000);
	func_284(12, 6);
	func_283(12, "utopia2_outro");
	func_282(13, 1, "sean1", "SEN1", 0, "SEN1_INT", "sean1_intro", -870f, -1098f, 56.9f, joaat("blip_scm_javier"), 45000);
	func_284(13, 23);
	func_284(13, 2);
	func_284(13, 7);
	func_285(13, 75f * 4f, 100f * 4f, 1128792064);
	func_282(25, 3, "mudtown3b", "MUD6", 0, "MUD3B_INT", "mudtown3b_intro", 1173.2677f, -102.1099f, 96.2466f, joaat("blip_mission_john"), 45000);
	func_284(25, 8);
	func_284(25, 1);
	func_284(25, 7);
	func_285(25, 75f * 3f, 100f * 3f, 1128792064);
	func_282(7, 4, "bounty1", "BOU1", 0, "RBSOS_INT", "bounty1_intro", -275.4033f, 801.9575f, 118.4063f, joaat("blip_mission_bounty"), 45000);
	func_285(7, 50f, 75f, 1128792064);
	func_283(7, "bounty1_outro");
	func_282(10, 5, "reverend1", "REV1", 0, "RRVRD_RSC_1", "reverend1_intro", -327.6682f, -357.796f, 87.0507f, joaat("blip_scm_reverend"), 45000);
	func_284(10, 21);
	func_283(10, "reverend1_outro");
	func_285(10, 75f * 2f, 100f * 2f, 100f * 2f);
	func_282(15, 31, "hunting1", "HNT1", 32768, "RCHNT1_INT", "hunting1_intro", -107.39072f, -26.07745f, 95.27734f, joaat("blip_mission_hosea"), 45000);
	func_284(15, 5);
	func_285(15, 75f * 3f, 100f * 3f, 1128792064);
	func_282(16, 6, "feud1", "FUD1", 0, "", "feud1_intro", 648.6395f, -1281.0276f, 40.9099f, joaat("blip_mission_dutch"), 45000);
	func_283(16, "feud1_outro");
	func_284(16, 0);
	func_284(16, 5);
	func_285(16, 75f * 2.5f, 100f * 2.5f, 1128792064);
	func_282(17, 6, "grays1", "GRY1", 0, "GRY1_INT", "grays1_intro", 1359.1396f, -1305.8849f, 76.7662f, joaat("blip_mission_dutch"), 45000);
	func_282(19, 6, "grays2", "GRY2", 32768, "", "grays2_intro", 1711.4f, -1383.2f, 42.89f, joaat("blip_mission_john"), 45000);
	func_282(21, 6, "grays3", "GRY3", 0, "GRY3_INT", "grays3_intro", 1291.136f, -1290.923f, 75.5354f, joaat("blip_mission_bill"), 45000);
	func_285(17, 75f * 4f, 100f * 4f, 1128792064);
	func_285(19, 75f * 2f, 100f * 2f, 1128792064);
	func_285(21, 75f * 4f, 100f * 4f, 1128792064);
	func_283(17, "grays1_outro");
	func_283(19, "grays2_outro");
	func_284(17, 0);
	func_284(17, 3);
	func_284(19, 2);
	func_284(19, 1);
	func_284(21, 6);
	func_284(21, 3);
	func_284(21, 8);
	func_282(18, 7, "braithwaites1", "BRT1", 0, "BRT1_INT", "braithwaites1_intro", 776.5498f, -1056.5675f, 53.8989f, joaat("blip_mission_hosea"), 45000);
	func_282(20, 7, "braithwaites2", "BRT2", 0, "BRT2_INT", "braithwaites2_intro", 1011.21f, -1761.52f, 47.6f, joaat("blip_mission_hosea"), 45000);
	func_282(26, 7, "braithwaites3", "BRT3", 32768, "BRT3_INT", "braithwaites3_intro", 656.3981f, -1252.1351f, 43.8652f, joaat("blip_mission_dutch"), 45000);
	func_285(18, 75f * 2f, 100f * 2f, 1128792064);
	func_285(20, 75f * 4f, 100f * 4f, 100f * 1.5f);
	func_285(26, 75f * 2f, 100f * 2f, 1128792064);
	func_283(18, "braithwaites1_outro");
	func_283(20, "braithwaites2_outro");
	func_284(18, 5);
	func_284(18, 1);
	func_284(20, 8);
	func_284(20, 5);
	func_284(26, 0);
	func_284(26, 18);
	func_284(26, 10);
	func_284(26, 16);
	func_284(26, 23);
	func_284(26, 5);
	func_284(26, 13);
	func_284(26, 1);
	func_284(26, 3);
	func_284(26, 7);
	func_284(26, 2);
	func_284(26, 9);
	func_284(26, 6);
	func_282(22, 8, "trelawny1", "TRE1", 0, "", "trelawny1_intro", 655.7808f, -1251.116f, 42.6758f, joaat("blip_mission_dutch"), 45000);
	func_284(22, 0);
	func_284(22, 7);
	func_282(27, 10, "mob1", "MOB1", 0, "MOB1_INT", "mob1_intro", 2626.9402f, -1219.6373f, 52.2649f, joaat("blip_scm_bronte"), 45000);
	func_282(28, 10, "mob2", "MOB2", 0, "", "mob2_intro", 2447.6772f, -1200.6141f, 45.2694f, joaat("blip_mission_dutch"), 45000);
	func_282(29, 10, "mob3", "MOB3", 0, "MOB3_INT", "mob3_intro", 2720.9265f, -1353.3153f, 46.7962f, joaat("blip_mission_dutch"), 45000);
	func_282(30, 10, "mob4", "MOB4", 0, "MOB4_INT", "mob4_intro", 1891.4403f, -1858.1903f, 46.7928f, joaat("blip_mission_dutch"), 45000);
	func_282(31, 10, "mob5", "MOB5", 0, "MOB5_INT", "mob5_intro", 2140.2942f, -645.7061f, 41.5042f, joaat("blip_mission_dutch"), 45000);
	func_283(27, "mob1_outro");
	func_283(29, "mob3_outro");
	func_283(30, "mob4_outro");
	func_284(27, 0);
	func_285(27, 75f * 2f, 100f * 2f, 100f);
	func_284(28, 1);
	func_284(28, 0);
	func_285(28, 75f * 2f, 100f * 2f, 100f);
	func_284(29, 0);
	func_284(29, 9);
	func_285(29, 175f, 225f, 175f);
	func_284(30, 0);
	func_284(30, 5);
	func_284(31, 0);
	func_284(31, 1);
	func_284(31, 3);
	func_284(31, 9);
	func_285(31, 75f * 3f, 100f * 3f, 1128792064);
	func_282(2, 11, "odriscolls1", "DST1", 33280, "ODR1_INT", "odriscolls1_intro", -1360.4f, 2425.1f, 307.4f, joaat("blip_mission_bill"), 45000);
	func_284(2, 3);
	func_284(2, 6);
	func_284(2, 9);
	func_282(23, 11, "odriscolls3", "DST3", 0, "odr3_int", "odriscolls3_intro", 656.0257f, -1250.9507f, 43.1798f, joaat("blip_mission_micah"), 45000);
	func_284(23, 6);
	func_285(23, 75f * 2f, 100f * 2f, 1128792064);
	func_283(23, "odriscolls3_outro");
	func_282(32, 11, "odriscolls4", "ODR4", 0, "ODR4_INT", "odriscolls4_intro", 1892.0358f, -1856.6649f, 42.1234f, joaat("blip_scm_sadie"), 45000);
	func_282(47, 11, "odriscolls5", "DST5", 0, "DST5_INT", "odriscolls5_intro", 2794.039f, -1169.6094f, 46.924f, joaat("blip_scm_sadie"), 45000);
	func_285(47, 75f, 100f, 200f / 2f);
	func_284(32, 11);
	func_284(32, 0);
	func_284(32, 10);
	func_284(47, 11);
	func_282(33, 12, "industry1", "IND1", 0, "IND1_INT", "industry1_intro", 1891.336f, -1839.029f, 42.458f, joaat("blip_mission_hosea"), 45000);
	func_282(34, 12, "industry3", "IND3", 12, "IND3_INT", "industry3_intro", 2549.555f, -1181.013f, 53.281f, joaat("blip_scm_trelawney"), 45000);
	func_283(34, "industry3_outro");
	func_284(33, 0);
	func_284(33, 5);
	func_284(34, 23);
	func_285(34, 1117126656, 1120403456, 100f);
	func_282(37, 12, "saint_denis1", "NBD1", 0, "NBD1_INT", "saint_denis1_intro", 1891.3181f, -1864.4233f, 42.17f, joaat("blip_mission_dutch"), 45000);
	func_284(37, 0);
	func_284(37, 6);
	func_284(37, 3);
	func_284(37, 7);
	func_284(37, 1);
	func_284(37, 5);
	func_284(37, 13);
	func_285(37, 75f * 3f, 100f * 3f, 1128792064);
	func_282(35, 9, "susan1", "SUS1", 0, "SUS1_INT", "susan1_intro", 1877.2511f, -1881.726f, 42.1481f, joaat("blip_scm_marybeth"), 45000);
	func_284(35, 19);
	func_284(35, 22);
	func_282(38, 13, "guama1", "GUA1", 0, "GUA1_INT", "", 688.195f, -5521.027f, 42.97f, joaat("blip_objective"), 45000);
	func_282(39, 13, "guama2", "GUA2", 0, "GUA1_EXT", "", 2008.9698f, -4491.4854f, 41.0253f, joaat("blip_mission_dutch"), 45000);
	func_282(43, 13, "guama3", "GUA3", 0, "GUA3_INT", "guarma3_intro", 1307.3857f, -6824.7227f, 42.4679f, joaat("blip_mission_bill"), 45000);
	func_284(39, 0);
	func_284(39, 6);
	func_284(39, 2);
	func_284(43, 0);
	func_284(43, 3);
	func_284(43, 2);
	func_284(43, 6);
	func_285(43, 75f * 5f, 100f * 5f, 1128792064);
	func_282(40, 13, "fussar1", "FUS1", 0, "", "fussar1_intro", 1534.57f, -7149.84f, 63.4f, joaat("blip_mission_dutch"), 45000);
	func_282(41, 14, "fussar2", "FUS2", 0, "", "fussar2_intro", 1318.1235f, -7222.6885f, 54.3179f, joaat("blip_rc"), 45000);
	func_284(40, 0);
	func_284(40, 2);
	func_285(40, 75f * 3f, 100f * 3f, 100f);
	func_283(40, "fussar1_outro");
	func_283(41, "fussar2_outro");
	func_285(41, 75f, 100f, 90f);
	func_282(42, 14, "smuggler2", "SMG2", 0, "SMG2_INT", "smuggler2_intro", 998.9632f, -6744.742f, 57.315f, joaat("blip_mission_dutch"), 45000);
	func_284(42, 0);
	func_284(42, 3);
	func_284(42, 6);
	func_283(42, "smuggler2_outro");
	func_282(44, 15, "gang1", "GNG1", 0, "GNG1_INT", "gang1_intro", 2239.3958f, -768.93f, 42.4355f, joaat("blip_mission_dutch"), 45000);
	func_282(45, 15, "gang2", "GNG2", 0, "GNG2_INT", "gang2_intro", 2794.2764f, -1169.0566f, 47.424f, joaat("blip_scm_sadie"), 45000);
	func_282(46, 15, "gang3", "GNG3", 0, "GNG3_INT", "gang3_intro", 2903.1113f, -248.0395f, 40.9789f, joaat("blip_scm_sadie"), 45000);
	func_284(44, 11);
	func_284(44, 13);
	func_285(44, 75f * 5f, 100f * 5f, 1128792064);
	func_283(44, "gang1_outro");
	func_284(45, 11);
	func_285(45, 75f * 3f, 100f * 3f, 100f);
	func_284(46, 11);
	func_284(46, 13);
	func_285(46, 75f * 7f, 100f * 7f, 1128792064);
	func_282(53, 18, "cornwall1", "CRN1", 0, "CRN1_INT", "cornwall1_intro", 706.8683f, -1243.771f, 44.1344f, joaat("blip_scm_molly_oshea"), 45000);
	func_282(54, 18, "train_robbery1", "TRN1", 0, "TRN1_INT", "train_robbery1_intro", 2912.1072f, 1324.4427f, 44.2873f, joaat("blip_mission_micah"), 45000);
	func_282(55, 18, "train_robbery2", "TRN2", 0, "TRN2_INT", "train_robbery2_intro", 2785.6633f, 521.8132f, 67.3731f, joaat("blip_mission_micah"), 45000);
	func_282(56, 18, "train_robbery3", "TRN3", 0, "TRN3_INT", "train_robbery3_intro", 568.1516f, 1693.4681f, 185.5488f, joaat("blip_mission_john"), 45000);
	func_284(53, 16);
	func_283(53, "cornwall1_outro");
	func_284(54, 6);
	func_284(54, 0);
	func_285(54, 75f * 3f, 100f * 3f, 1128792064);
	func_284(55, 3);
	func_284(55, 6);
	func_285(55, 75f * 3f, 100f * 3f, 1128792064);
	func_284(56, 1);
	func_285(56, 75f * 3.75f, 100f * 4.5f, 1128792064);
	func_282(57, 18, "train_robbery4", "TRN4", 0, "TRN4_INT", "train_robbery4_intro", 2357.59f, 1373.9f, 105.6f, joaat("blip_mission_dutch"), 45000);
	func_284(57, 0);
	func_285(57, 75f * 3f, 100f * 3f, 1128792064);
	func_283(57, "train_robbery4_outro");
	func_282(48, 16, "native1", "NTV1", 0, "NTV1_INT", "native1_intro", 441.702f, 2229.45f, 248.136f, joaat("blip_scm_rains"), 45000);
	func_282(49, 16, "native2", "NTV2", 0, "NTV2_INT", "native2_intro", 2345.514f, 1367.028f, 105.3159f, joaat("blip_scm_trelawney"), 45000);
	func_282(58, 16, "native3", "NTV3", 0, "NTV3_INT", "native3_intro", 2359.382f, 1373.6064f, 105.3286f, joaat("blip_mission_dutch"), 45000);
	func_283(48, "native1_outro");
	func_284(49, 7);
	func_285(49, 75f * 1.5f, 100f * 1.5f, 1128792064);
	func_283(49, "native2_outro");
	func_284(58, 3);
	func_284(58, 1);
	func_284(58, 0);
	func_284(58, 6);
	func_284(58, 4);
	func_284(58, 2);
	func_284(58, 7);
	func_284(58, 21);
	func_284(58, 23);
	func_284(58, 11);
	func_285(58, 75f * 2f, 100f * 2f, 1128792064);
	func_283(58, "native3_outro");
	func_282(50, 17, "native_son1", "NTS1", 0, "NTS1_INT", "native_son1_intro", 2342.4558f, 1354.502f, 106.3074f, joaat("blip_scm_reverend"), 45000);
	func_282(51, 17, "native_son2", "NTS2", 0, "NTS2_INT", "native_son2_intro", 71.4867f, 1071.3862f, 194.9133f, joaat("blip_scm_eagle_flies"), 45000);
	func_282(52, 17, "native_son3", "NTS3", 0, "", "native_son3_intro", 453.14f, 2211.46f, 245.04f, joaat("blip_scm_charles"), 45000);
	func_283(52, "native_son3_outro");
	func_284(50, 0);
	func_284(50, 7);
	func_284(50, 2);
	func_284(50, 20);
	func_284(51, 0);
	func_284(51, 26);
	func_284(52, 7);
	func_285(50, 75f * 2f, 100f * 2f, 1128792064);
	func_285(51, 75f * 3f, 100f * 3f, 1128792064);
	func_282(59, 19, "finale1", "FIN1", 0, "", "", 2505.984f, 1404.7091f, 96.0203f, joaat("blip_scm_abigail"), 45000);
	func_282(76, 19, "finale2", "FIN2", 0, "FIN2_INT", "finale2_intro", -1640.5443f, -1361.1886f, 84.0584f, joaat("blip_scm_abigail"), 45000);
	func_282(77, 19, "finale3", "FIN3", 0, "", "", -1555.8722f, -1437.2028f, 92.9368f, joaat("blip_scm_abigail"), 45000);
	func_284(59, 11);
	func_284(76, 13);
	func_284(76, 4);
	func_284(76, 14);
	func_284(76, 7);
	func_284(76, 11);
	func_285(76, 75f * 2f, 100f * 2f, 1128792064);
	func_284(77, 13);
	func_283(77, "finale3_outro");
	func_282(60, 20, "marston1", "MAR1", 0, "MAR1_INT", "marston1_intro", -1624.5688f, 428.6325f, 107.29f, joaat("blip_mission_john"), 45000);
	func_282(65, 21, "marston2", "MAR2", 0, "MAR2_INT", "marston2_intro", -2590.8357f, 457.1726f, 146.019f, joaat("blip_scm_abigail"), 45000);
	func_282(66, 20, "marston4", "MAR4", 0, "MAR4_INT", "marston4_intro", -2560.5664f, 399.7978f, 147.2715f, joaat("blip_scm_david_geddes"), 45000);
	func_282(61, 20, "marston5_1", "MAR5", 0, "MAR5_INT", "marston5_1_intro", -2589.0933f, 408.1137f, 147.9029f, joaat("blip_scm_tom_dickens"), 45000);
	func_282(62, 21, "marston5_2", "MR52", 12, "MAR5_MCS5", "marston5_2_intro", -2606.167f, 366.299f, 148.4951f, joaat("blip_scm_tom_dickens"), 45000);
	func_282(63, 20, "marston5_3", "MR53", 0, "MAR5_MCS8", "marston5_3_intro", -2545.6738f, 357.9615f, 151.2458f, joaat("blip_scm_david_geddes"), 45000);
	func_282(64, 20, "laramie1", "LAR1", 0, "", "laramie1_intro", -2598.7612f, 412.5062f, 147.409f, joaat("blip_mission_john"), 45000);
	func_285(65, 75f * 3f, 100f * 3f, 1128792064);
	func_285(61, 75f * 3f, 100f * 3f, 1128792064);
	func_283(62, "marston5x_outro");
	func_283(63, "marston5x_outro");
	func_283(65, "marston2_or_4_outro");
	func_283(66, "marston2_or_4_outro");
	func_282(73, 20, "marston6", "MAR6", 0, "RHLP2_RSC1", "marston6_intro", -1638.4799f, -1358.7848f, 83.2768f, joaat("blip_scm_uncle"), 45000);
	func_282(74, 20, "marston7", "MAR7", 0, "MAR7_INT", "marston7_intro", -865.2943f, -1306.1238f, 42.00784f, joaat("blip_scm_albert_cakes"), 45000);
	func_282(75, 20, "marston8", "MAR8", 0, "MAR8_INT", "marston8_intro", -1598.6f, -1419.1f, 81.6f, joaat("blip_scm_uncle"), 45000);
	func_282(68, 20, "beechers2_2", "BE22", 0, "rbch2_rsc5", "beechers2_2_intro", -1629.9586f, -1392.8882f, 82.8805f, joaat("blip_scm_uncle"), 45000);
	func_285(74, 75f * 2f, 100f * 2f, 1128792064);
	func_285(75, 75f * 3f, 100f * 3f, 1128792064);
	func_285(68, 75f * 2f, 100f * 2f, 1128792064);
	func_283(75, "marston8_outro");
	func_283(68, "beechers2_2_outro");
	func_284(65, 14);
	func_284(65, 13);
	func_284(73, 4);
	func_284(74, 7);
	func_284(75, 4);
	func_284(75, 7);
	func_284(68, 4);
	func_284(68, 7);
	func_282(67, 20, "abigail2_1", "AB21", 0, "RABI21_INT", "abigail2_1_intro", -2588.554f, 457.1668f, 145.2963f, joaat("blip_scm_abe_stablehand"), 45000);
	func_283(67, "abigail21_outro");
	func_282(69, 22, "sadie2", "SAD2", 0, "SAD2_INT", "sadie2_intro", -307.6113f, 799.5872f, 117.9875f, joaat("blip_scm_sadie"), 45000);
	func_285(69, 75f * 3f, 100f * 3f, 1128792064);
	func_282(70, 22, "sadie3", "SAD3", 0, "RBCH3_RSC1", "sadie3_intro", -1551.3186f, -1456.1338f, 92.7963f, joaat("blip_scm_uncle"), 45000);
	func_285(70, 75f * 3f, 100f * 3f, 1128792064);
	func_282(71, 22, "sadie4", "SAD4", 0, "SAD4_INT", "sadie4_intro", -1639.1313f, -1363.2109f, 83.4043f, joaat("blip_scm_abigail"), 45000);
	func_283(71, "sadie4_outro");
	func_282(72, 22, "sadie5", "SAD5", 0, "SAD5_INT", "sadie5_intro", -809.3553f, -1322.738f, 43.6836f, joaat("blip_scm_sadie"), 45000);
	func_283(72, "sadie5_outro");
	func_285(72, 75f * 3f, 100f * 3f, 1128792064);
	func_284(69, 11);
	func_284(70, 4);
	func_284(71, 13);
	func_284(72, 11);
	func_282(78, 19, "dreamanim", "TL21", 0, "", "def_intro_script", 2106.6777f, -2041.1085f, 40.7255f, joaat("blip_mission_john"), 45000);
	VOLUME::_0x748C5F51A18CB8F0(true);
	return;
}

void func_71(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, float fParam6, float fParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12) // Position - 0xECDC Hash - 0x6258F9B ^0x10F51B17
{
	int i;

	if (!func_286(iParam0))
		return;

	if (!func_287(iParam1))
		return;

	if (Global_1879534 == false)
	{
		Global_1347702[iParam0 /*49*/] = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1347702[iParam0 /*49*/].f_1), sParam2, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1347702[iParam0 /*49*/].f_3), sParam3, 8);
		TEXT_LABEL_ASSIGN_STRING(&(Global_1347702[iParam0 /*49*/].f_4), sParam4, 64);
		Global_1347702[iParam0 /*49*/].f_15 = func_288(iParam0, iParam1, 8, 0);
	
		if (!func_289(Global_1347702[iParam0 /*49*/].f_15))
			return;
	
		if (iParam12 < 35f)
			iParam12 = 35f;
	
		Global_1347702[iParam0 /*49*/].f_16 = iParam12;
		Global_1347702[iParam0 /*49*/].f_28 = iParam9;
		Global_1347702[iParam0 /*49*/].f_36 = iParam10;
	
		if (iParam5 != -1)
			Global_1347702[iParam5 /*49*/].f_48 = Global_1347702[iParam0 /*49*/].f_15;
	
		Global_1347702[iParam0 /*49*/].f_17 = Global_1347702[iParam0 /*49*/].f_16 + 10f;
	
		if (iParam11 & 4096 != 0)
			Global_1347702[iParam0 /*49*/].f_20 = 0f;
	
		for (i = 0; i <= 4; i = i + 1)
		{
			Global_1347702[iParam0 /*49*/].f_29[i] = -1;
		}
	}

	Global_1347702[iParam0 /*49*/].f_24 = { fParam6 };
	Global_1347702[iParam0 /*49*/].f_27 = func_290(fParam6, true);
	Global_1347702[iParam0 /*49*/].f_35 = iParam5;
	Global_1347702[iParam0 /*49*/].f_12 = 0;
	func_291(&(Global_1347702[iParam0 /*49*/].f_12), iParam11);
	return;
}

void func_72(int iParam0, int iParam1) // Position - 0xEE4E Hash - 0xCEF5F1DB ^0xBB4C9F0E
{
	if (!func_286(iParam0))
		return;

	if (iParam1 < 0)
	{
	}
	else if (iParam1 > 48)
	{
		iParam1 = 48;
	}

	Global_1347702[iParam0 /*49*/].f_47 = iParam1;
	return;
}

void func_73(int iParam0, int iParam1, BOOL bParam2) // Position - 0xEE83 Hash - 0x15C8C6EB ^0xC9969BC7
{
	if (!func_286(iParam0))
		return;

	Global_1347702[iParam0 /*49*/].f_46 = iParam1;

	if (bParam2)
		func_291(&(Global_1347702[iParam0 /*49*/].f_12), 268435456);

	return;
}

void func_74(int iParam0, float fParam1) // Position - 0xEEBC Hash - 0x40FB079D ^0xDAA70D4B
{
	float num;

	if (!func_286(iParam0))
		return;

	num = Global_1347702[iParam0 /*49*/].f_16 + 10f;

	if (fParam1 >= num)
		Global_1347702[iParam0 /*49*/].f_17 = fParam1;
	else
		Global_1347702[iParam0 /*49*/].f_17 = num;

	return;
}

void func_75(int iParam0, float fParam1) // Position - 0xEF06 Hash - 0xFE9AED41 ^0x63EBE595
{
	if (!func_286(iParam0))
		return;

	Global_1347702[iParam0 /*49*/].f_18 = fParam1;
	Global_1347702[iParam0 /*49*/].f_20 = fParam1 + 5f;

	if (fParam1 >= Global_1347702[iParam0 /*49*/].f_19)
		Global_1347702[iParam0 /*49*/].f_19 = fParam1 + 5f;

	return;
}

float func_76(int iParam0) // Position - 0xEF53 Hash - 0x9EEAC446 ^0x9EEAC446
{
	switch (iParam0)
	{
		case 13:
			return 70f;
	
		default:
		
	}

	return 75f;
}

BOOL func_77(eStackSize essParam0) // Position - 0xEF76 Hash - 0xBE2A032D ^0xE6F2CF3B
{
	return BUILTIN::SHIFT_LEFT(1, essParam0);
}

void func_78(int iParam0, BOOL bParam1) // Position - 0xEF85 Hash - 0x48A58069 ^0x48A58069
{
	eStackSize stackSize;
	eStackSize i;
	int num;

	if (!func_286(iParam0))
		return;

	if (bParam1 != false)
	{
		i = 0;
		num = 0;
	
		for (i = 0; i < 27; i = i + 1)
		{
			stackSize = i;
		
			if (bParam1 && func_77(stackSize) != false && func_137(stackSize))
			{
				if (num >= 5)
					return;
			
				Global_1347702[iParam0 /*49*/].f_29[num] = stackSize;
				num = num + 1;
			}
		}
	}

	return;
}

void func_79(int iParam0, int iParam1) // Position - 0xEFF5 Hash - 0x9642AD01 ^0x606925C9
{
	if (!func_286(iParam0))
		return;

	Global_1347702[iParam0 /*49*/].f_44 = iParam1;
	return;
}

void func_80(int iParam0, float fParam1) // Position - 0xF016 Hash - 0xCC589227 ^0x12272297
{
	Global_1347702[iParam0 /*49*/].f_20 = fParam1;
	return;
}

void func_81(int iParam0, float fParam1) // Position - 0xF02A Hash - 0xCC589227 ^0xDB372655
{
	Global_1347702[iParam0 /*49*/].f_19 = fParam1;
	return;
}

void func_82() // Position - 0xF03E Hash - 0xBF5747B7 ^0x87937B9A
{
	int i;

	for (i = 0; i < Global_1392915; i = i + 1)
	{
		func_292(i);
	}

	for (i = 0; i < Global_1899528.f_11; i = i + 1)
	{
		Global_1899528.f_11[i] = -1;
	}

	return;
}

void func_83(int iParam0, int iParam1, eStackSize essParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, int iParam12) // Position - 0xF083 Hash - 0x49FD90D ^0xFE44805A
{
	if (!func_293(iParam0))
		return;

	if (!func_294(essParam2))
		return;

	Global_1395601.f_5[iParam0 /*28*/] = essParam2;
	Global_1395601.f_5[iParam0 /*28*/].f_1 = iParam1;
	Global_1395601.f_5[iParam0 /*28*/].f_2 = { fParam3 };
	Global_1395601.f_5[iParam0 /*28*/].f_5 = { fParam6 };
	Global_1395601.f_5[iParam0 /*28*/].f_8 = { fParam9 };
	Global_1395601.f_5[iParam0 /*28*/].f_11 = iParam12;
	return;
}

Vector3 func_84() // Position - 0xF103 Hash - 0xEE6F6785 ^0xEE6F6785
{
	if (func_295(70))
		return -1634.2521f, -1358.5771f, 83.9077f;

	if (func_295(73))
		return -1665.4187f, -1346.2577f, 84.11175f;

	return -1641.1001f, -1359.9785f, 83.4932f;
}

void func_85(int iParam0, int iParam1) // Position - 0xF150 Hash - 0xBFF8151D ^0xBFF8151D
{
	int i;

	if (iParam0 > 4)
		iParam0 = 4;

	if (iParam0 < 1)
		iParam0 = 1;

	if (iParam1 == 16)
	{
		Global_40.f_4283.f_312 = iParam0;
	
		for (i = 0; i < 17; i = i + 1)
		{
			func_296(i, iParam0);
		}
	}
	else
	{
		func_296(iParam1, iParam0);
	}

	return;
}

void func_86(eStackSize essParam0) // Position - 0xF1A2 Hash - 0xD4DCCCCE ^0x216180A
{
	int num;
	eStackSize i;
	var src;
	int j;

	if (essParam0 == -1)
		return;

	if (Global_40.f_4283 == essParam0)
	{
		num = func_298(func_297(essParam0));
	
		if (num != -1)
			Global_40.f_6 = { Global_1395601.f_5[num /*28*/].f_2 };
	
		func_300(func_299(essParam0), joaat("CSTP_PERSIST_ACROSS_STATES"), -1235532919, -1, 1, true, false);
		VOLUME::_0x748C5F51A18CB8F0(false);
		VOLUME::_0x748C5F51A18CB8F0(true);
		Global_40.f_4283.f_330 = -15;
		return;
	}

	func_301();

	switch (essParam0)
	{
		case 0:
		case 1:
			func_302("hso_post_caravan");
			func_303(-349064220);
			break;
	
		case 2:
			func_302("dewclm_post_caravan");
			func_303(1776302352);
			func_304(-349064220);
			break;
	
		case 3:
			func_303(-523522517);
			func_304(-349064220);
			func_304(1776302352);
			break;
	
		case 4:
		case 5:
		case 6:
			func_304(-349064220);
			func_304(1776302352);
			func_304(-523522517);
			break;
	
		case 7:
		case 8:
			func_304(-349064220);
			func_304(1776302352);
			func_304(-523522517);
			func_304(1591451572);
			break;
	}

	Global_1934266.f_66 = 1;
	func_305(func_297(essParam0), false);

	switch (func_115())
	{
		case -1:
			func_306();
			func_307(essParam0);
			func_308(true, 18);
			func_309(essParam0);
			func_310(essParam0);
			src.f_11 = 1;
		
			for (j = 0; j < 10; j = j + 1)
			{
				MISC::COPY_SCRIPT_STRUCT(&Global_40.f_6563.f_274[j /*20*/], &src, 20);
			}
		
			Global_40.f_6563.f_273 = 0;
			func_311(&(Global_1359489.f_25), 1, true);
			Global_1359453 = 0;
		
			for (i = 0; i < 27; i = i + 1)
			{
				func_139(i, 16384, true);
			}
		
			func_312(0, 14);
			func_313();
			func_314();
			Global_1357549.f_1497.f_8 = Global_1357549.f_1497.f_8 | 1;
			Global_1391438 = 1;
			Global_40.f_4283.f_330 = -15;
			func_300(joaat("CSTAG_NEW_CAMP_FIRST_VISIT"), joaat("CSTP_NEXT_VISIT"), -1235532919, -1, 0, true, false);
			func_300(func_299(essParam0), joaat("CSTP_PERSIST_ACROSS_STATES"), -1235532919, -1, 1, true, false);
			break;
	}

	return;
}

void func_87() // Position - 0xF3FD Hash - 0xF54583CA ^0x6E3BB0BD
{
	if (func_115() != -1)
		return;

	Global_40.f_4283.f_328 = -15;
	Global_40.f_4283.f_329 = -15;
	Global_40.f_4283.f_331 = -15;
	Global_40.f_4283.f_332[0] = -1;
	Global_40.f_4283.f_332[1] = -1;
	func_315(&Global_40.f_4283.f_440[0 /*63*/]);
	func_315(&Global_40.f_4283.f_440[1 /*63*/]);
	func_316(0, 711);
	return;
}

void func_88() // Position - 0xF476 Hash - 0x2B847668 ^0xF11C8C7E
{
	if (!Global_40)
	{
		Global_40.f_4283.f_2 = 0;
		Global_40.f_4283.f_3 = 0;
		Global_40.f_4283.f_312 = 1;
		Global_40.f_4283.f_324 = 0;
		Global_40.f_4283.f_325 = 0;
		Global_40.f_4283.f_328 = Global_1899515;
	}

	Global_1357549 = 0;
	Global_1357549.f_1494 = 0;
	Global_1357549.f_1497.f_8 = 0;
	func_317(false);
	Global_1357549.f_1724 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "camp_select_data");
	Global_1357549.f_1725 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(Global_1357549.f_1724, "camp_collection");
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1357549.f_1725);
	func_318();
	func_319();

	if (func_295(17) && !func_295(37) && !func_320(16, 4, true))
		func_321(16);

	return;
}

int func_89(BOOL bParam0) // Position - 0xF542 Hash - 0x98BCE0D6 ^0x9DFABE3D
{
	func_322(6, 0, 0, 513, bParam0);
	func_322(62, 0, 0, 513, bParam0);
	func_322(7, 0, 4, 513, bParam0);
	func_322(8, 0, 4, 513, bParam0);
	func_322(9, 0, 8, 513, bParam0);
	func_322(10, 0, 8, 513, bParam0);
	func_322(12, 0, 0, true, false);
	func_322(11, 0, 0, 17, bParam0);
	func_322(14, 0, 0, true, false);
	func_322(13, 0, 0, true, false);
	func_322(61, 0, 0, true, false);
	func_322(63, 0, 0, true, false);
	func_322(70, 0, 4, 513, bParam0);
	func_322(94, 0, 0, true, false);
	func_322(15, 0, 0, 545, bParam0);
	func_322(16, 0, 0, 521, bParam0);
	func_322(17, 0, 0, 521, bParam0);
	func_322(18, 0, 0, true, false);
	func_322(19, 0, 0, true, false);
	func_322(20, 0, 0, true, false);
	func_322(0, 0, 0, 513, bParam0);
	func_322(1, 0, 0, 513, bParam0);
	func_322(2, 0, 0, 513, bParam0);
	func_322(3, 0, 0, 513, bParam0);
	func_322(4, 0, 0, 513, bParam0);
	func_322(5, 0, 0, 513, bParam0);
	func_322(24, 0, 0, 513, bParam0);
	func_322(25, 0, 0, 513, bParam0);
	func_322(26, 0, 0, 513, bParam0);
	func_322(27, 0, 0, 513, bParam0);
	func_322(28, 0, 0, 513, bParam0);
	func_322(21, 0, 0, 513, bParam0);
	func_322(22, 0, 0, 513, bParam0);
	func_322(29, 0, 0, 513, bParam0);
	func_322(30, 0, 0, 513, bParam0);
	func_322(31, 0, 0, 513, bParam0);
	func_322(32, 0, 0, 513, bParam0);
	func_322(33, 0, 0, 513, bParam0);
	func_322(34, 0, 0, 513, bParam0);
	func_322(35, 0, 0, 513, bParam0);
	func_322(36, 0, 0, 513, bParam0);
	func_322(37, 0, 0, 513, bParam0);
	func_322(38, 0, 0, 513, bParam0);
	func_322(39, 0, 0, 513, bParam0);
	func_322(40, 0, 0, 513, bParam0);
	func_322(41, 0, 0, 513, bParam0);
	func_322(42, 0, 0, 513, bParam0);
	func_322(43, 0, 0, 513, bParam0);
	func_322(44, 0, 0, 513, bParam0);
	func_322(45, 0, 0, 513, bParam0);
	func_322(46, 0, 0, 513, bParam0);
	func_322(47, 0, 0, 513, bParam0);
	func_322(48, 0, 0, 513, bParam0);
	func_322(49, 0, 0, 513, bParam0);
	func_322(50, 0, 0, 513, bParam0);
	func_322(51, 0, 0, 513, bParam0);
	func_322(52, 0, 0, 513, bParam0);
	func_322(53, 0, 0, 513, bParam0);
	func_322(54, 0, 0, 513, bParam0);
	func_322(55, 0, 0, 513, bParam0);
	func_322(56, 0, 0, 513, bParam0);
	func_322(57, 0, 0, 513, bParam0);
	func_322(58, 0, 0, 513, bParam0);
	func_322(59, 0, 0, 513, bParam0);
	func_322(60, 0, 0, 513, bParam0);
	func_322(23, 0, 0, true, false);
	func_322(67, 0, 0, true, false);
	func_322(68, 0, 0, true, false);
	func_322(69, 0, 0, true, false);
	func_322(75, 0, 0, true, false);
	func_322(79, 0, 0, true, false);
	func_322(83, 0, 0, true, false);
	func_322(87, 0, 0, true, false);
	func_322(71, 0, 0, true, false);
	func_322(73, 0, 0, true, false);
	func_322(77, 0, 0, true, false);
	func_322(78, 0, 0, true, false);
	func_322(81, 0, 0, true, false);
	func_322(85, 0, 0, true, false);
	func_322(89, 0, 0, true, false);
	func_322(76, 0, 0, true, false);
	func_322(80, 0, 0, true, false);
	func_322(82, 0, 0, true, false);
	func_322(84, 0, 0, true, false);
	func_322(86, 0, 0, true, false);
	func_322(88, 0, 0, true, false);
	func_322(72, 0, 0, true, false);
	func_322(74, 0, 0, true, false);
	func_322(93, 0, 0, 513, bParam0);
	func_322(66, 0, 0, true, false);
	func_322(64, 0, 0, true, false);
	func_322(70, 0, 4, 513, bParam0);
	func_322(90, 0, 0, true, false);
	func_322(65, 0, 0, 513, bParam0);
	func_322(91, 0, 0, 513, bParam0);
	func_322(92, 0, 0, true, false);
	func_323(true);
	return 1;
}

void func_90(var uParam0) // Position - 0xF9BD Hash - 0xF7BEC50 ^0xADCA1D03
{
	int i;
	var unk;
	Hash hash;
	var unk9;
	var unk23;
	var unk44;

	if (uParam0->f_5861)
		return;

	unk9 = 1;
	unk9.f_1 = 1;
	unk9.f_2 = joaat("COLOR_WHITE");
	unk9.f_4 = -1;
	unk9.f_5 = -1134602452;
	unk9.f_6 = 1276832712;
	unk9.f_13 = joaat("COLOR_WHITE");
	unk23 = 1;
	unk23.f_1 = 1;
	unk23.f_2 = joaat("COLOR_WHITE");
	unk23.f_4 = -1;
	unk23.f_5 = -1134602452;
	unk23.f_6 = 1276832712;
	unk44 = 1;
	unk44.f_1 = 1;
	unk44.f_2 = joaat("COLOR_WHITE");
	unk44.f_4 = -1;
	unk44.f_5 = -1134602452;
	unk44.f_6 = 1276832712;
	unk44.f_18 = 1;
	unk44.f_19 = 1;
	unk44.f_20 = 1;
	unk44.f_24 = 1;
	unk44.f_25 = 1;
	unk44.f_26 = 1;
	unk44.f_27 = -1;
	uParam0->f_5835 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PlayerWardrobeRoot");
	hash = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, "main_menu");
	uParam0->f_3084 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(hash, "list");
	hash = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, "item_style");
	uParam0->f_3761 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(hash, "list");
	hash = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, "item_variation");
	uParam0->f_5263 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(hash, "list");
	hash = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, "outfit_customizations");
	uParam0->f_5640 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(hash, "list");
	unk9.f_8 = 1;
	unk9.f_9 = 1;
	unk23.f_8 = 1;
	unk23.f_9 = 1;
	unk44.f_8 = 1;
	unk44.f_9 = 1;

	for (i = 0; i <= 44; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "item_type_", 64);
		TEXT_LABEL_APPEND_INT(&unk, i, 64);
		func_324(&uParam0->f_3084.f_1[i /*15*/], uParam0->f_5835, unk, unk9);
	}

	for (i = 0; i <= 99; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "item_style_", 64);
		TEXT_LABEL_APPEND_INT(&unk, i, 64);
		func_325(&uParam0->f_3761.f_1[i /*15*/], uParam0->f_5835, unk, unk23);
	}

	for (i = 0; i <= 24; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "item_variation_", 64);
		TEXT_LABEL_APPEND_INT(&unk, i, 64);
		func_325(&uParam0->f_5263.f_1[i /*15*/], uParam0->f_5835, unk, unk23);
	}

	for (i = 0; i <= 7; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "item_customize_", 64);
		TEXT_LABEL_APPEND_INT(&unk, i, 64);
		func_326(&uParam0->f_5640.f_1[i /*22*/], uParam0->f_5835, unk, unk44);
	}

	func_327(uParam0, 0, "main_menu", "CustomizeOutfitEnabled", false);
	func_327(uParam0, 1, "main_menu", "CustomizeOutfitVisible", false);
	func_327(uParam0, 2, "itemInfo", "text1visible", false);
	func_327(uParam0, 3, "itemInfo", "text2visible", false);
	func_327(uParam0, 4, "itemInfo", "text3visible", false);
	func_327(uParam0, 5, "item_style", "ExtraOptionPromptEnabled", false);
	func_327(uParam0, 6, "item_style", "ExtraOptionPromptVisible", false);
	func_327(uParam0, 7, "item_style", "SaveOutfitOptionEnabled", false);
	func_327(uParam0, 8, "item_style", "SaveOutfitOptionVisible", false);
	func_327(uParam0, 9, "item_style", "InspectItemOptionEnabled", true);
	func_327(uParam0, 10, "item_style", "InspectItemOptionVisible", true);
	func_328(uParam0, 0, "header", "label", joaat("player_wardrobe_main_menu"));
	func_328(uParam0, 1, "header", "sublabel", 0);
	func_328(uParam0, 2, "footer", "label", 0);
	func_328(uParam0, 3, "itemInfo", "text1", 0);
	func_328(uParam0, 4, "itemInfo", "text2", 0);
	func_328(uParam0, 5, "itemInfo", "text3", 0);
	func_328(uParam0, 6, "item_style", "back_link", joaat("BACK"));
	func_328(uParam0, 7, "item_style", "ExtraOptionPromptKey", -430643131);
	func_328(uParam0, 8, "item_style", "SaveOutfitOptionPromptKey", -1400108436);
	func_328(uParam0, 9, "item_style", "InspectItemOptionPromptKey", joaat("inspect_generic"));
	func_329(uParam0, 0, "footer", "labelRaw", "");
	uParam0->f_5861 = 1;
	return;
}

void func_91() // Position - 0xFDBF Hash - 0x797079AC ^0x84ED187B
{
	int i;
	var unk;
	Hash hash;
	var unk5;

	func_330();
	Global_1946054 = false;
	func_331();
	Global_1946054.f_2535.f_2 = 0;
	Global_1946054.f_2535.f_1 = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		Global_1946054.f_2535.f_43[i /*2*/] = { unk };
	}

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_2535.f_3[i] = false;
		hash = Global_1946054.f_57[i /*11*/];
		Global_1946054.f_1497.f_1[i /*3*/] = { hash };
		Global_1946054.f_1378.f_1[i /*3*/] = { hash };
		Global_1946054.f_2456[i /*2*/] = { unk5 };
		Global_1946054.f_2377[i /*2*/] = 0;
		Global_1946054.f_2377[i /*2*/].f_1 = 0;
	}

	Global_1946054.f_2589.f_1 = 0;
	Global_1946054.f_2589 = 0;

	for (i = 0; i < 10; i = i + 1)
	{
		Global_1946054.f_2589.f_2[i /*2*/] = 39;
	}

	Global_1946054.f_2792 = 1;
	Global_1946054.f_2793 = 0;
	return;
}

BOOL func_92(int iParam0) // Position - 0xFECF Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_26796.f_774 && iParam0 != false;
}

void func_93(BOOL bParam0) // Position - 0xFEE2 Hash - 0x717F0B01 ^0x717F0B01
{
	int i;
	Hash hash;

	for (i = 17; i >= 0; i = i + -1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_332(hash, 0))
			func_333(hash, false, bParam0);
	
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

BOOL func_94(int iParam0, BOOL bParam1) // Position - 0xFF7B Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_334(iParam0))
	{
		case 5:
			return true;
	
		case 6:
			if (bParam1)
				return true;
			break;
	}

	return false;
}

void func_95(Hash hParam0) // Position - 0xFFAC Hash - 0x771653F3 ^0x13D633C3
{
	eStackSize i;
	int j;
	Hash hash;
	BOOL flag;
	Hash hash2;
	BOOL flag2;
	int k;
	var unk3;

	func_335(hParam0, 1, true, -142743235, true);

	if (func_336(hParam0))
		func_333(hParam0, true, true);

	flag = false;
	flag2 = false;
	k = func_338(func_337(hParam0), 1);

	if (k >= 39)
		flag2 = true;

	func_101(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));

	for (j = 0; j < 39; j = j + 1)
	{
		hash2 = Global_1946054.f_57[j /*11*/];
		Global_1946054.f_1616.f_1[j /*3*/] = { hash2 };
		Global_1946054.f_1616.f_1[j /*3*/].f_2 = Global_1946054.f_1497.f_1[j /*3*/].f_2 || Global_1946054.f_1378.f_1[j /*3*/].f_2;
	}

	if (func_339() == -2125499975)
		hash = 2020890174;
	else
		hash = 1105329772;

	func_100(&(Global_1946054.f_1616), hash, &unk3, true, false, false, 0);
	func_100(&(Global_1946054.f_1616), 211609491, &unk3, true, false, false, 0);
	Global_1946054.f_1616.f_1[8 /*3*/] = { func_340(8, 0) };
	Global_1946054.f_1616.f_1[9 /*3*/] = { func_340(9, 0) };
	Global_1946054.f_1616.f_1[0 /*3*/] = { func_340(0, 0) };
	Global_1946054.f_1616.f_1[2 /*3*/] = { func_340(2, 0) };
	Global_1946054.f_1616.f_1[3 /*3*/] = { func_340(3, 0) };
	Global_1946054.f_1616.f_1[1 /*3*/] = { func_340(1, 0) };
	Global_1946054.f_1616.f_1[5 /*3*/] = { func_340(5, 0) };
	Global_1946054.f_1616.f_1[6 /*3*/] = { func_340(6, 0) };
	Global_1946054.f_1616.f_1[7 /*3*/] = { func_340(7, 0) };

	for (i = 0; i < 5; i = i + 1)
	{
		if (flag2)
		{
			for (k = 0; k < 39; k = k + 1)
			{
				if (hParam0 == func_341(k, i))
				{
					func_342(&Global_1946054.f_1616.f_1[k /*3*/], k, i);
					break;
				}
			}
		}
		else if (hParam0 == func_341(k, i))
		{
			func_342(&Global_1946054.f_1616.f_1[k /*3*/], k, i);
		}
	}

	if (flag2)
	{
		for (k = 0; k < 39; k = k + 1)
		{
			if (hParam0 == Global_1946054.f_1497.f_1[k /*3*/])
			{
				Global_1946054.f_1497.f_1[k /*3*/] = { Global_1946054.f_1616.f_1[k /*3*/] };
				flag = true;
			}
		
			if (hParam0 == Global_26796.f_627.f_1.f_1.f_1[k /*3*/])
			{
				Global_26796.f_627.f_1.f_1.f_1[k /*3*/] = { Global_1946054.f_1616.f_1[k /*3*/] };
				flag = true;
			}
		
			if (flag)
				break;
		}
	}
	else
	{
		if (hParam0 == Global_1946054.f_1497.f_1[k /*3*/])
			Global_1946054.f_1497.f_1[k /*3*/] = { Global_1946054.f_1616.f_1[k /*3*/] };
	
		if (hParam0 == Global_26796.f_627.f_1.f_1.f_1[k /*3*/])
			Global_26796.f_627.f_1.f_1.f_1[k /*3*/] = { Global_1946054.f_1616.f_1[k /*3*/] };
	}

	for (j = 0; j < 39; j = j + 1)
	{
		Global_1946054.f_1378.f_1[j /*3*/] = { Global_1946054.f_1616.f_1[j /*3*/] };
	}

	return;
}

void func_96() // Position - 0x102F6 Hash - 0xADB7564F ^0x84B68CFA
{
	eStackSize i;
	Hash hash;
	int num;
	int num2;

	num2 = 16;

	for (i = 0; i < 5; i = i + 1)
	{
		hash = func_341(num2, i);
	
		if (hash == Global_1946054.f_57[num2 /*11*/] || hash == 0)
		{
			if (func_339() == -2125499975 || func_339() == -449205311)
			{
				num = joaat("CLOTHING_SP_SHIRT_BOUNTY01_VARIATION_01");
				num.f_1 = 1530758430;
				func_342(&num, num2, i);
			}
			else
			{
				num = 1734931872;
				num.f_1 = joaat("base");
				func_342(&num, num2, i);
			}
		}
	}

	num = joaat("CLOTHING_SP_SHIRT_BOUNTY01_VARIATION_01");
	num.f_1 = 1530758430;

	if (Global_1946054.f_57[num2 /*11*/] == Global_26796.f_627.f_1.f_1.f_1[num2 /*3*/] || 0 == Global_26796.f_627.f_1.f_1.f_1[num2 /*3*/])
		Global_26796.f_627.f_1.f_1.f_1[num2 /*3*/] = { num };

	return;
}

void func_97(int iParam0) // Position - 0x103E8 Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_26796.f_774 = Global_26796.f_774 || iParam0;
	return;
}

void func_98() // Position - 0x103FF Hash - 0x4E355B98 ^0xCDC1F0F7
{
	var unk;
	var unk7;

	func_343(&(Global_1946054.f_1378), -1);
	func_344();
	func_106(7);
	unk = 5;
	func_101(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));

	if (!func_345(&unk))
	{
		func_346(&unk);
		func_347(false, true);
	}

	if (!func_348(&unk7, &(Global_26796.f_627.f_1.f_1)))
		func_349(&(Global_26796.f_627.f_1.f_1), true);

	return;
}

void func_99(int iParam0) // Position - 0x10463 Hash - 0x29A8F290 ^0x6E801A78
{
	Global_1946054.f_1 = iParam0;
	return;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_100(var uParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, int iParam6) // Position - 0x10473 Hash - 0xC258D89B ^0x96AA147F
{
	int num;
	int i;
	BOOL flag;
	int num2;
	int num3;

	num3 = func_350(iParam6);
	num3.f_1 = hParam1;
	num3.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&num3);

	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&num3))
		return false;

	DATAFILE::_PARSEDDATA_GET_BOOL(&flag, &num3, -1516819610);
	DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num3, 2049745650);
	*uParam2 = flag;
	Global_1946054.f_2652 = 0;

	if (!flag && !bParam3)
		func_352(uParam0, func_351(num), true);

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&num3))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num3, 1409451727))
		{
		}
		else
		{
			num2 = num;
			i = func_338(num2, 1);
		
			if (i < 0 || i > 39)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num3, joaat("Component")))
			{
			}
			else
			{
				Global_1946054.f_2612[Global_1946054.f_2652] = i;
				Global_1946054.f_2652 = Global_1946054.f_2652 + 1;
				uParam0->f_1[i /*3*/] = num;
			
				if (bParam5)
					if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num3, 1441384))
						uParam0->f_1[i /*3*/].f_1 = joaat("base");
					else
						goto 0x157;
			
				if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num3, 1194786549))
					if (func_353(num2) && func_354(uParam0->f_1[i /*3*/], num2, &num))
						uParam0->f_1[i /*3*/].f_1 = num;
				else
					uParam0->f_1[i /*3*/].f_1 = num;
			}
		}
	}

	if (flag)
	{
		for (i = 0; i < Global_1946054.f_2652; i = i + 1)
		{
			func_355(uParam0, uParam0->f_1[Global_1946054.f_2612[i] /*3*/], Global_1946054.f_2612[i], false, false);
		}
	}

	if (bParam4)
		*uParam0 = hParam1;

	return true;
}

void func_101(int iParam0) // Position - 0x10628 Hash - 0x4C07C929 ^0x1ED333E9
{
	int num;
	int num2;
	int num3;

	if (func_115() == -1)
		num3 = -1394038466;
	else
		num3 = 545953470;

	num3.f_1 = iParam0;
	num3.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&num3);

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&num3))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num2, &num3, -2008906477))
			return;
	
		num = func_338(num2, 1);
	
		if (num < 0 || num >= 39)
		{
		}
		else
		{
			func_356(&Global_1946054.f_1378.f_1[num /*3*/], 2, 6);
		}
	}

	return;
}

void func_102(eStackSize essParam0, BOOL bParam1, BOOL bParam2, int iParam3, BOOL bParam4, BOOL bParam5) // Position - 0x106AB Hash - 0x733B4F28 ^0x8719397A
{
	eStackSize stackSize;
	int num;

	num = 1;

	if (bParam2)
		if (essParam0 == -1 || essParam0 == func_357() || bParam5)
			func_344();

	if (func_115() == -1)
	{
		stackSize = Global_40.f_7729;
	
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "playerChangeOutfits") && DECORATOR::DECOR_GET_BOOL(Global_35, "playerChangeOutfits"))
			stackSize = Global_1905941;
	
		if (bParam4 && stackSize > 5 && func_358(Global_1946054.f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096;
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				stackSize = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] | 4096;
				Global_1946054.f_1497 = func_359(Global_40.f_7729);
				Global_1946054.f_1378 = func_359(Global_40.f_7729);
				iParam3 = 1;
			}
		}
	
		num = func_360(stackSize);
	}

	if (iParam3 && num)
		func_361(essParam0, false, 6);

	if (bParam1)
		func_347(false, true);

	func_362(0);
	return;
}

void func_103(eStackSize essParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x107FC Hash - 0x8DCFCE52 ^0x8DCFCE52
{
	func_363(&(Global_1946054.f_1497), essParam0);

	if (bParam2)
		func_364(2, essParam0, 6);

	if (bParam1)
		func_347(false, true);

	return;
}

void func_104(Hash hParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x10829 Hash - 0x972B751E ^0x972B751E
{
	func_365(hParam0, Global_35, iParam1, iParam2, iParam3, bParam4);
	func_366();
	return;
}

void func_105(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x10847 Hash - 0x27BA45B0 ^0x27BA45B0
{
	if (hParam0 == 0)
		hParam0 = func_367();

	func_368(hParam0, Global_35, iParam1, bParam2);
	func_369();
	return;
}

void func_106(int iParam0) // Position - 0x1086D Hash - 0xA42FEE36 ^0x2BB3D8A2
{
	int i;
	int num;
	Hash hash;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;

	if (func_115() == -1)
	{
		func_370(352481484);
	
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
	
		if (func_371(hash) != -999503751)
			func_372(&(Global_1946054.f_2657.f_26.f_26), hash, i);
	
		if (func_373(hash, false))
			func_374(hash, Global_1946054.f_1497.f_1[num /*3*/] == Global_1946054.f_2657[i]);
	}

	return;
}

void func_107() // Position - 0x10A5D Hash - 0x80587933 ^0x80587933
{
	int i;
	int j;

	Global_1310750.f_16036 = 0;
	Global_1310750.f_16037 = 0;
	func_375(-1);
	Global_1310750.f_16038 = 0;
	Global_1310750.f_16039 = 0;
	Global_1310750.f_16069 = 6;
	Global_1310750.f_16070 = 3;
	Global_1310750.f_16077 = 0;
	Global_1310750.f_16071 = -1;

	for (i = 0; i < 120; i = i + 1)
	{
		func_376(&Global_1310750[i /*111*/]);
	}

	for (j = 0; j < 4; j = j + 1)
	{
		func_377(j);
	}

	return;
}

void func_108(int iParam0, char* sParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15) // Position - 0x10AE1 Hash - 0x6B1DB152 ^0x6CE503B5
{
	var unk;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return;

	if (func_378(iParam0))
		return;

	iParam9 != -1;

	if (func_379(iParam5, 65536) && iParam9 < 60)
		iParam9 = 60;

	Global_1310750[iParam0 /*111*/] = iParam5;
	Global_1310750[iParam0 /*111*/].f_1 = iParam11;
	Global_1310750[iParam0 /*111*/].f_44 = fParam3;
	Global_1310750[iParam0 /*111*/].f_2 = iParam4;
	TEXT_LABEL_ASSIGN_STRING(&(Global_1310750[iParam0 /*111*/].f_40), sParam1, 32);
	Global_1310750[iParam0 /*111*/].f_38 = iParam6;
	Global_1310750[iParam0 /*111*/].f_36 = iParam8;
	Global_1310750[iParam0 /*111*/].f_37 = iParam7;
	Global_1310750[iParam0 /*111*/].f_39 = iParam12;
	Global_1310750[iParam0 /*111*/].f_62 = iParam15;
	Global_1310750[iParam0 /*111*/].f_61 = 1f - ((float)func_380(iParam0) / 45f);
	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = 8;
	unk.f_4.f_1.f_1 = -1;
	unk.f_4.f_1.f_3.f_1 = -1;
	unk.f_4.f_1.f_3.f_3.f_1 = -1;
	unk.f_4.f_1.f_3.f_3.f_3.f_1 = -1;
	unk.f_4.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_4.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_4.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_4.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Global_1310750[iParam0 /*111*/].f_4 = { unk };
	Global_1310750[iParam0 /*111*/].f_4 = iParam9;
	Global_1310750[iParam0 /*111*/].f_4.f_1 = iParam13;
	Global_1310750[iParam0 /*111*/].f_4.f_2 = iParam10;
	Global_1310750[iParam0 /*111*/].f_4.f_3 = iParam14;

	if (Global_17504.f_42[iParam0 /*8*/].f_5 == 0)
		Global_17504.f_42[iParam0 /*8*/].f_5 = iParam2;

	func_381(true);
	return;
}

void func_109(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0x10C80 Hash - 0xB4485ED ^0x8982A3E7
{
	int num;

	if (iParam4 < 0)
		return;

	if (func_380(iParam0) == 0)
		return;

	num = func_382(iParam0) + iParam4;

	if (num >= 892)
		return;

	Global_1310750.f_13358[num /*3*/] = { uParam1 };
	return;
}

void func_110(function funcParam0) // Position - 0x10CC5 Hash - 0xD62DCDF2 ^0xD62DCDF2
{
	funcParam0(0, -1055.963f, -794.308f, 59.2567f, 0);
	funcParam0(0, -1158.078f, -155.114f, 88.889f, 1);
	funcParam0(0, -1370.7115f, -515.7384f, 125.267f, 2);
	funcParam0(0, -1029.465f, -492.4087f, 101.0615f, 3);
	funcParam0(0, -1234.665f, -1371.778f, 80.796f, 4);
	funcParam0(0, -1525.164f, 1722.86f, 239.152f, 5);
	funcParam0(0, -319.5499f, 203.8464f, 62.1121f, 6);
	funcParam0(0, -513.8f, 345.2f, 49.8945f, 7);
	funcParam0(0, 2150.3738f, 1728.2147f, 125.2313f, 8);
	funcParam0(0, 2179.106f, -25.3714f, 51.3658f, 9);
	funcParam0(1, -1487.833f, 384.474f, 102.2717f, 0);
	funcParam0(1, -1286.226f, 148.542f, 71.8978f, 1);
	funcParam0(1, -2379.3208f, 135.6397f, 236.9608f, 2);
	funcParam0(1, -2618.931f, 90.8313f, 166.3284f, 3);
	funcParam0(1, -1746.0792f, -914.7423f, 100.5956f, 4);
	funcParam0(1, -2036.1049f, -507.9698f, 149.6753f, 5);
	funcParam0(1, -1149.8231f, -766.3174f, 63.4474f, 6);
	funcParam0(1, -2526.7427f, -108.6706f, 165.4704f, 7);
	funcParam0(1, 675.9786f, 1789.6376f, 216.4616f, 8);
	funcParam0(1, 1450.0933f, 1325.1425f, 161.2261f, 9);
	funcParam0(1, 2523.959f, 1320.3999f, 122.2039f, 10);
	funcParam0(1, 2786.135f, 1908.004f, 161.0971f, 11);
	funcParam0(2, 1786.959f, -859.9387f, 41.2511f, 0);
	funcParam0(2, 1876.321f, -1028.481f, 42.4603f, 1);
	funcParam0(2, -1537.491f, 72.5534f, 103.3094f, 2);
	funcParam0(2, -2141.266f, -474.7134f, 145.5408f, 3);
	funcParam0(2, -1433.692f, 518.1367f, 100.4129f, 4);
	funcParam0(2, -2750.55f, -173.6202f, 152.7051f, 5);
	funcParam0(2, -1453.446f, -528.2103f, 130.2089f, 6);
	funcParam0(2, -942.714f, -363.6332f, 51.5706f, 7);
	funcParam0(2, 2719.558f, 1.671f, 50.5135f, 8);
	funcParam0(2, 2578.217f, -156.0283f, 40.8259f, 9);
	funcParam0(2, 798.2251f, 1174.869f, 136.9281f, 10);
	funcParam0(2, -1205.845f, -1835.353f, 60.0304f, 11);
	funcParam0(2, -1481.471f, -1895.701f, 54.6699f, 12);
	funcParam0(2, -1422.307f, -1295.345f, 79.9456f, 13);
	funcParam0(2, -1164.6f, 812.0777f, 118.4599f, 14);
	funcParam0(2, -817.9949f, 1228.166f, 165.4198f, 15);
	funcParam0(2, -211.6961f, 1760.762f, 192.2563f, 16);
	funcParam0(2, 2645.415f, 1322.1108f, 111.4558f, 17);
	funcParam0(2, 2668.904f, 1885.954f, 99.8509f, 18);
	funcParam0(2, 1937.39f, 494.5891f, 129.4169f, 19);
	funcParam0(2, 1000.586f, -1297.523f, 54.0335f, 20);
	funcParam0(2, 1279.088f, -1602.72f, 64.2665f, 21);
	funcParam0(2, 1467.28f, -2234.456f, 42.7965f, 22);
	funcParam0(3, 1845.7435f, -382.1896f, 42.0126f, 0);
	funcParam0(3, 1315.0115f, -1640.3977f, 65.989f, 1);
	funcParam0(3, 782.4731f, -904.5656f, 50.1819f, 2);
	funcParam0(3, 860.498f, -535.0154f, 87.8863f, 3);
	funcParam0(3, 1385.5281f, -1699.0392f, 66.6297f, 4);
	funcParam0(3, 1568.277f, -1167.119f, 44.87f, 5);
	funcParam0(4, -1670.3328f, 266.4697f, 108.1011f, 0);
	funcParam0(4, -1606.08f, -600.0643f, 137.6851f, 1);
	funcParam0(4, -1049.648f, -241.2274f, 82.7866f, 2);
	funcParam0(4, -1390.3458f, 115.5974f, 84.4519f, 3);
	funcParam0(4, -2065.9553f, -401.2512f, 163.9114f, 4);
	funcParam0(4, -2036.99f, -507.4617f, 149.6441f, 5);
	funcParam0(4, 1894.808f, 1525.642f, 190.2607f, 6);
	funcParam0(4, 1769.377f, 1642.661f, 175.514f, 7);
	funcParam0(4, 614.9883f, 1919.951f, 202.9879f, 8);
	funcParam0(4, -885.1455f, 262.5286f, 89.5462f, 9);
	funcParam0(4, 2707.6555f, 564.3442f, 83.4308f, 10);
	funcParam0(4, 2422.1316f, 1697.1056f, 95.8792f, 11);
	funcParam0(4, 2690.929f, 646.9717f, 75.0821f, 12);
	funcParam0(4, 2286.213f, 1649.257f, 84.9657f, 13);
	funcParam0(4, 2367.6345f, 1067.0883f, 83.5814f, 14);
	funcParam0(4, 2762.2805f, 1014.418f, 61.2793f, 15);
	funcParam0(4, 2014.7415f, 68.3487f, 74.0225f, 16);
	funcParam0(5, 2421.2383f, 904.8784f, 72.1375f, 0);
	funcParam0(6, 1575.2845f, -7256.7144f, 66.2668f, 0);
	funcParam0(6, 2581.069f, 624.2234f, 73.5388f, 1);
	funcParam0(6, 2418.6958f, 1069.4647f, 86.3128f, 2);
	funcParam0(7, -1170.4789f, -569.0327f, 89.3336f, 0);
	funcParam0(7, -2449.058f, -291.0107f, 151.4994f, 1);
	funcParam0(7, -1720.8018f, -5.5522f, 162.8418f, 2);
	funcParam0(7, -880.1243f, -362.286f, 42.7127f, 3);
	funcParam0(7, -1288.4983f, 247.4669f, 58.5024f, 4);
	funcParam0(7, -1402.1307f, -849.902f, 82.4184f, 5);
	funcParam0(7, 225.7709f, 1158.7576f, 174.4377f, 6);
	funcParam0(7, 650.7831f, 1401.2681f, 181.6239f, 7);
	funcParam0(7, 779.0355f, 1119.0581f, 130.8968f, 8);
	funcParam0(7, 1579.2888f, 1602.642f, 147.0162f, 9);
	funcParam0(7, 1567.0977f, 935.3324f, 151.5608f, 10);
	funcParam0(7, 2040.0474f, 1491.9692f, 156.9985f, 11);
	funcParam0(7, 1833.1866f, 1405.7463f, 180.4263f, 12);
	funcParam0(7, 1072.8661f, 1883.6105f, 319.825f, 13);
	funcParam0(7, 140.3275f, -473.635f, 67.9336f, 14);
	funcParam0(7, 256.8135f, 677.2663f, 140.556f, 15);
	funcParam0(7, 1261.5308f, 110.901f, 92.27f, 16);
	funcParam0(7, 2478.1719f, 1372.6226f, 104.4044f, 17);
	funcParam0(7, 2876.0742f, 823.1032f, 47.909f, 18);
	funcParam0(7, 1966.5879f, 174.9707f, 83.3576f, 19);
	funcParam0(7, 2468.748f, 711.0537f, 70.8931f, 20);
	funcParam0(7, 2195.6304f, 1647.9534f, 104.3184f, 21);
	funcParam0(7, 2848.0112f, 2102.51f, 158.2506f, 22);
	funcParam0(8, -3312.9153f, -2859.8274f, -6.4145f, 0);
	funcParam0(9, 2546.94f, 1819.9216f, 85.0674f, 0);
	funcParam0(9, 2377.356f, 1070.137f, 84.0566f, 1);
	funcParam0(9, 2535.7668f, 1513.8889f, 84.9165f, 2);
	funcParam0(9, 2549.2483f, 612.5594f, 73.8611f, 3);
	funcParam0(9, 2023.7413f, 159.2145f, 78.313f, 4);
	funcParam0(9, 2813.3223f, 688.974f, 68.6338f, 5);
	funcParam0(9, 2400.434f, 877.9274f, 73.1443f, 6);
	funcParam0(9, 2175.463f, 1745.422f, 119.0117f, 7);
	funcParam0(10, 914.288f, -1205.978f, 50.759f, 0);
	funcParam0(10, 905.55f, -1117.134f, 52.439f, 1);
	funcParam0(11, 2142.0906f, -1322.7141f, 41.4496f, 0);
	funcParam0(11, 1712.2804f, -1928.2067f, 46.2584f, 1);
	funcParam0(11, 807.8684f, -873.498f, 52.0023f, 2);
	funcParam0(11, 1477.4155f, -832.9807f, 49.4009f, 3);
	funcParam0(12, -1306.382f, 113.2325f, 71.617f, 0);
	funcParam0(12, -1195.567f, -348.8055f, 98.6331f, 1);
	funcParam0(12, -1631.4626f, -508.5251f, 147.7541f, 2);
	funcParam0(12, 236.428f, 1172.0577f, 174.6809f, 3);
	funcParam0(12, -865.4097f, -1807.9075f, 64.0395f, 4);
	funcParam0(12, -1407.4393f, -1969.719f, 43.6107f, 5);
	funcParam0(12, -556.52f, -519.95f, 51.67f, 6);
	funcParam0(12, -487.89f, -187.13f, 44.06f, 7);
	funcParam0(12, -590.1177f, 209.5994f, 43.5616f, 8);
	funcParam0(12, 45.2288f, -309.8703f, 100.0965f, 9);
	funcParam0(12, 553.2196f, -536.8489f, 76.4877f, 10);
	funcParam0(12, -1995.5377f, -1374.255f, 116.3711f, 11);
	funcParam0(12, -1714.6337f, -1728.9585f, 87.8438f, 12);
	funcParam0(12, -2200.82f, -1609.2843f, 145.6673f, 13);
	funcParam0(12, -5709.795f, -3189.0994f, -22.8911f, 14);
	funcParam0(12, -5399.68f, -2344.8855f, -6.7089f, 15);
	funcParam0(12, -4239.465f, -3047.2817f, -9.0733f, 16);
	funcParam0(12, -1641.0054f, -2451.6885f, 42.6606f, 17);
	funcParam0(13, 2670.8325f, -67.0281f, 48.336f, 0);
	funcParam0(13, 2576.1855f, -146.486f, 40.6007f, 1);
	funcParam0(13, 2528.1672f, -334.5139f, 40.5561f, 2);
	funcParam0(13, 2483.223f, 640.42f, 71.172f, 3);
	funcParam0(13, 2455.0237f, 1296.8823f, 105.8737f, 4);
	funcParam0(13, 2117.9048f, 1061.2405f, 122.0916f, 5);
	funcParam0(13, 2583.3386f, 342.9637f, 75.1561f, 6);
	funcParam0(13, 2583.1245f, 550.2842f, 71.8067f, 7);
	funcParam0(13, 2474.5183f, 1548.9155f, 84.656f, 8);
	funcParam0(13, 2253.5173f, 1718.977f, 102.4056f, 9);
	funcParam0(13, 2159.4697f, 929.917f, 115.51f, 10);
	funcParam0(13, 2483.8022f, 982.8178f, 93.2f, 11);
	funcParam0(14, -1489.081f, -553.8191f, 131.9622f, 0);
	funcParam0(14, -1756.841f, 274.1943f, 117.8263f, 1);
	funcParam0(14, -2759.282f, -152.587f, 151.1035f, 2);
	funcParam0(14, -719.2486f, -746.223f, 49.1092f, 3);
	funcParam0(14, 947.882f, -1259.494f, 53.9254f, 4);
	funcParam0(14, 1089.484f, -1413.609f, 55.7283f, 5);
	funcParam0(14, 1287.9233f, -1601.3352f, 64.1793f, 6);
	funcParam0(15, -6004.1216f, -3324.7214f, -22.3552f, 0);
	funcParam0(15, -5710.4004f, -3611.259f, -24.0623f, 1);
	funcParam0(15, -6367.3115f, -3696.2478f, -26.9076f, 2);
	funcParam0(15, -6181.481f, -3434.7112f, 10.3617f, 3);
	funcParam0(15, -5445.0425f, -2381.8047f, -8.8016f, 4);
	funcParam0(15, -5166.418f, -4006.5684f, -2.0995f, 5);
	funcParam0(15, -4750.0273f, -3503.7334f, 6.4091f, 6);
	funcParam0(15, -4635.242f, -3155.1958f, 8.7009f, 7);
	funcParam0(15, -3333.3418f, -2281.9397f, -1.519f, 8);
	funcParam0(15, -3970.3782f, -3056.023f, -14.1397f, 9);
	funcParam0(15, -3485.2498f, -2615.361f, -13.7497f, 10);
	funcParam0(15, -4624.8955f, -2718.001f, -11.4759f, 11);
	funcParam0(15, -3840.9187f, -2867.9336f, -16.9531f, 12);
	funcParam0(15, -4294.3535f, -3060.137f, -11.9705f, 13);
	funcParam0(15, -3408.869f, -2265.132f, -4.672f, 14);
	funcParam0(15, -3091.015f, -3144.075f, 1.038f, 15);
	funcParam0(15, -2437.7104f, -2588.429f, 78.7262f, 16);
	funcParam0(15, -2567.323f, -2494.148f, 65.939f, 17);
	funcParam0(15, -2461.365f, -2240.474f, 63.969f, 18);
	funcParam0(15, -2409.346f, -2617.091f, 80.418f, 19);
	funcParam0(15, -1752.983f, -2700.622f, 65.558f, 20);
	funcParam0(16, -1851.5879f, 510.342f, 113.8007f, 0);
	funcParam0(16, -2696.748f, -55.4263f, 152.7823f, 1);
	funcParam0(16, 2608.7566f, -180.0931f, 43.1903f, 2);
	funcParam0(16, -1387.1259f, -1085.839f, 75.6182f, 3);
	funcParam0(16, -1152.1935f, -1798.524f, 60.6213f, 4);
	funcParam0(16, -1414.0613f, -1516.0137f, 85.2022f, 5);
	funcParam0(16, 293.0865f, -28.2385f, 106.7794f, 6);
	funcParam0(16, 862.3326f, -96.2031f, 115.005f, 7);
	funcParam0(16, -603.3961f, -400.8001f, 79.4605f, 8);
	funcParam0(16, 791.0897f, 616.5367f, 119.004f, 9);
	funcParam0(16, -367.7098f, -242.7611f, 87.375f, 10);
	funcParam0(16, 797.4579f, 430.6508f, 106.9812f, 11);
	funcParam0(16, 2094.507f, 181.8995f, 74.0113f, 12);
	funcParam0(16, 2499.5786f, 876.0915f, 72.6963f, 13);
	funcParam0(16, 2716.5503f, 2312.9714f, 155.8205f, 14);
	funcParam0(16, 2753.107f, 183.9333f, 50.8669f, 15);
	funcParam0(16, 855.8201f, -1136.222f, 57.4167f, 16);
	funcParam0(16, 781.47f, -819.1086f, 54.7764f, 17);
	funcParam0(16, 1143.297f, -784.0272f, 89.0981f, 18);
	funcParam0(17, 1895.3206f, -1591.5925f, 43.1308f, 0);
	funcParam0(17, 1750.9337f, -1113.1283f, 41.0289f, 1);
	funcParam0(17, 222.5815f, 1149.0645f, 174.777f, 2);
	funcParam0(17, 643.9483f, 1537.771f, 179.2453f, 3);
	funcParam0(17, 1249.9457f, 1228.4572f, 149.847f, 4);
	funcParam0(17, 1888.3444f, 1412.7687f, 176.1192f, 5);
	funcParam0(17, 881.3965f, 832.8646f, 115.2099f, 6);
	funcParam0(17, 205.5776f, -492.6277f, 71.7359f, 7);
	funcParam0(17, 1086.4568f, 1232.9333f, 194.9449f, 8);
	funcParam0(17, 1449.2971f, -394.4464f, 79.9583f, 9);
	funcParam0(17, 1524.9928f, -1166.9587f, 51.2036f, 10);
	funcParam0(17, 1197.925f, -734.7637f, 77.7386f, 11);
	funcParam0(18, 2080.316f, -1506.239f, 40.6063f, 0);
	funcParam0(18, 1953.527f, -1641.328f, 40.6f, 1);
	funcParam0(18, 2119.107f, -1219.469f, 40.5981f, 2);
	funcParam0(18, 2825.327f, 59.2099f, 44.5063f, 3);
	funcParam0(18, 2679.948f, -578.2466f, 41.2777f, 4);
	funcParam0(18, 1553.7262f, -1050.7258f, 43.0253f, 5);
	funcParam0(18, 1664.2476f, -648.8722f, 42.21f, 6);
	funcParam0(19, 1553.2646f, -1413.0491f, 60.7066f, 0);
	funcParam0(20, -1790.5225f, 391.7672f, 111.5168f, 0);
	funcParam0(20, -2257.545f, 522.8431f, 118.2666f, 1);
	funcParam0(20, -2027.1113f, 523.7131f, 115.7621f, 2);
	funcParam0(20, -1617.7126f, -586.0815f, 138.1433f, 3);
	funcParam0(20, -1651.0883f, -200.7669f, 169.3779f, 4);
	funcParam0(20, 337.933f, 1066.9534f, 186.7877f, 5);
	funcParam0(20, 365.0997f, 1012.086f, 189.1479f, 6);
	funcParam0(20, 803.338f, 1073.4023f, 121.7332f, 7);
	funcParam0(20, -1288.6206f, -1028.7935f, 70.6405f, 8);
	funcParam0(20, -1138.14f, -1667.8544f, 72.6074f, 9);
	funcParam0(20, -339.4998f, 20.8646f, 42.7751f, 10);
	funcParam0(20, 1265.7516f, 825.5964f, 100.082f, 11);
	funcParam0(20, -686.8791f, -446.1221f, 50.8213f, 12);
	funcParam0(20, 2556.097f, 1203.0344f, 162.9738f, 13);
	funcParam0(20, 2098.175f, 328.825f, 76.9f, 14);
	funcParam0(20, 1295.4376f, -782.6951f, 74.8111f, 15);
	funcParam0(20, 769.7879f, -889.8244f, 49.77f, 16);
	funcParam0(21, -1598.758f, 1837.3987f, 298.0538f, 0);
	funcParam0(21, -974.2156f, 2660.9707f, 319.8254f, 1);
	funcParam0(21, -1219.9857f, 2099.9995f, 339.3748f, 2);
	funcParam0(22, 1530.94f, -7293.91f, 72.84f, 0);
	funcParam0(23, 1618.3175f, -1818.743f, 49.6597f, 0);
	funcParam0(23, 2033.1823f, -427.7802f, 41.6463f, 1);
	funcParam0(23, 2164.61f, -960.8591f, 41.7505f, 2);
	funcParam0(23, 2587.6077f, -733.6299f, 41.4225f, 3);
	funcParam0(23, 2554.0405f, -189.0652f, 42.1887f, 4);
	funcParam0(23, 586.9903f, -520.9417f, 76.1102f, 5);
	funcParam0(23, 1143.7834f, -36.1089f, 88.0587f, 6);
	funcParam0(23, 1666.9666f, 74.2819f, 76.1463f, 7);
	funcParam0(23, 2080f, -230.5491f, 45.829f, 8);
	funcParam0(23, 2696.571f, 180.1419f, 52.5405f, 9);
	funcParam0(23, 2581.0676f, 533.5328f, 70.1641f, 10);
	funcParam0(23, 2855.96f, 760.7198f, 55.2413f, 11);
	funcParam0(23, 1527.606f, -1702.6156f, 58.085f, 12);
	funcParam0(23, 1213.0939f, -1589.7158f, 55.9733f, 13);
	funcParam0(23, 1513.254f, -2005.7467f, 43.0278f, 14);
	funcParam0(23, 1062.177f, -1341.6715f, 56.9639f, 15);
	funcParam0(23, 1156.3317f, -1160.0911f, 70.2091f, 16);
	funcParam0(24, -808.5091f, -361.2252f, 40.6701f, 0);
	funcParam0(24, -2151.432f, 532.3184f, 115.9584f, 1);
	funcParam0(24, -1943.116f, 581.7615f, 114.4217f, 2);
	funcParam0(24, -935.6732f, -837.0477f, 42.0009f, 3);
	funcParam0(24, 1588.625f, 1549.986f, 144.8906f, 4);
	funcParam0(24, 601.0182f, 2291.333f, 221.6742f, 5);
	funcParam0(24, -469.3123f, 192.8325f, 40.5531f, 6);
	funcParam0(24, -719.5849f, 157.3127f, 41.0625f, 7);
	funcParam0(24, -788.1081f, 584.9224f, 55.66f, 8);
	funcParam0(24, -611.343f, -255.1613f, 40.9699f, 9);
	funcParam0(24, 2818.075f, 2302.018f, 156.0063f, 10);
	funcParam0(24, 2486.622f, 1697.184f, 85.6145f, 11);
	funcParam0(24, 2287.72f, 273.7723f, 43.7751f, 12);
	funcParam0(24, 2421.8896f, 674.4467f, 66.5993f, 13);
	funcParam0(27, 1908.3221f, -1583.2754f, 42.6331f, 0);
	funcParam0(27, -1738.7335f, 391.4279f, 108.8374f, 1);
	funcParam0(27, -1130.6052f, 460.2371f, 56.677f, 2);
	funcParam0(27, -1731.106f, -832.389f, 97.45f, 3);
	funcParam0(27, -1555.696f, 153.446f, 104.902f, 4);
	funcParam0(27, 703.0021f, 1421.5192f, 177.4066f, 5);
	funcParam0(27, 1481.7063f, 1013.0847f, 167.6041f, 6);
	funcParam0(27, 2159.43f, 444.6013f, 83.4389f, 7);
	funcParam0(27, 1688.4939f, -1617.6366f, 52.7785f, 8);
	funcParam0(27, 1548.366f, -1415.8644f, 61.3286f, 9);
	funcParam0(27, 860.2926f, -890.3083f, 51.4971f, 10);
	funcParam0(28, 1899.5f, -1596.739f, 42.7911f, 0);
	funcParam0(28, 1978.789f, -1533.7555f, 42.5017f, 1);
	funcParam0(28, -1274.5486f, -636.8499f, 98.9627f, 2);
	funcParam0(28, -793.994f, -543.3228f, 49.025f, 3);
	funcParam0(28, -1183.0222f, -729.2754f, 69.6085f, 4);
	funcParam0(29, 1778.489f, 583.673f, 105.025f, 0);
	funcParam0(29, 2452.8105f, 1319.446f, 109.0229f, 1);
	funcParam0(29, 2841.7463f, 652.1951f, 66.7278f, 2);
	funcParam0(29, 2660.135f, 905.5285f, 88.9396f, 3);
	funcParam0(29, 2372.0027f, 259.5193f, 52.9521f, 4);
	funcParam0(29, 2700.7886f, 175.9979f, 52.5134f, 5);
	funcParam0(29, 2493.144f, 1530.3483f, 84.2657f, 6);
	funcParam0(29, 2294.3755f, 1737.6598f, 104.3616f, 7);
	funcParam0(30, 2451.8308f, -694.8572f, 41.7577f, 0);
	funcParam0(30, 1806.4863f, -909.022f, 40.684f, 1);
	funcParam0(30, 2099.8901f, -742.7548f, 40.7194f, 2);
	funcParam0(30, 1661.2354f, -1011.618f, 40.7948f, 3);
	funcParam0(30, 1704.7335f, -749.9987f, 40.8083f, 4);
	funcParam0(30, 2481.8328f, -765.1003f, 41.4476f, 5);
	funcParam0(30, 2521.1633f, -601.1032f, 41.3867f, 6);
	funcParam0(30, 1623.7263f, -892.3166f, 40.5351f, 7);
	funcParam0(30, 1938.5887f, -936.7589f, 42.0285f, 8);
	funcParam0(30, 2103.147f, -826.2164f, 40.4883f, 9);
	funcParam0(30, 2299.4011f, -941.739f, 41.1985f, 10);
	funcParam0(30, 2135.0168f, -411.8303f, 40.5284f, 11);
	funcParam0(30, 2638.8276f, -87.0254f, 47.6561f, 12);
	funcParam0(30, 2292.5786f, -444.8728f, 40.562f, 13);
	funcParam0(30, 2259.443f, -453.3075f, 40.5554f, 14);
	funcParam0(30, 2585.694f, -420.4027f, 40.8495f, 15);
	funcParam0(30, 2554.5596f, -187.4132f, 42.1266f, 16);
	funcParam0(30, 2526.5308f, -353.9748f, 40.6981f, 17);
	funcParam0(30, 2630.492f, -597.4164f, 41.8853f, 18);
	funcParam0(30, -1376.2074f, -1428.6249f, 91.0319f, 19);
	funcParam0(30, -955.4411f, -1810.1432f, 63.6946f, 20);
	funcParam0(30, -1810.0281f, -1297.7223f, 92.8288f, 21);
	funcParam0(30, -1461.3887f, -1766.6587f, 81.9412f, 22);
	funcParam0(30, -1427.5155f, -1290.8206f, 79.5031f, 23);
	funcParam0(30, -1214.44f, -1818.7957f, 60.5434f, 24);
	funcParam0(30, -1563.774f, -1771.393f, 75.6756f, 25);
	funcParam0(30, 2649.1108f, 1781.4901f, 102.1629f, 26);
	funcParam0(30, 2677.1848f, 584.6865f, 79.9779f, 27);
	funcParam0(30, 2972.095f, 1738.8523f, 80.5676f, 28);
	funcParam0(30, 2472.8018f, 1339.0289f, 107.3666f, 29);
	funcParam0(30, 2120.8865f, 1483.5314f, 134.6718f, 30);
	funcParam0(30, 1971.5264f, 345.8105f, 95.6928f, 31);
	funcParam0(30, 2725.853f, 79.9931f, 49.5786f, 32);
	funcParam0(30, 2578.825f, 1660.5183f, 96.5618f, 33);
	funcParam0(30, 2581.9048f, 1501.5021f, 84.288f, 34);
	funcParam0(30, 2775.7856f, 634.1282f, 72.6738f, 35);
	funcParam0(30, 2862.7903f, 1899.8163f, 136.0872f, 36);
	funcParam0(30, 1961.3783f, 237.7049f, 76.7114f, 37);
	funcParam0(31, -1753.3048f, 146.6236f, 146.6423f, 0);
	funcParam0(31, -2089.682f, -316.9403f, 178.7293f, 1);
	funcParam0(31, -1208.6007f, -758.1407f, 65.8343f, 2);
	funcParam0(31, -1206.8562f, 3.6938f, 42.2146f, 3);
	funcParam0(31, -727.5645f, 78.6521f, 43.852f, 4);
	funcParam0(31, 2708.448f, -35.6544f, 50.5802f, 5);
	funcParam0(31, 2416.581f, -379.576f, 40.716f, 6);
	funcParam0(31, 349.6191f, 1193.6517f, 176.0611f, 7);
	funcParam0(31, 585.87f, 1359.4539f, 182.2413f, 8);
	funcParam0(31, 788.2601f, 1308.5431f, 153.7073f, 9);
	funcParam0(31, 644.4541f, 1846.3987f, 204.6257f, 10);
	funcParam0(31, 1169.9315f, 1240.5336f, 170.1918f, 11);
	funcParam0(31, 2191.7622f, 2086.9226f, 221.6624f, 12);
	funcParam0(31, 2577.9807f, 953.2261f, 105.2313f, 13);
	funcParam0(31, 1773.0115f, -2021.6749f, 43.2631f, 14);
	funcParam0(31, 1469.2784f, -1891.963f, 47.8324f, 15);
	funcParam0(31, 1060.5109f, -486.7928f, 88.3641f, 16);
	funcParam0(31, 1689.1815f, -323.7361f, 64.2249f, 17);
	funcParam0(31, 1495.9352f, -1965.4264f, 44.0482f, 18);
	funcParam0(31, 1129.5747f, -637.7903f, 87.3996f, 19);
	funcParam0(32, -1470.0289f, -510.0777f, 128.9369f, 0);
	funcParam0(32, -1676.7316f, 269.6552f, 107.9641f, 1);
	funcParam0(32, -1400.9319f, 118.5333f, 85.1616f, 2);
	funcParam0(32, 2530.93f, -88.8537f, 49.5429f, 3);
	funcParam0(32, -579.085f, 571.1768f, 101.2385f, 4);
	funcParam0(32, -976.4532f, 250.0307f, 90.9676f, 5);
	funcParam0(32, 2154.9531f, 55.197f, 61.5309f, 6);
	funcParam0(32, 906.4382f, -1278.892f, 59.6485f, 7);
	funcParam0(32, 1700.3118f, -1814.4656f, 49.983f, 8);
	funcParam0(32, 996.5635f, -1219.119f, 62.015f, 9);
	funcParam0(33, -1374.0529f, -741.9763f, 90.7132f, 0);
	funcParam0(33, -1668.0166f, 269.834f, 107.7686f, 1);
	funcParam0(33, -1400.438f, 116.6743f, 84.7002f, 2);
	funcParam0(33, -1117.8484f, -223.7487f, 89.4773f, 3);
	funcParam0(33, -1479.6884f, -598.915f, 125.9951f, 4);
	funcParam0(33, -579.085f, 571.1768f, 101.2385f, 5);
	funcParam0(33, 2148.963f, 41.925f, 62.1145f, 6);
	funcParam0(33, 2549.044f, -68.0443f, 49.1493f, 7);
	funcParam0(33, 903.9188f, -1282.1792f, 60.0311f, 8);
	funcParam0(33, 1700.491f, -1813.5145f, 50.0697f, 9);
	funcParam0(33, 1443.9707f, -978.0084f, 55.8531f, 10);
	funcParam0(33, 910.3932f, -985.9777f, 56.96f, 11);
	funcParam0(33, 996.5635f, -1219.119f, 62.015f, 12);
	funcParam0(34, -1473.2189f, -503.3281f, 129.027f, 0);
	funcParam0(34, -1793.9357f, 458.5961f, 111.7438f, 1);
	funcParam0(34, -1314.9996f, 180.6012f, 74.4296f, 2);
	funcParam0(34, 2626.8003f, -37.336f, 51.4288f, 3);
	funcParam0(34, 858.6367f, -228.3782f, 98.6164f, 4);
	funcParam0(34, -565.9604f, 576.061f, 101.54f, 5);
	funcParam0(34, -405.8459f, -280.6045f, 87.186f, 6);
	funcParam0(34, 2103.3745f, 72.0044f, 68.6537f, 7);
	funcParam0(34, 1046.8728f, -188.8466f, 89.4694f, 8);
	funcParam0(34, 704.4484f, -891.234f, 48.262f, 9);
	funcParam0(34, 994.157f, -1220.1124f, 62.0152f, 10);
	funcParam0(35, -2432.8164f, 600.1653f, 126.3298f, 0);
	funcParam0(35, -1603.9242f, 363.9144f, 103.3773f, 1);
	funcParam0(36, 2141.3367f, -1296.338f, 41.4747f, 0);
	funcParam0(36, 2038.3613f, -1036.6228f, 42.4476f, 1);
	funcParam0(36, -2592.2065f, 235.6836f, 152.3149f, 2);
	funcParam0(36, -2301.5425f, -73.6087f, 237.0601f, 3);
	funcParam0(36, -840.8934f, -203.1287f, 76.5716f, 4);
	funcParam0(36, -1570.9554f, 424.7976f, 106.8498f, 5);
	funcParam0(36, 2629.543f, -54.2829f, 50.7092f, 6);
	funcParam0(36, 777.232f, -794.2211f, 55.6016f, 7);
	funcParam0(36, 879.1506f, -1217.0317f, 50.0378f, 8);
	funcParam0(36, 1589.2937f, -1813.6536f, 50.6747f, 9);
	funcParam0(36, 1400.9364f, -1723.7394f, 67.604f, 10);
	funcParam0(36, 1529.0415f, -986.2963f, 43.2569f, 11);
	funcParam0(37, 1718.5844f, -1134.7632f, 40.9841f, 0);
	funcParam0(37, 2212.391f, -958.284f, 40.9437f, 1);
	funcParam0(37, 2061.675f, -1028.8832f, 42.225f, 2);
	funcParam0(37, 2629.915f, -65.2306f, 50.3571f, 3);
	funcParam0(37, 2539.1235f, -164.4422f, 43.1456f, 4);
	funcParam0(37, -641.5084f, 379.0181f, 92.4459f, 5);
	funcParam0(37, 756.8406f, -354.5884f, 87.6244f, 6);
	funcParam0(37, 879.8415f, -140.9315f, 102.0446f, 7);
	funcParam0(37, -293.7909f, -257.8938f, 91.332f, 8);
	funcParam0(37, 153.8465f, 427.3995f, 137.5257f, 9);
	funcParam0(37, -919.447f, 67.989f, 47.314f, 10);
	funcParam0(37, 465.0752f, -307.1457f, 142.7813f, 11);
	funcParam0(37, -1072.9828f, 30.6801f, 57.1764f, 12);
	funcParam0(37, 1395.3961f, -1661.0431f, 66.2903f, 13);
	funcParam0(37, 1607.9028f, -1715.2031f, 53.2411f, 14);
	funcParam0(37, 839.8502f, -990.9603f, 52.3822f, 15);
	funcParam0(37, 1112.2125f, -893.3633f, 66.7555f, 16);
	funcParam0(37, 1637.3351f, -1590.0774f, 56.6167f, 17);
	funcParam0(37, 1491.9226f, -1978.3655f, 43.8377f, 18);
	funcParam0(37, 1120.7101f, -2130.1753f, 51.9952f, 19);
	funcParam0(38, -989.522f, 2219.715f, 339.224f, 0);
	funcParam0(39, -1456.0406f, -555.2747f, 131.116f, 0);
	funcParam0(40, 2208.6682f, -350.9536f, 41.488f, 0);
	funcParam0(40, 1733.9232f, -727.6727f, 40.8996f, 1);
	funcParam0(40, -2028.171f, 421.7315f, 123.1801f, 2);
	funcParam0(40, 238.8146f, 1242.903f, 185.8171f, 3);
	funcParam0(40, 646.006f, 1304.9276f, 193.4366f, 4);
	funcParam0(40, 438.9673f, 831.1111f, 145.7085f, 5);
	funcParam0(40, -545.762f, 393.6189f, 87.0076f, 6);
	funcParam0(40, 1017.37f, 1062.322f, 158.965f, 7);
	funcParam0(40, 2226.213f, -248.6621f, 42.5431f, 8);
	funcParam0(40, 2566.8933f, -71.0977f, 49.3333f, 9);
	funcParam0(40, 1389.072f, -2196.6956f, 48.3307f, 10);
	funcParam0(40, 906.9065f, -987.0414f, 56.96f, 11);
	funcParam0(41, -1423.5627f, 239.8399f, 97.1072f, 0);
	funcParam0(41, -159.2655f, 495.2184f, 103.6956f, 1);
	funcParam0(41, 1449.4371f, -1948.4662f, 52.2016f, 2);
	funcParam0(42, 716.5029f, -1515.2601f, 40.525f, 0);
	funcParam0(43, 2183.6555f, -465.3446f, 40.7656f, 0);
	funcParam0(43, 1788.3489f, -1018.9016f, 40.8415f, 1);
	funcParam0(43, -1339.337f, -1786.2017f, 75.749f, 2);
	funcParam0(43, -1473.819f, -1224.9152f, 76.4906f, 3);
	funcParam0(43, 1844.9064f, 1618.2828f, 168.6082f, 4);
	funcParam0(43, 1486.0282f, 2053.4136f, 295.9742f, 5);
	funcParam0(43, -469.4519f, 304.8075f, 43.7138f, 6);
	funcParam0(43, 467.632f, -1.275f, 109.2541f, 7);
	funcParam0(43, 18.9602f, -455.7956f, 71.8724f, 8);
	funcParam0(43, 1809.0492f, 888.507f, 108.648f, 9);
	funcParam0(43, 2046.033f, 21.8134f, 68.6331f, 10);
	funcParam0(43, 2658.7856f, 2260.44f, 160.2564f, 11);
	funcParam0(43, 2772.7432f, 1743.2776f, 148.0157f, 12);
	funcParam0(43, 2381.888f, 744.0209f, 66.541f, 13);
	funcParam0(43, 1633.6263f, -2060.8235f, 41.0693f, 14);
	funcParam0(43, 1660.1044f, -514.8263f, 46.409f, 15);
	funcParam0(43, 1032.5492f, -509.7064f, 90.0929f, 16);
	funcParam0(43, -5174.4004f, -2874.9849f, 2.1226f, 17);
	funcParam0(43, -5601.053f, -3600.778f, -22.9655f, 18);
	funcParam0(43, -4985.12f, -3303.4395f, 6.1895f, 19);
	funcParam0(43, -4584.1323f, -3523.23f, 21.2202f, 20);
	funcParam0(43, -5231.253f, -3974.5813f, -3.2106f, 21);
	funcParam0(43, -3849.781f, -3109.601f, -15.0322f, 22);
	funcParam0(43, -3149.5588f, -3100.0457f, -0.5091f, 23);
	funcParam0(43, -4278.7744f, -2701.9094f, -0.6108f, 24);
	funcParam0(43, -1834.6182f, -2489.122f, 46.0804f, 25);
	funcParam0(43, -3049.309f, -2576.2302f, 67.394f, 26);
	funcParam0(44, -1515.412f, 170.3214f, 98.5217f, 0);
	funcParam0(44, -1419.13f, 317.7131f, 91.6105f, 1);
	funcParam0(44, -828.3855f, -609.4851f, 57.7383f, 2);
	funcParam0(44, -1013.2946f, 124.4212f, 70.5694f, 3);
	funcParam0(44, 85.724f, 416.6526f, 126.8382f, 4);
	funcParam0(44, -634.6064f, -477.0305f, 49.1578f, 5);
	funcParam0(44, 1625.1678f, -1794.7228f, 51.3532f, 6);
	funcParam0(44, 814.0527f, -811.9885f, 58.0703f, 7);
	funcParam0(44, 1610.1714f, -583.1312f, 46.2253f, 8);
	funcParam0(45, 1675.267f, -1104.612f, 40.7606f, 0);
	funcParam0(45, 1662.5189f, -762.8489f, 40.7127f, 1);
	funcParam0(45, 2058.9888f, -401.0824f, 43.2562f, 2);
	funcParam0(45, -275.708f, -244.8788f, 89.9711f, 3);
	funcParam0(45, 311.6604f, 709.7629f, 145.6169f, 4);
	funcParam0(45, 557.3143f, 907.3863f, 146.6003f, 5);
	funcParam0(45, -394.3352f, 145.0423f, 42.1403f, 6);
	funcParam0(45, 485.5268f, 182.236f, 113.8813f, 7);
	funcParam0(45, 1093.6367f, -31.2284f, 85.7352f, 8);
	funcParam0(45, 12.4028f, -471.2083f, 72.0078f, 9);
	funcParam0(45, 1429.0547f, -347.5579f, 84.7219f, 10);
	funcParam0(45, 1064.0588f, -405.4702f, 91.0363f, 11);
	funcParam0(45, 1640.5646f, -219.4766f, 75.7454f, 12);
	funcParam0(45, 1677.6643f, -1723.655f, 51.8664f, 13);
	funcParam0(45, 1208.3108f, -2130.152f, 52.2418f, 14);
	funcParam0(46, 2688.8455f, 2094.2024f, 97.5463f, 0);
	funcParam0(46, -2238.875f, -1501.7759f, 141.4098f, 1);
	funcParam0(47, 2688.8455f, 2094.2024f, 98.1463f, 0);
	funcParam0(47, 2688.8455f, 2094.2024f, 98.1463f, 1);
	funcParam0(48, 1891.3218f, -935.3073f, 41.8009f, 0);
	funcParam0(48, 2056.889f, -1046.061f, 42.3639f, 1);
	funcParam0(48, 2470.5996f, 974.4517f, 93.5671f, 2);
	funcParam0(48, 2577.9673f, 476.1377f, 65.5212f, 3);
	funcParam0(48, 1452.3276f, -750.2531f, 54.1882f, 4);
	funcParam0(48, 1082.0503f, -474.3245f, 87.6101f, 5);
	funcParam0(48, 1633.1415f, -509.7347f, 47.6921f, 6);
	funcParam0(48, 1105.3525f, -887.1132f, 66.9528f, 7);
	funcParam0(48, 2016.224f, -1488.9479f, 41.5781f, 8);
	funcParam0(49, -1674.7913f, 333.9579f, 105.6924f, 0);
	funcParam0(49, -511.2702f, -88.7684f, 44.1198f, 1);
	funcParam0(49, -542.9289f, 258.9346f, 43.4502f, 2);
	funcParam0(49, 503.6389f, 959.0621f, 156.7788f, 3);
	funcParam0(49, 14.1111f, 598.583f, 126.4201f, 4);
	funcParam0(49, 792.1996f, -262.2156f, 98.8212f, 5);
	funcParam0(49, -660.1761f, 361.73f, 90.4883f, 6);
	funcParam0(50, 1718.8707f, -762.4149f, 41.4575f, 0);
	funcParam0(50, 1776.8676f, -864.06f, 40.6397f, 1);
	funcParam0(50, 2002.8206f, -479.3671f, 40.9727f, 2);
	funcParam0(50, 2058.1309f, -363.6342f, 40.6108f, 3);
	funcParam0(50, 2117.5479f, -876.7509f, 40.4377f, 4);
	funcParam0(50, 2099.0852f, -748.1615f, 40.563f, 5);
	funcParam0(50, -1820.1224f, -793.2049f, 102.8703f, 6);
	funcParam0(50, -1074.5381f, -491.6324f, 80.6666f, 7);
	funcParam0(50, -613.114f, 97.6527f, 52.3257f, 8);
	funcParam0(50, -487.4074f, 75.9777f, 48.1205f, 9);
	funcParam0(50, 2726.0364f, 18.5933f, 48.8501f, 10);
	funcParam0(50, 2552.2532f, -194.6156f, 42.4538f, 11);
	funcParam0(50, 2537.3596f, -260.3671f, 41.3014f, 12);
	funcParam0(50, 2206.5647f, -453.0783f, 40.5481f, 13);
	funcParam0(50, 2388.9775f, -381.6493f, 41.1678f, 14);
	funcParam0(50, 627.507f, 385.186f, 105.5567f, 15);
	funcParam0(50, 851.2086f, 709.5713f, 110.5522f, 16);
	funcParam0(50, -658.743f, 346.6573f, 88.1336f, 17);
	funcParam0(50, 142.2479f, -320.3969f, 104.9327f, 18);
	funcParam0(50, 297.612f, 201.225f, 101.0823f, 19);
	funcParam0(50, 1105.7389f, -53.9801f, 85.3329f, 20);
	funcParam0(50, 840.7557f, 386.4758f, 117.9091f, 21);
	funcParam0(50, -676.4611f, -374.1973f, 53.7761f, 22);
	funcParam0(50, -680.1461f, -394.7518f, 52.6402f, 23);
	funcParam0(50, 2707.187f, 136.8266f, 53.4102f, 24);
	funcParam0(50, 2236.3936f, 1716.1805f, 100.8078f, 25);
	funcParam0(50, 2026.6487f, 194.4583f, 76.1849f, 26);
	funcParam0(50, 2428.9224f, 1040.7694f, 86.3179f, 27);
	funcParam0(50, 1632.8665f, -1713.8114f, 51.4767f, 28);
	funcParam0(50, 1481.719f, -1697.79f, 61.3129f, 29);
	funcParam0(50, 925.4667f, -1081.4375f, 55.1439f, 30);
	funcParam0(50, 830.9171f, -716.0651f, 63.6039f, 31);
	funcParam0(50, 815.1224f, -912.9166f, 50.2146f, 32);
	funcParam0(50, 1371.6682f, -238.8062f, 97.1467f, 33);
	funcParam0(50, 1260.1271f, -162.0665f, 96.7544f, 34);
	funcParam0(50, 950.7592f, -1242.8418f, 53.845f, 35);
	funcParam0(51, 1490.5486f, -1739.6967f, 59.4025f, 0);
	funcParam0(51, 755.7448f, -830.3978f, 53.5609f, 1);
	funcParam0(51, 1293.2316f, -793.3234f, 75.2416f, 2);
	funcParam0(51, 1121.0258f, -750.4242f, 91.5402f, 3);
	funcParam0(51, 1324.9071f, -255.0629f, 100.8022f, 4);
	funcParam0(53, -2198.091f, -1560.288f, 147.9514f, 0);
	funcParam0(53, -2099.421f, -1258.196f, 121.8341f, 1);
	funcParam0(53, -2492.387f, -1465.8068f, 146.7759f, 2);
	funcParam0(54, -2201.438f, -1561.316f, 149.4853f, 0);
	funcParam0(54, -1996.678f, -1349.222f, 116.339f, 1);
	funcParam0(54, -2413.329f, -1441.075f, 150.5578f, 2);
	funcParam0(54, -2220.976f, -1286.49f, 133.1413f, 3);
	funcParam0(54, -2390.821f, -1215.595f, 157.3621f, 4);
	funcParam0(54, -1923.344f, -1993.478f, 77.1042f, 5);
	funcParam0(55, -2324.989f, -1650.8649f, 132.8996f, 0);
	funcParam0(55, -1953.4707f, -1844.5817f, 116.2499f, 1);
	funcParam0(56, -1727.7596f, -1275.4336f, 90.6868f, 0);
	funcParam0(56, -1187.2982f, -1501.9508f, 76.6712f, 1);
	funcParam0(56, -1308.7618f, -1249.4022f, 81.9299f, 2);
	funcParam0(56, -1239.0117f, -1709.8954f, 77.9413f, 3);
	funcParam0(56, -980.5764f, -1818.6388f, 62.5702f, 4);
	funcParam0(56, -1401.8896f, -1416.2794f, 92.8167f, 5);
	funcParam0(56, -1203.8411f, -1824.3751f, 60.6905f, 6);
	funcParam0(56, -1840.4902f, -1687.2975f, 105.0552f, 7);
	funcParam0(56, -1972.3132f, -1381.9287f, 114.4789f, 8);
	funcParam0(56, -1615.5325f, -1978.4591f, 49.9575f, 9);
	funcParam0(56, -1765.3088f, -1736.5173f, 92.3731f, 10);
	funcParam0(56, -1885.4235f, -1341.1733f, 99.7828f, 11);
	funcParam0(57, 1574.2406f, -721.5044f, 42.0845f, 0);
	funcParam0(57, -1159.4491f, 138.6042f, 43.3767f, 1);
	funcParam0(57, -1682.8268f, 88.1555f, 145.8255f, 2);
	funcParam0(57, -2155.849f, -72.5493f, 232.6642f, 3);
	funcParam0(57, 948.9059f, 998.7804f, 140.8828f, 4);
	funcParam0(57, 174.6441f, 153.5681f, 106.6718f, 5);
	funcParam0(57, 1205.9946f, 569.589f, 86.8041f, 6);
	funcParam0(57, -68.9876f, -297.8486f, 93.1965f, 7);
	funcParam0(57, 1729.6788f, -1685.3849f, 47.5734f, 8);
	funcParam0(57, 1196.2579f, -579.7256f, 66.6338f, 9);
	funcParam0(57, 950.153f, -1019.6741f, 58.3151f, 10);
	funcParam0(57, -5608.1177f, -3556.6301f, -24.1127f, 11);
	funcParam0(57, -4622.8174f, -3354.2256f, 20.9842f, 12);
	funcParam0(57, -4051.4539f, -3046.3997f, -10.438f, 13);
	funcParam0(58, -1174.9767f, 76.6906f, 41.3614f, 0);
	funcParam0(58, -1018.4623f, 437.8081f, 54.8274f, 1);
	funcParam0(58, -807.5107f, 69.3361f, 40.6991f, 2);
	funcParam0(58, -1026.0393f, -59.0312f, 40.8465f, 3);
	funcParam0(58, -708.0551f, -333.2857f, 41.1294f, 4);
	funcParam0(58, -508.7768f, 218.219f, 40.6822f, 5);
	funcParam0(58, -196.2379f, -574.9825f, 40.6629f, 6);
	funcParam0(58, 1505.286f, -771.5364f, 45.9044f, 7);
	funcParam0(59, 1972.0945f, -681.0854f, 43.0215f, 0);
	funcParam0(59, 2440.7207f, -676.4698f, 42.2753f, 1);
	funcParam0(59, 2098.5107f, -353.6877f, 40.8802f, 2);
	funcParam0(60, -2586.9229f, -264.5349f, 161.6671f, 0);
	funcParam0(60, -2578.181f, 388.9668f, 148.3721f, 1);
	funcParam0(60, -2196.5764f, 468.8412f, 119.5676f, 2);
	funcParam0(60, -1637.2004f, -1513.2339f, 82.6688f, 3);
	funcParam0(60, -825.3087f, -1804.9507f, 59.0313f, 4);
	funcParam0(60, 1786.9149f, 1588.926f, 167.4663f, 5);
	funcParam0(60, 1959.8942f, 1387.2507f, 179.786f, 6);
	funcParam0(60, 637.5925f, 2099.4553f, 222.0308f, 7);
	funcParam0(60, 1296.321f, 1161.6852f, 150.1379f, 8);
	funcParam0(60, 204.3004f, 261.9908f, 111.8031f, 9);
	funcParam0(60, 697.4816f, 65.372f, 150.8549f, 10);
	funcParam0(61, 1614.12f, -810.2f, 41.15f, 0);
	funcParam0(61, 2385.25f, -668.01f, 41.17f, 1);
	funcParam0(62, -1922.8556f, 624.1806f, 114.5816f, 0);
	funcParam0(62, -2612.3704f, 494.5219f, 143.2249f, 1);
	funcParam0(62, -1981.2252f, -540.608f, 145.1829f, 2);
	funcParam0(62, -1389.8916f, -1275.583f, 81.3028f, 3);
	funcParam0(62, -1676.0417f, -2020.0846f, 47.7628f, 4);
	funcParam0(62, -1004.3238f, -1851.333f, 60.9017f, 5);
	funcParam0(62, 1071.2094f, 1214.037f, 196.1523f, 6);
	funcParam0(62, 1463.0822f, 1026.3258f, 170.4556f, 7);
	funcParam0(62, -563.5857f, 1206.5206f, 156.4777f, 8);
	funcParam0(62, -1374.102f, 628.8635f, 109.8288f, 9);
	funcParam0(62, 69.4236f, -43.6054f, 103.7584f, 10);
	funcParam0(62, -373.6552f, -72.1375f, 42.3578f, 11);
	funcParam0(62, 556.9641f, 356.811f, 105.9842f, 12);
	funcParam0(62, 474.0224f, -316.3003f, 141.9746f, 13);
	funcParam0(62, -1862.2322f, -1332.6808f, 97.2679f, 14);
	funcParam0(62, -2483.8716f, -1309.6162f, 158.4832f, 15);
	funcParam0(62, -1958.1465f, -1786.7008f, 120.1902f, 16);
	funcParam0(63, -1127.1f, -324.4f, 87.7f, 0);
	funcParam0(63, -1099.6f, -112.7f, 44.2f, 1);
	funcParam0(63, -746.4f, -124.8f, 82.7f, 2);
	funcParam0(63, -2107.655f, -468.3287f, 149.7019f, 3);
	funcParam0(63, -2282.4358f, 497.8875f, 120.5164f, 4);
	funcParam0(63, -2007.449f, -746.912f, 104.459f, 5);
	funcParam0(64, -6.8961f, 294.2949f, 110.201f, 0);
	funcParam0(64, 176.5703f, 573.1811f, 116.778f, 1);
	funcParam0(64, 1896.5009f, -1647.79f, 42.5318f, 2);
	funcParam0(64, 1047.1127f, -1064.4656f, 65.5536f, 3);
	funcParam0(64, -5025.307f, -2638.411f, -12.8459f, 4);
	funcParam0(64, -5100.704f, -3179.0386f, -15.6474f, 5);
	funcParam0(64, -3879.7246f, -2841.3708f, -15.3182f, 6);
	funcParam0(65, 1615.2688f, 1613.7426f, 147.7296f, 0);
	funcParam0(65, 1423.9789f, 1102.4762f, 185.6182f, 1);
	funcParam0(65, 2043.08f, 1720.9297f, 154.4757f, 2);
	funcParam0(65, 649.9562f, 1908.1707f, 214.0831f, 3);
	funcParam0(65, 950.4314f, 388.0648f, 110.4698f, 4);
	funcParam0(65, 1355.8972f, 467.7415f, 87.2016f, 5);
	funcParam0(65, -472.058f, -172.115f, 43.1987f, 6);
	funcParam0(65, 1339.0511f, -1626.5874f, 65.6338f, 7);
	funcParam0(65, 1519.4695f, -2083.6135f, 42.6887f, 8);
	funcParam0(65, 1166.1031f, -2132.9097f, 55.964f, 9);
	funcParam0(66, -1159.1152f, 397.0877f, 60.4953f, 0);
	funcParam0(66, -1278.3585f, 291.4224f, 76.6652f, 1);
	funcParam0(66, -1371.2797f, 283.4114f, 86.0114f, 2);
	funcParam0(66, -1117.6871f, 406.6783f, 55.3681f, 3);
	funcParam0(66, -1288.3231f, 148.5012f, 71.7864f, 4);
	funcParam0(66, -1648.4469f, -114.858f, 170.0504f, 5);
	funcParam0(66, -1081.189f, -405.0457f, 97.0153f, 6);
	funcParam0(66, 206.8413f, -170.3653f, 130.5284f, 7);
	funcParam0(66, -621.2297f, 186.8452f, 41.2741f, 8);
	funcParam0(66, 44.3784f, 388.2357f, 129.8287f, 9);
	funcParam0(66, 752.9834f, -58.1133f, 157.6479f, 10);
	funcParam0(66, 822.6152f, 578.6021f, 117.7806f, 11);
	funcParam0(67, 2572.8948f, 1545.3674f, 95.1632f, 0);
	funcParam0(67, 2569.5305f, 1820.2728f, 86.0089f, 1);
	funcParam0(67, 2388.2102f, 1048.9924f, 85.1056f, 2);
	funcParam0(67, 2769.92f, 1013.51f, 60.84f, 3);
	funcParam0(67, 2697.282f, 1627.2556f, 148.2803f, 4);
	funcParam0(68, 2404.5032f, -708.3487f, 40.1213f, 0);
	funcParam0(68, 2412.389f, -632.1752f, 41.1803f, 1);
	funcParam0(68, 2141.9194f, -775.2498f, 40.52f, 2);
	funcParam0(68, 2188.8748f, -378.6358f, 40.6047f, 3);
	funcParam0(68, 2494.6118f, -245.3792f, 41.1532f, 4);
	funcParam0(69, 2407.2183f, -720.1194f, 48f, 0);
	funcParam0(69, 2356.204f, -617.4643f, 40.6704f, 1);
	funcParam0(69, 2266.7302f, -859.36f, 40.6498f, 2);
	funcParam0(69, 2117.661f, -468.6407f, 40.569f, 3);
	funcParam0(69, 2175.3628f, -777.6237f, 40.5395f, 4);
	funcParam0(70, -2284.7686f, -423.4211f, 156.8616f, 0);
	funcParam0(70, -1883.307f, 373.0742f, 119.2403f, 1);
	funcParam0(70, -2651.707f, 210.0714f, 151.7762f, 2);
	funcParam0(70, -1623.5259f, 235.4652f, 105.3645f, 3);
	funcParam0(70, -1926.2511f, -678.1707f, 116.5043f, 4);
	funcParam0(70, -2689.542f, -305.0743f, 148.3352f, 5);
	funcParam0(71, -1320.6947f, -2010.0768f, 40.5892f, 0);
	funcParam0(71, -738.0292f, -1711.02f, 40.4947f, 1);
	funcParam0(71, 146.1645f, -630.6563f, 40.7397f, 2);
	funcParam0(71, -469.2039f, -576.6931f, 40.7896f, 3);
	funcParam0(71, -286.3765f, -568.8775f, 40.9598f, 4);
	funcParam0(71, 3138.4456f, 1451.1693f, 40.4687f, 5);
	funcParam0(71, 2871.4253f, 933.2757f, 40.6453f, 6);
	funcParam0(71, 2916.922f, 366.8459f, 40.6137f, 7);
	funcParam0(72, 2355.67f, -682.6993f, 46.9981f, 0);
	funcParam0(72, 1655.174f, -1002.744f, 49.9165f, 1);
	funcParam0(72, 2175.948f, -453.2319f, 46.1423f, 2);
	funcParam0(72, 1820.147f, -911.4569f, 50.6755f, 3);
	funcParam0(72, 1684.56f, -701.666f, 48.775f, 4);
	funcParam0(72, 2452.194f, 1285.645f, 118.422f, 5);
	funcParam0(72, 2690.952f, 1786.37f, 109.0461f, 6);
	funcParam0(72, 3009.679f, 1704.29f, 79.1191f, 7);
	funcParam0(72, 2276.207f, 1602.347f, 88.9849f, 8);
	funcParam0(73, 2397.366f, 1666.1545f, 95.0309f, 0);
	funcParam0(73, 2470.936f, 1584.5302f, 86.2933f, 1);
	funcParam0(73, 2330.5186f, 1741.0762f, 104.3994f, 2);
	funcParam0(73, 2383.9968f, 1763.2275f, 106.3f, 3);
	funcParam0(74, 2414.2607f, 1766.1871f, 88.6656f, 0);
	funcParam0(75, -3625.0134f, -2604.9604f, -14.2406f, 0);
	funcParam0(76, -5526.436f, -2933.683f, -2.9655f, 0);
	funcParam0(77, 2724.5f, -1115.8f, 49.7f, 0);
	funcParam0(77, 2856.7f, -1248.3f, 46.4f, 1);
	funcParam0(77, 2875.7f, -1181.2f, 46.1f, 2);
	funcParam0(78, 2324.6f, -1092.9f, 44.7f, 0);
	funcParam0(78, 2276.4f, -1371.3f, 45.8f, 1);
	funcParam0(79, -1796.1654f, -383.4302f, 159.2698f, 0);
	funcParam0(79, -278.5714f, 785.1736f, 118.4981f, 1);
	funcParam0(79, -278.5714f, 785.1736f, 118.4981f, 2);
	funcParam0(79, 2925.6501f, 1275.8726f, 43.6309f, 3);
	funcParam0(79, 1323.1447f, -1294.0172f, 76.017f, 4);
	funcParam0(79, 1323.1447f, -1294.0172f, 76.017f, 5);
	funcParam0(80, 2821.827f, -1275.462f, 47.101f, 0);
	funcParam0(80, 2841.75f, -1164.15f, 46.7f, 1);
	funcParam0(80, 2741.723f, -1315.3947f, 47.648f, 2);
	funcParam0(81, 2815.91f, -1222.949f, 46.526f, 0);
	funcParam0(81, 2602.444f, -1286.5703f, 51.2567f, 1);
	funcParam0(81, 2661.251f, -1202.6f, 52.2783f, 2);
	funcParam0(81, 2750.527f, -1206.293f, 48.3767f, 3);
	funcParam0(81, 2530.8828f, -1149.3745f, 49.0052f, 4);
	funcParam0(81, 2714.385f, -1233.121f, 49.172f, 5);
	funcParam0(81, 2639.789f, -1417.126f, 45.376f, 6);
	funcParam0(81, 2703.266f, -1184.961f, 50.865f, 7);
	funcParam0(81, 2781.518f, -1278.669f, 46.429f, 8);
	funcParam0(81, 2593.1646f, -1207.4845f, 52.3112f, 9);
	funcParam0(81, 2670.08f, -1113.233f, 49.552f, 10);
	funcParam0(81, 2482.088f, -1465.71f, 45.1902f, 11);
	funcParam0(81, -791.817f, -1311.097f, 42.623f, 12);
	funcParam0(81, -778.963f, -1260.098f, 42.643f, 13);
	funcParam0(81, -843.7784f, -1282.6638f, 42.3634f, 14);
	funcParam0(82, 2675.32f, -1180.95f, 52.0954f, 0);
	funcParam0(82, 2642.136f, -1229.3048f, 52.2161f, 1);
	funcParam0(82, 2835.006f, -1190.365f, 46.598f, 2);
	funcParam0(82, 2773.176f, -1120.12f, 46.534f, 3);
	funcParam0(82, 2524.305f, -1406.557f, 45.1683f, 4);
	funcParam0(82, 2738.86f, -1317.4163f, 46.5925f, 5);
	funcParam0(82, 2677.741f, -1342.216f, 47.7528f, 6);
	funcParam0(82, 2651.291f, -1410.081f, 45.3449f, 7);
	funcParam0(82, -816.683f, -1310.262f, 42.681f, 8);
	funcParam0(83, -3712.2944f, -2624.4155f, -14.6756f, 0);
	funcParam0(83, -3587.756f, -2599.626f, -15.0415f, 1);
	funcParam0(84, -315.9042f, 796.2438f, 116.6553f, 0);
	funcParam0(84, -315.804f, 796.344f, 116.655f, 1);
	funcParam0(85, 2815.91f, -1222.949f, 46.526f, 0);
	funcParam0(85, 2602.444f, -1286.5703f, 51.2567f, 1);
	funcParam0(85, 2661.151f, -1202.7f, 52.2783f, 2);
	funcParam0(85, 2750.427f, -1206.293f, 48.3767f, 3);
	funcParam0(85, 2530.8828f, -1149.3745f, 49.0052f, 4);
	funcParam0(85, 2639.789f, -1417.126f, 45.376f, 5);
	funcParam0(85, 2703.266f, -1184.961f, 50.865f, 6);
	funcParam0(85, 2777.176f, -1284.33f, 46.401f, 7);
	funcParam0(85, 2593.1646f, -1207.4845f, 52.3112f, 8);
	funcParam0(85, 2670.315f, -1120.21f, 49.655f, 9);
	funcParam0(85, 2482.088f, -1465.71f, 45.1902f, 10);
	funcParam0(86, 2915.228f, 1331.6937f, 43.9828f, 0);
	funcParam0(86, 1393.3807f, -1137.4147f, 75.1469f, 1);
	funcParam0(87, -313.152f, 829.182f, 118.494f, 0);
	funcParam0(87, -228.0928f, 748.1144f, 116.2867f, 1);
	funcParam0(87, -282.677f, 663.646f, 112.414f, 2);
	funcParam0(87, 2964.6353f, 462.0895f, 48.2494f, 3);
	funcParam0(87, 2980.1008f, 581.1429f, 43.3314f, 4);
	funcParam0(87, 1442.2207f, -1303.7806f, 76.7482f, 5);
	funcParam0(87, 1404.719f, -1369.902f, 80.301f, 6);
	funcParam0(87, 1310.117f, -1357.097f, 76.968f, 7);
	funcParam0(87, 1319.893f, -1327.6f, 76.174f, 8);
	funcParam0(88, -308.8745f, 800.6629f, 117.9796f, 0);
	funcParam0(88, 2949.3433f, 523.1172f, 44.3583f, 1);
	funcParam0(89, 1342.1503f, -1375.004f, 79.4998f, 0);
	funcParam0(90, -347.8752f, 741.1281f, 116.4358f, 0);
	funcParam0(90, 2958.8616f, 524.6724f, 43.6222f, 1);
	funcParam0(91, -3715.8665f, -2568.8896f, -14.9211f, 0);
	funcParam0(91, -3637.2231f, -2630.0107f, -14.8352f, 1);
	funcParam0(92, -295.4f, 735.1f, 116.4f, 0);
	funcParam0(92, -362.7055f, 831.2882f, 115.7839f, 1);
	funcParam0(92, 1334.67f, -1365.789f, 78.9413f, 2);
	funcParam0(93, 2503.7546f, -1164.5312f, 48.1928f, 0);
	funcParam0(94, 2592.7f, -1207.5f, 52.5f, 0);
	funcParam0(94, 2380.6528f, -1353.5217f, 45.3453f, 1);
	funcParam0(94, -336f, 707.7f, 118.2f, 2);
	funcParam0(94, -211.2f, 640.7f, 113f, 3);
	funcParam0(94, -248f, 734.7f, 116.9f, 4);
	funcParam0(94, 1326.8f, -1220.3f, 79.6f, 5);
	funcParam0(94, 1365.6f, -1343.7f, 78f, 6);
	funcParam0(94, 1272.4f, -1281.7f, 75.3f, 7);
	funcParam0(94, 1358.1f, -1379.7f, 79.5f, 8);
	funcParam0(95, 2507.6934f, -1202.4331f, 51.4826f, 0);
	funcParam0(96, 2355.992f, -1421.8356f, 41.3914f, 0);
	funcParam0(96, 2477.7f, -1489.4f, 46.2f, 1);
	funcParam0(96, 2439f, -1477.2f, 45.4f, 2);
	funcParam0(96, 2803.6f, -1227.4f, 47.2f, 3);
	funcParam0(96, 1350.4f, -1260.6f, 78.3f, 4);
	funcParam0(96, 1294.8f, -1343.3f, 77f, 5);
	funcParam0(96, 1392.2f, -1312.7f, 77.6f, 6);
	funcParam0(97, -1808.8075f, -363.4895f, 161.1128f, 0);
	funcParam0(97, -1830.2035f, -428.2535f, 159.037f, 1);
	funcParam0(97, -1771.4679f, -437.2715f, 154.0925f, 2);
	funcParam0(97, 1428.5128f, 366.0985f, 87.8453f, 3);
	funcParam0(97, 1421.5278f, 323.5045f, 87.4142f, 4);
	funcParam0(97, 1357.2656f, 306.072f, 86.3373f, 5);
	funcParam0(98, -272.525f, 799.1819f, 118.0958f, 0);
	funcParam0(98, -336.1102f, 776.7322f, 114.9947f, 1);
	funcParam0(98, 2959.161f, 492.569f, 45.437f, 2);
	funcParam0(98, 2959.535f, 590.465f, 43.514f, 3);
	funcParam0(99, -249.4169f, 764.9301f, 116.4413f, 0);
	funcParam0(99, -329.8f, 747.6f, 116.3f, 1);
	funcParam0(100, -1788.7236f, -366.4714f, 159.7196f, 0);
	funcParam0(101, 1342.767f, -1374.869f, 79.5128f, 0);
	funcParam0(101, 1342.767f, -1374.869f, 79.5128f, 1);
	funcParam0(102, -1786.066f, -401.217f, 155.484f, 0);
	funcParam0(102, -285.4209f, 865.4907f, 120.1243f, 1);
	funcParam0(102, -258.9237f, 733.0353f, 115.9265f, 2);
	funcParam0(103, 2720.815f, -1283.54f, 48.638f, 0);
	funcParam0(103, 2551.768f, -1173.668f, 52.683f, 1);
	funcParam0(103, 2948.19f, 526.29f, 44.34f, 2);
	funcParam0(104, 2663.3115f, -1217.5942f, 52.3003f, 0);
	funcParam0(104, 2497.3306f, -1269.9004f, 48.1784f, 1);
	funcParam0(104, 2866.205f, -1211.5835f, 45.2799f, 2);
	funcParam0(105, 2648.3074f, -1199.5773f, 52.3577f, 0);
	funcParam0(105, 2744.0205f, -1214.5941f, 48.5629f, 1);
	funcParam0(106, 2688.3098f, -1114.0654f, 51.8697f, 0);
	funcParam0(106, -764.837f, -1260.9362f, 46.4259f, 1);
	funcParam0(106, -315.3432f, 734.9009f, 122.8928f, 2);
	funcParam0(106, 1374.8802f, -1215.1327f, 83.223f, 3);
	funcParam0(107, 2793.112f, -1173.748f, 46.924f, 0);
	funcParam0(108, -308.4347f, 788.9138f, 116.5967f, 0);
	funcParam0(108, 2952.4172f, 523.4847f, 44.4925f, 1);
	funcParam0(108, -3707.4688f, -2600.353f, -14.6511f, 2);
	funcParam0(109, -1768.2374f, -386.8972f, 156.7337f, 0);
	funcParam0(109, 2941.604f, 1321.632f, 43.7591f, 1);
	funcParam0(109, 1330.2528f, -1317.4814f, 76.9597f, 2);
	funcParam0(110, 2795.9607f, -1170.355f, 46.924f, 0);
	funcParam0(111, -811.953f, -1325.25f, 42.577f, 0);
	funcParam0(111, -307.3034f, 797.0555f, 117.9233f, 1);
	funcParam0(111, -242.7336f, 766.1105f, 117.085f, 2);
	funcParam0(111, 2951.335f, 523.949f, 44.385f, 3);
	funcParam0(112, 2669.6482f, -1181.5171f, 52.1704f, 0);
	funcParam0(112, 2691.5337f, -1262.1207f, 50.0244f, 1);
	funcParam0(112, 2750.9807f, -1163.6403f, 47.9651f, 2);
	funcParam0(113, -957.44f, -1201.16f, 54.8f, 0);
	funcParam0(113, -957.5674f, -1209.503f, 53.9484f, 1);
	funcParam0(113, 1297.35f, -1214f, 80.47f, 2);
	funcParam0(114, 2714.69f, -1214.11f, 50.73f, 0);
	funcParam0(114, 2654.3022f, -1124.292f, 49.93f, 1);
	funcParam0(114, 2504.71f, -1197.69f, 48.22f, 2);
	funcParam0(114, 2406.22f, -1421.73f, 44.9f, 3);
	funcParam0(114, 2813.77f, -1270.79f, 46.41f, 4);
	funcParam0(114, 2779.46f, -1167.3f, 47.42f, 5);
	funcParam0(114, -294.4247f, 783.5817f, 118.2912f, 6);
	funcParam0(114, -238.2696f, 694.6663f, 112.4419f, 7);
	funcParam0(114, -285.2f, 839.39f, 119.98f, 8);
	funcParam0(114, -326.5073f, 795.0771f, 116.8913f, 9);
	funcParam0(114, 2953.704f, 518.1846f, 44.4672f, 10);
	funcParam0(114, 2959.148f, 590.6953f, 43.5041f, 11);
	funcParam0(114, 2964.5269f, 473.1478f, 47.4215f, 12);
	funcParam0(114, 1323.8812f, -1313.5134f, 75.8026f, 13);
	funcParam0(114, 1299.8683f, -1299.6547f, 76.3373f, 14);
	funcParam0(114, 1333.02f, -1248.85f, 76.55f, 15);
	funcParam0(115, -298.302f, 786.458f, 118.188f, 0);
	funcParam0(115, -260.238f, 766.421f, 117.481f, 1);
	funcParam0(115, -342.301f, 792.306f, 116.167f, 2);
	funcParam0(116, -250.01f, 768.66f, 116.55f, 0);
	funcParam0(116, -349.09f, 740.88f, 116.43f, 1);
	funcParam0(116, -212.04f, 640.67f, 111.98f, 2);
	funcParam0(116, 2938.38f, 1320.05f, 43.23f, 3);
	funcParam0(116, 2870.76f, 1349.07f, 61.35f, 4);
	funcParam0(116, 1286.04f, -1287.2f, 74.98f, 5);
	funcParam0(116, 1366.49f, -1374.91f, 77.85f, 6);
	funcParam0(117, -3665.4f, -2608.5f, -14f, 0);
	funcParam0(117, -3625.2f, -2617.3f, -13.8f, 1);
	funcParam0(118, 2565.529f, -1337.1062f, 46.7954f, 0);
	funcParam0(118, 2813.954f, -1198.445f, 46.429f, 1);
	funcParam0(118, 2718.987f, -1252.988f, 48.8628f, 2);
	funcParam0(118, 2655.251f, -1121.463f, 49.9823f, 3);
	funcParam0(118, 2504.686f, -1230.827f, 48.22f, 4);
	funcParam0(118, 2675.291f, -1388.4957f, 45.499f, 5);
	funcParam0(118, -772.2189f, -1330.509f, 42.6413f, 6);
	funcParam0(118, -841.984f, -1319.104f, 42.699f, 7);
	funcParam0(118, -855.149f, -1381.493f, 42.709f, 8);
	funcParam0(118, -755.542f, -1304.519f, 42.759f, 9);
	funcParam0(119, -1371.9f, 117.2f, 83.8f, 0);
	funcParam0(119, -1414.094f, -1515.714f, 85.1308f, 1);
	funcParam0(119, -1567.1847f, -1670.6794f, 78.1019f, 2);
	funcParam0(119, 889.8477f, 1273.715f, 234.1128f, 3);
	funcParam0(119, 712.6324f, 1884.5032f, 238.3911f, 4);
	funcParam0(119, 1208.474f, 725.8189f, 100.6124f, 5);
	funcParam0(119, 1065.796f, 45.7184f, 85.7752f, 6);
	funcParam0(119, 2339.173f, 355.338f, 55.7178f, 7);
	funcParam0(119, 2522.9062f, 1697.219f, 86.4072f, 8);
	funcParam0(119, 1178.059f, -2177.841f, 54.1327f, 9);
	funcParam0(119, 1578.016f, -195.802f, 79.6787f, 10);
	funcParam0(119, 825.1554f, -1435.466f, 52.8703f, 11);
	funcParam0(119, 920.1998f, -560.8011f, 89.0324f, 12);
	funcParam0(119, -2242.403f, -1552.961f, 149.5428f, 13);
	funcParam0(119, -2426.368f, -1349.323f, 152.7462f, 14);
	funcParam0(119, -2058.9233f, -1291.2875f, 116.7038f, 15);
	funcParam0(119, -4483.0454f, -2944.1338f, -19.1217f, 16);
	return;
}

void func_111(int iParam0, int iParam1, int iParam2) // Position - 0x156CD Hash - 0x9D18C10 ^0x811F9695
{
	if (!func_383(iParam0))
		return;

	if (!func_384(iParam1))
		return;

	MISC::SET_BIT(&(Global_1310750[iParam0 /*111*/].f_34), iParam1);
	func_386(iParam0, func_385(iParam1), iParam2);
	return;
}

void func_112(int iParam0, int iParam1, int iParam2) // Position - 0x1570D Hash - 0x82E3CB13 ^0xA60BA229
{
	int i;
	int num;
	int num2;

	if (!func_383(iParam0))
		return;

	func_387(&(Global_1310750[iParam0 /*111*/].f_35), iParam1);

	for (i = 0; i < 25; i = i + 1)
	{
		num2 = func_388(i);
	
		if (num2 && iParam1 != false)
		{
			num = 17 + i;
			Global_1310750[iParam0 /*111*/].f_64[num] = iParam2;
		}
	}

	return;
}

void func_113() // Position - 0x1576D Hash - 0x96C56C6C ^0x96C56C6C
{
	int i;
	int j;
	int num;
	int k;
	int num2;

	for (i = 0; i < 17; i = i + 1)
	{
		Global_1326862.f_512[i] = num2;
		j = 0;
	
		for (j = 0; j < 120; j = j + 1)
		{
			if (func_389(j, 1) && MISC::IS_BIT_SET(Global_1310750[j /*111*/].f_34, i) && !func_390(j, 8192))
			{
				Global_1326862.f_11[num2] = j;
				num2 = num2 + 1;
			}
		}
	
		Global_1326862.f_558[i] = num2 - 1;
	}

	for (k = 0; k < 25; k = k + 1)
	{
		num = func_388(k);
		Global_1326862.f_512[17 + k] = num2;
		j = 0;
	
		for (j = 0; j < 120; j = j + 1)
		{
			if (func_389(j, 2) && func_391(j, num) && !func_390(j, 8192))
			{
				Global_1326862.f_11[num2] = j;
				num2 = num2 + 1;
			}
		}
	
		Global_1326862.f_558[17 + k] = num2 - 1;
	}

	return;
}

BOOL func_114(int iParam0) // Position - 0x15885 Hash - 0x7946919E ^0x7946919E
{
	return !(iParam0 <= 0);
}

BOOL func_115() // Position - 0x15892 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

void func_116(int iParam0, BOOL bParam1) // Position - 0x158A0 Hash - 0x2762FC5A ^0x2762FC5A
{
	if (!func_114(iParam0))
		return;

	if (func_392(iParam0))
		return;

	func_393(iParam0, 2);

	if (bParam1)
		if (!func_394(0, false, true))
			func_308(true, 6);

	return;
}

void func_117() // Position - 0x158DE Hash - 0xAD9FA7EC ^0xAD9FA7EC
{
	int i;

	for (i = 0; i < 175; i = i + 1)
	{
		func_395(i);
	}

	return;
}

void func_118(int iParam0, char* sParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15) // Position - 0x158FF Hash - 0xE358F030 ^0x2A91AB2C
{
	if (!func_396(iParam0))
		return;

	if (Global_1879534 == false)
	{
		Global_1392626[iParam0 /*32*/].f_3 = func_288(0, iParam0, 6, func_397(iParam0));
		TEXT_LABEL_ASSIGN_STRING(&(Global_1392626[iParam0 /*32*/].f_13), sParam1, 64);
		Global_1392626[iParam0 /*32*/].f_12 = iParam2;
		Global_1392626[iParam0 /*32*/].f_27 = { fParam6 };
		Global_1392626[iParam0 /*32*/].f_4 = fParam9;
		Global_1392626[iParam0 /*32*/].f_22 = iParam11;
		Global_1392626[iParam0 /*32*/].f_7 = iParam12;
		Global_1392626[iParam0 /*32*/].f_5 = iParam13;
		Global_1392626[iParam0 /*32*/].f_6 = iParam15;
	}

	Global_1392626[iParam0 /*32*/].f_24 = { fParam3 };
	Global_40.f_9052.f_1[iParam0] = -15;

	if (Global_40 == false || Global_1879534 == true)
		if (iParam10 == 1)
			func_398(iParam0, 4);
		else
			func_399(iParam0, 4);

	func_400(&(Global_1392626[iParam0 /*32*/].f_8), iParam14);
	return;
}

void func_119(int iParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x159F4 Hash - 0xF79B279E ^0x9916AE29
{
	Global_1415419.f_19[iParam0 /*12*/].f_4 = iParam0;
	Global_1415419.f_19[iParam0 /*12*/] = hParam1;
	Global_1415419.f_19[iParam0 /*12*/].f_1 = iParam2;
	Global_1415419.f_19[iParam0 /*12*/].f_2 = iParam3;
	Global_1415419.f_19[iParam0 /*12*/].f_5 = iParam4;
	Global_1415419.f_19[iParam0 /*12*/].f_6 = iParam5;
	return;
}

void func_120(int iParam0) // Position - 0x15A4E Hash - 0x78C3C0D2 ^0x51173FE9
{
	if (!func_401(iParam0))
		return;

	!func_402(iParam0);
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_4 = 0;
	return;
}

BOOL func_121(int iParam0) // Position - 0x15A7C Hash - 0xA30D6B84 ^0xE1EB5034
{
	return Global_32074.f_2697.f_6[iParam0 /*6*/].f_4;
}

int func_122(Hash hParam0) // Position - 0x15A92 Hash - 0xD6E12BEB ^0x1BFBC7C9
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0);
}

void func_123(int iParam0) // Position - 0x15AA0 Hash - 0x6E81F87F ^0x39BC5C7A
{
	if (!func_401(iParam0))
		return;

	!func_402(iParam0);
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_4 = 1;
	return;
}

void func_124(var uParam0) // Position - 0x15ACE Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_125(var uParam0) // Position - 0x15AE4 Hash - 0x5001E582 ^0x5001E582
{
	return func_403(*uParam0, 1);
}

void func_126(var uParam0, BOOL bParam1) // Position - 0x15AF4 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_125(uParam0))
		func_404(uParam0);

	return;
}

int func_127(var uParam0) // Position - 0x15B14 Hash - 0xE440ADBD ^0x7BE35012
{
	if (!func_125(uParam0))
		return BUILTIN::ROUND(uParam0->f_1 * 1000f);

	if (func_405(uParam0))
		return BUILTIN::ROUND(uParam0->f_2 * 1000f);

	return func_406() - BUILTIN::ROUND(uParam0->f_1 * 1000f);
}

BOOL func_128() // Position - 0x15B67 Hash - 0x80E4E183 ^0x42576237
{
	var outData;
	int i;
	int shopInventoriesItemsCount;
	Hash shopType;
	int j;

	shopInventoriesItemsCount = 0;

	for (j = 0; j < 25; j = j + 1)
	{
		shopType = func_407(j);
	
		if (ITEMDATABASE::_ITEMDATABASE_IS_SHOP_KEY_VALID(shopType))
		{
			shopInventoriesItemsCount = ITEMDATABASE::_ITEMDATABASE_GET_SHOP_INVENTORIES_ITEMS_COUNT(shopType);
		
			if (shopInventoriesItemsCount > 0)
			{
				for (i = 0; i < shopInventoriesItemsCount; i = i + 1)
				{
					if (ITEMDATABASE::_ITEMDATABASE_GET_SHOP_INVENTORIES_ITEM_INFO(shopType, i, &outData))
						func_408(outData);
				}
			}
		}
	}

	return true;
}

void func_129(var uParam0) // Position - 0x15BCB Hash - 0xA0DC95C6 ^0x7353CA87
{
	var unk;
	var unk6;
	var unk7;
	var unk8;
	var unk9;
	var unk10;
	BOOL flag;
	int numNodes;
	int i;
	var unk11;
	int num;
	int numNodes2;
	int j;
	var unk12;
	int offset;

	DATAFILE::_PARSEDDATA_REGISTER_QUERY(*uParam0, 1454239731, "weather_groups");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(*uParam0, -1414071153, "group");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(*uParam0, -1922022867, "group(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(*uParam0, 22618052, "weather");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(*uParam0, -263946049, "weather(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(*uParam0, 1518212392, ":name");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(*uParam0, -744273763, ":allowed");
	unk = *uParam0;
	unk.f_1 = 0;
	unk.f_2 = 1454239731;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&unk6, &unk))
		return;

	unk.f_1 = unk6;
	unk.f_2 = -1414071153;
	numNodes = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&unk);

	for (i = 0; i < numNodes; i = i + 1)
	{
		unk.f_1 = unk6;
		unk.f_2 = -1922022867;
		unk.f_3 = i;
	
		if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&unk7, &unk))
		{
		}
		else
		{
			unk.f_1 = unk7;
			unk.f_2 = 1518212392;
		
			if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk9, &unk))
			{
			}
			else
			{
				unk11 = unk9;
				num = func_409(unk11, 1);
				unk.f_1 = unk7;
				unk.f_2 = 22618052;
				numNodes2 = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&unk);
			
				for (j = 0; j < numNodes2; j = j + 1)
				{
					unk.f_1 = unk7;
					unk.f_2 = -263946049;
					unk.f_3 = j;
				
					if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&unk8, &unk))
					{
					}
					else
					{
						unk.f_1 = unk8;
						unk.f_2 = 1518212392;
					
						if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk10, &unk))
						{
						}
						else
						{
							unk12 = unk10;
							offset = func_410(unk12, 1);
						
							if (offset < 0 || offset > 31)
							{
							}
							else
							{
								unk.f_1 = unk8;
								unk.f_2 = -744273763;
							
								if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&flag, &unk))
								{
								}
								else if (num < 0 || num >= 15)
								{
								}
								else if (flag)
								{
									MISC::SET_BIT(&Global_1934765.f_302[num], offset);
								}
								else
								{
									MISC::CLEAR_BIT(&Global_1934765.f_302[num], offset);
								}
							}
						}
					}
				}
			}
		}
	}

	MISC::SET_BIT(&(Global_1934765.f_301), 0);
	return;
}

void func_130() // Position - 0x15DDC Hash - 0x6A9A2124 ^0xDECB3CDD
{
	BOOL isDlcPresent;

	isDlcPresent = DLC::IS_DLC_PRESENT(joaat("dlc_specialedition"));

	if (!isDlcPresent)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(joaat("cabr01"), 0);
			func_411(false);
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), false);
			func_412();
		}
	
		return;
	}

	if (!func_94(Global_1835011[4 /*74*/].f_1, true))
		return;

	func_413();

	if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("nbd1")) >= 2)
		if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("cabr01")) < 2)
			MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(joaat("cabr01"), 2);

	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), true);

	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED")))
		return;

	func_411(true);
	return;
}

void func_131() // Position - 0x15E92 Hash - 0x8D4F27DA ^0x39F8024F
{
	if (!func_94(Global_1835011[4 /*74*/].f_1, true))
		return;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
		return;

	func_414(1351927599, 1, false, false, false, 752097756, 0, 0, 0, false);
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);

	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
	return;
}

void func_132() // Position - 0x15EF8 Hash - 0x5F1EB628 ^0x7D2399B0
{
	BOOL isDlcPresent;

	isDlcPresent = DLC::IS_DLC_PRESENT(joaat("dlc_physpreordercontent"));

	if (!isDlcPresent)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_415(false);
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), false);
		}
	
		return;
	}

	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		return;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_REDEEMED")))
		return;

	if (!func_94(Global_1835011[4 /*74*/].f_1, true))
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), true);
	func_415(true);
	return;
}

void func_133() // Position - 0x15F71 Hash - 0xF4244BFD ^0xA07A49A
{
	BOOL isDlcPresent;

	isDlcPresent = DLC::IS_DLC_PRESENT(joaat("dlc_preordercontent"));

	if (!isDlcPresent)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			func_416(15000, 0, 0, false, 1);
			func_415(false);
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), false);
		}
	
		return;
	}

	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		return;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL_REDEEMED")))
		return;

	if (!func_94(Global_1835011[4 /*74*/].f_1, true))
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), true);
	func_417(15000, false, 1065353216, 1, 0, 0, 1, 752097756);
	func_415(true);
	return;
}

void func_134() // Position - 0x1600B Hash - 0x69FF87CC ^0xF3710DA2
{
	BOOL isDlcPresent;

	isDlcPresent = DLC::IS_DLC_PRESENT(-679138445);

	if (isDlcPresent)
	{
		if (COLLECTION::_COLLECTABLE_GET_NUM_FOUND(joaat("treasure_hunt_loot_13")) > 0)
		{
			if (!func_418(joaat("DOCUMENT_TREASURE_MAP_10"), 1, false) && !func_419(Global_1835011[23 /*74*/].f_1) && !Global_43891)
				func_414(joaat("DOCUMENT_TREASURE_MAP_10"), 1, true, false, false, 752097756, 0, 0, 0, false);
		
			if (!func_420(1))
				func_421(1);
		}
	
		if (COLLECTION::_COLLECTABLE_GET_NUM_FOUND(joaat("treasure_hunt_loot_14")) > 0)
		{
			if (!func_418(joaat("DOCUMENT_TREASURE_MAP_11"), 1, false) && !func_419(Global_1835011[23 /*74*/].f_1) && !Global_43891)
				func_414(joaat("DOCUMENT_TREASURE_MAP_11"), 1, true, false, false, 752097756, 0, 0, 0, false);
		
			if (!func_420(2))
				func_421(2);
		}
	
		if (COLLECTION::_COLLECTABLE_GET_NUM_FOUND(joaat("treasure_hunt_loot_15")) > 0 && !func_420(4))
			func_421(4);
	
		if (func_420(0))
			func_422(0);
	}
	else
	{
		if (COLLECTION::_COLLECTABLE_GET_NUM_FOUND(joaat("treasure_hunt_loot_13")) > 0)
			if (func_418(joaat("DOCUMENT_TREASURE_MAP_10"), 1, false))
				func_335(joaat("DOCUMENT_TREASURE_MAP_10"), 1, true, -142743235, false);
	
		if (COLLECTION::_COLLECTABLE_GET_NUM_FOUND(joaat("treasure_hunt_loot_14")) > 0)
			if (func_418(joaat("DOCUMENT_TREASURE_MAP_11"), 1, false))
				func_335(joaat("DOCUMENT_TREASURE_MAP_11"), 1, true, -142743235, false);
	
		if (func_420(1))
			func_422(1);
	
		if (func_420(2))
			func_422(2);
	
		if (func_420(4))
			func_422(4);
	
		if (!func_420(0))
			func_421(0);
	}

	return;
}

void func_135() // Position - 0x1619C Hash - 0x2E36502F ^0x8173C152
{
	BOOL flag;
	var guid;
	Hash weaponHash;
	Hash weaponHash2;

	flag = UNLOCK::UNLOCK_IS_UNLOCKED(joaat("sp_game_content_cross_promotion_revolver"));

	if (!flag)
		return;

	if (!func_94(Global_1835011[4 /*74*/].f_1, true))
		return;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED")))
		return;

	guid = { func_423() };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
	{
		func_424(joaat("weapon_revolver_doubleaction"));
	
		if (func_425(joaat("weapon_revolver_doubleaction"), 0, false, false, 0, false, 752097756, false))
			guid = { func_423() };
	}

	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
	{
		func_426(joaat("component_revolver_doubleaction_grip_pearl"), guid, 1423542233);
		func_426(joaat("component_revolver_doubleaction_barrel_long"), guid, -1264898804);
		func_426(joaat("component_shortarm_barrel_material_7"), guid, 1592019450);
		func_426(joaat("component_shortarm_cylinder_material_7"), guid, 1117400455);
		func_426(joaat("component_shortarm_hammer_material_7"), guid, 1150213537);
		func_426(joaat("component_shortarm_sight_material_7"), guid, 1598825281);
		func_426(joaat("component_shortarm_trigger_material_7"), guid, -712527121);
		func_426(joaat("component_shortarm_frame_engraving_1"), guid, 454332195);
		func_426(joaat("component_shortarm_frame_material_7"), guid, 256105670);
		func_426(joaat("component_shortarm_frame_engraving_material_7"), guid, -1328061889);
		func_426(joaat("component_shortarm_barrel_engraving_1"), guid, -782241404);
		func_426(joaat("component_shortarm_barrel_engraving_material_7"), guid, 1669853467);
		func_426(joaat("component_shortarm_cylinder_engraving_1"), guid, -1559225678);
		func_426(joaat("component_shortarm_cylinder_engraving_material_7"), guid, -266425508);
	
		if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) && !func_427())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, 2, false);
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash2, false, 0, false);
		
			if (func_428(weaponHash2))
			{
				if (weaponHash2 != joaat("weapon_revolver_doubleaction"))
				{
					if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash2))
					{
						if (func_429(24))
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash2, true, 3, false, false);
					
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 0, false, false);
					}
					else if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash2))
					{
						if (func_429(24) && func_428(weaponHash) && weaponHash != joaat("weapon_revolver_doubleaction"))
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 3, false, false);
					
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 2, false, false);
					}
				}
			}
			else if (!func_428(weaponHash))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 2, false, false);
			}
			else if (weaponHash != joaat("weapon_revolver_doubleaction"))
			{
				if (func_429(24))
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 3, false, false);
			
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 2, false, false);
			}
		}
	
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED"), true);
	}

	return;
}

void func_136() // Position - 0x16439 Hash - 0xAC95F6D7 ^0xB7B37968
{
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE")))
		return;

	if (MISC::IS_PC_VERSION() || MISC::IS_STADIA_VERSION())
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"), true);

	if (MISC::IS_ORBIS_VERSION())
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"), true);

	if (MISC::IS_DURANGO_VERSION())
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"), true);

	return;
}

BOOL func_137(eStackSize essParam0) // Position - 0x1648D Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (essParam0 <= -1 || essParam0 >= 27)
		return false;

	return true;
}

eStackSize func_138(eStackSize essParam0) // Position - 0x164AC Hash - 0xC62FA27D ^0xF00694D5
{
	if (!func_430(essParam0))
		return 0;

	return Global_40.f_4942[essParam0 /*60*/].f_6;
}

void func_139(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x164CE Hash - 0xC1057B0F ^0xC1057B0F
{
	if (bParam2)
		if (!func_137(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] - Global_40.f_4942[essParam0 /*60*/] && bParam1;
	return;
}

void func_140(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1650A Hash - 0x2E4D3D00 ^0x2E4D3D00
{
	if (bParam2)
		if (!func_137(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] || bParam1;
	return;
}

void func_141(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1653B Hash - 0x30F4F5F1 ^0xB09E54B3
{
	if (!func_430(essParam0))
		return;

	if (bParam1)
	{
		func_140(essParam0, 32768, true);
		PED::SET_PED_MODEL_IS_SUPPRESSED(PERSCHAR::_GET_PERSCHAR_MODEL_NAME(func_431(essParam0, true)), true);
	
		if (bParam2)
			Global_1360165[essParam0 /*1157*/].f_126 = func_432(essParam0);
	}
	else
	{
		func_139(essParam0, 32768, true);
	}

	return;
}

BOOL func_142(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x16594 Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_430(essParam0))
			return false;

	func_433(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[essParam0 /*1157*/].f_58[num], offset);
}

void func_143(eStackSize essParam0, BOOL bParam1) // Position - 0x165CF Hash - 0xBF5CA318 ^0x160E6538
{
	if (func_137(essParam0))
	{
		if (bParam1)
		{
			func_434(essParam0, joaat("consumable_medicine"), 2);
			func_434(essParam0, joaat("consumable_apple"), 1);
		
			if (func_320(essParam0, 4096, true) && essParam0 != 14)
				func_434(essParam0, joaat("consumable_chewing_tobacco"), 1);
			else
				func_434(essParam0, joaat("consumable_tonic"), 1);
		}
		else
		{
			func_434(essParam0, joaat("consumable_medicine"), 1);
			func_434(essParam0, joaat("AMMO_RIFLE_AMMOBOX"), 2);
		
			if (func_435())
			{
				func_434(essParam0, joaat("consumable_chewing_tobacco"), 1);
				func_434(essParam0, joaat("AMMO_PISTOL_AMMOBOX"), 1);
			}
			else
			{
				func_434(essParam0, joaat("consumable_whiskey"), 1);
			}
		}
	}

	return;
}

void func_144() // Position - 0x16678 Hash - 0x125D013F ^0xEBFCE753
{
	Global_1360165[0 /*1157*/].f_65[0] = 2228322;
	Global_1360165[0 /*1157*/].f_65[1] = 1074065741;
	Global_1360165[0 /*1157*/].f_65[2] = 22528;
	Global_1360165[1 /*1157*/].f_65[0] = 144158;
	Global_1360165[1 /*1157*/].f_65[1] = 1073852744;
	Global_1360165[1 /*1157*/].f_65[2] = 16478;
	Global_1360165[2 /*1157*/].f_65[0] = 1074176226;
	Global_1360165[2 /*1157*/].f_65[1] = 1074647372;
	Global_1360165[2 /*1157*/].f_65[2] = 26624;
	Global_1360165[3 /*1157*/].f_65[0] = 176226;
	Global_1360165[3 /*1157*/].f_65[1] = 520524;
	Global_1360165[3 /*1157*/].f_65[2] = 2048;
	Global_1360165[4 /*1157*/].f_65[0] = 52432898;
	Global_1360165[4 /*1157*/].f_65[1] = 328;
	Global_1360165[4 /*1157*/].f_65[2] = 131072;
	Global_1360165[5 /*1157*/].f_65[0] = 131074;
	Global_1360165[5 /*1157*/].f_65[1] = 1074057548;
	Global_1360165[5 /*1157*/].f_65[2] = 20480;
	Global_1360165[6 /*1157*/].f_65[0] = 136487010;
	Global_1360165[6 /*1157*/].f_65[1] = 1175056840;
	Global_1360165[6 /*1157*/].f_65[2] = 18432;
	Global_1360165[7 /*1157*/].f_65[0] = 807575554;
	Global_1360165[7 /*1157*/].f_65[1] = 1074893256;
	Global_1360165[7 /*1157*/].f_65[2] = 16384;
	Global_1360165[8 /*1157*/].f_65[0] = 1617920;
	Global_1360165[8 /*1157*/].f_65[1] = 1210089800;
	Global_1360165[8 /*1157*/].f_65[2] = 16384;
	Global_1360165[9 /*1157*/].f_65[0] = 176130;
	Global_1360165[9 /*1157*/].f_65[1] = 1074123080;
	Global_1360165[9 /*1157*/].f_65[2] = 16384;
	Global_1360165[10 /*1157*/].f_65[0] = 6146;
	Global_1360165[10 /*1157*/].f_65[1] = 1073744232;
	Global_1360165[10 /*1157*/].f_65[2] = 16384;
	Global_1360165[11 /*1157*/].f_65[0] = 350896130;
	Global_1360165[11 /*1157*/].f_65[1] = 37696;
	Global_1360165[11 /*1157*/].f_65[2] = 1;
	Global_1360165[12 /*1157*/].f_65[1] = 268435456;
	Global_1360165[13 /*1157*/].f_65[0] = 2228226;
	Global_1360165[13 /*1157*/].f_65[1] = 1078251856;
	Global_1360165[13 /*1157*/].f_65[2] = 278528;
	Global_1360165[14 /*1157*/].f_65[0] = 2;
	Global_1360165[14 /*1157*/].f_65[1] = 1073774928;
	Global_1360165[14 /*1157*/].f_65[2] = 378752;
	Global_1360165[15 /*1157*/].f_65[0] = 2;
	Global_1360165[15 /*1157*/].f_65[1] = 1073844544;
	Global_1360165[15 /*1157*/].f_65[2] = 16384;
	Global_1360165[16 /*1157*/].f_65[0] = 2;
	Global_1360165[16 /*1157*/].f_65[1] = 1073779012;
	Global_1360165[16 /*1157*/].f_65[2] = 16384;
	Global_1360165[17 /*1157*/].f_65[0] = 2097154;
	Global_1360165[17 /*1157*/].f_65[1] = 323912;
	Global_1360165[18 /*1157*/].f_65[0] = 143362;
	Global_1360165[18 /*1157*/].f_65[1] = 25170248;
	Global_1360165[19 /*1157*/].f_65[0] = 2;
	Global_1360165[19 /*1157*/].f_65[1] = 1073852864;
	Global_1360165[19 /*1157*/].f_65[2] = 16384;
	Global_1360165[20 /*1157*/].f_65[0] = 98306;
	Global_1360165[20 /*1157*/].f_65[1] = 1073779008;
	Global_1360165[20 /*1157*/].f_65[2] = 16384;
	Global_1360165[21 /*1157*/].f_65[0] = 4098;
	Global_1360165[21 /*1157*/].f_65[1] = 1073746248;
	Global_1360165[21 /*1157*/].f_65[2] = 16384;
	Global_1360165[22 /*1157*/].f_65[0] = 2097154;
	Global_1360165[22 /*1157*/].f_65[1] = 1073852736;
	Global_1360165[22 /*1157*/].f_65[2] = 16384;
	Global_1360165[23 /*1157*/].f_65[0] = 135168;
	Global_1360165[23 /*1157*/].f_65[1] = 561498;
	Global_1360165[23 /*1157*/].f_65[2] = 262176;
	Global_1360165[24 /*1157*/].f_65[0] = 2097152;
	Global_1360165[24 /*1157*/].f_65[1] = 4194328;
	Global_1360165[24 /*1157*/].f_65[2] = 262144;
	Global_1360165[25 /*1157*/].f_65[0] = 2097152;
	Global_1360165[25 /*1157*/].f_65[1] = 24;
	Global_1360165[25 /*1157*/].f_65[2] = 262144;
	Global_1360165[26 /*1157*/].f_65[0] = 2;
	Global_1360165[26 /*1157*/].f_65[1] = 536872028;
	Global_1360165[26 /*1157*/].f_65[2] = 262144;
	return;
}

BOOL func_145(int iParam0) // Position - 0x16BC4 Hash - 0x958B152F ^0x174871D
{
	return iParam0 > -1 && iParam0 < 954;
}

int func_146(int iParam0, var uParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x16BDB Hash - 0xCBEA69A ^0xCBEA69A
{
	BOOL flag;

	flag = func_115() != -1;

	switch (iParam0)
	{
		case 3:
			*uParam1 = 644;
			*uParam2 = 656;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 5:
			*uParam1 = 137;
			*uParam2 = 324;
		
			if (flag)
				*uParam2 = 142;
			break;
	
		case 6:
			*uParam1 = 657;
			*uParam2 = 658;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 11:
			*uParam1 = 807;
			*uParam2 = 833;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 21:
			*uParam1 = 780;
			*uParam2 = 782;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 22:
			if (bParam4)
				*uParam1 = 715;
			else
				*uParam1 = 715;
		
			*uParam2 = 723;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 23:
			*uParam1 = 801;
			*uParam2 = 801;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 26:
			*uParam1 = 472;
		
			if (bParam3)
				*uParam2 = 500;
			else
				*uParam2 = 502;
		
			if (flag)
				*uParam2 = 472;
			break;
	
		case 28:
			*uParam1 = 802;
			*uParam2 = 803;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 29:
			*uParam1 = 744;
			*uParam2 = 744;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 32:
			*uParam1 = 325;
			*uParam2 = 344;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 35:
			*uParam1 = 691;
			*uParam2 = 700;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 38:
			*uParam1 = 508;
			*uParam2 = 553;
		
			if (flag)
				*uParam2 = 509;
			break;
	
		case 42:
			*uParam1 = 794;
			*uParam2 = 798;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 56:
			*uParam1 = 701;
			*uParam2 = 708;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 61:
			*uParam1 = 380;
			*uParam2 = 381;
		
			if (flag)
				*uParam2 = 380;
			break;
	
		case 64:
			*uParam1 = 736;
			*uParam2 = 740;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 65:
			*uParam1 = 566;
			*uParam2 = 588;
		
			if (flag)
				*uParam2 = 566;
			break;
	
		case 66:
			*uParam1 = 745;
			*uParam2 = 750;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 68:
			*uParam1 = 554;
			*uParam2 = 565;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 69:
			*uParam1 = 589;
		
			if (bParam3)
				*uParam2 = 598;
			else
				*uParam2 = 612;
		
			if (flag)
				*uParam2 = 590;
			break;
	
		case 70:
			*uParam1 = 751;
			*uParam2 = 754;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 72:
			*uParam1 = 733;
			*uParam2 = 735;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 75:
			*uParam1 = 503;
			*uParam2 = 506;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 76:
			*uParam1 = 0;
		
			if (bParam3)
				*uParam2 = 47;
			else
				*uParam2 = 63;
		
			if (flag)
				*uParam2 = 5;
			break;
	
		case 77:
			*uParam1 = 731;
			*uParam2 = 732;
			break;
	
		case 78:
			*uParam1 = 382;
			*uParam2 = 431;
		
			if (flag)
				*uParam2 = 384;
			break;
	
		case 82:
			*uParam1 = 659;
		
			if (bParam3)
				*uParam2 = 673;
			else
				*uParam2 = 690;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 86:
			*uParam1 = 768;
			*uParam2 = 772;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 89:
			*uParam1 = 799;
			*uParam2 = 800;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 92:
			*uParam1 = 443;
			*uParam2 = 471;
		
			if (flag)
				*uParam2 = 443;
			break;
	
		case 93:
			*uParam1 = 613;
			*uParam2 = 625;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 95:
			*uParam1 = 626;
			*uParam2 = 641;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 96:
			*uParam1 = 741;
			*uParam2 = 743;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 97:
			*uParam1 = 642;
			*uParam2 = 643;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 100:
			*uParam1 = 755;
			*uParam2 = 763;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 101:
			*uParam1 = 804;
			*uParam2 = 806;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 102:
			*uParam1 = 764;
			*uParam2 = 767;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 105:
			*uParam1 = 69;
		
			if (bParam3)
				*uParam2 = 127;
			else
				*uParam2 = 136;
		
			if (flag)
				*uParam2 = 72;
			break;
	
		case 110:
			*uParam1 = 724;
			*uParam2 = 730;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 115:
			*uParam1 = 345;
			*uParam2 = 375;
		
			if (flag)
				*uParam2 = 375;
			break;
	
		case 116:
			*uParam1 = 783;
			*uParam2 = 790;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 117:
			*uParam1 = 507;
			*uParam2 = 507;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 120:
			*uParam1 = 432;
			*uParam2 = 442;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 124:
			*uParam1 = 791;
			*uParam2 = 793;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 125:
			*uParam1 = 376;
			*uParam2 = 379;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 126:
			*uParam1 = 773;
			*uParam2 = 779;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 128:
			*uParam1 = 834;
			*uParam2 = 857;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}

	if (*uParam1 == -1 || *uParam2 == -1)
		return 0;

	return 1;
}

BOOL func_147(int iParam0, int iParam1) // Position - 0x1729B Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_148(int iParam0, BOOL bParam1) // Position - 0x172AA Hash - 0x61515A20 ^0x61515A20
{
	if (func_115() != -1)
		return;

	if (!func_145(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] || bParam1;
	return;
}

void func_149(int iParam0, BOOL bParam1) // Position - 0x172DB Hash - 0x452DF11A ^0x452DF11A
{
	if (func_115() != -1)
		return;

	if (!func_145(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] - Global_24887[iParam0 /*2*/] && bParam1;
	return;
}

void func_150() // Position - 0x17314 Hash - 0x2867544D ^0x2867544D
{
	int i;

	i = 0;

	for (i = 0; i < 11; i = i + 1)
	{
		Global_1879534.f_7288[i] = 0;
	}

	return;
}

void func_151() // Position - 0x1733E Hash - 0xC2059E5C ^0x6E146DBE
{
	int i;

	i = 0;

	for (i = 0; i < 240; i = i + 1)
	{
		Global_1879534.f_211[i /*4*/] = 0;
		Global_1879534.f_211[i /*4*/].f_1 = 1;
		Global_1879534.f_211[i /*4*/].f_2 = 2;
		Global_1879534.f_211[i /*4*/].f_3 = 3;
	}

	return;
}

void func_152() // Position - 0x1738E Hash - 0xF7CD68B2 ^0x9126FAFB
{
	int i;

	i = 0;

	for (i = 0; i < 350; i = i + 1)
	{
		Global_1879534.f_1172[i /*2*/] = 0;
		Global_1879534.f_1172[i /*2*/].f_1 = 1;
	}

	return;
}

void func_153() // Position - 0x173C7 Hash - 0x36C6777C ^0x7502F307
{
	int i;

	i = 0;

	for (i = 0; i < 1; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_1879534.f_1873[i /*4*/], "NOT_SETUP", 32);
	}

	return;
}

void func_154() // Position - 0x173F5 Hash - 0xD146E857 ^0xC4BE498A
{
	int i;

	i = 0;

	for (i = 0; i < 1; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_1879534.f_1878[i /*8*/], "NOT_SETUP", 32);
		Global_1879534.f_1878[i /*8*/].f_4 = 0;
		Global_1879534.f_1878[i /*8*/].f_5 = 0;
		Global_1879534.f_1878[i /*8*/].f_6 = 0;
		Global_1879534.f_1878[i /*8*/].f_7 = 0;
	}

	return;
}

void func_155() // Position - 0x1745B Hash - 0x8907EA35 ^0xDDC1F518
{
	int i;

	i = 0;

	for (i = 0; i < 1; i = i + 1)
	{
		Global_1879534.f_1897[i /*12*/] = -1;
		Global_1879534.f_1897[i /*12*/].f_1 = -1;
		Global_1879534.f_1897[i /*12*/].f_2 = -1;
		Global_1879534.f_1897[i /*12*/].f_3 = -1;
		Global_1879534.f_1897[i /*12*/].f_4 = -1;
		Global_1879534.f_1897[i /*12*/].f_6 = -1;
		Global_1879534.f_1897[i /*12*/].f_7 = -1;
		Global_1879534.f_1897[i /*12*/].f_10 = 0;
		Global_1879534.f_1897[i /*12*/].f_11 = 0;
	}

	return;
}

void func_156() // Position - 0x174F4 Hash - 0xF596A4D ^0x717AC419
{
	int i;

	i = 0;

	for (i = 0; i < 1; i = i + 1)
	{
		Global_1879534.f_1887[i /*9*/] = 0;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1879534.f_1887[i /*9*/].f_1), "", 32);
		Global_1879534.f_1887[i /*9*/].f_5 = 0;
		Global_1879534.f_1887[i /*9*/].f_6 = -1;
		Global_1879534.f_1887[i /*9*/].f_7 = -1;
		Global_1879534.f_1887[i /*9*/].f_8 = 0;
	}

	return;
}

void func_157() // Position - 0x17567 Hash - 0x23083072 ^0xF0B3DCA4
{
	int i;

	i = 0;

	for (i = 0; i < 1770; i = i + 1)
	{
		Global_1879534.f_1911[i /*3*/] = -1;
		Global_1879534.f_1911[i /*3*/].f_1 = 12;
		Global_1879534.f_1911[i /*3*/].f_2 = -1;
	}

	Global_1879534.f_7287 = 0;
	return;
}

void func_158() // Position - 0x175B7 Hash - 0x3418DAF ^0x589AFA20
{
	eStackSize i;

	i = 0;

	for (i = 0; i < Global_1879534.f_7300; i = i + 1)
	{
		Global_1879534.f_7222[i /*2*/] = -1;
		Global_1879534.f_7222[i /*2*/].f_1 = -1;
	}

	return;
}

void func_159() // Position - 0x175F4 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_160(eStackSize essParam0) // Position - 0x175FC Hash - 0xA401085D ^0xA401085D
{
	if (!(essParam0 < Global_1879534.f_7300))
		return;

	if (!(Global_1879534.f_7222[essParam0 /*2*/] == -1))
		return;

	Global_1879534.f_7222[essParam0 /*2*/] = Global_1879534.f_7287;
	return;
}

void func_161() // Position - 0x1763B Hash - 0x109FC83 ^0xB2218F6F
{
	int num;

	num = 12;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1750917831;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = -1;
	func_437(num);
	return;
}

void func_162(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1768F Hash - 0x28563EB7 ^0xEEE09DB
{
	int num;
	int address;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	var unk;

	num = 1;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1913176419;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	address = 0;

	if (iParam0 == -1)
	{
		num2 = 0;
	}
	else
	{
		MISC::SET_BIT(&address, 0);
		num2 = iParam0;
	}

	if (iParam1 == -1)
	{
		num3 = 0;
	}
	else
	{
		MISC::SET_BIT(&address, 1);
		num3 = iParam1;
	}

	if (iParam2 == -1)
	{
		num4 = 0;
	}
	else
	{
		MISC::SET_BIT(&address, 2);
		num4 = iParam2;
	}

	if (iParam3 == -1)
	{
		num5 = 1;
	}
	else
	{
		MISC::SET_BIT(&address, 3);
		num5 = iParam3;
	}

	if (iParam4 == -1)
	{
		num6 = 1;
	}
	else
	{
		MISC::SET_BIT(&address, 4);
		num6 = iParam4;
	}

	if (iParam5 == -1)
	{
		num7 = 1898;
	}
	else
	{
		MISC::SET_BIT(&address, 5);
		num7 = iParam5;
	}

	func_438(&unk, num4, num3, num2, num5, num6, num7);
	func_439(Global_1879534.f_7288[num], unk, address, -1, -1);
	func_437(num);
	return;
}

void func_163(int iParam0) // Position - 0x177A2 Hash - 0xF657680C ^0x2FB5D933
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1535566683;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_164(int iParam0) // Position - 0x177F0 Hash - 0xF657680C ^0xB212D111
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1978308683;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_165(int iParam0, int iParam1) // Position - 0x1783E Hash - 0x41DE0CBF ^0x3C8A271D
{
	int num;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 2001493029;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_440(Global_1879534.f_7288[num], iParam0, iParam1);
	func_437(num);
	return;
}

void func_166(eStackSize essParam0, int iParam1) // Position - 0x178AE Hash - 0x41DE0CBF ^0xEFFD7F50
{
	int num;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 99307713;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_440(Global_1879534.f_7288[num], essParam0, iParam1);
	func_437(num);
	return;
}

void func_167() // Position - 0x1791E Hash - 0xC31EE6CB ^0x460EE975
{
	func_436(12);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1520384013;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 12;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = -1;
	func_437(12);
	return;
}

void func_168(eStackSize essParam0, BOOL bParam1) // Position - 0x1796E Hash - 0x41DE0CBF ^0x85977FDF
{
	int num;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1360770031;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_440(Global_1879534.f_7288[num], essParam0, bParam1 ? 1 : 0);
	func_437(num);
	return;
}

void func_169(int iParam0) // Position - 0x179E4 Hash - 0xF657680C ^0x720804DA
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1738949208;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_170(eStackSize essParam0, int iParam1) // Position - 0x17A32 Hash - 0x7F2222E8 ^0xA4FA2214
{
	int num;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 672918768;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 2;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_440(Global_1879534.f_7288[num], essParam0, iParam1);
	func_437(num);
	return;
}

void func_171(int iParam0) // Position - 0x17AA1 Hash - 0xF657680C ^0xC480F448
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1181815586;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_172(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x17AEF Hash - 0xFE0915E9 ^0x2ADBD34
{
	int num;
	int num2;
	int num3;

	num = 1;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -471968486;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	num2 = bParam1 ? 1 : 0;
	num3 = bParam2 ? 1 : 0;
	func_439(Global_1879534.f_7288[num], essParam0, num2, num3, 0);
	func_437(num);
	return;
}

void func_173(eStackSize essParam0, int iParam1, int iParam2) // Position - 0x17B76 Hash - 0xFE0915E9 ^0x602EE535
{
	int num;
	int num2;
	int num3;

	num = 1;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1472568760;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	iParam1 = iParam1 * 100f;
	iParam2 = iParam2 * 100f;
	num2 = BUILTIN::ROUND(iParam1);
	num3 = BUILTIN::ROUND(iParam2);

	if (essParam0 == 27)
	{
	}

	func_439(Global_1879534.f_7288[num], essParam0, num2, num3, 0);
	func_437(num);
	return;
}

void func_174(int iParam0) // Position - 0x17C17 Hash - 0xF657680C ^0x78DCEDED
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -756450532;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_175(int iParam0) // Position - 0x17C65 Hash - 0xF657680C ^0x52289809
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1331093620;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_176(int iParam0) // Position - 0x17CB3 Hash - 0xF657680C ^0x5080A442
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -259205396;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_177(eStackSize essParam0, int iParam1) // Position - 0x17D01 Hash - 0x41DE0CBF ^0xABEFBB06
{
	int num;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1815455941;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_440(Global_1879534.f_7288[num], essParam0, iParam1);
	func_437(num);
	return;
}

void func_178(eStackSize essParam0, int iParam1) // Position - 0x17D71 Hash - 0x41DE0CBF ^0x8AA4C0DD
{
	int num;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -914010892;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_440(Global_1879534.f_7288[num], essParam0, iParam1);
	func_437(num);
	return;
}

void func_179(eStackSize essParam0, int iParam1) // Position - 0x17DE1 Hash - 0x41DE0CBF ^0x1FBDA356
{
	int num;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1536300574;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_440(Global_1879534.f_7288[num], essParam0, iParam1);
	func_437(num);
	return;
}

void func_180(int iParam0) // Position - 0x17E51 Hash - 0xF657680C ^0x807BF606
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 477724652;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_181(eStackSize essParam0, int iParam1) // Position - 0x17E9F Hash - 0x41DE0CBF ^0x252DC391
{
	int num;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -346691420;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_440(Global_1879534.f_7288[num], essParam0, iParam1);
	func_437(num);
	return;
}

void func_182(eStackSize essParam0, int iParam1) // Position - 0x17F0F Hash - 0x41DE0CBF ^0xC3A79131
{
	int num;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -549926405;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_440(Global_1879534.f_7288[num], essParam0, iParam1);
	func_437(num);
	return;
}

void func_183(eStackSize essParam0, int iParam1, int iParam2, int iParam3) // Position - 0x17F7F Hash - 0x59F9E421 ^0x781F8D9F
{
	int num;

	num = 1;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1449067653;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_439(Global_1879534.f_7288[num], essParam0, iParam1, iParam2, iParam3);
	func_437(num);
	return;
}

void func_184() // Position - 0x17FF3 Hash - 0x52D1366E ^0x2FE5FB19
{
	int i;

	if (Global_1934765.f_69.f_201 <= 0)
		return;

	i = 0;

	for (i = 0; i <= Global_1934765.f_69.f_201 - 1; i = i + 1)
	{
		if (Global_1934765.f_69[i /*2*/].f_1)
			func_198(Global_1934765.f_69[i /*2*/]);
		else
			func_227(Global_1934765.f_69[i /*2*/]);
	}

	return;
}

void func_185(BOOL bParam0) // Position - 0x18058 Hash - 0x80724D80 ^0xA401CD2A
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 794205136;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = bParam0 ? 1 : 0;
	func_437(0);
	return;
}

void func_186(eStackSize essParam0, BOOL bParam1) // Position - 0x180AC Hash - 0x41DE0CBF ^0xCC3398B4
{
	int num;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1156263964;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_440(Global_1879534.f_7288[num], essParam0, bParam1 ? 1 : 0);
	func_437(num);
	return;
}

void func_187(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x18122 Hash - 0xFE0915E9 ^0x8E3D5C85
{
	int num;

	num = 1;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1598787124;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_439(Global_1879534.f_7288[num], essParam0, bParam1 ? 1 : 0, bParam2 ? 1 : 0, 0);
	func_437(num);
	return;
}

void func_188(int iParam0) // Position - 0x181A1 Hash - 0xF657680C ^0x413BEB44
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1438979859;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_189(int iParam0) // Position - 0x181EF Hash - 0xF657680C ^0xF96087F5
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 147262072;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_190(int iParam0) // Position - 0x1823D Hash - 0xF657680C ^0xD1BF9502
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1673286084;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_191(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x1828B Hash - 0xF068A9C3 ^0xBFFE281
{
	int num;
	int address;

	num = 1;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -663280148;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	address = 0;

	if (bParam1)
		MISC::SET_BIT(&address, 0);

	if (bParam2)
		MISC::SET_BIT(&address, 1);

	if (bParam3)
		MISC::SET_BIT(&address, 2);

	func_439(Global_1879534.f_7288[num], essParam0, address, iParam4, 0);
	func_437(num);
	return;
}

void func_192(eStackSize essParam0, BOOL bParam1) // Position - 0x18325 Hash - 0x41DE0CBF ^0xB45E0D2C
{
	int num;
	int num2;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 901529234;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	num2 = 0;

	if (bParam1)
		num2 = 1;

	func_440(Global_1879534.f_7288[num], essParam0, num2);
	func_437(num);
	return;
}

void func_193(eStackSize essParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x183A0 Hash - 0xAD88301 ^0xB72C5EE0
{
	int num;

	num = 1;
	func_436(num);

	if (bParam4)
		Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 363897013;
	else
		Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1225435693;

	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];

	if (iParam2 != -1)
	{
		while (iParam2 % 24 > 0)
		{
			iParam3 = iParam3 + 1;
			iParam2 = iParam2 - 24;
		}
	}

	func_439(Global_1879534.f_7288[num], essParam0, iParam1, iParam2, iParam3);
	func_437(num);
	return;
}

void func_194(int iParam0) // Position - 0x18450 Hash - 0xF657680C ^0x2998092C
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -2030110303;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_195(int iParam0) // Position - 0x1849E Hash - 0xF657680C ^0x174E65A6
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 203794828;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_196(eStackSize essParam0, BOOL bParam1) // Position - 0x184EC Hash - 0x41DE0CBF ^0xCF26117D
{
	int num;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1408274960;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_440(Global_1879534.f_7288[num], essParam0, bParam1 ? 1 : 0);
	func_437(num);
	return;
}

void func_197(int iParam0) // Position - 0x18562 Hash - 0xF657680C ^0x47C4D33
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -868169264;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_198(int iParam0) // Position - 0x185B0 Hash - 0xF657680C ^0xFEE56EB5
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1289504437;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_199(int iParam0) // Position - 0x185FE Hash - 0xF657680C ^0x27EBFDAC
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1628808209;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_200(int iParam0) // Position - 0x1864C Hash - 0xF657680C ^0x5827B20
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1063874733;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_201(int iParam0) // Position - 0x1869A Hash - 0xF657680C ^0x9D9BC518
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 670944580;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_202(eStackSize essParam0, int iParam1) // Position - 0x186E8 Hash - 0x41DE0CBF ^0x4FE9395
{
	int num;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -486436146;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_440(Global_1879534.f_7288[num], essParam0, iParam1);
	func_437(num);
	return;
}

void func_203(eStackSize essParam0, int iParam1) // Position - 0x18758 Hash - 0x41DE0CBF ^0x60229838
{
	int num;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 111818573;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_440(Global_1879534.f_7288[num], essParam0, iParam1);
	func_437(num);
	return;
}

void func_204() // Position - 0x187C8 Hash - 0x3002229C ^0x78652DE8
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1093832731;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	func_437(0);
	return;
}

void func_205() // Position - 0x18802 Hash - 0x3002229C ^0xB6FBBB86
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -159886710;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	func_437(0);
	return;
}

void func_206(int iParam0) // Position - 0x1883C Hash - 0xF657680C ^0x61C0A254
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 225795806;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_207(int iParam0) // Position - 0x1888A Hash - 0xF657680C ^0x8EC7B8A3
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 40566325;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_208(int iParam0) // Position - 0x188D8 Hash - 0xF657680C ^0x79206DE0
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -2042718100;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_209(int iParam0) // Position - 0x18926 Hash - 0xF657680C ^0x9DA5AF13
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1371030896;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_210(int iParam0) // Position - 0x18974 Hash - 0xD74FFD96 ^0xF916660A
{
	int num;

	num = 0;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1677774865;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(num);
	return;
}

void func_211(int iParam0, int iParam1) // Position - 0x189C8 Hash - 0xF1846A13 ^0x484D9BC9
{
	int num;
	int num2;

	num = 0;
	func_436(num);
	num2 = iParam0;
	num2 = num2 + (iParam1 * 1000000);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1982716178;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = num2;
	func_437(num);
	return;
}

void func_212(int iParam0) // Position - 0x18A2C Hash - 0xF657680C ^0xC6CB59F2
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 995574226;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_213(int iParam0) // Position - 0x18A7A Hash - 0xF657680C ^0x8EF971C4
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -718595174;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_214(eStackSize essParam0, BOOL bParam1) // Position - 0x18AC8 Hash - 0x41DE0CBF ^0xAB0F503C
{
	int num;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1729634664;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_440(Global_1879534.f_7288[num], essParam0, bParam1 ? 1 : 0);
	func_437(num);
	return;
}

void func_215() // Position - 0x18B3E Hash - 0x109FC83 ^0xB22DB7ED
{
	int num;

	num = 12;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1909997983;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = -1;
	func_437(num);
	return;
}

void func_216(eStackSize essParam0) // Position - 0x18B92 Hash - 0x72CDC6A7 ^0x49B45378
{
	if (!(essParam0 < Global_1879534.f_7300))
		return;

	if (Global_1879534.f_7222[essParam0 /*2*/] == -1)
		return;

	if (!(Global_1879534.f_7222[essParam0 /*2*/].f_1 == -1))
		return;

	if (Global_1879534.f_7222[essParam0 /*2*/] == Global_1879534.f_7287)
	{
		Global_1879534.f_7222[essParam0 /*2*/] = -1;
		return;
	}

	Global_1879534.f_7222[essParam0 /*2*/].f_1 = Global_1879534.f_7287 - 1;

	if (Global_1879534.f_7301.f_2[essParam0 /*4*/].f_1 == -1)
		Global_1879534.f_7301.f_2[essParam0 /*4*/].f_1 = Global_1879534.f_7222[essParam0 /*2*/];

	return;
}

void func_217(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x18C3D Hash - 0xCE1C991E ^0x9A4D4422
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	eStackSize stackSize;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 656468362;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];

	if (iParam0 == -1)
		num2 = 0;
	else
		num2 = iParam0;

	if (iParam1 == -1)
		num3 = 0;
	else
		num3 = iParam1;

	if (iParam2 == -1)
		num4 = 0;
	else
		num4 = iParam2;

	if (iParam3 == -1)
		num5 = 1;
	else
		num5 = iParam3;

	if (iParam4 == -1)
		num6 = 1;
	else
		num6 = iParam4;

	if (iParam5 == -1)
		num7 = 1898;
	else
		num7 = iParam5;

	func_438(&stackSize, num4, num3, num2, num5, num6, num7);
	func_440(Global_1879534.f_7288[num], stackSize, -1);
	func_437(num);
	return;
}

void func_218(eStackSize essParam0, int iParam1, int iParam2, int iParam3) // Position - 0x18D20 Hash - 0x59F9E421 ^0xF952D24B
{
	int num;

	num = 1;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -915138989;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_439(Global_1879534.f_7288[num], essParam0, iParam1, iParam2, iParam3);
	func_437(num);
	return;
}

void func_219(int iParam0) // Position - 0x18D94 Hash - 0xF657680C ^0xD7BC8DF
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -148700515;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_220(int iParam0) // Position - 0x18DE2 Hash - 0xF657680C ^0xFB69F377
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 2121795512;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_221(eStackSize essParam0, int iParam1) // Position - 0x18E30 Hash - 0x41DE0CBF ^0x6E02720A
{
	int num;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1053276381;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_440(Global_1879534.f_7288[num], essParam0, iParam1);
	func_437(num);
	return;
}

void func_222(int iParam0) // Position - 0x18EA0 Hash - 0xF657680C ^0x33F4FDA6
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1120129944;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_223(int iParam0) // Position - 0x18EEE Hash - 0xD74FFD96 ^0xC54CAFE2
{
	int num;

	num = 0;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -508972844;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(num);
	return;
}

void func_224(int iParam0) // Position - 0x18F42 Hash - 0xD74FFD96 ^0xF487E707
{
	int num;

	num = 0;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -2049944022;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(num);
	return;
}

void func_225(int iParam0) // Position - 0x18F96 Hash - 0xF657680C ^0x2C05DF22
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 759449782;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_226(eStackSize essParam0, BOOL bParam1) // Position - 0x18FE4 Hash - 0x41DE0CBF ^0x7F3CF19A
{
	int num;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1378868385;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_440(Global_1879534.f_7288[num], essParam0, bParam1 ? 1 : 0);
	func_437(num);
	return;
}

void func_227(int iParam0) // Position - 0x1905A Hash - 0xF657680C ^0xA895F6E
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 26902781;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_228(int iParam0) // Position - 0x190A8 Hash - 0xF657680C ^0x1E42552A
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -780657756;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_229(int iParam0) // Position - 0x190F6 Hash - 0xF657680C ^0xA52D3A92
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 634895793;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_230(eStackSize essParam0, int iParam1) // Position - 0x19144 Hash - 0x41DE0CBF ^0x22BB535A
{
	int num;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1050963831;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_440(Global_1879534.f_7288[num], essParam0, iParam1);
	func_437(num);
	return;
}

void func_231(eStackSize essParam0, BOOL bParam1) // Position - 0x191B4 Hash - 0x41DE0CBF ^0xF601B6F7
{
	int num;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -90803914;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_440(Global_1879534.f_7288[num], essParam0, bParam1 ? 1 : 0);
	func_437(num);
	return;
}

void func_232(int iParam0) // Position - 0x1922A Hash - 0xF657680C ^0x5D5588B4
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 47963769;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_233(int iParam0) // Position - 0x19278 Hash - 0xF657680C ^0x1E864D5D
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1015095530;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_234(int iParam0) // Position - 0x192C6 Hash - 0xF657680C ^0xE0495775
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 939785963;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_235(int iParam0) // Position - 0x19314 Hash - 0xF657680C ^0x31630D35
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -2093459088;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_236(eStackSize essParam0, int iParam1, int iParam2) // Position - 0x19362 Hash - 0xFE0915E9 ^0x4DF6C621
{
	int num;

	num = 1;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1210875743;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];

	if (essParam0 < 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	func_439(Global_1879534.f_7288[num], essParam0, iParam1, iParam2, -1);
	func_437(num);
	return;
}

void func_237(int iParam0, int iParam1) // Position - 0x193F0 Hash - 0xF1846A13 ^0xFEB2137F
{
	int num;
	int num2;

	num = 0;
	func_436(num);
	num2 = iParam0;
	num2 = num2 + (iParam1 * 1000000);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -964850613;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = num2;
	func_437(num);
	return;
}

void func_238(eStackSize essParam0, BOOL bParam1, int iParam2) // Position - 0x19454 Hash - 0xFE0915E9 ^0x4090A3B6
{
	int num;

	num = 1;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 498793617;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_439(Global_1879534.f_7288[num], essParam0, bParam1 ? 1 : 0, iParam2, 0);
	func_437(num);
	return;
}

void func_239(eStackSize essParam0, int iParam1, int iParam2) // Position - 0x194CD Hash - 0xFE0915E9 ^0xFBFE93B3
{
	int num;

	num = 1;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1785731347;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_439(Global_1879534.f_7288[num], essParam0, iParam1, iParam2, -1);
	func_437(num);
	return;
}

void func_240(eStackSize essParam0, int iParam1) // Position - 0x19540 Hash - 0x41DE0CBF ^0xFCA680FC
{
	int num;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -217347738;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_440(Global_1879534.f_7288[num], essParam0, iParam1);
	func_437(num);
	return;
}

void func_241(eStackSize essParam0, BOOL bParam1) // Position - 0x195B0 Hash - 0x1E03CB57 ^0x83EBE44A
{
	int num;
	int i;
	eStackSize stackSize;
	eStackSize stackSize2;
	int num2;

	num = 1;

	for (i = 0; i < Global_1879534.f_7287; i = i + 1)
	{
		if (Global_1879534.f_1911[i /*3*/] == 531432813)
		{
			stackSize = Global_1879534.f_1911[i /*3*/].f_2;
			stackSize2 = Global_1879534.f_211[stackSize /*4*/];
		
			if (stackSize2 == essParam0)
				return;
		}
	}

	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 531432813;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	num2 = 0;

	if (bParam1)
		num2 = 1;

	func_439(Global_1879534.f_7288[num], essParam0, num2, -1, -1);
	func_437(num);
	return;
}

void func_242(eStackSize essParam0, int iParam1) // Position - 0x1967D Hash - 0xD4546B55 ^0xCAA16EA2
{
	int num;

	num = 1;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1984622930;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_439(Global_1879534.f_7288[num], essParam0, iParam1, -1, -1);
	func_437(num);
	return;
}

void func_243(int iParam0, eStackSize essParam1) // Position - 0x196EF Hash - 0x41DE0CBF ^0x2EC1B0BE
{
	int num;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -138866642;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_440(Global_1879534.f_7288[num], essParam1, iParam0);
	func_437(num);
	return;
}

void func_244(int iParam0, int iParam1) // Position - 0x1975F Hash - 0xF1846A13 ^0x8407C6AE
{
	int num;
	int num2;

	num = 0;
	func_436(num);
	num2 = iParam0;
	num2 = num2 + (iParam1 * 1000000);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1878191811;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = num2;
	func_437(num);
	return;
}

void func_245(eStackSize essParam0, int iParam1) // Position - 0x197C3 Hash - 0x41DE0CBF ^0x7125BC3
{
	int num;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1805087304;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_440(Global_1879534.f_7288[num], essParam0, iParam1);
	func_437(num);
	return;
}

void func_246(int iParam0) // Position - 0x19833 Hash - 0xF657680C ^0x2745DB5F
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1523883609;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_247(int iParam0) // Position - 0x19881 Hash - 0xF657680C ^0xCE39F458
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 987244216;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_248(int iParam0) // Position - 0x198CF Hash - 0xF657680C ^0x938F271D
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 2025667422;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_249(int iParam0) // Position - 0x1991D Hash - 0xF657680C ^0x37FC160B
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -566605714;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_250(eStackSize essParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1996B Hash - 0x59F9E421 ^0x79FF0CFE
{
	int num;

	num = 1;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 442105888;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_439(Global_1879534.f_7288[num], essParam0, iParam1, iParam2, iParam3);
	func_437(num);
	return;
}

void func_251(eStackSize essParam0, int iParam1, int iParam2) // Position - 0x199DF Hash - 0xFE0915E9 ^0x176178A0
{
	int num;

	num = 1;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1083639171;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_439(Global_1879534.f_7288[num], essParam0, iParam1, iParam2, -1);
	func_437(num);
	return;
}

void func_252(eStackSize essParam0, int iParam1, int iParam2, int iParam3) // Position - 0x19A52 Hash - 0x59F9E421 ^0x102CFDDC
{
	int num;

	num = 1;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1810366898;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_439(Global_1879534.f_7288[num], essParam0, iParam1, iParam2, iParam3);
	func_437(num);
	return;
}

void func_253(int iParam0) // Position - 0x19AC6 Hash - 0xF657680C ^0x9342BC6
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 891989563;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_254(eStackSize essParam0, int iParam1, int iParam2, int iParam3) // Position - 0x19B14 Hash - 0x59F9E421 ^0xA00700D2
{
	int num;

	num = 1;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1281917784;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_439(Global_1879534.f_7288[num], essParam0, iParam1, iParam2, iParam3);
	func_437(num);
	return;
}

void func_255(int iParam0) // Position - 0x19B88 Hash - 0xF657680C ^0xEB7CDAE4
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 630069176;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_256(int iParam0) // Position - 0x19BD6 Hash - 0xF657680C ^0x714EC567
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1271429659;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_257(int iParam0) // Position - 0x19C24 Hash - 0xF657680C ^0x60F2F9E0
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1940826795;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_258(int iParam0) // Position - 0x19C72 Hash - 0xF657680C ^0x29B98338
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 2055336839;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_259(eStackSize essParam0, int iParam1, int iParam2) // Position - 0x19CC0 Hash - 0xFE0915E9 ^0xEC58A18B
{
	int num;

	num = 1;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1509183597;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_439(Global_1879534.f_7288[num], essParam0, iParam1, iParam2, -1);
	func_437(num);
	return;
}

void func_260(eStackSize essParam0, int iParam1) // Position - 0x19D33 Hash - 0x41DE0CBF ^0x14B26BEB
{
	int num;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1941172569;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_440(Global_1879534.f_7288[num], essParam0, iParam1);
	func_437(num);
	return;
}

void func_261(int iParam0) // Position - 0x19DA3 Hash - 0xF657680C ^0xBD06C632
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1883692561;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_262(BOOL bParam0) // Position - 0x19DF1 Hash - 0x80724D80 ^0xB6909C87
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1672441969;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = bParam0 ? 1 : 0;
	func_437(0);
	return;
}

void func_263(BOOL bParam0) // Position - 0x19E45 Hash - 0x80724D80 ^0x923E2821
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 460788415;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = bParam0 ? 1 : 0;
	func_437(0);
	return;
}

void func_264(eStackSize essParam0, BOOL bParam1) // Position - 0x19E99 Hash - 0xE12BF445 ^0x77352FDB
{
	int num;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 7411042;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_440(Global_1879534.f_7288[num], essParam0, bParam1 ? 1 : 0);
	func_437(num);
	return;
}

void func_265(BOOL bParam0) // Position - 0x19F0E Hash - 0x80724D80 ^0xD07A779E
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 644587471;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = bParam0 ? 1 : 0;
	func_437(0);
	return;
}

void func_266(eStackSize essParam0, int iParam1) // Position - 0x19F62 Hash - 0x41DE0CBF ^0x463BD98F
{
	int num;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -716094127;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_440(Global_1879534.f_7288[num], essParam0, iParam1);
	func_437(num);
	return;
}

void func_267(eStackSize essParam0, int iParam1, int iParam2, int iParam3) // Position - 0x19FD2 Hash - 0x59F9E421 ^0xDA2BC16B
{
	int num;

	num = 1;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -391651599;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_439(Global_1879534.f_7288[num], essParam0, iParam1, iParam2, iParam3);
	func_437(num);
	return;
}

void func_268(eStackSize essParam0, int iParam1, int iParam2) // Position - 0x1A046 Hash - 0xFE0915E9 ^0x381714CF
{
	int num;

	num = 1;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -838803174;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_439(Global_1879534.f_7288[num], essParam0, iParam2, iParam1, -1);
	func_437(num);
	return;
}

void func_269(int iParam0) // Position - 0x1A0B9 Hash - 0xF657680C ^0x4F494E73
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -801023198;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_270(int iParam0) // Position - 0x1A107 Hash - 0xF657680C ^0xF074C52A
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -289754349;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_271(int iParam0) // Position - 0x1A155 Hash - 0xF657680C ^0xEB63BE98
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 242535924;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_272(BOOL bParam0) // Position - 0x1A1A3 Hash - 0x80724D80 ^0xE3CD64BE
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -845953794;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = bParam0 ? 1 : 0;
	func_437(0);
	return;
}

void func_273() // Position - 0x1A1F7 Hash - 0xC31EE6CB ^0x36D0B3B0
{
	func_436(12);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -401276712;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 12;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = -1;
	func_437(12);
	return;
}

void func_274() // Position - 0x1A247 Hash - 0xC31EE6CB ^0xD50B4D3D
{
	func_436(12);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1398429376;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 12;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = -1;
	func_437(12);
	return;
}

void func_275() // Position - 0x1A297 Hash - 0x110C6F59 ^0x842E2446
{
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 2038286720;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	func_437(0);
	return;
}

void func_276(int iParam0) // Position - 0x1A2CC Hash - 0xF657680C ^0xF599589B
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -42848759;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_277(eStackSize essParam0, int iParam1) // Position - 0x1A31A Hash - 0x41DE0CBF ^0xBBE24B77
{
	int num;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -990335083;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_440(Global_1879534.f_7288[num], essParam0, iParam1);
	func_437(num);
	return;
}

void func_278(eStackSize essParam0, int iParam1) // Position - 0x1A38A Hash - 0x41DE0CBF ^0x680A0B7F
{
	int num;

	num = 2;
	func_436(num);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1260617938;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = num;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = Global_1879534.f_7288[num];
	func_440(Global_1879534.f_7288[num], essParam0, iParam1);
	func_437(num);
	return;
}

void func_279(int iParam0) // Position - 0x1A3FA Hash - 0xF657680C ^0x7D87FCC0
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = 1831856550;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_280(int iParam0) // Position - 0x1A448 Hash - 0xF657680C ^0x573EEB73
{
	func_436(0);
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/] = -1440757252;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_1 = 0;
	Global_1879534.f_1911[Global_1879534.f_7287 /*3*/].f_2 = iParam0;
	func_437(0);
	return;
}

void func_281(int iParam0) // Position - 0x1A496 Hash - 0xB713CFD ^0xD5169977
{
	var unk;

	unk.f_36 = joaat("world_human_lean_back_wall");
	unk.f_38 = 1;
	unk.f_65 = 1117126656;
	unk.f_66 = 1120403456;
	unk.f_68 = 45000;
	*iParam0 = { unk };
	return;
}

void func_282(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, char* sParam6, float fParam7, float fParam8, float fParam9, int iParam10, int iParam11) // Position - 0x1A4D8 Hash - 0x4F47110C ^0xBEE98C3
{
	if (!func_442(iParam0))
		return;

	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam2) && func_115() == -1)
		return;

	if (func_443(fParam7, 0f, 0f, 0f, 1056964608, true))
		return;

	Global_1835011[iParam0 /*74*/] = iParam1;
	TEXT_LABEL_ASSIGN_STRING(&(Global_1835011[iParam0 /*74*/].f_3), sParam2, 32);
	Global_1835011[iParam0 /*74*/].f_68 = iParam11;
	TEXT_LABEL_ASSIGN_STRING(&(Global_1835011[iParam0 /*74*/].f_8), sParam3, 8);
	Global_1835011[iParam0 /*74*/].f_1 = func_288(iParam0, iParam1, 1, 0);

	if (!func_289(Global_1835011[iParam0 /*74*/].f_1))
		return;

	if (func_334(Global_1835011[iParam0 /*74*/].f_1) == -1)
		func_444(Global_1835011[iParam0 /*74*/].f_1, 0);

	Global_1835011[iParam0 /*74*/].f_29 = iParam4;
	Global_1835011[iParam0 /*74*/].f_18 = { fParam7 };
	Global_1835011[iParam0 /*74*/].f_21 = func_290(Global_1835011[iParam0 /*74*/].f_18, true);
	Global_1835011[iParam0 /*74*/].f_26 = iParam10;
	func_445(iParam0, sParam5);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6) && SCRIPTS::DOES_SCRIPT_EXIST(sParam6))
	{
		TEXT_LABEL_ASSIGN_STRING(&(Global_1835011[iParam0 /*74*/].f_12), sParam6, 32);
		Global_1835011[iParam0 /*74*/].f_17 = 1;
	}

	Global_1835011[iParam0 /*74*/].f_30 = 0;
	func_285(iParam0, 1117126656, 1120403456, 1128792064);
	return;
}

void func_283(int iParam0, char* sParam1) // Position - 0x1A631 Hash - 0xCCAF2EF1 ^0xD57C5588
{
	if (!func_442(iParam0))
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return;

	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam1))
		return;

	TEXT_LABEL_ASSIGN_STRING(&(Global_1835011[iParam0 /*74*/].f_22), sParam1, 32);
	return;
}

void func_284(int iParam0, eStackSize essParam1) // Position - 0x1A66D Hash - 0x1EFBCF3 ^0x9F31A5A6
{
	if (!func_442(iParam0))
		return;

	if (!func_137(essParam1))
		return;

	func_446(&(Global_1835011[iParam0 /*74*/].f_30), BUILTIN::SHIFT_LEFT(1, essParam1));
	return;
}

void func_285(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1A6A4 Hash - 0x6C4554D9 ^0x743ECCDD
{
	if (!func_442(iParam0))
		return;

	if (iParam2 <= iParam1)
		return;

	Global_1835011[iParam0 /*74*/].f_65 = iParam1;
	Global_1835011[iParam0 /*74*/].f_66 = iParam2;
	Global_1835011[iParam0 /*74*/].f_67 = iParam3;
	return;
}

BOOL func_286(int iParam0) // Position - 0x1A6E8 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_287(int iParam0) // Position - 0x1A6FE Hash - 0x82195F64 ^0x82195F64
{
	return iParam0 > -1 && iParam0 <= 81;
}

int func_288(int iParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x1A714 Hash - 0x71EF3E96 ^0x557A7961
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	BOOL flag;
	int num5;

	num3 = iParam0;
	num4 = iParam1;

	if (Global_1572887.f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				num = 1;
				num2 = 100;
				hParam3 = MISC::GET_HASH_KEY(&(Global_1835011[iParam0 /*74*/].f_8));
				break;
		
			case 2:
				num = 101;
				num2 = 170;
				break;
		
			case 3:
				num = 171;
				num2 = 190;
				break;
		
			case 4:
				num = 191;
				num2 = 230;
				break;
		
			case 5:
				num = 231;
				num2 = 260;
				break;
		
			case 6:
				num = 261;
				num2 = 290;
				break;
		
			case 7:
				num = 291;
				num2 = 370;
				break;
		
			case 8:
				num = 371;
				num2 = 570;
				hParam3 = MISC::GET_HASH_KEY(&(Global_1347702[iParam0 /*49*/].f_3));
				break;
		
			case 9:
				num = 571;
				num2 = 650;
				break;
		
			case 10:
				return -1;
		
			case 11:
				num = 651;
				num2 = 750;
				break;
		
			case 12:
				return -1;
		
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				num = 1;
				num2 = 200;
				break;
		
			case 2:
				num = 201;
				num2 = 15700;
				break;
		
			case 4:
				num = 15701;
				num2 = 16200;
				break;
		
			case 6:
				return -1;
		
			case 7:
				return -1;
		
			case 8:
				return -1;
		
			case 10:
				num = 19201;
				num2 = 20000;
				break;
		
			case 12:
				num = 16201;
				num2 = 19200;
				break;
		
			default:
				return -1;
		}
	}

	if (num2 >= func_447())
		num2 = func_447();

	flag = func_448(num3, num4, iParam2);

	if (Global_1572887.f_12 == -1)
	{
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			num5 = i;
		
			if (func_449(num5) == flag)
				return num5;
		
			if (func_449(num5) == false)
				return func_450(num3, num4, iParam2, i, hParam3);
		}
	
		num = 751;
		num2 = 770;
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			num5 = i;
		
			if (func_449(num5) == flag)
				return num5;
		
			if (func_449(num5) == false)
				return func_450(num3, num4, iParam2, i, hParam3);
		}
	}
	else
	{
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			if (Global_1058888.f_428[i /*2*/] == flag)
				return i;
		}
	
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			if (Global_1058888.f_428[i /*2*/] == false)
				return func_450(num3, num4, iParam2, i, 0);
		}
	}

	return -1;
}

BOOL func_289(int iParam0) // Position - 0x1A9CF Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

eStackSize func_290(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x1AA02 Hash - 0x25DFFF2C ^0x74CE6365
{
	eStackSize stackSize;

	stackSize = func_451();

	if (func_294(stackSize))
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[stackSize /*35*/].f_3, vParam0))
			return stackSize;

	return func_452(vParam0, bParam3);
}

void func_291(int iParam0, int iParam1) // Position - 0x1AA3D Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

void func_292(int iParam0) // Position - 0x1AA4E Hash - 0xFC8C9409 ^0xE623F74F
{
	func_453(&Global_1392915[iParam0 /*12*/]);
	func_454(&Global_1392915.f_121[iParam0 /*20*/]);
	return;
}

BOOL func_293(int iParam0) // Position - 0x1AA70 Hash - 0xE49023EE ^0xE49023EE
{
	return iParam0 > -1 && iParam0 < 17;
}

BOOL func_294(eStackSize essParam0) // Position - 0x1AA86 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return essParam0 >= 0 && essParam0 <= 150;
}

BOOL func_295(int iParam0) // Position - 0x1AA9C Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_94(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

void func_296(int iParam0, int iParam1) // Position - 0x1AAFB Hash - 0x90CB757D ^0x90CB757D
{
	switch (iParam0)
	{
		case 0:
			Global_40.f_4283.f_313 = iParam1;
			break;
	
		case 1:
			Global_40.f_4283.f_316 = iParam1;
			break;
	
		case 2:
			Global_40.f_4283.f_317 = iParam1;
			break;
	
		case 3:
			Global_40.f_4283.f_318 = iParam1;
			break;
	
		case 4:
			Global_40.f_4283.f_319 = iParam1;
			break;
	
		case 5:
			Global_40.f_4283.f_320 = iParam1;
			break;
	
		case 10:
			Global_40.f_4283.f_321 = iParam1;
			break;
	
		case 12:
			Global_40.f_4283.f_315 = iParam1;
			break;
	
		case 13:
			Global_40.f_4283.f_314 = iParam1;
			break;
	
		case 14:
			Global_40.f_4283.f_322 = iParam1;
			break;
	}

	return;
}

eStackSize func_297(eStackSize essParam0) // Position - 0x1ABD3 Hash - 0x84838E68 ^0x84838E68
{
	switch (essParam0)
	{
		case -1:
			return -1;
	
		case 0:
			return 43;
	
		case 1:
			return 71;
	
		case 2:
			return 98;
	
		case 3:
			return 9;
	
		case 4:
			return 58;
	
		case 5:
			return 4;
	
		case 6:
			return 79;
	
		case 7:
			return 22;
	
		case 8:
			return 37;
	
		default:
		
	}

	essParam0 != -1;
	return -1;
}

int func_298(eStackSize essParam0) // Position - 0x1AC56 Hash - 0xB97A73EA ^0xB97A73EA
{
	switch (essParam0)
	{
		case 4:
			return 5;
	
		case 5:
			return 9;
	
		case 9:
			return 6;
	
		case 22:
			return 7;
	
		case 26:
			return 14;
	
		case 37:
			return 15;
	
		case 38:
			return 10;
	
		case 43:
			return 1;
	
		case 58:
			return 3;
	
		case 71:
			return 4;
	
		case 76:
			return 8;
	
		case 78:
			return 13;
	
		case 79:
			return 0;
	
		case 92:
			return 12;
	
		case 98:
			return 2;
	
		case 105:
			return 11;
	
		case 115:
			return 16;
	
		default:
		
	}

	return -1;
}

int func_299(eStackSize essParam0) // Position - 0x1AD1A Hash - 0xB8EC44B7 ^0xD2575E28
{
	switch (essParam0)
	{
		case 0:
			return joaat("CSTAG_COL_BASE");
	
		case 1:
			return joaat("CSTAG_HSO_BASE");
	
		case 2:
			return joaat("CSTAG_CLM_BASE");
	
		case 3:
			return joaat("CSTAG_SDB_BASE");
	
		case 4:
			return joaat("CSTAG_GUA_BASE");
	
		case 5:
			return joaat("CSTAG_LAK_BASE");
	
		case 6:
			return joaat("CSTAG_BVH_BASE");
	
		case 7:
			return joaat("CSTAG_PRG_BASE");
	
		case 8:
			return joaat("CSTAG_BCH_BASE");
	
		default:
		
	}

	return 176656832;
}

int func_300(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1ADAD Hash - 0x8BF3BA53 ^0xECA3E26
{
	int i;
	Hash hash;
	int num;
	int num2;
	int j;

	for (i = 0; i < 60; i = i + 1)
	{
		if (Global_40.f_4283.f_6[i /*5*/] == iParam0)
			return 1;
	}

	num = func_455(iParam0);
	num2 = func_456(iParam0);

	for (i = 0; i < 60; i = i + 1)
	{
		if (Global_40.f_4283.f_6[i /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[i /*5*/] = iParam0;
			Global_40.f_4283.f_6[i /*5*/].f_2 = iParam1;
			Global_40.f_4283.f_6[i /*5*/].f_3 = num2;
		
			if (iParam3 > 0)
			{
				hash = func_457();
				func_458(&hash, 0, 0, iParam3, 0, 0, 0, false);
			}
			else
			{
				hash = -15;
			}
		
			Global_40.f_4283.f_6[i /*5*/].f_1 = hash;
			Global_40.f_4283.f_6[i /*5*/].f_4 = num;
			func_459(iParam0, true);
		
			if (func_460(num))
			{
				for (j = 0; j < 60; j = j + 1)
				{
					if (Global_40.f_4283.f_6[j /*5*/].f_4 == num && Global_40.f_4283.f_6[j /*5*/] != iParam0)
						func_461(&Global_40.f_4283.f_6[j /*5*/], true, false);
				}
			}
		
			if (bParam5)
				if (bParam6)
					func_462(1, iParam0);
				else
					func_463(1, iParam0);
		
			return 1;
		}
	}

	return 0;
}

void func_301() // Position - 0x1AF01 Hash - 0x218B7FE2 ^0x60229073
{
	func_303(1591451572);
	func_303(-349064220);
	func_303(1776302352);
	func_303(-523522517);
	return;
}

void func_302(char* sParam0) // Position - 0x1AF2D Hash - 0x4F2C3B92 ^0xDDFC3280
{
	if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE(sParam0))
		PATHFIND::_NAVMESH_DEACTIVATE_SWAP(sParam0);

	return;
}

void func_303(int iParam0) // Position - 0x1AF45 Hash - 0xE2FB6CC5 ^0x5A2D5EFE
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_464(iParam0, 1);
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

void func_304(int iParam0) // Position - 0x1AFCB Hash - 0xE2FB6CC5 ^0x3F95ACE7
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_464(iParam0, 1);
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

void func_305(int iParam0, BOOL bParam1) // Position - 0x1B064 Hash - 0x1E78A51E ^0x8BB44A98
{
	if (Global_1572887.f_10 && func_115() == false)
		return;

	if (func_465(128))
		return;

	if (!func_466(iParam0))
		return;

	if (func_467(iParam0, 32))
		return;

	func_468(iParam0, 32);
	func_469(&Global_1935630, 8192);
	func_471(func_470(joaat("discovered"), joaat("AREAS")), 1);

	switch (func_472(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_471(func_470(joaat("discovered"), joaat("lowlands_areas")), 1);
			break;
	
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_471(func_470(joaat("discovered"), joaat("mountain_areas")), 1);
			break;
	
		case 3:
		case 10:
			func_471(func_470(joaat("discovered"), joaat("foothills_areas")), 1);
			break;
	
		case 4:
		case 9:
			func_471(func_470(joaat("discovered"), joaat("plains_areas")), 1);
			break;
	
		case 8:
			func_471(func_470(joaat("discovered"), joaat("guama_areas")), 1);
			break;
	
		case 13:
		case 14:
		case 15:
		case 16:
			func_471(func_470(joaat("discovered"), joaat("new_austin_areas")), 1);
			break;
	}

	switch (iParam0)
	{
		case 0:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_CRAWDAD_WILLIES"));
			break;
	
		case 1:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_MACOMBS_END"));
			break;
	
		case 2:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_MERKINS_WALLER"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_FISHING_SPOT"));
			break;
	
		case 6:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_HAGEN_ORCHARDS"));
			break;
	
		case 7:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_SERIAL_KILLER"));
			break;
	
		case 9:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_SHADY_BELLE"));
			break;
	
		case 10:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_SILTWATER_STRAND"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_SILTWATER_STRAND"));
			break;
	
		case 11:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_EVENTAREA_APPLESEED_TIMBER_COMPANY"));
			break;
	
		case 12:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_BERYLS_DREAM"));
			break;
	
		case 15:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_EVENTAREA_FORT_RIGGS"));
			break;
	
		case 16:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_HANGING_DOG_RANCH"));
			break;
	
		case 17:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_LONE_MULE_STEAD"));
			break;
	
		case 21:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_PAINTED_SKY"));
			break;
	
		case 22:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SPECIAL_SETTLEMENT_PRONGHORN_RANCH"));
			break;
	
		case 24:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_STILT_SHACK"));
			break;
	
		case 25:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SPECIAL_SHACK_SHEPHERDS_RISE"));
			break;
	
		case 26:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_TAXIDERMIST_HOUSE"));
			break;
	
		case 27:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_VALLEY_VIEW"));
			break;
	
		case 28:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_WALLACE_OVERLOOK"));
			break;
	
		case 29:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_WATSONS_CABIN"));
			break;
	
		case 30:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_CANEBREAK_MANOR"));
			break;
	
		case 31:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_COPPERHEAD_LANDING"));
			break;
	
		case 34:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_FIRWOOD_RISE"));
			break;
	
		case 36:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_SIX_POINT_CABIN"));
			break;
	
		case 37:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_BEECHERS_HOPE"));
			break;
	
		case 40:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_ADLER_RANCH"));
			break;
	
		case 42:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_CHEZ_PORTER"));
			break;
	
		case 43:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_COLTER"));
			break;
	
		case 44:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_FROZEN_EXPLORERS"));
			break;
	
		case 45:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_MILLESANI_CLAIM"));
			break;
	
		case 49:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_EWING_BASIN"));
			break;
	
		case 54:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_THE_LOFT"));
			break;
	
		case 55:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_VETERANS_HOMESTEAD"));
			break;
	
		case 62:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_OLD_GREENBANK_MILL"));
			break;
	
		case 63:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SPECIAL_SHACK_BEECHERS_C"));
			break;
	
		case 64:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_CARMODY_DELL"));
			break;
	
		case 65:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_CORNWALL_KEROSENE_TAR"));
			break;
	
		case 66:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_GUTHRIE_FARM"));
			break;
	
		case 68:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_DOWNES_RANCH"));
			break;
	
		case 71:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_HORSESHOE_OVERLOOK"));
			break;
	
		case 72:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_LARNED_SOD"));
			break;
	
		case 74:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_LUCKYS_CABIN"));
			break;
	
		case 77:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_ABERDEEN_PIG_FARM"));
			break;
	
		case 79:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_BEAVER_HOLLOW"));
			break;
	
		case 80:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_BLACK_BALSAM_RISE"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_IDENTICAL_TWINS_01"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_IDENTICAL_TWINS_02"));
			break;
	
		case 82:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_BUTCHER_CREEK"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_POISON_LEAK"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_29"));
			break;
	
		case 83:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_DOVERHILL"));
			break;
	
		case 85:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_ANGRY_ISOLATIONIST"));
			break;
	
		case 86:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_MACLEANS_HOUSE"));
			break;
	
		case 87:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_MOSSY_FLATS"));
			break;
	
		case 89:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_WILLARDS_REST"));
			break;
	
		case 91:
			MAP::_MAP_DISCOVER_REGION(85299473);
			break;
	
		case 96:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_CATFISH_JACKSONS"));
			break;
	
		case 98:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_CLEMENS_POINT"));
			break;
	
		case 99:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_COMPSONS_STEAD"));
			break;
	
		case 100:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_HILL_HAVEN_RANCH"));
			break;
	
		case 102:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_LONNIES_SHACK"));
			break;
	
		case 104:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_RADLEYS_PASTURE"));
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_RADLEYS_HOUSE"));
			break;
	
		case 106:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_SLAVE_PEN"));
			break;
	
		case 107:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SHACK_AURORA_BASIN"));
			break;
	
		case 109:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_COCHINAY"));
			break;
	
		case 112:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_TANNERS_REACH"));
			MAP::_MAP_DISCOVER_REGION(-960425936);
			break;
	
		case 114:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HIDEOUT_GAPTOOTH_BREACH"));
			break;
	
		case 121:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_SETTLEMENT_COOTS_CHAPEL"));
			break;
	
		case 122:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_LAKE_DON_JULIO_HOUSE"));
			break;
	
		case 123:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_LANDMARK_RILEYS_CHARGE"));
			break;
	
		case 124:
			MAP::_MAP_DISCOVER_REGION(joaat("MAP_HOMESTEAD_RIDGEWOOD_FARM"));
			break;
	}

	if (bParam1)
		func_468(iParam0, 64);

	return;
}

void func_306() // Position - 0x1B6D9 Hash - 0xF3F3DB66 ^0x4BA089B8
{
	int i;
	eStackSize stackSize;
	int num;

	for (i = 0; i < Global_36308; i = i + 1)
	{
		stackSize = func_473(i);
	
		if (stackSize != -1)
		{
			if (func_474(stackSize) != -1 && stackSize != func_475())
			{
				if (i == Global_1934051.f_33 && func_476(i))
				{
					func_477(i, joaat("BLIP_MODIFIER_GROUPING_CAMP_GROUP_LEADER"));
					func_478(&(Global_1934051.f_33), false);
				}
			
				num = func_479(stackSize, 19);
			
				if (num != -1)
				{
					if (i == Global_1914319.f_15936[num /*6*/] && func_476(i))
					{
						if (Global_1914319.f_15936[num /*6*/].f_5)
							Global_1914319.f_15936[num /*6*/].f_5 = 0;
					
						func_478(&Global_1914319.f_15936[num /*6*/], false);
					}
				}
			}
		}
	}

	return;
}

void func_307(eStackSize essParam0) // Position - 0x1B7A0 Hash - 0x17EAD328 ^0x17EAD328
{
	eStackSize stackSize;
	int num;
	eStackSize stackSize2;
	int num2;

	stackSize = func_475();

	if (func_294(stackSize))
	{
		num = func_298(stackSize);
	
		if (func_293(num))
			Global_40.f_9384[num /*2*/] = Global_40.f_9384[num /*2*/] - Global_40.f_9384[num /*2*/] & true;
	}

	stackSize2 = func_297(essParam0);
	num2 = func_298(stackSize2);

	if (func_293(num2))
	{
		Global_40.f_9384[num2 /*2*/] = Global_40.f_9384[num2 /*2*/] | true;
		Global_40.f_6 = { Global_1395601.f_5[num2 /*28*/].f_2 };
		VOLUME::_0x748C5F51A18CB8F0(false);
		VOLUME::_0x748C5F51A18CB8F0(true);
	}

	return;
}

void func_308(BOOL bParam0, int iParam1) // Position - 0x1B837 Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_480(&Global_0, 8);

	if (!func_481() || func_115() != -1)
		return;

	func_480(&Global_0, 1);
	return;
}

void func_309(eStackSize essParam0) // Position - 0x1B87D Hash - 0xDA705072 ^0x67B87EA0
{
	eStackSize stackSize;

	if (essParam0 == -1)
		return;

	stackSize = func_297(essParam0);

	if (stackSize == -1)
		return;

	func_482(essParam0);
	func_483(essParam0);
	func_318();

	if (stackSize == 9)
		func_484(-524145696, false, false);

	return;
}

void func_310(eStackSize essParam0) // Position - 0x1B8C1 Hash - 0x69550477 ^0x69550477
{
	func_485();

	switch (essParam0)
	{
		case 0:
			func_486(-1303.8203f, 2431.2322f, 307.1254f, 254.7021f, 2);
			func_486(-1331.6099f, 2479.8738f, 308.7661f, 343.4772f, 1);
			func_486(-1367.1552f, 2401.2366f, 305.9231f, 182.5857f, 0);
			break;
	
		case 1:
			func_486(-40.4062f, 24.7958f, 92.5989f, 345.8244f, 2);
			func_486(-46.6053f, 49.3195f, 89.4332f, 32.7929f, 2);
			func_486(-89.1265f, 74.3389f, 88.5412f, 341.7615f, 1);
			func_486(-117.2523f, 26.8954f, 84.9916f, 71.3425f, 1);
			func_486(-92.892f, 50.1228f, 87.8695f, 45.8778f, 1);
			func_486(-13.6112f, -0.4862f, 101.6951f, 255.2034f, 2);
			func_486(-32.3882f, -18.9331f, 103.6418f, 237.7177f, 3);
			func_486(-19.8908f, -62.5598f, 103.873f, 267.298f, 3);
			func_486(-33.2324f, -103.5739f, 101.7936f, 255.1129f, 3);
			func_486(-69.4097f, -128.0305f, 97.0682f, 221.4977f, 3);
			func_486(-79.3456f, -103.7585f, 91.473f, 66.6098f, 3);
			func_486(-134.3901f, -69.9172f, 90.3402f, 108.8014f, 0);
			func_486(-163.3076f, -54.9202f, 89.2085f, 130.3788f, 0);
			func_486(-7.8651f, 34.202f, 96.8284f, 252.726f, 2);
			break;
	
		case 2:
			func_486(773.3724f, -1152.6937f, 46.0144f, 287.6862f, 1);
			func_486(678.071f, -1106.9283f, 50.6427f, 308.8809f, 1);
			func_486(694.5107f, -1273.2556f, 42.5974f, 276.0894f, 3);
			func_486(624.2226f, -1093.59f, 44.0105f, 324.7204f, 1);
			func_486(695.23f, -1204.24f, 44.84f, -75.427f, 0);
			break;
	
		case 3:
			func_486(1814.4517f, -1812.8838f, 47.3854f, 46.0618f, 0);
			func_486(1844.125f, -1770.2887f, 44.872f, 354.3456f, 0);
			func_486(1774.5906f, -1878.9435f, 45.1128f, 1.1527f, 0);
			func_486(1751.8677f, -1959.4158f, 47.0387f, 100.6328f, 3);
			func_486(1818.6589f, -2009.7338f, 43.2796f, 94.403f, 3);
			break;
	
		case 6:
			func_486(2372.8276f, 1302.3016f, 108.3737f, 193.8477f, 2);
			func_486(2299.087f, 1370.095f, 100.6253f, 148.7151f, 1);
			func_486(2325.4014f, 1301.1583f, 95.0156f, 220.5325f, 2);
			break;
	}

	return;
}

void func_311(var uParam0, int iParam1, BOOL bParam2) // Position - 0x1BC0E Hash - 0x70644665 ^0x70644665
{
	if (bParam2)
		*uParam0 = *uParam0 || iParam1;
	else
		*uParam0 = *uParam0 - *uParam0 && iParam1;

	return;
}

void func_312(BOOL bParam0, int iParam1) // Position - 0x1BC34 Hash - 0x79C7FE3F ^0x6329E121
{
	BOOL flag;

	if (func_487())
		if (func_488(255))
			if (!func_489(36, 255))
				return;

	flag = bParam0;

	if (!bParam0)
	{
		if (func_294(Global_1894899.f_2) && func_490(Global_1894899.f_2))
		{
			func_491(Global_1894899.f_2, 0);
		
			if (iParam1 != 0)
			{
				Global_1894899.f_7 = iParam1;
				func_492(16);
			}
		}
		else if (func_294(Global_1894899.f_2) && !func_467(Global_1894899.f_2, 2))
		{
			bParam0 = true;
		}
	}

	if (bParam0)
	{
		!CAM::IS_SCREEN_FADED_OUT();
		Global_1894899.f_7 = 0;
		func_493(16);
		func_494();
	
		if (flag)
			func_493(true);
	}

	return;
}

void func_313() // Position - 0x1BCF2 Hash - 0xA2453A60 ^0x72F7C26E
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1357549.f_1674))
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1357549.f_1674))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1357549.f_1674, true, false);
	
		if (ENTITY::IS_ENTITY_DEAD(Global_1357549.f_1674) == false)
			VEHICLE::DELETE_VEHICLE(&(Global_1357549.f_1674));
	}

	return;
}

void func_314() // Position - 0x1BD3E Hash - 0x48D36878 ^0x48D36878
{
	func_495(32);
	return;
}

void func_315(int iParam0) // Position - 0x1BD4C Hash - 0xE84E58F3 ^0x58674709
{
	int i;

	*iParam0 = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		func_496(&iParam0->f_1[i /*5*/]);
	}

	iParam0->f_62 = 0;
	return;
}

void func_316(int iParam0, int iParam1) // Position - 0x1BD7C Hash - 0xFF5E61C9 ^0xFF5E61C9
{
	if (iParam1 <= 0)
		return;

	if (func_497(iParam0, 0, iParam1, &Global_40.f_4283.f_440[0 /*63*/], false, true))
		return;

	if (func_497(iParam0, 0, iParam1, &Global_40.f_4283.f_440[1 /*63*/], false, true))
	{
		if (Global_40.f_4283.f_440[1 /*63*/] == 0)
			Global_40.f_4283.f_440[1 /*63*/] = func_498(&Global_40.f_4283.f_440[0 /*63*/]);
	
		return;
	}

	func_499(&(Global_40.f_4283.f_440));
	func_497(iParam0, 0, iParam1, &Global_40.f_4283.f_440[1 /*63*/], false, true);
	return;
}

void func_317(BOOL bParam0) // Position - 0x1BE18 Hash - 0x608663EB ^0xCDCCCD63
{
	if (bParam0)
	{
		HUD::_ENABLE_HUD_CONTEXT(-1618603322);
		func_500(8388608);
	}
	else
	{
		HUD::_DISABLE_HUD_CONTEXT(-1618603322);
		func_501(8388608);
	}

	return;
}

void func_318() // Position - 0x1BE4A Hash - 0x74545DD4 ^0x74545DD4
{
	Global_1357549 = 0;
	func_500(1);
	return;
}

void func_319() // Position - 0x1BE5C Hash - 0xF3F2A62E ^0x76C4685A
{
	Hash hash;
	Hash hash2;

	Global_1357549.f_1886 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Tithing");
	Global_1357549.f_1886.f_1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1357549.f_1886, "Supplies", "");
	hash = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549.f_1886, "CampFunds");
	func_502(hash, &(Global_1357549.f_1886.f_2));
	hash2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1357549.f_1886, "PlayerCash");
	func_502(hash2, &(Global_1357549.f_1886.f_4));
	return;
}

BOOL func_320(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1BED1 Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_430(essParam0))
			return false;

	return Global_40.f_4942[essParam0 /*60*/] && bParam1 != false;
}

void func_321(eStackSize essParam0) // Position - 0x1BEFB Hash - 0x202D286E ^0x202D286E
{
	func_140(essParam0, 4, true);
	return;
}

void func_322(eStackSize essParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1BF0B Hash - 0x599E4D03 ^0x95F02F3A
{
	if (essParam0 < 0 || essParam0 > 95)
		return;

	if (!Global_40 || bParam4)
		func_503(essParam0, bParam3);

	Global_40.f_7157[essParam0 /*3*/].f_1 = iParam1;
	Global_40.f_7157[essParam0 /*3*/].f_2 = iParam2;
	return;
}

void func_323(BOOL bParam0) // Position - 0x1BF5B Hash - 0x46E621A2 ^0x96F17FB3
{
	if (bParam0 == func_504())
		return;

	if (bParam0)
	{
		func_505(81053684);
	
		if (!func_507(func_506(0)))
			func_505(-525676072);
	}
	else
	{
		func_508(81053684);
		func_508(-525676072);
	}

	Global_1946054.f_2792 = bParam0;
	return;
}

void func_324(var uParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23) // Position - 0x1BFB1 Hash - 0x50B9C122 ^0xBF947AA3
{
	func_509(uParam0, hParam1, uParam2, uParam10);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(15), uParam10.f_10);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(17), uParam10.f_11);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(19), uParam10.f_12);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(3), uParam10.f_13);
	return;
}

void func_325(var uParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x1C01F Hash - 0x7B0DBE05 ^0x2CBBC8EE
{
	func_509(uParam0, hParam1, uParam2, uParam10);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(15), &(uParam10.f_10));
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(21), uParam10.f_18);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(22), uParam10.f_19);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(23), uParam10.f_20);
	return;
}

void func_326(var uParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37) // Position - 0x1C08D Hash - 0xEF83CECE ^0xD0AA033E
{
	func_509(uParam0, hParam1, uParam2, uParam10);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(15), &(uParam10.f_10));

	if (uParam10.f_24)
		uParam0->f_12 = DATABINDING::_DATABINDING_ADD_HASH_ARRAY(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(32));
	else
		uParam0->f_12 = DATABINDING::_DATABINDING_ADD_STRING_ARRAY(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(32));

	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(30), uParam10.f_18);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(31), uParam10.f_19);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(33), uParam10.f_21);
	uParam0->f_18 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(35), uParam10.f_22);
	uParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(34), uParam10.f_22);
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(36), uParam10.f_25);
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(37), uParam10.f_26);
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(38), uParam10.f_27);
	return;
}

void func_327(var uParam0, int iParam1, char* sParam2, char* sParam3, BOOL bParam4) // Position - 0x1C190 Hash - 0xB3158B7D ^0x90B13754
{
	Hash hash;

	hash = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, sParam2);
	uParam0->f_5836[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_BOOL(hash, sParam3, bParam4);
	return;
}

void func_328(var uParam0, int iParam1, char* sParam2, char* sParam3, Hash hParam4) // Position - 0x1C1B8 Hash - 0xB3158B7D ^0x6EFA5159
{
	Hash hash;

	hash = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, sParam2);
	uParam0->f_5848[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, sParam3, hParam4);
	return;
}

void func_329(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4) // Position - 0x1C1E0 Hash - 0xB3158B7D ^0x8B0E5E01
{
	Hash hash;

	hash = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5835, sParam2);
	uParam0->f_5859[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_STRING(hash, sParam3, sParam4);
	return;
}

void func_330() // Position - 0x1C208 Hash - 0x2A2158EB ^0x741BD487
{
	int i;
	var unk;
	int num;
	int num2;

	if (func_115() == -1)
		num = 249428082;
	else
		num = -525029060;

	num.f_1 = -1781055500;
	num.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&num);

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&num))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&unk, &num, 1205212054))
		{
		}
		else
		{
			num2 = func_511(unk);
		
			if (num2 < 0 || num2 >= 54)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_INT(&unk, &num, 356562968))
			{
			}
			else
			{
				Global_1946054.f_2[num2] = unk;
			}
		}
	}

	for (i = 0; i < 39; i = i + 1)
	{
		func_512(i, func_115() == -1);
	}

	return;
}

void func_331() // Position - 0x1C2B9 Hash - 0xE874039B ^0xE874039B
{
	int i;

	Global_1946054.f_850 = 0;
	Global_1946054.f_855 = 0;
	Global_1946054.f_856 = 0;
	Global_1946054.f_852 = 0;
	Global_1946054.f_853 = 0;
	Global_1946054.f_854 = 0;
	Global_1946054.f_851 = 0;

	for (i = 0; i < 37; i = i + 1)
	{
		Global_1946054.f_529[i] = 0;
	}

	func_513(8);
	func_513(16);
	return;
}

BOOL func_332(Hash hParam0, int iParam1) // Position - 0x1C324 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

void func_333(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1C33E Hash - 0xB00F2D2F ^0xF97C1EB9
{
	BOOL flag;

	switch (func_371(hParam0))
	{
		case -2061583405:
			flag = func_514(hParam0, &(Global_1946054.f_2657.f_21));
			break;
	
		case -1719060085:
			flag = func_514(hParam0, &(Global_1946054.f_2657.f_24));
			break;
	
		case -999503751:
			flag = func_514(hParam0, &(Global_1946054.f_2657.f_20));
			break;
	
		case -525676072:
			flag = func_514(hParam0, &(Global_1946054.f_2657.f_22));
			break;
	
		case -413129408:
			flag = func_514(hParam0, &(Global_1946054.f_2657.f_25));
			break;
	
		case 81053684:
			flag = func_514(hParam0, &(Global_1946054.f_2657.f_23));
			break;
	}

	if (!flag)
		return;

	if (bParam2)
		func_515();

	if (bParam1)
		func_347(false, false);

	return;
}

int func_334(int iParam0) // Position - 0x1C40B Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_289(iParam0))
		return -1;

	return func_516(iParam0);
}

int func_335(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3, BOOL bParam4) // Position - 0x1C427 Hash - 0x3C2EC293 ^0xC2A7C7CB
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Hash ammoType;
	int pedAmmoByType;
	var statId;

	if (!func_332(hParam0, 0))
		return 0;

	flag = hParam3 == 562618531;
	flag2 = hParam3 == 1992602754;
	flag3 = hParam3 == -1387038764;
	ammoType = func_517(hParam0, 1);

	if (ammoType != 0)
	{
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
		pedAmmoByType = pedAmmoByType - iParam1;
	
		if (pedAmmoByType < 0)
			return 0;
	
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, ammoType, iParam1, hParam3);
	
		if (!bParam2)
			func_518(hParam0, -iParam1, flag, flag2, flag3);
	
		return 0;
	}

	if (!func_418(hParam0, 1, bParam4))
		return 0;

	statId = { func_519(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_520(hParam0, false, false) - iParam1 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);
		}
		else if (func_520(hParam0, false, false) - iParam1 < 0)
		{
			func_335(hParam0, func_520(hParam0, false, false), bParam2, hParam3, bParam4);
			return 0;
		}
	}

	if (func_521(hParam0) == joaat("WEAPON"))
		if (!func_522(hParam0, iParam1, false, hParam3))
			return 0;
	else if (!func_523(hParam0, iParam1, hParam3, bParam2, bParam4))
		return 0;

	if (hParam0 == joaat("document_player_journal"))
		Global_1935496.f_20 = 0;

	if (!func_524(false))
		bParam2 = true;

	if (!bParam2 && hParam0 != 1309979101)
		func_518(hParam0, -iParam1, flag, flag2, flag3);

	func_525(hParam0, iParam1);
	return 1;
}

BOOL func_336(Hash hParam0) // Position - 0x1C59B Hash - 0x8EDDF1C2 ^0x8EDDF1C2
{
	switch (func_371(hParam0))
	{
		case -2061583405:
			return true;
	
		case -1719060085:
			return true;
	
		case -999503751:
			return true;
	
		case -525676072:
			return true;
	
		case -413129408:
			return true;
	
		case 81053684:
			return true;
	
		default:
		
	}

	return false;
}

int func_337(Hash hParam0) // Position - 0x1C5EC Hash - 0xD5A0FAAB ^0x54F422C9
{
	var unk;

	unk = { func_526(hParam0, true, false) };
	return func_527(unk.f_4);
}

int func_338(Hash hParam0, int iParam1) // Position - 0x1C608 Hash - 0x9D981F95 ^0x9D981F95
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

int func_339() // Position - 0x1C7D9 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1946054.f_1;
}

Vector3 func_340(int iParam0, eStackSize essParam1) // Position - 0x1C7E7 Hash - 0x6854E748 ^0xA730727C
{
	if (func_115() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		return Global_26796.f_26[essParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	return Global_36638.f_45.f_350.f_26[essParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

Hash func_341(int iParam0, eStackSize essParam1) // Position - 0x1C846 Hash - 0x95660DAB ^0x95660DAB
{
	var unk;

	unk = { func_340(iParam0, essParam1) };
	return unk;
}

void func_342(Hash hParam0, int iParam1, eStackSize essParam2) // Position - 0x1C85C Hash - 0xC2C59C9E ^0x9DCB6812
{
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_343(var uParam0, eStackSize essParam1) // Position - 0x1C8B7 Hash - 0x532E3FFC ^0x8CC1CDDF
{
	int i;

	if (func_115() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		*uParam0 = Global_26796.f_26[essParam1 /*120*/].f_1;
	
		for (i = 0; i < 39; i = i + 1)
		{
			uParam0->f_1[i /*3*/] = { Global_26796.f_26[essParam1 /*120*/].f_1.f_1[i /*3*/] };
		}
	
		return;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	*uParam0 = Global_36638.f_45.f_350.f_26[essParam1 /*120*/].f_1;

	for (i = 0; i < 39; i = i + 1)
	{
		uParam0->f_1[i /*3*/] = { Global_36638.f_45.f_350.f_26[essParam1 /*120*/].f_1.f_1[i /*3*/] };
	}

	return;
}

void func_344() // Position - 0x1C971 Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1497 = Global_1946054.f_1378;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1497.f_1[i /*3*/] = { Global_1946054.f_1378.f_1[i /*3*/] };
	}

	return;
}

BOOL func_345(var uParam0) // Position - 0x1C9B8 Hash - 0x5DC33D01 ^0x5DC33D01
{
	eStackSize i;
	BOOL num;

	num = 1;

	for (i = 0; i < 5; i = i + 1)
	{
		if (i >= 1 && !func_528(2, i))
		{
			uParam0->[i] = 2;
		}
		else if (func_348(&uParam0->[i], &(Global_26796.f_26[i /*120*/].f_1)))
		{
			uParam0->[i] = 0;
		}
		else
		{
			uParam0->[i] = 1;
			num = 0;
		}
	}

	return num;
}

void func_346(var uParam0) // Position - 0x1CA21 Hash - 0xF32896C5 ^0x351718DB
{
	eStackSize i;

	if (uParam0->[0] == 1)
		func_349(&(Global_26796.f_26[0 /*120*/].f_1), false);

	for (i = 1; i <= 4; i = i + 1)
	{
		if (uParam0->[i] != 1)
		{
		}
		else
		{
			func_529(2, i, 6);
			func_333(func_530(i), true, true);
			func_523(func_530(i), 1, -142743235, false, false);
		
			if (Global_1946054.f_1497 == func_531(i) || Global_40.f_7729 == i)
				if (Global_1946054.f_1 == 1160113249)
					Global_40.f_7729 = 62;
				else
					Global_40.f_7729 = 6;
		}
	}

	return;
}

void func_347(BOOL bParam0, BOOL bParam1) // Position - 0x1CAC7 Hash - 0x4F2782D4 ^0x9FBFC876
{
	if (bParam1)
		func_362(0);

	if (bParam0)
	{
		func_532(8);
		func_532(512);
	}
	else
	{
		func_532(8);
		func_532(16);
	}

	return;
}

BOOL func_348(var uParam0, Hash hParam1) // Position - 0x1CAFA Hash - 0x601DF15D ^0x8C11B2C0
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (!func_533(&Global_1946054.f_1378.f_1[i /*3*/], 2))
		{
		}
		else if (hParam1->f_1[i /*3*/] == Global_1946054.f_57[i /*11*/] || hParam1->f_1[i /*3*/] == 0 || !func_533(&hParam1->f_1[i /*3*/], 2))
		{
			if (func_535(func_534(i, 1)))
			{
				*uParam0 = 1;
				return false;
			}
		}
	}

	return true;
}

void func_349(Hash hParam0, BOOL bParam1) // Position - 0x1CB7F Hash - 0xE3201932 ^0xB5D2E70
{
	var unk;
	int i;

	Global_1347477.f_184 = -1;
	Global_1347477.f_185 = 0;
	func_101(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));

	if (Global_1946054.f_1 == 1160113249)
	{
		func_100(&(Global_1946054.f_1378), 1105329772, &unk, true, false, false, 0);
		Global_1946054.f_1378.f_1[27 /*3*/] = -1515874150;
	}
	else
	{
		func_100(&(Global_1946054.f_1378), 2020890174, &unk, true, false, false, 0);
	
		if (bParam1)
			func_100(&(Global_1946054.f_1378), -1061007984, &unk, true, false, false, 0);
	
		Global_1946054.f_1378.f_1[27 /*3*/] = joaat("clothing_sp_offhand_000");
	}

	func_536(Global_40.f_7731[0 /*5*/], Global_40.f_7731[1 /*5*/], Global_40.f_7731[2 /*5*/]);
	func_537(Global_40.f_7748.f_1);

	for (i = 0; i < 39; i = i + 1)
	{
		if (!func_533(&Global_1946054.f_1378.f_1[i /*3*/], 2))
		{
		}
		else
		{
			Global_1946054.f_1497.f_1[i /*3*/].f_2 = Global_1946054.f_1497.f_1[i /*3*/].f_2 || Global_1946054.f_1378.f_1[i /*3*/].f_2;
			hParam0->f_1[i /*3*/].f_2 = hParam0->f_1[i /*3*/].f_2 || Global_1946054.f_1378.f_1[i /*3*/].f_2;
		
			if (!func_535(func_534(i, 1)))
			{
			}
			else
			{
				if (hParam0->f_1[i /*3*/] == Global_1946054.f_57[i /*11*/] || hParam0->f_1[i /*3*/] == 0)
					hParam0->f_1[i /*3*/] = Global_1946054.f_1378.f_1[i /*3*/];
			
				switch (func_534(i, 1))
				{
					case joaat("MP_COMPONENT_TYPE_BEARDS_CHIN"):
					case joaat("MP_COMPONENT_TYPE_HAIR"):
					case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
					case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
						hParam0->f_1[i /*3*/].f_1 = Global_1946054.f_1378.f_1[i /*3*/].f_1;
						break;
				}
			}
		}
	}

	return;
}

int func_350(int iParam0) // Position - 0x1CD54 Hash - 0x68D06F4A ^0x14E98A5E
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_339();

	if (func_115() == -1)
		if (iParam0 == 1160113249)
			num = 1583685020;
		else
			num = -572793833;
	else
		num = -2109211296;

	return num;
}

int func_351(int iParam0) // Position - 0x1CD97 Hash - 0xE69D9203 ^0x5667FA7E
{
	switch (iParam0)
	{
		case -2125161702:
			return 131072;
	
		case -1932005642:
			return 65536;
	
		case -1925540957:
			return 32768;
	
		case -1886898087:
			return 16496;
	
		case joaat("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
	
		case -1678578495:
			return 16384;
	
		case -1674046782:
			return 139376;
	
		case -1283403230:
			return 2048;
	
		case joaat("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
	
		case joaat("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
	
		case -1062102573:
			return 32833;
	
		case -915377750:
			return 1024;
	
		case -884591393:
			return 96;
	
		case -663436545:
			return 112;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
	
		case -376594188:
			return -1;
	
		case -366477279:
			return 0;
	
		case -141044514:
			return 4208;
	
		case joaat("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 128;
	
		case 75507907:
			return 8192;
	
		case 315750675:
			return 524288;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return 512;
	
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 256;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
	
		case 836721350:
			return 20480;
	
		case 884232794:
			return 8304;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
	
		case 1024778115:
			return 4096;
	
		case 1042019528:
			return 1136;
	
		case joaat("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
	
		case 1481630954:
			return 262256;
	
		case 1929486675:
			return 262144;
	
		default:
		
	}

	return 0;
}

// Unhandled jump detected. Output should be considered invalid
void func_352(var uParam0, int iParam1, BOOL bParam2) // Position - 0x1CF1F Hash - 0xBA3A30EB ^0xCBF87037
{
	int i;
	Hash hash;
	Hash hash2;
	int num;

	for (i = 0; i < 39; i = i + 1)
	{
		if (func_533(&uParam0->f_1[i /*3*/], 2))
		{
			num = func_534(i, 1);
		
			if (func_538(i, iParam1))
			{
				hash2 = { func_340(i, -1) };
			
				if (hash2 != Global_1946054.f_57[i /*11*/] && hash2 != 0 && uParam0->f_1[i /*3*/] != hash2 || uParam0->f_1[i /*3*/].f_1 != hash2.f_1)
					uParam0->f_1[i /*3*/] = { hash2 };
			
				if (func_539(num, 4))
					func_540(num, 4, 6);
			}
			else
			{
				func_541(num, 4, 6);
				goto 0xC9;
			}
		}
	
		if (bParam2)
		{
			hash = Global_1946054.f_57[i /*11*/];
			uParam0->f_1[i /*3*/] = { hash };
		}
	}

	return;
}

BOOL func_353(int iParam0) // Position - 0x1CFF4 Hash - 0x9D8F4245 ^0x3C0C5BB1
{
	int num;
	var unk;

	Global_1946054.f_964.f_2 = 0;

	if (func_115() == -1)
		num = -380731322;
	else
		num = 1226838104;

	func_542(&(Global_1946054.f_964), num, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));

	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&unk, &(Global_1946054.f_964), 1409451727))
		return false;

	return true;
}

BOOL func_354(Hash hParam0, int iParam1, var uParam2) // Position - 0x1D05F Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return true;
}

void func_355(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1D070 Hash - 0xC0B7C171 ^0x28B721CF
{
	int num;
	int num2;
	Hash hash;
	int num3;

	num2 = 12;
	hash = func_371(uParam0->f_1[iParam2 /*3*/]);
	num3 = 0;

	if (bParam3)
		num3 = 3;

	if (func_538(iParam2, 65536) && uParam0->f_1[num2 /*3*/] == -452402570)
	{
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_543(num2, num3);
	}

	if (func_544(-1586649372) && func_538(iParam2, 524288))
	{
		num2 = 33;
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_543(num2, num3);
	}

	switch (hash)
	{
		case -1719060085:
		case -852381396:
		case 153430294:
		case 1033860813:
		case 1096747416:
		case 1282123855:
			func_545(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case -1423861687:
			func_545(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			num2 = 16;
		
			if (uParam0->f_1[num2 /*3*/].f_1 == joaat("base"))
			{
				uParam0->f_1[num2 /*3*/].f_1 = -1539589426;
			
				if (bParam4)
					func_543(num2, num3);
			}
		
			if (uParam0->f_1[num2 /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/].f_1 = 1334603721;
			
				if (bParam4)
					func_543(num2, num3);
			}
			break;
	
		case -923693316:
			num2 = 36;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_543(num2, num3);
			}
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_546(Global_1946054.f_1497.f_1[num2 /*3*/]) || func_547(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_543(num2, num3);
			}
			break;
	
		case -839140560:
			if (hParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				num2 = 37;
			
				if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_543(num2, num3);
				}
			
				num2 = 38;
			
				if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_543(num2, num3);
				}
			
				num2 = 35;
			
				if (-923693316 == func_371(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_543(num2, num3);
				}
			}
			else
			{
				num2 = 35;
			
				if (func_546(hParam1) && uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && -923693316 == func_371(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_543(num2, num3);
				}
			}
			break;
	
		case -497931013:
			func_545(uParam0, true & bParam4, false, true, bParam3);
			break;
	
		case 688587926:
			func_545(uParam0, false, true & bParam4, true & bParam4, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				break;
		
			num = 16;
		
			if (uParam0->f_1[num /*3*/].f_1 == joaat("base") || uParam0->f_1[num /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_543(num2, num3);
			}
			break;
	
		case 698653232:
			if (hParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				num2 = 12;
			
				if (uParam0->f_1[num2 /*3*/] == joaat("clothing_hl_player_necktie_004_3"))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_543(num2, num3);
				}
			}
		
			func_545(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case 1769055947:
			num2 = 36;
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_547(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_543(num2, num3);
			}
			break;
	
		case 1868067663:
			func_545(uParam0, true & bParam4, true & bParam4, false, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_543(num2, num3);
			}
			break;
	}

	switch (func_371(hParam1))
	{
		case -525676072:
			num2 = 12;
		
			if (81053684 == func_371(uParam0->f_1[num2 /*3*/]) || func_547(uParam0->f_1[num2 /*3*/], 866047851))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_543(num2, num3);
			}
			break;
	
		case 81053684:
			num2 = 10;
		
			if (-525676072 == func_371(uParam0->f_1[num2 /*3*/]))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_543(num2, num3);
			}
			break;
	}

	return;
}

void func_356(Hash hParam0, int iParam1, int iParam2) // Position - 0x1D6B4 Hash - 0xDEDED6D0 ^0xA620FD73
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

eStackSize func_357() // Position - 0x1D6C7 Hash - 0x2BA7679 ^0x402F4D9C
{
	if (func_115() == -1)
		return Global_26796.f_776;

	return Global_36638.f_45.f_350.f_1011;
}

BOOL func_358(Hash hParam0) // Position - 0x1D6EB Hash - 0x3C376408 ^0xEF328608
{
	int num;
	BOOL num2;

	num = func_350(0);
	num2 = 0;
	func_542(&(Global_1946054.f_964), num, hParam0, 0, 0, 0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));

	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&(Global_1946054.f_964)))
		return false;

	if (!DATAFILE::_PARSEDDATA_GET_BOOL(&num2, &(Global_1946054.f_964), -1516819610))
		return false;

	return num2;
}

Hash func_359(eStackSize essParam0) // Position - 0x1D749 Hash - 0xB8EC44B7 ^0xE877E9C4
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

int func_360(eStackSize essParam0) // Position - 0x1DC7E Hash - 0x3D48653D ^0x3D48653D
{
	switch (essParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 1;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 1;
	
		case 5:
			return 1;
	
		default:
		
	}

	return 0;
}

void func_361(eStackSize essParam0, BOOL bParam1, int iParam2) // Position - 0x1DCCB Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_363(&(Global_1946054.f_1378), essParam0);
	func_364(2, essParam0, 6);

	if (bParam1)
		func_347(false, true);

	return;
}

void func_362(int iParam0) // Position - 0x1DCF3 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1946054.f_978 = iParam0;
	return;
}

void func_363(Hash hParam0, eStackSize essParam1) // Position - 0x1DD04 Hash - 0x5B4F430F ^0xA0DE91CC
{
	int i;

	if (func_115() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		Global_26796.f_26[essParam1 /*120*/].f_1 = *hParam0;
	
		for (i = 0; i < 39; i = i + 1)
		{
			func_342(&hParam0->f_1[i /*3*/], i, essParam1);
		}
	
		return;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	Global_36638.f_45.f_350.f_26[essParam1 /*120*/].f_1 = *hParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_548(&hParam0->f_1[i /*3*/], i, essParam1);
	}

	return;
}

void func_364(BOOL bParam0, eStackSize essParam1, int iParam2) // Position - 0x1DD9F Hash - 0x22FA317E ^0x7C0991BF
{
	if (func_115() == -1)
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

int func_365(Hash hParam0, Ped pedParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x1DE27 Hash - 0x22141CCD ^0x22141CCD
{
	int num;

	num = 0;

	if (hParam0 == 0)
		return 0;

	func_549();

	if (!func_550(&(Global_1946054.f_1378), &num, hParam0, -1, false, 1))
		return 0;

	if (iParam2 == -1)
		iParam2 = Global_40.f_7731[0 /*5*/];

	if (iParam3 == -1)
		iParam3 = Global_40.f_7731[1 /*5*/];

	if (iParam4 == -1)
		iParam4 = Global_40.f_7731[2 /*5*/];

	func_536(iParam2, iParam3, iParam4);

	if (iParam2 == 0 && iParam3 == 0 && iParam4 == 0)
		func_551(pedParam1, joaat("MPC_MOD_HEAD_SUPER_CLEAN_SHAVE"), joaat("MP_COMPONENT_TYPE_HEAD"), true, true, false);
	else
		func_551(pedParam1, joaat("base"), joaat("MP_COMPONENT_TYPE_HEAD"), true, true, false);

	if (bParam5)
		if (PED::IS_PED_A_PLAYER(pedParam1))
			func_552(1, 96, 0, 0, false);
		else
			func_552(1, 96, 1, pedParam1, false);

	func_362(1);
	return 1;
}

void func_366() // Position - 0x1DF07 Hash - 0xF1D2A9F4 ^0xF1D2A9F4
{
	int num;
	int num2;
	int num3;
	int num4;

	func_362(0);
	func_553(0, Global_1946054.f_2653, false);
	func_553(1, Global_1946054.f_2654, false);
	func_553(2, Global_1946054.f_2655, false);
	num = 5;
	num2 = 6;
	num3 = 7;
	num4 = 0;
	Global_1946054.f_1497.f_1[num /*3*/] = { Global_1946054.f_1378.f_1[num /*3*/] };
	Global_1946054.f_1497.f_1[num2 /*3*/] = { Global_1946054.f_1378.f_1[num2 /*3*/] };
	Global_1946054.f_1497.f_1[num3 /*3*/] = { Global_1946054.f_1378.f_1[num3 /*3*/] };
	Global_1946054.f_1497.f_1[num4 /*3*/] = { Global_1946054.f_1378.f_1[num4 /*3*/] };
	func_554();
	func_555();
	return;
}

Hash func_367() // Position - 0x1DFC7 Hash - 0x8786AEE9 ^0x8125165E
{
	if (func_339() == 1160113249)
		return -2091943191;

	return 933586678;
}

int func_368(Hash hParam0, Ped pedParam1, int iParam2, BOOL bParam3) // Position - 0x1DFE8 Hash - 0xD37ABB05 ^0xAE0735F1
{
	if (!func_556(hParam0, 0, 1, true, true))
		return 0;

	if (iParam2 == -1)
		iParam2 = Global_40.f_7748.f_1;

	func_537(iParam2);

	if (bParam3)
		if (PED::IS_PED_A_PLAYER(pedParam1))
			func_552(1, 64, 0, 0, false);
		else
			func_552(1, 64, 1, pedParam1, false);

	func_362(1);
	return 1;
}

void func_369() // Position - 0x1E044 Hash - 0x5606FCEF ^0x2320B9EB
{
	int num;
	Hash hash;

	num = 1;
	hash = Global_1946054.f_1378.f_1[num /*3*/];

	if (!func_557() && func_558(hash))
		Global_1946054.f_1378.f_1[num /*3*/] = func_559(hash);

	func_362(0);
	Global_1946054.f_1497.f_1[num /*3*/] = { Global_1946054.f_1378.f_1[num /*3*/] };
	func_560();
	Global_40.f_7748.f_2 = func_561();
	func_562(Global_1946054.f_2656, false);
	func_563();
	return;
}

void func_370(int iParam0) // Position - 0x1E0C7 Hash - 0x958E8FB2 ^0x9CA4541C
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
	unk = { func_564(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, iParam0) };

	if (func_565(&unk, &num, &num2, false))
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
	
		func_566(num);
	}

	return;
}

Hash func_371(Hash hParam0) // Position - 0x1E191 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_332(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

void func_372(var uParam0, Hash hParam1, int iParam2) // Position - 0x1E1BC Hash - 0xDDA2D03E ^0x15888349
{
	if (*uParam0 >= 13)
		return;

	func_567(iParam2, *uParam0);
	func_568(&uParam0->f_1[*uParam0 /*5*/], hParam1, -1, true, 0);
	*uParam0 = *uParam0 + 1;
	return;
}

BOOL func_373(Hash hParam0, BOOL bParam1) // Position - 0x1E1F2 Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_526(hParam0, false, false) };
	guid = { func_569(hParam0, unk, unk.f_4, false) };

	if (func_570(hParam0, unk, unk.f_4, false) <= 0)
		return false;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_571(false), &guid, bParam1);
	return true;
}

void func_374(Hash hParam0, BOOL bParam1) // Position - 0x1E23E Hash - 0xE53C6141 ^0xE235D8BA
{
	var unk;
	var guid;

	unk = { func_526(hParam0, false, false) };
	guid = { func_569(hParam0, unk, unk.f_4, false) };

	if (func_570(hParam0, unk, unk.f_4, false) <= 0)
		return;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_571(false), &guid, bParam1);
	return;
}

void func_375(int iParam0) // Position - 0x1E288 Hash - 0xB89DF92F ^0xB89DF92F
{
	Global_1310750.f_16035 = Global_1310750.f_16035 - Global_1310750.f_16035 && iParam0;
	return;
}

void func_376(int iParam0) // Position - 0x1E2A9 Hash - 0x9167F2F9 ^0x2BCE831F
{
	var unk;

	*iParam0 = 0;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_34 = 0;
	iParam0->f_36 = 0;
	iParam0->f_38 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(iParam0->f_40), "", 32);
	iParam0->f_44 = 0f;
	iParam0->f_45 = 0;
	iParam0->f_46 = 0;
	iParam0->f_48 = 0;
	iParam0->f_54 = 0f;
	iParam0->f_55 = 0f;
	iParam0->f_56 = 0f;
	iParam0->f_57 = 0f;
	iParam0->f_58 = 0f;
	iParam0->f_59 = 0f;
	iParam0->f_60 = 0f;
	iParam0->f_110 = -1;
	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = 8;
	unk.f_4.f_1.f_1 = -1;
	unk.f_4.f_1.f_3.f_1 = -1;
	unk.f_4.f_1.f_3.f_3.f_1 = -1;
	unk.f_4.f_1.f_3.f_3.f_3.f_1 = -1;
	unk.f_4.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_4.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_4.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	unk.f_4.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	iParam0->f_4 = { unk };
	return;
}

void func_377(int iParam0) // Position - 0x1E388 Hash - 0x3D0B339A ^0xB87B2B3D
{
	int i;

	if (Global_1310750.f_13321[iParam0 /*9*/] != -1)
		Global_1310750[Global_1310750.f_13321[iParam0 /*9*/] /*111*/].f_48 = 0;

	Global_1310750.f_13321[iParam0 /*9*/] = -1;
	Global_1310750.f_13321[iParam0 /*9*/].f_1 = -1;
	Global_1310750.f_13321[iParam0 /*9*/].f_2 = { 0f, 0f, 0f };
	Global_1310750.f_13321[iParam0 /*9*/].f_5 = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		Global_1310750.f_13321[iParam0 /*9*/].f_6[i] = -1881652455;
	}

	return;
}

BOOL func_378(int iParam0) // Position - 0x1E415 Hash - 0xF7D08AFF ^0x65644DC
{
	return Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1310750[iParam0 /*111*/].f_40)) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1310750[iParam0 /*111*/].f_40)) != 0;
}

BOOL func_379(int iParam0, int iParam1) // Position - 0x1E450 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_380(int iParam0) // Position - 0x1E45F Hash - 0xB05A3A35 ^0xB05A3A35
{
	switch (iParam0)
	{
		case 0:
			return 10;
	
		case 1:
			return 12;
	
		case 2:
			return 23;
	
		case 3:
			return 6;
	
		case 4:
			return 17;
	
		case 5:
			return 1;
	
		case 6:
			return 3;
	
		case 7:
			return 23;
	
		case 8:
			return 1;
	
		case 9:
			return 8;
	
		case 10:
			return 2;
	
		case 11:
			return 4;
	
		case 12:
			return 18;
	
		case 13:
			return 12;
	
		case 14:
			return 7;
	
		case 15:
			return 21;
	
		case 16:
			return 19;
	
		case 17:
			return 12;
	
		case 18:
			return 7;
	
		case 19:
			return 1;
	
		case 20:
			return 17;
	
		case 21:
			return 3;
	
		case 22:
			return 1;
	
		case 23:
			return 17;
	
		case 24:
			return 14;
	
		case 27:
			return 11;
	
		case 28:
			return 5;
	
		case 29:
			return 8;
	
		case 30:
			return 38;
	
		case 31:
			return 20;
	
		case 32:
			return 10;
	
		case 33:
			return 13;
	
		case 34:
			return 11;
	
		case 35:
			return 2;
	
		case 36:
			return 12;
	
		case 37:
			return 20;
	
		case 38:
			return 1;
	
		case 39:
			return 1;
	
		case 40:
			return 12;
	
		case 41:
			return 3;
	
		case 42:
			return 1;
	
		case 43:
			return 27;
	
		case 44:
			return 9;
	
		case 45:
			return 15;
	
		case 46:
			return 2;
	
		case 47:
			return 2;
	
		case 48:
			return 9;
	
		case 49:
			return 7;
	
		case 50:
			return 36;
	
		case 51:
			return 5;
	
		case 53:
			return 3;
	
		case 54:
			return 6;
	
		case 55:
			return 2;
	
		case 56:
			return 12;
	
		case 57:
			return 14;
	
		case 58:
			return 8;
	
		case 59:
			return 3;
	
		case 60:
			return 11;
	
		case 61:
			return 2;
	
		case 62:
			return 17;
	
		case 63:
			return 6;
	
		case 64:
			return 7;
	
		case 65:
			return 10;
	
		case 66:
			return 12;
	
		case 67:
			return 5;
	
		case 68:
			return 5;
	
		case 69:
			return 5;
	
		case 70:
			return 6;
	
		case 71:
			return 8;
	
		case 72:
			return 9;
	
		case 73:
			return 4;
	
		case 74:
			return 1;
	
		case 75:
			return 1;
	
		case 76:
			return 1;
	
		case 77:
			return 3;
	
		case 78:
			return 2;
	
		case 79:
			return 6;
	
		case 80:
			return 3;
	
		case 81:
			return 15;
	
		case 82:
			return 9;
	
		case 83:
			return 2;
	
		case 84:
			return 2;
	
		case 85:
			return 11;
	
		case 86:
			return 2;
	
		case 87:
			return 9;
	
		case 88:
			return 2;
	
		case 89:
			return 1;
	
		case 90:
			return 2;
	
		case 91:
			return 2;
	
		case 92:
			return 3;
	
		case 93:
			return 1;
	
		case 94:
			return 9;
	
		case 95:
			return 1;
	
		case 96:
			return 7;
	
		case 97:
			return 6;
	
		case 98:
			return 4;
	
		case 99:
			return 2;
	
		case 100:
			return 1;
	
		case 101:
			return 2;
	
		case 102:
			return 3;
	
		case 103:
			return 3;
	
		case 104:
			return 3;
	
		case 105:
			return 2;
	
		case 106:
			return 4;
	
		case 107:
			return 1;
	
		case 108:
			return 3;
	
		case 109:
			return 3;
	
		case 110:
			return 1;
	
		case 111:
			return 4;
	
		case 112:
			return 3;
	
		case 113:
			return 3;
	
		case 114:
			return 16;
	
		case 115:
			return 3;
	
		case 116:
			return 7;
	
		case 117:
			return 2;
	
		case 118:
			return 10;
	
		case 119:
			return 17;
	
		default:
		
	}

	return 0;
}

void func_381(BOOL bParam0) // Position - 0x1E930 Hash - 0x5898CF5F ^0x5898CF5F
{
	if (bParam0)
	{
		Global_1310750.f_16036 = Global_1310750.f_16036 + 1;
	}
	else
	{
		Global_1310750.f_16036 = Global_1310750.f_16036 - 1;
	
		if (Global_1310750.f_16036 < 0)
			Global_1310750.f_16036 = 0;
	}

	return;
}

int func_382(int iParam0) // Position - 0x1E973 Hash - 0x8AE2E06E ^0x8AE2E06E
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 10;
	
		case 2:
			return 22;
	
		case 3:
			return 45;
	
		case 4:
			return 51;
	
		case 5:
			return 68;
	
		case 6:
			return 69;
	
		case 7:
			return 72;
	
		case 8:
			return 95;
	
		case 9:
			return 96;
	
		case 10:
			return 104;
	
		case 11:
			return 106;
	
		case 12:
			return 110;
	
		case 13:
			return 128;
	
		case 14:
			return 140;
	
		case 15:
			return 147;
	
		case 16:
			return 168;
	
		case 17:
			return 187;
	
		case 18:
			return 199;
	
		case 19:
			return 206;
	
		case 20:
			return 207;
	
		case 21:
			return 224;
	
		case 22:
			return 227;
	
		case 23:
			return 228;
	
		case 24:
			return 245;
	
		case 27:
			return 259;
	
		case 28:
			return 270;
	
		case 29:
			return 275;
	
		case 30:
			return 283;
	
		case 31:
			return 321;
	
		case 32:
			return 341;
	
		case 33:
			return 351;
	
		case 34:
			return 364;
	
		case 35:
			return 375;
	
		case 36:
			return 377;
	
		case 37:
			return 389;
	
		case 38:
			return 409;
	
		case 39:
			return 410;
	
		case 40:
			return 411;
	
		case 41:
			return 423;
	
		case 42:
			return 426;
	
		case 43:
			return 427;
	
		case 44:
			return 454;
	
		case 45:
			return 463;
	
		case 46:
			return 478;
	
		case 47:
			return 480;
	
		case 48:
			return 482;
	
		case 49:
			return 491;
	
		case 50:
			return 498;
	
		case 51:
			return 534;
	
		case 53:
			return 539;
	
		case 54:
			return 542;
	
		case 55:
			return 548;
	
		case 56:
			return 550;
	
		case 57:
			return 562;
	
		case 58:
			return 576;
	
		case 59:
			return 584;
	
		case 60:
			return 587;
	
		case 61:
			return 598;
	
		case 62:
			return 600;
	
		case 63:
			return 617;
	
		case 64:
			return 623;
	
		case 65:
			return 630;
	
		case 66:
			return 640;
	
		case 67:
			return 652;
	
		case 68:
			return 657;
	
		case 69:
			return 662;
	
		case 70:
			return 667;
	
		case 71:
			return 673;
	
		case 72:
			return 681;
	
		case 73:
			return 690;
	
		case 74:
			return 694;
	
		case 75:
			return 695;
	
		case 76:
			return 696;
	
		case 77:
			return 697;
	
		case 78:
			return 700;
	
		case 79:
			return 702;
	
		case 80:
			return 708;
	
		case 81:
			return 711;
	
		case 82:
			return 726;
	
		case 83:
			return 735;
	
		case 84:
			return 737;
	
		case 85:
			return 739;
	
		case 86:
			return 750;
	
		case 87:
			return 752;
	
		case 88:
			return 761;
	
		case 89:
			return 763;
	
		case 90:
			return 764;
	
		case 91:
			return 766;
	
		case 92:
			return 768;
	
		case 93:
			return 771;
	
		case 94:
			return 772;
	
		case 95:
			return 781;
	
		case 96:
			return 782;
	
		case 97:
			return 789;
	
		case 98:
			return 795;
	
		case 99:
			return 799;
	
		case 100:
			return 801;
	
		case 101:
			return 802;
	
		case 102:
			return 804;
	
		case 103:
			return 807;
	
		case 104:
			return 810;
	
		case 105:
			return 813;
	
		case 106:
			return 815;
	
		case 107:
			return 819;
	
		case 108:
			return 820;
	
		case 109:
			return 823;
	
		case 110:
			return 826;
	
		case 111:
			return 827;
	
		case 112:
			return 831;
	
		case 113:
			return 834;
	
		case 114:
			return 837;
	
		case 115:
			return 853;
	
		case 116:
			return 856;
	
		case 117:
			return 863;
	
		case 118:
			return 865;
	
		case 119:
			return 875;
	
		default:
		
	}

	return -1;
}

BOOL func_383(int iParam0) // Position - 0x1EEE6 Hash - 0xC80B63B8 ^0xC80B63B8
{
	return iParam0 > -1 && iParam0 < 120;
}

BOOL func_384(int iParam0) // Position - 0x1EEFC Hash - 0xE49023EE ^0xE49023EE
{
	return iParam0 > -1 && iParam0 < 17;
}

int func_385(int iParam0) // Position - 0x1EF12 Hash - 0xC547ECB ^0xC547ECB
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 11:
			return 3;
	
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			return 0;
	
		case 3:
		case 10:
			return 2;
	
		case 4:
		case 9:
			return 1;
	
		case 8:
			return 4;
	
		case 13:
		case 14:
		case 15:
		case 16:
			return 5;
	
		default:
		
	}

	return -1;
}

void func_386(int iParam0, int iParam1, int iParam2) // Position - 0x1EFA1 Hash - 0x5B5F44 ^0xA580565F
{
	switch (iParam1)
	{
		case 0:
			Global_1310750[iParam0 /*111*/].f_64[1] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[7] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[6] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[12] = iParam2;
			break;
	
		case 1:
			Global_1310750[iParam0 /*111*/].f_64[4] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[9] = iParam2;
			break;
	
		case 2:
			Global_1310750[iParam0 /*111*/].f_64[3] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[10] = iParam2;
			break;
	
		case 3:
			Global_1310750[iParam0 /*111*/].f_64[0] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[2] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[11] = iParam2;
			break;
	
		case 4:
			Global_1310750[iParam0 /*111*/].f_64[8] = iParam2;
			break;
	
		case 5:
			Global_1310750[iParam0 /*111*/].f_64[13] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[14] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[15] = iParam2;
			Global_1310750[iParam0 /*111*/].f_64[16] = iParam2;
			break;
	}

	return;
}

void func_387(int iParam0, int iParam1) // Position - 0x1F0E0 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

int func_388(int iParam0) // Position - 0x1F0F1 Hash - 0x8826FB16 ^0x38085FBA
{
	return BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iParam0)));
}

BOOL func_389(int iParam0, int iParam1) // Position - 0x1F108 Hash - 0x2AF6C326 ^0x2AF6C326
{
	if (!func_383(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/] && iParam1 != false;
}

BOOL func_390(int iParam0, int iParam1) // Position - 0x1F12B Hash - 0x5F43695 ^0x71726655
{
	if (!func_383(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/].f_1 && iParam1 != false;
}

BOOL func_391(int iParam0, int iParam1) // Position - 0x1F150 Hash - 0x3879E6F ^0x16DEC4AE
{
	if (!func_383(iParam0))
		return false;

	return func_147(Global_1310750[iParam0 /*111*/].f_35, iParam1);
}

BOOL func_392(int iParam0) // Position - 0x1F176 Hash - 0xE139661B ^0xE139661B
{
	if (!func_114(iParam0))
		return false;

	return func_572(iParam0, 2, true);
}

void func_393(int iParam0, BOOL bParam1) // Position - 0x1F194 Hash - 0x94511870 ^0x94511870
{
	if (!func_114(iParam0))
		return;

	if (func_115() != -1)
	{
		Global_36638[iParam0] = Global_36638[iParam0] || bParam1;
		return;
	}

	Global_40.f_9274[iParam0] = Global_40.f_9274[iParam0] || bParam1;
	return;
}

BOOL func_394(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1F1DC Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_573())
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
		num = func_574(Global_1898164.f_1[0 /*5*/]);
	
		if (func_286(num) && func_575(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_289(Global_1898164.f_1[0 /*5*/]))
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

void func_395(int iParam0) // Position - 0x1F3E0 Hash - 0x6BC4C7FA ^0x6BC4C7FA
{
	Global_1911914[iParam0 /*9*/] = 0;
	return;
}

BOOL func_396(int iParam0) // Position - 0x1F3F1 Hash - 0xDA60CC84 ^0xDA60CC84
{
	return iParam0 > -1 && iParam0 < 9;
}

Hash func_397(int iParam0) // Position - 0x1F407 Hash - 0xBA965109 ^0x5680CAC4
{
	switch (iParam0)
	{
		case 0:
			return joaat("lsm_womancry");
	
		case 1:
			return joaat("lsm_hunter");
	
		case 2:
			return joaat("lsm_catfish");
	
		case 3:
			return joaat("lsm_undertaker");
	
		case 4:
			return joaat("lsm_soldier_1");
	
		case 5:
			return joaat("lsm_miner_1");
	
		case 6:
			return joaat("lsm_miner_2");
	
		case 7:
			return -861789942;
	
		case 8:
			return joaat("lsm_sell_horse_1");
	}

	return 0;
}

void func_398(int iParam0, BOOL bParam1) // Position - 0x1F4B1 Hash - 0x222F0145 ^0x4E353048
{
	if (func_396(iParam0))
		Global_40.f_9052.f_11[iParam0] = Global_40.f_9052.f_11[iParam0] || bParam1;

	return;
}

void func_399(int iParam0, BOOL bParam1) // Position - 0x1F4DD Hash - 0x64BBD98D ^0x890E0020
{
	if (func_396(iParam0))
		Global_40.f_9052.f_11[iParam0] = Global_40.f_9052.f_11[iParam0] - Global_40.f_9052.f_11[iParam0] && bParam1;

	return;
}

void func_400(int iParam0, int iParam1) // Position - 0x1F516 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_401(int iParam0) // Position - 0x1F527 Hash - 0xDC21AF4A ^0xDC21AF4A
{
	if (iParam0 != -1)
		return true;

	return false;
}

BOOL func_402(int iParam0) // Position - 0x1F53A Hash - 0xAD1AEF5B ^0x61666D1A
{
	if (Global_1415419.f_19[iParam0 /*12*/] != 0)
		return true;

	return false;
}

BOOL func_403(int iParam0, int iParam1) // Position - 0x1F555 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_404(var uParam0) // Position - 0x1F564 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_576(uParam0, 0f);
	return;
}

BOOL func_405(var uParam0) // Position - 0x1F573 Hash - 0x39705408 ^0x39705408
{
	return func_403(*uParam0, 2);
}

int func_406() // Position - 0x1F583 Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

Hash func_407(int iParam0) // Position - 0x1F5A1 Hash - 0xB8EC44B7 ^0x486668F8
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

void func_408(var uParam0) // Position - 0x1F78E Hash - 0xD600D002 ^0xF45986EB
{
	UNLOCK::_UNLOCK_SET_NEW(func_577(uParam0), true);
	return;
}

int func_409(int iParam0, int iParam1) // Position - 0x1F7A1 Hash - 0x14CC7C0F ^0x14CC7C0F
{
	switch (iParam0)
	{
		case joaat("WEATHER_GROUP_CH2_END"):
			return 3;
	
		case joaat("WEATHER_GROUP_CH2_MID"):
			return 4;
	
		case joaat("WEATHER_GROUP_CH3_DROUGHT"):
			return 6;
	
		case joaat("WEATHER_GROUP_GOOD_VISIBILITY"):
			return 8;
	
		case joaat("WEATHER_GROUP_GOOD"):
			return 7;
	
		case joaat("WEATHER_GROUP_LIGHT_PRECIPITATION"):
			return 10;
	
		case joaat("WEATHER_GROUP_IN_CAMP"):
			return 9;
	
		case 0:
			return 13;
	
		case 15:
			return 14;
	
		case joaat("WEATHER_GROUP_BAD_VISIBILITY"):
			return 2;
	
		case joaat("WEATHER_GROUP_NO_PRECIPITATION"):
			return 11;
	
		case joaat("WEATHER_GROUP_ATMOSPHERIC"):
			return 0;
	
		case joaat("WEATHER_GROUP_THUNDERSTORM"):
			return 12;
	
		case joaat("WEATHER_GROUP_BAD"):
			return 1;
	
		case joaat("WEATHER_GROUP_CH2_START"):
			return 5;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_410(int iParam0, int iParam1) // Position - 0x1F85F Hash - 0x664F26AA ^0x664F26AA
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
			return 2;
	
		case -1439599467:
			return 23;
	
		case joaat("sandstorm"):
			return 12;
	
		case joaat("THUNDER"):
			return 19;
	
		case joaat("OVERCAST"):
			return 9;
	
		case joaat("Fog"):
			return 3;
	
		case joaat("Shower"):
			return 13;
	
		case joaat("snow"):
			return 15;
	
		case joaat("highpressure"):
			return 6;
	
		case 0:
			return 22;
	
		case joaat("sleet"):
			return 14;
	
		case joaat("overcastdark"):
			return 10;
	
		case joaat("SNOWLIGHT"):
			return 17;
	
		case joaat("BLIZZARD"):
			return 0;
	
		case joaat("whiteout"):
			return 21;
	
		case joaat("clouds"):
			return 1;
	
		case joaat("hurricane"):
			return 7;
	
		case joaat("rain"):
			return 11;
	
		case joaat("Misty"):
			return 8;
	
		case joaat("SUNNY"):
			return 18;
	
		case joaat("snowclearing"):
			return 16;
	
		case joaat("hail"):
			return 5;
	
		case joaat("Thunderstorm"):
			return 20;
	
		case joaat("groundblizzard"):
			return 4;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_411(BOOL bParam0) // Position - 0x1F980 Hash - 0x69118B05 ^0x7131E351
{
	var unk;
	int i;
	int num;
	int num2;
	int num3;
	Hash hash;

	if (bParam0)
	{
		func_414(2032023096, 1, false, 0, 0, 752097756, 0, 0, 0, 0);
		func_414(joaat("provision_talisman_eagle_talon"), 1, true, false, false, 752097756, 0, 0, 0, false);
		func_414(joaat("provision_trinket_iguana_scale"), 1, true, false, false, 752097756, 0, 0, 0, false);
		func_412();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_578(2032023096);
		func_95(joaat("provision_talisman_eagle_talon"));
		func_335(joaat("provision_trinket_iguana_scale"), 1, true, -142743235, true);
		func_580(146323340, func_579());
		unk = { func_581() };
	
		if (_STOPWATCH_IS_INITIALIZED(&unk) == -1387633835)
		{
			func_583(&unk);
			func_584(unk);
		}
	
		num = joaat("breed_tennesseewalker_chestnut");
		num2 = joaat("a_c_horse_tennesseewalker_chestnut");
		num3 = 1;
		func_585(&num, &num2, &num3);
	
		for (i = 0; i < 7; i = i + 1)
		{
			if (func_586(i) == joaat("breed_thoroughbred_reversedappleblack"))
			{
				func_587(i, num);
				func_588(i, num2);
				func_589(i, num3);
				func_590(i, 0);
			
				if (func_591(i))
					func_592(i);
			
				hash = func_593(num2);
				func_594(i, hash);
			}
		}
	
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), false);
	}

	return;
}

int func_412() // Position - 0x1FAC0 Hash - 0x8A3E9350 ^0x1E0E30DC
{
	if (!func_595(-1898635967, func_579(), true))
		return 0;

	if (func_596())
		if (!func_595(146323340, func_579(), false))
			return 0;

	return 1;
}

void func_413() // Position - 0x1FAFC Hash - 0x7B8A0507 ^0x807104D6
{
	func_597(joaat("weapon_pistol_volcanic"));
	func_597(joaat("WEAPON_SHOTGUN_PUMP"));
	func_597(joaat("weapon_rifle_varmint"));
	return;
}

int func_414(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, Hash hParam5, int iParam6, int iParam7, Entity eParam8, BOOL bParam9) // Position - 0x1FB1F Hash - 0x11449F01 ^0x11449F01
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

	if (!func_332(hParam0, 0))
		return 0;

	if (!func_598(hParam0, iParam1, bParam2, hParam5))
		return 0;

	if (!func_599(hParam0, &value, iParam1))
		return 0;

	func_600(hParam0, bParam2);
	lootTableKey = 0;

	if (func_520(hParam0, false, false) == 0)
	{
		if (func_601(hParam0))
		{
			hash = func_602(hParam0);
			collectableSubcategory = func_603(hash);
			num = func_604(collectableSubcategory) + 1;
			func_605(hash);
		
			if (func_606(38))
				func_607(483, false);
			else
				func_607(482, false);
		
			if (num == func_608(collectableSubcategory))
			{
				func_414(func_609(collectableSubcategory), 1, false, false, false, 752097756, 0, 0, 0, false);
			
				if (func_481() && func_610(4))
				{
					if (func_481() && func_611(38) || func_606(38))
					{
						func_613(38, func_609(collectableSubcategory), 0, 0, func_612(), false, -1, false);
						func_614(2);
					}
					else
					{
						func_613(38, func_609(collectableSubcategory), 0, 0, func_612(), false, -1, false);
						func_614(1);
					}
				}
			}
			else if (func_481() && func_610(4))
			{
				if (func_481() && func_611(38) || func_606(38))
				{
					func_613(38, 0, 0, 0, func_612(), false, -1, false);
					func_614(2);
				}
				else
				{
					func_613(38, 0, 0, 0, func_612(), false, -1, false);
					func_614(1);
				}
			}
		
			if (func_481() && func_610(4))
				if (!Global_1914319.f_17376)
					if (func_481() && func_611(38) || func_606(38))
						func_615(38, COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY(joaat("CIGARETTE_CARDS"), collectableSubcategory), COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME(joaat("CIGARETTE_CARDS"), collectableSubcategory), num, 12, 0, collectableSubcategory);
					else
						func_615(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), num, 12, 0, collectableSubcategory);
		}
	}

	if (func_521(hParam0) == joaat("CLOTHING"))
		if (!func_547(hParam0, 866047851) && !func_547(hParam0, -1979000645) && !func_547(hParam0, 1248798204))
			flag = true;

	if (func_616(hParam0, 8388608) && !func_429(28))
		func_617(28);

	if (!flag)
	{
		if (func_547(hParam0, -1588156645))
		{
			bParam2 = true;
			flag2 = true;
		
			if (func_371(hParam0) == -1447088266)
			{
				ammoTypeForWeapon = func_619(func_618(hParam0, true), false);
			
				if (WEAPON::IS_WEAPON_VALID(ammoTypeForWeapon))
				{
					if (func_115() == -1)
						func_424(ammoTypeForWeapon);
				
					if (func_524(false) && func_425(ammoTypeForWeapon, 0, false, true, 0, false, hParam5, false))
					{
						func_620(hParam0, value, hParam5);
					
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
					if (func_115() == -1)
						func_424(hParam0);
				
					if (func_524(false) && func_425(hParam0, 0, false, true, 0, false, hParam5, false))
					{
						func_620(ammoTypeForWeapon, value, hParam5);
					
						if (!bParam9)
							bParam2 = false;
					}
				}
			}
		}
		else if (func_521(hParam0) == joaat("WEAPON"))
		{
			if (!func_621(hParam0, hParam5, &bParam2, bParam3, bParam4))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_521(hParam0) == joaat("AMMO") && func_622(hParam0))
		{
			if (!func_623(hParam0, &value, hParam5))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_547(hParam0, 866047851))
		{
			func_624(hParam0);
		}
		else if (func_547(hParam0, 2000026003))
		{
			func_625(hParam0);
		}
		else if (func_547(hParam0, -103750053))
		{
			func_471(func_626(joaat("claws_collected")), value);
		}
		else if (hParam0 == joaat("provision_alligator_tooth"))
		{
			func_471(func_470(joaat("COLLECTED"), joaat("alligator_tooth")), value);
		}
		else if (func_547(hParam0, -121341956) && !func_547(hParam0, 606799272))
		{
			if (hParam0 != joaat("weapon_kit_detector") && hParam0 != 1993672959)
				if (func_94(Global_1835011[4 /*74*/].f_1, true))
					func_607(498, false);
		
			if (func_547(hParam0, -2017733358) || func_547(hParam0, -1369131378))
				func_627(hParam0);
		}
		else if (func_547(hParam0, -136654233))
		{
			if (func_547(hParam0, -1021472396))
			{
			}
		}
		else if (func_547(hParam0, -1466706512) && func_547(hParam0, 1147021565))
		{
			func_607(&func_2, false);
		}
		else if (func_547(hParam0, 1147021565) && func_547(hParam0, -524514947))
		{
		}
		else if (func_547(hParam0, 554195525))
		{
		}
		else if (func_547(hParam0, 589988438))
		{
			if (func_628())
			{
				func_629(joaat("reward_small"), false, 1065353216, 1, 0, 0, false, -1);
				bParam2 = true;
				flag2 = true;
			}
		}
		else if (func_547(hParam0, 787083290) && func_547(hParam0, 949916894))
		{
			func_630(hParam0);
		}
		else if (func_547(hParam0, -1718133314))
		{
			func_631(hParam0);
		}
		else if (func_547(hParam0, -1738650224))
		{
			func_632(hParam0);
		}
		else if (func_547(hParam0, -1112814642) && func_547(hParam0, 949916894))
		{
			func_633(hParam0);
		}
		else if (hParam0 == joaat("document_player_journal"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_547(hParam0, 1841149704))
		{
			func_634();
		}
		else if (func_547(hParam0, 606799272))
		{
			func_635(hParam0, iParam1);
			func_636(hParam0);
		}
		else if (func_547(hParam0, -1112814642) && func_547(hParam0, -1697809989))
		{
			func_637(hParam0, 0, false, false);
		}
		else if (func_547(hParam0, -2017733358) || func_547(hParam0, -1369131378))
		{
			func_627(hParam0);
		}
		else if (func_547(hParam0, -1921346699))
		{
			if (func_115() != -1)
				return 0;
		
			func_638(hParam0, hParam5, eParam8);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_547(hParam0, 1192444843))
		{
			switch (hParam0)
			{
				case joaat("upgrade_fsh_bait_lure_swamp"):
					if (!func_418(471514780, 1, false))
						func_414(471514780, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_lake"):
					if (!func_418(526074061, 1, false))
						func_414(526074061, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_swamp"):
					if (!func_418(-967317137, 1, false))
						func_414(-967317137, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_river"):
					if (!func_418(670273567, 1, false))
						func_414(670273567, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_lake"):
					if (!func_418(215778062, 1, false))
						func_414(215778062, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_river"):
					if (!func_418(-1045488665, 1, false))
						func_414(-1045488665, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			}
		}
		else if (func_547(hParam0, -839724752) && func_616(hParam0, 4))
		{
			if (!func_606(42))
				func_639(hParam0);
		}
		else if (func_547(hParam0, 1399091007))
		{
			func_640(hParam0, &lootTableKey);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_547(hParam0, 1248798204))
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
				func_414(hash2, 1, true, false, false, 752097756, 0, 0, 0, false);
		}
	
		switch (hParam0)
		{
			case joaat("upgrade_upg_mortar_pestle"):
				if (func_115() == -1)
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
					func_657(595, -103579, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_657(595, -1531530025, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("consumable_tonic"):
			case joaat("consumable_potent_tonic"):
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_657(594, -1228016946, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_648(499813453, joaat("treasure_hunt_loot_01"), false);
				func_649(499813453, false);
				func_650(1);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_648(390004462, joaat("treasure_hunt_loot_17"), false);
				func_649(390004462, false);
				func_653(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_648(6410548, joaat("treasure_hunt_loot_23"), false);
				func_649(6410548, false);
				func_654(8);
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
				func_648(6410548, joaat("treasure_hunt_loot_22"), false);
				func_649(6410548, false);
				func_654(4);
				break;
		
			case joaat("upgrade_offhand_holster"):
				func_617(24);
			
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
					func_641(PLAYER::PLAYER_PED_ID(), joaat("upgrade_offhand_holster"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, false);
			
				if (func_642(&hash3, false))
					func_425(hash3, 0, false, bParam4, 3, false, 752097756, false);
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
					func_657(594, 1934060482, true, true);
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
					func_657(594, 1110018439, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("kit_gun_oil"):
				func_607(486, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_648(6410548, joaat("treasure_hunt_loot_21"), false);
				func_649(6410548, false);
				func_654(2);
				break;
		
			case joaat("consumable_cigarette_box"):
				func_607(485, false);
			
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3 == 0)
					func_414(func_658(), 1, false, false, false, 752097756, 0, 0, 0, false);
				else
					func_414(func_659(), 1, false, false, false, 752097756, 0, 0, 0, false);
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
					func_657(594, 1408511260, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_648(-220219788, joaat("treasure_hunt_loot_09"), false);
				func_649(-220219788, false);
				func_652(1);
				break;
		
			case joaat("consumable_coffee_gnds_reg"):
				if (func_429(1))
					func_607(487, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_648(666607663, joaat("treasure_hunt_loot_07"), false);
				func_649(666607663, false);
				func_651(4);
				break;
		
			case joaat("consumable_valerian_root"):
				func_656(241, func_655(joaat("consumable_valerian_root")), false);
				break;
		
			case joaat("weapon_kit_binoculars"):
				break;
		
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				flag2 = true;
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_648(-220219788, joaat("treasure_hunt_loot_11"), false);
				func_649(-220219788, false);
				func_652(4);
				break;
		
			case joaat("consumable_aged_pirate_rum"):
				func_656(242, func_655(joaat("consumable_aged_pirate_rum")), false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("consumable_hair_tonic"):
				func_607(488, false);
				break;
		
			case joaat("consumable_ginseng_elixier"):
				func_656(240, func_655(joaat("consumable_ginseng_elixier")), false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_648(-220219788, joaat("treasure_hunt_loot_10"), false);
				func_649(-220219788, false);
				func_652(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_648(390004462, joaat("treasure_hunt_loot_16"), false);
				func_649(390004462, false);
				func_653(1);
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
				func_648(499813453, joaat("treasure_hunt_loot_03"), false);
				func_649(499813453, false);
				func_650(4);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_648(666607663, joaat("treasure_hunt_loot_06"), false);
				func_649(666607663, false);
				func_651(2);
				break;
		
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("ARROW_BUNDLE");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_648(218622660, joaat("treasure_hunt_loot_14"), false);
				func_649(218622660, false);
				func_421(2);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_648(666607663, joaat("treasure_hunt_loot_05"), false);
				func_649(666607663, false);
				func_651(1);
				break;
		
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
		
			case joaat("upgrade_bandolier"):
				if (func_115() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
					func_641(PLAYER::PLAYER_PED_ID(), joaat("upgrade_bandolier"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), true, true, true, false, true, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_648(218622660, joaat("treasure_hunt_loot_13"), false);
				func_649(218622660, false);
				func_421(1);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_poor");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_648(6410548, joaat("treasure_hunt_loot_20"), false);
				func_649(6410548, false);
				func_654(1);
				break;
		
			case joaat("upgrade_upg_coffee_kit"):
				func_607(496, false);
				break;
		
			case joaat("consumable_hair_grease"):
				func_607(491, false);
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
				func_648(499813453, joaat("treasure_hunt_loot_02"), false);
				func_649(499813453, false);
				func_650(2);
				break;
		
			case joaat("clothing_legendary_east_outfit"):
				func_607(415, false);
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_643();
				Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
				func_644();
				Global_40.f_11095.f_55 = Global_40.f_11095.f_55 + 0.1f;
				Global_40.f_11095.f_57 = Global_40.f_11095.f_57 + 0.1f;
				Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
				Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
				func_645();
				Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
				func_646();
				Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
				Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
				Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
				func_647();
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_648(390004462, joaat("treasure_hunt_loot_18"), false);
				func_649(390004462, false);
				func_653(4);
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
		func_660(&hash4);
	
		if (!func_661(hash4, value, hParam5))
			return 0;
		else if (!func_524(false))
			return 1;
	
		if (func_521(hParam0) == joaat("CLOTHING"))
			func_662(hParam0);
	
		if (func_547(hParam0, -1979000645))
			func_663(hParam0);
	}
	else if (lootTableKey != 0)
	{
		if (func_524(false))
		{
			num2.f_1 = 10;
			num2.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_35, false, false, lootTableKey, &num2, 0);
		
			for (i = 0; i < num2; i = i + 1)
			{
				func_414(num2.f_1[i], num2.f_12[i], false, false, false, -897553835, 0, 0, 0, false);
			}
		}
		else
		{
			func_664(lootTableKey, 0);
		}
	}

	statId = { func_519(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::_STAT_ID_INCREMENT_INT(&statId, value);

	func_665(hParam0);

	if (iParam6 > 0f)
	{
		if (func_547(hParam0, -839724752))
			func_666(hParam0, iParam6);
	}
	else if (!bParam2)
	{
		flag3 = hParam5 == 1248274121;
		func_518(hParam0, value, false, flag3, 0);
	}

	return 1;
}

void func_415(BOOL bParam0) // Position - 0x20DB9 Hash - 0xBACB87F5 ^0xBE63DBD4
{
	int i;
	int num;
	int num2;
	int num3;
	Hash hash;

	if (bParam0)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
			return;
	
		func_414(-1080874779, 3, false, false, false, 752097756, 0, 0, 0, false);
		func_414(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, false, false, false, 752097756, 0, 0, 0, false);
		func_414(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, false, false, false, 752097756, 0, 0, 0, false);
		func_414(joaat("consumable_tender_pork_wild_mint_cooked"), 5, false, false, false, 752097756, 0, 0, 0, false);
		func_414(joaat("consumable_prime_beef_oregano_cooked"), 5, false, false, false, 752097756, 0, 0, 0, false);
		func_414(joaat("consumable_game_meat_thyme_cooked"), 5, false, false, false, 752097756, 0, 0, 0, false);
		func_414(joaat("consumable_herb_oleander_sage"), 5, false, false, false, 752097756, 0, 0, 0, false);
		func_414(joaat("PROVISION_ANIMAL_FAT"), 5, false, false, false, 752097756, 0, 0, 0, false);
		func_414(joaat("consumable_special_horse_reviver_crafted"), 3, false, false, false, 752097756, 0, 0, 0, false);
		func_414(joaat("consumable_crafted_super_meal"), 3, false, false, false, 752097756, 0, 0, 0, false);
		func_414(joaat("consumable_oat_cakes"), 3, false, false, false, 752097756, 0, 0, 0, false);
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
			return;
	
		func_335(-1080874779, 3, true, -142743235, true);
		func_335(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, true, -142743235, true);
		func_335(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, true, -142743235, true);
		func_335(joaat("consumable_tender_pork_wild_mint_cooked"), 5, true, -142743235, true);
		func_335(joaat("consumable_prime_beef_oregano_cooked"), 5, true, -142743235, true);
		func_335(joaat("consumable_game_meat_thyme_cooked"), 5, true, -142743235, true);
		func_335(joaat("consumable_herb_oleander_sage"), 5, true, -142743235, true);
		func_335(joaat("PROVISION_ANIMAL_FAT"), 5, true, -142743235, true);
		func_335(joaat("consumable_special_horse_reviver_crafted"), 3, true, -142743235, true);
		func_335(joaat("consumable_crafted_super_meal"), 3, true, -142743235, true);
		func_335(joaat("consumable_oat_cakes"), 10, true, -142743235, true);
		num = joaat("breed_tennesseewalker_chestnut");
		num2 = joaat("a_c_horse_tennesseewalker_chestnut");
		num3 = 1;
		func_585(&num, &num2, &num3);
	
		for (i = 0; i < 7; i = i + 1)
		{
			if (func_586(i) == joaat("breed_ardennes_irongreyroan"))
			{
				func_587(i, num);
				func_588(i, num2);
				func_589(i, num3);
				func_590(i, 0);
			
				if (func_591(i))
					func_592(i);
			
				hash = func_593(num2);
				func_594(i, hash);
			}
		}
	
		func_412();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), false);
	}

	return;
}

void func_416(int iParam0, const char* sParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x21041 Hash - 0x144F6B91 ^0x144F6B91
{
	func_667(iParam0);

	if (bParam3)
		func_668(iParam0, sParam1, iParam2);

	return;
}

void func_417(int iParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, int iParam6, Hash hParam7) // Position - 0x2105E Hash - 0x63AC4944 ^0x63AC4944
{
	if (!bParam1)
		func_669(iParam0, sParam4, iParam5);

	func_670(iParam0, bParam1, iParam2, iParam3, hParam7);
	return;
}

BOOL func_418(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x21084 Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_332(hParam0, 0))
		return false;

	num = func_521(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_671(hParam0, 1))
			return false;

	return func_520(hParam0, false, bParam2) >= iParam1;
}

BOOL func_419(int iParam0) // Position - 0x210EE Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_334(iParam0);
	return num == 3 || num == 4;
}

BOOL func_420(int iParam0) // Position - 0x2110C Hash - 0x9921E361 ^0xC192E1E1
{
	return Global_40.f_12004.f_10 && iParam0 != false;
}

void func_421(int iParam0) // Position - 0x21121 Hash - 0x25D46568 ^0x71AC48D1
{
	Global_40.f_12004.f_10 = Global_40.f_12004.f_10 || iParam0;
	return;
}

void func_422(int iParam0) // Position - 0x2113C Hash - 0x68BAC935 ^0x8D460FEA
{
	Global_40.f_12004.f_10 = Global_40.f_12004.f_10 - Global_40.f_12004.f_10 && iParam0;
	return;
}

// Unhandled jump detected. Output should be considered invalid
struct<14> func_423() // Position - 0x21160 Hash - 0x43D0CF6E ^0x11C325FA
{
	int num;
	int num2;
	int i;
	var unk;
	var unk15;
	var unk37;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15.f_9 = joaat("SLOTID_NONE");

	if (func_672("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_673(&unk, i, num, num2))
				goto 0x88;
		
			if (unk.f_4 != joaat("weapon_revolver_doubleaction"))
			{
			}
			else if (func_674(unk.f_4, &unk15, unk.f_9))
			{
			}
			else
			{
				func_566(num);
				return unk;
			}
		}
	
		func_566(num);
	}

	unk37.f_9 = joaat("SLOTID_NONE");
	return unk37;
}

void func_424(Hash hParam0) // Position - 0x2120D Hash - 0x6D90E810 ^0x7EE3BF23
{
	Hash weaponUnlock;

	if (Global_1572887.f_12 != -1)
		return;

	if (!func_428(hParam0))
		return;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(weaponUnlock, true);
	return;
}

BOOL func_425(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0x21247 Hash - 0x61DE9CAE ^0x4ADCEE54
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
		unk = { func_526(hParam0, false, true) };
		hash = joaat("SLOTID_WEAPON_0");
		unk6.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < 4; i = i + 1)
		{
			hash = func_675(398 + i, 1);
		
			if (func_676(hParam0, &unk, hash, false))
			{
				if (func_674(hParam0, &unk6, hash))
				{
					unk28 = { func_569(hParam0, unk, hash, false) };
					func_677(hParam0, &unk28, &unk, 1, -142743235, 1, false);
					break;
				}
			}
		}
	}

	if (func_524(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return 0;
	
		func_620(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_678(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

void func_426(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5) // Position - 0x21399 Hash - 0x81F08C4D ^0x6CF7CF9C
{
	var unk;
	var unk6;
	var unk20;

	unk = { uParam1 };
	unk.f_4 = hParam5;
	unk6.f_9 = joaat("SLOTID_NONE");

	if (func_679(uParam1, hParam5, &unk6, false))
		func_677(unk6.f_4, &unk6, &unk, -1, -142743235, true, false);

	func_680(hParam0, &unk20, &unk, 1, 752097756, false);
	func_681(unk20, true);
	return;
}

BOOL func_427() // Position - 0x213FD Hash - 0x477323 ^0x8EF93AF8
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false);
}

BOOL func_428(Hash hParam0) // Position - 0x21419 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

BOOL func_429(int iParam0) // Position - 0x21434 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_682(iParam0))
		return false;

	return func_683(iParam0);
}

BOOL func_430(eStackSize essParam0) // Position - 0x21450 Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return essParam0 > -1;
}

Hash func_431(eStackSize essParam0, BOOL bParam1) // Position - 0x2145C Hash - 0xA64DC151 ^0x7D83907B
{
	if (!func_430(essParam0))
		return 0;

	if (Global_1360165[essParam0 /*1157*/].f_127 != 0)
		return Global_1360165[essParam0 /*1157*/].f_127;

	switch (essParam0)
	{
		case 0:
			return joaat("perschar_comp_horse_dutch");
	
		case 1:
			return joaat("perschar_comp_horse_john");
	
		case 2:
			return joaat("perschar_comp_horse_javier");
	
		case 3:
			return joaat("perschar_comp_horse_bill");
	
		case 4:
			return joaat("perschar_comp_horse_uncle");
	
		case 5:
			return joaat("perschar_comp_horse_hosea");
	
		case 6:
			return joaat("perschar_comp_horse_micah");
	
		case 7:
			return joaat("perschar_comp_horse_charles");
	
		case 8:
			return joaat("perschar_comp_horse_sean");
	
		case 9:
			return joaat("perschar_comp_horse_lenny");
	
		case 10:
			return joaat("PERSCHAR_COMP_HORSE_ODRISCOLL");
	
		case 11:
			return joaat("perschar_comp_horse_sadie");
	
		case 12:
		case 14:
			return 0;
	
		case 20:
			return joaat("perschar_comp_horse_karen");
	
		case 23:
			return joaat("PERSCHAR_COMP_HORSE_TRELAWNEY");
	
		case 26:
			return joaat("PERSCHAR_COMP_HORSE_EAGLE_FLIES");
	
		default:
		
	}

	if (bParam1)
	{
		Global_1360165[essParam0 /*1157*/].f_127 = func_684(essParam0);
		return Global_1360165[essParam0 /*1157*/].f_127;
	}

	return 0;
}

PersChar func_432(eStackSize essParam0) // Position - 0x215A1 Hash - 0xF15D53A9 ^0x3132AAF6
{
	Hash persCharHash;
	Hash perscharModelName;

	if (!func_430(essParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_126))
	{
		persCharHash = func_431(essParam0, true);
		perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(persCharHash);
	
		if (Global_40.f_4942[essParam0 /*60*/].f_7 != 0 && perscharModelName != Global_40.f_4942[essParam0 /*60*/].f_7)
			PERSCHAR::_0x8BC555034A5A5E8C(persCharHash, Global_40.f_4942[essParam0 /*60*/].f_7);
	
		Global_1360165[essParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(persCharHash);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[essParam0 /*1157*/].f_126);
	}

	return Global_1360165[essParam0 /*1157*/].f_126;
}

int func_433(int iParam0, var uParam1, var uParam2) // Position - 0x2163D Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

void func_434(eStackSize essParam0, Hash hParam1, int iParam2) // Position - 0x2165A Hash - 0x5362622 ^0xA2C2F1F6
{
	if (!PED::IS_PED_INJURED(func_685(essParam0)))
		if (func_137(essParam0) && func_332(hParam1, 0))
			func_686(&(Global_1360165[essParam0 /*1157*/].f_146), hParam1, iParam2, 1);

	return;
}

BOOL func_435() // Position - 0x21699 Hash - 0xEE877ACE ^0xCCE9C802
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
		return true;

	return false;
}

void func_436(int iParam0) // Position - 0x216BA Hash - 0x40F70A14 ^0xC7BBB819
{
	if (Global_1879534.f_7287 >= 1770)
		return;

	switch (iParam0)
	{
		case 0:
		case 12:
			break;
	
		case 1:
			if (Global_1879534.f_7288[iParam0] >= 240)
				return;
			break;
	
		case 2:
			if (Global_1879534.f_7288[iParam0] >= 350)
				return;
			break;
	
		case 3:
			if (Global_1879534.f_7288[iParam0] >= 1)
				return;
			break;
	
		case 4:
			if (Global_1879534.f_7288[iParam0] >= 1)
				return;
			break;
	
		case 5:
			if (Global_1879534.f_7288[iParam0] >= 1)
				return;
			break;
	
		case 6:
			if (Global_1879534.f_7288[iParam0] >= 1)
				return;
			break;
	
		case 7:
			if (Global_1879534.f_7288[iParam0] >= 1)
				return;
			break;
	
		case 8:
			if (Global_1879534.f_7288[iParam0] >= 1)
				return;
			break;
	
		default:
			break;
	}

	return;
}

void func_437(int iParam0) // Position - 0x217C7 Hash - 0x4C8B8CEC ^0x4C8B8CEC
{
	Global_1879534.f_7287 = Global_1879534.f_7287 + 1;

	if (!(iParam0 == 12))
		Global_1879534.f_7288[iParam0] = Global_1879534.f_7288[iParam0] + 1;

	return;
}

void func_438(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x21800 Hash - 0xA65AB937 ^0xA65AB937
{
	func_687(uParam0, iParam6);
	func_688(uParam0, iParam5);
	func_689(uParam0, iParam4);
	func_690(uParam0, iParam3);
	func_691(uParam0, iParam2);
	func_692(uParam0, iParam1);
	return;
}

void func_439(int iParam0, eStackSize essParam1, int iParam2, int iParam3, int iParam4) // Position - 0x21838 Hash - 0xA857B2BE ^0xF4FA0BA4
{
	Global_1879534.f_211[iParam0 /*4*/] = essParam1;
	Global_1879534.f_211[iParam0 /*4*/].f_1 = iParam2;
	Global_1879534.f_211[iParam0 /*4*/].f_2 = iParam3;
	Global_1879534.f_211[iParam0 /*4*/].f_3 = iParam4;
	return;
}

void func_440(int iParam0, eStackSize essParam1, int iParam2) // Position - 0x21876 Hash - 0x7CD1F9CF ^0x48049B3C
{
	Global_1879534.f_1172[iParam0 /*2*/] = essParam1;
	Global_1879534.f_1172[iParam0 /*2*/].f_1 = iParam2;
	return;
}

var func_441(BOOL bParam0, var uParam1, var uParam2) // Position - 0x2189A Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_442(int iParam0) // Position - 0x218B1 Hash - 0x77BA7B03 ^0x77BA7B03
{
	return iParam0 > -1 && iParam0 <= 80;
}

BOOL func_443(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, int iParam6, BOOL bParam7) // Position - 0x218C7 Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (iParam6 < 0f)
		iParam6 = 0f;

	if (MISC::ABSF(fParam0 - fParam3) <= iParam6)
		if (MISC::ABSF(fParam0.f_1 - fParam3.f_1) <= iParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - fParam3.f_2) <= iParam6)
				return true;

	return false;
}

void func_444(int iParam0, int iParam1) // Position - 0x2191C Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_289(iParam0))
		return;

	func_693(iParam0, iParam1);
	return;
}

void func_445(int iParam0, char* sParam1) // Position - 0x21939 Hash - 0xC2A0FAA0 ^0xEE1B222A
{
	if (!func_442(iParam0))
		return;

	TEXT_LABEL_ASSIGN_STRING(&(Global_1835011[iParam0 /*74*/].f_9), sParam1, 24);
	return;
}

void func_446(int iParam0, int iParam1) // Position - 0x2195C Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

int func_447() // Position - 0x2196D Hash - 0x44329226 ^0x73277375
{
	if (Global_1572887.f_12 == -1)
		return 771;

	return 20001;
}

BOOL func_448(int iParam0, int iParam1, int iParam2) // Position - 0x21988 Hash - 0x932A04D5 ^0x39A8988D
{
	return iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15);
}

BOOL func_449(int iParam0) // Position - 0x219AE Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_450(int iParam0, int iParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0x219EC Hash - 0x4E72835D ^0x57C5ACE0
{
	BOOL flag;
	int num;

	if (!func_694(iParam2))
		return -1;

	if (iParam0 < 0 || iParam0 > 511)
		return -1;

	if (iParam1 < 0 || iParam1 > 255)
		return -1;

	if (iParam3 < 0 || iParam3 > func_447())
		return -1;

	flag = func_448(iParam0, iParam1, iParam2);
	num = iParam3;
	func_693(num, 0);
	func_695(num, 0);
	func_696(num, 0);
	func_697(num, 0);
	func_698(num, flag);

	if (hParam4 != 0)
		func_699(num, hParam4);

	return num;
}

eStackSize func_451() // Position - 0x21A8B Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

eStackSize func_452(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x21A99 Hash - 0xA4504257 ^0xA4504257
{
	int num;
	int num2;
	int num3;
	BOOL flag;
	int num4;

	num = func_700(vParam0);
	num2 = -1;

	if (Global_1894882[num] > 0)
	{
		num3 = Global_1894882[num] - 1;
		flag = false;
	
		while (num3 >= 0 && !flag)
		{
			num4 = Global_1894065[num /*51*/][num3];
		
			if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[num4 /*35*/].f_3))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[num4 /*35*/].f_3, vParam0))
				{
					switch (Global_1888801[num4 /*35*/].f_20)
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

void func_453(int iParam0) // Position - 0x21B50 Hash - 0x59858C56 ^0xA28E61FC
{
	*iParam0 = -1;
	iParam0->f_1 = -1;
	iParam0->f_2 = -1;
	iParam0->f_3 = 0;
	iParam0->f_4 = -1;
	iParam0->f_6 = { 0f, 0f, 0f };
	iParam0->f_9 = 0f;
	iParam0->f_10 = 0;
	iParam0->f_5 = 0f;
	iParam0->f_11 = -1;
	return;
}

void func_454(int iParam0) // Position - 0x21B8D Hash - 0xA48AF811 ^0xB2136D4B
{
	if (func_701(iParam0->f_3))
		func_702(&(iParam0->f_3), true, false);

	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_4 = 0;
	iParam0->f_12 = 0;
	iParam0->f_9 = { 0f, 0f, 0f };
	iParam0->f_6 = 0;
	iParam0->f_15 = 0;
	iParam0->f_16 = 0;
	return;
}

int func_455(int iParam0) // Position - 0x21BD6 Hash - 0xF16A350D ^0xF7851618
{
	var unk;
	int num;
	var unk6;

	unk = Global_1357549.f_576;
	unk.f_1 = 0;
	unk.f_3 = iParam0;
	num = 0;

	if (func_703(unk, 70005598, &unk6, false))
		num = func_704(unk6);

	return num;
}

int func_456(int iParam0) // Position - 0x21C15 Hash - 0x5374F99F ^0x22946EC9
{
	var unk;
	int num;

	unk = Global_1357549.f_576;
	unk.f_1 = 0;
	unk.f_3 = iParam0;
	num = 1;

	if (func_705(unk, -1875502208, &num, false))
	{
	}

	return num;
}

Hash func_457() // Position - 0x21C4C Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_458(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x21C58 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_706(*hParam0);
	i = func_707(*hParam0);
	num2 = func_708(*hParam0);
	j = func_709(*hParam0);
	k = func_710(*hParam0);
	l = func_711(*hParam0);

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

	for (m = func_712(i, num); num2 > m; m = func_712(i, num))
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

	func_438(hParam0, l, k, j, num2, i, num);
	return;
}

void func_459(int iParam0, BOOL bParam1) // Position - 0x21DE0 Hash - 0x1E270DC5 ^0x18D204F7
{
	int num;
	int offset;

	func_713(iParam0, &num, &offset);

	if (bParam1)
		MISC::SET_BIT(&Global_1357549.f_1848[num], offset);
	else
		MISC::CLEAR_BIT(&Global_1357549.f_1848[num], offset);

	return;
}

BOOL func_460(int iParam0) // Position - 0x21E1D Hash - 0x27CE23B1 ^0x27CE23B1
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

void func_461(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x21F2A Hash - 0x24EF2016 ^0x7F590678
{
	if (*iParam0 == 176656832)
		return;

	func_459(*iParam0, false);

	if (bParam1)
		if (bParam2)
			func_462(2, *iParam0);
		else
			func_463(2, *iParam0);

	func_714(iParam0);
	return;
}

void func_462(int iParam0, int iParam1) // Position - 0x21F6B Hash - 0xBEB4F573 ^0xDF718DD5
{
	if (Global_1357549.f_1483 >= 25)
		Global_1357549.f_1483 = 0;

	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/] = iParam0;
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/].f_1 = iParam1;
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/].f_2 = 0;
	Global_1357549.f_1483 = Global_1357549.f_1483 + 1;
	return;
}

void func_463(int iParam0, int iParam1) // Position - 0x21FD0 Hash - 0xB8F35FB ^0xB8F35FB
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

int func_464(int iParam0, int iParam1) // Position - 0x22057 Hash - 0x8FA0E29 ^0xC3F68E87
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

BOOL func_465(int iParam0) // Position - 0x23170 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_466(int iParam0) // Position - 0x23183 Hash - 0xEC19E423 ^0x3F24553E
{
	int num;

	if (func_715(iParam0))
		if (!func_429(45))
			return false;

	num = func_472(iParam0);

	if (func_481())
		if (!func_94(Global_1835011[3 /*74*/].f_1, true))
			return num == 7 || num == 6;

	return true;
}

BOOL func_467(eStackSize essParam0, BOOL bParam1) // Position - 0x231D5 Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[essParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[essParam0 /*11*/] && bParam1 != false;
}

void func_468(int iParam0, BOOL bParam1) // Position - 0x23208 Hash - 0x1F53BD85 ^0xA70B55E5
{
	if (Global_1572887.f_12 == -1)
		Global_23118[iParam0 /*11*/] = Global_23118[iParam0 /*11*/] || bParam1;
	else
		Global_1058888.f_40545[iParam0 /*11*/] = Global_1058888.f_40545[iParam0 /*11*/] || bParam1;

	return;
}

void func_469(int iParam0, int iParam1) // Position - 0x2324B Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

struct<2> func_470(int iParam0, int iParam1) // Position - 0x2325C Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_471(var uParam0, var uParam1, int iParam2) // Position - 0x23272 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

int func_472(int iParam0) // Position - 0x23282 Hash - 0x224FC50D ^0x224FC50D
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

eStackSize func_473(int iParam0) // Position - 0x2337E Hash - 0x28677675 ^0xD6005963
{
	if (Global_1572887.f_12 == -1)
		return Global_40.f_7862[iParam0 /*4*/];

	return Global_42606[iParam0 /*4*/];
}

int func_474(eStackSize essParam0) // Position - 0x233A4 Hash - 0xFE841B01 ^0xFE841B01
{
	switch (essParam0)
	{
		case -1:
			return -1;
	
		case 4:
			return 5;
	
		case 9:
			return 3;
	
		case 22:
			return 7;
	
		case 37:
			return 8;
	
		case 43:
			return 0;
	
		case 58:
			return 4;
	
		case 71:
			return 1;
	
		case 79:
			return 6;
	
		case 98:
			return 2;
	
		default:
		
	}

	return -1;
}

eStackSize func_475() // Position - 0x2341A Hash - 0xC5B83CF5 ^0xD520990E
{
	return Global_40.f_4283.f_1;
}

BOOL func_476(int iParam0) // Position - 0x2342A Hash - 0xC62F3EC7 ^0x941BF203
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);

	return false;
}

void func_477(int iParam0, Hash hParam1) // Position - 0x23453 Hash - 0x24A4BE93 ^0x70B16AB7
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
		if (MAP::DOES_BLIP_EXIST(Global_36308[iParam0]))
			MAP::BLIP_REMOVE_MODIFIER(Global_36308[iParam0], hParam1);

	return;
}

void func_478(int iParam0, BOOL bParam1) // Position - 0x23489 Hash - 0x2A73BCD4 ^0xFA31BBCB
{
	if (*iParam0 != -1)
	{
		func_716(*iParam0, -1);
		func_717(*iParam0, 0);
		func_718(*iParam0, 0);
	
		if (MAP::DOES_BLIP_EXIST(Global_36308[*iParam0]))
		{
			if (bParam1)
				MAP::SET_RADAR_ZOOM(Global_36308[*iParam0]);
		
			MAP::REMOVE_BLIP(&Global_36308[*iParam0]);
		}
	}

	*iParam0 = -1;
	return;
}

int func_479(eStackSize essParam0, int iParam1) // Position - 0x234E0 Hash - 0x8A1A59F3 ^0x8A1A59F3
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

void func_480(Hash hParam0, int iParam1) // Position - 0x23CF4 Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_481() // Position - 0x23D07 Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

void func_482(eStackSize essParam0) // Position - 0x23D26 Hash - 0xC5D7FEAF ^0x73293E05
{
	Global_40.f_4283 = essParam0;
	Global_40.f_4283.f_1 = func_297(essParam0);
	return;
}

void func_483(eStackSize essParam0) // Position - 0x23D44 Hash - 0x4C3C9432 ^0x343541E
{
	switch (essParam0)
	{
		case 0:
			func_495(2097152);
			break;
	
		case 1:
			func_495(4194304);
			break;
	
		case 2:
			func_495(16777216);
			break;
	
		case 3:
			func_495(33554432);
			break;
	
		case 4:
			func_495(134217728);
			break;
	
		case 5:
			func_495(67108864);
			break;
	
		case 6:
			func_495(268435456);
			break;
	
		case 7:
			func_495(536870912);
			break;
	
		case 8:
			func_495(1073741824);
			break;
	}

	return;
}

void func_484(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x23DF4 Hash - 0xC2353F6B ^0x452C2E7C
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
			func_719();
			func_304(iParam0);
			break;
	
		case -1925798111:
			func_304(-1925798111);
			func_303(-919512195);
			func_303(420709909);
			func_303(1703426636);
			break;
	
		case -1838352012:
			func_303(-1674179981);
			func_303(-1835851517);
			func_304(-1838352012);
			break;
	
		case -1835851517:
			func_303(-1674179981);
			func_303(-1838352012);
			func_304(-1835851517);
			break;
	
		case -1738165526:
			func_304(-1738165526);
			func_303(0);
			func_303(473295046);
			break;
	
		case -1717960576:
			func_303(210001842);
			func_304(-1717960576);
			break;
	
		case -1674179981:
			func_303(-1835851517);
			func_303(-1838352012);
			func_304(-1674179981);
			break;
	
		case -1612662716:
			func_303(1822001510);
			func_304(-1612662716);
			break;
	
		case -1414537028:
			func_303(38162571);
			func_303(1350391819);
			func_303(54073871);
			func_304(-1414537028);
			break;
	
		case -1311865656:
			func_304(-1311865656);
			func_303(1509509592);
			func_303(-959357075);
			func_303(405586984);
			break;
	
		case -1271608261:
			func_303(-150493654);
			func_303(1846061697);
			func_303(-1145519186);
			func_304(-1271608261);
			break;
	
		case -1223121209:
			func_304(-1223121209);
			func_303(630808005);
			break;
	
		case -1145519186:
			func_303(-150493654);
			func_303(-1271608261);
			func_303(1846061697);
			func_304(-1145519186);
			break;
	
		case -1124061431:
			func_303(198200492);
			func_304(-1124061431);
			func_303(52706132);
			func_303(-259123672);
			break;
	
		case -1080627546:
			if (bParam1)
				func_304(-1080627546);
			else
				func_303(-1080627546);
			break;
	
		case -1056767524:
		case -538889627:
		case -538880323:
			func_303(-538889627);
			func_303(-538880323);
			func_303(-1056767524);
			func_304(iParam0);
			break;
	
		case -959357075:
			func_304(-959357075);
			func_303(1509509592);
			func_303(405586984);
			func_303(-1311865656);
			break;
	
		case -919512195:
			func_304(-919512195);
			func_303(-1925798111);
			func_303(420709909);
			func_303(1703426636);
			break;
	
		case -664252410:
			func_303(2019386373);
			func_303(2109952320);
			func_304(-664252410);
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
			func_720();
			func_304(iParam0);
			break;
	
		case -524145696:
			if (bParam1)
				func_304(-524145696);
			else
				func_303(-524145696);
		
			func_303(1626481264);
			func_303(282809459);
			break;
	
		case -502324015:
			func_303(1497516462);
			func_303(2016141805);
			func_303(1010885152);
			func_304(-502324015);
			break;
	
		case -434590080:
			func_303(1376646519);
			func_303(931649776);
			func_303(1743048395);
			func_303(449774763);
			func_304(-434590080);
			break;
	
		case -404698347:
			func_303(1306158345);
			func_303(1952610440);
			func_303(-223469678);
			func_303(1517904467);
			func_304(-404698347);
			break;
	
		case -259123672:
			func_303(198200492);
			func_303(-1124061431);
			func_303(52706132);
			func_304(-259123672);
			break;
	
		case -223469678:
			func_303(1306158345);
			func_303(1952610440);
			func_303(-404698347);
			func_303(1517904467);
			func_304(-223469678);
			break;
	
		case -150493654:
			func_303(-1271608261);
			func_303(1846061697);
			func_303(-1145519186);
			func_304(-150493654);
			break;
	
		case 0:
			func_304(0);
			func_303(473295046);
			func_303(-1738165526);
			break;
	
		case 38162571:
			func_303(-1414537028);
			func_303(1350391819);
			func_303(54073871);
			func_304(38162571);
			break;
	
		case 52706132:
			func_303(198200492);
			func_303(-1124061431);
			func_304(52706132);
			func_303(-259123672);
			break;
	
		case 54073871:
			func_303(-1414537028);
			func_303(38162571);
			func_303(1350391819);
			func_304(54073871);
			break;
	
		case 198200492:
			func_304(198200492);
			func_303(-1124061431);
			func_303(52706132);
			func_303(-259123672);
			break;
	
		case 210001842:
			func_303(-1717960576);
			func_304(210001842);
			break;
	
		case 280705402:
			func_303(1766284049);
			func_303(1926308480);
			func_304(280705402);
			break;
	
		case 282809459:
			func_304(282809459);
			func_303(1626481264);
			func_303(-524145696);
			break;
	
		case 405586984:
			func_304(405586984);
			func_303(1509509592);
			func_303(-959357075);
			func_303(-1311865656);
			break;
	
		case 420709909:
			func_304(420709909);
			func_303(-919512195);
			func_303(-1925798111);
			func_303(1703426636);
			break;
	
		case 439465264:
			if (func_721(1609506757))
				if (bParam1)
					func_304(439465264);
				else
					func_303(439465264);
			break;
	
		case 449774763:
			func_303(1376646519);
			func_303(931649776);
			func_303(-434590080);
			func_303(1743048395);
			func_304(449774763);
			break;
	
		case 473295046:
			func_304(473295046);
			func_303(0);
			func_303(-1738165526);
			break;
	
		case 630808005:
			func_304(630808005);
			func_303(-1223121209);
			break;
	
		case 885203519:
			if (bParam1)
				func_304(885203519);
			else
				func_303(885203519);
			break;
	
		case 931649776:
			func_303(1376646519);
			func_303(-434590080);
			func_303(1743048395);
			func_303(449774763);
			func_304(931649776);
			break;
	
		case 932909855:
			func_304(932909855);
			func_303(2051822093);
			break;
	
		case 1010885152:
			func_303(1497516462);
			func_303(2016141805);
			func_304(1010885152);
			func_303(-502324015);
			break;
	
		case 1306158345:
			func_303(1952610440);
			func_303(-223469678);
			func_303(-404698347);
			func_303(1517904467);
			func_304(1306158345);
			break;
	
		case 1350391819:
			func_303(-1414537028);
			func_303(38162571);
			func_303(54073871);
			func_304(1350391819);
			break;
	
		case 1376646519:
			func_303(931649776);
			func_303(-434590080);
			func_303(1743048395);
			func_303(449774763);
			func_304(1376646519);
			break;
	
		case 1453909576:
			func_304(1453909576);
			func_303(1643531967);
			break;
	
		case 1497516462:
			func_304(1497516462);
			func_303(2016141805);
			func_303(1010885152);
			func_303(-502324015);
			break;
	
		case 1509509592:
			func_304(1509509592);
			func_303(405586984);
			func_303(-959357075);
			func_303(-1311865656);
			break;
	
		case 1517904467:
			func_303(1306158345);
			func_303(1952610440);
			func_303(-223469678);
			func_303(-404698347);
			func_304(1517904467);
			break;
	
		case 1609506757:
			if (bParam1)
			{
				func_303(439465264);
				func_304(1609506757);
			}
			else
			{
				func_303(1609506757);
				func_303(439465264);
			}
			break;
	
		case 1626481264:
			func_304(1626481264);
			func_303(-524145696);
			func_303(282809459);
			break;
	
		case 1643531967:
			func_304(1643531967);
			func_303(1453909576);
			break;
	
		case 1703426636:
			func_304(1703426636);
			func_303(-919512195);
			func_303(-1925798111);
			func_303(420709909);
			break;
	
		case 1743048395:
			func_303(1376646519);
			func_303(931649776);
			func_303(-434590080);
			func_303(449774763);
			func_304(1743048395);
			break;
	
		case 1766284049:
			func_303(280705402);
			func_303(1926308480);
			func_304(1766284049);
			break;
	
		case 1822001510:
			func_303(-1612662716);
			func_304(1822001510);
			break;
	
		case 1846061697:
			func_303(-150493654);
			func_303(-1271608261);
			func_303(-1145519186);
			func_304(1846061697);
			break;
	
		case 1926308480:
			func_303(1766284049);
			func_303(280705402);
			func_304(1926308480);
			break;
	
		case 1952610440:
			func_303(1306158345);
			func_303(-223469678);
			func_303(-404698347);
			func_303(1517904467);
			func_304(1952610440);
			break;
	
		case 2016141805:
			func_303(1497516462);
			func_304(2016141805);
			func_303(1010885152);
			func_303(-502324015);
			break;
	
		case 2019386373:
			func_303(-664252410);
			func_303(2109952320);
			func_304(2019386373);
			break;
	
		case 2051822093:
			func_304(2051822093);
			func_303(932909855);
			break;
	
		case 2109952320:
			func_303(2019386373);
			func_303(-664252410);
			func_304(2109952320);
			break;
	
		default:
			if (bParam1)
				if (!func_721(iParam0))
					func_304(iParam0);
			else if (func_721(iParam0))
				func_303(iParam0);
			break;
	}

	return;
}

void func_485() // Position - 0x24919 Hash - 0x20B6163F ^0xABC44FA0
{
	int i;

	for (i = 0; i < 15; i = i + 1)
	{
		Global_1357549.f_1497.f_32[i /*5*/] = { 0f, 0f, 0f };
		Global_1357549.f_1497.f_32[i /*5*/].f_3 = 0f;
		Global_1357549.f_1497.f_32[i /*5*/].f_4 = 0;
	}

	Global_1357549.f_1497.f_108 = 0;
	return;
}

int func_486(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4) // Position - 0x24970 Hash - 0x169BB9DC ^0x38CF130A
{
	int i;

	for (i = 0; i < 15; i = i + 1)
	{
		if (_IS_NULL_VECTOR(Global_1357549.f_1497.f_32[i /*5*/]))
		{
			Global_1357549.f_1497.f_32[i /*5*/] = { fParam0 };
			Global_1357549.f_1497.f_32[i /*5*/].f_3 = fParam3;
			Global_1357549.f_1497.f_32[i /*5*/].f_4 = iParam4;
			Global_1357549.f_1497.f_108 = Global_1357549.f_1497.f_108 + 1;
			return 1;
		}
	}

	return 0;
}

BOOL func_487() // Position - 0x249EF Hash - 0x2C6DE8F6 ^0x14BC70A4
{
	if (Global_1572887.f_12 == -1)
		return false;

	return Global_1058888.f_4;
}

BOOL func_488(int iParam0) // Position - 0x24A0B Hash - 0xB1DD3D00 ^0xB1DD3D00
{
	return func_489(23, iParam0);
}

BOOL func_489(int iParam0, int iParam1) // Position - 0x24A1B Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_723(&(Global_1109000.f_4), num, 5);

	if (iParam1 == func_724())
		return func_723(&(Global_1109000.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1224589.f_16[iParam1])
		return func_723(&(Global_1108108[iParam1 /*27*/].f_4), num, 5);

	return false;
}

BOOL func_490(eStackSize essParam0) // Position - 0x24A8F Hash - 0xEECF70F1 ^0xEECF70F1
{
	if (!func_294(essParam0))
		return false;

	return func_467(essParam0, 8);
}

void func_491(eStackSize essParam0, int iParam1) // Position - 0x24AAD Hash - 0x9642AD01 ^0xCF226DF6
{
	if (!func_294(essParam0))
		return;

	Global_1888801[essParam0 /*35*/].f_19 = iParam1;
	return;
}

void func_492(BOOL bParam0) // Position - 0x24ACE Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1894899 = Global_1894899 || bParam0;
	return;
}

void func_493(BOOL bParam0) // Position - 0x24AE1 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1894899 = Global_1894899 - Global_1894899 && bParam0;
	return;
}

BOOL func_494() // Position - 0x24AF9 Hash - 0xC95201B4 ^0xF2B2F83F
{
	BOOL flag;
	eStackSize i;

	flag = false;

	for (i = 0; i < 150; i = i + 1)
	{
		if (func_467(i, true))
			if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1888801[i /*35*/].f_26)))
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1888801[i /*35*/].f_26));
	
		if (Global_1888801[i /*35*/].f_9 != 0)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1888801[i /*35*/].f_9, false))
				if (func_115() == -1)
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1888801[i /*35*/].f_9, 523);
				else if (!SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(Global_1888801[i /*35*/].f_9))
					SCRIPTS::_REQUEST_THREAD_EXIT(Global_1888801[i /*35*/].f_9);
			else if (func_467(i, 2))
				if (func_115() == -1)
					PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_1888801[i /*35*/].f_26), 523);
				else
					SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(MISC::GET_HASH_KEY(&(Global_1888801[i /*35*/].f_26)));
		
			if (!SCRIPTS::DOES_THREAD_EXIST(Global_1888801[i /*35*/].f_9))
			{
				Global_1888801[i /*35*/].f_9 = 0;
				func_725(i, 11);
			}
			else
			{
				flag = true;
			}
		}
	}

	return !flag;
}

void func_495(int iParam0) // Position - 0x24C05 Hash - 0x87C96E4A ^0x7379C771
{
	switch (func_115())
	{
		case -1:
			Global_40.f_4283.f_2 = Global_40.f_4283.f_2 || iParam0;
			break;
	}

	return;
}

void func_496(var uParam0) // Position - 0x24C33 Hash - 0x8F7176E6 ^0x4BBB9243
{
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
	*uParam0 = 0;
	uParam0->f_4 = 0;
	return;
}

BOOL func_497(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5) // Position - 0x24C53 Hash - 0xE38E8432 ^0x85D2E305
{
	int num;

	if (iParam3->f_62 >= 12)
		return false;

	if (iParam2 <= 0)
		return false;

	num = func_726();
	func_727(iParam2, bParam4);

	if (num != func_726())
	{
		iParam3->f_1[iParam3->f_62 /*5*/] = 0;
		iParam3->f_1[iParam3->f_62 /*5*/].f_3 = -1;
		iParam3->f_1[iParam3->f_62 /*5*/].f_1 = iParam0;
		iParam3->f_1[iParam3->f_62 /*5*/].f_2 = iParam1;
		iParam3->f_1[iParam3->f_62 /*5*/].f_4 = iParam2;
		iParam3->f_62 = iParam3->f_62 + 1;
	
		if (bParam4)
			if (iParam1 == 0)
				func_728(iParam2);
			else if (bParam5)
				func_729(1);
	}

	return true;
}

int func_498(int iParam0) // Position - 0x24CF4 Hash - 0x3B123F48 ^0x43C62955
{
	int num;
	int i;

	num = *iParam0;

	for (i = 0; i < iParam0->f_62; i = i + 1)
	{
		num = num + iParam0->f_1[i /*5*/].f_4;
	}

	return num;
}

void func_499(var uParam0) // Position - 0x24D27 Hash - 0x734024F2 ^0xB6A833B
{
	var src;

	src.f_1 = 12;
	src.f_1.f_1.f_1 = -1;
	src.f_1.f_1.f_3 = -1;
	src.f_1.f_1.f_5.f_1 = -1;
	src.f_1.f_1.f_5.f_3 = -1;
	src.f_1.f_1.f_5.f_5.f_1 = -1;
	src.f_1.f_1.f_5.f_5.f_3 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_1 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_3 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_1 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_3 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	MISC::COPY_SCRIPT_STRUCT(&uParam0->[0 /*63*/], &uParam0->[1 /*63*/], 63);
	MISC::COPY_SCRIPT_STRUCT(&uParam0->[1 /*63*/], &src, 63);
	uParam0->[1 /*63*/] = func_498(&uParam0->[0 /*63*/]);
	return;
}

void func_500(int iParam0) // Position - 0x24E10 Hash - 0xD31B7E0 ^0xD31B7E0
{
	switch (func_115())
	{
		case -1:
			Global_1357549.f_1494 = Global_1357549.f_1494 || iParam0;
			break;
	}

	return;
}

void func_501(int iParam0) // Position - 0x24E3C Hash - 0xE0643F2A ^0xE0643F2A
{
	switch (func_115())
	{
		case -1:
			Global_1357549.f_1494 = Global_1357549.f_1494 - Global_1357549.f_1494 && iParam0;
			break;
	}

	return;
}

void func_502(Hash hParam0, Any anParam1) // Position - 0x24E70 Hash - 0xC09336E4 ^0x6EE0785F
{
	*anParam1 = DATABINDING::_DATABINDING_ADD_DATA_INT(hParam0, "dollars", 0);
	anParam1->f_1 = DATABINDING::_DATABINDING_ADD_DATA_INT(hParam0, "cents", 0);
	return;
}

void func_503(eStackSize essParam0, BOOL bParam1) // Position - 0x24E95 Hash - 0x9A8E96E6 ^0x9A8E96E6
{
	if (!func_730(essParam0))
		return;

	Global_40.f_7157[essParam0 /*3*/] = Global_40.f_7157[essParam0 /*3*/] || bParam1;
	return;
}

BOOL func_504() // Position - 0x24EC1 Hash - 0xBA2FE0DB ^0xBA2FE0DB
{
	return func_731();
}

void func_505(Hash hParam0) // Position - 0x24ECD Hash - 0xF69051DC ^0xF3C89D36
{
	int i;
	Hash item;
	int inventoryId;

	inventoryId = func_571(false);

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		item = Global_1946054.f_2657[i];
	
		if (func_371(item) == hParam0)
			INVENTORY::_INVENTORY_ENABLE_ITEM(inventoryId, item);
	}

	func_733(func_732(hParam0), 6);
	return;
}

int func_506(int iParam0) // Position - 0x24F21 Hash - 0x6AA34421 ^0x2D6E2AEF
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

BOOL func_507(int iParam0) // Position - 0x24F33 Hash - 0x18F20B33 ^0x18F20B33
{
	if (!func_289(iParam0))
		return false;

	switch (func_734(iParam0))
	{
		case 1:
			switch (func_574(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return true;
			}
			break;
	
		case 8:
			switch (func_574(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return true;
			}
			break;
	}

	return false;
}

void func_508(Hash hParam0) // Position - 0x2500C Hash - 0xF11E3100 ^0x54576133
{
	int i;
	Hash item;
	int inventoryId;

	inventoryId = func_571(false);

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		item = Global_1946054.f_2657[i];
	
		if (func_371(item) == hParam0)
			INVENTORY::_INVENTORY_DISABLE_ITEM(inventoryId, item, 0);
	}

	func_735(func_732(hParam0), 6);
	return;
}

void func_509(var uParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, BOOL bParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19) // Position - 0x25061 Hash - 0x870C1583 ^0xC6938A5E
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(hParam1, &uParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(0), bParam10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(1), bParam10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(2), bParam10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(53), bParam10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(54), bParam10.f_4);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(56), bParam10.f_5);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(55), bParam10.f_6);

	if (bParam10.f_7 == 0)
		bParam10.f_7 = joaat("IB_SELECT");

	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(57), bParam10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(58), bParam10.f_8);
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(59), bParam10.f_9);
	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x25152 Hash - 0xA17D549C ^0x51F5604A
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
	
		case 1:
			return "dynamic_list_item_visible";
	
		case 2:
			return "dynamic_list_item_main_color";
	
		case 3:
			return "dynamic_list_item_secondary_color";
	
		case 4:
			return "dynamic_list_item_tertiary_color";
	
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
	
		case 6:
			return "dynamic_list_item_main_img_texture";
	
		case 7:
			return "dynamic_list_item_main_img_visible";
	
		case 8:
			return "dynamic_list_item_main_img_enabled";
	
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
	
		case 10:
			return "dynamic_list_item_status_icon_texture";
	
		case 11:
			return "dynamic_list_item_status_icon_visible";
	
		case 12:
			return "dynamic_list_item_deco_texture_dic";
	
		case 13:
			return "dynamic_list_item_deco__texture";
	
		case 14:
			return "dynamic_list_item_deco_visible";
	
		case 15:
			return "dynamic_list_item_raw_text_entry";
	
		case 16:
			return "dynamic_list_item_text_label_entry";
	
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
	
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
	
		case 19:
			return "dynamic_list_item_secondary_text_visible";
	
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
	
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
	
		case 22:
			return "dynamic_list_item_end_img_texture";
	
		case 23:
			return "dynamic_list_item_end_img_visible";
	
		case 24:
			return "dynamic_list_item_corner_end_img_texture_dic";
	
		case 25:
			return "dynamic_list_item_corner_end_img_texture";
	
		case 26:
			return "dynamic_list_item_corner_end_img_visible";
	
		case 27:
			return "dynamic_list_item_entry_player_index";
	
		case 28:
			return "dynamic_list_item_entry_friend_index";
	
		case 29:
			return "dynamic_list_item_player_gamer_handle";
	
		case 30:
			return "dynamic_list_item_option_stepper_visible";
	
		case 31:
			return "dynamic_list_item_option_stepper_text_enabled";
	
		case 32:
			return "dynamic_list_item_option_stepper_items";
	
		case 33:
			return "dynamic_list_item_option_stepper_current_hash";
	
		case 34:
			return "dynamic_list_item_option_stepper_current_index";
	
		case 35:
			return "dynamic_list_item_option_stepper_max_index";
	
		case 36:
			return "dynamic_list_item_left_chevron_enabled";
	
		case 37:
			return "dynamic_list_item_right_chevron_enabled";
	
		case 38:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
	
		case 39:
			return "dynamic_list_item_main_fill_maximum";
	
		case 40:
			return "dynamic_list_item_main_fill_value";
	
		case 41:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
	
		case 42:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
	
		case 43:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
	
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
	
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
	
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
	
		case 47:
			return "dynamic_list_item_extra_img_texture_one_dic";
	
		case 48:
			return "dynamic_list_item_extra_img_one_texture";
	
		case 49:
			return "dynamic_list_item_extra_img_one_visible";
	
		case 50:
			return "dynamic_list_item_extra_int_field_one_value";
	
		case 51:
			return "dynamic_list_item_extra_int_field_two_value";
	
		case 52:
			return "dynamic_list_item_extra_bool_field_one_value";
	
		case 53:
			return "dynamic_list_item_link";
	
		case 54:
			return "dynamic_list_item_event_channel_hash";
	
		case 55:
			return "dynamic_list_item_focus_hash";
	
		case 56:
			return "dynamic_list_item_select_hash";
	
		case 57:
			return "dynamic_list_item_prompt_text";
	
		case 58:
			return "dynamic_list_item_prompt_enabled";
	
		case 59:
			return "dynamic_list_item_prompt_visible";
	
		case 60:
			return "dynamic_list_item_prompt_option_text";
	
		case 61:
			return "dynamic_list_item_prompt_option_enabled";
	
		case 62:
			return "dynamic_list_item_prompt_option_visible";
	
		case 63:
			return "dynamic_list_item_prompt_option_select_hash";
	
		case 64:
			return "dynamic_list_item_prompt_toggle_text";
	
		case 65:
			return "dynamic_list_item_prompt_toggle_enabled";
	
		case 66:
			return "dynamic_list_item_prompt_toggle_visible";
	
		case 67:
			return "dynamic_list_item_prompt_toggle_select_hash";
	
		case 68:
			return "dynamic_list_item_prompt_r3_text";
	
		case 69:
			return "dynamic_list_item_prompt_r3_enabled";
	
		case 70:
			return "dynamic_list_item_prompt_r3_visible";
	
		case 71:
			return "dynamic_list_item_select_r3_select_hash";
	
		case 72:
			return "mount_collection_index";
	
		case 73:
			return "dynamic_list_item_rename_prompt_enabled";
	
		case 74:
			return "dynamic_list_item_rename_prompt_visible";
	
		case 75:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
	
		case 76:
			return "invite_unique_id";
	
		case 77:
			return "invite_tracked";
	
		case 78:
			return "invite_processed";
	
		case 79:
			return "invite_script_type";
	
		case 80:
			return "invite_gang_id";
	
		case 81:
			return "invite_expiration_time";
	
		case 82:
			return "invite_filter_type";
	
		case 83:
			return "invite_feed_message_id";
	
		default:
		
	}

	return "null";
}

int func_511(int iParam0) // Position - 0x255AA Hash - 0xAFBAC931 ^0xAFBAC931
{
	switch (iParam0)
	{
		case joaat("PEDEXPRESS_LATS"):
			return 6;
	
		case joaat("PEDEXPRESS_BROW_HEIGHT"):
			return 16;
	
		case joaat("PEDEXPRESS_EYE_H_POS"):
			return 36;
	
		case joaat("PEDEXPRESS_UPPER_LIP_WIDTH"):
			return 49;
	
		case joaat("PEDEXPRESS_FOREARMS"):
			return 12;
	
		case joaat("PEDEXPRESS_LOWER_LIP_WIDTH"):
			return 52;
	
		case joaat("PEDEXPRESS_LOWER_LIP_DEPTH"):
			return 53;
	
		case joaat("PEDEXPRESS_JAW_WIDTH"):
			return 27;
	
		case joaat("PEDEXPRESS_CHEST_WIDTH"):
			return 7;
	
		case joaat("PEDEXPRESS_UPPER_LIPDEPTH"):
			return 50;
	
		case joaat("PEDEXPRESS_BELLY_WIDTH"):
			return 9;
	
		case joaat("pedexpress_cheeks_depth"):
			return 25;
	
		case joaat("PEDEXPRESS_CHIN_TILT"):
			return 29;
	
		case joaat("PEDEXPRESS_SHOULDERS_HEIGHT"):
			return 2;
	
		case joaat("pedexpress_jaw_depth"):
			return 28;
	
		case joaat("PEDEXPRESS_BELLY_DEPTH"):
			return 10;
	
		case joaat("pedexpress_brow_depth"):
			return 18;
	
		case joaat("PEDEXPRESS_MOUTH_V_POS"):
			return 47;
	
		case joaat("PEDEXPRESS_EAR_LENGTH"):
			return 21;
	
		case joaat("PEDEXPRESS_EYE_WIDTH"):
			return 33;
	
		case joaat("pedexpress_chin_depth"):
			return 31;
	
		case joaat("PEDEXPRESS_LOWER_LEGS"):
			return 14;
	
		case joaat("PEDEXPRESS_EYE_ANGLE"):
			return 35;
	
		case joaat("PEDEXPRESS_NECK_WIDTH"):
			return 0;
	
		case joaat("PEDEXPRESS_EYE_V_POS"):
			return 37;
	
		case joaat("PEDEXPRESS_EAR_LOBE"):
			return 22;
	
		case joaat("PEDEXPRESS_NOSE_LENGTH"):
			return 39;
	
		case joaat("PEDEXPRESS_SHOULDERS_DEPTH"):
			return 3;
	
		case joaat("PEDEXPRESS_MOUTH_WIDTH"):
			return 44;
	
		case joaat("PEDEXPRESS_NOSE_BREAK"):
			return 42;
	
		case joaat("PEDEXPRESS_NOSE_HEIGHT"):
			return 40;
	
		case joaat("PEDEXPRESS_MOUTH_DEPTH"):
			return 45;
	
		case joaat("PEDEXPRESS_UPPER_ARMS"):
			return 11;
	
		case joaat("PEDEXPRESS_NOSE_WIDTH"):
			return 38;
	
		case joaat("PEDEXPRESS_CHIN_WIDTH"):
			return 30;
	
		case joaat("PEDEXPRESS_UPPER_LEGS"):
			return 13;
	
		case joaat("PEDEXPRESS_EYE_HEIGHT"):
			return 32;
	
		case joaat("PEDEXPRESS_NOSE_TILT"):
			return 41;
	
		case joaat("PEDEXPRESS_EYE_DEPTH"):
			return 34;
	
		case joaat("PEDEXPRESS_BROW_WIDTH"):
			return 17;
	
		case joaat("PEDEXPRESS_CHEEKS_HEIGHT"):
			return 23;
	
		case joaat("PEDEXPRESS_FACE_WIDTH"):
			return 15;
	
		case joaat("PEDEXPRESS_MOUTH_H_POS"):
			return 46;
	
		case joaat("PEDEXPRESS_TRAPS"):
			return 5;
	
		case joaat("PEDEXPRESS_NOSTRIL_WIDTH"):
			return 43;
	
		case joaat("PEDEXPRESS_CHEEKS_WIDTH"):
			return 24;
	
		case joaat("PEDEXPRESS_LOWER_LIP_THICKNESS"):
			return 51;
	
		case joaat("PEDEXPRESS_SHOULDERS_WIDTH"):
			return 4;
	
		case joaat("PEDEXPRESS_JAW_HEIGHT"):
			return 26;
	
		case joaat("PEDEXPRESS_CHEST_DEPTH"):
			return 8;
	
		case joaat("PEDEXPRESS_UPPER_LIP_THICKNESS"):
			return 48;
	
		case joaat("PEDEXPRESS_EAR_SIZE"):
			return 19;
	
		case joaat("PEDEXPRESS_NECK_DEPTH"):
			return 1;
	
		case joaat("PEDEXPRESS_EAR_ROTATION"):
			return 20;
	
		default:
		
	}

	return -1;
}

void func_512(int iParam0, BOOL bParam1) // Position - 0x25805 Hash - 0x8F18745F ^0x17ADCD63
{
	Hash hash;
	int num;
	int num2;
	var unk7;

	unk7.f_2 = 5;

	if (bParam1)
		num = -1095364703;
	else
		num = -638521536;

	num2 = num;
	num2.f_1 = 953106857;
	num2.f_2 = 1700442869;
	num2.f_3 = 1;
	num2.f_4 = func_534(iParam0, 1);
	Global_1946054.f_57[iParam0 /*11*/] = { unk7 };
	DATAFILE::_PARSEDDATA_GET_FILE(&num2);

	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, -517941987))
		return;

	Global_1946054.f_57[iParam0 /*11*/].f_8 = hash;
	DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, -958439913);
	Global_1946054.f_57[iParam0 /*11*/] = hash;
	Global_1946054.f_57[iParam0 /*11*/].f_10 = 0;
	DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, 366812837);
	func_736(iParam0, hash, num);
	DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, 576352150);
	func_737(iParam0, hash, num);

	if (DATAFILE::_PARSEDDATA_GET_INT(&hash, &num2, joaat("Priority")))
		Global_1946054.f_57.f_430[hash] = iParam0;

	return;
}

void func_513(BOOL bParam0) // Position - 0x25902 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1946054 = Global_1946054 - Global_1946054 && bParam0;
	return;
}

BOOL func_514(Hash hParam0, int iParam1) // Position - 0x2591A Hash - 0xC4C2E73D ^0x83FF84C9
{
	int num;
	Hash hash;

	hash = hParam0;

	if (!func_738(hash, &num))
		return 0;

	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*iParam1 = 0;
	
		if (func_371(hParam0) != -999503751)
			func_739(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
	
		Global_1946054.f_2657[0] = 0;
		return 1;
	}

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 - 1;
	*iParam1 = *iParam1 - 1;
	Global_1946054.f_2657[num] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;

	if (func_371(hParam0) != -999503751)
		func_739(&(Global_1946054.f_2657.f_26), num, Global_1946054.f_2657.f_19);

	func_373(hParam0, true);
	return 1;
}

void func_515() // Position - 0x25A00 Hash - 0x859243 ^0xC9B77C68
{
	int i;

	if (func_115() == -1)
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

int func_516(int iParam0) // Position - 0x25B36 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_740(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

Hash func_517(Hash hParam0, int iParam1) // Position - 0x25B77 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_332(hParam0, 0))
		return 0;

	num = func_521(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_547(hParam0, 1399091007))
	{
		func_741(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

void func_518(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x25BF1 Hash - 0xB6CF78C ^0x845E9244
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

	if (!func_332(hParam0, 0))
		return;

	if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;

	if (iParam1 == 0)
		return;

	if (!func_742())
	{
		func_743(hParam0, iParam1, bParam2, bParam4);
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
		else if (bParam2 && func_616(hParam0, 2097152))
			TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	
		flag = true;
	}

	num2 = func_521(hParam0);
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
	else if (!func_745(hParam0, &str, num4, num3, 0, joaat("ui_itemviewer")))
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

	str3 = func_746(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, func_655(hParam0)), num), num5);

	if (iParam1 == 1 || func_547(hParam0, 1443104131) || hParam0 == joaat("consumable_cigarette_box") || hParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED") || hParam0 == joaat("consumable_cigarette_box_cheap") || hParam0 == joaat("consumable_cigarette_box_cheap_used"))
		str3 = MISC::VAR_STRING(0, func_655(hParam0));

	func_747(str3, str.f_1, MISC::GET_HASH_KEY(str), num6, num5, "Transaction_Feed_Sounds", str2, 0, true);
	return;
}

struct<2> func_519(Hash hParam0) // Position - 0x25E46 Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_332(hParam0, 0))
		return unk;

	if (func_547(hParam0, -305066475))
		if (func_115() == -1)
			if (func_547(hParam0, -537818634))
				return func_748(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_748(joaat("deadeye_items"));
	else if (func_547(hParam0, -537818634))
		return func_748(joaat("medicine_items"));

	if (func_547(hParam0, 2084895747))
		return func_748(joaat("lock_breaker_items"));

	return unk3;
}

int func_520(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x25EDA Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_332(hParam0, 0))
		return 0;

	num = func_521(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_517(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_749(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_571(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

int func_521(Hash hParam0) // Position - 0x25F5C Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_332(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_522(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x25F87 Hash - 0x17E58D7C ^0xB0311DE1
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

	unk = { func_564(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam2)
		func_751(&unk, func_750(false));

	if (!func_565(&unk, &num, &num2, false))
		return false;

	unk19.f_9 = joaat("SLOTID_NONE");

	for (i = 0; i < num2; i = i + 1)
	{
		if (num3 >= iParam1)
			break;
	
		if (!func_673(&unk19, i, num, num2))
		{
		}
		else
		{
			unk33.f_4 = unk19.f_9;
			unk33 = { unk19.f_5 };
		
			if (func_677(hParam0, &unk19, &unk33, 1, hParam3, 0, false))
				num3 = num3 + 1;
		}
	}

	func_566(num);
	num3 < iParam1;
	return true;
}

BOOL func_523(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x26052 Hash - 0x1BAC1FBB ^0xC7130937
{
	var unk;
	var unk6;

	if (!func_332(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_526(hParam0, bParam4, true) };

	if (unk.f_4 == joaat("SLOTID_SATCHEL"))
		return func_752(hParam0, iParam1, hParam2, bParam3, bParam4);

	unk6 = { func_569(hParam0, unk, unk.f_4, bParam4) };
	return func_677(hParam0, &unk6, &unk, iParam1, hParam2, bParam3, bParam4);
}

BOOL func_524(BOOL bParam0) // Position - 0x260C3 Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_115() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_571(bParam0));
}

void func_525(Hash hParam0, int iParam1) // Position - 0x260E1 Hash - 0x54327D01 ^0xB51B9F1D
{
	if (!Global_1901328.f_94)
	{
		if (func_547(hParam0, 606799272))
			func_753(hParam0, iParam1);
	
		if (func_547(hParam0, -1112814642) && func_547(hParam0, -1697809989))
			func_637(hParam0, iParam1, true, false);
	}

	return;
}

struct<5> func_526(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x26134 Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_754(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_521(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_757(hParam0, -1823706425))
			{
				unk = { func_569(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_757(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_569(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
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
			unk = { func_756(bParam1) };
		
			switch (func_371(hParam0))
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
				unk = { func_569(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_750(bParam1) };
		
			if (bParam2 && func_755(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_676(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_676(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_674(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_758(unk, &unk28, bParam1, false))
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

int func_527(var uParam0) // Position - 0x263F1 Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_534(i, 1);
	}

	return -358215195;
}

BOOL func_528(BOOL bParam0, eStackSize essParam1) // Position - 0x2642C Hash - 0xAAB46313 ^0xDBD30AAB
{
	if (func_115() == -1)
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

void func_529(BOOL bParam0, eStackSize essParam1, int iParam2) // Position - 0x264A9 Hash - 0xF42C5015 ^0xB4748E02
{
	if (func_115() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		if (essParam1 > -1 && essParam1 < 5)
			Global_26796.f_26[essParam1 /*120*/] = Global_26796.f_26[essParam1 /*120*/] - Global_26796.f_26[essParam1 /*120*/] && bParam0;
	
		return;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	if (essParam1 > -1 && essParam1 < 5)
		Global_36638.f_45.f_350.f_26[essParam1 /*120*/] = Global_36638.f_45.f_350.f_26[essParam1 /*120*/] - Global_36638.f_45.f_350.f_26[essParam1 /*120*/] && bParam0;

	return;
}

Hash func_530(eStackSize essParam0) // Position - 0x2654A Hash - 0x65327B15 ^0x65327B15
{
	eStackSize stackSize;

	stackSize = essParam0;

	if (stackSize >= 1 && stackSize <= 5)
		return func_359(stackSize);

	return 0;
}

Hash func_531(eStackSize essParam0) // Position - 0x26570 Hash - 0x7B091E14 ^0x2ED2329F
{
	if (essParam0 == -1)
		essParam0 = func_357();

	if (func_115() == -1)
		return Global_26796.f_26[essParam0 /*120*/].f_1;

	return Global_36638.f_45.f_350.f_26[essParam0 /*120*/].f_1;
}

void func_532(BOOL bParam0) // Position - 0x265AA Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

BOOL func_533(Hash hParam0, int iParam1) // Position - 0x265BD Hash - 0x718DD1EF ^0xD9260236
{
	return hParam0->f_2 && iParam1 != false;
}

int func_534(int iParam0, int iParam1) // Position - 0x265CE Hash - 0xE1D12727 ^0xA46110B3
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

BOOL func_535(int iParam0) // Position - 0x2681D Hash - 0xA5488921 ^0xA5488921
{
	switch (iParam0)
	{
		case -1130865351:
			return false;
	
		case -426430150:
			return false;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			if (!func_429(24))
				return false;
		
			return true;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return false;
	
		case 1788623170:
			return false;
	
		default:
		
	}

	return true;
}

void func_536(int iParam0, int iParam1, int iParam2) // Position - 0x26872 Hash - 0x97FCB35C ^0xD834F750
{
	Hash hash;
	int num;
	BOOL flag;
	BOOL flag2;

	flag2 = false;
	flag = func_115() != -1;

	if (func_339() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		flag2 = true;

	hash = func_759(iParam0);

	if (hash != 0)
	{
		num = 5;
	
		if (func_760(Global_1946054.f_1378.f_1[num /*3*/], flag2, hash, flag) != -1)
		{
			Global_1946054.f_1378.f_1[num /*3*/].f_1 = hash;
			Global_1946054.f_2653 = iParam0;
		}
		else if (func_760(Global_1946054.f_1378.f_1[num /*3*/], flag2, func_759(iParam0 + 1), flag) != -1)
		{
			Global_1946054.f_1378.f_1[num /*3*/].f_1 = joaat("base");
			Global_1946054.f_2653 = iParam0;
		}
		else
		{
			Global_1946054.f_1378.f_1[num /*3*/] = func_761(0);
		
			if (hash == -888790689 || hash == -2126063412)
			{
				Global_1946054.f_1378.f_1[num /*3*/].f_1 = 289238755;
				Global_1946054.f_2653 = iParam0;
			}
			else
			{
				Global_1946054.f_1378.f_1[num /*3*/].f_1 = hash;
				Global_1946054.f_2653 = iParam0;
			}
		}
	}

	hash = func_759(iParam1);

	if (hash != 0)
	{
		num = 6;
	
		if (func_760(Global_1946054.f_1378.f_1[num /*3*/], flag2, hash, flag) != -1)
		{
			Global_1946054.f_1378.f_1[num /*3*/].f_1 = hash;
			Global_1946054.f_2654 = iParam1;
		}
		else if (func_760(Global_1946054.f_1378.f_1[num /*3*/], flag2, func_759(iParam1 + 1), flag) != -1)
		{
			Global_1946054.f_1378.f_1[num /*3*/].f_1 = joaat("base");
			Global_1946054.f_2654 = iParam1;
		}
		else
		{
			Global_1946054.f_1378.f_1[num /*3*/] = func_761(1);
		
			if (hash == -888790689 || hash == -2126063412)
			{
				Global_1946054.f_1378.f_1[num /*3*/].f_1 = 289238755;
				Global_1946054.f_2654 = iParam1;
			}
			else
			{
				Global_1946054.f_1378.f_1[num /*3*/].f_1 = hash;
				Global_1946054.f_2654 = iParam1;
			}
		}
	}

	hash = func_759(iParam2);

	if (hash != 0)
	{
		num = 7;
	
		if (func_760(Global_1946054.f_1378.f_1[num /*3*/], flag2, hash, flag) != -1)
		{
			Global_1946054.f_1378.f_1[num /*3*/].f_1 = hash;
			Global_1946054.f_2655 = iParam2;
		}
		else if (func_760(Global_1946054.f_1378.f_1[num /*3*/], flag2, func_759(iParam2 + 1), flag) != -1)
		{
			Global_1946054.f_1378.f_1[num /*3*/].f_1 = joaat("base");
			Global_1946054.f_2655 = iParam2;
		}
		else
		{
			Global_1946054.f_1378.f_1[num /*3*/] = func_761(2);
		
			if (hash == -888790689 || hash == -2126063412)
			{
				Global_1946054.f_1378.f_1[num /*3*/].f_1 = 289238755;
				Global_1946054.f_2655 = iParam2;
			}
			else
			{
				Global_1946054.f_1378.f_1[num /*3*/].f_1 = hash;
				Global_1946054.f_2655 = iParam2;
			}
		}
	}

	return;
}

void func_537(int iParam0) // Position - 0x26B61 Hash - 0x20214C72 ^0x20214C72
{
	func_762(&(Global_1946054.f_1378), iParam0);
	return;
}

BOOL func_538(int iParam0, int iParam1) // Position - 0x26B76 Hash - 0xECB143B0 ^0x61AB85CB
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 && iParam1 != false;
}

BOOL func_539(int iParam0, int iParam1) // Position - 0x26B8F Hash - 0x5EDC7379 ^0x87AAB49F
{
	return Global_1946054.f_57[func_338(iParam0, 1) /*11*/].f_10 && iParam1 != false;
}

void func_540(int iParam0, int iParam1, int iParam2) // Position - 0x26BAD Hash - 0x8A858A95 ^0xC4492E92
{
	Global_1946054.f_57[func_338(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_338(iParam0, 1) /*11*/].f_10 - Global_1946054.f_57[func_338(iParam0, 1) /*11*/].f_10 && iParam1;
	return;
}

void func_541(int iParam0, int iParam1, int iParam2) // Position - 0x26BEC Hash - 0x10354A04 ^0xEB1297F4
{
	Global_1946054.f_57[func_338(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_338(iParam0, 1) /*11*/].f_10 || iParam1;
	return;
}

void func_542(Any* panParam0, int iParam1, Hash hParam2, int iParam3, int iParam4, int iParam5) // Position - 0x26C19 Hash - 0x2E9AB941 ^0x44CE1BA8
{
	*panParam0 = iParam1;
	panParam0->f_1 = hParam2;
	panParam0->f_2 = iParam3;
	panParam0->f_3 = iParam4;
	panParam0->f_4 = iParam5;
	panParam0->f_6 = 0;
	panParam0->f_5 = 0;
	return;
}

void func_543(int iParam0, int iParam1) // Position - 0x26C48 Hash - 0x2AD6C09E ^0x2AD6C09E
{
	func_763(&(Global_1946054.f_2589), iParam0, iParam1);
	return;
}

BOOL func_544(int iParam0) // Position - 0x26C5F Hash - 0xEB793C30 ^0xF0C7C18C
{
	if (iParam0 == -358215195)
		return false;

	return Global_1946054.f_1497.f_1[func_338(iParam0, 1) /*3*/] != Global_1946054.f_57[func_338(iParam0, 1) /*11*/];
}

void func_545(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x26C97 Hash - 0xE34B9CEC ^0xAFBB60FB
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

	if (uParam0->f_1[num4 /*3*/].f_1 == 1216705912 || uParam0->f_1[num4 /*3*/].f_1 == 654181853)
	{
		if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
		{
			uParam0->f_1[num4 /*3*/].f_1 = 1334603721;
		}
		else
		{
			uParam0->f_1[num4 /*3*/].f_1 = -1539589426;
			uParam0->f_1[num2 /*3*/].f_1 = joaat("base");
		}
	
		if (bParam2)
			func_543(num2, num);
	
		if (bParam1)
			func_543(num4, num);
	}

	if (uParam0->f_1[num3 /*3*/].f_1 == -1333118809 || uParam0->f_1[num3 /*3*/].f_1 == joaat("Custom"))
	{
		uParam0->f_1[num3 /*3*/].f_1 = joaat("base");
	
		if (bParam3)
			func_543(num3, num);
	}

	return;
}

BOOL func_546(Hash hParam0) // Position - 0x26D83 Hash - 0xDEBEF6D4 ^0xDEBEF6D4
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

BOOL func_547(Hash hParam0, Hash hParam1) // Position - 0x26DC6 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

void func_548(Hash hParam0, int iParam1, eStackSize essParam2) // Position - 0x26DF7 Hash - 0x7711D950 ^0x19070BC5
{
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_549() // Position - 0x26E61 Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1378 = Global_1946054.f_1497;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1378.f_1[i /*3*/] = { Global_1946054.f_1497.f_1[i /*3*/] };
	}

	return;
}

BOOL func_550(var uParam0, var uParam1, Hash hParam2, eStackSize essParam3, BOOL bParam4, int iParam5) // Position - 0x26EA8 Hash - 0x27046CB6 ^0xE856FDF2
{
	int num;

	if (!func_764(uParam0, essParam3, hParam2) && !func_100(uParam0, hParam2, uParam1, false, bParam4, false, 0))
		return false;

	num = 10;

	if (func_765(32768))
		if (!*uParam1 || *uParam1 && uParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
			func_766(1108822547);
		else
			func_767(1108822547);

	func_768(uParam0, false, 0);
	func_362(iParam5);
	return true;
}

int func_551(Ped pedParam0, Hash hParam1, Hash hParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x26F32 Hash - 0x2846038F ^0xC59C0BB0
{
	int num;
	BOOL flag;

	num = func_338(hParam2, 1);
	flag = false;

	if (num < 0 || num >= 39)
		return 0;

	if (func_339() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		flag = true;

	if (!bParam4)
		func_549();

	if (hParam1 != joaat("base") && func_760(Global_1946054.f_1378.f_1[num /*3*/], flag, hParam1, func_115() != -1) == -1)
		return 0;

	if (bParam3)
	{
		Global_1946054.f_2456[num /*2*/] = 0;
		Global_1946054.f_2456[num /*2*/].f_1 = 0;
	}

	Global_1946054.f_1378.f_1[num /*3*/].f_1 = hParam1;

	if (bParam5)
		if (PED::IS_PED_A_PLAYER(pedParam0))
			func_552(16, hParam2, 0, 0, false);
		else
			func_552(16, hParam2, 1, pedParam0, false);

	func_362(1);
	return 1;
}

void func_552(int iParam0, Hash hParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0x27004 Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_532(16384);

	num = iParam0;
	num.f_1 = hParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_769(num);
	return;
}

void func_553(int iParam0, int iParam1, BOOL bParam2) // Position - 0x27036 Hash - 0x1B9F85CC ^0x1B9F85CC
{
	int num;
	int num2;
	BOOL flag;

	if (!func_770(iParam0))
		return;

	if (!func_771(iParam1))
		return;

	if (Global_40.f_7731[iParam0 /*5*/] == iParam1)
		return;

	Global_40.f_7731[iParam0 /*5*/] = iParam1;

	if (!bParam2)
	{
		flag = Global_40.f_7731[iParam0 /*5*/] < 7 && func_772(iParam0);
		Global_40.f_7731[iParam0 /*5*/].f_3 = func_457();
		func_773(iParam0, &num, &num2, flag);
		func_458(&(Global_40.f_7731[iParam0 /*5*/].f_3), 0, 0, num2, num, 0, 0, false);
	}

	return;
}

void func_554() // Position - 0x270CA Hash - 0xDDCF102 ^0x9A75D6F4
{
	int num;
	int num2;
	int num3;
	int num4;
	eStackSize i;

	num = 5;
	num2 = 6;
	num3 = 7;
	num4 = 0;

	if (func_115() == -1)
	{
		for (i = 0; i < 5; i = i + 1)
		{
			func_342(&Global_1946054.f_1497.f_1[num /*3*/], num, i);
			func_342(&Global_1946054.f_1497.f_1[num2 /*3*/], num2, i);
			func_342(&Global_1946054.f_1497.f_1[num3 /*3*/], num3, i);
			func_342(&Global_1946054.f_1497.f_1[num4 /*3*/], num4, i);
		}
	
		return;
	}

	for (i = 0; i < 5; i = i + 1)
	{
		func_548(&Global_1946054.f_1497.f_1[num /*3*/], num, i);
		func_548(&Global_1946054.f_1497.f_1[num2 /*3*/], num2, i);
		func_548(&Global_1946054.f_1497.f_1[num3 /*3*/], num3, i);
		func_548(&Global_1946054.f_1497.f_1[num4 /*3*/], num4, i);
	}

	return;
}

void func_555() // Position - 0x271B5 Hash - 0x6E7B5032 ^0xE8448D96
{
	Hash value;

	value = func_457();
	func_458(&value, 0, 0, 0, 2, 0, 0, false);

	if (func_774(0) <= 1)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "chinShort", value);
	
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "chinLong"))
			DECORATOR::DECOR_REMOVE(Global_35, "chinLong");
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "chinShort"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "chinShort");
	}

	if (func_774(1) <= 1)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "chopsShort", value);
	
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "chopsLong"))
			DECORATOR::DECOR_REMOVE(Global_35, "chopsLong");
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "chopsShort"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "chopsShort");
	}

	if (func_774(2) <= 1)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "stacheShort", value);
	
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "stacheLong"))
			DECORATOR::DECOR_REMOVE(Global_35, "stacheLong");
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "stacheShort"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "stacheShort");
	}

	return;
}

BOOL func_556(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x272BA Hash - 0x5BE0E7EF ^0xB7318963
{
	var unk;
	int num;
	int i;

	func_549();

	if (iParam2 == 39)
	{
		unk = { func_526(hParam0, true, false) };
		iParam2 = func_338(func_527(unk.f_4), 1);
	}

	if (iParam2 < 0 || iParam2 >= 39)
		return false;

	if (func_547(hParam0, 866047851) && func_775(&(Global_1946054.f_1378)) >= 2)
		return false;

	if (func_765(32768) && iParam2 == 10 && hParam0 != Global_1946054.f_57[iParam2 /*11*/])
		func_766(func_534(iParam2, 1));

	num = 0;

	if (bParam4)
		num = 3;

	func_776(iParam2);
	func_543(iParam2, num);

	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_356(&Global_1946054.f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_356(&Global_1946054.f_1497.f_1[iParam2 /*3*/], 4, 6);
	}

	func_355(&(Global_1946054.f_1378), hParam0, iParam2, bParam4, true);

	if (hParam1 == 0)
		hParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;

	Global_1946054.f_1378.f_1[iParam2 /*3*/] = hParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_777(hParam0, iParam2, hParam1, func_115() != -1);

	if (bParam4)
		func_768(&(Global_1946054.f_1378), true, 3);
	else
		func_768(&(Global_1946054.f_1378), true, 0);

	if (bParam3)
	{
		for (i = 0; i < Global_1946054.f_2589; i = i + 1)
		{
			if (Global_1946054.f_2589.f_2[i /*2*/] >= 0 && Global_1946054.f_2589.f_2[i /*2*/] < 39)
			{
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/] = 0;
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/].f_1 = 0;
				func_540(func_534(Global_1946054.f_2589.f_2[i /*2*/], 1), 1, 6);
			}
		}
	}

	return true;
}

BOOL func_557() // Position - 0x274C7 Hash - 0xB6A628E2 ^0xC1A3BB0C
{
	return 1 == Global_40.f_7748.f_3;
}

BOOL func_558(Hash hParam0) // Position - 0x274D9 Hash - 0x5000025C ^0x5000025C
{
	switch (hParam0)
	{
		case -2017785881:
		case -1900633994:
		case -1511041621:
		case -1471756535:
		case -1147723761:
		case -1051664629:
		case -986108061:
		case -929316746:
		case -827216318:
		case -736147717:
		case -245303732:
		case -193909113:
		case 282876023:
		case 602337354:
		case 963009459:
		case 1012091683:
		case 1334801974:
		case 1471627791:
			return true;
	
		default:
		
	}

	return false;
}

Hash func_559(Hash hParam0) // Position - 0x2755A Hash - 0xB8EC44B7 ^0x5F6A1FBE
{
	switch (hParam0)
	{
		case -2017785881:
			return -674783297;
	
		case -1900633994:
			return -499492817;
	
		case -1511041621:
			return -1392593303;
	
		case -1471756535:
			return 862555979;
	
		case -1147723761:
			return 1380556716;
	
		case -1051664629:
			return joaat("CLOTHING_ITEM_HAIR_SWEPT_BACK");
	
		case -986108061:
			return 1156231582;
	
		case -929316746:
			return 1165676701;
	
		case -827216318:
			return 279124309;
	
		case -736147717:
			return 1612093252;
	
		case -245303732:
			return 530132198;
	
		case -193909113:
			return -2091943191;
	
		case 282876023:
			return 1279519416;
	
		case 602337354:
			return -1189021969;
	
		case 963009459:
			return -1140711191;
	
		case 1012091683:
			return -814448122;
	
		case 1334801974:
			return 933586678;
	
		case 1471627791:
			return -2120294484;
	
		default:
		
	}

	return 0;
}

void func_560() // Position - 0x27667 Hash - 0x75C135FB ^0xB11C51ED
{
	int num;
	eStackSize i;

	num = 1;

	if (func_115() == -1)
	{
		for (i = 0; i < 5; i = i + 1)
		{
			func_342(&Global_1946054.f_1497.f_1[num /*3*/], num, i);
		}
	
		return;
	}

	for (i = 0; i < 5; i = i + 1)
	{
		func_548(&Global_1946054.f_1497.f_1[num /*3*/], num, i);
	}

	return;
}

Hash func_561() // Position - 0x276CB Hash - 0xB7A5BE74 ^0xFCB5AE63
{
	return Global_1946054.f_1497.f_1[1 /*3*/];
}

void func_562(int iParam0, BOOL bParam1) // Position - 0x276DF Hash - 0x8F59A605 ^0x3B6FDB4
{
	int num;
	int num2;
	BOOL flag;

	if (!func_778(iParam0))
		return;

	if (Global_40.f_7748.f_1 == iParam0)
		return;

	Global_40.f_7748.f_1 = iParam0;

	if (!bParam1)
	{
		Global_40.f_7748.f_5 = func_457();
		flag = Global_40.f_7748.f_1 < 9 && func_779();
		func_780(Global_40.f_7748.f_1, &num, &num2, flag);
		func_458(&(Global_40.f_7748.f_5), 0, 0, num2, num, 0, 0, false);
	}

	return;
}

void func_563() // Position - 0x2775D Hash - 0xFF7828F ^0x5AE1347A
{
	Hash value;

	if (func_781() <= 3)
	{
		value = func_457();
		func_458(&value, 0, 0, 0, 2, 0, 0, false);
		DECORATOR::DECOR_SET_INT(Global_35, "hairShort", value);
	
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "hairLong"))
			DECORATOR::DECOR_REMOVE(Global_35, "hairLong");
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "hairShort"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "hairShort");
	}

	return;
}

struct<18> func_564(Hash hParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x277C5 Hash - 0x84700F53 ^0xB9E7AA96
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

	if (hParam1 != 0 && hParam1 != joaat("SLOTID_NONE"))
		hash.f_1 = hParam1;

	if (iParam2 != 0 && iParam2 != joaat("SLOTID_NONE"))
		hash.f_2 = iParam2;

	if (iParam3 != 0 && iParam3 != joaat("SLOTID_NONE"))
		hash.f_3 = iParam3;

	if (iParam4 != 0)
		hash.f_4 = iParam4;

	if (iParam5 != 0)
		hash.f_5 = iParam5;

	return hash;
}

BOOL func_565(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x27897 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_571(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_566(int iParam0) // Position - 0x278BC Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

void func_567(int iParam0, int iParam1) // Position - 0x278DD Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_568(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x278F6 Hash - 0x45C7B33 ^0xF6637CED
{
	if (PED::_IS_META_PED_ASSET_VALID(uParam0->f_3.f_1))
		func_782(uParam0);

	if (iParam2 == -1)
	{
		uParam0->f_1 = func_338(func_337(hParam1), 1);
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
		func_783(uParam0);

	return;
}

struct<4> func_569(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x27952 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_332(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_571(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

int func_570(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x27983 Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_332(hParam0, 0))
		return 0;

	guid = { func_569(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_571(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

int func_571(BOOL bParam0) // Position - 0x279CB Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_115() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_572(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x27A0C Hash - 0x77ECC81C ^0x6B9E3122
{
	if (bParam2)
		if (!func_114(iParam0))
			return false;

	if (Global_1572887.f_12 != -1)
		return Global_36638[iParam0] && bParam1 != false;

	return Global_40.f_9274[iParam0] && bParam1 != false;
}

BOOL func_573() // Position - 0x27A4F Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_574(int iParam0) // Position - 0x27AA2 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_289(iParam0))
		return -1;

	return func_784(func_449(iParam0));
}

BOOL func_575(int iParam0, int iParam1) // Position - 0x27AC2 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_576(var uParam0, float fParam1) // Position - 0x27AD1 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_785() - fParam1;
	func_786(uParam0, 1);
	func_787(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

Hash func_577(Hash hParam0) // Position - 0x27AF7 Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

void func_578(Hash hParam0) // Position - 0x27B01 Hash - 0xEDF7DA1B ^0xE1C109C6
{
	var unk;
	BOOL flag;
	BOOL flag2;
	var unk17;
	int num;
	eStackSize i;
	int j;
	int k;
	int num2;
	var unk33;
	BOOL flag3;

	func_335(hParam0, 1, true, -142743235, true);
	unk = 15;
	unk17 = 15;
	num = func_788(hParam0, &unk17);
	func_789(hParam0, &unk17, &num, true);

	if (func_339() == -2125499975)
		num2 = 2020890174;
	else
		num2 = 1105329772;

	func_790(hParam0, &(Global_26796.f_627.f_121.f_20));
	func_333(hParam0, true, true);

	for (j = 0; j < num; j = j + 1)
	{
		func_335(unk17[j], 1, true, -142743235, true);
	
		switch (func_371(unk17[j]))
		{
			case -2061583405:
				func_790(unk17[j], &(Global_26796.f_627.f_121.f_21));
				break;
		
			case -1719060085:
				func_790(unk17[j], &(Global_26796.f_627.f_121.f_24));
				break;
		
			case -525676072:
				func_790(unk17[j], &(Global_26796.f_627.f_121.f_22));
				break;
		
			case -413129408:
				func_790(unk17[j], &(Global_26796.f_627.f_121.f_25));
				break;
		
			case 81053684:
				func_790(unk17[j], &(Global_26796.f_627.f_121.f_23));
				break;
		}
	
		func_333(unk17[j], true, true);
		unk[j] = func_338(func_337(unk17[j]), 1);
	}

	func_791(&(Global_1946054.f_1616));
	func_100(&(Global_1946054.f_1616), num2, &unk33, true, false, false, 0);
	Global_1946054.f_1616.f_1[8 /*3*/] = { func_340(8, 0) };
	Global_1946054.f_1616.f_1[9 /*3*/] = { func_340(9, 0) };
	Global_1946054.f_1616.f_1[0 /*3*/] = { func_340(0, 0) };
	Global_1946054.f_1616.f_1[2 /*3*/] = { func_340(2, 0) };
	Global_1946054.f_1616.f_1[3 /*3*/] = { func_340(3, 0) };
	Global_1946054.f_1616.f_1[1 /*3*/] = { func_340(1, 0) };
	Global_1946054.f_1616.f_1[5 /*3*/] = { func_340(5, 0) };
	Global_1946054.f_1616.f_1[6 /*3*/] = { func_340(6, 0) };
	Global_1946054.f_1616.f_1[7 /*3*/] = { func_340(7, 0) };

	for (i = 0; i < 5; i = i + 1)
	{
		for (j = 0; j < num; j = j + 1)
		{
			if (unk17[j] == func_341(unk[j], i))
			{
				func_333(func_531(i), true, true);
				func_792(i);
			
				if (i == 0)
				{
					flag2 = 1;
				
					for (k = 0; k < 39; k = k + 1)
					{
						if (!func_533(&Global_1946054.f_1616.f_1[k /*3*/], 2))
						{
						}
						else
						{
							func_342(&Global_1946054.f_1616.f_1[k /*3*/], k, 0);
							Global_1946054.f_1497.f_1[k /*3*/] = { Global_1946054.f_1616.f_1[k /*3*/] };
						}
					}
				}
			
				break;
			}
		}
	}

	for (j = 0; j < num; j = j + 1)
	{
		if (unk17[j] == Global_1946054.f_1497.f_1[unk[j] /*3*/])
		{
			flag = true;
			break;
		}
	}

	if (flag || flag2 || Global_40.f_7729 == func_793(hParam0))
	{
		if (!func_92(8))
		{
			if (func_339() == -2125499975)
			{
				if (flag2)
				{
					func_100(&(Global_1946054.f_1616), 1661121390, &unk33, false, true, false, -2125499975);
					Global_1946054.f_1616 = 166243423;
					func_363(&(Global_1946054.f_1616), 0);
				
					if (Global_40.f_7729 == 0)
						func_364(2, 0, 6);
				}
			
				if (flag || Global_40.f_7729 == func_793(hParam0))
					Global_1905941 = 6;
			}
			else
			{
				if (flag2)
				{
					func_100(&(Global_1946054.f_1616), -361635024, &unk33, false, true, false, 1160113249);
					Global_1946054.f_1616 = 166243423;
					func_363(&(Global_1946054.f_1616), 0);
				
					if (Global_40.f_7729 == 0)
						func_364(2, 0, 6);
				}
			
				if (flag || Global_40.f_7729 == func_793(hParam0))
					Global_1905941 = 62;
			}
		
			if (flag || Global_40.f_7729 == func_793(hParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				{
					func_794(Global_40.f_7729, 4096);
					func_503(Global_1905941, 4096);
					Global_40.f_7729 = Global_1905941;
				}
				else
				{
					func_795(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, true, false, 0);
				}
			}
		}
	}

	flag3 = false;

	for (j = 0; j < num; j = j + 1)
	{
		if (unk17[j] == Global_26796.f_627.f_1.f_1.f_1[unk[j] /*3*/])
		{
			flag3 = true;
			break;
		}
	}

	if (!flag3)
		return;

	func_100(&(Global_1946054.f_1616), 1661121390, &unk33, false, true, false, -2125499975);
	func_100(&(Global_1946054.f_1616), 2020890174, &unk33, true, false, false, -2125499975);
	Global_1946054.f_1616.f_1[8 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[8 /*3*/] };
	Global_1946054.f_1616.f_1[9 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[9 /*3*/] };
	Global_1946054.f_1616.f_1[0 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[0 /*3*/] };
	Global_1946054.f_1616.f_1[2 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[2 /*3*/] };
	Global_1946054.f_1616.f_1[3 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[3 /*3*/] };
	Global_1946054.f_1616.f_1[1 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[1 /*3*/] };
	Global_1946054.f_1616.f_1[5 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[5 /*3*/] };
	Global_1946054.f_1616.f_1[6 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[6 /*3*/] };
	Global_1946054.f_1616.f_1[7 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[7 /*3*/] };
	Global_26796.f_627 = Global_1946054.f_1616;
	Global_26796.f_627.f_1.f_1 = Global_1946054.f_1616;

	for (j = 0; j < 39; j = j + 1)
	{
		Global_26796.f_627.f_1.f_1.f_1[j /*3*/] = { Global_1946054.f_1616.f_1[j /*3*/] };
	}

	return;
}

struct<4> func_579() // Position - 0x28163 Hash - 0xF51D0C3D ^0xA1188D4B
{
	var unk;

	unk = { func_754(false) };
	return func_569(856287005, unk, -218846335, false);
}

int func_580(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x28187 Hash - 0x6D8F94CF ^0x1BC2C8AF
{
	int i;
	var data;
	Hash outBundle;
	var unk5;
	int bundleItemCount;
	var unk9;

	if (iParam0 == 0)
		return 0;

	data = 1;
	bundleItemCount = ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &data);
	unk9 = { uParam1 };

	for (i = 0; i < bundleItemCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &data, i, &outBundle))
		{
			if (func_332(outBundle, 0))
			{
				unk9.f_4 = outBundle.f_1;
			
				if (func_570(outBundle, uParam1, unk9.f_4, false) > 0)
				{
				}
				else
				{
					func_796(&unk5);
				
					if (func_677(outBundle, &unk5, &unk9, -1, -142743235, false, false))
					{
					}
				}
			}
		}
	}

	return 1;
}

struct<6> func_581() // Position - 0x28219 Hash - 0x98D1204F ^0xBF85383B
{
	var unk;
	var unk7;
	var unk8;
	var unk9;
	var unk10;
	var unk11;
	var unk12;

	if (func_797(joaat("SLOTID_HORSE_BEDROLL"), &unk7))
		unk.f_4 = unk7;

	if (func_797(joaat("SLOTID_HORSE_BLANKET"), &unk8))
		unk = unk8;

	if (func_797(joaat("SLOTID_HORSE_HORN"), &unk9))
		unk.f_2 = unk9;

	if (func_797(joaat("SLOTID_HORSE_SADDLEBAG"), &unk10))
		unk.f_5 = unk10;

	if (func_797(joaat("SLOTID_HORSE_STIRRUP"), &unk11))
		unk.f_3 = unk11;

	if (func_797(joaat("SLOTID_HORSE_SADDLE"), &unk12))
		unk.f_1 = unk12;

	return unk;
}

int _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x2829B Hash - 0xD73B9827 ^0x2D8CE86B
{
	return uParam0->f_1;
}

void func_583(var uParam0) // Position - 0x282A7 Hash - 0xA17153D4 ^0xA3A2AA75
{
	func_798(uParam0);
	func_800(uParam0, func_799(-1346384396));
	func_801(uParam0, func_799(-712836614));
	func_802(uParam0, func_799(-1629133289));
	func_803(uParam0, func_799(1302066700));
	func_804(uParam0, func_799(599669344));
	func_805(uParam0, func_799(-1555511632));
	return;
}

void func_584(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x2830F Hash - 0x80C2C490 ^0xE2D89887
{
	!func_806(hParam0.f_4, true);
	!func_806(hParam0, true);
	!func_806(hParam0.f_2, true);
	!func_806(hParam0.f_5, true);
	!func_806(hParam0.f_3, true);
	!func_806(hParam0.f_1, true);
	return;
}

int func_585(var uParam0, var uParam1, var uParam2) // Position - 0x28363 Hash - 0xEEC53156 ^0xA03BD067
{
	BOOL flag;

	*uParam0 = 0;
	*uParam1 = 0;
	*uParam2 = 0;

	if (func_481())
	{
		if (func_807())
		{
			flag = false;
		
			if (!func_94(Global_1835011[15 /*74*/].f_1, true) && !func_429(42))
				flag = true;
		
			if (flag)
			{
				*uParam0 = func_808();
				*uParam1 = func_809();
				*uParam2 = func_810();
				return 1;
			}
			else
			{
				*uParam0 = func_811();
				*uParam1 = func_812();
				*uParam2 = func_813();
				return 1;
			}
		}
		else if (func_814())
		{
			if (!func_94(Global_1835011[60 /*74*/].f_1, true))
			{
				*uParam0 = func_815();
				*uParam1 = func_816();
				*uParam2 = func_817();
				return 1;
			}
			else
			{
				*uParam0 = func_818();
				*uParam1 = func_819();
				*uParam2 = func_820();
				return 1;
			}
		}
	}
	else if (func_807())
	{
		*uParam0 = func_821();
		*uParam1 = func_822();
		*uParam2 = func_823();
		return 1;
	}
	else if (func_814())
	{
		*uParam0 = func_824();
		*uParam1 = func_825();
		*uParam2 = func_826();
		return 1;
	}

	return 0;
}

int func_586(int iParam0) // Position - 0x2847D Hash - 0xACA56E21 ^0xEE9738B3
{
	iParam0 = func_827(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_8;
}

void func_587(int iParam0, int iParam1) // Position - 0x284B0 Hash - 0x42DB579F ^0x4C67AD4
{
	iParam0 = func_827(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = iParam1;
	return;
}

void func_588(int iParam0, int iParam1) // Position - 0x284E3 Hash - 0x42DB579F ^0xF1492904
{
	iParam0 = func_827(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = iParam1;
	return;
}

void func_589(int iParam0, int iParam1) // Position - 0x28516 Hash - 0x42DB579F ^0x8D4EBF0
{
	iParam0 = func_827(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = iParam1;
	return;
}

void func_590(int iParam0, int iParam1) // Position - 0x28549 Hash - 0xA8C13CC2 ^0x5A312A36
{
	iParam0 = func_827(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_434 = iParam1;
	return;
}

BOOL func_591(int iParam0) // Position - 0x2857D Hash - 0xDEA08A5F ^0xDEA08A5F
{
	Hash hash;
	var unk;

	hash = func_828(iParam0);

	if (hash == 0)
		return false;

	unk = { func_754(false) };

	if (func_829(&unk, hash, false) > 0)
		return true;

	return false;
}

int func_592(int iParam0) // Position - 0x285B2 Hash - 0x13121903 ^0xB823C4F3
{
	var unk;
	var unk30;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_830(iParam0, &unk))
		return 0;

	unk30 = { unk.f_5 };
	unk30.f_4 = unk.f_9;

	if (!func_677(unk.f_4, &unk, &unk30, -1, -142743235, false, false))
		return 0;

	return 1;
}

Hash func_593(int iParam0) // Position - 0x28608 Hash - 0xCBA0DE6B ^0x47A29D9A
{
	if (iParam0 == joaat("a_c_horse_mp_mangy_backup"))
		return joaat("HORSE_BREED_MANGY_BACKUP");

	switch (iParam0)
	{
		case joaat("a_c_horse_john_endlesssummer"):
			return 887669186;
	
		case joaat("a_c_horse_ardennes_irongreyroan"):
			return joaat("HORSE_BREED_ARDENNES_IRONGREYROAN");
	
		case joaat("a_c_horse_arabian_black"):
			return joaat("HORSE_BREED_ARABIAN_BLACK");
	
		case joaat("a_c_horse_americanpaint_greyovero"):
			return joaat("HORSE_BREED_AMERICANPAINT_GREYOVERO");
	
		case joaat("a_c_horse_thoroughbred_bloodbay"):
			return joaat("HORSE_BREED_THOROUGHBRED_BLOODBAY");
	
		case joaat("a_c_horse_hungarianhalfbred_liverchestnut"):
			return -1754375530;
	
		case joaat("a_c_horse_suffolkpunch_redchestnut"):
			return joaat("HORSE_BREED_SUFFOLKPUNCH_REDCHESTNUT");
	
		case joaat("a_c_horse_americanpaint_tobiano"):
			return joaat("HORSE_BREED_AMERICANPAINT_TOBIANO");
	
		case joaat("a_c_horse_tennesseewalker_flaxenroan"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_FLAXENROAN");
	
		case joaat("a_c_horse_turkoman_silver"):
			return joaat("HORSE_BREED_TURKOMAN_SILVER");
	
		case joaat("a_c_horse_suffolkpunch_sorrel"):
			return joaat("HORSE_BREED_SUFFOLKPUNCH_SORREL");
	
		case joaat("a_c_horse_appaloosa_leopardblanket"):
			return joaat("HORSE_BREED_APPALOOSA_LEOPARDBLANKET");
	
		case joaat("a_c_horse_ardennes_bayroan"):
			return joaat("HORSE_BREED_ARDENNES_BAYROAN");
	
		case joaat("a_c_horse_arabian_redchestnut_pc"):
			return joaat("HORSE_BREED_ARABIAN_REDCHESTNUT_PC");
	
		case joaat("a_c_horse_kentuckysaddle_buttermilkbuckskin_pc"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN");
	
		case joaat("a_c_horse_missourifoxtrotter_amberchampagne"):
			return joaat("HORSE_BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE");
	
		case joaat("a_c_horse_kentuckysaddle_chestnutpinto"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_CHESTNUTPINTO");
	
		case joaat("a_c_horse_nokota_whiteroan"):
			return joaat("HORSE_BREED_NOKOTA_WHITEROAN");
	
		case joaat("a_c_horse_americanstandardbred_black"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_BLACK");
	
		case joaat("a_c_horse_mustang_grullodun"):
			return joaat("HORSE_BREED_MUSTANG_GRULLODUN");
	
		case joaat("a_c_horse_missourifoxtrotter_silverdapplepinto"):
			return joaat("HORSE_BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO");
	
		case joaat("a_c_horse_appaloosa_leopard"):
			return joaat("HORSE_BREED_APPALOOSA_LEOPARD");
	
		case joaat("a_c_horse_morgan_liverchestnut_pc"):
			return joaat("HORSE_BREED_MORGAN_LIVERCHESTNUT");
	
		case joaat("a_c_horse_morgan_flaxenchestnut"):
			return joaat("HORSE_BREED_MORGAN_FLAXENCHESTNUT");
	
		case joaat("a_c_horse_appaloosa_brownleopard"):
			return joaat("HORSE_BREED_APPALOOSA_BROWNLEOPARD");
	
		case joaat("a_c_horse_appaloosa_blacksnowflake"):
			return -1692268955;
	
		case joaat("a_c_horse_arabian_white"):
			return joaat("HORSE_BREED_ARABIAN_WHITE");
	
		case joaat("a_c_horse_murfreebrood_mange_02"):
			return -2011111190;
	
		case joaat("a_c_horse_hungarianhalfbred_darkdapplegrey"):
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY");
	
		case joaat("a_c_horse_tennesseewalker_redroan"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_REDROAN");
	
		case joaat("a_c_horse_ardennes_strawberryroan"):
			return joaat("HORSE_BREED_ARDENNES_STRAWBERRYROAN");
	
		case joaat("a_c_horse_murfreebrood_mange_03"):
			return -535752499;
	
		case joaat("a_c_horse_belgian_blondchestnut"):
			return joaat("HORSE_BREED_BELGIAN_BLONDCHESTNUT");
	
		case joaat("a_c_horse_thoroughbred_brindle"):
			return joaat("HORSE_BREED_THOROUGHBRED_BRINDLE");
	
		case joaat("a_c_horse_americanstandardbred_silvertailbuckskin"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN");
	
		case joaat("a_c_horse_americanpaint_overo"):
			return joaat("HORSE_BREED_AMERICANPAINT_OVERO");
	
		case joaat("a_c_horse_andalusian_darkbay"):
			return joaat("HORSE_BREED_ANDALUSIAN_DARKBAY");
	
		case joaat("a_c_horse_missourifoxtrotter_sablechampagne"):
			return -71211764;
	
		case joaat("a_c_horse_arabian_rosegreybay"):
			return joaat("HORSE_BREED_ARABIAN_ROSEGREYBAY");
	
		case joaat("a_c_horse_americanstandardbred_buckskin"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_BUCKSKIN");
	
		case joaat("a_c_horse_kentuckysaddle_black"):
			return joaat("horse_breed_kentuckysaddle_black");
	
		case joaat("a_c_horse_tennesseewalker_dapplebay"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_DAPPLEBAY");
	
		case joaat("a_c_horse_hungarianhalfbred_piebaldtobiano"):
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO");
	
		case joaat("a_c_horse_shire_lightgrey"):
			return joaat("HORSE_BREED_SHIRE_LIGHTGREY");
	
		case joaat("a_c_horse_mustang_tigerstripedbay"):
			return joaat("HORSE_BREED_MUSTANG_TIGERSTRIPEDBAY");
	
		case joaat("a_c_horse_americanstandardbred_palominodapple"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE");
	
		case joaat("a_c_horse_arabian_grey"):
			return 2130706226;
	
		case joaat("a_c_horse_morgan_palomino"):
			return joaat("horse_breed_morgan_palomino");
	
		case joaat("a_c_horse_nokota_reversedappleroan"):
			return joaat("HORSE_BREED_NOKOTA_REVERSEDAPPLEROAN");
	
		case joaat("a_c_horse_tennesseewalker_mahoganybay"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_MAHOGANYBAY");
	
		case joaat("a_c_horse_mustang_goldendun"):
			return -1390353518;
	
		case joaat("a_c_horse_buell_warvets"):
			return -41062704;
	
		case joaat("a_c_horse_appaloosa_fewspotted_pc"):
			return joaat("HORSE_BREED_APPALOOSA_FEWSPOTTED");
	
		case joaat("a_c_horse_dutchwarmblood_chocolateroan"):
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_CHOCOLATEROAN");
	
		case joaat("a_c_horse_andalusian_perlino"):
			return joaat("HORSE_BREED_ANDALUSIAN_PERLINO");
	
		case joaat("a_c_horse_andalusian_rosegray"):
			return joaat("HORSE_BREED_ANDALUSIAN_ROSEGRAY");
	
		case joaat("a_c_horse_shire_ravenblack"):
			return joaat("HORSE_BREED_SHIRE_RAVENBLACK");
	
		case joaat("a_c_horse_dutchwarmblood_sealbrown"):
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_SEALBROWN");
	
		case joaat("a_c_horse_thoroughbred_reversedappleblack"):
			return joaat("HORSE_BREED_THOROUGHBRED_REVERSEDAPPLEBLACK");
	
		case joaat("a_c_horse_murfreebrood_mange_01"):
			return 2102774612;
	
		case joaat("a_c_horse_belgian_mealychestnut"):
			return joaat("HORSE_BREED_BELGIAN_MEALYCHESTNUT");
	
		case joaat("a_c_horse_tennesseewalker_goldpalomino_pc"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_GOLDPALOMINO");
	
		case joaat("a_c_horse_shire_darkbay"):
			return joaat("HORSE_BREED_SHIRE_DARKBAY");
	
		case joaat("a_c_horse_tennesseewalker_blackrabicano"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_BLACKRABICANO");
	
		case joaat("a_c_horse_tennesseewalker_chestnut"):
			return joaat("horse_breed_tennesseewalker_chestnut");
	
		case joaat("a_c_horse_turkoman_darkbay"):
			return joaat("HORSE_BREED_TURKOMAN_DARKBAY");
	
		case joaat("a_c_horse_morgan_bayroan"):
			return joaat("HORSE_BREED_MORGAN_BAYROAN");
	
		case joaat("a_c_horse_arabian_redchestnut"):
			return joaat("HORSE_BREED_ARABIAN_REDCHESTNUT");
	
		case joaat("a_c_horse_arabian_warpedbrindle_pc"):
			return joaat("HORSE_BREED_ARABIAN_WARPEDBRINDLE");
	
		case joaat("a_c_horse_dutchwarmblood_sootybuckskin"):
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN");
	
		case joaat("a_c_horse_kentuckysaddle_silverbay"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_SILVERBAY");
	
		case joaat("a_c_horse_turkoman_gold"):
			return joaat("HORSE_BREED_TURKOMAN_GOLD");
	
		case joaat("a_c_horse_hungarianhalfbred_flaxenchestnut"):
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT");
	
		case joaat("a_c_donkey_01"):
			return joaat("HORSE_DONKEY");
	
		case joaat("a_c_horse_americanpaint_splashedwhite"):
			return joaat("HORSE_BREED_AMERICANPAINT_SPLASHEDWHITE");
	
		case joaat("a_c_horse_thoroughbred_dapplegrey"):
			return joaat("HORSE_BREED_THOROUGHBRED_DAPPLEGREY");
	
		case joaat("a_c_horse_kentuckysaddle_grey"):
			return joaat("horse_breed_kentuckysaddle_grey");
	
		case joaat("a_c_horse_morgan_bay"):
			return joaat("HORSE_BREED_MORGAN_BAY");
	
		case joaat("a_c_horse_mustang_wildbay"):
			return joaat("HORSE_BREED_MUSTANG_WILDBAY");
	
		case joaat("a_c_horse_appaloosa_blanket"):
			return joaat("HORSE_BREED_APPALOOSA_BLANKET");
	
		case joaat("a_c_horse_nokota_blueroan"):
			return joaat("HORSE_BREED_NOKOTA_BLUEROAN");
	
		default:
		
	}

	return 0;
}

int func_594(int iParam0, Hash hParam1) // Position - 0x28A9C Hash - 0x25A74014 ^0x25A74014
{
	Hash hash;
	var unk;
	var unk6;

	if (!func_332(hParam1, 0))
		return 0;

	if (!func_831(hParam1))
		return 0;

	if (func_591(iParam0))
		return 0;

	hash = func_828(iParam0);

	if (hash == 0)
		return 0;

	unk = { func_754(false) };
	unk.f_4 = hash;

	if (!func_680(hParam1, &unk6, &unk, 1, 752097756, false))
		return 0;

	return 1;
}

BOOL func_595(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5) // Position - 0x28B09 Hash - 0xB7A16C08 ^0x95A2653
{
	int i;
	var data;
	Hash outBundle;
	var unk5;
	int bundleItemCount;
	var unk9;

	if (iParam0 == 0)
		return false;

	data = 1;
	bundleItemCount = ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &data);
	unk9 = { uParam1 };

	for (i = 0; i < bundleItemCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &data, i, &outBundle))
		{
			if (func_332(outBundle, 0))
			{
				unk9.f_4 = outBundle.f_1;
			
				if (func_570(outBundle, uParam1, unk9.f_4, false) > 0)
				{
				}
				else
				{
					func_796(&unk5);
				
					if (func_680(outBundle, &unk5, &unk9, 1, 752097756, true))
						if (bParam5)
							func_681(unk5, 1);
				}
			}
		}
	}

	return true;
}

BOOL func_596() // Position - 0x28BA9 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

void func_597(Hash hParam0) // Position - 0x28BBA Hash - 0xACCBFF65 ^0x7446C9E7
{
	Hash weaponUnlock;

	if (!func_428(hParam0))
		return;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return;

	UNLOCK::UNLOCK_SET_VISIBLE(weaponUnlock, true);
	return;
}

BOOL func_598(Hash hParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x28BE7 Hash - 0x198FCB70 ^0x369C0AB5
{
	if (func_115() == -1)
	{
		if (func_832(hParam0) && func_833(hParam0))
		{
			func_834(hParam0, iParam1, true, &bParam2, iParam3);
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

BOOL func_599(Hash hParam0, var uParam1, int iParam2) // Position - 0x28C3E Hash - 0x19531B0A ^0x19531B0A
{
	var unk;
	int num;
	int num2;

	*uParam1 = iParam2;
	func_835(hParam0, uParam1);
	unk = { func_526(hParam0, false, true) };
	num = func_836(hParam0, &unk, false, false);
	num2 = func_837(hParam0, false);

	if (num > 1 && !func_838() && num2 + iParam2 >= num)
		if (func_547(hParam0, -2051813666))
			func_607(583, true);
		else
			func_607(582, false);

	if (func_839(hParam0, &unk, *uParam1, false, false))
		if (num2 < num)
			*uParam1 = num - num2;
		else
			return false;

	return true;
}

void func_600(Hash hParam0, BOOL bParam1) // Position - 0x28CDA Hash - 0xB66258E7 ^0x1C70D810
{
	if (bParam1)
		return;

	switch (func_840(hParam0, -949239683))
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

BOOL func_601(Hash hParam0) // Position - 0x28D86 Hash - 0xAC8EB620 ^0xAC8EB620
{
	if (func_115() != -1)
		return false;

	return func_602(hParam0) != 0;
}

Hash func_602(Hash hParam0) // Position - 0x28DA2 Hash - 0x6FAFBBB4 ^0x738A5F7C
{
	Hash collectableItemHash;
	int i;

	for (i = 0; i < func_841(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_842(collectableItemHash))
			return collectableItemHash;
	}

	return 0;
}

Hash func_603(Hash hParam0) // Position - 0x28DDE Hash - 0xD6E12BEB ^0x67FB12E2
{
	return COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(hParam0);
}

int func_604(Hash hParam0) // Position - 0x28DEC Hash - 0x63EE8363 ^0x22F3A4BC
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < func_841(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_603(collectableItemHash))
			if (func_418(func_842(collectableItemHash), 1, false))
				num = num + 1;
	}

	return num;
}

void func_605(Hash hParam0) // Position - 0x28E39 Hash - 0x492800CC ^0x9F572505
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	func_843(48);
	func_308(false, -1);
	return;
}

BOOL func_606(int iParam0) // Position - 0x28E54 Hash - 0x5FF09631 ^0xD3AB2726
{
	if (func_115() != -1)
		return false;

	return func_94(Global_1347702[iParam0 /*49*/].f_15, true);
}

void func_607(int iParam0, BOOL bParam1) // Position - 0x28E77 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_844(iParam0, &num, &num2);

	if (!func_845(iParam0, num, num2, bParam1))
		return;

	func_846(num, num2);
	return;
}

int func_608(Hash hParam0) // Position - 0x28EA4 Hash - 0xDCB10D9D ^0xF3DC1D4F
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), hParam0);
}

Hash func_609(Hash hParam0) // Position - 0x28EB7 Hash - 0xDCB10D9D ^0x4B188B5C
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), hParam0);
}

BOOL func_610(int iParam0) // Position - 0x28ECA Hash - 0x5FF09631 ^0x616FE32F
{
	if (func_115() != -1)
		return false;

	return func_94(Global_1835011[iParam0 /*74*/].f_1, true);
}

BOOL func_611(int iParam0) // Position - 0x28EED Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_115() != -1)
		return false;

	if (!func_286(iParam0))
		return false;

	return func_419(Global_1347702[iParam0 /*49*/].f_15);
}

int func_612() // Position - 0x28F1D Hash - 0xA2AE820C ^0xA2AE820C
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		if (func_418(func_847(i), 1, false))
			num = num + 1;
	}

	return num;
}

void func_613(int iParam0, Hash hParam1, int iParam2, Hash hParam3, int iParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x28F52 Hash - 0x2D6CF941 ^0xE4C7E3F0
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
		
			if (func_481() && func_611(38) || func_606(38))
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
			if (func_481() && func_611(39) || func_606(39))
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
			if (func_481() && func_611(41) || func_606(41))
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
			num = func_848(hParam3, 19);
			hash2 = -1531394072;
			hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			hash = joaat("col_ex_intro");
			break;
	
		case 49:
			if (func_481() && func_611(49) || func_606(49))
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
			num = func_848(hParam3, 20);
			hash2 = joaat("taxidermy");
			hashKey = joaat("blip_rc_hobbs");
			hash = joaat("col_tx_intro");
			break;
	}

	str3 = func_849(iParam0, hash2, iParam6, str3, iParam4, num2, hParam3);

	if (iParam6 == 8)
	{
		hashKey = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		hashKey2 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		hashKey2 = MISC::GET_HASH_KEY("toast_log_blips");
	}

	func_850(iParam0, hash, hash2);
	func_851(iParam0, hash, unk, str5, str4);
	func_852(iParam0, hash, str3, str6, str, str2, hashKey, hashKey2);
	func_853(iParam0, hash, hash2, hParam3, hParam1, iParam6, num, iParam2, num2, bParam5);
	func_854(iParam0, hash, hash2, iParam6);
	func_855(iParam0, hash, hash2, iParam6, bParam7);
	return;
}

void func_614(int iParam0) // Position - 0x2938F Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12004 = Global_40.f_12004 || iParam0;
	return;
}

void func_615(int iParam0, Hash hParam1, Hash hParam2, int iParam3, int iParam4, int iParam5, Hash hParam6) // Position - 0x293A6 Hash - 0xD806FABF ^0x9FCBCA13
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
		
			if (func_481() && func_611(38) || func_606(38))
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
		
			if (func_481() && func_611(39) || func_606(39))
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
		
			if (func_481() && func_611(49) || func_606(49))
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
		if (func_481() && func_611(38) || func_606(38))
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
			func_856(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 1)
		{
			str4 = "COL_CC_CARD_POSTED_OBJ";
			func_856(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 0)
		{
			func_858(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_609(hParam6))), hashKey2, hashKey, -2, 0, 0, 0, 0, true, true);
			func_856(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else
		{
			str2 = "COL_CC_INTRO";
			func_856(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
	}
	else if (num == joaat("dino_bones"))
	{
		if (func_481() && func_611(39) || func_606(39))
			hash = joaat("col_db_intro");
		else
			hash = joaat("col_db_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_856(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_856(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else if (num == joaat("rock_carvings"))
	{
		if (func_481() && func_611(49) || func_606(49))
			hash = joaat("col_rc_intro");
		else
			hash = joaat("col_rc_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_856(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_856(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_856(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_856(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}

	return;
}

BOOL func_616(Hash hParam0, int iParam1) // Position - 0x29954 Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_332(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

void func_617(int iParam0) // Position - 0x29973 Hash - 0xFDF9CB10 ^0xFDF9CB10
{
	if (!func_682(iParam0))
		return;

	func_859(iParam0);
	func_860(iParam0);
	return;
}

Hash func_618(Hash hParam0, BOOL bParam1) // Position - 0x29994 Hash - 0x27CC99BE ^0x9BD61A93
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

	if (func_332(hash, 0))
		if (bParam1)
			if (func_861(hash) || func_862(hash))
				return hash;
		else
			return hash;

	return hParam0;
}

Hash func_619(Hash hParam0, BOOL bParam1) // Position - 0x29B1A Hash - 0x68919B0 ^0x66A44A24
{
	if (!func_332(hParam0, 0))
		return 0;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return hParam0;

	!bParam1;
	return 0;
}

BOOL func_620(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x29B46 Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return true;

	if (!func_622(hParam0))
		return false;

	if (!func_524(false))
		return false;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, hParam0, iParam1, hParam2);
	return true;
}

BOOL func_621(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x29B81 Hash - 0x59CC5407 ^0xB9F9E5A1
{
	Hash weaponHash;
	var unk;
	int num;
	Hash weaponHash2;
	BOOL flag;

	weaponHash = func_619(hParam0, false);

	if (WEAPON::IS_WEAPON_VALID(weaponHash))
	{
		if (func_115() == -1)
		{
			func_424(weaponHash);
		
			if (hParam1 == 1248274121)
				func_863(weaponHash);
		}
	
		if (!func_839(hParam0, &unk, 1, false, false))
		{
			func_834(hParam0, 1, false, uParam2, hParam1);
			num = func_864(weaponHash);
		
			if (WEAPON::_IS_WEAPON_SNIPER(weaponHash))
			{
				func_425(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("weapon_fishingrod") || weaponHash == joaat("weapon_kit_binoculars"))
			{
				func_425(weaponHash, 0, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("WEAPON_LASSO"))
			{
				func_425(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash))
			{
				if (weaponHash == joaat("weapon_melee_knife_john") && !func_814())
					return false;
			
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(hParam0))
				{
				}
				else if (!func_865(weaponHash))
				{
					func_425(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
				}
				else
				{
					func_425(weaponHash, WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 4, bParam3, bParam4, 0, false, hParam1, false);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash))
			{
				weaponHash2 = func_866(Global_35, 2, false, true);
			
				if (func_428(weaponHash2) && !Global_43891 && weaponHash2 != weaponHash && !func_429(24) && bParam4)
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, weaponHash2);
			
				flag = true;
			
				if (func_428(weaponHash2) && func_429(24))
					if (!func_425(weaponHash, num, bParam3, bParam4, 3, flag, hParam1, false))
						return false;
				else if (!func_425(weaponHash, num, bParam3, bParam4, 0, flag, hParam1, false))
					return false;
			}
			else if (!func_425(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false))
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
		func_607(480, true);

	return true;
}

BOOL func_622(Hash hParam0) // Position - 0x29D8D Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

BOOL func_623(Hash hParam0, var uParam1, Hash hParam2) // Position - 0x29D9B Hash - 0x8FE8AA03 ^0x8ABA2B4
{
	int num;
	int weaponClipSize;
	int ammo;
	int pedAmmoByType;
	Hash weaponTypeFromAmmoType;
	int num2;
	int num3;

	if (!func_622(hParam0))
		return false;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);
	pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	if (func_428(weaponTypeFromAmmoType))
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

	if (func_418(joaat("provision_trinket_crow_beak"), 1, false) && hParam2 == -897553835)
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
		func_656(func_867(hParam0), func_655(hParam0), true);
		return false;
	}

	if (ammo == pedAmmoByType + num)
		if (func_115() == -1)
			if (func_94(Global_1835011[14 /*74*/].f_1, true))
				func_607(416, false);

	if (num == 0)
		return false;

	if (func_524(false))
	{
		if (func_620(hParam0, num, hParam2))
		{
			*uParam1 = num;
			return true;
		}
	}
	else
	{
		return func_661(hParam0, *uParam1, hParam2);
	}

	return false;
}

void func_624(Hash hParam0) // Position - 0x29EE4 Hash - 0x4FF3DD4C ^0xAF84DD67
{
	var unk;

	if (hParam0 == joaat("provision_talisman_eagle_talon") && !func_596() || hParam0 != joaat("provision_talisman_eagle_talon"))
		if (func_868(Global_35, hParam0, &unk))
			func_641(PLAYER::PLAYER_PED_ID(), hParam0, 0, -358215195, true, true, true, false, true, true);

	switch (hParam0)
	{
		case joaat("provision_talisman_buffalo_horn"):
			Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
			func_647();
			break;
	
		case joaat("provision_talisman_bear_claw"):
			Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
			func_647();
			break;
	
		case joaat("provision_talisman_eagle_talon"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_645();
			break;
	
		case joaat("provision_talisman_raven_claw"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.2f;
			func_643();
			break;
	
		case joaat("provision_talisman_alligator_tooth"):
			Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
			func_647();
			break;
	}

	return;
}

void func_625(Hash hParam0) // Position - 0x29FEB Hash - 0xA92CE7CF ^0x8CEA2EC6
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
			func_870();
			break;
	
		case joaat("provision_trinket_fox_claw"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_645();
			break;
	
		case joaat("provision_trinket_hawk_talon"):
			Global_40.f_11095.f_64 = Global_40.f_11095.f_64 + 0.3f;
			func_869();
			break;
	
		case joaat("provision_trinket_beaver_tooth"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
			func_643();
			break;
	
		case joaat("provision_trinket_iguana_scale"):
			Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
			func_646();
			break;
	
		case joaat("provision_trinket_coyote_fang"):
			Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
			break;
	
		case joaat("provision_trinket_bison_horn"):
			Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
			func_644();
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
			func_647();
			break;
	}

	return;
}

struct<2> func_626(int iParam0) // Position - 0x2A1D6 Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

void func_627(Hash hParam0) // Position - 0x2A1E8 Hash - 0xF29DD96C ^0x175841E3
{
	BOOL flag;

	flag = func_547(hParam0, -2017733358);

	if (func_871() < 3)
		if (flag)
			if (func_873(func_872(hParam0), hParam0))
				func_656(79, func_655(func_872(hParam0)), true);
			else
				func_656(78, func_655(func_872(hParam0)), true);
		else
			func_656(80, func_655(func_874(hParam0)), true);

	return;
}

BOOL func_628() // Position - 0x2A255 Hash - 0x452521BB ^0x7FA3002C
{
	if (func_875(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_875(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400) || func_875(joaat("document_arthur_high_bounty_1"), 400) || func_875(joaat("document_arthur_high_bounty_2"), 400) || func_875(joaat("document_arthur_has_poster_1"), 400) || func_875(joaat("document_arthur_has_poster_2"), 400))
		return true;

	return false;
}

int func_629(Hash hParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0x2A2CB Hash - 0x44FDFBC7 ^0xD59B23EE
{
	int num;
	Hash hash;

	num = func_876(hParam0, bParam6, iParam7);

	if (!bParam1)
		func_669(num, sParam4, iParam5);

	hash = 752097756;

	if (bParam6)
		hash = -897553835;

	func_670(num, bParam1, iParam2, iParam3, hash);
	return num;
}

void func_630(Hash hParam0) // Position - 0x2A312 Hash - 0x9BA47EC0 ^0xC5DB4E3B
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_613(43, 0, 0, joaat("exotic_stage_01"), func_881(1), false, -1, false);
			func_882(1);
			break;
	
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_613(39, 0, 0, 0, 0, false, 1, false);
			func_615(39, 0, 0, 0, 0, -1, 0);
			func_878(16);
			break;
	
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_613(51, 0, 0, joaat("taxidermy_order_04"), 0, false, 4, false);
			func_615(51, 0, 0, 0, 0, -1, 0);
			func_877(8192);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_613(43, 0, 0, joaat("exotic_stage_02"), func_881(2), false, -1, false);
			func_882(2);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_613(43, 0, 0, joaat("exotic_stage_03"), func_881(4), false, -1, false);
			func_882(4);
			break;
	
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_613(49, 0, 0, 0, 0, false, 1, false);
			func_615(49, 0, 0, 0, 0, -1, 0);
			func_880(16);
			break;
	
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_613(51, 0, 0, joaat("taxidermy_order_05"), 0, false, 1, false);
			func_615(51, 0, 0, 0, 0, -1, 0);
			func_877(524288);
			break;
	
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_613(41, 0, 0, 0, 0, false, 1, false);
			func_615(41, 0, 0, 0, 0, -1, 0);
			func_879(8);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_613(43, 0, 0, joaat("exotic_stage_05"), func_881(16), false, -1, false);
			func_882(16);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_613(43, 0, 0, joaat("exotic_stage_04"), func_881(8), false, -1, false);
			func_882(8);
			break;
	}

	return;
}

void func_631(Hash hParam0) // Position - 0x2A4A8 Hash - 0x7DB0E964 ^0xC7C463BF
{
	if (func_883() == 1)
	{
		if (func_606(39))
		{
			func_607(342, false);
		}
		else
		{
			func_607(343, false);
			func_878(1);
		}
	}

	if (func_883() >= 30)
		func_607(344, false);

	func_613(39, 0, 0, 0, 0, false, -1, false);
	func_615(39, 0, 0, func_883(), 30, 1, 0);
	return;
}

void func_632(Hash hParam0) // Position - 0x2A507 Hash - 0xD7DD81BD ^0x9CB6E38C
{
	if (func_884() == 1)
	{
		if (func_606(49))
		{
			func_607(409, false);
		}
		else
		{
			func_607(410, false);
			func_880(1);
		}
	}

	if (func_884() >= 10)
		func_607(411, false);

	func_613(49, 0, 0, 0, 0, false, -1, false);
	func_615(49, 0, 0, func_884(), 10, 1, 0);
	return;
}

void func_633(Hash hParam0) // Position - 0x2A566 Hash - 0x68B64163 ^0x7FDDC87D
{
	int num;

	switch (hParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_05"), 1);
			func_607(438, false);
			func_885(joaat("taxidermy_order_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &num, true, 0, false);
			func_613(51, 0, 0, joaat("taxidermy_order_05"), num, false, -1, false);
			func_615(51, 0, 0, num, func_848(joaat("taxidermy_order_05"), 20), 1, 0);
			func_877(32768);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_04"), 1);
			func_885(joaat("taxidermy_order_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &num, true, 0, false);
			func_613(51, 0, 0, joaat("taxidermy_order_04"), num, false, -1, false);
			func_615(51, 0, 0, num, func_848(joaat("taxidermy_order_04"), 20), 1, 0);
			func_877(512);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_03"), 1);
			func_885(joaat("taxidermy_order_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &num, true, 0, false);
			func_613(51, 0, 0, joaat("taxidermy_order_03"), num, false, -1, false);
			func_615(51, 0, 0, num, func_848(joaat("taxidermy_order_03"), 20), 1, 0);
			func_877(64);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_01"), 1);
			func_607(437, false);
			func_607(440, false);
			func_885(joaat("taxidermy_order_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &num, true, 0, false);
			func_613(51, 0, 0, joaat("taxidermy_order_01"), num, false, -1, false);
			func_615(51, 0, 0, num, func_848(joaat("taxidermy_order_01"), 20), 1, 0);
			func_877(1);
			func_484(-748969569, false, false);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_02"), 1);
			func_885(joaat("taxidermy_order_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &num, true, 0, false);
			func_613(51, 0, 0, joaat("taxidermy_order_02"), num, false, -1, false);
			func_615(51, 0, 0, num, func_848(joaat("taxidermy_order_02"), 20), 1, 0);
			func_877(8);
			break;
	
		default:
			func_607(439, false);
			break;
	}

	return;
}

void func_634() // Position - 0x2A754 Hash - 0xC8FE42DB ^0x507D23E9
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("sp_chal_expl_root")) < 2)
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("sp_chal_expl_root"), joaat("acw_expl_rank_01_treasure"), 1);

	return;
}

void func_635(Hash hParam0, int iParam1) // Position - 0x2A778 Hash - 0x51E4CC2F ^0x54D846FD
{
	int num;
	int num2;

	num2 = 0;

	if (func_115() == -1)
	{
		if (!func_606(43))
		{
			if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
				func_607(348, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
				func_607(350, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
				func_607(352, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_of_night"))
				func_607(400, false);
		}
		else if (func_547(hParam0, 412399755))
		{
			func_886(joaat("exotic_stage_01"));
		
			if (func_887() == 0)
			{
				func_308(false, 10);
				num2 = func_888(hParam0, iParam1, 1);
			
				if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
				{
					if (func_889(hParam0) < func_890(hParam0))
					{
						func_613(43, hParam0, iParam1, joaat("exotic_stage_01"), num2, false, -1, false);
						func_615(43, 0, 0, num2, 30, 1, 0);
					}
				}
			}
		}
	
		if (!func_606(44))
		{
			if (hParam0 == joaat("PROVISION_HERON_FEATHER"))
				func_607(354, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_slipper"))
				func_607(399, false);
			else if (hParam0 == joaat("provision_ro_flower_moccasin"))
				func_607(&func_1, false);
		}
		else if (func_547(hParam0, 709057512))
		{
			func_886(joaat("exotic_stage_02"));
		
			if (func_887() == 1)
			{
				func_308(false, 10);
				num2 = func_888(hParam0, iParam1, 2);
			
				if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
				{
					if (func_889(hParam0) < func_890(hParam0))
					{
						func_613(43, hParam0, iParam1, joaat("exotic_stage_02"), num2, false, -1, false);
						func_615(43, 0, 0, num2, 37, 1, 0);
					}
				}
			}
		}
	
		if (!func_606(45))
		{
			if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				func_607(359, false);
			else if (hParam0 == joaat("provision_ro_flower_acunas_star"))
				func_607(394, false);
			else if (hParam0 == joaat("provision_ro_flower_cigar"))
				func_607(395, false);
			else if (hParam0 == joaat("provision_ro_flower_ghost"))
				func_607(398, false);
		}
		else if (func_547(hParam0, -1478961327))
		{
			func_886(joaat("exotic_stage_03"));
		
			if (func_887() == 2)
			{
				func_308(false, 10);
				num2 = func_888(hParam0, iParam1, 4);
			
				if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!(func_891(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
					{
						func_892(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
						func_843(48);
					}
				
					if (func_889(hParam0) < func_890(hParam0))
					{
						func_613(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_615(43, 0, 0, num2, 40, 1, 0);
					}
				}
				else if (hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
				{
					if (func_889(hParam0) < func_890(hParam0))
					{
						func_613(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_615(43, 0, 0, num2, 40, 1, 0);
					}
				}
			}
		}
	
		if (!func_606(46))
		{
			if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
				func_607(356, false);
			else if (hParam0 == joaat("provision_ro_flower_night_scented"))
				func_607(402, false);
			else if (hParam0 == joaat("provision_ro_flower_rat_tail"))
				func_607(404, false);
			else if (hParam0 == joaat("provision_ro_flower_spider"))
				func_607(406, false);
		}
		else if (func_547(hParam0, -1238404098))
		{
			func_886(joaat("exotic_stage_04"));
		
			if (func_887() == 3)
			{
				func_308(false, 10);
				num2 = func_888(hParam0, iParam1, 8);
			
				if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
				{
					if (func_889(hParam0) < func_890(hParam0))
					{
						func_613(43, hParam0, iParam1, joaat("exotic_stage_04"), num2, false, -1, false);
						func_615(43, 0, 0, num2, 50, 1, 0);
					}
				}
			}
		}
	
		if (!func_606(47))
		{
			if (hParam0 == joaat("provision_ro_flower_clamshell"))
				func_607(396, false);
			else if (hParam0 == joaat("provision_ro_flower_dragons"))
				func_607(397, false);
			else if (hParam0 == joaat("provision_ro_flower_sparrows"))
				func_607(405, false);
			else if (hParam0 == joaat("provision_ro_flower_queens"))
				func_607(403, false);
		}
		else if (func_547(hParam0, 1160548794))
		{
			func_886(joaat("exotic_stage_05"));
		
			if (func_887() == 4)
			{
				func_308(false, 10);
				num2 = func_888(hParam0, iParam1, 16);
			
				if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
				{
					if (func_889(hParam0) < func_890(hParam0))
					{
						func_613(43, hParam0, iParam1, joaat("exotic_stage_05"), num2, false, -1, false);
						func_615(43, 0, 0, num2, 25, 1, 0);
					}
				}
			}
		}
	}

	return;
}

void func_636(Hash hParam0) // Position - 0x2AC91 Hash - 0x5FDB9C87 ^0xFFDE9D68
{
	int num;

	if (hParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!(func_891(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
		{
			func_892(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
			func_843(48);
		}
	}

	return;
}

void func_637(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2ACD1 Hash - 0x306960CD ^0xBFFBAE09
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < 5; i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("taxidermy"), joaat("taxidermy_order"));
	
		if (func_418(func_893(collectableItemHash, 10), 1, false))
			if (bParam2)
				func_894(hParam0, collectableItemHash, num, iParam1, bParam2);
			else
				func_895(hParam0, collectableItemHash, bParam3);
	}

	return;
}

void func_638(Hash hParam0, Hash hParam1, Entity eParam2) // Position - 0x2AD31 Hash - 0x2973E533 ^0x2C76667A
{
	int num;

	if (func_115() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(eParam2))
		{
			num = MISC::_0x6F02B5E50511721E(eParam2);
		
			if (num < -1)
			{
			}
			else if (num >= 0)
			{
				func_629(0, false, 1065353216, 1, 0, 0, hParam1 == -897553835, num);
				return;
			}
		}
	}

	switch (hParam0)
	{
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_629(joaat("REWARD_TAXIDERMY_STAGE_2"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_billstack"):
			func_629(joaat("reward_billstack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_RARE_FISH"):
			func_629(joaat("REWARD_RARE_FISH"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_BILLFOLD_SML"):
			func_629(joaat("reward_billfold_sml"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINCUP_LG"):
			func_629(joaat("REWARD_COINCUP_LG"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_629(joaat("REWARD_TAXIDERMY_STAGE_4"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case -1394529493:
			func_629(joaat("REWARD_FIVE_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TEN_DOLLARS"):
			func_629(joaat("REWARD_TEN_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_896())
				func_629(joaat("REWARD_MONEYSTACK_LARGE"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_moneystack"):
			func_629(joaat("reward_moneystack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_ALL"):
			func_629(joaat("REWARD_CARD_SET_ALL"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_CARD_SET_RARE"):
			func_629(joaat("REWARD_CARD_SET_RARE"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_629(joaat("REWARD_TAXIDERMY_STAGE_3"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_COINCUP_SM"):
			func_629(joaat("REWARD_COINCUP_SM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_629(joaat("REWARD_TAXIDERMY_STAGE_1"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_moneyclip"):
			func_629(joaat("reward_moneyclip"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_coinstack"):
			func_629(joaat("REWARD_COINS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_one_dollar"):
			func_629(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINSACK"):
			func_629(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_629(joaat("REWARD_CALLOWAY_LETTER"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coin"):
			func_629(joaat("reward_coin"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_BILLFOLD"):
			func_629(joaat("reward_billfold"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_COMMON"):
			func_629(joaat("REWARD_CARD_SET_COMMON"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coinpurse"):
			func_629(joaat("reward_coinpurse"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_629(joaat("REWARD_TAXIDERMY_STAGE_5"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("currency_cash"):
			func_629(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	}

	return;
}

void func_639(Hash hParam0) // Position - 0x2B109 Hash - 0x7B1EFD1 ^0x61F0FB99
{
	if (func_606(41))
		func_607(363, false);
	else
		func_607(362, false);

	switch (hParam0)
	{
		case joaat("provision_fish_chain_pickerel_legendary"):
			func_897(joaat("legendary_fish_02"));
			func_898(joaat("legendary_fishing_spot_02"));
			func_899(joaat("legendary_fishing_spot_02"));
			func_308(false, 10);
			break;
	
		case joaat("provision_fish_muskie_legendary"):
			func_897(joaat("legendary_fish_06"));
			func_898(joaat("legendary_fishing_spot_06"));
			func_899(joaat("legendary_fishing_spot_06"));
			func_308(false, 10);
			break;
	
		case joaat("provision_fish_bluegill_legendary"):
			func_897(joaat("legendary_fish_13"));
			func_898(joaat("legendary_fishing_spot_13"));
			func_899(joaat("legendary_fishing_spot_13"));
			func_308(false, 10);
			break;
	
		case joaat("provision_fish_lake_sturgeon_legendary"):
			func_897(joaat("legendary_fish_03"));
			func_898(joaat("legendary_fishing_spot_03"));
			func_899(joaat("legendary_fishing_spot_03"));
			func_308(false, 10);
			break;
	
		case joaat("provision_fish_redfin_pickerel_legendary"):
			func_897(joaat("legendary_fish_08"));
			func_898(joaat("legendary_fishing_spot_08"));
			func_899(joaat("legendary_fishing_spot_08"));
			func_308(false, 10);
			break;
	
		case joaat("provision_fish_steelhead_trout_legendary"):
			func_897(joaat("legendary_fish_12"));
			func_898(joaat("legendary_fishing_spot_12"));
			func_899(joaat("legendary_fishing_spot_12"));
			func_308(false, 10);
			break;
	
		case joaat("provision_fish_longnose_gar_legendary"):
			func_897(joaat("legendary_fish_05"));
			func_898(joaat("legendary_fishing_spot_05"));
			func_899(joaat("legendary_fishing_spot_05"));
			func_308(false, 10);
			break;
	
		case joaat("provision_fish_largemouth_bass_legendary"):
			func_897(joaat("legendary_fish_04"));
			func_898(joaat("legendary_fishing_spot_04"));
			func_899(joaat("legendary_fishing_spot_04"));
			func_308(false, 10);
			break;
	
		case joaat("provision_fish_northern_pike_legendary"):
			func_897(joaat("legendary_fish_14"));
			func_898(joaat("legendary_fishing_spot_14"));
			func_899(joaat("legendary_fishing_spot_14"));
			break;
	
		case joaat("provision_fish_rock_bass_legendary"):
			func_897(joaat("legendary_fish_09"));
			func_898(joaat("legendary_fishing_spot_09"));
			func_899(joaat("legendary_fishing_spot_09"));
			func_308(false, 10);
			break;
	
		case joaat("provision_fish_perch_legendary"):
			func_897(joaat("legendary_fish_07"));
			func_898(joaat("legendary_fishing_spot_07"));
			func_899(joaat("legendary_fishing_spot_07"));
			func_308(false, 10);
			break;
	
		case joaat("provision_fish_bullhead_catfish_legendary"):
			func_897(joaat("legendary_fish_01"));
			func_898(joaat("legendary_fishing_spot_01"));
			func_899(joaat("legendary_fishing_spot_01"));
			func_308(false, 10);
			break;
	
		case joaat("provision_fish_sockeye_salmon_legendary"):
			func_897(joaat("legendary_fish_11"));
			func_898(joaat("legendary_fishing_spot_11"));
			func_899(joaat("legendary_fishing_spot_11"));
			func_308(false, 10);
			break;
	
		case joaat("provision_fish_smallmouth_bass_legendary"):
			func_897(joaat("legendary_fish_10"));
			func_898(joaat("legendary_fishing_spot_10"));
			func_899(joaat("legendary_fishing_spot_10"));
			func_308(false, 10);
			break;
	}

	return;
}

void func_640(Hash hParam0, var uParam1) // Position - 0x2B388 Hash - 0xC6F24F1D ^0xC6F24F1D
{
	var unk;

	func_741(hParam0, uParam1, &unk);
	return;
}

int func_641(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x2B39A Hash - 0x20E8246C ^0x1B874796
{
	var unk;
	int num;

	if (iParam3 == -358215195)
	{
		unk = { func_526(hParam1, true, false) };
		iParam3 = func_527(unk.f_4);
	
		if (iParam3 == -358215195)
			return 0;
	}

	if (!func_556(hParam1, hParam2, func_338(iParam3, 1), bParam4, bParam9))
		return 0;

	func_900(true, func_115() == -1 && bParam5, true);

	switch (iParam3)
	{
		case 1108822547:
			if (func_765(32768) && hParam1 != Global_1946054.f_57[func_338(iParam3, 1) /*11*/])
			{
				func_901();
				func_552(22, iParam3, 256, 0, false);
			}
		
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 2);
			break;
	
		case 1145151482:
		case 1742327865:
			if (bParam8 && hParam1 != Global_1946054.f_57[func_338(iParam3, 1) /*11*/])
				func_552(31, 0, 0, 0, false);
			break;
	}

	if (!bParam6)
	{
		if (bParam7)
			func_552(22, iParam3, 0, 0, false);
	
		return 1;
	}

	num = func_902(iParam3);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		func_552(19, 0, num, 0, false);
	
		if (iParam3 == 1742327865 || iParam3 == 1108822547 || iParam3 == 1145151482)
		{
			func_903(0);
			func_904(36, 0, 0);
		}
	}
	else
	{
		num = num | 1;
		func_552(19, 0, num, pedParam0, false);
	}

	return 1;
}

BOOL func_642(var uParam0, BOOL bParam1) // Position - 0x2B509 Hash - 0x2DC8D50 ^0x79739B7E
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
	hash = func_866(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, true, false);
	hash2 = func_866(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, true, false);

	if (func_672("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_673(&unk, i, num, num2))
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
	
		func_566(num);
	
		if (*uParam0 != 0)
			return true;
	}

	return false;
}

void func_643() // Position - 0x2B5D2 Hash - 0x774616D ^0xF8A3E77D
{
	PLAYER::_SET_WEAPON_DEGRADATION_MODIFIER(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_60);
	return;
}

void func_644() // Position - 0x2B5EC Hash - 0xC65F3A3C ^0xD750E3C1
{
	float num;
	float num2;

	num = Global_40.f_11095.f_62;
	num2 = Global_40.f_11095.f_62 + Global_40.f_11095.f_61;
	PLAYER::_SET_PLAYER_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f - num, 1f - num2);
	return;
}

void func_645() // Position - 0x2B621 Hash - 0xD548C250 ^0x2F524E3B
{
	PLAYER::_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(PLAYER::PLAYER_ID(), 1f / (1f + Global_40.f_11095.f_58));
	return;
}

void func_646() // Position - 0x2B63D Hash - 0x774616D ^0x91C5BAF4
{
	PLAYER::_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_63);
	return;
}

void func_647() // Position - 0x2B657 Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_905();
	func_906();
	func_907();
	return;
}

void func_648(int iParam0, int iParam1, BOOL bParam2) // Position - 0x2B66E Hash - 0x968DA278 ^0xC26CBC52
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

void func_649(int iParam0, BOOL bParam1) // Position - 0x2BA46 Hash - 0x922C415B ^0xC8718607
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
	func_856(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	return;
}

void func_650(int iParam0) // Position - 0x2BB5D Hash - 0x25D46568 ^0x354A75AA
{
	Global_40.f_12004.f_7 = Global_40.f_12004.f_7 || iParam0;
	return;
}

void func_651(int iParam0) // Position - 0x2BB78 Hash - 0x25D46568 ^0x1D3325E9
{
	Global_40.f_12004.f_8 = Global_40.f_12004.f_8 || iParam0;
	return;
}

void func_652(int iParam0) // Position - 0x2BB93 Hash - 0x25D46568 ^0x2B49A91A
{
	Global_40.f_12004.f_9 = Global_40.f_12004.f_9 || iParam0;
	return;
}

void func_653(int iParam0) // Position - 0x2BBAE Hash - 0x25D46568 ^0xFA2D4760
{
	Global_40.f_12004.f_11 = Global_40.f_12004.f_11 || iParam0;
	return;
}

void func_654(int iParam0) // Position - 0x2BBC9 Hash - 0x25D46568 ^0x2140FCBF
{
	Global_40.f_12004.f_12 = Global_40.f_12004.f_12 || iParam0;
	return;
}

eBlipSprite func_655(Hash hParam0) // Position - 0x2BBE4 Hash - 0x72D0E66A ^0x72D0E66A
{
	if (!func_332(hParam0, 0))
		return BLIP_HIGHER;

	return hParam0;
}

void func_656(int iParam0, eBlipSprite ebsParam1, BOOL bParam2) // Position - 0x2BBFD Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_844(iParam0, &num, &num2);

	if (!func_845(iParam0, num, num2, bParam2))
		return;

	if (!func_908(iParam0, 1024))
		return;

	func_846(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	return;
}

void func_657(int iParam0, eBlipSprite ebsParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2BC5D Hash - 0x692A8F54 ^0x2BADE95C
{
	int num;
	int num2;

	func_844(iParam0, &num, &num2);

	if (!func_845(iParam0, num, num2, bParam2))
		return;

	if (!func_908(iParam0, 1024))
		return;

	func_846(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;

	if (!bParam3)
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	else
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;

	return;
}

Hash func_658() // Position - 0x2BCD8 Hash - 0xB996E1A6 ^0x8FBE5D65
{
	int numFound;
	Hash collectableItemHash;
	int i;
	int num;
	int endRange;
	int randomIntInRange;

	numFound = COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), 0);

	if (numFound == func_841())
		return func_659();

	endRange = func_841() - numFound;
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);

	for (i = 0; i < func_841(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (!func_909(collectableItemHash))
		{
			if (randomIntInRange == num)
				return func_842(collectableItemHash);
		
			num = num + 1;
		}
	}

	return 0;
}

Hash func_659() // Position - 0x2BD52 Hash - 0x354121B4 ^0x6B7FEC83
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, func_841());
	return func_842(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(randomIntInRange, joaat("CIGARETTE_CARDS"), 0));
}

void func_660(var uParam0) // Position - 0x2BD75 Hash - 0x26E9B20B ^0x108E1842
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

BOOL func_661(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x2BDCA Hash - 0x1EF65EF0 ^0x1EF65EF0
{
	var unk;
	var unk6;

	if (!func_332(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_526(hParam0, false, true) };
	unk6 = { func_569(hParam0, unk, unk.f_4, false) };
	return func_680(hParam0, &unk6, &unk, iParam1, hParam2, false);
}

void func_662(Hash hParam0) // Position - 0x2BE19 Hash - 0x90E372CB ^0xEE55522E
{
	eStackSize stackSize;
	Hash hash;
	Hash hash2;

	if (func_115() != -1)
		return;

	switch (func_371(hParam0))
	{
		case -2061583405:
			if (hParam0 == joaat("clothing_item_hat_pzero_000") || hParam0 == joaat("clothing_p3_player_three_ms1_hat_000_000"))
				func_552(32, hParam0, 0, 0, false);
			break;
	
		case -999503751:
			stackSize = func_793(hParam0);
		
			if (func_730(stackSize))
				func_911(stackSize, stackSize >= 0 && stackSize <= 5, true);
			else
				func_552(30, hParam0, 0, 0, false);
		
			if (func_339() == -2125499975 || func_339() == -449205311)
			{
				switch (hParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_552(32, hParam0, 0, 0, false);
						break;
				}
			}
			else if (func_339() == 1160113249)
			{
				switch (hParam0)
				{
					case -361635024:
						func_552(32, hParam0, 0, 0, false);
						break;
				}
			}
			break;
	
		case -525676072:
			if (!func_912(-525676072, false))
				if (func_913(-525676072, &hash))
					func_552(33, hash, 0, 0, false);
		
			func_552(32, hParam0, 0, 0, false);
			break;
	
		case 81053684:
			if (hParam0 == joaat("kit_bandana") && func_910(81053684, false) <= 0)
				func_552(32, hParam0, 0, 0, false);
			break;
	}

	if (hParam0 == joaat("clothing_sp_offhand_000") || hParam0 == -1515874150 || hParam0 == joaat("upgrade_offhand_holster"))
	{
		if (!func_544(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
			func_641(Global_35, hParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
	
		func_617(24);
	
		if (func_642(&hash2, false))
			func_425(hash2, 0, false, true, 3, false, 752097756, false);
	}

	return;
}

void func_663(Hash hParam0) // Position - 0x2BFEB Hash - 0x76868271 ^0xA4FEF031
{
	if (func_547(hParam0, 943695443))
		func_914(0, hParam0);
	else if (func_547(hParam0, -2096528786))
		func_914(1, hParam0);
	else if (func_547(hParam0, -1094167013))
		func_914(2, hParam0);
	else if (func_547(hParam0, 1936654645))
		func_914(3, hParam0);
	else if (func_547(hParam0, 1306489306))
		func_914(4, hParam0);
	else if (func_547(hParam0, 435762317))
		func_914(5, hParam0);
	else if (func_547(hParam0, 1259363210))
		func_914(6, hParam0);
	else if (func_547(hParam0, 881398259))
		func_914(7, hParam0);
	else if (func_547(hParam0, -541549214))
		func_914(8, hParam0);
	else if (func_547(hParam0, 130796156))
		func_914(-1, hParam0);

	return;
}

int func_664(Hash hParam0, int iParam1) // Position - 0x2C0E2 Hash - 0xFACD027 ^0xBE1FDD6
{
	var unk;
	var unk5;

	unk5.f_1 = 10;
	func_915(&unk5, joaat("LOOT_TYPE_NORMAL"));
	return func_916(hParam0, &unk5, &unk, iParam1);
}

void func_665(Hash hParam0) // Position - 0x2C10B Hash - 0x3BD36909 ^0x17029712
{
	switch (hParam0)
	{
		case joaat("provision_bird_feather_flight"):
			if (func_115() == -1)
				if (func_94(Global_1835011[4 /*74*/].f_1, true))
					func_607(109, true);
			break;
	}

	return;
}

void func_666(Hash hParam0, int iParam1) // Position - 0x2C144 Hash - 0x3053C451 ^0xE2412323
{
	char* str;

	str = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(func_917(0));
	func_747(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", iParam1, str), "inventory_items", func_919(hParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

void func_667(int iParam0) // Position - 0x2C184 Hash - 0xEA427C10 ^0xAE8C4401
{
	var statId;

	if (iParam0 <= 0)
		return;

	if (func_920(1) < iParam0)
		iParam0 = func_920(1);

	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	statId = { func_748(joaat("CAREER_CASH")) };
	STATS::_STAT_ID_DECREMENT_INT(&statId, iParam0);
	return;
}

void func_668(int iParam0, const char* sParam1, int iParam2) // Position - 0x2C1C2 Hash - 0xA31E0DC ^0x7499D397
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_SPEND";

	func_747(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 1, joaat("COLOR_RED"), 0, 0, 0, true);
	return;
}

void func_669(int iParam0, const char* sParam1, int iParam2) // Position - 0x2C203 Hash - 0x4DF85B80 ^0xC84709CF
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_EARN";

	func_747(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	return;
}

void func_670(int iParam0, BOOL bParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0x2C244 Hash - 0x9636EF60 ^0x355C8D65
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
	
		if (func_921())
			num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value) * 0.1f);
	
		iParam0 = iParam0 + num2;
		value = value + num2;
		func_747(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		iParam0 = iParam0 - num;
	
		if (num > 0)
		{
			func_922(num);
			func_923(num, 0, 0);
		}
	
		func_747(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", value), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	}
	else
	{
		value = iParam0;
	}

	if (value > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(value, hParam4);
		func_471(func_748(joaat("CAREER_CASH")), value);
	}

	return;
}

BOOL func_671(Hash hParam0, int iParam1) // Position - 0x2C320 Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_332(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_517(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_672("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_673(&unk, i, num, num2))
			{
			}
			else if (!func_428(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_566(num);
				return true;
			}
		}
	
		func_566(num);
	}

	return false;
}

BOOL func_672(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x2C3C8 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_571(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_673(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x2C3EF Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_674(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x2C42A Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_924(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

Hash func_675(int iParam0, int iParam1) // Position - 0x2C44B Hash - 0xE1D12727 ^0x71D656A6
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

BOOL func_676(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0x2E595 Hash - 0x4285A587 ^0x4285A587
{
	return func_570(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_677(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, BOOL bParam5, BOOL bParam6) // Position - 0x2E5AD Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_925(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_758(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_524(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_571(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

void func_678(Hash hParam0, int iParam1) // Position - 0x2E63D Hash - 0xBFC80B98 ^0x997FC438
{
	int ammo;
	int ammo2;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_35, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo2 = func_926(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, hParam0, ammo2);
	}

	return;
}

BOOL func_679(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, BOOL bParam6) // Position - 0x2E685 Hash - 0x80B0B89C ^0x78EC1C55
{
	var outGuid;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(func_571(bParam6), &uParam0, hParam4, &outGuid))
		return false;

	if (!func_758(outGuid, panParam5, bParam6, false))
		return false;

	return true;
}

BOOL func_680(Hash hParam0, Any* panParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x2E6C9 Hash - 0x86E39CDA ^0xCF922D1
{
	!func_332(hParam0, 0);

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_839(hParam0, panParam2, iParam3, bParam5, false))
		return 0;

	if (!func_524(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_571(false), panParam1, panParam2, hParam0, panParam2->f_4, iParam3, hParam4))
		return 0;

	return 1;
}

BOOL func_681(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x2E72B Hash - 0x1DD1BE14 ^0x90608F32
{
	var unk;

	if (!func_524(false))
		return func_927(uParam0, bParam4, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_758(uParam0, &unk, false, false))
		return false;

	if (unk.f_10 == bParam4)
		return true;

	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_571(false), &uParam0, bParam4))
		return false;

	return true;
}

BOOL func_682(int iParam0) // Position - 0x2E79E Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_683(int iParam0) // Position - 0x2E7B1 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

Hash func_684(eStackSize essParam0) // Position - 0x2E7DB Hash - 0xEB890713 ^0xB40CD388
{
	Hash hash;
	int i;

	hash = 0;

	if (!func_430(essParam0))
	{
		for (i = 0; i < 3; i = i + 1)
		{
			if (Global_1357549.f_1675[i /*5*/].f_1 == essParam0)
			{
				Global_1360165[essParam0 /*1157*/].f_126 = Global_1357549.f_1675[i /*5*/].f_4;
				return Global_1357549.f_1675[i /*5*/];
			}
		}
	}

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1357549.f_1675[i /*5*/] != 0 && Global_1357549.f_1675[i /*5*/].f_1 == -1)
		{
			hash = Global_1357549.f_1675[i /*5*/];
			break;
		}
	}

	if (!func_430(essParam0))
	{
		if (hash != 0)
		{
			Global_1357549.f_1675[i /*5*/].f_1 = essParam0;
			Global_1360165[essParam0 /*1157*/].f_126 = Global_1357549.f_1675[i /*5*/].f_4;
		}
	}

	return hash;
}

Ped func_685(eStackSize essParam0) // Position - 0x2E8BC Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_430(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
		Global_1360165[essParam0 /*1157*/] = 0;

	return Global_1360165[essParam0 /*1157*/];
}

void func_686(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x2E8F6 Hash - 0x9830C0A9 ^0xB5A0A48E
{
	int num;
	int i;
	int num2;

	if (!func_332(hParam1, 0))
		return;

	num = -1;
	i = 0;

	for (i = 0; i < 200; i = i + 1)
	{
		if (uParam0->f_1[i /*5*/] == hParam1)
		{
			uParam0->f_1[i /*5*/].f_1 = uParam0->f_1[i /*5*/].f_1 + iParam2;
			uParam0->f_1[i /*5*/].f_3 = func_457();
			uParam0->f_1[i /*5*/].f_4 = 0;
			uParam0->f_1003 = uParam0->f_1003 + iParam2;
			uParam0->f_1004 = uParam0->f_1004 + (BUILTIN::TO_FLOAT(iParam2) * (float)func_928(hParam1, 816454899, false));
			uParam0->f_1005 = uParam0->f_1005 + (iParam2 * func_929(hParam1));
			uParam0->f_1[i /*5*/].f_2 = iParam3;
			return;
		}
		else if (uParam0->f_1[i /*5*/] == 0 && num == -1)
		{
			num = i;
		}
	}

	if (num == -1)
		return;

	num2 = iParam2;
	uParam0->f_1002 == 0 || uParam0->f_1002 == 1;
	uParam0->f_1[num /*5*/] = hParam1;
	uParam0->f_1[num /*5*/].f_1 = num2;
	uParam0->f_1[num /*5*/].f_3 = func_457();
	uParam0->f_1[num /*5*/].f_4 = 0;
	uParam0->f_1[num /*5*/].f_2 = iParam3;
	*uParam0 = *uParam0 + 1;
	uParam0->f_1003 = uParam0->f_1003 + iParam2;
	uParam0->f_1004 = uParam0->f_1004 + (BUILTIN::TO_FLOAT(iParam2) * (float)func_928(hParam1, 816454899, false));
	uParam0->f_1005 = uParam0->f_1005 + (iParam2 * func_929(hParam1));
	return;
}

void func_687(var uParam0, int iParam1) // Position - 0x2EA75 Hash - 0xD05180BA ^0x39589262
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

void func_688(var uParam0, int iParam1) // Position - 0x2EAFB Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_689(var uParam0, int iParam1) // Position - 0x2EB37 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_707(*uParam0);
	num2 = func_706(*uParam0);

	if (iParam1 < 1 || iParam1 > func_712(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_690(var uParam0, int iParam1) // Position - 0x2EB8A Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_691(var uParam0, int iParam1) // Position - 0x2EBC5 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_692(var uParam0, int iParam1) // Position - 0x2EBFE Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

void func_693(int iParam0, int iParam1) // Position - 0x2EC36 Hash - 0x298D544D ^0x6D9BD009
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}

	if (iParam1 == 0 || iParam1 == -1)
		func_930(iParam0);
	else
		func_931(iParam0, iParam1);

	func_932();
	return;
}

BOOL func_694(int iParam0) // Position - 0x2EC7E Hash - 0x2BF73E21 ^0x2BF73E21
{
	return iParam0 > 0 && iParam0 < 13;
}

void func_695(int iParam0, int iParam1) // Position - 0x2EC94 Hash - 0xB1BDF10D ^0x396318CE
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_2 = iParam1;
	return;
}

void func_696(int iParam0, int iParam1) // Position - 0x2ECB4 Hash - 0xB1BDF10D ^0xB21C30B2
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_3 = iParam1;
	return;
}

void func_697(int iParam0, int iParam1) // Position - 0x2ECD4 Hash - 0xB1BDF10D ^0x44EF8C18
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_4 = iParam1;
	return;
}

void func_698(int iParam0, BOOL bParam1) // Position - 0x2ECF4 Hash - 0x5CF9514E ^0x8B449709
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = bParam1;
		return;
	}

	Global_1058888.f_428[iParam0 /*2*/] = bParam1;
	return;
}

void func_699(int iParam0, Hash hParam1) // Position - 0x2ED1F Hash - 0x634DE727 ^0xC7F71E9D
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = hParam1;
		return;
	}

	Global_1058888.f_428[iParam0 /*2*/].f_1 = hParam1;
	return;
}

int func_700(var uParam0, var uParam1, var uParam2) // Position - 0x2ED4E Hash - 0x5486635E ^0x2FAAB3B2
{
	int num;

	num = func_933(uParam0, 0f, 0f, 0, 2);
	return func_933(uParam0, Global_1894052[num /*3*/].f_1, Global_1894052[num /*3*/].f_2, Global_1894052[num /*3*/], 4);
}

BOOL func_701(int iParam0) // Position - 0x2ED89 Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_702(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2EDC8 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_701(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_934(*uParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_935(num);
	*uParam0 = 0;
	return;
}

BOOL func_703(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, BOOL bParam7) // Position - 0x2EE1C Hash - 0x6EB69AE6 ^0xE9AB1EC1
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

int func_704(int iParam0) // Position - 0x2EE4C Hash - 0x696B5244 ^0x696B5244
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

BOOL func_705(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int* piParam6, BOOL bParam7) // Position - 0x2EFCD Hash - 0x75EEBFEF ^0xD9E5F860
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(piParam6, &uParam0))
		return true;
	else
		bParam7;

	return false;
}

int func_706(int iParam0) // Position - 0x2EFF3 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_707(int iParam0) // Position - 0x2F018 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_708(int iParam0) // Position - 0x2F02B Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_709(int iParam0) // Position - 0x2F03E Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_710(int iParam0) // Position - 0x2F051 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_711(int iParam0) // Position - 0x2F063 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_712(int iParam0, int iParam1) // Position - 0x2F075 Hash - 0x893AC59E ^0x893AC59E
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

int func_713(int iParam0, var uParam1, var uParam2) // Position - 0x2F10F Hash - 0x44294A7 ^0x44294A7
{
	int num;

	num = func_936(iParam0, 1);
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

void func_714(int iParam0) // Position - 0x2F131 Hash - 0xE426C523 ^0x42DA665A
{
	*iParam0 = 176656832;
	iParam0->f_1 = -15;
	iParam0->f_2 = 1017034651;
	iParam0->f_3 = 0;
	iParam0->f_4 = 0;
	return;
}

BOOL func_715(int iParam0) // Position - 0x2F15B Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 63:
			return true;
	}

	return false;
}

void func_716(int iParam0, eStackSize essParam1) // Position - 0x2F185 Hash - 0x3A863EAC ^0xECB3FAF8
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = essParam1;
		return;
	}

	Global_42606[iParam0 /*4*/] = essParam1;
	return;
}

void func_717(int iParam0, int iParam1) // Position - 0x2F1B2 Hash - 0x90093024 ^0xBB5CF78A
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_1 = iParam1;
		return;
	}

	Global_42606[iParam0 /*4*/].f_1 = iParam1;
	return;
}

void func_718(int iParam0, int iParam1) // Position - 0x2F1E3 Hash - 0x90093024 ^0x830112D0
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_2 = iParam1;
		return;
	}

	Global_42606[iParam0 /*4*/].f_2 = iParam1;
	return;
}

void func_719() // Position - 0x2F214 Hash - 0x480C4EB2 ^0xAA61B05F
{
	func_303(-939420910);
	func_303(-1187950766);
	func_303(356365161);
	func_303(753127042);
	func_303(-2038424081);
	func_303(1884271742);
	func_303(459290420);
	return;
}

void func_720() // Position - 0x2F25B Hash - 0xD73EDD4 ^0xB34A84FD
{
	func_303(704802028);
	func_303(588987611);
	func_303(2008888900);
	func_303(1649996811);
	func_303(227918160);
	func_303(168171957);
	func_303(1193080109);
	func_303(-491981251);
	func_303(-639037538);
	func_303(-618620429);
	return;
}

BOOL func_721(int iParam0) // Position - 0x2F2BD Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_464(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x2F30C Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_723(var uParam0, int iParam1, int iParam2) // Position - 0x2F336 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

int func_724() // Position - 0x2F36D Hash - 0x4228A1C2 ^0xF4FC0436
{
	return Global_1109000.f_245;
}

void func_725(eStackSize essParam0, BOOL bParam1) // Position - 0x2F37B Hash - 0x2B17ED40 ^0x23FC9AA5
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[essParam0 /*11*/] = Global_23118[essParam0 /*11*/] - Global_23118[essParam0 /*11*/] && bParam1;
		return;
	}

	Global_1058888.f_40545[essParam0 /*11*/] = Global_1058888.f_40545[essParam0 /*11*/] - Global_1058888.f_40545[essParam0 /*11*/] && bParam1;
	return;
}

int func_726() // Position - 0x2F3D4 Hash - 0x38870270 ^0x38870270
{
	return Global_40.f_4283.f_324;
}

void func_727(int iParam0, BOOL bParam1) // Position - 0x2F3E5 Hash - 0xDB1BD03F ^0xDB1BD03F
{
	if (iParam0 <= 0)
		return;

	if (Global_40.f_4283.f_324 + iParam0 < 0)
		return;

	func_937(Global_40.f_4283.f_324 + iParam0);

	if (bParam1)
		func_938(9, iParam0);

	return;
}

void func_728(int iParam0) // Position - 0x2F427 Hash - 0x34179CA ^0xE7E1836A
{
	if (iParam0 <= 0)
		return;

	if (!func_939(310186733))
	{
		Global_40.f_4283.f_307.f_3 = Global_40.f_4283.f_307.f_3 + iParam0;
	
		if (Global_40.f_4283.f_307.f_3 >= 5000)
			func_940(310186733);
	}

	return;
}

void func_729(int iParam0) // Position - 0x2F478 Hash - 0x78EB69E7 ^0x6462D741
{
	if (iParam0 <= 0)
		return;

	if (!func_939(-1959946884))
	{
		Global_40.f_4283.f_307.f_4 = Global_40.f_4283.f_307.f_4 + iParam0;
	
		if (Global_40.f_4283.f_307.f_4 >= 3)
			func_940(-1959946884);
	}

	return;
}

BOOL func_730(eStackSize essParam0) // Position - 0x2F4C7 Hash - 0x76C5FB13 ^0x76C5FB13
{
	if (essParam0 < 0 || essParam0 >= 95)
		return false;

	return true;
}

BOOL func_731() // Position - 0x2F4E6 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1946054.f_2792;
}

int func_732(Hash hParam0) // Position - 0x2F4F5 Hash - 0x497B15BA ^0x497B15BA
{
	switch (hParam0)
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

void func_733(int iParam0, int iParam1) // Position - 0x2F545 Hash - 0x2FE2A1EE ^0xFDF1F02E
{
	Global_1946054.f_2657.f_26.f_6 = Global_1946054.f_2657.f_26.f_6 - Global_1946054.f_2657.f_26.f_6 && iParam0;
	return;
}

int func_734(int iParam0) // Position - 0x2F572 Hash - 0x355AD4D4 ^0x355AD4D4
{
	if (!func_289(iParam0))
		return 0;

	return func_941(func_449(iParam0));
}

void func_735(int iParam0, int iParam1) // Position - 0x2F592 Hash - 0xB0EA57B9 ^0x395CD962
{
	Global_1946054.f_2657.f_26.f_6 = Global_1946054.f_2657.f_26.f_6 || iParam0;
	return;
}

void func_736(int iParam0, Hash hParam1, int iParam2) // Position - 0x2F5B3 Hash - 0x1D548967 ^0xFA23EDAC
{
	int num;
	int num2;
	int num3;

	num3 = func_534(iParam0, 1);
	num2 = iParam2;
	num2.f_1 = hParam1;
	num2.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&num2);

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&num2))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num2, -624749060))
		{
		}
		else
		{
			func_942(num3, func_351(num), 7);
		}
	}

	return;
}

void func_737(int iParam0, Hash hParam1, int iParam2) // Position - 0x2F606 Hash - 0xA5E85797 ^0x659F2C2C
{
	Hash hash;
	int num;
	int num2;

	num = iParam2;
	num.f_1 = hParam1;
	num.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&num);

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&num))
	{
		if (Global_1946054.f_57[iParam0 /*11*/].f_1 >= 5)
			return;
	
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num, joaat("tag")))
		{
		}
		else
		{
			Global_1946054.f_57[iParam0 /*11*/].f_2[Global_1946054.f_57[iParam0 /*11*/].f_1] = hash;
			Global_1946054.f_57[iParam0 /*11*/].f_1 = Global_1946054.f_57[iParam0 /*11*/].f_1 + 1;
			num2 = func_943(hash);
		
			if (num2 == -1)
			{
			}
			else
			{
				func_944(num2, Global_1946054.f_57[iParam0 /*11*/].f_9, 9);
			}
		}
	}

	return;
}

BOOL func_738(Hash hParam0, var uParam1) // Position - 0x2F6B1 Hash - 0x4A27386E ^0xBC93C855
{
	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < Global_1946054.f_2657.f_19)
	{
		if (hParam0 == Global_1946054.f_2657[*uParam1])
			return true;
	
		*uParam1 = *uParam1 + 1;
	}

	return false;
}

void func_739(int iParam0, int iParam1, int iParam2) // Position - 0x2F6F1 Hash - 0x76104A96 ^0xBBB9FCC8
{
	int num;
	int num2;

	num2 = func_945(iParam1);
	func_946(iParam1, iParam2);

	if (num2 >= 0 && iParam0->f_26 > 0)
	{
		func_947(&(iParam0->f_26), num2);
	
		if (func_948(iParam0->f_26, &num))
			func_949(num, num2);
	}

	return;
}

int func_740(int iParam0) // Position - 0x2F73A Hash - 0x6EC15CF9 ^0xE613EBE0
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

void func_741(Hash hParam0, var uParam1, var uParam2) // Position - 0x2F7BB Hash - 0x38E6C2DD ^0xA4FE6475
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

BOOL func_742() // Position - 0x2F9C7 Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1911774;
}

void func_743(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0x2F9D4 Hash - 0xD988E1C5 ^0xEB41314B
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = hParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = iParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = iParam3;

	if (Global_1911774.f_3 < 20)
		Global_1911774.f_3 = Global_1911774.f_3 + 1;

	return;
}

var func_744(BOOL bParam0, var uParam1, var uParam2) // Position - 0x2FA3E Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_745(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x2FA55 Hash - 0x92B705D3 ^0xB783F681
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

const char* func_746(const char* sParam0, int iParam1) // Position - 0x2FB48 Hash - 0x9E99F03 ^0xF28D0201
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_747(const char* sParam0, const char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x2FB62 Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_950(sParam0, sParam1, hParam2);
	return num2;
}

struct<2> func_748(int iParam0) // Position - 0x2FBC5 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

int func_749(Hash hParam0, BOOL bParam1) // Position - 0x2FBD5 Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_564(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_751(&unk, func_750(false));

	if (!func_565(&unk, &num, &num2, false))
		return 0;

	func_566(num);
	return num2;
}

struct<4> func_750(BOOL bParam0) // Position - 0x2FC33 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_571(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_569(923904168, func_754(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_569(923904168, func_754(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_569(923904168, func_754(bParam0), -740156546, false);
}

void func_751(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x2FCC8 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_752(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2FCE3 Hash - 0x7CDDEAB4 ^0x7CDDEAB4
{
	int num;

	if (func_925(hParam0))
		return false;

	if (iParam1 <= 0)
		return false;

	if (!func_524(bParam4))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_571(bParam4), hParam0, iParam1, hParam2))
		return false;

	return true;
}

void func_753(Hash hParam0, int iParam1) // Position - 0x2FD2F Hash - 0x86EED885 ^0xCCBC7389
{
	int num;

	num = 0;

	if (func_115() == -1)
	{
		if (func_606(43))
		{
			if (func_547(hParam0, 412399755))
			{
				func_886(joaat("exotic_stage_01"));
			
				if (func_887() == 0)
				{
					func_308(false, 10);
					num = func_951(hParam0, iParam1, 1);
				
					if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
						if (func_889(hParam0) < func_890(hParam0))
							func_613(43, hParam0, iParam1, joaat("exotic_stage_01"), num, true, -1, false);
				}
			}
		}
	
		if (func_606(44))
		{
			if (func_547(hParam0, 709057512))
			{
				func_886(joaat("exotic_stage_02"));
			
				if (func_887() == 1)
				{
					func_308(false, 10);
					num = func_951(hParam0, iParam1, 2);
				
					if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
						if (func_889(hParam0) < func_890(hParam0))
							func_613(43, hParam0, iParam1, joaat("exotic_stage_02"), num, true, -1, false);
				}
			}
		}
	
		if (!func_606(45))
		{
			if (func_547(hParam0, -1478961327))
			{
				func_886(joaat("exotic_stage_03"));
			
				if (func_887() == 2)
				{
					func_308(false, 10);
					num = func_951(hParam0, iParam1, 4);
				
					if (hParam0 == joaat("PROVISION_GATOR_EGG") || hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
						if (func_889(hParam0) < func_890(hParam0))
							func_613(43, hParam0, iParam1, joaat("exotic_stage_03"), num, true, -1, false);
				}
			}
		}
	
		if (!func_606(46))
		{
			if (func_547(hParam0, -1238404098))
			{
				func_886(joaat("exotic_stage_04"));
			
				if (func_887() == 3)
				{
					func_308(false, 10);
					num = func_951(hParam0, iParam1, 8);
				
					if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
						if (func_889(hParam0) < func_890(hParam0))
							func_613(43, hParam0, iParam1, joaat("exotic_stage_04"), num, true, -1, false);
				}
			}
		}
	
		if (!func_606(47))
		{
			if (func_547(hParam0, 1160548794))
			{
				func_886(joaat("exotic_stage_05"));
			
				if (func_887() == 4)
				{
					func_308(false, 10);
					num = func_951(hParam0, iParam1, 16);
				
					if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
						if (func_889(hParam0) < func_890(hParam0))
							func_613(43, hParam0, iParam1, joaat("exotic_stage_05"), num, true, -1, false);
				}
			}
		}
	}

	return;
}

struct<4> func_754(BOOL bParam0) // Position - 0x30015 Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_569(joaat("character"), func_952(), joaat("SLOTID_NONE"), bParam0);
}

BOOL func_755(Hash hParam0, BOOL bParam1) // Position - 0x30031 Hash - 0x62864AB ^0xBC339691
{
	if (func_371(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_429(24);
		else
			return true;

	return false;
}

struct<4> func_756(BOOL bParam0) // Position - 0x3006A Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_571(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_569(271701509, func_754(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_569(271701509, func_754(bParam0), 12999093, false);
}

BOOL func_757(Hash hParam0, Hash hParam1) // Position - 0x300CE Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_371(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_758(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0x3012D Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_571(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

Hash func_759(int iParam0) // Position - 0x3015D Hash - 0xB8EC44B7 ^0xA3A17143
{
	switch (iParam0)
	{
		case 0:
			return -888790689;
	
		case 1:
			return -2126063412;
	
		case 2:
			return -368305354;
	
		case 3:
			return -1500843424;
	
		case 4:
			return 2034750397;
	
		case 5:
			return -1689805015;
	
		case 6:
			return 1855421528;
	
		case 7:
			return -1844483462;
	
		case 8:
			return -618101597;
	
		case 9:
			return -516195177;
	
		case 10:
			return 1193363351;
	
		default:
		
	}

	return 0;
}

int func_760(Hash hParam0, BOOL bParam1, Hash hParam2, BOOL bParam3) // Position - 0x30208 Hash - 0x3A135443 ^0x969430D9
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

Hash func_761(int iParam0) // Position - 0x3024C Hash - 0xB9EF913B ^0x6D203F4E
{
	if (func_339() == 1160113249)
	{
		switch (iParam0)
		{
			case 0:
				return 1331190543;
		
			case 1:
				return 1336948195;
		
			case 2:
				return 216184750;
		
			default:
			
		}
	
		return 0;
	}

	switch (iParam0)
	{
		case 0:
			return joaat("CLOTHING_ITEM_BEARD_SINGLE");
	
		case 1:
			return joaat("CLOTHING_ITEM_CHOPS_NORMAL");
	
		case 2:
			return joaat("CLOTHING_ITEM_STACHE_NORMAL");
	
		default:
		
	}

	return 0;
}

void func_762(var uParam0, int iParam1) // Position - 0x302C9 Hash - 0xECD5EA69 ^0xF77DE90C
{
	Hash hash;
	int num;
	BOOL flag;

	flag = false;

	if (func_339() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		flag = true;

	hash = func_953(iParam1);

	if (hash != 0)
	{
		num = 1;
	
		if (hash == -1906834168 && uParam0->f_1[num /*3*/] != func_954() || hash == -452152720 || hash == -70852636)
		{
			uParam0->f_1[num /*3*/].f_1 = joaat("base");
			Global_1946054.f_2656 = iParam1;
		}
		else if (func_760(uParam0->f_1[num /*3*/], flag, hash, func_115() != -1) != -1)
		{
			uParam0->f_1[num /*3*/].f_1 = hash;
			Global_1946054.f_2656 = iParam1;
		}
	}

	return;
}

void func_763(int iParam0, int iParam1, int iParam2) // Position - 0x3037A Hash - 0x194BB6D7 ^0x6A98F372
{
	if (*iParam0 + 1 >= 10)
		return;

	if (!func_955(iParam0, 1))
		func_956(iParam0, 1);

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

BOOL func_764(var uParam0, eStackSize essParam1, Hash hParam2) // Position - 0x303C1 Hash - 0xF7A7FB9C ^0xF7A7FB9C
{
	if (essParam1 == -1)
		return false;

	if (hParam2 != 0 && func_531(essParam1) != hParam2)
		return false;

	if (func_528(2, essParam1))
	{
		func_343(uParam0, essParam1);
		return true;
	}

	return false;
}

BOOL func_765(BOOL bParam0) // Position - 0x30403 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1946054 && bParam0 != false;
}

void func_766(int iParam0) // Position - 0x30414 Hash - 0x65A082AE ^0x65A082AE
{
	func_540(iParam0, 8, 6);
	return;
}

void func_767(int iParam0) // Position - 0x30425 Hash - 0x65A082AE ^0x65A082AE
{
	func_541(iParam0, 8, 6);
	return;
}

void func_768(var uParam0, BOOL bParam1, int iParam2) // Position - 0x30436 Hash - 0xE06CF505 ^0xBC49746F
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

	flag = func_115() != -1;
	flag2 = func_957(0);

	if (func_765(32768))
		num2 = num2 + 1;

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num5 = func_534(num, 1);
		
			if (func_539(num5, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
			{
			}
			else if (func_539(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
			{
			}
			else
			{
				num4 = func_958(uParam0->f_1[num /*3*/], num5, flag2, flag);
			
				if (num2 + num4 > 31)
				{
					num3 = i;
					break;
				}
			
				num2 = num2 + num4;
			}
		}
	}

	num6 = func_959(uParam0);

	if (num3 > 0)
	{
		if (!func_765(524288))
		{
			func_532(524288);
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
				num5 = func_534(num, 1);
			
				if (func_539(num5, 8))
				{
				}
				else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
				{
				}
				else if (func_539(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
				{
				}
				else
				{
					num4 = func_958(uParam0->f_1[num /*3*/], num5, flag2, flag);
				
					if (num2 + num4 > 31)
					{
						uParam0->f_1[num /*3*/] = Global_1946054.f_57[num /*11*/];
						uParam0->f_1[num /*3*/].f_1 = 0;
					
						if (bParam1)
							func_543(num, iParam2);
					}
				
					num2 = num2 + num4;
				}
			}
		}
	}

	if (num2 + num6 < 31)
		func_513(524288);

	return;
}

void func_769(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x30653 Hash - 0x21CB5355 ^0x21CB5355
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
		
			if (func_960(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_961(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_532(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_960(iParam0))
				return;
		
			func_961(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_532(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_904(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

BOOL func_770(int iParam0) // Position - 0x3085F Hash - 0x5DCECD10 ^0x5DCECD10
{
	if (iParam0 == -1)
		return false;

	return true;
}

BOOL func_771(int iParam0) // Position - 0x30872 Hash - 0x34617548 ^0x34617548
{
	if (iParam0 <= -1 || iParam0 > 10)
		return false;

	return true;
}

BOOL func_772(int iParam0) // Position - 0x30891 Hash - 0x77F2BCDC ^0x977DC5C0
{
	return Global_40.f_7731[iParam0 /*5*/].f_4 > 0;
}

void func_773(int iParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x308A7 Hash - 0x6C4E6E52 ^0x6C4E6E52
{
	var unk;
	var unk2;

	switch (Global_40.f_7731[iParam0 /*5*/])
	{
		case 0:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
	
		case 1:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
	
		case 2:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
	
		case 3:
			*uParam1 = 8;
			*uParam2 = 0;
			break;
	
		case 4:
			*uParam1 = 12;
			*uParam2 = 0;
			break;
	
		case 5:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
	
		case 6:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
	
		case 7:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
	
		case 8:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
	
		case 9:
			*uParam1 = 52;
			*uParam2 = 0;
			break;
	
		case 10:
			*uParam1 = 52;
			*uParam2 = 0;
			break;
	}

	if (bParam3)
		func_963(uParam1, uParam2, &unk, &unk2, false, func_962(iParam0));

	return;
}

int func_774(int iParam0) // Position - 0x3099A Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_7731[iParam0 /*5*/];
}

int func_775(Hash hParam0) // Position - 0x309AC Hash - 0xAD4E1DF8 ^0x7BAA459F
{
	int num;
	int num2;

	num = 0;
	num2 = 22;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_547(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 37;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_547(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 12;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_547(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 29;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_547(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 30;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_547(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 31;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_547(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	return num;
}

void func_776(int iParam0) // Position - 0x30AFD Hash - 0x20214C72 ^0x20214C72
{
	func_964(&(Global_1946054.f_2589), iParam0);
	return;
}

Hash func_777(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3) // Position - 0x30B12 Hash - 0x68649B2F ^0x68649B2F
{
	BOOL flag;

	flag = func_957(0);

	if (hParam2 != 0 && func_760(hParam0, flag, hParam2, bParam3) != -1)
		return hParam2;

	if (func_354(hParam0, func_534(iParam1, 1), &hParam2))
		return hParam2;

	return 0;
}

BOOL func_778(int iParam0) // Position - 0x30B58 Hash - 0x71C807FE ^0x71C807FE
{
	if (iParam0 <= -1 || iParam0 > 9)
		return false;

	return true;
}

BOOL func_779() // Position - 0x30B77 Hash - 0xC8060AD0 ^0x368DD84C
{
	return Global_40.f_7748.f_6 > 0;
}

void func_780(int iParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x30B89 Hash - 0x549CBB93 ^0x549CBB93
{
	var unk;
	var unk2;

	switch (iParam0)
	{
		case 0:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
	
		case 1:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
	
		case 2:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
	
		case 3:
			*uParam1 = 8;
			*uParam2 = 0;
			break;
	
		case 4:
			*uParam1 = 12;
			*uParam2 = 0;
			break;
	
		case 5:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
	
		case 6:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
	
		case 7:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
	
		case 8:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
	
		case 9:
			*uParam1 = 52;
			*uParam2 = 0;
			break;
	}

	if (bParam3)
		func_963(uParam1, uParam2, &unk, &unk2, false, func_965());

	return;
}

int func_781() // Position - 0x30C60 Hash - 0xC5B83CF5 ^0xD520990E
{
	return Global_40.f_7748.f_1;
}

void func_782(var uParam0) // Position - 0x30C70 Hash - 0xB6E53040 ^0xB4A5DF25
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_966(&(uParam0->f_3));
	return;
}

void func_783(var uParam0) // Position - 0x30C8E Hash - 0xEA76ACA4 ^0x1B09C151
{
	if (uParam0->f_3)
		return;

	func_967(&(uParam0->f_3), *uParam0, uParam0->f_2);
	return;
}

int func_784(BOOL bParam0) // Position - 0x30CAF Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

float func_785() // Position - 0x30CC2 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_786(var uParam0, int iParam1) // Position - 0x30CF4 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_787(var uParam0, int iParam1) // Position - 0x30D05 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

int func_788(Hash hParam0, var uParam1) // Position - 0x30D1A Hash - 0xAD15D504 ^0x7CCA8C1E
{
	var unk;
	int num;
	int num2;

	num2 = 0;

	if (!func_968(hParam0, func_339()))
		return 0;

	num = func_350(func_339());
	num.f_1 = hParam0;
	DATAFILE::_PARSEDDATA_GET_FILE(&num);

	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&num))
		return 0;

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&num))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&unk, &num, joaat("Component")))
		{
		}
		else
		{
			uParam1->[num2] = unk;
			num2 = num2 + 1;
		}
	}

	return num2;
}

int func_789(Hash hParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x30D8B Hash - 0x98D198FE ^0x14244304
{
	int num;
	int num2;
	int i;
	int j;
	eStackSize stackSize;
	var unk;
	int num3;
	var unk15;

	unk.f_9 = joaat("SLOTID_NONE");
	num3 = func_350(func_339());
	unk15 = { func_564(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), -999503751, 0) };

	if (!func_565(&unk15, &num, &num2, bParam3))
		return 0;

	for (i = 0; i < num2; i = i + 1)
	{
		if (!func_673(&unk, i, num, num2))
		{
		}
		else if (hParam0 == unk.f_4)
		{
		}
		else
		{
			stackSize = func_793(unk.f_4);
		
			if (stackSize >= 0 && stackSize <= 5)
			{
			}
			else
			{
				for (j = *uParam2 - 1; j >= 0; j = j + -1)
				{
					func_542(&(Global_1946054.f_964), num3, unk.f_4, joaat("Component"), 1, uParam1->[j]);
					DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));
				
					if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&(Global_1946054.f_964)))
					{
					}
					else
					{
						*uParam2 = *uParam2 - 1;
						uParam1->[j] = uParam1->[*uParam2];
						uParam1->[*uParam2] = 0;
					}
				}
			}
		}
	}

	func_566(num);
	return 1;
}

void func_790(Hash hParam0, var uParam1) // Position - 0x30EA1 Hash - 0x78605AC7 ^0xE339C812
{
	int i;
	BOOL flag;
	Hash hash;

	flag = false;
	hash = hParam0;

	if (!func_738(hash, &i))
		return;

	for (i = 0; i < Global_26796.f_627.f_121.f_19; i = i + 1)
	{
		if (hash == Global_26796.f_627.f_121[i])
		{
			flag = true;
			break;
		}
	}

	if (!flag)
		return;

	if (Global_26796.f_627.f_121.f_19 == 1)
	{
		Global_26796.f_627.f_121.f_19 = 0;
		*uParam1 = 0;
		Global_26796.f_627.f_121[0] = 0;
		return;
	}

	Global_26796.f_627.f_121.f_19 = Global_26796.f_627.f_121.f_19 - 1;
	*uParam1 = *uParam1 - 1;
	Global_26796.f_627.f_121[i] = Global_26796.f_627.f_121[Global_26796.f_627.f_121.f_19];
	Global_26796.f_627.f_121[Global_26796.f_627.f_121.f_19] = 0;
	return;
}

void func_791(var uParam0) // Position - 0x30F79 Hash - 0xA72C1C9C ^0xF572AAFB
{
	int i;

	*uParam0 = Global_1946054.f_1497;

	for (i = 0; i < 39; i = i + 1)
	{
		uParam0->f_1[i /*3*/] = { Global_1946054.f_1497.f_1[i /*3*/] };
	}

	return;
}

void func_792(eStackSize essParam0) // Position - 0x30FB7 Hash - 0xFA8AF984 ^0x28B499F1
{
	int i;
	Hash hash;

	if (func_115() == -1)
	{
		Global_26796.f_26[essParam0 /*120*/] = false;
		Global_26796.f_26[essParam0 /*120*/].f_1 = 0;
	
		for (i = 0; i < 39; i = i + 1)
		{
			hash = Global_1946054.f_57[i /*11*/];
			func_342(&hash, i, essParam0);
		}
	
		return;
	}

	Global_36638.f_45.f_350.f_26[essParam0 /*120*/] = false;
	Global_36638.f_45.f_350.f_26[essParam0 /*120*/].f_1 = 0;

	for (i = 0; i < 39; i = i + 1)
	{
		hash = Global_1946054.f_57[i /*11*/];
		func_548(&hash, i, essParam0);
	}

	return;
}

eStackSize func_793(Hash hParam0) // Position - 0x31052 Hash - 0x9830D1FB ^0x9830D1FB
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

void func_794(eStackSize essParam0, BOOL bParam1) // Position - 0x31465 Hash - 0x5B5DA81B ^0x5B5DA81B
{
	BOOL flag;

	if (!func_730(essParam0))
		return;

	flag = Global_40.f_7157[essParam0 /*3*/] && bParam1;
	Global_40.f_7157[essParam0 /*3*/] = Global_40.f_7157[essParam0 /*3*/] - flag;
	return;
}

int func_795(Ped pedParam0, eStackSize essParam1, BOOL bParam2, BOOL bParam3, Hash hParam4) // Position - 0x314A0 Hash - 0x72B1BAB5 ^0x553ECF8
{
	Hash hash;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	if (essParam1 == -1)
		return 0;

	hash = func_359(essParam1);

	if (hParam4 != 0)
		hash = hParam4;
	else if (essParam1 > -1 && essParam1 <= 5)
		hash = func_531(essParam1);

	if (bParam3 && func_969(essParam1, 4096) && Global_1946054.f_1497 == hParam4)
		return 1;

	Global_1905941 = essParam1;

	if (essParam1 > 5 || hParam4 != 0 && !func_968(hash, Global_1946054.f_1))
		return 0;

	if (bParam2)
	{
		func_794(Global_40.f_7729, 4096);
		func_503(Global_1905941, 4096);
		Global_40.f_7729 = Global_1905941;
	}

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		func_970(pedParam0);

	func_971();

	if (!func_972(essParam1))
		func_973(hash, pedParam0, func_360(essParam1), true, false, true);

	func_974(pedParam0);
	return 1;
}

void func_796(var uParam0) // Position - 0x315AF Hash - 0xA4B72113 ^0x62A5EAE1
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return;
}

BOOL func_797(Hash hParam0, var uParam1) // Position - 0x315CA Hash - 0x9965E721 ^0x4526F41
{
	var unk;

	if (!func_975(856287005, hParam0))
		return false;

	unk = { func_579() };
	*uParam1 = func_976(unk, hParam0, false);

	if (!func_332(*uParam1, 0))
		return false;

	return true;
}

void func_798(var uParam0) // Position - 0x3160C Hash - 0x99F7243D ^0x36B2A3DE
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	return;
}

int func_799(int iParam0) // Position - 0x31631 Hash - 0xD824C907 ^0x698D3C9F
{
	if (func_807())
	{
		switch (iParam0)
		{
			case -1629133289:
				return joaat("horse_equipment_horn_new_000");
		
			case -1555511632:
				return joaat("horse_equipment_horse_saddlebag_used_000");
		
			case -1346384396:
				return joaat("horse_equipment_horse_blanket_00_new_000");
		
			case -712836614:
				return joaat("horse_equipment_motherhubbard_01_stock_new_saddle_000");
		
			case 599669344:
				return joaat("horse_equipment_horse_bedroll_01_used_000");
		
			case 1302066700:
				return joaat("horse_equipment_stirrup_new_000");
		}
	}
	else if (func_814())
	{
		switch (iParam0)
		{
			case -1629133289:
				return joaat("horse_equipment_horn_new_012");
		
			case -1555511632:
				return joaat("horse_equipment_horse_saddlebag_new_003");
		
			case -1346384396:
				return joaat("horse_equipment_horse_blanket_09_new_001");
		
			case -712836614:
				return joaat("horse_equipment_western_04_stock_new_saddle_005");
		
			case 599669344:
				return joaat("horse_equipment_horse_bedroll_00_used_003");
		
			case 1302066700:
				return joaat("horse_equipment_stirrup_new_006");
		}
	}

	return 0;
}

void func_800(var uParam0, int iParam1) // Position - 0x31727 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

void func_801(var uParam0, int iParam1) // Position - 0x31734 Hash - 0x4F8BE4B5 ^0x2E599B99
{
	uParam0->f_1 = iParam1;
	return;
}

void func_802(var uParam0, int iParam1) // Position - 0x31742 Hash - 0x4F8BE4B5 ^0x5AE41537
{
	uParam0->f_2 = iParam1;
	return;
}

void func_803(var uParam0, int iParam1) // Position - 0x31750 Hash - 0x4F8BE4B5 ^0xCB719C1
{
	uParam0->f_3 = iParam1;
	return;
}

void func_804(var uParam0, int iParam1) // Position - 0x3175E Hash - 0x4F8BE4B5 ^0xFF22C7C
{
	uParam0->f_4 = iParam1;
	return;
}

void func_805(var uParam0, int iParam1) // Position - 0x3176C Hash - 0x4F8BE4B5 ^0x8A18C31F
{
	uParam0->f_5 = iParam1;
	return;
}

BOOL func_806(Hash hParam0, BOOL bParam1) // Position - 0x3177A Hash - 0x148943C8 ^0x2BF2CC5F
{
	var unk;
	var unk6;
	Hash hash;
	var unk10;
	var unk14;
	Hash hash2;
	Hash hash3;
	Hash hash4;
	Hash hash5;

	if (!func_332(hParam0, 0))
		return false;

	if (!func_977(hParam0, 856287005, &hash, &unk6, &unk, true, 0))
		return false;

	unk10 = { func_579() };
	unk14 = { func_569(hParam0, unk10, hash, false) };

	if (func_681(unk14, bParam1))
	{
		if (func_978(hParam0))
		{
			if (func_797(joaat("SLOTID_HORSE_HORN"), &hash2))
				func_806(hash2, false);
		}
		else if (func_979(hParam0))
		{
			if (func_797(joaat("SLOTID_HORSE_HORN"), &hash3))
				func_806(hash3, false);
		
			if (func_797(joaat("SLOTID_HORSE_STIRRUP"), &hash4))
				func_806(hash4, false);
		
			hash5 = func_980(hParam0);
		
			if (func_332(hash5, 0))
				func_806(hash5, true);
		}
	
		func_981();
		return true;
	}

	return false;
}

BOOL func_807() // Position - 0x31855 Hash - 0x37EC066 ^0xC9B08D38
{
	if (func_115() != -1)
		return false;

	if (Global_40.f_39 == joaat("Player_Zero"))
		return true;

	return false;
}

int func_808() // Position - 0x3187B Hash - 0x9F572D68 ^0x8E3583E8
{
	return joaat("breed_tennesseewalker_mahoganybay");
}

int func_809() // Position - 0x31888 Hash - 0x9F572D68 ^0xBDF2A68A
{
	return joaat("a_c_horse_tennesseewalker_mahoganybay");
}

int func_810() // Position - 0x31895 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_811() // Position - 0x3189E Hash - 0x9F572D68 ^0x26A12E6E
{
	return joaat("breed_tennesseewalker_chestnut");
}

int func_812() // Position - 0x318AB Hash - 0x9F572D68 ^0x9EBDA680
{
	return joaat("a_c_horse_tennesseewalker_chestnut");
}

int func_813() // Position - 0x318B8 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

BOOL func_814() // Position - 0x318C1 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_115() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

int func_815() // Position - 0x318E6 Hash - 0x9F572D68 ^0xC65FFCB9
{
	return joaat("breed_john_endlesssummer");
}

int func_816() // Position - 0x318F3 Hash - 0x9F572D68 ^0xEE9A2A30
{
	return joaat("a_c_horse_john_endlesssummer");
}

int func_817() // Position - 0x31900 Hash - 0x1FFCF868 ^0x1FFCF868
{
	return 2;
}

int func_818() // Position - 0x31909 Hash - 0x9F572D68 ^0x26A12E6E
{
	return joaat("breed_tennesseewalker_chestnut");
}

int func_819() // Position - 0x31916 Hash - 0x9F572D68 ^0x9EBDA680
{
	return joaat("a_c_horse_tennesseewalker_chestnut");
}

int func_820() // Position - 0x31923 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_821() // Position - 0x3192C Hash - 0x9F572D68 ^0x1E5C2934
{
	return joaat("breed_morgan_bay");
}

int func_822() // Position - 0x31939 Hash - 0x9F572D68 ^0xD70F756D
{
	return joaat("a_c_horse_morgan_bay");
}

int func_823() // Position - 0x31946 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_824() // Position - 0x3194F Hash - 0x9F572D68 ^0xE2D55F1F
{
	return joaat("breed_kentuckysaddle_grey");
}

int func_825() // Position - 0x3195C Hash - 0x9F572D68 ^0xD5B858DC
{
	return joaat("a_c_horse_kentuckysaddle_grey");
}

int func_826() // Position - 0x31969 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_827(int iParam0) // Position - 0x31972 Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

Hash func_828(int iParam0) // Position - 0x3198B Hash - 0xBD10D1A2 ^0xE9C9558B
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return 1782082944;
	
		case 1:
			return -832337898;
	
		case 2:
			return 1271463052;
	
		case 3:
			return 1983140194;
	
		case 4:
			return 677262775;
	}

	return 0;
}

int func_829(Any* panParam0, Hash hParam1, BOOL bParam2) // Position - 0x319F7 Hash - 0x3D67507D ^0xEF2F6729
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_571(bParam2), panParam0, hParam1);
}

BOOL func_830(int iParam0, Any* panParam1) // Position - 0x31A0D Hash - 0xDE4C4094 ^0x8E8A73E7
{
	Hash hash;
	var unk;
	var unk15;

	if (!func_591(iParam0))
		return false;

	hash = func_828(iParam0);

	if (hash == 0)
		return false;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15 = { func_754(false) };

	if (!func_982(unk15, hash, &unk, 0, false))
		return false;

	if (!func_983(&unk, panParam1))
		return false;

	return true;
}

BOOL func_831(Hash hParam0) // Position - 0x31A72 Hash - 0x1B551CF7 ^0xB80375AC
{
	return func_521(hParam0) == joaat("HORSE");
}

BOOL func_832(Hash hParam0) // Position - 0x31A86 Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_521(hParam0) == joaat("WEAPON");
}

BOOL func_833(Hash hParam0) // Position - 0x31A9A Hash - 0x8471597D ^0x85715A53
{
	var unk;

	if (func_115() != -1)
		return false;

	if (func_616(hParam0, 1048576))
		return false;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return func_839(hParam0, &unk, 1, false, false);

	return func_418(hParam0, 1, false);
}

void func_834(Hash hParam0, int iParam1, BOOL bParam2, var uParam3, Hash hParam4) // Position - 0x31ADE Hash - 0x8D4768B0 ^0x68D8A424
{
	Hash weaponHash;

	if (func_521(hParam0) != joaat("WEAPON"))
		return;

	weaponHash = func_619(hParam0, false);

	if (!WEAPON::IS_WEAPON_VALID(weaponHash))
		return;

	if (bParam2 || !func_862(weaponHash))
	{
		if (func_115() == -1)
			func_424(weaponHash);
	
		if (bParam2 || !WEAPON::HAS_PED_GOT_WEAPON(Global_35, weaponHash, 0, false) && func_520(hParam0, false, false) == 0)
		{
			if (!*uParam3 && !(hParam4 == 1248274121))
			{
				func_518(hParam0, iParam1, false, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}

	return;
}

void func_835(Hash hParam0, var uParam1) // Position - 0x31B85 Hash - 0xAE8D4BA4 ^0x3C850E20
{
	var unk;

	if (func_547(hParam0, 58855631))
	{
		func_984(hParam0, -915411861, &unk, true);
		*uParam1 = *uParam1 * unk;
	}

	return;
}

int func_836(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x31BB3 Hash - 0x9D75BA2C ^0xE0E521B7
{
	if (!func_332(hParam0, 0))
		return 0;

	if (!func_524(false))
		bParam2 = true;

	if (bParam2 || !func_985(hParam0))
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_571(bParam3), hParam0);
}

int func_837(Hash hParam0, BOOL bParam1) // Position - 0x31C01 Hash - 0xE0F47B47 ^0x52A64D28
{
	if (func_622(hParam0))
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_571(bParam1), hParam0, false);
}

BOOL func_838() // Position - 0x31C2B Hash - 0x221AE79E ^0x8AFE11D8
{
	if (func_115() != -1)
		return false;

	if (!func_481())
		return false;

	if (!func_94(Global_1835011[1 /*74*/].f_1, true))
		return true;

	if (func_94(Global_1835011[2 /*74*/].f_1, true) && func_94(Global_1347702[120 /*49*/].f_15, true) && !func_94(Global_1835011[4 /*74*/].f_1, true))
		return true;

	if (func_94(Global_1835011[37 /*74*/].f_1, true) && !func_94(Global_1835011[39 /*74*/].f_1, true))
		return true;

	if (func_94(Global_1835011[57 /*74*/].f_1, true) && !func_94(Global_1835011[60 /*74*/].f_1, true))
		return true;

	if (func_94(Global_1835011[26 /*74*/].f_1, true) && !func_94(Global_1347702[67 /*49*/].f_15, true))
		return true;

	if (func_94(Global_1835011[62 /*74*/].f_1, true) && func_94(Global_1835011[63 /*74*/].f_1, true) && !func_94(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_94(Global_1835011[75 /*74*/].f_1, true) && !func_94(Global_1347702[1 /*49*/].f_15, true))
		return true;

	if (func_94(Global_1835011[76 /*74*/].f_1, true) && !func_94(Global_1835011[77 /*74*/].f_1, true))
		return true;

	if (func_94(Global_1835011[40 /*74*/].f_1, true) && func_94(Global_1835011[41 /*74*/].f_1, true) && !func_94(Global_1835011[44 /*74*/].f_1, true))
		return true;

	if (func_94(Global_1835011[62 /*74*/].f_1, true) && func_94(Global_1835011[63 /*74*/].f_1, true) && !func_94(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_94(Global_1835011[65 /*74*/].f_1, true) && func_94(Global_1835011[66 /*74*/].f_1, true) && !func_94(Global_1835011[67 /*74*/].f_1, true))
		return true;

	return false;
}

BOOL func_839(Hash hParam0, Any* panParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x31E71 Hash - 0x6FD18E8B ^0x7C3C83FA
{
	var unk;
	var unk5;
	var unk27;
	int num;
	int inventoryItemCountWithItemid;

	func_986(&hParam0);

	if (!func_332(hParam0, 0))
		return 0;

	if (!func_524(false))
		bParam3 = true;

	if (func_832(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		{
			unk = { func_750(false) };
			unk5.f_9 = joaat("SLOTID_NONE");
		
			if (!func_676(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
				return 0;
			else if (func_674(hParam0, &unk5, joaat("SLOTID_WEAPON_0")))
				return 0;
		
			if (func_755(hParam0, true))
				if (!func_676(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					return 0;
				else if (func_674(hParam0, &unk5, joaat("SLOTID_WEAPON_1")))
					return 0;
		}
		else if (!func_987(hParam0, &unk27, false))
		{
			return 0;
		}
	
		return 1;
	}

	num = func_836(hParam0, panParam1, bParam3, bParam4);

	if (num < 0)
		return 0;
	else if (num == 0)
		return 1;

	if (bParam3 || !func_985(hParam0))
		inventoryItemCountWithItemid = func_570(hParam0, *panParam1, panParam1->f_4, bParam4);
	else
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_571(bParam4), hParam0, false);

	if (inventoryItemCountWithItemid + iParam2 > num)
		return 1;

	return 0;
}

int func_840(Hash hParam0, int iParam1) // Position - 0x31FB6 Hash - 0x7A1C2599 ^0xFF9B5634
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

int func_841() // Position - 0x32000 Hash - 0xCF63D31C ^0x4A7E574E
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), 0);
}

Hash func_842(Hash hParam0) // Position - 0x32012 Hash - 0xD6E12BEB ^0xB2E8744E
{
	return COLLECTION::_0xEC3959E9950BF56B(hParam0);
}

void func_843(int iParam0) // Position - 0x32020 Hash - 0x246F2C0 ^0x1534606D
{
	int num;
	float value;

	if (func_115() != -1)
		return;

	num = func_988(iParam0);
	value = func_989(iParam0);

	if (Global_1347477.f_117 || !func_429(31) || !func_990(num))
		return;

	if (value <= 0f)
		return;

	if (func_991(num) >= 7)
		return;

	if (num == 1)
		value = value * (1f + Global_40.f_11095.f_57);
	else if (num == 0)
		value = value * (1f + Global_40.f_11095.f_55);
	else if (num == 2)
		value = value * (1f + Global_40.f_11095.f_56);

	value = value * (float)Global_1347477.f_182;
	value = BUILTIN::TO_FLOAT(BUILTIN::ROUND(value));
	func_992(num, Global_40.f_11095.f_11[num] + value, false);
	func_747(MISC::VAR_STRING(6, func_993(iParam0), value), "itemtype_textures", func_994(num), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

void func_844(int iParam0, var uParam1, var uParam2) // Position - 0x3211F Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_845(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x3213B Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_995(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_996(iParam0))
		return false;

	if (func_997(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_908(iParam0, 1) || func_465(32768))
		if (!func_908(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_998())
		return false;

	return true;
}

void func_846(int iParam0, int iParam1) // Position - 0x321DD Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

Hash func_847(int iParam0) // Position - 0x32201 Hash - 0xB8EC44B7 ^0x693BD882
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

int func_848(Hash hParam0, int iParam1) // Position - 0x322BA Hash - 0xB815F93D ^0xDF1F4B5F
{
	var unk;
	int num;

	if (!func_999(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, &unk);
	return num;
}

char* func_849(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0x322E9 Hash - 0xF20034E5 ^0x2150D50E
{
	switch (iParam1)
	{
		case joaat("CIGARETTE_CARDS"):
			if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_CC_COMPLETE";
			else if (func_612() >= 12)
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_1000(), 12);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_1001(), 12);
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
			else if (func_883() >= 30)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_1002(), 30);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_883(), 30);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", iParam4, func_848(iParam6, 20));
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_1003(), 13);
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
			else if (func_884() >= 10)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_1004(), 10);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_884(), 10);
			break;
	}

	return sParam3;
}

BOOL func_850(int iParam0, Hash hParam1, Hash hParam2) // Position - 0x325D6 Hash - 0xC978E890 ^0x1621426E
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

BOOL func_851(int iParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, char* sParam5, char* sParam6) // Position - 0x32683 Hash - 0xC1094219 ^0x58B3963B
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hParam1))
		UILOG::_UILOG_ADD_ENTRY_HASH(3, hParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);

	return true;
}

BOOL func_852(int iParam0, Hash hParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, Hash hParam6, Hash hParam7) // Position - 0x326AF Hash - 0xD1184F03 ^0x47C2A228
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, hParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, hParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, hParam1, hParam6, hParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, hParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

BOOL func_853(int iParam0, Hash hParam1, Hash hParam2, int iParam3, Hash hParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0x326FE Hash - 0x486F524F ^0x64D8785E
{
	int i;
	BOOL flag;
	Hash hash;

	flag = false;

	for (i = 0; i < iParam6; i = i + 1)
	{
		if (hParam2 == joaat("CIGARETTE_CARDS"))
		{
			hash = func_1005(i);
		
			if (hParam4 == hash)
				flag = true;
			else
				flag = func_418(hash, 1, false) || func_1007(func_1006(hash));
		
			if (iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_1005(i))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_1005(i)), flag, true, false);
		}
	
		if (hParam2 == joaat("dino_bones"))
		{
			if (i == 0)
			{
				flag = func_883() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1008(i)), func_1008(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_1002() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1008(i)), func_1008(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1008(i)), func_1008(i), flag, true, false);
			}
		}
	
		if (hParam2 == -1531394072)
		{
			hash = func_893(iParam3, func_1009(i));
		
			if (iParam5 == 8)
				flag = true;
			else if (bParam9)
				if (hParam4 == hash)
					flag = func_889(hash) - iParam7 >= func_848(iParam3, func_1010(i));
				else
					flag = func_889(hash) >= func_848(iParam3, func_1010(i));
			else if (hParam4 == hash)
				flag = func_889(hash) + iParam7 >= func_848(iParam3, func_1010(i));
			else
				flag = func_889(hash) >= func_848(iParam3, func_1010(i));
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(hash)), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(hash), flag, true, false);
		}
	
		if (hParam2 == 1995362678)
		{
			if (func_1012(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
				flag = true;
			else if (iParam5 == 8)
				flag = true;
			else
				flag = false;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, hParam2, 0))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, hParam2, 0)), flag, true, false);
		}
	
		if (hParam2 == joaat("rock_carvings"))
		{
			if (i == 0)
			{
				flag = func_884() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1014(i)), func_1014(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_1004() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1014(i)), func_1014(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1014(i)), func_1014(i), flag, true, false);
			}
		}
	
		if (hParam2 == joaat("taxidermy"))
		{
			hash = func_893(iParam3, func_1009(i));
		
			if (bParam9)
				if (hParam4 == hash)
					flag = func_889(hash) - iParam7 >= 1;
				else
					flag = func_1015(hash);
			else if (hParam4 == hash)
				flag = true;
			else
				flag = func_1015(hash);
		
			if (iParam5 == 7 || iParam5 == 3 || iParam5 == 4 || iParam5 == 5 || iParam5 == 0 || iParam5 == 1 || iParam5 == 2 || iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_1016(hash)), func_1016(hash), flag, true, false);
		}
	}

	return true;
}

BOOL func_854(int iParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x32A73 Hash - 0x3C34F826 ^0xAB492603
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
		if (func_1003() >= 13)
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

BOOL func_855(int iParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x32B7C Hash - 0xBE0BA427 ^0x588A6FB8
{
	if (func_289(func_506(0)) && func_1017(0) == 1 || func_1017(0) == 8 || func_1017(0) == 6)
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

int func_856(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0x32C1C Hash - 0x51CE9407 ^0x19439D00
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

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(Hash hParam0) // Position - 0x32C93 Hash - 0xA17D549C ^0xE86F7126
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

int func_858(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x32D42 Hash - 0xB88D7AA5 ^0x36259347
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

void func_859(int iParam0) // Position - 0x32DA3 Hash - 0x48EBE6BD ^0x358C7E90
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

void func_860(int iParam0) // Position - 0x32DDD Hash - 0x3ECC2C39 ^0xB51AFDB0
{
	Hash hash;

	switch (iParam0)
	{
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
	
		case 2:
			if (!Global_1879534 && func_481() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
				func_858("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_607(586, false);
			break;
	
		case 3:
			if (!Global_1879534 && func_481() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
				func_858("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_607(587, false);
			break;
	
		case 4:
			if (!Global_1879534 && func_481() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
				func_858("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_607(588, false);
			break;
	
		case 5:
			if (!Global_1879534 && func_481() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
				func_858("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_607(589, false);
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
			func_1018(true);
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
			func_1019(1);
			break;
	
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1019(2);
			break;
	
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1019(3);
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
		
			if (func_115() == -1)
			{
				if (!func_544(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_1026(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_814())
						hash = -1515874150;
					else
						hash = joaat("clothing_sp_offhand_000");
				
					if (!func_418(hash, 1, false))
						func_661(hash, 1, 752097756);
				
					func_641(Global_35, hash, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
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
			func_1020(true);
			break;
	
		case 34:
			func_1021(true);
			break;
	
		case 35:
			func_1022(true);
			break;
	
		case 36:
			break;
	
		case 37:
			func_1023(false);
			break;
	
		case 38:
			func_1024(false);
			break;
	
		case 39:
			func_1025(false);
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
			func_1027();
			break;
	
		case 47:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
	
		case 48:
			if (func_115() == -1)
				if (!func_418(1013902307, 1, false))
					func_661(1013902307, 1, 752097756);
			break;
	
		case 49:
			if (func_115() == -1)
				if (!func_418(786809402, 1, false))
					func_661(786809402, 1, 752097756);
			break;
	
		case 50:
			if (func_115() == -1)
			{
				if (!func_418(1013902307, 1, false))
					func_661(1013902307, 1, 752097756);
			
				if (!func_418(142640135, 1, false))
					func_661(142640135, 1, 752097756);
			}
			break;
	
		case 51:
			if (func_115() == -1)
			{
				if (!func_418(786809402, 1, false))
					func_661(786809402, 1, 752097756);
			
				if (!func_418(-518019409, 1, false))
					func_661(-518019409, 1, 752097756);
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

BOOL func_861(Hash hParam0) // Position - 0x33405 Hash - 0x8C6B1607 ^0xB465A08C
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_VISIBLE(weaponUnlock))
		return true;

	return false;
}

BOOL func_862(Hash hParam0) // Position - 0x3342D Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

void func_863(Hash hParam0) // Position - 0x33455 Hash - 0x708BD33E ^0x8AB5498
{
	char* propertyName;
	char* propertyName2;
	Hash value;

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
	value = func_457();
	func_458(&value, 0, 0, 0, 1, 0, 0, false);
	DECORATOR::DECOR_SET_INT(Global_35, propertyName2, value);
	return;
}

int func_864(Hash hParam0) // Position - 0x33524 Hash - 0x62B2BF56 ^0x18236051
{
	int num;
	int pedAmmoByType;

	if (func_1028(hParam0))
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

BOOL func_865(Hash hParam0) // Position - 0x335A0 Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

Hash func_866(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x335B2 Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

int func_867(Hash hParam0) // Position - 0x335D8 Hash - 0x119612CE ^0xEB4896D6
{
	Hash weaponTypeFromAmmoType;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);

	if (WEAPON::IS_WEAPON_A_GUN(weaponTypeFromAmmoType))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_429(50))
			{
				if (!func_429(48))
					return 133;
			
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_429(51))
			{
				if (!func_429(49))
					return 134;
			
				return 136;
			}
		}
	}

	return 137;
}

BOOL func_868(Ped pedParam0, Hash hParam1, var uParam2) // Position - 0x33644 Hash - 0x4FC4FA99 ^0x540DBE26
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

	if (!func_332(hParam1, 0))
		return false;

	if (func_521(hParam1) != joaat("CLOTHING"))
		return false;

	isMP = func_115() != -1;
	metaPedType = PED::_GET_META_PED_TYPE(pedParam0);

	if (func_371(hParam1) == -999503751)
		return true;

	num = func_337(hParam1);

	if (num == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}

	flag = false;
	componentHash = hParam1;

	if (func_547(hParam1, 866047851))
	{
		num2 = func_338(num, 1);
	
		if (func_775(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[num2 /*3*/] != componentHash)
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
		
			if (Global_1946054.f_1497.f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_547(hParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return false;
			}
			break;
	
		case -1505978566:
			if (func_1029(1868067663, &unk))
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
			num5 = func_958(componentHash, num, metaPedType, isMP);
			num4 = func_958(Global_1946054.f_1497.f_1[num2 /*3*/], num, metaPedType, isMP);
		
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
			hash = func_371(Global_1946054.f_1497.f_1[num2 /*3*/]);
		
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
			hash = func_371(hParam1);
			num2 = 36;
			num3 = 35;
		
			if (hParam1 != Global_1946054.f_57[num3 /*11*/] && func_547(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				*uParam2 = -357399012;
				return false;
			}
		
			if (hash == 1769055947 || hash == 1545016984)
				break;
		
			if (hParam1 != Global_1946054.f_57[num3 /*11*/] && func_546(Global_1946054.f_1497.f_1[num2 /*3*/]))
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

void func_869() // Position - 0x33954 Hash - 0xA141D86C ^0xD3302552
{
	PLAYER::_SET_BOW_STAMINA_DRAIN_SPEED(PLAYER::PLAYER_ID(), 1f - (Global_40.f_11095.f_64 + Global_1347477.f_175));
	return;
}

void func_870() // Position - 0x33975 Hash - 0xDC6E219D ^0xBD2A18DD
{
	float num;
	var unk;

	num = Global_40.f_11095.f_44;
	unk = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - num - Global_40.f_11095.f_69);
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), 1f - num);
	PLAYER::SET_PLAYER_STAMINA_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - num);
	PLAYER::_SET_PLAYER_STAMINA_SPRINT_DEPLETION_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - unk);
	return;
}

int func_871() // Position - 0x339CA Hash - 0x6F6FB6A ^0x6F6FB6A
{
	int num;
	int i;

	for (i = 0; i < 26; i = i + 1)
	{
		if (func_418(func_1030(i), 1, false))
			num = num + 1;
	}

	return num;
}

Hash func_872(Hash hParam0) // Position - 0x339FC Hash - 0xBD10D1A2 ^0xAD2FE305
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

BOOL func_873(int iParam0, Hash hParam1) // Position - 0x33A92 Hash - 0x33707815 ^0xEA5B7C5C
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

	if (func_418(hash, 1, false) && func_418(hash2, 1, false))
		return true;

	return false;
}

Hash func_874(Hash hParam0) // Position - 0x33BF3 Hash - 0xB8EC44B7 ^0x8CFD1640
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

BOOL func_875(Hash hParam0, int iParam1) // Position - 0x33CBA Hash - 0xB78A2FC ^0x6E3EB1C7
{
	int num;

	num = func_1031(hParam0);

	if (num != -15)
	{
		func_458(&num, 0, iParam1, 0, 0, 0, 0, false);
		return !func_1032(num, true);
	}

	return false;
}

int func_876(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x33CEC Hash - 0xE2402AAF ^0x47ECB962
{
	float num;
	int num2;
	int i;
	Hash hash;

	if (iParam2 != -1)
		return iParam2;

	num = 1f;

	if (bParam1 && func_418(joaat("provision_trinket_elk_antler"), 1, false))
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
		
			if (func_332(hash, 0) && func_547(hash, -1921346699))
				return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
	}

	return 0;
}

void func_877(int iParam0) // Position - 0x33DB1 Hash - 0x25D46568 ^0xBF368405
{
	Global_40.f_12004.f_6 = Global_40.f_12004.f_6 || iParam0;
	return;
}

void func_878(int iParam0) // Position - 0x33DCC Hash - 0x25D46568 ^0xBD3E2EC1
{
	Global_40.f_12004.f_1 = Global_40.f_12004.f_1 || iParam0;
	return;
}

void func_879(int iParam0) // Position - 0x33DE7 Hash - 0x25D46568 ^0x155CD956
{
	Global_40.f_12004.f_3 = Global_40.f_12004.f_3 || iParam0;
	return;
}

void func_880(int iParam0) // Position - 0x33E02 Hash - 0x25D46568 ^0x27CAC05F
{
	Global_40.f_12004.f_5 = Global_40.f_12004.f_5 || iParam0;
	return;
}

int func_881(int iParam0) // Position - 0x33E1D Hash - 0xC69F7374 ^0xCEC8F963
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

	num2 = func_889(hash);
	num3 = func_889(hash2);
	num4 = func_889(hash3);
	num6 = func_890(hash);
	num7 = func_890(hash2);
	num8 = func_890(hash3);

	if (iParam0 != 2)
	{
		num5 = func_889(hash4);
		num9 = func_890(hash4);
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

void func_882(int iParam0) // Position - 0x33F90 Hash - 0x25D46568 ^0xF36E5C55
{
	Global_40.f_12004.f_2 = Global_40.f_12004.f_2 || iParam0;
	return;
}

int func_883() // Position - 0x33FAB Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_1033(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_884() // Position - 0x33FE4 Hash - 0xCF63D31C ^0x5129EE00
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("rock_carvings"), 0);
}

BOOL func_885(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x33FF6 Hash - 0x46B19B67 ^0xBA7478BC
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
			if (func_1015(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_1015(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_1015(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_1015(hash))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_02"))
	{
		if (bParam3)
			if (func_1015(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_1015(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_1015(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_1015(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_1015(hash) && func_1015(hash2))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_03"))
	{
		if (bParam3)
			if (func_1015(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_1015(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_1015(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_1015(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_1015(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_1015(hash) && func_1015(hash2) && func_1015(hash3))
			return true;
	}
	else
	{
		if (bParam3)
			if (func_1015(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_1015(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_1015(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_1015(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_1015(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_1015(hash4))
			*uParam2 = *uParam2 + 1;
	
		if (func_1015(hash) && func_1015(hash2) && func_1015(hash3) && func_1015(hash4))
			return true;
	}

	return false;
}

void func_886(Hash hParam0) // Position - 0x344BE Hash - 0x70E5F07F ^0x70E5F07F
{
	if (!func_1034(hParam0))
		func_1036(func_1035(hParam0));

	return;
}

int func_887() // Position - 0x344DA Hash - 0x40F73196 ^0x4F871B7D
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (func_1034(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, -1531394072, 0)))
			num = num + 1;
	}

	return num;
}

int func_888(Hash hParam0, int iParam1, int iParam2) // Position - 0x34512 Hash - 0xED49A216 ^0x75828FFF
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

	num2 = func_889(hash);
	num3 = func_889(hash2);
	num4 = func_889(hash3);
	num6 = func_890(hash);
	num7 = func_890(hash2);
	num8 = func_890(hash3);

	if (iParam2 != 2)
	{
		num5 = func_889(hash4);
		num9 = func_890(hash4);
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

int func_889(Hash hParam0) // Position - 0x34725 Hash - 0x3E479F4F ^0x3E479F4F
{
	int num;

	if (func_418(hParam0, 1, false))
		num = func_520(hParam0, false, false);

	return num;
}

int func_890(Hash hParam0) // Position - 0x34744 Hash - 0xEED5739D ^0xEED5739D
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

int func_891(Hash hParam0) // Position - 0x3481D Hash - 0xD6E12BEB ^0x1BFBC7C9
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0);
}

void func_892(Hash hParam0, int iParam1) // Position - 0x3482B Hash - 0xAEE04633 ^0x64A87C96
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, iParam1);
	return;
}

Hash func_893(Hash hParam0, int iParam1) // Position - 0x3483B Hash - 0xB815F93D ^0x864481B4
{
	var unk;
	int num;

	if (!func_999(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, &unk);
	return num;
}

void func_894(Hash hParam0, Hash hParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x3486A Hash - 0xC19694F5 ^0xC19694F5
{
	if (hParam0 == func_893(hParam1, 5) || hParam0 == func_893(hParam1, 6) || hParam0 == func_893(hParam1, 7) || hParam0 == func_893(hParam1, 8) || hParam0 == func_893(hParam1, 9))
	{
		func_885(hParam1, hParam0, &iParam2, false, iParam3, bParam4);
		func_613(51, 0, 0, hParam1, iParam2, false, -1, false);
		func_615(51, 0, 0, 0, 0, -1, 0);
	}

	return;
}

void func_895(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x348EC Hash - 0xCAA72529 ^0xCAA72529
{
	int num;

	num = 1;

	if (hParam0 == func_893(hParam1, 5) || hParam0 == func_893(hParam1, 6) || hParam0 == func_893(hParam1, 7) || hParam0 == func_893(hParam1, 8) || hParam0 == func_893(hParam1, 9))
	{
		if (func_885(hParam1, hParam0, &num, false, 0, false))
		{
			func_613(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_615(51, 0, 0, num, func_848(hParam1, 20), 1, 0);
		}
		else
		{
			func_613(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_615(51, 0, 0, num, func_848(hParam1, 20), 1, 0);
		}
	}

	return;
}

BOOL func_896() // Position - 0x349AD Hash - 0xFE7975D2 ^0x5148ACFC
{
	if (func_419(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
		return true;

	return false;
}

void func_897(Hash hParam0) // Position - 0x349D6 Hash - 0x70E4913D ^0x3306E40C
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	return;
}

void func_898(Hash hParam0) // Position - 0x349E5 Hash - 0xB02A89A ^0x586D0DC7
{
	if (!func_1037(hParam0))
		COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);

	return;
}

void func_899(Hash hParam0) // Position - 0x349FE Hash - 0x70E4913D ^0xC7621DBD
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(hParam0, 1);
	return;
}

void func_900(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x34A0D Hash - 0x5AF76643 ^0x5AF76643
{
	func_1038(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
	return;
}

void func_901() // Position - 0x34A26 Hash - 0xB6203BF0 ^0x217DD714
{
	func_1039(&(Global_1946054.f_2776));
	func_513(32768);
	func_540(1108822547, 8, 6);
	return;
}

int func_902(int iParam0) // Position - 0x34A4D Hash - 0x6D41B005 ^0x1854201E
{
	int num;
	int num2;

	num = 0;
	num2 = func_338(iParam0, 1);

	switch (iParam0)
	{
		case 1108822547:
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/] || Global_1946054.f_1378.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				num = 48;
			break;
	}

	return num;
}

void func_903(int iParam0) // Position - 0x34AB1 Hash - 0x1B3C2724 ^0xC6DA7F4E
{
	int num;

	if (func_1040(iParam0, 4096))
		Global_1946054.f_858 = Global_1946054.f_858 + 1;

	if (Global_1946054.f_858 <= 0)
		return;

	num.f_1 = iParam0;
	num = 34;
	func_1041(num);
	return;
}

void func_904(int iParam0, int iParam1, int iParam2) // Position - 0x34AF5 Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = iParam2;
	num = iParam0;
	num.f_2 = iParam1;
	func_1041(num);
	return;
}

float func_905() // Position - 0x34B15 Hash - 0xB0642BCC ^0x4D6FEEA4
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

	if (func_1042())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_1043(2);

	if (Global_1347477.f_119)
		return func_1043(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_1044();
	num3 = func_1045();
	num4 = func_1046();
	num5 = func_1047();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_1048());
	num8 = func_1043(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_1049(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_1050(3, num9, num9 > 100f);
	return func_1051(num8, -100f, 100f);
}

float func_906() // Position - 0x34C3E Hash - 0x951B1CCC ^0x7B312694
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

	if (func_1042())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_1043(1);

	if (Global_1347477.f_119)
		return func_1043(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_1044();
	num3 = func_1045();
	num4 = func_1046();
	num5 = func_1047();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_1048());
	num8 = func_1043(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_1049(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_1050(2, num9, num9 > 100f);
	return func_1051(num8, -100f, 100f);
}

float func_907() // Position - 0x34D67 Hash - 0x4D146F4A ^0xFC60D2FE
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

	if (func_1042())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_1043(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_1052())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_1053())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_1043(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_1044();
	num3 = func_1045();
	num4 = func_1046();
	num5 = func_1047();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_1048());
	num8 = func_1043(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_1049(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_1050(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_1043(0);

	return func_1051(num8, -100f, 100f);
}

BOOL func_908(int iParam0, int iParam1) // Position - 0x34F0E Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_909(Hash hParam0) // Position - 0x34F27 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_910(int iParam0, BOOL bParam1) // Position - 0x34F37 Hash - 0x6C404ADF ^0x7D516F33
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
				return func_1054();
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

void func_911(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x34FC6 Hash - 0xC1426DBB ^0xC1426DBB
{
	Hash hash;

	if (!func_730(essParam0))
		return;

	if (func_1055(essParam0))
		return;

	if (!func_1056(essParam0))
		func_1057(essParam0, true, false);

	hash = func_359(essParam0);

	if (hash != 0 && !(essParam0 >= 0 && essParam0 <= 5))
		if (func_969(essParam0, 512))
			func_552(30, hash, 0, 0, false);

	if (!func_1058() && !bParam1 && !func_394(0, false, true))
		func_1059(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, hash)), 10000, 0, 0, 0, true);

	func_503(essParam0, 6);

	if (bParam2)
		if (!func_394(0, false, true))
			func_308(true, 4);

	return;
}

BOOL func_912(int iParam0, BOOL bParam1) // Position - 0x3508C Hash - 0xACEDDC2C ^0xACEDDC2C
{
	return func_910(iParam0, false) < func_1060(iParam0, bParam1);
}

BOOL func_913(Hash hParam0, var uParam1) // Position - 0x350A4 Hash - 0x8324C1A5 ^0xBCA9CBC8
{
	int i;
	Hash hash;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_371(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	return false;
}

void func_914(int iParam0, Hash hParam1) // Position - 0x350E8 Hash - 0x1B56319F ^0x3D9B5946
{
	if (func_547(hParam1, 130796156))
	{
		func_1061(hParam1, false);
	}
	else if (func_547(hParam1, 930141731))
	{
		func_1061(hParam1, true);
		func_1062(iParam0);
	}

	return;
}

void func_915(var uParam0, int iParam1) // Position - 0x35123 Hash - 0x84556899 ^0xA18AFCFA
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

int func_916(Hash hParam0, var uParam1, Any anParam2, int iParam3) // Position - 0x35204 Hash - 0xD7FAFF38 ^0x7903CCF6
{
	var unk;
	int num;

	if (hParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_1063(uParam1);
	SECURE_STORE(&unk, hParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_2.f_1 = 10;
	num = iParam3;
	num.f_2 = { *uParam1 };
	func_1064(anParam2, hParam0, num);
	return 1;
}

int func_917(int iParam0) // Position - 0x3526D Hash - 0x6AA34421 ^0x7B821F1
{
	return Global_1900073.f_159[iParam0];
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(int iParam0) // Position - 0x3527F Hash - 0xA17D549C ^0x90BCA03A
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

Hash func_919(Hash hParam0) // Position - 0x35356 Hash - 0x42CB27A1 ^0xAE7DBAA9
{
	Hash num;

	if (!func_1065(hParam0, &num, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
		return joaat("_placeholder");

	return num;
}

int func_920(int iParam0) // Position - 0x35380 Hash - 0x17F3724D ^0x89A0993C
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

BOOL func_921() // Position - 0x3538C Hash - 0x35D5C88E ^0x2371BCA7
{
	if (func_596())
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();

	return false;
}

void func_922(int iParam0) // Position - 0x353A3 Hash - 0xB9BB46A1 ^0xB9BB46A1
{
	if (iParam0 <= 0)
		return;

	if (Global_40.f_4283.f_325 + iParam0 < 0)
		return;

	func_1066(Global_40.f_4283.f_325 + iParam0);
	return;
}

void func_923(int iParam0, const char* sParam1, int iParam2) // Position - 0x353D7 Hash - 0x56940320 ^0x7FA527AC
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_GANG_MONEY_EARN";

	if (func_921())
		func_747(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings_special"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);
	else
		func_747(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);

	return;
}

BOOL func_924(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x35443 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_571(false);
	*panParam1 = { func_569(hParam0, func_750(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_925(Hash hParam0) // Position - 0x35488 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

int func_926(int iParam0, int iParam1) // Position - 0x3549E Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

int func_927(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5) // Position - 0x354B4 Hash - 0x4C6CAF1 ^0xEE857D47
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

	if (!func_758(uParam0, &unk, true, false))
		return num;

	if (unk.f_10 == iParam4)
		return num;

	num2 = func_521(unk.f_4);

	if (num2 == joaat("HORSE"))
	{
		unk15 = { func_1067(uParam0, true) };
		unk15.f_10 = iParam4;
		num = func_1068(joaat("UPDATE"), &unk15, bParam5);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("CLOTHING"))
	{
		unk44 = { func_1069(uParam0, true) };
		unk44.f_10 = iParam4;
		num = func_1070(joaat("UPDATE"), &unk44, bParam5);
	
		if (num == -1)
			return num;
	}
	else
	{
		unk62 = { func_1071(&unk) };
		unk62.f_10 = iParam4;
		num = func_1072(joaat("UPDATE"), &unk62, bParam5);
	
		if (num == -1)
			return num;
	}

	return num;
}

int func_928(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x355AB Hash - 0xF91B3803 ^0xF91B3803
{
	var unk;
	int num;
	int i;

	unk = 10;

	if (!func_1073(hParam0, hParam1, &unk, &num, bParam2))
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

int func_929(Hash hParam0) // Position - 0x35618 Hash - 0x4C7EDD82 ^0x2CA5107E
{
	var outSatchelItemSize;

	if (!func_332(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SATCHEL_DATA(hParam0, &outSatchelItemSize))
		return 0;

	return func_1074(outSatchelItemSize);
}

int func_930(int iParam0) // Position - 0x35645 Hash - 0x4084F232 ^0x4084F232
{
	int num;

	num = func_740(iParam0);

	if (num < 0)
		return 0;

	return func_1075(num);
}

int func_931(int iParam0, int iParam1) // Position - 0x35665 Hash - 0xF3EA5EAF ^0xA48F5774
{
	int num;
	int num2;

	if (*Global_1058888.f_40431 >= 32)
		return -1;

	num = -1;
	num = iParam0;
	num.f_1 = iParam1;

	if (*Global_1058888.f_40431 == 0)
	{
		Global_1058888.f_40431.f_1[*Global_1058888.f_40431 /*2*/] = { num };
		Global_1058888.f_40431 = *Global_1058888.f_40431 + 1;
		return 0;
	}

	num2 = 0;

	while (num2 < *Global_1058888.f_40431)
	{
		if (iParam0 == Global_1058888.f_40431.f_1[num2 /*2*/])
		{
			Global_1058888.f_40431.f_1[num2 /*2*/] = { num };
			return num2;
		}
		else if (iParam0 > Global_1058888.f_40431.f_1[num2 /*2*/])
		{
			num2 = num2 + 1;
		}
		else if (iParam0 < Global_1058888.f_40431.f_1[num2 /*2*/])
		{
			func_1076(num2);
			Global_1058888.f_40431.f_1[num2 /*2*/] = { num };
			return num2;
		}
	}

	if (*Global_1058888.f_40431 < 31)
	{
		num2 = *Global_1058888.f_40431;
		Global_1058888.f_40431.f_1[num2 /*2*/] = { num };
		Global_1058888.f_40431 = *Global_1058888.f_40431 + 1;
	
		if (*Global_1058888.f_40431 > 32)
			Global_1058888.f_40431 = 32;
	
		return num2;
	}

	return -1;
}

void func_932() // Position - 0x357D5 Hash - 0x9BD813B0 ^0x6F082E60
{
	int i;

	for (i = 0; i < *Global_1058888.f_40431; i = i + 1)
	{
	}

	return;
}

int func_933(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6) // Position - 0x357F8 Hash - 0xA452440E ^0xD3F785A1
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

int func_934(var uParam0) // Position - 0x35840 Hash - 0xC9D82232 ^0xC9D82232
{
	return uParam0;
}

void func_935(int iParam0) // Position - 0x3584A Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_1077(iParam0))
		return;

	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_DELETE(Global_1945188[iParam0 /*18*/].f_3);

	Global_1945188[iParam0 /*18*/].f_4 = 0;
	Global_1945188[iParam0 /*18*/] = 1;
	Global_1945188[iParam0 /*18*/].f_16 = 0;
	Global_1945188[iParam0 /*18*/].f_1 = 0;
	Global_1945188[iParam0 /*18*/].f_6 = { 0f, 0f, 0f };
	Global_1945188[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945188[iParam0 /*18*/].f_9 = 0f;
	Global_1945188[iParam0 /*18*/].f_10 = 0;
	Global_1945188[iParam0 /*18*/].f_11 = 0;
	Global_1945188[iParam0 /*18*/].f_2 = 1;
	Global_1945188[iParam0 /*18*/].f_15 = -1f;
	return;
}

int func_936(int iParam0, int iParam1) // Position - 0x358FD Hash - 0x99A93628 ^0x27AE8C83
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
			return &func_2;
	
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

void func_937(int iParam0) // Position - 0x3700A Hash - 0x7237E1A2 ^0x63CC75B6
{
	var statId;

	if (iParam0 < 0)
		iParam0 = 0;

	Global_40.f_4283.f_324 = iParam0;
	statId = { func_748(joaat("CAMP_FUNDS_CASH")) };
	STATS::STAT_ID_SET_INT(&statId, iParam0, true);
	return;
}

int func_938(int iParam0, int iParam1) // Position - 0x3703D Hash - 0x969A241 ^0xB7B020D1
{
	Hash chalHash;
	Hash goalHash;

	if (!func_1078(iParam0))
		return 0;

	if (!func_481())
		return 0;

	if (!func_1079(iParam0, &chalHash, &goalHash))
		return 0;

	if (chalHash == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_12 != -1)
		return 0;

	STATS::CHAL_ADD_GOAL_PROGRESS_INT(chalHash, goalHash, iParam1);
	return 1;
}

BOOL func_939(int iParam0) // Position - 0x37098 Hash - 0x3FBD8F15 ^0xE5437CE8
{
	if (!func_1080(iParam0))
		return false;

	return MISC::IS_BIT_SET(Global_40.f_4283.f_307, func_1081(iParam0, 1));
}

void func_940(int iParam0) // Position - 0x370C2 Hash - 0x9F8F0F90 ^0x2EEF429D
{
	if (!func_1080(iParam0))
		return;

	MISC::SET_BIT(&(Global_40.f_4283.f_307), func_1081(iParam0, 1));
	return;
}

int func_941(BOOL bParam0) // Position - 0x370EB Hash - 0x825A04C0 ^0x825A04C0
{
	return bParam0 & 31;
}

void func_942(int iParam0, int iParam1, int iParam2) // Position - 0x370F8 Hash - 0x10354A04 ^0x2034099F
{
	Global_1946054.f_57[func_338(iParam0, 1) /*11*/].f_9 = Global_1946054.f_57[func_338(iParam0, 1) /*11*/].f_9 || iParam1;
	return;
}

int func_943(Hash hParam0) // Position - 0x37125 Hash - 0x60D0672D ^0x60D0672D
{
	switch (hParam0)
	{
		case -2130987730:
			return 77;
	
		case joaat("BODIES_LOWER"):
			return 74;
	
		case joaat("loadouts"):
			return 51;
	
		case -2087420491:
			return 19;
	
		case joaat("Hair"):
			return 5;
	
		case joaat("SUSPENDERS"):
			return 48;
	
		case -1903910230:
			return 6;
	
		case joaat("talisman_satchel"):
			return 56;
	
		case joaat("satchels"):
			return 49;
	
		case -1783800278:
			return 60;
	
		case joaat("Teeth"):
			return 10;
	
		case joaat("HATS"):
			return 1;
	
		case joaat("gunbelts"):
			return 66;
	
		case joaat("SKIRTS"):
			return 78;
	
		case joaat("Dresses"):
			return 46;
	
		case -1505611915:
			return 3;
	
		case joaat("belts"):
			return 72;
	
		case -1459825906:
			return 59;
	
		case -1394906584:
			return 62;
	
		case -1250802524:
			return 57;
	
		case joaat("holsters_left"):
			return 68;
	
		case -1229572297:
			return 12;
	
		case joaat("STOCKINGS"):
			return 79;
	
		case joaat("holsters_right"):
			return 67;
	
		case -1168358466:
			return 76;
	
		case -1057211637:
			return 2;
	
		case -811108073:
			return 54;
	
		case joaat("ammo_rifles"):
			return 53;
	
		case joaat("talisman_wrist"):
			return 64;
	
		case joaat("coats"):
			return 39;
	
		case joaat("Coats_Heavy"):
			return 38;
	
		case joaat("MISC"):
			return 0;
	
		case -372138959:
			return 42;
	
		case joaat("Eyes"):
			return 9;
	
		case joaat("GLOVES"):
			return 61;
	
		case -322391462:
			return 14;
	
		case joaat("Shirts_Full_Overpants"):
			return 32;
	
		case -134124598:
			return 11;
	
		case -126114541:
			return 16;
	
		case -106096122:
			return 4;
	
		case joaat("belt_buckles"):
			return 65;
	
		case joaat("eyewear"):
			return 15;
	
		case joaat("BODIES_UPPER"):
			return 27;
	
		case joaat("EYEBROWS"):
			return 8;
	
		case 366200818:
			return 13;
	
		case joaat("boot_accessories"):
			return 83;
	
		case 425108158:
			return 47;
	
		case joaat("talisman_belt"):
			return 73;
	
		case joaat("PANTS"):
			return 75;
	
		case joaat("shirts_full"):
			return 31;
	
		case joaat("Scarves"):
			return 22;
	
		case 725125637:
			return 29;
	
		case joaat("chaps"):
			return 80;
	
		case 828269641:
			return 84;
	
		case 904313209:
			return 85;
	
		case 923771890:
			return 37;
	
		case joaat("heads"):
			return 7;
	
		case joaat("cloaks"):
			return 35;
	
		case 1018031031:
			return 58;
	
		case 1026208467:
			return 34;
	
		case joaat("ammo_pistols"):
			return 52;
	
		case 1065202434:
			return 36;
	
		case joaat("BADGES"):
			return 28;
	
		case 1094162565:
			return 26;
	
		case 1163341077:
			return 24;
	
		case joaat("Vests"):
			return 41;
	
		case joaat("holsters_crossdraw"):
			return 70;
	
		case joaat("MASKS_LARGE"):
			return 18;
	
		case 1250560851:
			return 30;
	
		case 1377798597:
			return 81;
	
		case 1431760203:
			return 50;
	
		case 1524025505:
			return 20;
	
		case 1527726350:
			return 33;
	
		case joaat("neckwear"):
			return 21;
	
		case 1799186100:
			return 40;
	
		case 1820468724:
			return 25;
	
		case 1937338194:
			return 45;
	
		case joaat("masks"):
			return 17;
	
		case joaat("aprons"):
			return 43;
	
		case joaat("BOOTS"):
			return 82;
	
		case joaat("Accessories"):
			return 55;
	
		case joaat("neckties"):
			return 23;
	
		case joaat("jewelry_bracelets"):
			return 63;
	
		case joaat("holsters_knife"):
			return 69;
	
		case joaat("talisman_holster"):
			return 71;
	
		case joaat("BLOUSES"):
			return 44;
	
		default:
		
	}

	return -1;
}

void func_944(int iParam0, BOOL bParam1, int iParam2) // Position - 0x374E0 Hash - 0xAC79A4A2 ^0xAC79A4A2
{
	Global_1946054.f_860[iParam0] = Global_1946054.f_860[iParam0] || bParam1;
	return;
}

int func_945(int iParam0) // Position - 0x37501 Hash - 0xF467740D ^0xD2664C5C
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_946(int iParam0, int iParam1) // Position - 0x37518 Hash - 0x91F4E65D ^0xD2E825BC
{
	int num;

	num = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = num;
	return;
}

void func_947(var uParam0, int iParam1) // Position - 0x37560 Hash - 0x344D10E ^0xFB8D9D9B
{
	*uParam0 = *uParam0 - 1;
	func_782(&uParam0->f_1[iParam1 /*5*/]);
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
	return;
}

BOOL func_948(int iParam0, var uParam1) // Position - 0x37591 Hash - 0xE231A73F ^0x924E070C
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

void func_949(int iParam0, int iParam1) // Position - 0x375D5 Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_950(const char* sParam0, const char* sParam1, Hash hParam2) // Position - 0x375EE Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

int func_951(Hash hParam0, int iParam1, int iParam2) // Position - 0x3761F Hash - 0xED49A216 ^0x75828FFF
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

	num2 = func_889(hash);
	num3 = func_889(hash2);
	num4 = func_889(hash3);

	if (iParam2 != 2)
		num5 = func_889(hash4);

	num6 = func_890(hash);
	num7 = func_890(hash2);
	num8 = func_890(hash3);

	if (iParam2 != 2)
		num9 = func_890(hash4);

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

struct<4> func_952() // Position - 0x37798 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

Hash func_953(int iParam0) // Position - 0x377A4 Hash - 0xB8EC44B7 ^0x32EE672C
{
	switch (iParam0)
	{
		case 0:
			return -70852636;
	
		case 1:
			return -452152720;
	
		case 2:
			return -1659460987;
	
		case 3:
			return -1906834168;
	
		case 4:
			return -1073518498;
	
		case 5:
			return -1304572717;
	
		case 6:
			return 1715418323;
	
		case 7:
			return 1468307294;
	
		case 8:
			return -1986397304;
	
		case 9:
			return 2061000197;
	
		default:
		
	}

	return 0;
}

int func_954() // Position - 0x37841 Hash - 0x8786AEE9 ^0xE825AECE
{
	if (func_339() == 1160113249)
		return -1392593303;

	return 1156231582;
}

BOOL func_955(int iParam0, int iParam1) // Position - 0x37862 Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_956(int iParam0, int iParam1) // Position - 0x37873 Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

BOOL func_957(int iParam0) // Position - 0x37886 Hash - 0x9F9FF8A1 ^0x4AEA2041
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_339();

	num = 0;

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		num = 1;

	return num;
}

int func_958(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x378AC Hash - 0xFB14E414 ^0x5DDCA43D
{
	int num;

	if (hParam0 == Global_1946054.f_57[func_338(iParam1, 1) /*11*/])
		return 0;

	num = 0;

	if (!func_765(524288))
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

int func_959(var uParam0) // Position - 0x37917 Hash - 0x3AB81F84 ^0x2BD03E57
{
	int num;
	int num2;

	num = 25;
	num2 = 0;

	if (uParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
		num2 = num2 + 1;

	num = 26;

	if (uParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
		num2 = num2 + 1;

	return num2;
}

BOOL func_960(int iParam0) // Position - 0x37962 Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_961(int iParam0) // Position - 0x37977 Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

int func_962(int iParam0) // Position - 0x37997 Hash - 0xA5486CA1 ^0x73FE29F9
{
	switch (Global_40.f_7731[iParam0 /*5*/].f_2)
	{
		case 1:
			return 2;
	
		case 2:
			return 4;
	
		case 3:
			return 8;
	
		default:
		
	}

	return 1;
}

void func_963(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x379D1 Hash - 0x6C064C76 ^0x6CA0C692
{
	int num;
	int num2;
	int num3;
	float num4;

	num4 = BUILTIN::TO_FLOAT(iParam5);
	num = func_1082(BUILTIN::TO_FLOAT(*uParam0), num4);
	num2 = func_1083(BUILTIN::TO_FLOAT(*uParam1), num4);
	num3 = func_1084(BUILTIN::TO_FLOAT(*uParam2), num4);
	*uParam0 = *uParam0 / iParam5;
	*uParam1 = *uParam1 / iParam5;
	*uParam2 = *uParam2 / iParam5;
	*uParam3 = *uParam3 / iParam5;
	*uParam1 = *uParam1 + num;
	*uParam2 = *uParam2 + num2;
	*uParam3 = *uParam3 + num3;

	if (bParam4)
	{
		*uParam3 = *uParam3 * -1;
		*uParam2 = *uParam2 * -1;
		*uParam1 = *uParam1 * -1;
		*uParam0 = *uParam0 * -1;
	}

	return;
}

void func_964(int iParam0, int iParam1) // Position - 0x37A72 Hash - 0x19A9221A ^0x79EEA925
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
			if (func_1085(&iParam0->f_2[i /*2*/], 2) || iParam0->f_2[i /*2*/] == iParam1 || iParam0->f_2[i /*2*/] == 39)
			{
				iParam0->f_2[i /*2*/] = { unk };
			}
			else
			{
				if (func_1085(&iParam0->f_2[i /*2*/], 1))
					func_1086(&iParam0->f_2[i /*2*/], 2, 6);
			
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

int func_965() // Position - 0x37B9E Hash - 0x1309DFA4 ^0x1309DFA4
{
	if (func_1087(8))
		return 8;
	else if (func_1087(4))
		return 4;
	else if (func_1087(2))
		return 2;

	return 1;
}

void func_966(var uParam0) // Position - 0x37BD3 Hash - 0x1F1EBE47 ^0xBF1144AB
{
	if (*uParam0 && PED::_IS_META_PED_ASSET_VALID(uParam0->f_1))
	{
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_1);
		uParam0->f_1 = -1;
	}

	*uParam0 = 0;
	return;
}

void func_967(var uParam0, Any anParam1, int iParam2) // Position - 0x37BFF Hash - 0x8EB42709 ^0xB749D0A2
{
	int metaPedType;

	metaPedType = func_1088(func_339());

	if (*uParam0)
		func_966(uParam0);

	uParam0->f_1 = PED::_REQUEST_META_PED_COMPONENT(metaPedType, anParam1, 0, func_115() != -1, iParam2);
	*uParam0 = 1;
	return;
}

BOOL func_968(Hash hParam0, int iParam1) // Position - 0x37C36 Hash - 0xD3FACC08 ^0xE7B5B402
{
	int num;

	num = func_350(iParam1);
	func_542(&(Global_1946054.f_964), num, hParam0, -897569541, 1, iParam1);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));
	return DATAFILE::_PARSEDDATA_GET_ENTRIES(&(Global_1946054.f_964));
}

BOOL func_969(eStackSize essParam0, BOOL bParam1) // Position - 0x37C73 Hash - 0xA750EBE5 ^0xA750EBE5
{
	if (!func_730(essParam0))
		return false;

	return Global_40.f_7157[essParam0 /*3*/] && bParam1 != false;
}

void func_970(Ped pedParam0) // Position - 0x37C98 Hash - 0x446F1BDD ^0xBEFF6FA3
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

void func_971() // Position - 0x37CB6 Hash - 0x8102D3EE ^0xB31EDBFA
{
	char* animName;

	if (PED::IS_PED_RAGDOLL(Global_35))
		return;

	if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 1, 1))
		return;

	if (!func_765(true))
		return;

	animName = "outfit_change_unarmed";

	switch (Global_1946054.f_859)
	{
		case 0:
			animName = "outfit_change_offhand";
			break;
	
		case 1:
			animName = "outfit_change_longarms";
			break;
	
		case 2:
			animName = "outfit_change_unarmed";
			break;
	}

	TASK::TASK_PLAY_ANIM(Global_35, func_1089(), animName, 1090519040, -1056964608, -1, 67108880, 0, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_513(true);
	STREAMING::REMOVE_ANIM_DICT(func_1089());
	return;
}

BOOL func_972(eStackSize essParam0) // Position - 0x37D57 Hash - 0x4A181B5A ^0x4A181B5A
{
	return false;
}

void func_973(Hash hParam0, Ped pedParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x37D60 Hash - 0xBF38E26 ^0xBF38E26
{
	BOOL flag;
	Hash hash;
	Hash hash2;
	eStackSize stackSize;
	eStackSize stackSize2;

	flag = false;
	hash = 0;
	hash2 = hParam0;
	stackSize = -1;
	stackSize2 = func_793(hParam0);

	if (stackSize2 >= 0 && stackSize2 <= 5)
		stackSize = stackSize2;

	if (func_115() != -1)
		return;

	func_549();

	if (bParam5)
		if (!func_550(&(Global_1946054.f_1378), &flag, hash2, stackSize, true, 0))
			return;

	if (func_765(32768) && Global_1946054.f_1378.f_1[10 /*3*/] != Global_1946054.f_57[10 /*11*/])
		func_901();

	func_102(stackSize, true, true, 1, true, true);
	func_552(31, 0, 0, 0, false);
	func_903(0);

	if (!bParam3)
		return;

	if (flag)
		hash = 8;

	if (!bParam4)
		if (PED::IS_PED_A_PLAYER(pedParam1))
			func_552(2, hash, 2, 0, false);
		else
			func_552(2, hash, 3, pedParam1, false);
	else
		func_1090(&(Global_1946054.f_1497), pedParam1, true, -1, true, true, true);

	return;
}

void func_974(Ped pedParam0) // Position - 0x37E53 Hash - 0x26B6C274 ^0xDDADE24B
{
	PED::_SET_PED_DIRT_CLEANED(pedParam0, 0f, -1, true, true);
	PED::CLEAR_PED_ENV_DIRT(pedParam0);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
	return;
}

BOOL func_975(Hash hParam0, int iParam1) // Position - 0x37E7E Hash - 0xD9D79AE0 ^0x7D4DF544
{
	int i;
	int outSlotId;
	int num;
	Hash category;
	int num2;

	if (hParam0 != 0)
	{
		category = func_371(hParam0);
	
		if (category != 0)
		{
			num2 = func_1091(hParam0);
		
			for (i = 0; i < num2; i = i + 1)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
				{
					num = outSlotId;
				
					if (num == iParam1)
						return true;
				}
			}
		}
	}

	return false;
}

Hash func_976(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, BOOL bParam5) // Position - 0x37ED2 Hash - 0x730D74FA ^0xBEE364CC
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (func_679(uParam0, hParam4, &unk, bParam5))
		return unk.f_4;

	return 0;
}

BOOL func_977(Hash hParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5, int iParam6) // Position - 0x37F00 Hash - 0x47A4DDC0 ^0xD98F8579
{
	int i;
	Hash category;
	Hash outSlotId;
	int hasSlotCount;
	var outInventoryItem;
	var unk16;
	int inventoryId;
	int childrenCount;
	int j;
	var unk30;
	var parentGuid;

	if (hParam0 != 0 && hParam1 != 0)
	{
		category = func_371(hParam1);
		hasSlotCount = func_1091(hParam1);
	
		for (i = 0; i < hasSlotCount; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
			{
				if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, category, outSlotId))
				{
					*uParam4 = { func_526(hParam1, false, false) };
				
					if (iParam6 != 0)
						uParam4->f_4 = iParam6;
				
					*uParam3 = { func_569(hParam1, *uParam4, uParam4->f_4, false) };
					*uParam2 = outSlotId;
					return true;
				}
			}
		}
	
		if (bParam5)
		{
			outInventoryItem.f_9 = joaat("SLOTID_NONE");
			unk16.f_9 = joaat("SLOTID_NONE");
			inventoryId = func_571(false);
			unk30 = { func_526(hParam1, false, false) };
		
			if (iParam6 != 0)
				unk30.f_4 = iParam6;
		
			parentGuid = { func_569(hParam1, unk30, unk30.f_4, false) };
			childrenCount = INVENTORY::_INVENTORY_GET_CHILDREN_COUNT(inventoryId, &parentGuid);
		
			for (j = 0; j < childrenCount; j = j + 1)
			{
				if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_CHILD(inventoryId, &parentGuid, j, &outInventoryItem))
				{
					category = func_371(outInventoryItem.f_4);
					hasSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(category);
				
					for (i = 0; i < hasSlotCount; i = i + 1)
					{
						if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
						{
							if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, category, outSlotId))
							{
								if (func_679(parentGuid, outInventoryItem.f_9, &unk16, false))
								{
									uParam4->f_4 = outInventoryItem.f_9;
									*uParam4 = { outInventoryItem.f_5 };
									*uParam3 = { unk16 };
									*uParam2 = outSlotId;
									return true;
								}
							}
						}
					}
				}
			}
		}
	}

	*uParam2 = 0;
	return false;
}

BOOL func_978(Hash hParam0) // Position - 0x38081 Hash - 0x5E6E1858 ^0x6F4DE1DC
{
	!func_332(hParam0, 0);

	if (func_547(hParam0, 162787671))
		return true;

	return false;
}

BOOL func_979(Hash hParam0) // Position - 0x380A7 Hash - 0x1FFCC90D ^0x9E730FBF
{
	if (!func_332(hParam0, 0))
		return false;

	if (func_547(hParam0, -251515357))
		return true;

	return false;
}

Hash func_980(Hash hParam0) // Position - 0x380D1 Hash - 0xBD10D1A2 ^0xB99ADD5C
{
	switch (hParam0)
	{
		case joaat("horse_equipment_western_01_special_new_saddle_000"):
			return 263080063;
	
		case joaat("horse_equipment_western_04_special_new_saddle_000"):
			return 1104489688;
	
		case joaat("horse_equipment_motherhubbard_01_special_new_saddle_000"):
			return -34331381;
	
		case joaat("horse_equipment_western_03_special_new_saddle_000"):
			return 579268144;
	
		case joaat("horse_equipment_mcclellan_01_special_new_saddle_000"):
			return -993578318;
	}

	return 0;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
int func_981() // Position - 0x38137 Hash - 0x79A7BF3 ^0x80B436A4
{
	var unk;
	var unk6;
	int i;
	Hash category;
	Hash outSlotId;
	Hash hash;
	BOOL flag;
	var unk12;
	int num;
	Hash hash2;

	unk = { func_526(856287005, false, false) };
	unk6 = { func_569(856287005, unk, unk.f_4, false) };
	category = func_371(856287005);

	if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, 0, &outSlotId))
		hash = func_976(unk6, joaat("SLOTID_HORSE_SADDLE"), false);

	if (!func_332(hash, 0))
		return 0;

	flag = false;
	num = func_1091(856287005);

	for (i = 0; i < num; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
		{
			flag = false;
			hash2 = func_976(unk6, outSlotId, false);
		
			if (!func_332(hash2, 0))
			{
				if (outSlotId == joaat("SLOTID_HORSE_HORN"))
				{
					if (func_979(hash) || func_978(hash))
					{
					}
					else
					{
						goto 0xDB;
					}
				}
			
				if (outSlotId == joaat("SLOTID_HORSE_STIRRUP"))
				{
					if (func_979(hash))
					{
					}
					else
					{
						flag = true;
						goto 0x103;
					}
				}
			
				flag = true;
			}
			else if (outSlotId == joaat("SLOTID_HORSE_BLANKET"))
			{
				if (!func_979(hash) && func_1092(hash2))
					flag = true;
			}
		
			if (flag)
			{
				if (func_1093(outSlotId, &unk12, true))
				{
					if (!func_681(unk12, true))
					{
					}
				}
			}
		}
	}

	return 1;
}

BOOL func_982(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, int iParam6, BOOL bParam7) // Position - 0x3826B Hash - 0xA6C1C993 ^0x7035E80B
{
	int inventoryId;

	inventoryId = func_571(bParam7);

	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(inventoryId, &uParam0, hParam4) <= iParam6)
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(inventoryId, &uParam0, hParam4, iParam6, panParam5))
		return false;

	return true;
}

BOOL func_983(Any* panParam0, Any* panParam1) // Position - 0x382A5 Hash - 0x2AD3981E ^0x984186D0
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_571(false), panParam0, panParam1, 29, 1))
		return false;

	return true;
}

int func_984(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0x382D4 Hash - 0x86539460 ^0x24468AF7
{
	var outData;

	if (!func_332(hParam0, 0))
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

BOOL func_985(Hash hParam0) // Position - 0x38322 Hash - 0x1BC045DA ^0x469FDDE1
{
	if (func_1094(hParam0, joaat("DEFAULT")) == 0)
		return false;

	return true;
}

int func_986(var uParam0) // Position - 0x3833E Hash - 0xE0B16A5D ^0x1D9BDFB4
{
	if (!func_332(*uParam0, 0))
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

BOOL func_987(Hash hParam0, var uParam1, BOOL bParam2) // Position - 0x383BA Hash - 0xDE5D4AAC ^0xDB35B0F6
{
	var unk;
	Hash hash;
	var unk6;
	BOOL flag;
	int i;

	if (!func_332(hParam0, 0))
		return false;

	unk = { func_526(hParam0, false, true) };
	hash = joaat("SLOTID_WEAPON_0");
	unk6.f_9 = joaat("SLOTID_NONE");
	flag = false;

	for (i = 0; i < 4; i = i + 1)
	{
		hash = func_675(398 + i, 1);
	
		if (func_676(hParam0, &unk, hash, false))
		{
			flag = func_674(hParam0, &unk6, hash);
		
			if (bParam2 && flag || !flag)
			{
				*uParam1 = hash;
				return true;
			}
		}
	}

	return false;
}

int func_988(int iParam0) // Position - 0x3844E Hash - 0x92F940EE ^0x92F940EE
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

float func_989(int iParam0) // Position - 0x384A2 Hash - 0xBAFBA316 ^0xBAFBA316
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
			return func_1095(iParam0);
	
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
			return func_1095(iParam0);
	
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
			return func_1095(iParam0);
	
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

BOOL func_990(int iParam0) // Position - 0x38770 Hash - 0x2B2275C1 ^0x2B2275C1
{
	switch (iParam0)
	{
		case 0:
			return func_429(18);
	
		case 1:
			return func_429(19);
	
		case 2:
			return func_429(20);
	
		default:
		
	}

	return true;
}

int func_991(int iParam0) // Position - 0x387AE Hash - 0xBCE241D5 ^0x339AC097
{
	return func_1096(Global_40.f_11095.f_11[iParam0]);
}

void func_992(int iParam0, float fParam1, BOOL bParam2) // Position - 0x387C6 Hash - 0xFC76D814 ^0x758E9A9F
{
	int num;
	float num2;
	int num3;
	int num4;

	if (func_115() != -1)
		return;

	if (Global_1347477.f_117 || !func_429(31))
		return;

	num = func_991(iParam0);
	num2 = Global_40.f_11095.f_11[iParam0];

	if (num >= 7)
		return;

	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	num3 = func_991(iParam0);

	if (func_1097(iParam0) && func_1098(iParam0))
	{
		if (!bParam2)
		{
			num4 = func_1099(num2, fParam1);
		
			if (fParam1 > (float)func_1100(iParam0) && num3 > num || num4 != 0)
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (num3 > num)
						func_607(func_1101(iParam0), false);
				
					func_1102(iParam0, num3, num4);
					func_1103(iParam0, 7000);
				}
			
				Global_1347477.f_8 = 1;
			}
		}
	}

	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
	return;
}

char* func_993(int iParam0) // Position - 0x388C8 Hash - 0xEB40D7A4 ^0x6604783C
{
	return "PLAYER_RPG_XP_GAIN";
}

Hash func_994(int iParam0) // Position - 0x388D4 Hash - 0x21FAF347 ^0xAF7D8F21
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

BOOL func_995(int iParam0, int iParam1) // Position - 0x3890F Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_115() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_996(int iParam0) // Position - 0x38942 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_115() != -1)
		if (func_908(iParam0, 4))
			return false;
	else if (func_908(iParam0, 2))
		return false;

	return true;
}

BOOL func_997(int iParam0) // Position - 0x38972 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_908(iParam0, 65536) && !func_908(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_908(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_908(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_998() // Position - 0x38A1E Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

BOOL func_999(int iParam0, var uParam1) // Position - 0x38A2D Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_1104(iParam0))
		return false;

	*uParam1 = Global_1914270[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

int func_1000() // Position - 0x38A5A Hash - 0xA91AE85E ^0xA91AE85E
{
	return func_1105(Global_40.f_12019);
}

int func_1001() // Position - 0x38A6C Hash - 0x5DD72DA6 ^0x5DD72DA6
{
	int num;
	int i;
	Hash hash;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		hash = func_847(i);
	
		if (func_418(hash, 1, false) || func_1007(func_1006(hash)))
			num = num + 1;
	}

	return num;
}

int func_1002() // Position - 0x38AB5 Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_1106(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_1003() // Position - 0x38AEE Hash - 0x73582AAF ^0xDAB74775
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 14; i = i + 1)
	{
		if (func_1012(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
			num = num + 1;
	}

	return num;
}

int func_1004() // Position - 0x38B27 Hash - 0xCF63D31C ^0x129791
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("rock_carvings"), 0);
}

int func_1005(int iParam0) // Position - 0x38B39 Hash - 0xB8EC44B7 ^0x693BD882
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

BOOL func_1006(Hash hParam0) // Position - 0x38BF2 Hash - 0x6931DCCD ^0x96AB98B4
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

BOOL func_1007(BOOL bParam0) // Position - 0x38C88 Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12019 && bParam0 != false;
}

char* func_1008(int iParam0) // Position - 0x38C9B Hash - 0x90F8FE07 ^0xB97301AE
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

int func_1009(int iParam0) // Position - 0x38CD5 Hash - 0xDD8DC1C4 ^0xDD8DC1C4
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

int func_1010(int iParam0) // Position - 0x38D1A Hash - 0x499196F8 ^0x499196F8
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

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Hash hParam0) // Position - 0x38D63 Hash - 0xA17D549C ^0xE46D8A76
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

BOOL func_1012(Hash hParam0) // Position - 0x38E70 Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(Hash hParam0) // Position - 0x38E80 Hash - 0xA17D549C ^0x857C9D5
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

char* func_1014(int iParam0) // Position - 0x38F3C Hash - 0x90F8FE07 ^0x4E925DE2
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

BOOL func_1015(Hash hParam0) // Position - 0x38F76 Hash - 0x5C411CF ^0x5C411CF
{
	if (func_1107(hParam0) && func_418(hParam0, 1, false))
		return 1;
	else if (func_1108(hParam0) && func_1109(hParam0))
		return 1;

	return 0;
}

char* func_1016(Hash hParam0) // Position - 0x38FB4 Hash - 0xF387369E ^0x737E78BA
{
	if (!func_332(hParam0, 0))
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(func_655(hParam0));
}

int func_1017(int iParam0) // Position - 0x38FD7 Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_1018(BOOL bParam0) // Position - 0x38FEB Hash - 0xB584A39F ^0xFC4CA802
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

void func_1019(int iParam0) // Position - 0x39029 Hash - 0x2EDDC601 ^0xD5F96979
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

void func_1020(BOOL bParam0) // Position - 0x39097 Hash - 0x731EA76E ^0xD49C9ADF
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
	return;
}

void func_1021(BOOL bParam0) // Position - 0x390D1 Hash - 0x731EA76E ^0xCC0310C8
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
	return;
}

void func_1022(BOOL bParam0) // Position - 0x3910B Hash - 0x731EA76E ^0xC0281252
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
	return;
}

void func_1023(BOOL bParam0) // Position - 0x39145 Hash - 0x6ED794F8 ^0x98C24F9E
{
	Hash hash;

	hash = 398076311;

	if (bParam0)
		HUD::_ENABLE_HUD_CONTEXT(hash);
	else
		HUD::_DISABLE_HUD_CONTEXT(hash);

	return;
}

void func_1024(BOOL bParam0) // Position - 0x39168 Hash - 0x15EA8A2D ^0x6EE74130
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

void func_1025(BOOL bParam0) // Position - 0x391AA Hash - 0xBAD014C9 ^0x3FDE3E28
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

Hash func_1026(int iParam0) // Position - 0x391EC Hash - 0x5B34E283 ^0x820CF35B
{
	if (iParam0 == -358215195)
		return 0;

	return Global_1946054.f_1497.f_1[func_338(iParam0, 1) /*3*/];
}

void func_1027() // Position - 0x39214 Hash - 0x68C5513E ^0xDCD966E2
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_1110();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_424(joaat("weapon_revolver_cattleman_john"));
		func_661(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_424(joaat("weapon_melee_knife_john"));
		func_661(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}

	return;
}

BOOL func_1028(Hash hParam0) // Position - 0x3928C Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

BOOL func_1029(Hash hParam0, var uParam1) // Position - 0x3929A Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_338(func_1111(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1946054.f_1497.f_1[num /*3*/] != 0 && Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
	{
		hash = Global_1946054.f_1497.f_1[num /*3*/];
	
		if (func_371(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

Hash func_1030(int iParam0) // Position - 0x39311 Hash - 0xB8EC44B7 ^0xD4FF48D5
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

int func_1031(Hash hParam0) // Position - 0x3948E Hash - 0xEF74E9FE ^0xEF74E9FE
{
	return func_1112(hParam0, -1);
}

BOOL func_1032(int iParam0, BOOL bParam1) // Position - 0x3949D Hash - 0x10DE2364 ^0x10DE2364
{
	return func_1113(func_457(), iParam0, bParam1);
}

BOOL func_1033(Hash hParam0) // Position - 0x394B1 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

BOOL func_1034(Hash hParam0) // Position - 0x394C1 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_1035(Hash hParam0) // Position - 0x394D1 Hash - 0xEAAB2463 ^0xEAAB2463
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

void func_1036(int iParam0) // Position - 0x39516 Hash - 0x25D46568 ^0x96CB7C96
{
	Global_40.f_12019.f_43 = Global_40.f_12019.f_43 || iParam0;
	return;
}

BOOL func_1037(Hash hParam0) // Position - 0x39531 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

void func_1038(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x39541 Hash - 0x234E957C ^0xF69883
{
	int i;

	if (*iParam0 <= 0)
		return;

	for (i = 0; i < *iParam0; i = i + 1)
	{
		func_1114(iParam0->f_2[i /*2*/], bParam1, bParam2);
	}

	if (func_115() == -1)
	{
		if (Global_40.f_7729 != 0 || !func_528(2, Global_26796.f_776) || Global_1946054.f_1497 != func_359(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096;
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] | 4096;
				Global_1946054.f_1497 = func_359(Global_40.f_7729);
				Global_1946054.f_1378 = func_359(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_361(-1, false, 6);
			}
		}
	}

	if (bParam3)
		func_347(false, true);

	return;
}

void func_1039(var uParam0) // Position - 0x39660 Hash - 0x7C3D914C ^0xB1998A7B
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

BOOL func_1040(int iParam0, int iParam1) // Position - 0x396BE Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_1041(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x396CD Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_960(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_960(20))
				return;
		}
	}

	func_961(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_532(8);
	return;
}

BOOL func_1042() // Position - 0x397D1 Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_1043(int iParam0) // Position - 0x397ED Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

float func_1044() // Position - 0x397FF Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_1115(13);
	num2 = func_1116(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_1045() // Position - 0x39842 Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_1046() // Position - 0x3985D Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_596())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_1047() // Position - 0x3987C Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_1048() // Position - 0x398BE Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_1049(int iParam0, int iParam1, BOOL bParam2) // Position - 0x398CC Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_1117(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_1050(int iParam0, float fParam1, BOOL bParam2) // Position - 0x39918 Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_1117(iParam0, 2, false, false);
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

float func_1051(float fParam0, float fParam1, float fParam2) // Position - 0x39A5E Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_1052() // Position - 0x39A85 Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_1115(12) <= -99f;
}

BOOL func_1053() // Position - 0x39A99 Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_1115(12) >= 99f;
}

int func_1054() // Position - 0x39AAD Hash - 0x16CCC184 ^0xC9058B80
{
	int i;
	Hash hash;
	int num;

	num = 0;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_371(hash) == -999503751)
			if (func_1118() != hash)
				num = num + 1;
	}

	return num;
}

BOOL func_1055(eStackSize essParam0) // Position - 0x39AFE Hash - 0xFE3170D1 ^0xFE3170D1
{
	if (!func_730(essParam0))
		return false;

	if (func_969(essParam0, 4))
		return true;

	return false;
}

BOOL func_1056(eStackSize essParam0) // Position - 0x39B23 Hash - 0x2EF48521 ^0x2EF48521
{
	if (!func_730(essParam0))
		return false;

	if (func_969(essParam0, 2))
		return true;

	return false;
}

void func_1057(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x39B48 Hash - 0xC49CD38D ^0xC49CD38D
{
	if (!func_730(essParam0))
		return;

	if (!func_1056(essParam0))
	{
		func_503(essParam0, 2);
	
		if (bParam2)
			if (!func_394(0, false, true))
				func_308(true, 4);
	
		if (!func_1058() && !bParam1 && !func_394(0, false, true))
			func_1059(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_1119(essParam0)), 10000, 0, 0, 0, true);
	}

	return;
}

BOOL func_1058() // Position - 0x39BBD Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

int func_1059(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x39BDD Hash - 0x8EBD6187 ^0x42F0F0AC
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

int func_1060(int iParam0, BOOL bParam1) // Position - 0x39C18 Hash - 0x14DDA26B ^0xFFF4A8D0
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

void func_1061(Hash hParam0, BOOL bParam1) // Position - 0x39CBB Hash - 0xC1237140 ^0xC1237140
{
	int num;

	num = func_1120(hParam0);

	switch (num)
	{
		case 0:
			if (bParam1)
				func_617(50);
			else
				func_617(48);
			break;
	
		case 1:
			if (bParam1)
				func_617(51);
			else
				func_617(49);
			break;
	
		case 2:
			if (bParam1)
			{
				if (!func_1121(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_643();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_643();
			}
			break;
	
		case 3:
			func_617(24);
		
			if (bParam1)
			{
				if (!func_1121(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_643();
				}
			}
			break;
	}

	return;
}

void func_1062(int iParam0) // Position - 0x39D9A Hash - 0x562E9379 ^0x562E9379
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1122(0))
				num = num + 1;
		
			if (func_1122(2))
				num = num + 1;
		
			if (func_1122(4))
				num = num + 1;
		
			if (!func_1123(16))
			{
				if (num == 1)
				{
					func_1124();
					func_607(456, true);
					func_1125(16);
				}
			}
		
			if (!func_1123(32))
			{
				if (num >= 3)
				{
					func_1124();
					func_607(456, true);
					func_1125(32);
				}
			}
			break;
	
		case 1:
		case 3:
		case 7:
			if (func_1122(1))
				num = num + 1;
		
			if (func_1122(3))
				num = num + 1;
		
			if (func_1122(7))
				num = num + 1;
		
			if (!func_1123(1))
			{
				if (num == 1)
				{
					func_1126();
					func_607(457, true);
					func_1125(1);
				}
			}
		
			if (!func_1123(2))
			{
				if (num >= 3)
				{
					func_1126();
					func_607(457, true);
					func_1125(2);
				}
			}
			break;
	
		case 5:
		case 6:
		case 8:
			if (func_1122(5))
				num = num + 1;
		
			if (func_1122(6))
				num = num + 1;
		
			if (func_1122(8))
				num = num + 1;
		
			if (!func_1123(4))
			{
				if (num == 1)
				{
					func_1127();
					func_607(455, true);
					func_1125(4);
				}
			}
		
			if (!func_1123(8))
			{
				if (num >= 3)
				{
					func_1127();
					func_607(455, true);
					func_1125(8);
				}
			}
			break;
	}

	return;
}

void func_1063(var uParam0) // Position - 0x39F31 Hash - 0x2CE00B72 ^0x958A4727
{
	func_915(uParam0, joaat("MULTIPLAYER_GAME"));

	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_915(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_915(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_1064(Any anParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x39F6B Hash - 0x2A3EC766 ^0xE5AAC4BD
{
	int i;
	var unk;

	if (!func_1128(anParam0))
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

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_1065(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x3A00C Hash - 0x92B705D3 ^0xB783F681
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

void func_1066(int iParam0) // Position - 0x3A102 Hash - 0x7237E1A2 ^0x99714617
{
	var statId;

	if (iParam0 < 0)
		iParam0 = 0;

	Global_40.f_4283.f_325 = iParam0;
	statId = { func_748(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&statId, iParam0, true);
	return;
}

struct<29> func_1067(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x3A135 Hash - 0xD34D8048 ^0xAE0F4AAB
{
	var unk;
	var unk30;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk30.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_571(bParam4), &uParam0, &unk30, 29, 1))
		return unk;

	unk = { func_1071(&unk30) };
	unk.f_17 = { unk30.f_16 };
	unk.f_25 = unk30.f_25;
	unk.f_26 = unk30.f_27;
	unk.f_27 = unk30.f_28;
	unk.f_28 = unk30.f_24;
	return unk;
}

int func_1068(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x3A1CE Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_1129(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_1130(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_1130(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 29))
	{
		func_1130(num, 1);
		return num;
	}

	return -1;
}

struct<18> func_1069(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x3A255 Hash - 0x3EBED8E9 ^0x3FFB16B
{
	var unk;
	var unk19;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk19.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_571(bParam4), &uParam0, &unk19, 15, 1))
		return unk;

	unk = { func_1071(&unk19) };
	unk.f_17 = unk19.f_14;
	return unk;
}

int func_1070(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x3A2C8 Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_1131(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_1130(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_1130(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 18))
	{
		func_1130(num, 1);
		return num;
	}

	return -1;
}

struct<17> func_1071(var uParam0) // Position - 0x3A34F Hash - 0x4CD39800 ^0x7DC5804
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

int func_1072(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x3A3A3 Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_1132(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_1130(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_1130(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17))
	{
		func_1130(num, 1);
		return num;
	}

	return -1;
}

BOOL func_1073(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x3A42A Hash - 0x271191BA ^0xF79A5B58
{
	var outData;
	int i;

	*uParam3 = 0;

	if (!func_332(hParam0, 0))
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

int func_1074(int iParam0) // Position - 0x3A4AA Hash - 0x35E3D2CD ^0x35E3D2CD
{
	switch (iParam0)
	{
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		case 3:
			return 5;
	
		case 4:
			return 10;
	
		default:
		
	}

	return 0;
}

int func_1075(int iParam0) // Position - 0x3A4E4 Hash - 0x78E19743 ^0x6ACC64F5
{
	int i;
	var unk;

	for (i = iParam0; i < *Global_1058888.f_40431; i = i + 1)
	{
		if (i + 1 < 32)
			Global_1058888.f_40431.f_1[i /*2*/] = { Global_1058888.f_40431.f_1[i + 1 /*2*/] };
	}

	unk = -1;

	if (*Global_1058888.f_40431 < 32)
		Global_1058888.f_40431.f_1[*Global_1058888.f_40431 /*2*/] = { unk };

	Global_1058888.f_40431 = *Global_1058888.f_40431 - 1;

	if (*Global_1058888.f_40431 < 0)
		Global_1058888.f_40431 = 0;

	return 1;
}

int func_1076(int iParam0) // Position - 0x3A598 Hash - 0x6DD34799 ^0x352A62D8
{
	int num;
	var unk;

	num = *Global_1058888.f_40431 - 1;
	unk = -1;

	while (num >= iParam0)
	{
		if (num + 1 < 32)
			Global_1058888.f_40431.f_1[num + 1 /*2*/] = { Global_1058888.f_40431.f_1[num /*2*/] };
	
		num = num - 1;
	}

	Global_1058888.f_40431.f_1[iParam0 /*2*/] = { unk };
	Global_1058888.f_40431 = *Global_1058888.f_40431 + 1;

	if (*Global_1058888.f_40431 > 32)
		Global_1058888.f_40431 = 32;

	return 1;
}

BOOL func_1077(int iParam0) // Position - 0x3A639 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_1133(iParam0, 2);
}

BOOL func_1078(int iParam0) // Position - 0x3A648 Hash - 0xB0C53BA8 ^0xB0C53BA8
{
	if (iParam0 <= -1 || iParam0 >= 17)
		return false;

	return true;
}

BOOL func_1079(int iParam0, var uParam1, var uParam2) // Position - 0x3A667 Hash - 0xB903AED3 ^0x206B1C87
{
	if (!func_1078(iParam0))
		return false;

	switch (iParam0)
	{
		case 0:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP1");
			break;
	
		case 1:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP2");
			break;
	
		case 2:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP3");
			break;
	
		case 3:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP4");
			break;
	
		case 4:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP5");
			break;
	
		case 5:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_GOLDRUSH");
			break;
	
		case 6:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MINIGAMES");
			break;
	
		case 7:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_B_AND_E");
			break;
	
		case 8:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_RCKPT");
			break;
	
		case 9:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_TO_POOR");
			break;
	
		case 10:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_HONOR");
			break;
	
		case 11:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_RC");
			break;
	
		case 12:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_BOUNTY");
			break;
	
		case 13:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_UPGR_W");
			break;
	
		case 14:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_BEAR");
			break;
	
		case 15:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_ART");
			break;
	
		case 16:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_COLLECT");
			break;
	
		default:
			return false;
	}

	return true;
}

BOOL func_1080(int iParam0) // Position - 0x3A836 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case -1959946884:
		case -1784068921:
		case -1642438278:
		case -1349086674:
		case 310186733:
		case 456315479:
		case 471747275:
		case 1166592425:
		case 1486898918:
		case 1500419820:
			return true;
	
		default:
		
	}

	return false;
}

int func_1081(int iParam0, int iParam1) // Position - 0x3A887 Hash - 0x69E301C1 ^0x69E301C1
{
	switch (iParam0)
	{
		case -1959946884:
			return 6;
	
		case -1784068921:
			return 7;
	
		case -1642438278:
			return 2;
	
		case -1349086674:
			return 8;
	
		case 310186733:
			return 5;
	
		case 456315479:
			return 9;
	
		case 471747275:
			return 3;
	
		case 1166592425:
			return 4;
	
		case 1486898918:
			return 0;
	
		case 1500419820:
			return 1;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_1082(float fParam0, float fParam1) // Position - 0x3A90E Hash - 0x14E67663 ^0x43D0AA51
{
	return BUILTIN::FLOOR(((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR(fParam0 / fParam1))) * 24f);
}

int func_1083(float fParam0, float fParam1) // Position - 0x3A933 Hash - 0x14E67663 ^0x43D0AA51
{
	return BUILTIN::FLOOR(((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR(fParam0 / fParam1))) * 60f);
}

int func_1084(float fParam0, float fParam1) // Position - 0x3A958 Hash - 0x14E67663 ^0x43D0AA51
{
	return BUILTIN::FLOOR(((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR(fParam0 / fParam1))) * 60f);
}

BOOL func_1085(var uParam0, int iParam1) // Position - 0x3A97D Hash - 0x718DD1EF ^0xA172DFD1
{
	return uParam0->f_1 && iParam1 != false;
}

void func_1086(var uParam0, int iParam1, int iParam2) // Position - 0x3A98E Hash - 0xDEDED6D0 ^0xB4D62998
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_1087(int iParam0) // Position - 0x3A9A1 Hash - 0x9921E361 ^0xB910E238
{
	return Global_40.f_7748.f_4 && iParam0 != false;
}

int func_1088(int iParam0) // Position - 0x3A9B6 Hash - 0xB4860741 ^0xB4860741
{
	if (func_115() == -1)
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

char* func_1089() // Position - 0x3AA0D Hash - 0x306ACA3A ^0x84DFAD9B
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

void func_1090(Hash hParam0, Ped pedParam1, BOOL bParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x3AA19 Hash - 0xABE0892F ^0x49EF76F7
{
	int i;
	int num;
	Hash componentHash;
	int num2;
	BOOL isMp;

	isMp = func_115() != -1;
	Global_1946054.f_857 = 0;

	if (iParam3 == -1 && bParam6)
	{
		PED::_RESET_PED_COMPONENTS(pedParam1);
	
		if (!isMp)
		{
			if (Global_1347477.f_189 != 0)
				PED::_EQUIP_META_PED_OUTFIT(pedParam1, Global_1347477.f_189);
		
			if (Global_1946054.f_1 == -2125499975 || Global_1946054.f_1 == -449205311 && Global_1347477.f_190 != 0)
				PED::_EQUIP_META_PED_OUTFIT(pedParam1, Global_1347477.f_190);
		
			func_532(262144);
		}
	}
	else
	{
		bParam6 = false;
	
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1134(pedParam1, 29, isMp, true, 0);
			func_1134(pedParam1, 31, isMp, true, 0);
			func_1134(pedParam1, 30, isMp, true, 0);
			func_1134(pedParam1, 22, isMp, true, 0);
			func_1134(pedParam1, 37, isMp, true, 0);
		}
	}

	if (func_765(32768) && func_539(1108822547, 8) && func_538(10, iParam3))
		func_1135(pedParam1, false, true);

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num2 = func_534(num, 1);
		
			if (func_539(num2, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
			{
			}
			else
			{
				componentHash = hParam0->f_1[num /*3*/];
			
				if (!func_538(num, iParam3))
				{
				}
				else if (func_539(num2, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/] || hParam0->f_1[num /*3*/].f_1 == 289238755)
				{
					if (!func_539(num2, 1) || bParam2)
					{
						Global_1946054.f_857 = Global_1946054.f_857 + 1;
					
						if (!bParam6)
							func_1134(pedParam1, num, isMp, true, 0);
					
						if (hParam0->f_1[num /*3*/].f_1 == 289238755)
							Global_1946054.f_2456[num /*2*/].f_1 = 289238755;
					
						func_541(num2, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if (!bParam2 && hParam0->f_1[num /*3*/] == Global_1946054.f_2456[num /*2*/] && hParam0->f_1[num /*3*/].f_1 == Global_1946054.f_2456[num /*2*/].f_1)
						{
						}
						else
						{
							if (Global_1946054.f_57[num /*11*/].f_1 > 1)
								func_1134(pedParam1, num, isMp, true, hParam0->f_1[num /*3*/]);
						
							Global_1946054.f_2456[num /*2*/] = hParam0->f_1[num /*3*/];
							Global_1946054.f_2456[num /*2*/].f_1 = hParam0->f_1[num /*3*/].f_1;
						
							if (func_539(num2, 1))
								func_540(num2, 1, 6);
						
							Global_1946054.f_857 = Global_1946054.f_857 + 1;
							PED::_APPLY_SHOP_ITEM_TO_PED(pedParam1, componentHash, false, isMp, false);
						
							if (hParam0->f_1[num /*3*/].f_1 != 0)
								PED::_UPDATE_SHOP_ITEM_WEARABLE_STATE(pedParam1, componentHash, hParam0->f_1[num /*3*/].f_1, 0, isMp, 1);
						}
					}
				
					Global_1946054.f_2456[num /*2*/] = hParam0->f_1[num /*3*/];
					Global_1946054.f_2456[num /*2*/].f_1 = hParam0->f_1[num /*3*/].f_1;
				
					if (func_539(num2, 1))
						func_540(num2, 1, 6);
				
					Global_1946054.f_857 = Global_1946054.f_857 + 1;
					PED::_APPLY_SHOP_ITEM_TO_PED(pedParam1, componentHash, false, isMp, false);
				
					if (hParam0->f_1[num /*3*/].f_1 != 0)
						PED::_UPDATE_SHOP_ITEM_WEARABLE_STATE(pedParam1, componentHash, hParam0->f_1[num /*3*/].f_1, 0, isMp, 1);
				}
			}
		}
	}

	if (Global_1946054.f_857 <= 0)
		return;

	if (bParam4)
	{
		PED::_0xAAB86462966168CE(pedParam1, isMp);
		PED::_UPDATE_PED_VARIATION(pedParam1, false, true, true, true, bParam5);
	}

	return;
}

int func_1091(Hash hParam0) // Position - 0x3AD62 Hash - 0xF4E671A6 ^0x4954A67D
{
	Hash category;

	if (!func_332(hParam0, 0))
		return 0;

	category = func_371(hParam0);

	if (category == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(category);
}

BOOL func_1092(Hash hParam0) // Position - 0x3AD91 Hash - 0x37EEAC8A ^0x201FD0EE
{
	if (hParam0 == 263080063 || hParam0 == -34331381 || hParam0 == -993578318 || hParam0 == 579268144 || hParam0 == 1104489688)
		return true;

	return false;
}

BOOL func_1093(Hash hParam0, var uParam1, BOOL bParam2) // Position - 0x3ADE1 Hash - 0x7D2A9D5F ^0xA6A7295C
{
	int num;
	int num2;
	var unk;
	var unk19;
	int i;

	if (hParam0 == 0)
		return false;

	unk = { func_564(0, hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };
	func_751(&unk, func_579());

	if (func_565(&unk, &num, &num2, false))
	{
		unk19.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_673(&unk19, i, num, num2))
			{
				if (func_332(unk19.f_4, 0) && !unk19.f_10)
				{
					if (bParam2 && func_1092(unk19.f_4))
					{
					}
					else
					{
						*uParam1 = { unk19 };
						func_566(num);
						return true;
					}
				}
			}
		}
	
		func_566(num);
	}

	return false;
}

int func_1094(Hash hParam0, Hash hParam1) // Position - 0x3AE98 Hash - 0x39B5DB67 ^0xD5694E3C
{
	if (hParam1 == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

float func_1095(int iParam0) // Position - 0x3AEB2 Hash - 0x212D15D1 ^0x936F419E
{
	int num;
	int num2;
	float num3;
	float num4;
	int num5;
	int num6;
	int num7;

	num5 = func_988(iParam0);

	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			num4 = Global_40.f_11095.f_11[num5];
			num6 = func_1096(num4);
			num = num6;
			num7 = num + 1;
			num2 = func_1136(num7) - func_1136(num6);
			num3 = (float)num2 * 0.25f;
			return num3;
	
		default:
		
	}

	return -1f;
}

int func_1096(float fParam0) // Position - 0x3AF1C Hash - 0x3E9B0DE9 ^0x3E9B0DE9
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

int func_1097(int iParam0) // Position - 0x3AFA8 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
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

int func_1098(int iParam0) // Position - 0x3AFE1 Hash - 0xB8632262 ^0xB8632262
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

int func_1099(float fParam0, float fParam1) // Position - 0x3B060 Hash - 0xD6DD6059 ^0x47213A0D
{
	int num;
	float num2;
	float num3;
	float num4;
	int num5;
	int num6;

	num = func_1096(fParam0);
	num2 = BUILTIN::TO_FLOAT(func_1136(num));
	num3 = BUILTIN::TO_FLOAT(func_1136(num + 1));
	num4 = num3 - num2;
	num5 = BUILTIN::FLOOR(((fParam0 - num2) / num4) * 4f);
	num6 = BUILTIN::FLOOR(((fParam1 - num2) / num4) * 4f);

	if (num5 == num6)
		return 0;

	if (num6 >= 4 || num6 < 0)
		return 0;

	return num6;
}

int func_1100(int iParam0) // Position - 0x3B0D3 Hash - 0x49D35AE6 ^0xCCB27CDD
{
	int num;

	if (func_1137(iParam0, &num))
		return func_1136(num);

	switch (iParam0)
	{
		case 0:
			if (func_1138())
				return 550;
			else
				return 100;
			break;
	
		case 1:
			if (func_1138())
				return 550;
			else
				return 50;
			break;
	
		case 2:
			if (func_1138())
				return 550;
			else
				return 50;
			break;
	
		case 4:
			return 0;
	}

	return 0;
}

int func_1101(int iParam0) // Position - 0x3B15F Hash - 0xEE6D3E20 ^0xEE6D3E20
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

void func_1102(int iParam0, int iParam1, int iParam2) // Position - 0x3B191 Hash - 0x29688DE6 ^0x66568CE
{
	char* str;
	const char* str2;
	BOOL flag;
	int num;
	const char* str3;
	char* str4;
	char* str5;
	const char* str6;
	int num2;
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

	num = num + func_1139(iParam0);
	str3 = func_1141(func_1140(num, iParam2));
	str5 = func_1142(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str5))
		str4 = "HUD_Toast_Soundset";

	str6 = MISC::VAR_STRING(10, str, func_1143(iParam0));
	num2 = func_1144(iParam0);
	hashKey = MISC::GET_HASH_KEY(str3);

	if (flag)
	{
		data = str6;
		data.f_1 = str2;
		data.f_3 = hashKey;
		data.f_2 = num2;
		data.f_4 = 1;
		data.f_5 = func_1145(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&data);
	}

	func_856(str6, str2, num2, hashKey, joaat("stats_menu"), "INPUT_FEED_INTERACT_GENERIC", func_1146(iParam0), -2, str4, str5, 0, 0, true, true);
	return;
}

void func_1103(int iParam0, int iParam1) // Position - 0x3B289 Hash - 0xDA1E7FF9 ^0xEB114C96
{
	Global_1347477.f_9[iParam0 /*2*/] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

BOOL func_1104(int iParam0) // Position - 0x3B2A2 Hash - 0x3270B633 ^0x3270B633
{
	return iParam0 > -1 && iParam0 < 25;
}

int func_1105(BOOL bParam0) // Position - 0x3B2B8 Hash - 0x22A87A6A ^0x22A87A6A
{
	int i;

	for (i = 0; bParam0 != false; i = i + 1)
	{
		bParam0 = bParam0 && bParam0 - 1;
	}

	return i;
}

BOOL func_1106(Hash hParam0) // Position - 0x3B2DD Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

BOOL func_1107(Hash hParam0) // Position - 0x3B2ED Hash - 0xB8632262 ^0xB8632262
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

int func_1108(Hash hParam0) // Position - 0x3B394 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
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

int func_1109(Hash hParam0) // Position - 0x3B3CD Hash - 0xFEF68B9C ^0xE8DB1D9E
{
	Entity entity;
	Hash model;
	int i;

	model.f_10 = 10;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!func_1147(&entity, 0, i, &model) && !func_1147(&entity, 1, i, &model))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(model))
		{
			func_1148(entity, &model);
		
			if (func_332(model.f_1, 0))
				return 1;
		}
	}

	return 0;
}

void func_1110() // Position - 0x3B439 Hash - 0x190164B9 ^0x2EDA1322
{
	var unk;
	var unk31;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
		return;

	unk = 29;
	func_1149(Global_35, &unk);
	unk31 = { func_754(false) };
	INVENTORY::_0xE36D4A38D28D9CFB(false);
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(5, 1, &unk31, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_93(false);
	func_106(7);
	func_1150(joaat("kit_bandana"), true, true, false);

	if (func_339() == 1160113249)
	{
		func_1150(joaat("clothing_p3_player_three_ms1_hat_000_000"), true, true, true);
		func_1150(-361635024, true, true, true);
	}

	func_1151(Global_35, &unk);
	return;
}

int func_1111(Hash hParam0) // Position - 0x3B4C2 Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_527(outSlotId);
}

int func_1112(Hash hParam0, int iParam1) // Position - 0x3B4E5 Hash - 0x7CE1A52B ^0x35B4CDB3
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
	int num;

	if (iParam1 < 0)
		iParam1 = func_571(false);

	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, hParam0, &year, &month, &day, &hour, &minute, &second))
		return -15;

	func_687(&num, year);
	func_688(&num, month);
	func_689(&num, day);
	func_690(&num, hour);
	func_691(&num, minute);
	func_692(&num, second);
	return num;
}

BOOL func_1113(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x3B54A Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_1152(hParam1) || !func_1152(hParam0))
			return true;

	return hParam0 > hParam1;
}

void func_1114(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3B577 Hash - 0x475F4FBD ^0x5DA546E8
{
	if (bParam1)
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] };

	if (!bParam2)
		return;

	if (func_115() == -1)
		func_342(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_26796.f_776);
	else
		func_548(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_36638.f_45.f_350.f_1011);

	return;
}

float func_1115(int iParam0) // Position - 0x3B5ED Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_1116(float fParam0) // Position - 0x3B601 Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

char* func_1117(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3B61C Hash - 0xC24B5846 ^0xF667138F
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

Hash func_1118() // Position - 0x3B6C4 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1946054.f_1497;
}

char* func_1119(eStackSize essParam0) // Position - 0x3B6D3 Hash - 0xCCDB3731 ^0xDB655990
{
	Hash hash;

	hash = func_359(essParam0);

	if (hash == 0)
		return "OUT_UNKNOWN";

	return func_1016(hash);
}

int func_1120(Hash hParam0) // Position - 0x3B6F6 Hash - 0x9F080DD1 ^0x9F080DD1
{
	int num;

	if (func_1153(hParam0))
		num = 0;
	else if (func_1154(hParam0))
		num = 1;
	else if (func_1155(hParam0))
		num = 2;
	else if (func_1156(hParam0))
		num = 3;

	return num;
}

BOOL func_1121(int iParam0) // Position - 0x3B739 Hash - 0x8AC2B33E ^0x8AC2B33E
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 9; i = i + 1)
	{
		if (func_418(func_1157(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num > 1)
		return true;

	return false;
}

BOOL func_1122(int iParam0) // Position - 0x3B779 Hash - 0x626B55E1 ^0x626B55E1
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		if (func_418(func_1158(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num >= 4)
		return true;

	return false;
}

BOOL func_1123(int iParam0) // Position - 0x3B7B8 Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12003 && iParam0 != false;
}

void func_1124() // Position - 0x3B7CB Hash - 0x40D9944C ^0x169F6962
{
	int num;

	if (func_115() != -1)
		return;

	func_661(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	num = func_991(1);
	func_1102(1, num, 0);
	return;
}

void func_1125(int iParam0) // Position - 0x3B7FD Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12003 = Global_40.f_12003 || iParam0;
	return;
}

void func_1126() // Position - 0x3B814 Hash - 0x1D33C94B ^0xA2EE5507
{
	int num;

	if (func_115() != -1)
		return;

	func_661(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	num = func_991(2);
	func_1102(2, num, 0);
	return;
}

void func_1127() // Position - 0x3B846 Hash - 0xB797F7DC ^0xFD986A22
{
	int num;

	if (func_115() != -1)
		return;

	func_661(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	num = func_991(0);
	func_1102(0, num, 0);
	return;
}

BOOL func_1128(Any anParam0) // Position - 0x3B878 Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_1129(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x3B8AE Hash - 0x494940FE ^0x1E1EAABF
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 29, panParam2, 0);
}

void func_1130(int iParam0, int iParam1) // Position - 0x3B8C5 Hash - 0x18C74423 ^0xA1132A0
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

	func_1159(iParam0, iParam1);
	return;
}

BOOL func_1131(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x3B927 Hash - 0xAEE55F03 ^0x36ABCD3F
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

BOOL func_1132(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x3B93E Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

BOOL func_1133(int iParam0, int iParam1) // Position - 0x3B955 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

void func_1134(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3, Hash hParam4) // Position - 0x3B976 Hash - 0x767FA5CE ^0x6D58A5B0
{
	int i;
	Hash shopItemComponentCategory;
	int num;

	num = func_534(iParam1, 1);

	if (!bParam2 && num == joaat("MP_COMPONENT_TYPE_BEARD"))
		bParam3 = false;

	if (hParam4 != 0)
		if (num == 1108822547)
			shopItemComponentCategory = func_1160(hParam4);
		else if (hParam4 != Global_1946054.f_57[iParam1 /*11*/])
			shopItemComponentCategory = PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(hParam4, PED::_GET_META_PED_TYPE(pedParam0), bParam2);

	if (bParam3)
	{
		for (i = 0; i < Global_1946054.f_57[iParam1 /*11*/].f_1; i = i + 1)
		{
			if (Global_1946054.f_57[iParam1 /*11*/].f_2[i] != shopItemComponentCategory)
				PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, Global_1946054.f_57[iParam1 /*11*/].f_2[i], 0, bParam2);
		}
	}
	else
	{
		for (i = 0; i < Global_1946054.f_57[iParam1 /*11*/].f_1; i = i + 1)
		{
			if (Global_1946054.f_57[iParam1 /*11*/].f_2[i] != shopItemComponentCategory)
				PED::REMOVE_TAG_FROM_META_PED(pedParam0, Global_1946054.f_57[iParam1 /*11*/].f_2[i], 0);
		}
	}

	return;
}

void func_1135(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3BA73 Hash - 0x1EA557EC ^0xC168425
{
	int num;

	num = 10;

	if (func_539(1108822547, 6))
	{
		if (bParam2)
		{
			func_1134(pedParam0, num, func_115() != -1, false, 0);
			func_541(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_SET_META_PED_TAG(pedParam0, Global_1946054.f_2776.f_1, Global_1946054.f_2776.f_3[0], Global_1946054.f_2776.f_3[1], Global_1946054.f_2776.f_3[2], Global_1946054.f_2776.f_8, Global_1946054.f_2776.f_9, Global_1946054.f_2776.f_10, Global_1946054.f_2776.f_11);
		func_540(1108822547, 1, 6);
	}

	Global_1946054.f_857 = Global_1946054.f_857 + 1;

	if (!bParam1)
		return;

	PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);
	return;
}

int func_1136(int iParam0) // Position - 0x3BB3B Hash - 0xD14E7A6C ^0x65ACC420
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

BOOL func_1137(int iParam0, var uParam1) // Position - 0x3BBB1 Hash - 0x7D48C204 ^0x7D48C204
{
	return false;
}

BOOL func_1138() // Position - 0x3BBBA Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

int func_1139(int iParam0) // Position - 0x3BBC3 Hash - 0xDB2BFD59 ^0x5419B7B7
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_571(false), joaat("UPGRADE_HEALTH_TANK_1"), false);
	
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_571(false), joaat("UPGRADE_STAMINA_TANK_1"), false);
	
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_571(false), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}

	return 0;
}

struct<4> func_1140(int iParam0, int iParam1) // Position - 0x3BC25 Hash - 0xD5391B76 ^0xA77BF5ED
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

const char* func_1141(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x3BC57 Hash - 0x1D52DDA1 ^0x2CC95A61
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_1142(int iParam0) // Position - 0x3BC6B Hash - 0x90F8FE07 ^0xF12D5674
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

char* func_1143(int iParam0) // Position - 0x3BCA5 Hash - 0x90F8FE07 ^0xE581C9A4
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

int func_1144(int iParam0) // Position - 0x3BCDF Hash - 0x21FAF347 ^0x467E3BE5
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

int func_1145(int iParam0) // Position - 0x3BD1A Hash - 0x5163992 ^0x5163992
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

int func_1146(int iParam0) // Position - 0x3BD49 Hash - 0x21FAF347 ^0xA8C8F0DA
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

BOOL func_1147(var uParam0, int iParam1, int iParam2, var uParam3) // Position - 0x3BD84 Hash - 0x3AEC80A5 ^0x823C1FFF
{
	Ped ped;
	var unk;
	int num;

	if (func_1161(iParam1) && !func_1162(iParam1))
		ped = func_1163(iParam1);
	else
		return false;

	func_1164(uParam3);
	num = func_1165(iParam2);

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

void func_1148(Entity eParam0, var uParam1) // Position - 0x3BE23 Hash - 0x9E997175 ^0xEF5C18F2
{
	Ped pedIndexFromEntityIndex;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
	{
		func_1166(pedIndexFromEntityIndex, &(uParam1->f_5), &(uParam1->f_6), &(uParam1->f_7), &(uParam1->f_4));
	
		if (func_1167(&(uParam1->f_1), pedIndexFromEntityIndex, uParam1->f_7, uParam1->f_5))
		{
		}
	}

	return;
}

void func_1149(Ped pedParam0, Any* panParam1) // Position - 0x3BE6D Hash - 0x2B5AFE28 ^0xF454BB04
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
	
		if (func_428(weaponHash))
			panParam1->[i] = weaponHash;
		else
			panParam1->[i] = 0;
	}

	return;
}

void func_1150(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3BED2 Hash - 0x65C82C94 ^0x421AD701
{
	Hash hash;
	BOOL flag;

	if (!func_1168(hParam0))
		return;

	hash = func_371(hParam0);
	flag = false;

	switch (hash)
	{
		case -2061583405:
			flag = func_1169(hParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
	
		case -1719060085:
			flag = func_1169(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case -999503751:
			flag = func_1169(hParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
	
		case -525676072:
			flag = func_1169(hParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
	
		case -413129408:
			flag = func_1169(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case 81053684:
			flag = func_1169(hParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
	}

	if (!flag)
		return;

	if (hParam0 == func_1170(0))
	{
		func_1171(hParam0, true);
	
		if (func_339() == 1160113249)
			func_1171(func_1170(-2125499975), false);
		else
			func_1171(func_1170(1160113249), false);
	}

	func_515();

	if (func_1172(hash))
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_571(false), hParam0, 0);

	func_374(hParam0, bParam3);

	if (bParam2)
		func_347(false, false);

	return;
}

void func_1151(Ped pedParam0, var uParam1) // Position - 0x3C039 Hash - 0xEFD384E2 ^0xD2D4DFA3
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
				if (func_862(uParam1->[i]))
					WEAPON::GIVE_WEAPON_TO_PED(pedParam0, uParam1->[i], 0, false, false, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
		
			weaponHash = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, i, true);
		
			if (weaponHash != uParam1->[i])
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam1->[i], true, i, false, false);
		}
	}

	return;
}

BOOL func_1152(Hash hParam0) // Position - 0x3C0E2 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (hParam0 == -15)
		return false;

	num = func_711(hParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_710(hParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_709(hParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_706(hParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_707(hParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_708(hParam0);

	if (num6 < 1 || num6 > func_712(num5, num4))
		return false;

	return true;
}

BOOL func_1153(Hash hParam0) // Position - 0x3C1BE Hash - 0x1FFCC90D ^0x701F5DF1
{
	if (!func_332(hParam0, 0))
		return false;

	if (func_547(hParam0, -1066545920))
		return true;

	return false;
}

BOOL func_1154(Hash hParam0) // Position - 0x3C1E8 Hash - 0x1FFCC90D ^0xAD3356F0
{
	if (!func_332(hParam0, 0))
		return false;

	if (func_547(hParam0, -284267618))
		return true;

	return false;
}

BOOL func_1155(Hash hParam0) // Position - 0x3C212 Hash - 0x1FFCC90D ^0xE43ED45D
{
	if (!func_332(hParam0, 0))
		return false;

	if (func_547(hParam0, 363491182))
		return true;

	return false;
}

BOOL func_1156(Hash hParam0) // Position - 0x3C23C Hash - 0x1FFCC90D ^0xCB06CB57
{
	if (!func_332(hParam0, 0))
		return false;

	if (func_547(hParam0, 1406113494))
		return true;

	return false;
}

Hash func_1157(int iParam0, int iParam1) // Position - 0x3C266 Hash - 0xD72223E5 ^0xD72223E5
{
	switch (iParam1)
	{
		case 0:
			return func_1173(iParam0);
	
		case 1:
			return func_1174(iParam0);
	
		case 2:
			return func_1175(iParam0);
	
		case 3:
			return func_1176(iParam0);
	}

	return 0;
}

Hash func_1158(int iParam0, int iParam1) // Position - 0x3C2BF Hash - 0x8B23AC7F ^0x8B23AC7F
{
	switch (iParam1)
	{
		case 0:
			return func_1177(iParam0);
	
		case 1:
			return func_1178(iParam0);
	
		case 2:
			return func_1179(iParam0);
	
		case 3:
			return func_1180(iParam0);
	
		case 4:
			return func_1181(iParam0);
	
		case 5:
			return func_1182(iParam0);
	
		case 6:
			return func_1183(iParam0);
	
		case 7:
			return func_1184(iParam0);
	
		case 8:
			return func_1185(iParam0);
	}

	return 0;
}

void func_1159(int iParam0, int iParam1) // Position - 0x3C372 Hash - 0x26256B16 ^0x79A35F4E
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

Hash func_1160(Hash hParam0) // Position - 0x3C3EF Hash - 0xBBE66644 ^0xEC72F4B4
{
	Hash hash;

	hash = func_371(hParam0);

	switch (hash)
	{
		case -2061583405:
			return joaat("HATS");
	
		case -525676072:
			return joaat("MASKS_LARGE");
	
		default:
		
	}

	return 0;
}

BOOL func_1161(int iParam0) // Position - 0x3C424 Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_827(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
		return true;

	return false;
}

BOOL func_1162(int iParam0) // Position - 0x3C45C Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_827(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_1161(iParam0))
		return false;

	ped = func_1163(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return true;

	return false;
}

Ped func_1163(int iParam0) // Position - 0x3C4B0 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_827(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

void func_1164(var uParam0) // Position - 0x3C4DC Hash - 0x6843C143 ^0xA531F0D1
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

int func_1165(int iParam0) // Position - 0x3C583 Hash - 0x1B64DC55 ^0x1B64DC55
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

void func_1166(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x3C5BB Hash - 0x125E1FB8 ^0x58C5F328
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

BOOL func_1167(Any anParam0, Ped pedParam1, int iParam2, var uParam3) // Position - 0x3C630 Hash - 0xF684EE16 ^0xD8F147D7
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

BOOL func_1168(Hash hParam0) // Position - 0x3C659 Hash - 0x701FABE1 ^0x8D951E11
{
	if (func_115() == -1)
		if (Global_40.f_4283 != 0)
			if (hParam0 == 1164374808)
				return false;

	return true;
}

BOOL func_1169(Hash hParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x3C682 Hash - 0x23FDC0AC ^0x7E5464B5
{
	var unk;
	Hash hash;

	hash = hParam0;

	if (Global_1946054.f_2657.f_19 >= 18)
		return 0;

	if (*iParam1 >= iParam2)
		return 0;

	if (func_738(hash, &unk))
		return 0;

	if (bParam3 && !func_373(hParam0, false))
		return 0;

	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = hash;

	if (func_371(hParam0) != -999503751)
		func_372(&(Global_1946054.f_2657.f_26.f_26), hParam0, Global_1946054.f_2657.f_19);

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 + 1;
	*iParam1 = *iParam1 + 1;
	return 1;
}

Hash func_1170(int iParam0) // Position - 0x3C72A Hash - 0x76CF7738 ^0x832144C4
{
	if (iParam0 == 0)
		iParam0 = func_339();

	if (iParam0 == 1160113249)
		return joaat("clothing_p3_player_three_ms1_hat_000_000");

	return joaat("clothing_item_hat_pzero_000");
}

int func_1171(Hash hParam0, BOOL bParam1) // Position - 0x3C755 Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_526(hParam0, false, false) };
	guid = { func_569(hParam0, unk, unk.f_4, false) };

	if (func_570(hParam0, unk, unk.f_4, false) <= 0)
		return 0;

	INVENTORY::_0x0349404A22736740(bParam1, func_571(false), &guid);
	return 1;
}

BOOL func_1172(Hash hParam0) // Position - 0x3C7A1 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_1186(func_732(hParam0));
}

Hash func_1173(int iParam0) // Position - 0x3C7B3 Hash - 0xC02FF737 ^0xE6E3E291
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

Hash func_1174(int iParam0) // Position - 0x3C842 Hash - 0xC02FF737 ^0x9CC78C98
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

Hash func_1175(int iParam0) // Position - 0x3C8D1 Hash - 0xC02FF737 ^0x26BFE76B
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

Hash func_1176(int iParam0) // Position - 0x3C960 Hash - 0xC02FF737 ^0xC89D76B1
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

Hash func_1177(int iParam0) // Position - 0x3C9EF Hash - 0x51E02475 ^0x6FAD83C9
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

Hash func_1178(int iParam0) // Position - 0x3CA38 Hash - 0x51E02475 ^0x73BA00BD
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

Hash func_1179(int iParam0) // Position - 0x3CA81 Hash - 0x51E02475 ^0xD39CAF97
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

Hash func_1180(int iParam0) // Position - 0x3CACA Hash - 0x51E02475 ^0xB8F3F001
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

Hash func_1181(int iParam0) // Position - 0x3CB13 Hash - 0x51E02475 ^0xCED8E5FA
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

Hash func_1182(int iParam0) // Position - 0x3CB5C Hash - 0x51E02475 ^0x25F7B61
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

Hash func_1183(int iParam0) // Position - 0x3CBA5 Hash - 0x51E02475 ^0xE0DEBCEF
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

Hash func_1184(int iParam0) // Position - 0x3CBEE Hash - 0x51E02475 ^0x50FB5131
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

Hash func_1185(int iParam0) // Position - 0x3CC37 Hash - 0x51E02475 ^0x8656D204
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

BOOL func_1186(int iParam0) // Position - 0x3CC80 Hash - 0x8364EAF ^0xECEEE8D3
{
	return Global_1946054.f_2657.f_26.f_6 && iParam0 != false;
}

