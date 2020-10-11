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

#ifndef HORIZON_CHAR_PACKET_LENGTH_TABLE
#define HORIZON_CHAR_PACKET_LENGTH_TABLE

#include "Server/Common/Base/NetworkPacket.hpp"
#include "Core/Multithreading/LockedLookupTable.hpp"
#include "Default.hpp"

#include <utility>
#include <memory>

#include "Server/Char/Packets/Structures/CH_ACK_CHANGE_CHARACTERNAME.hpp"
#include "Server/Char/Packets/Structures/CH_AVAILABLE_SECOND_PASSWD.hpp"
#include "Server/Char/Packets/Structures/CH_CHARLIST_REQ.hpp"
#include "Server/Char/Packets/Structures/CH_CHECKBOT.hpp"
#include "Server/Char/Packets/Structures/CH_DELETE_CHAR.hpp"
#include "Server/Char/Packets/Structures/CH_DELETE_CHAR2.hpp"
#include "Server/Char/Packets/Structures/CH_DELETE_CHAR3.hpp"
#include "Server/Char/Packets/Structures/CH_DELETE_CHAR3_CANCEL.hpp"
#include "Server/Char/Packets/Structures/CH_DELETE_CHAR3_EXT.hpp"
#include "Server/Char/Packets/Structures/CH_DELETE_CHAR3_RESERVED.hpp"
#include "Server/Char/Packets/Structures/CH_DELETE_SECOND_PASSWD.hpp"
#include "Server/Char/Packets/Structures/CH_EDIT_SECOND_PASSWD.hpp"
#include "Server/Char/Packets/Structures/CH_ENTER.hpp"
#include "Server/Char/Packets/Structures/CH_ENTER2.hpp"
#include "Server/Char/Packets/Structures/CH_ENTER_CHECKBOT.hpp"
#include "Server/Char/Packets/Structures/CH_MAKE_CHAR.hpp"
#include "Server/Char/Packets/Structures/CH_MAKE_CHAR_NOT_STATS.hpp"
#include "Server/Char/Packets/Structures/CH_MAKE_SECOND_PASSWD.hpp"
#include "Server/Char/Packets/Structures/CH_NOT_AVAILABLE_SECOND_PASSWD.hpp"
#include "Server/Char/Packets/Structures/CH_REQ_CHANGE_CHARACTERNAME.hpp"
#include "Server/Char/Packets/Structures/CH_REQ_CHANGE_CHARACTER_SLOT.hpp"
#include "Server/Char/Packets/Structures/CH_REQ_CHANGE_CHARNAME.hpp"
#include "Server/Char/Packets/Structures/CH_REQ_CHARINFO_PER_PAGE.hpp"
#include "Server/Char/Packets/Structures/CH_REQ_IS_VALID_CHARNAME.hpp"
#include "Server/Char/Packets/Structures/CH_SECOND_PASSWD_ACK.hpp"
#include "Server/Char/Packets/Structures/CH_SELECT_ACCESSIBLE_MAPNAME.hpp"
#include "Server/Char/Packets/Structures/CH_SELECT_CHAR.hpp"
#include "Server/Char/Packets/Structures/CH_SELECT_CHAR_GOINGTOBEUSED.hpp"
#include "Server/Char/Packets/Structures/CH_UNKNOWN_PING.hpp"
#include "Server/Char/Packets/Structures/CH_WAITING_LOGIN.hpp"
#include "Server/Char/Packets/Structures/HC_ACCEPT_DELETECHAR.hpp"
#include "Server/Char/Packets/Structures/HC_ACCEPT_ENTER.hpp"
#include "Server/Char/Packets/Structures/HC_ACCEPT_ENTER2.hpp"
#include "Server/Char/Packets/Structures/HC_ACCEPT_MAKECHAR.hpp"
#include "Server/Char/Packets/Structures/HC_ACK_CHANGE_CHARACTER_SLOT.hpp"
#include "Server/Char/Packets/Structures/HC_ACK_CHANGE_CHARNAME.hpp"
#include "Server/Char/Packets/Structures/HC_ACK_CHARINFO_PER_PAGE.hpp"
#include "Server/Char/Packets/Structures/HC_ACK_IS_VALID_CHARNAME.hpp"
#include "Server/Char/Packets/Structures/HC_AVAILABLE_SECOND_PASSWD.hpp"
#include "Server/Char/Packets/Structures/HC_BLOCK_CHARACTER.hpp"
#include "Server/Char/Packets/Structures/HC_CHARACTER_LIST.hpp"
#include "Server/Char/Packets/Structures/HC_CHARLIST_NOTIFY.hpp"
#include "Server/Char/Packets/Structures/HC_CHARNOTBEENSELECTED.hpp"
#include "Server/Char/Packets/Structures/HC_CHECKBOT.hpp"
#include "Server/Char/Packets/Structures/HC_CHECKBOT_RESULT.hpp"
#include "Server/Char/Packets/Structures/HC_DELETE_CHAR3.hpp"
#include "Server/Char/Packets/Structures/HC_DELETE_CHAR3_CANCEL.hpp"
#include "Server/Char/Packets/Structures/HC_DELETE_CHAR3_RESERVED.hpp"
#include "Server/Char/Packets/Structures/HC_DELETE_SECOND_PASSWD.hpp"
#include "Server/Char/Packets/Structures/HC_EDIT_SECOND_PASSWD.hpp"
#include "Server/Char/Packets/Structures/HC_MAKE_SECOND_PASSWD.hpp"
#include "Server/Char/Packets/Structures/HC_NOTIFY_ACCESSIBLE_MAPNAME.hpp"
#include "Server/Char/Packets/Structures/HC_NOTIFY_ZONESVR.hpp"
#include "Server/Char/Packets/Structures/HC_NOT_AVAILABLE_SECOND_PASSWD.hpp"
#include "Server/Char/Packets/Structures/HC_QUEUE_ORDER.hpp"
#include "Server/Char/Packets/Structures/HC_REFUSE_DELETECHAR.hpp"
#include "Server/Char/Packets/Structures/HC_REFUSE_ENTER.hpp"
#include "Server/Char/Packets/Structures/HC_REFUSE_MAKECHAR.hpp"
#include "Server/Char/Packets/Structures/HC_REFUSE_SELECTCHAR.hpp"
#include "Server/Char/Packets/Structures/HC_REQUEST_CHARACTER_PASSWORD.hpp"
#include "Server/Char/Packets/Structures/HC_SECOND_PASSWD_LOGIN.hpp"
#include "Server/Char/Packets/Structures/HC_SECRETSCAN_DATA.hpp"
#include "Server/Char/Packets/Structures/HC_UPDATE_CHARINFO.hpp"
#include "Server/Char/Packets/Structures/HC_WAITING_LOGIN.hpp"

