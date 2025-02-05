// Command.h

#ifndef _COMMAND_h
#define _COMMAND_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

/*
	??????????��?�????0???????��??��???6��
	��??��??????
	command[6] = (command[2] + command[3] + command[4] + command[5]) % 256;
*/

#define BASEADDRESS				0x6000
#define WRITEADDRESS			(BASEADDRESS + 0x0008)
#define READADDRESS				(BASEADDRESS + 0x0100)

#define TRACKOFFSET				0x0000
#define CODEOFFSET				0x0002


class _Command
{
public:
	_Command();
	~_Command();

	void Judgment(uint8_t *);

	uint8_t HW_Dimming1[4] = {0x00,0xff,0x0c,0xF3};						/*?????�� ??1 ????					?????*/		
	uint8_t HW_Dimming2[4] = {0x00,0xff,0x18,0xE7};						/*?????�� ??2 ????					?????*/
	uint8_t HW_Dimming3[4] = {0x00,0xff,0x5e,0xA1};						/*?????�� ??3 ????					?????*/

	uint8_t HW_3D1[ 6 ] = { 0xff,0x14,0x01,0x00,0x00,0x00 };					/*???????????????��??????	????????????????		?????*/
	uint8_t HW_3D2[ 6 ] = { 0xff,0x14,0x02,0x00,0x00,0x00 };					/*???????????????��??????	??????????????		?????*/

	uint8_t HW_K[ 6 ] = { 0x03,0x05,0x14,0x45,0xDE,0x92 };						/*????????????				?????*/
	uint8_t HW_G[ 6 ] = { 0x67,0x34,0x78,0xA2,0xFD,0x27 };						/*?????????????				?????*/
								/*?? ????	????   ????    ?��*/
	uint8_t HW_RED		[ 6 ] = { 0x55,0x06,0x01,0x01,0x05,0xbb };				/*��??? ????? ??????		?????*/
	uint8_t HW_GREEN	[ 6 ] = { 0x55,0x06,0x01,0x02,0x05,0xbb };				/*��??? ????? ??????		?????*/
	uint8_t HW_BLUE		[ 6 ] = { 0x55,0x06,0x01,0x03,0x05,0xbb };				/*��??? ????? ??????		?????*/
	uint8_t HW_YELLOW	[ 6 ] = { 0x55,0x06,0x01,0x04,0x05,0xbb };				/*��??? ????? ??????		?????*/
	uint8_t HW_TURNOFF	[ 6 ] = { 0x55,0x06,0x02,0x00,0x00,0xbb };				/*��??????????????			?????*/

							/* ?? ???? ????        ????       ��??�� ?��*/
	uint8_t command01[ 8 ] = { 0x55,0x02,0x07 ,0x00 ,0x00 ,0x00 ,0x00 ,0xbb };	/*?????????????				?????*/

	uint8_t command02[ 8 ] = { 0x55,0x03,0x01 ,0x01 ,0x00 ,0x00 ,0x00 ,0xbb };	/*?????????					?????*/
	uint8_t command03[ 8 ] = { 0x55,0x03,0x01 ,0x02 ,0x00 ,0x00 ,0x00 ,0xbb };	/*??????????					?????*/

	uint8_t command04[ 8 ] = { 0x55,0x0A,0x01 ,0x01 ,0x00 ,0x00 ,0x00 ,0xbb };	/*???????????????			?????*/
	uint8_t command05[ 8 ] = { 0x55,0x0A,0x01 ,0x02 ,0x00 ,0x00 ,0x00 ,0xbb };	/*????????????????			?????*/

	uint8_t command06[ 8 ] = { 0x55,0x04,0x01 ,0x00 ,0x00 ,0x00 ,0x00 ,0xbb };	/*LED???????????????			???��??3??4??5*/
	uint8_t command07[ 8 ] = { 0x55,0x04,0x02 ,0x00 ,0x00 ,0x00 ,0x00 ,0xbb };	/*LED???????????????			???��??3??4??5*/
	uint8_t command08[ 8 ] = { 0x55,0x04,0x03 ,0x00 ,0x00 ,0x00 ,0x00 ,0xbb };	/*LED???????????				?????*/
	uint8_t command09[ 8 ] = { 0x55,0x04,0x03 ,0x01 ,0x00 ,0x00 ,0x00 ,0xbb };	/*LED???????????				?????*/
	uint8_t command10[ 8 ] = { 0x55,0x04,0x03 ,0x02 ,0x00 ,0x00 ,0x00 ,0xbb };	/*LED????????????				?????*/
	uint8_t command11[ 8 ] = { 0x55,0x04,0x04 ,0x00 ,0x00 ,0x00 ,0x00 ,0xbb };	/*LED???????????				???��??4??5*/

