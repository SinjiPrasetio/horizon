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

#ifndef HORIZON_ZONE_RAGEXE_20170111_PACKET_CZ_ITEM_PICKUP2_HPP
#define HORIZON_ZONE_RAGEXE_20170111_PACKET_CZ_ITEM_PICKUP2_HPP

#include "Server/Zone/Packets/Ragexe/20170111/PacketsRagexe20170111.hpp"
#include "Server/Zone/Packets/Ragexe/Structs/PACKET_CZ_ITEM_PICKUP2.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Ragexe20170111
{
struct PACKET_CZ_ITEM_PICKUP2 : public Horizon::Zone::Ragexe::PACKET_CZ_ITEM_PICKUP2
{
	PACKET_CZ_ITEM_PICKUP2(uint16_t packet_id = CZ_ITEM_PICKUP2) : Horizon::Zone::Ragexe::PACKET_CZ_ITEM_PICKUP2(packet_id) { }

	virtual PacketBuffer serialize() override
	{
		return Ragexe::PACKET_CZ_ITEM_PICKUP2::serialize();
	}

	virtual void deserialize(PacketBuffer &buf) override
	{
		Ragexe::PACKET_CZ_ITEM_PICKUP2::deserialize(buf);
	}

	virtual Ragexe::PACKET_CZ_ITEM_PICKUP2 & operator << (PacketBuffer &right) override
	{
		deserialize(right);
		return *this;
	}

	virtual PacketBuffer operator >> (PacketBuffer &right) override
	{
		return right = serialize();
	}

	/* Size: 2 bytes */
	/* Changed from 6 in version 0 to 2 */
};
}
}
}

#endif /* HORIZON_ZONE_RAGEXE_20170111_PACKET_CZ_ITEM_PICKUP2_HPP */
