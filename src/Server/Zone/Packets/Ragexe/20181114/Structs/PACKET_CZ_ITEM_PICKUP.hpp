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

#ifndef HORIZON_ZONE_RAGEXE_20181114_PACKET_CZ_ITEM_PICKUP_HPP
#define HORIZON_ZONE_RAGEXE_20181114_PACKET_CZ_ITEM_PICKUP_HPP

#include "Server/Zone/Packets/Ragexe/20181114/PacketsRagexe20181114.hpp"
#include "Server/Zone/Packets/Ragexe/20181107/Structs/PACKET_CZ_ITEM_PICKUP.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Ragexe20181114
{
struct PACKET_CZ_ITEM_PICKUP : public Horizon::Zone::Ragexe20181107::PACKET_CZ_ITEM_PICKUP
{
	PACKET_CZ_ITEM_PICKUP(uint16_t packet_id = CZ_ITEM_PICKUP) : Horizon::Zone::Ragexe20181107::PACKET_CZ_ITEM_PICKUP(packet_id) { }

	/* Size: 6 bytes */
};
}
}
}

#endif /* HORIZON_ZONE_RAGEXE_20181114_PACKET_CZ_ITEM_PICKUP_HPP */
