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

#ifndef HORIZON_ZONE_RE_20180221_PACKET_CZ_ACK_STORE_PASSWORD_HPP
#define HORIZON_ZONE_RE_20180221_PACKET_CZ_ACK_STORE_PASSWORD_HPP

#include "Server/Zone/Packets/RE/20180221/PacketsRE20180221.hpp"
#include "Server/Zone/Packets/RE/20180213/Structs/PACKET_CZ_ACK_STORE_PASSWORD.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace RE20180221
{
struct PACKET_CZ_ACK_STORE_PASSWORD : public Horizon::Zone::RE20180213::PACKET_CZ_ACK_STORE_PASSWORD
{
	PACKET_CZ_ACK_STORE_PASSWORD(uint16_t packet_id = CZ_ACK_STORE_PASSWORD) : Horizon::Zone::RE20180213::PACKET_CZ_ACK_STORE_PASSWORD(packet_id) { }

	/* Size: 36 bytes */
};
}
}
}

#endif /* HORIZON_ZONE_RE_20180221_PACKET_CZ_ACK_STORE_PASSWORD_HPP */
