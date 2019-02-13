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

#ifndef HORIZON_ZONE_RE_20170712_PACKET_CZ_PARTY_JOIN_REQ_HPP
#define HORIZON_ZONE_RE_20170712_PACKET_CZ_PARTY_JOIN_REQ_HPP

#include "Server/Zone/Packets/RE/20170712/PacketsRE20170712.hpp"
#include "Server/Zone/Packets/RE/20170705/Structs/PACKET_CZ_PARTY_JOIN_REQ.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace RE20170712
{
struct PACKET_CZ_PARTY_JOIN_REQ : public Horizon::Zone::RE20170705::PACKET_CZ_PARTY_JOIN_REQ
{
	PACKET_CZ_PARTY_JOIN_REQ(uint16_t packet_id = CZ_PARTY_JOIN_REQ) : Horizon::Zone::RE20170705::PACKET_CZ_PARTY_JOIN_REQ(packet_id) { }

	/* Size: 26 bytes */
};
}
}
}

#endif /* HORIZON_ZONE_RE_20170712_PACKET_CZ_PARTY_JOIN_REQ_HPP */
