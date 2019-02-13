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

#ifndef HORIZON_ZONE_ZERO_20180228_PACKET_ZC_PRNPC_STATE_HPP
#define HORIZON_ZONE_ZERO_20180228_PACKET_ZC_PRNPC_STATE_HPP

#include "Server/Zone/Packets/Zero/20180228/PacketsZero20180228.hpp"
#include "Server/Zone/Packets/Zero/20180103/Structs/PACKET_ZC_PRNPC_STATE.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Zero20180228
{
struct PACKET_ZC_PRNPC_STATE : public Horizon::Zone::Zero20180103::PACKET_ZC_PRNPC_STATE
{
	PACKET_ZC_PRNPC_STATE(uint16_t packet_id = ZC_PRNPC_STATE) : Horizon::Zone::Zero20180103::PACKET_ZC_PRNPC_STATE(packet_id) { }

	/* Size: 2 bytes */
};
}
}
}

#endif /* HORIZON_ZONE_ZERO_20180228_PACKET_ZC_PRNPC_STATE_HPP */
