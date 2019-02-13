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

#ifndef HORIZON_ZONE_RE_PACKET_ZC_ACK_REQNAME_BYGID_HPP
#define HORIZON_ZONE_RE_PACKET_ZC_ACK_REQNAME_BYGID_HPP


#include "Server/Zone/Packets/RE/Packets.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace RE
{
struct PACKET_ZC_ACK_REQNAME_BYGID : public Packet
{
	PACKET_ZC_ACK_REQNAME_BYGID(uint16_t packet_id = ZC_ACK_REQNAME_BYGID) : Packet(packet_id) { }

	virtual PacketBuffer serialize()
	{
		return PacketBuffer(packet_id);
	}

	virtual void deserialize(PacketBuffer &/*buf*/) { }

	virtual PACKET_ZC_ACK_REQNAME_BYGID & operator << (PacketBuffer &right)
	{
		deserialize(right);
		return *this;
	}

	virtual PacketBuffer operator >> (PacketBuffer &right)
	{
		return right = serialize();
	}

	/* Size: 30 bytes */
};
}
}
}

#endif /* HORIZON_ZONE_RE_PACKET_ZC_ACK_REQNAME_BYGID_HPP */
