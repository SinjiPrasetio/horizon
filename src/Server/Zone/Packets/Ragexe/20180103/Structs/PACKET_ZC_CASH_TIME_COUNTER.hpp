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

#ifndef HORIZON_ZONE_RAGEXE_20180103_PACKET_ZC_CASH_TIME_COUNTER_HPP
#define HORIZON_ZONE_RAGEXE_20180103_PACKET_ZC_CASH_TIME_COUNTER_HPP

#include "Server/Zone/Packets/Ragexe/20180103/PacketsRagexe20180103.hpp"
#include "Server/Zone/Packets/Ragexe/Structs/PACKET_ZC_CASH_TIME_COUNTER.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Ragexe20180103
{
struct PACKET_ZC_CASH_TIME_COUNTER : public Horizon::Zone::Ragexe::PACKET_ZC_CASH_TIME_COUNTER
{
	PACKET_ZC_CASH_TIME_COUNTER(uint16_t packet_id = ZC_CASH_TIME_COUNTER) : Horizon::Zone::Ragexe::PACKET_ZC_CASH_TIME_COUNTER(packet_id) { }

	/* Size: 8 bytes */
};
}
}
}

#endif /* HORIZON_ZONE_RAGEXE_20180103_PACKET_ZC_CASH_TIME_COUNTER_HPP */
