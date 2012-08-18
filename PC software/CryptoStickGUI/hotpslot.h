/*
* Author: Copyright (C) Andrzej Surowiec 2012
*
*
* This file is part of GPF Crypto Stick.
*
* GPF Crypto Stick is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* any later version.
*
* GPF Crypto Stick is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with GPF Crypto Stick. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef HOTPSLOT_H
#define HOTPSLOT_H

#include <inttypes.h>


class HOTPSlot
{
public:
    HOTPSlot();
    HOTPSlot(uint8_t slotNumber,uint8_t slotName[20],uint8_t secret[20],uint8_t counter[8],uint8_t config);
    uint8_t slotNumber;
    uint8_t slotName[15];
    uint8_t secret[20];
    uint8_t counter[8];
    uint8_t config;
    uint8_t tokenID[13];
    bool isProgrammed;



};

#endif // HOTPSLOT_H