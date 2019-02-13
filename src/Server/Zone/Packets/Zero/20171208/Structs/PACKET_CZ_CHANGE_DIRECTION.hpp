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

#ifndef HORIZON_ZONE_ZERO_20171208_PACKET_CZ_CHANGE_DIRECTION_HPP
#define HORIZON_ZONE_ZERO_20171208_PACKET_CZ_CHANGE_DIRECTION_HPP

#include "Server/Zone/Packets/Zero/20171208/PacketsZero20171208.hpp"
#include "Server/Zone/Packets/Zero/20171206/Structs/PACKET_CZ_CHANGE_DIRECTION.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Zero20171208
{
struct PACKET_CZ_CHANGE_DIRECTION : public Horizon::Zone::Zero20171206::PACKET_CZ_CHANGE_DIRECTION
{
	PACKET_CZ_CHANGE_DIRECTION(uint16_t packet_id = CZ_CHANGE_DIRECTION) : Horizon::Zone::Zero20171206::PACKET_CZ_CHANGE_DIRECTION(packet_id) { }

	/* Size: 5 bytes */
};
}
}
}

#endif /* HORIZON_ZONE_ZERO_20171208_PACKET_CZ_CHANGE_DIRECTION_HPP */
