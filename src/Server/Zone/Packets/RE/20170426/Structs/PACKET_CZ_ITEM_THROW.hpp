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

#ifndef HORIZON_ZONE_RE_20170426_PACKET_CZ_ITEM_THROW_HPP
#define HORIZON_ZONE_RE_20170426_PACKET_CZ_ITEM_THROW_HPP

#include "Server/Zone/Packets/RE/20170426/PacketsRE20170426.hpp"
#include "Server/Zone/Packets/RE/20170419/Structs/PACKET_CZ_ITEM_THROW.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace RE20170426
{
struct PACKET_CZ_ITEM_THROW : public Horizon::Zone::RE20170419::PACKET_CZ_ITEM_THROW
{
	PACKET_CZ_ITEM_THROW(uint16_t packet_id = CZ_ITEM_THROW) : Horizon::Zone::RE20170419::PACKET_CZ_ITEM_THROW(packet_id) { }

	/* Size: 6 bytes */
};
}
}
}

#endif /* HORIZON_ZONE_RE_20170426_PACKET_CZ_ITEM_THROW_HPP */