#if CLIENT_VERSION >= 20180117
#include "20180117.hpp"
#elif CLIENT_VERSION >= 20180103
#include "20180103.hpp"
#elif CLIENT_VERSION >= 20171220
#include "20171220.hpp"
#elif CLIENT_VERSION >= 20170906
#include "20170906.hpp"
#elif CLIENT_VERSION >= 20170228
#include "20170228.hpp"
#elif CLIENT_VERSION >= 20170104
#include "20170104.hpp"
#elif CLIENT_VERSION >= 20150415
#include "20150415.hpp"
#elif CLIENT_VERSION >= 20150211
#include "20150211.hpp"
#elif CLIENT_VERSION >= 20140820
#include "20140820.hpp"
#elif CLIENT_VERSION >= 20140108
#include "20140108.hpp"
#elif CLIENT_VERSION >= 20130522
#include "20130522.hpp"
#elif CLIENT_VERSION >= 20121212
#include "20121212.hpp"
#elif CLIENT_VERSION >= 20121128
#include "20121128.hpp"
#elif CLIENT_VERSION >= 20121024
#include "20121024.hpp"
#elif CLIENT_VERSION >= 20120724
#include "20120724.hpp"
#elif CLIENT_VERSION >= 20120214
#include "20120214.hpp"
#elif CLIENT_VERSION >= 20111207
#include "20111207.hpp"
#elif CLIENT_VERSION >= 20111101
#include "20111101.hpp"
#elif CLIENT_VERSION >= 20111017
#include "20111017.hpp"
#elif CLIENT_VERSION >= 20110928
#include "20110928.hpp"
#elif CLIENT_VERSION >= 20110920
#include "20110920.hpp"
#elif CLIENT_VERSION >= 20110906
#include "20110906.hpp"
#elif CLIENT_VERSION >= 20110308
#include "20110308.hpp"
#elif CLIENT_VERSION >= 20110228
#include "20110228.hpp"
#elif CLIENT_VERSION >= 20110222
#include "20110222.hpp"
#elif CLIENT_VERSION >= 20110215
#include "20110215.hpp"
#elif CLIENT_VERSION >= 20110111
#include "20110111.hpp"
#elif CLIENT_VERSION >= 20110104
#include "20110104.hpp"
#elif CLIENT_VERSION >= 20101228
#include "20101228.hpp"
#elif CLIENT_VERSION >= 20101221
#include "20101221.hpp"
#elif CLIENT_VERSION >= 20101012
#include "20101012.hpp"
#elif CLIENT_VERSION >= 20100803
#include "20100803.hpp"
#elif CLIENT_VERSION >= 20100728
#include "20100728.hpp"
#elif CLIENT_VERSION >= 20100727
#include "20100727.hpp"
#elif CLIENT_VERSION >= 20100720
#include "20100720.hpp"
#elif CLIENT_VERSION >= 20100714
#include "20100714.hpp"
#elif CLIENT_VERSION >= 20100713
#include "20100713.hpp"
#elif CLIENT_VERSION >= 20100105
#include "20100105.hpp"
#elif CLIENT_VERSION >= 20090922
#include "20090922.hpp"
#elif CLIENT_VERSION >= 20090825
#include "20090825.hpp"
#elif CLIENT_VERSION >= 20090701
#include "20090701.hpp"
#elif CLIENT_VERSION >= 20090617
#include "20090617.hpp"
#elif CLIENT_VERSION >= 20090225
#include "20090225.hpp"
#elif CLIENT_VERSION >= 20090107
#include "20090107.hpp"
#elif CLIENT_VERSION >= 20070821
#include "20070821.hpp"
#elif CLIENT_VERSION >= 20061207
#include "20061207.hpp"
#elif CLIENT_VERSION >= 20061030
#include "20061030.hpp"
#elif CLIENT_VERSION >= 20060102
#include "20060102.hpp"
#elif CLIENT_VERSION >= 20050628
#include "20050628.hpp"
#elif CLIENT_VERSION >= 20040621
#include "20040621.hpp"
#elif CLIENT_VERSION >= 20040419
#include "20040419.hpp"
#endif

