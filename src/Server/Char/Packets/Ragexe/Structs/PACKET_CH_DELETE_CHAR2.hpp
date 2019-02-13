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

#ifndef HORIZON_CHAR_RAGEXE_PACKET_CH_DELETE_CHAR2_HPP
#define HORIZON_CHAR_RAGEXE_PACKET_CH_DELETE_CHAR2_HPP


#include "Server/Char/Packets/Ragexe/Packets.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Char
{
namespace Ragexe
{
struct PACKET_CH_DELETE_CHAR2 : public Packet
{
	PACKET_CH_DELETE_CHAR2(uint16_t packet_id = CH_DELETE_CHAR2) : Packet(packet_id) { }

	virtual PacketBuffer serialize()
	{
		return PacketBuffer(CH_DELETE_CHAR2);
	}

	virtual void deserialize(PacketBuffer &buf)
	{
		buf >> packet_id;
		buf >> character_id;
		buf.read(email, sizeof(email));
	}

	virtual PACKET_CH_DELETE_CHAR2 & operator << (PacketBuffer &right)
	{
		deserialize(right);
		return *this;
	}

	virtual PacketBuffer operator >> (PacketBuffer &right)
	{
		return right = serialize();
	}

	/* Size: 56 bytes */
	uint32_t character_id{0};
	char email[MAX_EMAIL_LENGTH]{0};
};
}
}
}

#endif /* HORIZON_CHAR_RAGEXE_PACKET_CH_DELETE_CHAR2_HPP */
