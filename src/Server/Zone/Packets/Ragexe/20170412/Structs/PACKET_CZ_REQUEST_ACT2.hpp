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

#ifndef HORIZON_ZONE_RAGEXE_20170412_PACKET_CZ_REQUEST_ACT2_HPP
#define HORIZON_ZONE_RAGEXE_20170412_PACKET_CZ_REQUEST_ACT2_HPP

#include "Server/Zone/Packets/Ragexe/20170412/PacketsRagexe20170412.hpp"
#include "Server/Zone/Packets/Ragexe/20170315/Structs/PACKET_CZ_REQUEST_ACT2.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Ragexe20170412
{
struct PACKET_CZ_REQUEST_ACT2 : public Horizon::Zone::Ragexe20170315::PACKET_CZ_REQUEST_ACT2
{
	PACKET_CZ_REQUEST_ACT2(uint16_t packet_id = CZ_REQUEST_ACT2) : Horizon::Zone::Ragexe20170315::PACKET_CZ_REQUEST_ACT2(packet_id) { }

	/* Size: 2 bytes */
};
}
}
}

#endif /* HORIZON_ZONE_RAGEXE_20170412_PACKET_CZ_REQUEST_ACT2_HPP */
