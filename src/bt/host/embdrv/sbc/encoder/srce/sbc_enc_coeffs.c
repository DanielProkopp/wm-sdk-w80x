/******************************************************************************
 *
 *  Copyright (C) 1999-2012 Broadcom Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at:
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 ******************************************************************************/

/******************************************************************************
 *
 *  This file contains the Windowing coeffs for synthesis filter
 *
 ******************************************************************************/

#include "sbc_encoder.h"

#if (SBC_ARM_ASM_OPT==FALSE && SBC_IPAQ_OPT==FALSE)
#if (SBC_IS_64_MULT_IN_WINDOW_ACCU ==  FALSE)
/*Window coeff for 4 sub band case*/
const SINT16 gas32CoeffFor4SBs[] =
{
    (SINT16)((SINT32)0x00000000 >> 16), (SINT16)0x00000000,
    (SINT16)((SINT32)0x001194E6 >> 16), (SINT16)0x001194E6,
    (SINT16)((SINT32)0x0030E2D3 >> 16), (SINT16)0x0030E2D3,
    (SINT16)((SINT32)0x00599403 >> 16), (SINT16)0x00599403,
    (SINT16)((SINT32)0x007DBCC8 >> 16), (SINT16)0x007DBCC8,
    (SINT16)((SINT32)0x007F88E4 >> 16), (SINT16)0x007F88E4,
    (SINT16)((SINT32)0x003D239B >> 16), (SINT16)0x003D239B,
    (SINT16)((SINT32)0xFF9BB9D5 >> 16), (SINT16)0xFF9BB9D5,

    (SINT16)((SINT32)0x01659F45 >> 16), (SINT16)0x01659F45,
    (SINT16)((SINT32)0x029DBAA3 >> 16), (SINT16)0x029DBAA3,
    (SINT16)((SINT32)0x03B23341 >> 16), (SINT16)0x03B23341,
    (SINT16)((SINT32)0x041EEE40 >> 16), (SINT16)0x041EEE40,
    (SINT16)((SINT32)0x034FEE2C >> 16), (SINT16)0x034FEE2C,
    (SINT16)((SINT32)0x00C8F2BC >> 16), (SINT16)0x00C8F2BC,
    (SINT16)((SINT32)0xFC4F91D4 >> 16), (SINT16)0xFC4F91D4,
    (SINT16)((SINT32)0xF60FAF37 >> 16), (SINT16)0xF60FAF37,

    (SINT16)((SINT32)0x115B1ED2 >> 16), (SINT16)0x115B1ED2,
    (SINT16)((SINT32)0x18F55C90 >> 16), (SINT16)0x18F55C90,
    (SINT16)((SINT32)0x1F91CA46 >> 16), (SINT16)0x1F91CA46,
    (SINT16)((SINT32)0x2412F251 >> 16), (SINT16)0x2412F251,
    (SINT16)((SINT32)0x25AC1FF2 >> 16), (SINT16)0x25AC1FF2,
    (SINT16)((SINT32)0x2412F251 >> 16), (SINT16)0x2412F251,
    (SINT16)((SINT32)0x1F91CA46 >> 16), (SINT16)0x1F91CA46,
    (SINT16)((SINT32)0x18F55C90 >> 16), (SINT16)0x18F55C90,

    (SINT16)((SINT32)0xEEA4E12E >> 16), (SINT16)0xEEA4E12E,
    (SINT16)((SINT32)0xF60FAF37 >> 16), (SINT16)0xF60FAF37,
    (SINT16)((SINT32)0xFC4F91D4 >> 16), (SINT16)0xFC4F91D4,
    (SINT16)((SINT32)0x00C8F2BC >> 16), (SINT16)0x00C8F2BC,
    (SINT16)((SINT32)0x034FEE2C >> 16), (SINT16)0x034FEE2C,
    (SINT16)((SINT32)0x041EEE40 >> 16), (SINT16)0x041EEE40,
    (SINT16)((SINT32)0x03B23341 >> 16), (SINT16)0x03B23341,
    (SINT16)((SINT32)0x029DBAA3 >> 16), (SINT16)0x029DBAA3,

    (SINT16)((SINT32)0xFE9A60BB >> 16), (SINT16)0xFE9A60BB,
    (SINT16)((SINT32)0xFF9BB9D5 >> 16), (SINT16)0xFF9BB9D5,
    (SINT16)((SINT32)0x003D239B >> 16), (SINT16)0x003D239B,
    (SINT16)((SINT32)0x007F88E4 >> 16), (SINT16)0x007F88E4,
    (SINT16)((SINT32)0x007DBCC8 >> 16), (SINT16)0x007DBCC8,
    (SINT16)((SINT32)0x00599403 >> 16), (SINT16)0x00599403,
    (SINT16)((SINT32)0x0030E2D3 >> 16), (SINT16)0x0030E2D3,
    (SINT16)((SINT32)0x001194E6 >> 16), (SINT16)0x001194E6
};

