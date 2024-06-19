// Program registers 0 globals at index 5 starting from Global_1310720
void main() // Position - 0x0 Hash - 0x7C68084E ^0x3636AEF7
{
	if (SCRIPTS::_DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST(5))
		SCRIPTS::_RESTORE_GLOBAL_BLOCK(5);
	else
		SCRIPTS::_STORE_GLOBAL_BLOCK(5);

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

