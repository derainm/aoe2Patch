/*
 * mgxfix v0.4 - fixes invalid header length in aoe2 recorded games
 *
 * Copyright (c) 2009-2010, biegleux <biegleux@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses>.
 */

#define VERSION		"0.4"
#define MAX_HEADER_LEN	2097152	// 2MB
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MGX_EXT "mgx"
void recordFileName();