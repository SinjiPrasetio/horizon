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
 * Under a proprietary license this file is not for use
 * or viewing without permission.
 **************************************************/

#ifndef HORIZON_ZONE_ZERO_20171206_PACKET_CZ_REQUEST_MOVE_HPP
#define HORIZON_ZONE_ZERO_20171206_PACKET_CZ_REQUEST_MOVE_HPP

#include "Server/Zone/Packets/Zero/20171206/PacketsZero20171206.hpp"
#include "Server/Zone/Packets/Zero/20171204/Structs/PACKET_CZ_REQUEST_MOVE.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Zero20171206
{
struct PACKET_CZ_REQUEST_MOVE : public Horizon::Zone::Zero20171204::PACKET_CZ_REQUEST_MOVE
{
	PACKET_CZ_REQUEST_MOVE(uint16_t packet_id = CZ_REQUEST_MOVE) : Horizon::Zone::Zero20171204::PACKET_CZ_REQUEST_MOVE(packet_id) { }

	/* Size: 5 bytes */
};
}
}
}

#endif /* HORIZON_ZONE_ZERO_20171206_PACKET_CZ_REQUEST_MOVE_HPP */
