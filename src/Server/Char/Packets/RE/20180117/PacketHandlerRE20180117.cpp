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

#include "PacketHandlerRE20180117.hpp"

using namespace Horizon::Char;
PacketHandlerRE20180117::PacketHandlerRE20180117(std::shared_ptr<CharSocket> socket)
: PacketHandlerRE20180103(socket)
{
	initialize_handlers();
}

PacketHandlerRE20180117::~PacketHandlerRE20180117()
{
	//
}

void PacketHandlerRE20180117::initialize_handlers()
{
	PacketHandler::initialize_handlers();

#define HANDLER_FUNC(packet) add_packet_handler(RE20180117::packets::packet, boost::bind(&PacketHandlerRE20180117::Handle_ ## packet, this, boost::placeholders::_1));
#undef HANDLER_FUNC
}
