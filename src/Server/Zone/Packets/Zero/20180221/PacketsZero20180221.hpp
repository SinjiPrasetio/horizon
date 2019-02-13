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

#ifndef HORIZON_ZONE_ZERO_20180221_PACKETS_HPP
#define HORIZON_ZONE_ZERO_20180221_PACKETS_HPP

namespace Horizon
{
namespace Zone
{
namespace Zero20180221
{
enum packets
{
	CZ_ACK_STORE_PASSWORD = 0x0942,
	CZ_ADD_FRIENDS = 0x092d,
	CZ_CHANGE_DIRECTION = 0x0364,
	CZ_CHANGE_DIRECTION2 = 0x0361,
	CZ_COMMAND_MER = 0x022d,
	CZ_ENTER = 0x0880,
	CZ_GANGSI_RANK = 0x0952,
	CZ_ITEMLISTWIN_RES = 0x0438,
	CZ_ITEM_PICKUP = 0x095d,
	CZ_ITEM_THROW = 0x0892,
	CZ_JOIN_BATTLE_FIELD = 0x086a,
	CZ_MOVE_ITEM_FROM_BODY_TO_STORE = 0x0959,
	CZ_MOVE_ITEM_FROM_STORE_TO_BODY = 0x093e,
	CZ_PARTY_BOOKING_REQ_REGISTER = 0x0951,
	CZ_PARTY_JOIN_REQ = 0x093d,
	CZ_REQNAME = 0x0362,
	CZ_REQNAME_BYGID = 0x088d,
	CZ_REQUEST_ACT = 0x0958,
	CZ_REQUEST_MOVE = 0x08a1,
	CZ_REQUEST_MOVE2 = 0x035f,
	CZ_REQUEST_TIME = 0x02c4,
	CZ_REQ_CLICK_TO_BUYING_STORE = 0x0895,
	CZ_REQ_CLOSE_BUYING_STORE = 0x0815,
	CZ_REQ_OPEN_BUYING_STORE = 0x0921,
	CZ_REQ_TRADE_BUYING_STORE = 0x0932,
	CZ_SEARCH_STORE_INFO = 0x0817,
	CZ_SEARCH_STORE_INFO_NEXT_PAGE = 0x0884,
	CZ_SSILIST_ITEM_CLICK = 0x093b,
	CZ_USE_SKILL = 0x08a3,
	CZ_USE_SKILL_TOGROUND = 0x085b,
	CZ_USE_SKILL_TOGROUND_WITHTALKBOX = 0x091b,
};
}
}
}
#endif /* HORIZON_ZONE_ZERO_20180221_PACKETS_HPP */
