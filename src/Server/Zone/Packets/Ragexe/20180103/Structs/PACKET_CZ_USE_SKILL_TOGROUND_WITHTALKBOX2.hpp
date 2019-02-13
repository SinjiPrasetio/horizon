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

#ifndef HORIZON_ZONE_RAGEXE_20180103_PACKET_CZ_USE_SKILL_TOGROUND_WITHTALKBOX2_HPP
#define HORIZON_ZONE_RAGEXE_20180103_PACKET_CZ_USE_SKILL_TOGROUND_WITHTALKBOX2_HPP

#include "Server/Zone/Packets/Ragexe/20180103/PacketsRagexe20180103.hpp"
#include "Server/Zone/Packets/Ragexe/20170621/Structs/PACKET_CZ_USE_SKILL_TOGROUND_WITHTALKBOX2.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Ragexe20180103
{
struct PACKET_CZ_USE_SKILL_TOGROUND_WITHTALKBOX2 : public Horizon::Zone::Ragexe20170621::PACKET_CZ_USE_SKILL_TOGROUND_WITHTALKBOX2
{
	PACKET_CZ_USE_SKILL_TOGROUND_WITHTALKBOX2(uint16_t packet_id = CZ_USE_SKILL_TOGROUND_WITHTALKBOX2) : Horizon::Zone::Ragexe20170621::PACKET_CZ_USE_SKILL_TOGROUND_WITHTALKBOX2(packet_id) { }

	/* Size: 2 bytes */
};
}
}
}

#endif /* HORIZON_ZONE_RAGEXE_20180103_PACKET_CZ_USE_SKILL_TOGROUND_WITHTALKBOX2_HPP */
