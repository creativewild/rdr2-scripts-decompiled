// Program registers 10010 globals at index 8 starting from Global_2097152
void main() // Position - 0x0 Hash - 0x5565D469 ^0x707960E6
{
	if (SCRIPTS::_DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST(8))
		SCRIPTS::_RESTORE_GLOBAL_BLOCK(8);
	else
		SCRIPTS::_STORE_GLOBAL_BLOCK(8);

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

