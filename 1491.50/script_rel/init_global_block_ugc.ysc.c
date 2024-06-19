// Program registers 77246 globals at index 1 starting from Global_262144
void main() // Position - 0x0 Hash - 0x1832E12F ^0xC54045F
{
	if (SCRIPTS::_DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST(1))
		SCRIPTS::_RESTORE_GLOBAL_BLOCK(1);
	else
		SCRIPTS::_STORE_GLOBAL_BLOCK(1);

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

