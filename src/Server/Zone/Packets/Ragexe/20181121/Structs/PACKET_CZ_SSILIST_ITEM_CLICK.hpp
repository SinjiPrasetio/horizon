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

#ifndef HORIZON_ZONE_RAGEXE_20181121_PACKET_CZ_SSILIST_ITEM_CLICK_HPP
#define HORIZON_ZONE_RAGEXE_20181121_PACKET_CZ_SSILIST_ITEM_CLICK_HPP

#include "Server/Zone/Packets/Ragexe/20181121/PacketsRagexe20181121.hpp"
#include "Server/Zone/Packets/Ragexe/20181114/Structs/PACKET_CZ_SSILIST_ITEM_CLICK.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Ragexe20181121
{
struct PACKET_CZ_SSILIST_ITEM_CLICK : public Horizon::Zone::Ragexe20181114::PACKET_CZ_SSILIST_ITEM_CLICK
{
	PACKET_CZ_SSILIST_ITEM_CLICK(uint16_t packet_id = CZ_SSILIST_ITEM_CLICK) : Horizon::Zone::Ragexe20181114::PACKET_CZ_SSILIST_ITEM_CLICK(packet_id) { }

	virtual PacketBuffer serialize() override
	{
		return Ragexe20181114::PACKET_CZ_SSILIST_ITEM_CLICK::serialize();
	}

	virtual void deserialize(PacketBuffer &buf) override
	{
		Ragexe20181114::PACKET_CZ_SSILIST_ITEM_CLICK::deserialize(buf);
	}

	virtual Ragexe20181114::PACKET_CZ_SSILIST_ITEM_CLICK & operator << (PacketBuffer &right) override
	{
		deserialize(right);
		return *this;
	}

	virtual PacketBuffer operator >> (PacketBuffer &right) override 
	{
		return right = serialize();
	}

	/* Size: 14 bytes */
	/* Changed from 12 in version 20181114 to 14 */
};
}
}
}

#endif /* HORIZON_ZONE_RAGEXE_20181121_PACKET_CZ_SSILIST_ITEM_CLICK_HPP */
