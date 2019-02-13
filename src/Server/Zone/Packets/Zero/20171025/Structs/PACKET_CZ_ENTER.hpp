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

#ifndef HORIZON_ZONE_ZERO_20171025_PACKET_CZ_ENTER_HPP
#define HORIZON_ZONE_ZERO_20171025_PACKET_CZ_ENTER_HPP

#include "Server/Zone/Packets/Zero/20171025/PacketsZero20171025.hpp"
#include "Server/Zone/Packets/Zero/20171024/Structs/PACKET_CZ_ENTER.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Zero20171025
{
struct PACKET_CZ_ENTER : public Horizon::Zone::Zero20171024::PACKET_CZ_ENTER
{
	PACKET_CZ_ENTER(uint16_t packet_id = CZ_ENTER) : Horizon::Zone::Zero20171024::PACKET_CZ_ENTER(packet_id) { }

	/* Size: 19 bytes */
};
}
}
}

#endif /* HORIZON_ZONE_ZERO_20171025_PACKET_CZ_ENTER_HPP */
