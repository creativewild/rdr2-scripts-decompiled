// Program registers 84946 globals at index 12 starting from Global_3145728
void main() // Position - 0x0 Hash - 0x2C6F23A6 ^0x1E6ED3D1
{
	if (SCRIPTS::_DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST(12))
		SCRIPTS::_RESTORE_GLOBAL_BLOCK(12);
	else
		SCRIPTS::_STORE_GLOBAL_BLOCK(12);

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

