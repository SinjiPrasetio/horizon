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

#ifndef HORIZON_ZONE_RAGEXE_20180605_PACKET_ZC_UPDATE_MISSION_HUNT_EX_HPP
#define HORIZON_ZONE_RAGEXE_20180605_PACKET_ZC_UPDATE_MISSION_HUNT_EX_HPP

#include "Server/Zone/Packets/Ragexe/20180605/PacketsRagexe20180605.hpp"
#include "Server/Zone/Packets/Ragexe/Structs/PACKET_ZC_UPDATE_MISSION_HUNT_EX.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Ragexe20180605
{
struct PACKET_ZC_UPDATE_MISSION_HUNT_EX : public Horizon::Zone::Ragexe::PACKET_ZC_UPDATE_MISSION_HUNT_EX
{
	PACKET_ZC_UPDATE_MISSION_HUNT_EX(uint16_t packet_id = ZC_UPDATE_MISSION_HUNT_EX) : Horizon::Zone::Ragexe::PACKET_ZC_UPDATE_MISSION_HUNT_EX(packet_id) { }

	/* Size: -1 bytes */
};
}
}
}

#endif /* HORIZON_ZONE_RAGEXE_20180605_PACKET_ZC_UPDATE_MISSION_HUNT_EX_HPP */
