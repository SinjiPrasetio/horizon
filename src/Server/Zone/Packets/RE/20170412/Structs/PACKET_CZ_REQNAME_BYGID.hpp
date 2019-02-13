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

#ifndef HORIZON_ZONE_RE_20170412_PACKET_CZ_REQNAME_BYGID_HPP
#define HORIZON_ZONE_RE_20170412_PACKET_CZ_REQNAME_BYGID_HPP

#include "Server/Zone/Packets/RE/20170412/PacketsRE20170412.hpp"
#include "Server/Zone/Packets/RE/20170405/Structs/PACKET_CZ_REQNAME_BYGID.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace RE20170412
{
struct PACKET_CZ_REQNAME_BYGID : public Horizon::Zone::RE20170405::PACKET_CZ_REQNAME_BYGID
{
	PACKET_CZ_REQNAME_BYGID(uint16_t packet_id = CZ_REQNAME_BYGID) : Horizon::Zone::RE20170405::PACKET_CZ_REQNAME_BYGID(packet_id) { }

	/* Size: 6 bytes */
};
}
}
}

#endif /* HORIZON_ZONE_RE_20170412_PACKET_CZ_REQNAME_BYGID_HPP */