/*Window coeff for 8 sub band case*/
const SINT16 gas32CoeffFor8SBs[] =
{
    (SINT16)((SINT32)0x00000000 >> 16), (SINT16)0x00000000,
    (SINT16)((SINT32)0x00052173 >> 16), (SINT16)0x00052173,
    (SINT16)((SINT32)0x000B3F71 >> 16), (SINT16)0x000B3F71,
    (SINT16)((SINT32)0x00122C7D >> 16), (SINT16)0x00122C7D,
    (SINT16)((SINT32)0x001AFF89 >> 16), (SINT16)0x001AFF89,
    (SINT16)((SINT32)0x00255A62 >> 16), (SINT16)0x00255A62,
    (SINT16)((SINT32)0x003060F4 >> 16), (SINT16)0x003060F4,
    (SINT16)((SINT32)0x003A72E7 >> 16), (SINT16)0x003A72E7,

    (SINT16)((SINT32)0x0041EC6A >> 16), (SINT16)0x0041EC6A,         /* 8 */
    (SINT16)((SINT32)0x0044EF48 >> 16), (SINT16)0x0044EF48,
    (SINT16)((SINT32)0x00415B75 >> 16), (SINT16)0x00415B75,
    (SINT16)((SINT32)0x0034F8B6 >> 16), (SINT16)0x0034F8B6,
    (SINT16)((SINT32)0x001D8FD2 >> 16), (SINT16)0x001D8FD2,
    (SINT16)((SINT32)0xFFFA2413 >> 16), (SINT16)0xFFFA2413,
    (SINT16)((SINT32)0xFFC9F10E >> 16), (SINT16)0xFFC9F10E,
    (SINT16)((SINT32)0xFF8D6793 >> 16), (SINT16)0xFF8D6793,

    (SINT16)((SINT32)0x00B97348 >> 16), (SINT16)0x00B97348,         /* 16 */
    (SINT16)((SINT32)0x01071B96 >> 16), (SINT16)0x01071B96,
    (SINT16)((SINT32)0x0156B3CA >> 16), (SINT16)0x0156B3CA,
    (SINT16)((SINT32)0x01A1B38B >> 16), (SINT16)0x01A1B38B,
    (SINT16)((SINT32)0x01E0224C >> 16), (SINT16)0x01E0224C,
    (SINT16)((SINT32)0x0209291F >> 16), (SINT16)0x0209291F,
    (SINT16)((SINT32)0x02138653 >> 16), (SINT16)0x02138653,
    (SINT16)((SINT32)0x01F5F424 >> 16), (SINT16)0x01F5F424,

    (SINT16)((SINT32)0x01A7ECEF >> 16), (SINT16)0x01A7ECEF,         /* 24 */
    (SINT16)((SINT32)0x01223EBA >> 16), (SINT16)0x01223EBA,
    (SINT16)((SINT32)0x005FD0FF >> 16), (SINT16)0x005FD0FF,
    (SINT16)((SINT32)0xFF5EEB73 >> 16), (SINT16)0xFF5EEB73,
    (SINT16)((SINT32)0xFE20435D >> 16), (SINT16)0xFE20435D,
    (SINT16)((SINT32)0xFCA86E7E >> 16), (SINT16)0xFCA86E7E,
    (SINT16)((SINT32)0xFAFF95FC >> 16), (SINT16)0xFAFF95FC,
    (SINT16)((SINT32)0xF9312891 >> 16), (SINT16)0xF9312891,

    (SINT16)((SINT32)0x08B4307A >> 16), (SINT16)0x08B4307A,         /* 32 */
    (SINT16)((SINT32)0x0A9F3E9A >> 16), (SINT16)0x0A9F3E9A,
    (SINT16)((SINT32)0x0C7D59B6 >> 16), (SINT16)0x0C7D59B6,
    (SINT16)((SINT32)0x0E3BB16F >> 16), (SINT16)0x0E3BB16F,
    (SINT16)((SINT32)0x0FC721F9 >> 16), (SINT16)0x0FC721F9,
    (SINT16)((SINT32)0x110ECEF0 >> 16), (SINT16)0x110ECEF0,
    (SINT16)((SINT32)0x120435FA >> 16), (SINT16)0x120435FA,
    (SINT16)((SINT32)0x129C226F >> 16), (SINT16)0x129C226F,

    (SINT16)((SINT32)0x12CF6C75 >> 16), (SINT16)0x12CF6C75,         /* 40 */
    (SINT16)((SINT32)0x129C226F >> 16), (SINT16)0x129C226F,
    (SINT16)((SINT32)0x120435FA >> 16), (SINT16)0x120435FA,
    (SINT16)((SINT32)0x110ECEF0 >> 16), (SINT16)0x110ECEF0,
    (SINT16)((SINT32)0x0FC721F9 >> 16), (SINT16)0x0FC721F9,
    (SINT16)((SINT32)0x0E3BB16F >> 16), (SINT16)0x0E3BB16F,
    (SINT16)((SINT32)0x0C7D59B6 >> 16), (SINT16)0x0C7D59B6,
    (SINT16)((SINT32)0x0A9F3E9A >> 16), (SINT16)0x0A9F3E9A,

    (SINT16)((SINT32)0xF74BCF86 >> 16), (SINT16)0xF74BCF86,         /* 48 */
    (SINT16)((SINT32)0xF9312891 >> 16), (SINT16)0xF9312891,
    (SINT16)((SINT32)0xFAFF95FC >> 16), (SINT16)0xFAFF95FC,
    (SINT16)((SINT32)0xFCA86E7E >> 16), (SINT16)0xFCA86E7E,
    (SINT16)((SINT32)0xFE20435D >> 16), (SINT16)0xFE20435D,
    (SINT16)((SINT32)0xFF5EEB73 >> 16), (SINT16)0xFF5EEB73,
    (SINT16)((SINT32)0x005FD0FF >> 16), (SINT16)0x005FD0FF,
    (SINT16)((SINT32)0x01223EBA >> 16), (SINT16)0x01223EBA,

    (SINT16)((SINT32)0x01A7ECEF >> 16), (SINT16)0x01A7ECEF,         /* 56 */
    (SINT16)((SINT32)0x01F5F424 >> 16), (SINT16)0x01F5F424,
    (SINT16)((SINT32)0x02138653 >> 16), (SINT16)0x02138653,
    (SINT16)((SINT32)0x0209291F >> 16), (SINT16)0x0209291F,
    (SINT16)((SINT32)0x01E0224C >> 16), (SINT16)0x01E0224C,
    (SINT16)((SINT32)0x01A1B38B >> 16), (SINT16)0x01A1B38B,
    (SINT16)((SINT32)0x0156B3CA >> 16), (SINT16)0x0156B3CA,
    (SINT16)((SINT32)0x01071B96 >> 16), (SINT16)0x01071B96,

    (SINT16)((SINT32)0xFF468CB8 >> 16), (SINT16)0xFF468CB8,         /* 64 */
    (SINT16)((SINT32)0xFF8D6793 >> 16), (SINT16)0xFF8D6793,
    (SINT16)((SINT32)0xFFC9F10E >> 16), (SINT16)0xFFC9F10E,
    (SINT16)((SINT32)0xFFFA2413 >> 16), (SINT16)0xFFFA2413,
    (SINT16)((SINT32)0x001D8FD2 >> 16), (SINT16)0x001D8FD2,
    (SINT16)((SINT32)0x0034F8B6 >> 16), (SINT16)0x0034F8B6,
    (SINT16)((SINT32)0x00415B75 >> 16), (SINT16)0x00415B75,
    (SINT16)((SINT32)0x0044EF48 >> 16), (SINT16)0x0044EF48,

    (SINT16)((SINT32)0x0041EC6A >> 16), (SINT16)0x0041EC6A,         /* 72 */
    (SINT16)((SINT32)0x003A72E7 >> 16), (SINT16)0x003A72E7,
    (SINT16)((SINT32)0x003060F4 >> 16), (SINT16)0x003060F4,
    (SINT16)((SINT32)0x00255A62 >> 16), (SINT16)0x00255A62,
    (SINT16)((SINT32)0x001AFF89 >> 16), (SINT16)0x001AFF89,
    (SINT16)((SINT32)0x00122C7D >> 16), (SINT16)0x00122C7D,
    (SINT16)((SINT32)0x000B3F71 >> 16), (SINT16)0x000B3F71,
    (SINT16)((SINT32)0x00052173 >> 16), (SINT16)0x00052173
};

