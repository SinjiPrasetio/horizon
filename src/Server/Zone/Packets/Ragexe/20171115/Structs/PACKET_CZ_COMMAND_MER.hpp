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

#ifndef HORIZON_ZONE_RAGEXE_20171115_PACKET_CZ_COMMAND_MER_HPP
#define HORIZON_ZONE_RAGEXE_20171115_PACKET_CZ_COMMAND_MER_HPP

#include "Server/Zone/Packets/Ragexe/20171115/PacketsRagexe20171115.hpp"
#include "Server/Zone/Packets/Ragexe/20171108/Structs/PACKET_CZ_COMMAND_MER.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Ragexe20171115
{
struct PACKET_CZ_COMMAND_MER : public Horizon::Zone::Ragexe20171108::PACKET_CZ_COMMAND_MER
{
	PACKET_CZ_COMMAND_MER(uint16_t packet_id = CZ_COMMAND_MER) : Horizon::Zone::Ragexe20171108::PACKET_CZ_COMMAND_MER(packet_id) { }

	virtual PacketBuffer serialize() override
	{
		return Ragexe20171108::PACKET_CZ_COMMAND_MER::serialize();
	}

	virtual void deserialize(PacketBuffer &buf) override
	{
		Ragexe20171108::PACKET_CZ_COMMAND_MER::deserialize(buf);
	}

	virtual Ragexe20171108::PACKET_CZ_COMMAND_MER & operator << (PacketBuffer &right) override
	{
		deserialize(right);
		return *this;
	}

	virtual PacketBuffer operator >> (PacketBuffer &right) override 
	{
		return right = serialize();
	}

	/* Size: 5 bytes */
	/* Changed from 2 in version 20171108 to 5 */
};
}
}
}

#endif /* HORIZON_ZONE_RAGEXE_20171115_PACKET_CZ_COMMAND_MER_HPP */
