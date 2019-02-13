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

#ifndef HORIZON_ZONE_RAGEXE_20171122_PACKET_CZ_ENTER2_HPP
#define HORIZON_ZONE_RAGEXE_20171122_PACKET_CZ_ENTER2_HPP

#include "Server/Zone/Packets/Ragexe/20171122/PacketsRagexe20171122.hpp"
#include "Server/Zone/Packets/Ragexe/20171101/Structs/PACKET_CZ_ENTER2.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Ragexe20171122
{
struct PACKET_CZ_ENTER2 : public Horizon::Zone::Ragexe20171101::PACKET_CZ_ENTER2
{
	PACKET_CZ_ENTER2(uint16_t packet_id = CZ_ENTER2) : Horizon::Zone::Ragexe20171101::PACKET_CZ_ENTER2(packet_id) { }

	/* Size: 2 bytes */
};
}
}
}

#endif /* HORIZON_ZONE_RAGEXE_20171122_PACKET_CZ_ENTER2_HPP */