#else

/*Window coeff for 4 sub band case*/
const SINT32 gas32CoeffFor4SBs[] =
{
    (SINT32)0x00000000,
    (SINT32)0x001194E6,
    (SINT32)0x0030E2D3,
    (SINT32)0x00599403,
    (SINT32)0x007DBCC8,
    (SINT32)0x007F88E4,
    (SINT32)0x003D239B,
    (SINT32)0xFF9BB9D5,

    (SINT32)0x01659F45,
    (SINT32)0x029DBAA3,
    (SINT32)0x03B23341,
    (SINT32)0x041EEE40,
    (SINT32)0x034FEE2C,
    (SINT32)0x00C8F2BC,
    (SINT32)0xFC4F91D4,
    (SINT32)0xF60FAF37,

    (SINT32)0x115B1ED2,
    (SINT32)0x18F55C90,
    (SINT32)0x1F91CA46,
    (SINT32)0x2412F251,
    (SINT32)0x25AC1FF2,
    (SINT32)0x2412F251,
    (SINT32)0x1F91CA46,
    (SINT32)0x18F55C90,

    (SINT32)0xEEA4E12E,
    (SINT32)0xF60FAF37,
    (SINT32)0xFC4F91D4,
    (SINT32)0x00C8F2BC,
    (SINT32)0x034FEE2C,
    (SINT32)0x041EEE40,
    (SINT32)0x03B23341,
    (SINT32)0x029DBAA3,

    (SINT32)0xFE9A60BB,
    (SINT32)0xFF9BB9D5,
    (SINT32)0x003D239B,
    (SINT32)0x007F88E4,
    (SINT32)0x007DBCC8,
    (SINT32)0x00599403,
    (SINT32)0x0030E2D3,
    (SINT32)0x001194E6
};

