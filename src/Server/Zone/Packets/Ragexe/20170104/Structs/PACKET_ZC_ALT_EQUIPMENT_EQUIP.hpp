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

#ifndef HORIZON_ZONE_RAGEXE_20170104_PACKET_ZC_ALT_EQUIPMENT_EQUIP_HPP
#define HORIZON_ZONE_RAGEXE_20170104_PACKET_ZC_ALT_EQUIPMENT_EQUIP_HPP

#include "Server/Zone/Packets/Ragexe/20170104/PacketsRagexe20170104.hpp"
#include "Server/Common/PacketBuffer.hpp"


namespace Horizon
{
namespace Zone
{
namespace Ragexe20170104
{
struct PACKET_ZC_ALT_EQUIPMENT_EQUIP : public Packet
{
	PACKET_ZC_ALT_EQUIPMENT_EQUIP(uint16_t packet_id = ZC_ALT_EQUIPMENT_EQUIP) : Packet(packet_id) { }

	virtual PacketBuffer serialize()
	{
		return PacketBuffer(packet_id);
	}

	virtual void deserialize(PacketBuffer &/*buf*/) { }

	virtual PACKET_ZC_ALT_EQUIPMENT_EQUIP & operator << (PacketBuffer &right)
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

#endif /* HORIZON_ZONE_RAGEXE_20170104_PACKET_ZC_ALT_EQUIPMENT_EQUIP_HPP */
