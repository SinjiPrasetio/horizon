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

#ifndef HORIZON_ZONE_ZERO_20180228_PACKET_CZ_SEARCH_STORE_INFO_NEXT_PAGE_HPP
#define HORIZON_ZONE_ZERO_20180228_PACKET_CZ_SEARCH_STORE_INFO_NEXT_PAGE_HPP

#include "Server/Zone/Packets/Zero/20180228/PacketsZero20180228.hpp"
#include "Server/Zone/Packets/Zero/20180221/Structs/PACKET_CZ_SEARCH_STORE_INFO_NEXT_PAGE.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Zero20180228
{
struct PACKET_CZ_SEARCH_STORE_INFO_NEXT_PAGE : public Horizon::Zone::Zero20180221::PACKET_CZ_SEARCH_STORE_INFO_NEXT_PAGE
{
	PACKET_CZ_SEARCH_STORE_INFO_NEXT_PAGE(uint16_t packet_id = CZ_SEARCH_STORE_INFO_NEXT_PAGE) : Horizon::Zone::Zero20180221::PACKET_CZ_SEARCH_STORE_INFO_NEXT_PAGE(packet_id) { }

	/* Size: 2 bytes */
};
}
}
}

#endif /* HORIZON_ZONE_ZERO_20180228_PACKET_CZ_SEARCH_STORE_INFO_NEXT_PAGE_HPP */