namespace Horizon
{
namespace Char
{
/**
 * @brief Packet Length Table object that stores
 * the packet length of each packet of this client version.
 * The data is stored in a thread-safe lookup table.
 * RAII techinque ensures that the table is populated on instantiation.
 */
class PacketLengthTable
{
public:
	PacketLengthTable(std::shared_ptr<CharSocket> sock)
	: _socket(sock)
	{
#define ADD_PKT(i, j, k) _packet_length_table.insert(i, std::make_pair<uint16_t, NetworkPacket>(j, k))
		ADD_PKT(0x08fd, 6, CH_ACK_CHANGE_CHARACTERNAME(sock));
		ADD_PKT(0x08c5, 6, CH_AVAILABLE_SECOND_PASSWD(sock));
		ADD_PKT(0x09a1, 2, CH_CHARLIST_REQ(sock));
		ADD_PKT(0x07e7, 32, CH_CHECKBOT(sock));
		ADD_PKT(0x0068, 46, CH_DELETE_CHAR(sock));
		ADD_PKT(0x01fb, 56, CH_DELETE_CHAR2(sock));
		ADD_PKT(0x0829, 12, CH_DELETE_CHAR3(sock));
		ADD_PKT(0x082b, 6, CH_DELETE_CHAR3_CANCEL(sock));
		ADD_PKT(0x098f, -1, CH_DELETE_CHAR3_EXT(sock));
		ADD_PKT(0x0827, 6, CH_DELETE_CHAR3_RESERVED(sock));
		ADD_PKT(0x08bc, 10, CH_DELETE_SECOND_PASSWD(sock));
		ADD_PKT(0x08be, 14, CH_EDIT_SECOND_PASSWD(sock));
		ADD_PKT(0x0065, 17, CH_ENTER(sock));
		ADD_PKT(0x0275, 37, CH_ENTER2(sock));
		ADD_PKT(0x07e5, 4, CH_ENTER_CHECKBOT(sock));
		ADD_PKT(0x0a39, 36, CH_MAKE_CHAR(sock));
		ADD_PKT(0x0970, 31, CH_MAKE_CHAR_NOT_STATS(sock));
		ADD_PKT(0x08ba, 10, CH_MAKE_SECOND_PASSWD(sock));
		ADD_PKT(0x08c3, 10, CH_NOT_AVAILABLE_SECOND_PASSWD(sock));
		ADD_PKT(0x08fc, 30, CH_REQ_CHANGE_CHARACTERNAME(sock));
		ADD_PKT(0x08d4, 8, CH_REQ_CHANGE_CHARACTER_SLOT(sock));
		ADD_PKT(0x028f, 6, CH_REQ_CHANGE_CHARNAME(sock));
		ADD_PKT(0x099c, 6, CH_REQ_CHARINFO_PER_PAGE(sock));
		ADD_PKT(0x028d, 34, CH_REQ_IS_VALID_CHARNAME(sock));
		ADD_PKT(0x08b8, 10, CH_SECOND_PASSWD_ACK(sock));
		ADD_PKT(0x0841, 4, CH_SELECT_ACCESSIBLE_MAPNAME(sock));
		ADD_PKT(0x0066, 3, CH_SELECT_CHAR(sock));
		ADD_PKT(0x028c, 46, CH_SELECT_CHAR_GOINGTOBEUSED(sock));
		ADD_PKT(0x0187, 6, CH_UNKNOWN_PING(sock));
		ADD_PKT(0x08b0, 17, CH_WAITING_LOGIN(sock));
		ADD_PKT(0x006f, 2, HC_ACCEPT_DELETECHAR(sock));
		ADD_PKT(0x006b, -1, HC_ACCEPT_ENTER(sock));
		ADD_PKT(0x082d, -1, HC_ACCEPT_ENTER2(sock));
		ADD_PKT(0x006d, 157, HC_ACCEPT_MAKECHAR(sock));
		ADD_PKT(0x08d5, -1, HC_ACK_CHANGE_CHARACTER_SLOT(sock));
		ADD_PKT(0x0290, 4, HC_ACK_CHANGE_CHARNAME(sock));
		ADD_PKT(0x099d, -1, HC_ACK_CHARINFO_PER_PAGE(sock));
		ADD_PKT(0x028e, 4, HC_ACK_IS_VALID_CHARNAME(sock));
		ADD_PKT(0x08c6, 4, HC_AVAILABLE_SECOND_PASSWD(sock));
		ADD_PKT(0x020d, -1, HC_BLOCK_CHARACTER(sock));
		ADD_PKT(0x0448, -1, HC_CHARACTER_LIST(sock));
		ADD_PKT(0x09a0, 6, HC_CHARLIST_NOTIFY(sock));
		ADD_PKT(0x028b, -1, HC_CHARNOTBEENSELECTED(sock));
		ADD_PKT(0x07e8, -1, HC_CHECKBOT(sock));
		ADD_PKT(0x07e9, 5, HC_CHECKBOT_RESULT(sock));
		ADD_PKT(0x082a, 10, HC_DELETE_CHAR3(sock));
		ADD_PKT(0x082c, 10, HC_DELETE_CHAR3_CANCEL(sock));
		ADD_PKT(0x0828, 14, HC_DELETE_CHAR3_RESERVED(sock));
		ADD_PKT(0x08bd, 8, HC_DELETE_SECOND_PASSWD(sock));
		ADD_PKT(0x08bf, 8, HC_EDIT_SECOND_PASSWD(sock));
		ADD_PKT(0x08bb, 8, HC_MAKE_SECOND_PASSWD(sock));
		ADD_PKT(0x0840, -1, HC_NOTIFY_ACCESSIBLE_MAPNAME(sock));
		ADD_PKT(0x0ac5, 156, HC_NOTIFY_ZONESVR(sock));
		ADD_PKT(0x08c4, 8, HC_NOT_AVAILABLE_SECOND_PASSWD(sock));
		ADD_PKT(0x099e, 12, HC_QUEUE_ORDER(sock));
		ADD_PKT(0x0070, 3, HC_REFUSE_DELETECHAR(sock));
		ADD_PKT(0x006c, 3, HC_REFUSE_ENTER(sock));
		ADD_PKT(0x006e, 3, HC_REFUSE_MAKECHAR(sock));
		ADD_PKT(0x02ca, 3, HC_REFUSE_SELECTCHAR(sock));
		ADD_PKT(0x023e, 8, HC_REQUEST_CHARACTER_PASSWORD(sock));
		ADD_PKT(0x0ae9, 13, HC_SECOND_PASSWD_LOGIN(sock));
		ADD_PKT(0x09c2, -1, HC_SECRETSCAN_DATA(sock));
		ADD_PKT(0x08e3, 157, HC_UPDATE_CHARINFO(sock));
		ADD_PKT(0x08af, 10, HC_WAITING_LOGIN(sock));
#undef ADD_PKT
	}

	~PacketLengthTable() { }

	ShufflePacketLengthTable *instance()
	{
		static ShufflePacketLengthTable p;
		return &p;
	}

	std::shared_ptr<CharSocket> get_socket() { return _socket.lock(); }

protected:
	LockedLookupTable<uint16_t, std::pair<uint16_t, NetworkPacket>> _packet_length_table;
	std::weak_ptr<CharSocket> _socket;

};
}
}
#endif /* HORIZON_CHAR_PACKET_LENGTH_TABLE */