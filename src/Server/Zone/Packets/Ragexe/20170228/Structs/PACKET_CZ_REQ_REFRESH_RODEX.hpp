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

#ifndef HORIZON_ZONE_RAGEXE_20170228_PACKET_CZ_REQ_REFRESH_RODEX_HPP
#define HORIZON_ZONE_RAGEXE_20170228_PACKET_CZ_REQ_REFRESH_RODEX_HPP

#include "Server/Zone/Packets/Ragexe/20170228/PacketsRagexe20170228.hpp"
#include "Server/Zone/Packets/Ragexe/Structs/PACKET_CZ_REQ_REFRESH_RODEX.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Ragexe20170228
{
struct PACKET_CZ_REQ_REFRESH_RODEX : public Horizon::Zone::Ragexe::PACKET_CZ_REQ_REFRESH_RODEX
{
	PACKET_CZ_REQ_REFRESH_RODEX(uint16_t packet_id = CZ_REQ_REFRESH_RODEX) : Horizon::Zone::Ragexe::PACKET_CZ_REQ_REFRESH_RODEX(packet_id) { }

	virtual PacketBuffer serialize() override
	{
		return Ragexe::PACKET_CZ_REQ_REFRESH_RODEX::serialize();
	}

	virtual void deserialize(PacketBuffer &buf) override
	{
		Ragexe::PACKET_CZ_REQ_REFRESH_RODEX::deserialize(buf);
	}

	virtual Ragexe::PACKET_CZ_REQ_REFRESH_RODEX & operator << (PacketBuffer &right) override
	{
		deserialize(right);
		return *this;
	}

	virtual PacketBuffer operator >> (PacketBuffer &right) override
	{
		return right = serialize();
	}

	/* Size: 26 bytes */
	/* Changed from 11 in version 0 to 26 */
};
}
}
}

#endif /* HORIZON_ZONE_RAGEXE_20170228_PACKET_CZ_REQ_REFRESH_RODEX_HPP */
