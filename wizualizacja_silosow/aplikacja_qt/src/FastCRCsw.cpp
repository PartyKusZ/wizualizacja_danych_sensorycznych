/* FastCRC library code is placed under the MIT license
 * Copyright (c) 2014 - 2021 Frank Bösing
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

//
// Thanks to:
// - Catalogue of parametrised CRC algorithms, CRC RevEng
// http://reveng.sourceforge.net/crc-catalogue/
//
// - Danjel McGougan (CRC-Table-Generator)
//

#if defined(ARDUINO)
#include <Arduino.h>
#endif

#if !defined(KINETISK)

#if !defined(ARDUINO)
#define PROGMEM
#define pgm_read_byte(addr) (*(const unsigned char *)(addr))
#define pgm_read_word(addr) ({ \
	typeof(addr) _addr = (addr); \
	*(const unsigned short *)(_addr); \
})
#define pgm_read_dword(addr) ({ \
	typeof(addr) _addr = (addr); \
	*(const unsigned long *)(_addr); \
})
#endif



#include "FastCRC.hpp"
#include "FastCRC_tables.hpp"
#include <cstdlib>


static inline
uint32_t REV16( uint32_t value)
{
	return (value >> 8) | ((value & 0xff) << 8);
}

static inline
uint32_t REV32( uint32_t value)
{
	value = (value >> 16) | ((value & 0xffff) << 16);
	return ((value >> 8) & 0xff00ff) | ((value & 0xff00ff) << 8);
}



// ================= 7-BIT CRC ===================



// ================= 8-BIT CRC ===================

/** Constructor
 */
FastCRC8::FastCRC8(){}

/** SMBUS CRC
 * aka CRC-8
 * @param data Pointer to Data
 * @param datalen Length of Data
 * @return CRC value
 */
uint8_t FastCRC8::smbus_upd(const uint8_t *data, size_t datalen)
{
	uint8_t crc = seed;
	if (datalen) do {
		crc = pgm_read_byte(&crc_table_smbus[crc ^ *data]);
		data++;
	} while (--datalen);
	seed = crc;
	return crc;
}

uint8_t FastCRC8::smbus(const uint8_t *data, const size_t datalen)
{
  // poly=0x07 init=0x00 refin=false refout=false xorout=0x00 check=0xf4
  seed = 0x00;
  return smbus_upd(data, datalen);
}

/** MAXIM 8-Bit CRC
 * equivalent to _crc_ibutton_update() in crc16.h from avr_libc
 * @param data Pointer to Data
 * @param datalen Length of Data
 * @return CRC value
 */
uint8_t FastCRC8::maxim_upd(const uint8_t *data, size_t datalen)
{
	uint8_t crc = seed;
	if (datalen) do {
		crc = pgm_read_byte(&crc_table_maxim[crc ^ *data]);
		data++;
	} while (--datalen);
	seed = crc;
	return crc;
}
uint8_t FastCRC8::maxim(const uint8_t *data, const size_t datalen)
{
  // poly=0x31 init=0x00 refin=true refout=true xorout=0x00  check=0xa1
  seed = 0x00;
  return maxim_upd(data, datalen);
}



#endif // #if !defined(KINETISK)
