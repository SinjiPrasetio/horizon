/***************************************************
 *       _   _            _                        *
 *      | | | |          (_)                       *
 *      | |_| | ___  _ __ _ _______  _ __          *
 *      |  _  |/ _ \| '__| |_  / _ \| '_  \        *
 *      | | | | (_) | |  | |/ / (_) | | | |        *
 *      \_| |_/\___/|_|  |_/___\___/|_| |_|        *
 ***************************************************
 * This file is part of Horizon (c).
 * Copyright (c) 2019 Horizon Dev Team.
 *
 * Base Author - Sagun Khosla. (sagunxp@gmail.com)
 *
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 **************************************************/

#ifndef HORIZON_ZONE_RAGEXE_20180718_PACKET_CZ_ITEM_THROW_HPP
#define HORIZON_ZONE_RAGEXE_20180718_PACKET_CZ_ITEM_THROW_HPP

#include "Server/Zone/Packets/Ragexe/20180718/PacketsRagexe20180718.hpp"
#include "Server/Zone/Packets/Ragexe/20180704/Structs/PACKET_CZ_ITEM_THROW.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Ragexe20180718
{
struct PACKET_CZ_ITEM_THROW : public Horizon::Zone::Ragexe20180704::PACKET_CZ_ITEM_THROW
{
	PACKET_CZ_ITEM_THROW(uint16_t packet_id = CZ_ITEM_THROW) : Horizon::Zone::Ragexe20180704::PACKET_CZ_ITEM_THROW(packet_id) { }

	/* Size: 6 bytes */
};
}
}
}

#endif /* HORIZON_ZONE_RAGEXE_20180718_PACKET_CZ_ITEM_THROW_HPP */