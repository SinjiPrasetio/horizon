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

#ifndef HORIZON_AUTH_RE_20170614_PACKETHANDLER_HPP
#define HORIZON_AUTH_RE_20170614_PACKETHANDLER_HPP

#include "Server/Common/PacketBuffer.hpp"
#include "Server/Auth/Packets/RE/20170228/PacketHandlerRE20170228.hpp"

namespace Horizon
{
namespace Auth
{

class AuthSocket;

class PacketHandlerRE20170614 : public PacketHandlerRE20170228
{
public:
	PacketHandlerRE20170614(std::shared_ptr<AuthSocket> socket);
	~PacketHandlerRE20170614();

	virtual void initialize_handlers() override;

};
}
}

#endif /* HORIZON_AUTH_RE_20170614_PACKETHANDLER_HPP */
