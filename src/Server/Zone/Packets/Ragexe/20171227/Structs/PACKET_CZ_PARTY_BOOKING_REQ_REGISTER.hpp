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

#ifndef HORIZON_ZONE_RAGEXE_20171227_PACKET_CZ_PARTY_BOOKING_REQ_REGISTER_HPP
#define HORIZON_ZONE_RAGEXE_20171227_PACKET_CZ_PARTY_BOOKING_REQ_REGISTER_HPP

#include "Server/Zone/Packets/Ragexe/20171227/PacketsRagexe20171227.hpp"
#include "Server/Zone/Packets/Ragexe/20171220/Structs/PACKET_CZ_PARTY_BOOKING_REQ_REGISTER.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Ragexe20171227
{
struct PACKET_CZ_PARTY_BOOKING_REQ_REGISTER : public Horizon::Zone::Ragexe20171220::PACKET_CZ_PARTY_BOOKING_REQ_REGISTER
{
	PACKET_CZ_PARTY_BOOKING_REQ_REGISTER(uint16_t packet_id = CZ_PARTY_BOOKING_REQ_REGISTER) : Horizon::Zone::Ragexe20171220::PACKET_CZ_PARTY_BOOKING_REQ_REGISTER(packet_id) { }

	virtual PacketBuffer serialize() override
	{
		return Ragexe20171220::PACKET_CZ_PARTY_BOOKING_REQ_REGISTER::serialize();
	}

	virtual void deserialize(PacketBuffer &buf) override
	{
		Ragexe20171220::PACKET_CZ_PARTY_BOOKING_REQ_REGISTER::deserialize(buf);
	}

	virtual Ragexe20171220::PACKET_CZ_PARTY_BOOKING_REQ_REGISTER & operator << (PacketBuffer &right) override
	{
		deserialize(right);
		return *this;
	}

	virtual PacketBuffer operator >> (PacketBuffer &right) override 
	{
		return right = serialize();
	}

	/* Size: 18 bytes */
	/* Changed from 2 in version 20171220 to 18 */
};
}
}
}

#endif /* HORIZON_ZONE_RAGEXE_20171227_PACKET_CZ_PARTY_BOOKING_REQ_REGISTER_HPP */