	uint8_t command12[ 8 ] = { 0x55,0x0b,0x10 ,0x00 ,0x00 ,0x00 ,0x00 ,0xbb };	/*TFT?????????????????		???��??4*/
	uint8_t command13[ 8 ] = { 0x55,0x0b,0x10 ,0x01 ,0x00 ,0x00 ,0x00 ,0xbb };	/*TFT??????????????			?????*/
	uint8_t command14[ 8 ] = { 0x55,0x0b,0x10 ,0x02 ,0x00 ,0x00 ,0x00 ,0xbb };	/*TFT????????��?????			?????*/
	uint8_t command15[ 8 ] = { 0x55,0x0b,0x10 ,0x03 ,0x00 ,0x00 ,0x00 ,0xbb };	/*TFT???????????????		?????*/
	uint8_t command16[ 8 ] = { 0x55,0x0b,0x20 ,0x00 ,0x00 ,0x00 ,0x00 ,0xbb };	/*TFT??????????��????			???��??3??4??5*/
	uint8_t command17[ 8 ] = { 0x55,0x0b,0x21 ,0x00 ,0x00 ,0x00 ,0x00 ,0xbb };	/*TFT??????????��????			???��??3??4??5*/
	uint8_t command18[ 8 ] = { 0x55,0x0b,0x30 ,0x00 ,0x00 ,0x00 ,0x00 ,0xbb };	/*TFT??????????				?????*/
	uint8_t command19[ 8 ] = { 0x55,0x0b,0x30 ,0x01 ,0x00 ,0x00 ,0x00 ,0xbb };	/*TFT?????????				?????*/
	uint8_t command20[ 8 ] = { 0x55,0x0b,0x30 ,0x02 ,0x00 ,0x00 ,0x00 ,0xbb };	/*TFT???????????				?????*/
	uint8_t command21[ 8 ] = { 0x55,0x0b,0x40 ,0x02 ,0x00 ,0x00 ,0x00 ,0xbb };	/*TFT???HEX????????			???��??3??4??5*/
	uint8_t command22[ 8 ] = { 0x55,0x0b,0x50 ,0x00 ,0x00 ,0x00 ,0x00 ,0xbb };	/*TFT???????????				???��??4??5*/

	uint8_t command23[ 8 ] = { 0x55,0xff,0x01 ,0x00 ,0x00 ,0x00 ,0x00 ,0xbb };	/*OpenMV???????????			?????*/
	uint8_t command24[ 8 ] = { 0x55,0xff,0x02 ,0x00 ,0x00 ,0x00 ,0x00 ,0xbb };	/*OpenMV????????????			?????*/
	uint8_t command25[ 8 ] = { 0x55,0xff,0x03 ,0x00 ,0x00 ,0x00 ,0x00 ,0xbb };	/*OpenMV????????????			?????*/
	uint8_t command26[ 8 ] = { 0x55,0xff,0x04 ,0x00 ,0x00 ,0x00 ,0x00 ,0xbb };	/*OpenMV???????????			?????*/

	uint8_t command27[ 8 ] = { 0x55,0x0D,0x01 ,0x01 ,0x00 ,0x00 ,0x00 ,0xbb };	/*??��????? ??1 ????????		?????		?????��??3*/
	uint8_t command28[ 8 ] = { 0x55,0x0D,0x01 ,0x02 ,0x00 ,0x00 ,0x00 ,0xbb };	/*??��????? ??2 ????????		?????		?????��??3*/
	uint8_t command29[ 8 ] = { 0x55,0x0D,0x01 ,0x03 ,0x00 ,0x00 ,0x00 ,0xbb };	/*??��????? ??3 ????????		?????		?????��??3*/
	uint8_t command30[ 8 ] = { 0x55,0x0D,0x01 ,0x04 ,0x00 ,0x00 ,0x00 ,0xbb };	/*??��????? ??4 ????????		?????		?????��??3*/
	uint8_t command31[ 8 ] = { 0x55,0x0D,0x01 ,0x05 ,0x00 ,0x00 ,0x00 ,0xbb };	/*??��????? ??5 ????????		?????		?????��??3*/
	uint8_t command32[ 8 ] = { 0x55,0x0D,0x01 ,0x06 ,0x00 ,0x00 ,0x00 ,0xbb };	/*??��????? ??6 ????????		?????		?????��??3*/
	uint8_t command33[ 8 ] = { 0x55,0x06,0x20 ,0x01 ,0x00 ,0x00 ,0x21 ,0xbb };

private:

};

extern _Command Command;



#endif

