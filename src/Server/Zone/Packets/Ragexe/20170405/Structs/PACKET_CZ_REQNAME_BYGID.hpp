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

#ifndef HORIZON_ZONE_RAGEXE_20170405_PACKET_CZ_REQNAME_BYGID_HPP
#define HORIZON_ZONE_RAGEXE_20170405_PACKET_CZ_REQNAME_BYGID_HPP

#include "Server/Zone/Packets/Ragexe/20170405/PacketsRagexe20170405.hpp"
#include "Server/Zone/Packets/Ragexe/20170329/Structs/PACKET_CZ_REQNAME_BYGID.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Ragexe20170405
{
struct PACKET_CZ_REQNAME_BYGID : public Horizon::Zone::Ragexe20170329::PACKET_CZ_REQNAME_BYGID
{
	PACKET_CZ_REQNAME_BYGID(uint16_t packet_id = CZ_REQNAME_BYGID) : Horizon::Zone::Ragexe20170329::PACKET_CZ_REQNAME_BYGID(packet_id) { }

	/* Size: 6 bytes */
};
}
}
}

#endif /* HORIZON_ZONE_RAGEXE_20170405_PACKET_CZ_REQNAME_BYGID_HPP */
