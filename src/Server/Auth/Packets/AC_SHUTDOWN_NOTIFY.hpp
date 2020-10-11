/***************************************************
 *       _   _            _                        *
 *      | | | |          (_)                       *
 *      | |_| | ___  _ __ _ _______  _ __          *
 *      |  _  |/ _ \| '__| |_  / _ \| '_  \        *
 *      | | | | (_) | |  | |/ / (_) | | | |        *
 *      \_| |_/\___/|_|  |_/___\___/|_| |_|        *
 ***************************************************
 * This file is part of Horizon (c).
 * Copyright (c) 2020- Horizon Dev Team.
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

#ifndef HORIZON_AC_SHUTDOWN_NOTIFY_HPP
#define HORIZON_AC_SHUTDOWN_NOTIFY_HPP

#include "Server/Common/Configuration/Horizon.hpp"
#include "Server/Common/Base/NetworkPacket.hpp"

namespace Horizon
{
class AuthSocket;
enum {
#if PACKET_VERSION >= 20120626
	ID_AC_SHUTDOWN_NOTIFY = 0x0986
#elif PACKET_VERSION >= 20120612
	ID_AC_SHUTDOWN_NOTIFY = 0x0986
#elif PACKET_VERSION >= 0
	ID_AC_SHUTDOWN_NOTIFY = 0x0986
#endif
};
/**
 * @brief Main object for the aegis packet: AC_SHUTDOWN_NOTIFY
 * Size : 10 @ 0
 *
 */ 
class AC_SHUTDOWN_NOTIFY : public Base::NetworkPacket<AuthSocket>
{
public:
	AC_SHUTDOWN_NOTIFY(std::shared_ptr<AuthSocket> sock);
	virtual ~AC_SHUTDOWN_NOTIFY();


	void deliver();

    ByteBuffer &serialize();

	virtual void handle(ByteBuffer &&buf) override;

    void deserialize(ByteBuffer &buf);

protected:
	/* Structure Goes Here */
};
}
#endif /* HORIZON_AC_SHUTDOWN_NOTIFY_HPP */