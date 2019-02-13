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

#ifndef HORIZON_ZONE_RAGEXE_20170201_PACKET_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM_HPP
#define HORIZON_ZONE_RAGEXE_20170201_PACKET_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM_HPP

#include "Server/Zone/Packets/Ragexe/20170201/PacketsRagexe20170201.hpp"
#include "Server/Zone/Packets/Ragexe/20170104/Structs/PACKET_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Ragexe20170201
{
struct PACKET_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM : public Horizon::Zone::Ragexe20170104::PACKET_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM
{
	PACKET_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM(uint16_t packet_id = ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM) : Horizon::Zone::Ragexe20170104::PACKET_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM(packet_id) { }

	/* Size: 2 bytes */
};
}
}
}

#endif /* HORIZON_ZONE_RAGEXE_20170201_PACKET_ZC_PARTY_RECRUIT_CANCEL_VOLUNTEER_TO_PM_HPP */
