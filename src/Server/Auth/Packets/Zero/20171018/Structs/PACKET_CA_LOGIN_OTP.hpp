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

#ifndef HORIZON_AUTH_ZERO_20171018_PACKET_CA_LOGIN_OTP_HPP
#define HORIZON_AUTH_ZERO_20171018_PACKET_CA_LOGIN_OTP_HPP

#include "Server/Auth/Packets/Zero/20171018/PacketsZero20171018.hpp"
#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Auth
{
namespace Zero20171018
{
struct PACKET_CA_LOGIN_OTP : public Packet
{
	PACKET_CA_LOGIN_OTP(uint16_t packet_id = CA_LOGIN_OTP) : Packet(packet_id) { }

	virtual PacketBuffer serialize()
	{
		return PacketBuffer(packet_id);
	}

	virtual void deserialize(PacketBuffer &/*buf*/) { }

	virtual PACKET_CA_LOGIN_OTP & operator << (PacketBuffer &right)
	{
		deserialize(right);
		return *this;
	}

	virtual PacketBuffer operator >> (PacketBuffer &right)
	{
		return right = serialize();
	}

	/* Size: 64 bytes */
};
}
}
}

#endif /* HORIZON_AUTH_ZERO_20171018_PACKET_CA_LOGIN_OTP_HPP */
