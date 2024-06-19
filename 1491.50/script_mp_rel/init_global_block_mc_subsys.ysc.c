// Program registers 147224 globals at index 15 starting from Global_3932160
void main() // Position - 0x0 Hash - 0xA1CE136F ^0x821A44C8
{
	if (SCRIPTS::_DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST(15))
		SCRIPTS::_RESTORE_GLOBAL_BLOCK(15);
	else
		SCRIPTS::_STORE_GLOBAL_BLOCK(15);

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

