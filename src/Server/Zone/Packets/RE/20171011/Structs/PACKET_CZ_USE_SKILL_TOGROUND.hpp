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

#ifndef HORIZON_ZONE_RE_20171011_PACKET_CZ_USE_SKILL_TOGROUND_HPP
#define HORIZON_ZONE_RE_20171011_PACKET_CZ_USE_SKILL_TOGROUND_HPP

#include "Server/Zone/Packets/RE/20171011/PacketsRE20171011.hpp"
#include "Server/Zone/Packets/RE/20171002/Structs/PACKET_CZ_USE_SKILL_TOGROUND.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace RE20171011
{
struct PACKET_CZ_USE_SKILL_TOGROUND : public Horizon::Zone::RE20171002::PACKET_CZ_USE_SKILL_TOGROUND
{
	PACKET_CZ_USE_SKILL_TOGROUND(uint16_t packet_id = CZ_USE_SKILL_TOGROUND) : Horizon::Zone::RE20171002::PACKET_CZ_USE_SKILL_TOGROUND(packet_id) { }

	/* Size: 10 bytes */
};
}
}
}

#endif /* HORIZON_ZONE_RE_20171011_PACKET_CZ_USE_SKILL_TOGROUND_HPP */
