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

#include "PacketHandlerZero20171220.hpp"

using namespace Horizon::Char;
PacketHandlerZero20171220::PacketHandlerZero20171220(std::shared_ptr<CharSocket> socket)
: PacketHandler(socket)
{
	initialize_handlers();
}

PacketHandlerZero20171220::~PacketHandlerZero20171220()
{
	//
}

void PacketHandlerZero20171220::initialize_handlers()
{
	PacketHandler::initialize_handlers();

#define HANDLER_FUNC(packet) add_packet_handler(Zero20171220::packets::packet, boost::bind(&PacketHandlerZero20171220::Handle_ ## packet, this, boost::placeholders::_1));
#undef HANDLER_FUNC
}
