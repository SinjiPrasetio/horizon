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

#ifndef HORIZON_ZONE_RAGEXE_20181024_PACKET_CZ_REQUEST_TIME_HPP
#define HORIZON_ZONE_RAGEXE_20181024_PACKET_CZ_REQUEST_TIME_HPP

#include "Server/Zone/Packets/Ragexe/20181024/PacketsRagexe20181024.hpp"
#include "Server/Zone/Packets/Ragexe/20181017/Structs/PACKET_CZ_REQUEST_TIME.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Ragexe20181024
{
struct PACKET_CZ_REQUEST_TIME : public Horizon::Zone::Ragexe20181017::PACKET_CZ_REQUEST_TIME
{
	PACKET_CZ_REQUEST_TIME(uint16_t packet_id = CZ_REQUEST_TIME) : Horizon::Zone::Ragexe20181017::PACKET_CZ_REQUEST_TIME(packet_id) { }

	/* Size: 6 bytes */
};
}
}
}

#endif /* HORIZON_ZONE_RAGEXE_20181024_PACKET_CZ_REQUEST_TIME_HPP */
