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

#ifndef HORIZON_ZONE_ZERO_20180523_PACKET_CZ_PARTY_BOOKING_REQ_REGISTER_HPP
#define HORIZON_ZONE_ZERO_20180523_PACKET_CZ_PARTY_BOOKING_REQ_REGISTER_HPP

#include "Server/Zone/Packets/Zero/20180523/PacketsZero20180523.hpp"
#include "Server/Zone/Packets/Zero/20180511/Structs/PACKET_CZ_PARTY_BOOKING_REQ_REGISTER.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Zero20180523
{
struct PACKET_CZ_PARTY_BOOKING_REQ_REGISTER : public Horizon::Zone::Zero20180511::PACKET_CZ_PARTY_BOOKING_REQ_REGISTER
{
	PACKET_CZ_PARTY_BOOKING_REQ_REGISTER(uint16_t packet_id = CZ_PARTY_BOOKING_REQ_REGISTER) : Horizon::Zone::Zero20180511::PACKET_CZ_PARTY_BOOKING_REQ_REGISTER(packet_id) { }

	virtual PacketBuffer serialize() override
	{
		return Zero20180511::PACKET_CZ_PARTY_BOOKING_REQ_REGISTER::serialize();
	}

	virtual void deserialize(PacketBuffer &buf) override
	{
		Zero20180511::PACKET_CZ_PARTY_BOOKING_REQ_REGISTER::deserialize(buf);
	}

	virtual Zero20180511::PACKET_CZ_PARTY_BOOKING_REQ_REGISTER & operator << (PacketBuffer &right) override
	{
		deserialize(right);
		return *this;
	}

	virtual PacketBuffer operator >> (PacketBuffer &right) override 
	{
		return right = serialize();
	}

	/* Size: 18 bytes */
	/* Changed from 2 in version 20180511 to 18 */
};
}
}
}

#endif /* HORIZON_ZONE_ZERO_20180523_PACKET_CZ_PARTY_BOOKING_REQ_REGISTER_HPP */
