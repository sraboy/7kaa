/*
 * Seven Kingdoms: Ancient Adversaries
 *
 * Copyright 2011 Jesse Allen
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// Filename    : network_base.h
// Description : The shared implementation for Network

#ifndef _NETWORK_BASE_H
#define _NETWORK_BASE_H

#include <stdint.h>

struct inet_address
{
        uint32_t host;
        uint16_t port;
};

struct net_msg
{
	uint8_t *data;
	uint32_t len;
	struct inet_address address;
};

#endif // _NETWORK_BASE_H