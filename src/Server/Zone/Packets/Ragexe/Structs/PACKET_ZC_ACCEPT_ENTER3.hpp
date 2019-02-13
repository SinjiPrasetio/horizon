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

#ifndef HORIZON_ZONE_RAGEXE_PACKET_ZC_ACCEPT_ENTER3_HPP
#define HORIZON_ZONE_RAGEXE_PACKET_ZC_ACCEPT_ENTER3_HPP


#include "Server/Zone/Packets/Ragexe/Packets.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Ragexe
{
struct PACKET_ZC_ACCEPT_ENTER3 : public Packet
{
	PACKET_ZC_ACCEPT_ENTER3(uint16_t packet_id = ZC_ACCEPT_ENTER3) : Packet(packet_id) { }

	virtual PacketBuffer serialize(uint16_t x, uint16_t y, uint16_t dir)
	{
		PacketBuffer buf(packet_id);

		buf << start_time;
		PackPosition((int8_t *) packed_pos, x, y, dir);
		buf.append(packed_pos, sizeof(packed_pos));
		buf << x_size << y_size << font << gender;

		return buf;
	}

	virtual void deserialize(PacketBuffer &/*buf*/) { }

	virtual PACKET_ZC_ACCEPT_ENTER3 & operator << (PacketBuffer &right)
	{
		deserialize(right);
		return *this;
	}

	/* Size: 14 bytes */
	uint32_t start_time{0};
	char packed_pos[3]{0};
	uint8_t x_size{0};
	uint8_t y_size{0};
	uint16_t font{0};
	uint8_t gender{0};
};
}
}
}

#endif /* HORIZON_ZONE_RAGEXE_PACKET_ZC_ACCEPT_ENTER3_HPP */
