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

#ifndef HORIZON_ZONE_RAGEXE_20170228_PACKET_CZ_REQUEST_MOVE2_HPP
#define HORIZON_ZONE_RAGEXE_20170228_PACKET_CZ_REQUEST_MOVE2_HPP

#include "Server/Zone/Packets/Ragexe/20170228/PacketsRagexe20170228.hpp"
#include "Server/Zone/Packets/Ragexe/20170125/Structs/PACKET_CZ_REQUEST_MOVE2.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Ragexe20170228
{
struct PACKET_CZ_REQUEST_MOVE2 : public Horizon::Zone::Ragexe20170125::PACKET_CZ_REQUEST_MOVE2
{
	PACKET_CZ_REQUEST_MOVE2(uint16_t packet_id = CZ_REQUEST_MOVE2) : Horizon::Zone::Ragexe20170125::PACKET_CZ_REQUEST_MOVE2(packet_id) { }

	/* Size: 2 bytes */
};
}
}
}

#endif /* HORIZON_ZONE_RAGEXE_20170228_PACKET_CZ_REQUEST_MOVE2_HPP */
