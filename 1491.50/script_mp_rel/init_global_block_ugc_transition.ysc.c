// Program registers 2339 globals at index 13 starting from Global_3407872
void main() // Position - 0x0 Hash - 0x907AA7C2 ^0xC474981D
{
	if (SCRIPTS::_DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST(13))
		SCRIPTS::_RESTORE_GLOBAL_BLOCK(13);
	else
		SCRIPTS::_STORE_GLOBAL_BLOCK(13);

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

