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

#ifndef HORIZON_ZONE_RAGEXE_20170705_PACKET_CZ_CHANGE_DIRECTION2_HPP
#define HORIZON_ZONE_RAGEXE_20170705_PACKET_CZ_CHANGE_DIRECTION2_HPP

#include "Server/Zone/Packets/Ragexe/20170705/PacketsRagexe20170705.hpp"
#include "Server/Zone/Packets/Ragexe/20170329/Structs/PACKET_CZ_CHANGE_DIRECTION2.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Ragexe20170705
{
struct PACKET_CZ_CHANGE_DIRECTION2 : public Horizon::Zone::Ragexe20170329::PACKET_CZ_CHANGE_DIRECTION2
{
	PACKET_CZ_CHANGE_DIRECTION2(uint16_t packet_id = CZ_CHANGE_DIRECTION2) : Horizon::Zone::Ragexe20170329::PACKET_CZ_CHANGE_DIRECTION2(packet_id) { }

	/* Size: 2 bytes */
};
}
}
}

#endif /* HORIZON_ZONE_RAGEXE_20170705_PACKET_CZ_CHANGE_DIRECTION2_HPP */
