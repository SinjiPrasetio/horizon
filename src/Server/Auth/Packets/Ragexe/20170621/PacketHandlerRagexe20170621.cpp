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

#include "PacketHandlerRagexe20170621.hpp"

using namespace Horizon::Auth;
PacketHandlerRagexe20170621::PacketHandlerRagexe20170621(std::shared_ptr<AuthSocket> socket)
: PacketHandlerRagexe20170614(socket)
{
	initialize_handlers();
}

PacketHandlerRagexe20170621::~PacketHandlerRagexe20170621()
{
	//
}

void PacketHandlerRagexe20170621::initialize_handlers()
{
	PacketHandler::initialize_handlers();

#define HANDLER_FUNC(packet) add_packet_handler(Ragexe20170621::packets::packet, boost::bind(&PacketHandlerRagexe20170621::Handle_ ## packet, this, boost::placeholders::_1));
#undef HANDLER_FUNC
}
