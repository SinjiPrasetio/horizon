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

#ifndef HORIZON_ZONE_RAGEXE_20170830_PACKET_CZ_COMMAND_MER_HPP
#define HORIZON_ZONE_RAGEXE_20170830_PACKET_CZ_COMMAND_MER_HPP

#include "Server/Zone/Packets/Ragexe/20170830/PacketsRagexe20170830.hpp"
#include "Server/Zone/Packets/Ragexe/20170823/Structs/PACKET_CZ_COMMAND_MER.hpp"

#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Ragexe20170830
{
struct PACKET_CZ_COMMAND_MER : public Horizon::Zone::Ragexe20170823::PACKET_CZ_COMMAND_MER
{
	PACKET_CZ_COMMAND_MER(uint16_t packet_id = CZ_COMMAND_MER) : Horizon::Zone::Ragexe20170823::PACKET_CZ_COMMAND_MER(packet_id) { }

	virtual PacketBuffer serialize() override
	{
		return Ragexe20170823::PACKET_CZ_COMMAND_MER::serialize();
	}

	virtual void deserialize(PacketBuffer &buf) override
	{
		Ragexe20170823::PACKET_CZ_COMMAND_MER::deserialize(buf);
	}

	virtual Ragexe20170823::PACKET_CZ_COMMAND_MER & operator << (PacketBuffer &right) override
	{
		deserialize(right);
		return *this;
	}

	virtual PacketBuffer operator >> (PacketBuffer &right) override 
	{
		return right = serialize();
	}

	/* Size: 5 bytes */
	/* Changed from 2 in version 20170823 to 5 */
};
}
}
}

#endif /* HORIZON_ZONE_RAGEXE_20170830_PACKET_CZ_COMMAND_MER_HPP */
