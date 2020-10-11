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
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 **************************************************/

#include "CZ_CHANGE_GROUP_MASTER.hpp"
#include "Server/Zone/Socket/ZoneSocket.hpp"

using namespace Horizon::Zone::Packet;

CZ_CHANGE_GROUP_MASTER::CZ_CHANGE_GROUP_MASTER(std::shared_ptr<ZoneSocket> sock)
: NetworkPacket(ID_CZ_CHANGE_GROUP_MASTER, sock) { }

CZ_CHANGE_GROUP_MASTER::~CZ_CHANGE_GROUP_MASTER() { }

void CZ_CHANGE_GROUP_MASTER::handle(ByteBuffer &buf)
{
}

void CZ_CHANGE_GROUP_MASTER::deserialize(ByteBuffer &buf)
{
}
