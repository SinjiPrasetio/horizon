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

#ifndef HORIZON_ZONE_ZERO_20171220_PACKET_CZ_REQNAME_BYGID_HPP
#define HORIZON_ZONE_ZERO_20171220_PACKET_CZ_REQNAME_BYGID_HPP

#include "Server/Zone/Packets/Zero/20171220/PacketsZero20171220.hpp"
#include "Server/Zone/Packets/Zero/20171214/Structs/PACKET_CZ_REQNAME_BYGID.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Zero20171220
{
struct PACKET_CZ_REQNAME_BYGID : public Horizon::Zone::Zero20171214::PACKET_CZ_REQNAME_BYGID
{
	PACKET_CZ_REQNAME_BYGID(uint16_t packet_id = CZ_REQNAME_BYGID) : Horizon::Zone::Zero20171214::PACKET_CZ_REQNAME_BYGID(packet_id) { }

	/* Size: 6 bytes */
};
}
}
}

#endif /* HORIZON_ZONE_ZERO_20171220_PACKET_CZ_REQNAME_BYGID_HPP */
