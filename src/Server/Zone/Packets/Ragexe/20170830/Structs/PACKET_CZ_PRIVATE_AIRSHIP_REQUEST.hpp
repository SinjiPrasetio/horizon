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

#ifndef HORIZON_ZONE_RAGEXE_20170830_PACKET_CZ_PRIVATE_AIRSHIP_REQUEST_HPP
#define HORIZON_ZONE_RAGEXE_20170830_PACKET_CZ_PRIVATE_AIRSHIP_REQUEST_HPP

#include "Server/Zone/Packets/Ragexe/20170830/PacketsRagexe20170830.hpp"
#include "Server/Zone/Packets/Ragexe/20170104/Structs/PACKET_CZ_PRIVATE_AIRSHIP_REQUEST.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Ragexe20170830
{
struct PACKET_CZ_PRIVATE_AIRSHIP_REQUEST : public Horizon::Zone::Ragexe20170104::PACKET_CZ_PRIVATE_AIRSHIP_REQUEST
{
	PACKET_CZ_PRIVATE_AIRSHIP_REQUEST(uint16_t packet_id = CZ_PRIVATE_AIRSHIP_REQUEST) : Horizon::Zone::Ragexe20170104::PACKET_CZ_PRIVATE_AIRSHIP_REQUEST(packet_id) { }

	virtual PacketBuffer serialize() override
	{
		return Ragexe20170104::PACKET_CZ_PRIVATE_AIRSHIP_REQUEST::serialize();
	}

	virtual void deserialize(PacketBuffer &buf) override
	{
		Ragexe20170104::PACKET_CZ_PRIVATE_AIRSHIP_REQUEST::deserialize(buf);
	}

	virtual Ragexe20170104::PACKET_CZ_PRIVATE_AIRSHIP_REQUEST & operator << (PacketBuffer &right) override
	{
		deserialize(right);
		return *this;
	}

	virtual PacketBuffer operator >> (PacketBuffer &right) override 
	{
		return right = serialize();
	}

	/* Size: 20 bytes */
	/* Changed from 22 in version 20170104 to 20 */
};
}
}
}

#endif /* HORIZON_ZONE_RAGEXE_20170830_PACKET_CZ_PRIVATE_AIRSHIP_REQUEST_HPP */
