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

#ifndef HORIZON_CHAR_ZERO_PACKETS_HPP
#define HORIZON_CHAR_ZERO_PACKETS_HPP

namespace Horizon
{
namespace Char
{
namespace Zero
{
enum packets
{
	HC_NOTIFY_ZONESVR = 0x0ac5,
	HC_UPDATE_CHARINFO = 0x08e3,
};
}
}
}
#endif /* HORIZON_CHAR_ZERO_PACKETS_HPP */
