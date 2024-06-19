// Program registers 176161 globals at index 4 starting from Global_1048576
void main() // Position - 0x0 Hash - 0x3EB24FC9 ^0xAFDAE367
{
	Global_1048945 = { -557.7f, -3610.7f, 80.9f };
	Global_1051043 = -1;

	if (SCRIPTS::_DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST(4))
		SCRIPTS::_RESTORE_GLOBAL_BLOCK(4);
	else
		SCRIPTS::_STORE_GLOBAL_BLOCK(4);

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

