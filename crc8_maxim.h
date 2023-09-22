
//------------------------------------------------------------------------------ 
// 	Function Name:		CRC8 Maxim Table
// 	Description: 		This subroutine contains the crc table required
//						for the crc8 Maxim calculation.
// 	Parameters:	 		None 
// 	Returns: 			None
//------------------------------------------------------------------------------
extern uint8_t const crcTable[256];

//------------------------------------------------------------------------------ 
// 	Function Name:		CRC8 Maxim Function
// 	Description: 		This subroutine calculates the CRC8 Maxim for the provided 
//						buffer based on the number of bytes passed via length 
//						and returns it.
// 	Parameters:	 		p:			Data pointer
//						length:		Number of bytes 
// 	Returns: 			The updated CRC value
//------------------------------------------------------------------------------
uint8_t getCrc8(uint8_t *p, uint8_t length);