/*Window coeff for 8 sub band case*/
const SINT32 gas32CoeffFor8SBs[] =
{
    (SINT32)0x00000000,
    (SINT32)0x00052173,
    (SINT32)0x000B3F71,
    (SINT32)0x00122C7D,
    (SINT32)0x001AFF89,
    (SINT32)0x00255A62,
    (SINT32)0x003060F4,
    (SINT32)0x003A72E7,

    (SINT32)0x0041EC6A,   /* 8 */
    (SINT32)0x0044EF48,
    (SINT32)0x00415B75,
    (SINT32)0x0034F8B6,
    (SINT32)0x001D8FD2,
    (SINT32)0xFFFA2413,
    (SINT32)0xFFC9F10E,
    (SINT32)0xFF8D6793,

    (SINT32)0x00B97348,   /* 16 */
    (SINT32)0x01071B96,
    (SINT32)0x0156B3CA,
    (SINT32)0x01A1B38B,
    (SINT32)0x01E0224C,
    (SINT32)0x0209291F,
    (SINT32)0x02138653,
    (SINT32)0x01F5F424,

    (SINT32)0x01A7ECEF,   /* 24 */
    (SINT32)0x01223EBA,
    (SINT32)0x005FD0FF,
    (SINT32)0xFF5EEB73,
    (SINT32)0xFE20435D,
    (SINT32)0xFCA86E7E,
    (SINT32)0xFAFF95FC,
    (SINT32)0xF9312891,

    (SINT32)0x08B4307A,   /* 32 */
    (SINT32)0x0A9F3E9A,
    (SINT32)0x0C7D59B6,
    (SINT32)0x0E3BB16F,
    (SINT32)0x0FC721F9,
    (SINT32)0x110ECEF0,
    (SINT32)0x120435FA,
    (SINT32)0x129C226F,

    (SINT32)0x12CF6C75,   /* 40 */
    (SINT32)0x129C226F,
    (SINT32)0x120435FA,
    (SINT32)0x110ECEF0,
    (SINT32)0x0FC721F9,
    (SINT32)0x0E3BB16F,
    (SINT32)0x0C7D59B6,
    (SINT32)0x0A9F3E9A,

    (SINT32)0xF74BCF86,   /* 48 */
    (SINT32)0xF9312891,
    (SINT32)0xFAFF95FC,
    (SINT32)0xFCA86E7E,
    (SINT32)0xFE20435D,
    (SINT32)0xFF5EEB73,
    (SINT32)0x005FD0FF,
    (SINT32)0x01223EBA,

    (SINT32)0x01A7ECEF,   /* 56 */
    (SINT32)0x01F5F424,
    (SINT32)0x02138653,
    (SINT32)0x0209291F,
    (SINT32)0x01E0224C,
    (SINT32)0x01A1B38B,
    (SINT32)0x0156B3CA,
    (SINT32)0x01071B96,

    (SINT32)0xFF468CB8,   /* 64 */
    (SINT32)0xFF8D6793,
    (SINT32)0xFFC9F10E,
    (SINT32)0xFFFA2413,
    (SINT32)0x001D8FD2,
    (SINT32)0x0034F8B6,
    (SINT32)0x00415B75,
    (SINT32)0x0044EF48,

    (SINT32)0x0041EC6A,   /* 72 */
    (SINT32)0x003A72E7,
    (SINT32)0x003060F4,
    (SINT32)0x00255A62,
    (SINT32)0x001AFF89,
    (SINT32)0x00122C7D,
    (SINT32)0x000B3F71,
    (SINT32)0x00052173
};

#endif
#endif

