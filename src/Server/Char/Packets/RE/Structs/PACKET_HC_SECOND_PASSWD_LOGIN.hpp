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

#ifndef HORIZON_CHAR_RE_PACKET_HC_SECOND_PASSWD_LOGIN_HPP
#define HORIZON_CHAR_RE_PACKET_HC_SECOND_PASSWD_LOGIN_HPP


#include "Server/Char/Packets/RE/Packets.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Char
{
namespace RE
{
struct PACKET_HC_SECOND_PASSWD_LOGIN : public Packet
{
	PACKET_HC_SECOND_PASSWD_LOGIN(uint16_t packet_id = HC_SECOND_PASSWD_LOGIN) : Packet(packet_id) { }

	virtual PacketBuffer serialize()
	{
		return PacketBuffer(packet_id);
	}

	virtual void deserialize(PacketBuffer &/*buf*/) { }

	virtual PACKET_HC_SECOND_PASSWD_LOGIN & operator << (PacketBuffer &right)
	{
		deserialize(right);
		return *this;
	}

	virtual PacketBuffer operator >> (PacketBuffer &right)
	{
		return right = serialize();
	}

	/* Size: 12 bytes */
};
}
}
}

#endif /* HORIZON_CHAR_RE_PACKET_HC_SECOND_PASSWD_LOGIN_HPP */
