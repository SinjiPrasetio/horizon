-----------------------------------------------------
--       _   _            _                        --
--      | | | |          (_)                       --
--      | |_| | ___  _ __ _ _______  _ __          --
--      |  _  |/ _ \| '__| |_  / _ \| '_  \        --
--      | | | | (_) | |  | |/ / (_) | | | |        --
--      \_| |_/\___/|_|  |_/___\___/|_| |_|        --
-----------------------------------------------------
-- This file is part of Horizon (c).
-- Copyright (c) 2019 Horizon Dev Team.
--
-- Base Author - Sagun Khosla. (sagunxp@gmail.com)
--
-- This library is free software; you can redistribute it and/or modify
-- it under the terms of the GNU General Public License as published by
-- the Free Software Foundation, either version 3 of the License, or
-- (at your option) any later version.
--
-- This library is distributed in the hope that it will be useful,
-- but WITHOUT ANY WARRANTY; without even the implied warranty of
-- MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
-- GNU General Public License for more details.
--
-- You should have received a copy of the GNU General Public License
-- along with this library.  If not, see <http://www.gnu.org/licenses/>.
-----------------------------------------------------

local d = require('default_packets_ragexe')

d:add(0x00e6, 57, require('CZ_ACK_EXCHANGE_ITEM'))
d:add(0x0208, 26, require('CZ_ACK_REQ_ADD_FRIENDS'))
d:add(0x00c5, 6, require('CZ_ACK_SELECT_DEALTYPE'))
d:add(0x0202, -1, require('CZ_ADD_FRIENDS'))
d:add(0x0217, 44, require('CZ_BLACKSMITH_RANK'))
d:add(0x00ed, 8, require('CZ_CANCEL_EXCHANGE_ITEM'))
d:add(0x0118, -1, require('CZ_CANCEL_LOCKON'))
d:add(0x00de, 282, require('CZ_CHANGE_CHATROOM'))
d:add(0x0361, 6, require('CZ_CHANGE_DIRECTION2'))
d:add(0x019d, -1, require('CZ_CHANGE_EFFECTSTATE'))
d:add(0x0102, 30, require('CZ_CHANGE_GROUPEXPOPTION'))
d:add(0x00b8, 2, require('CZ_CHOOSE_MENU'))
d:add(0x0146, -1, require('CZ_CLOSE_DIALOG'))
d:add(0x022d, -1, require('CZ_COMMAND_MER'))
d:add(0x00eb, -1, require('CZ_CONCLUDE_EXCHANGE_ITEM'))
d:add(0x0090, -1, require('CZ_CONTACTNPC'))
d:add(0x00d5, -1, require('CZ_CREATE_CHATROOM'))
d:add(0x00cc, 8, require('CZ_DISCONNECT_CHARACTER'))
d:add(0x01e7, -1, require('CZ_DORIDORI'))
d:add(0x0436, 14, require('CZ_ENTER2'))
d:add(0x00ef, -1, require('CZ_EXEC_EXCHANGE_ITEM'))
d:add(0x00e3, -1, require('CZ_EXIT_ROOM'))
d:add(0x017e, 6, require('CZ_GUILD_CHAT'))
d:add(0x016e, 97, require('CZ_GUILD_NOTICE'))
d:add(0x0143, 22, require('CZ_INPUT_EDITDLG'))
d:add(0x01d5, 14, require('CZ_INPUT_EDITDLGSTR'))
d:add(0x02f6, -1, require('CZ_IRMAIL_LIST'))
d:add(0x013f, 6, require('CZ_ITEM_CREATE'))
d:add(0x0362, 15, require('CZ_ITEM_PICKUP2'))
d:add(0x0363, 4, require('CZ_ITEM_THROW2'))
d:add(0x00ff, 3, require('CZ_JOIN_GROUP'))
d:add(0x016b, 30, require('CZ_JOIN_GUILD'))
d:add(0x0237, 2, require('CZ_KILLER_RANK'))
d:add(0x019c, -1, require('CZ_LOCALBROADCAST'))
d:add(0x01e8, 14, require('CZ_MAKE_GROUP2'))
d:add(0x0140, 4, require('CZ_MOVETO_MAP'))
d:add(0x0126, -1, require('CZ_MOVE_ITEM_FROM_BODY_TO_CART'))
d:add(0x0364, 14, require('CZ_MOVE_ITEM_FROM_BODY_TO_STORE2'))
d:add(0x0127, -1, require('CZ_MOVE_ITEM_FROM_CART_TO_BODY'))
d:add(0x0129, -1, require('CZ_MOVE_ITEM_FROM_CART_TO_STORE'))
d:add(0x0128, 29, require('CZ_MOVE_ITEM_FROM_STORE_TO_CART'))
d:add(0x007d, -1, require('CZ_NOTIFY_ACTORINIT'))
d:add(0x00c8, -1, require('CZ_PC_PURCHASE_ITEMLIST'))
d:add(0x0134, 6, require('CZ_PC_PURCHASE_ITEMLIST_FROMMC'))
d:add(0x00c9, 15, require('CZ_PC_SELL_ITEMLIST'))
d:add(0x0161, 30, require('CZ_REG_CHANGE_GUILD_POSITIONINFO'))
d:add(0x01ba, 30, require('CZ_REMOVE_AID'))
d:add(0x0368, 30, require('CZ_REQNAME2'))
d:add(0x0369, -1, require('CZ_REQNAME_BYGID2'))
d:add(0x0233, 6, require('CZ_REQUEST_ACTNPC'))
d:add(0x0232, -1, require('CZ_REQUEST_MOVENPC'))
d:add(0x0360, 11, require('CZ_REQUEST_TIME2'))
d:add(0x0170, -1, require('CZ_REQ_ALLY_GUILD'))
d:add(0x0130, 30, require('CZ_REQ_BUY_FROMMC'))
d:add(0x012a, -1, require('CZ_REQ_CARTOFF'))
d:add(0x0155, -1, require('CZ_REQ_CHANGE_MEMBERPOS'))
d:add(0x012e, -1, require('CZ_REQ_CLOSESTORE'))
d:add(0x018a, 2, require('CZ_REQ_DISCONNECT'))
d:add(0x00bf, 6, require('CZ_REQ_EMOTION'))
d:add(0x0103, 11, require('CZ_REQ_EXPEL_GROUP_MEMBER'))
d:add(0x00e2, 7, require('CZ_REQ_EXPEL_MEMBER'))
d:add(0x014f, 182, require('CZ_REQ_GUILD_MENU'))
d:add(0x014d, -1, require('CZ_REQ_GUILD_MENUINTERFACE'))
d:add(0x017c, -1, require('CZ_REQ_ITEMCOMPOSITION'))
d:add(0x017a, -1, require('CZ_REQ_ITEMCOMPOSITION_LIST'))
d:add(0x0178, 6, require('CZ_REQ_ITEMIDENTIFY'))
d:add(0x01fd, 53, require('CZ_REQ_ITEMREPAIR'))
d:add(0x00fc, 3, require('CZ_REQ_JOIN_GROUP'))
d:add(0x0168, -1, require('CZ_REQ_JOIN_GUILD'))
d:add(0x0100, -1, require('CZ_REQ_LEAVE_GROUP'))
d:add(0x01ae, 11, require('CZ_REQ_MAKINGARROW'))
d:add(0x00b9, -1, require('CZ_REQ_NEXT_SCRIPT'))
d:add(0x01b2, 60, require('CZ_REQ_OPENSTORE2'))
d:add(0x00e0, -1, require('CZ_REQ_ROLE_CHANGE'))
d:add(0x00ab, 4, require('CZ_REQ_TAKEOFF_EQUIP'))
d:add(0x00cf, 2, require('CZ_SETTING_WHISPER_PC'))
d:add(0x01bb, -1, require('CZ_SHIFT'))
d:add(0x00bb, 10, require('CZ_STATUS_CHANGE'))
d:add(0x019f, 7, require('CZ_TRYCAPTURE_MONSTER'))
d:add(0x0112, -1, require('CZ_UPGRADE_SKILLLEVEL'))
d:add(0x0439, 28, require('CZ_USE_ITEM2'))
d:add(0x0438, 3, require('CZ_USE_SKILL2'))
d:add(0x0083, 10, require('ZC_ACCEPT_QUIT'))
d:add(0x00ea, 6, require('ZC_ACK_ADD_EXCHANGE_ITEM'))
d:add(0x015c, -1, require('ZC_ACK_BAN_GUILD'))
d:add(0x00d6, -1, require('ZC_ACK_CREATE_CHATROOM'))
d:add(0x00e7, 6, require('ZC_ACK_EXCHANGE_ITEM'))
d:add(0x01f5, -1, require('ZC_ACK_EXCHANGE_ITEM2'))
d:add(0x0188, -1, require('ZC_ACK_ITEMREFINING'))
d:add(0x01fe, 10, require('ZC_ACK_ITEMREPAIR'))
d:add(0x011e, 2, require('ZC_ACK_REMEMBER_WARPPOINT'))
d:add(0x0194, -1, require('ZC_ACK_REQNAME_BYGID'))
d:add(0x018b, -1, require('ZC_ACK_REQ_DISCONNECT'))
d:add(0x00fd, -1, require('ZC_ACK_REQ_JOIN_GROUP'))
d:add(0x0169, -1, require('ZC_ACK_REQ_JOIN_GUILD'))
d:add(0x0098, 8, require('ZC_ACK_WHISPER'))
d:add(0x013b, 8, require('ZC_ACTION_FAILURE'))
d:add(0x0124, -1, require('ZC_ADD_ITEM_TO_CART'))
d:add(0x01c5, 2, require('ZC_ADD_ITEM_TO_CART2'))
d:add(0x00f4, 26, require('ZC_ADD_ITEM_TO_STORE'))
d:add(0x01c4, -1, require('ZC_ADD_ITEM_TO_STORE2'))
d:add(0x0104, 6, require('ZC_ADD_MEMBER_TO_GROUP'))
d:add(0x01e9, 55, require('ZC_ADD_MEMBER_TO_GROUP2'))
d:add(0x01cd, 33, require('ZC_AUTOSPELLLIST'))
d:add(0x0219, 2, require('ZC_BLACKSMITH_RANK'))
d:add(0x009a, -1, require('ZC_BROADCAST'))
d:add(0x01c3, 15, require('ZC_BROADCAST2'))
d:add(0x00ee, -1, require('ZC_CANCEL_EXCHANGE_ITEM'))
d:add(0x0122, 4, require('ZC_CART_EQUIPMENT_ITEMLIST'))
d:add(0x0123, -1, require('ZC_CART_NORMAL_ITEMLIST'))
d:add(0x01ef, 30, require('ZC_CART_NORMAL_ITEMLIST2'))
d:add(0x0230, 5, require('ZC_CHANGESTATE_MER'))
d:add(0x01a4, -1, require('ZC_CHANGESTATE_PET'))
d:add(0x00df, 3, require('ZC_CHANGE_CHATROOM'))
d:add(0x00b6, 6, require('ZC_CLOSE_DIALOG'))
d:add(0x0144, 2, require('ZC_COMPASS'))
d:add(0x00ec, 6, require('ZC_CONCLUDE_EXCHANGE_ITEM'))
d:add(0x01ea, -1, require('ZC_CONGRATULATION'))
d:add(0x020a, 4, require('ZC_DELETE_FRIENDS'))
d:add(0x00f6, -1, require('ZC_DELETE_ITEM_FROM_STORE'))
d:add(0x0105, -1, require('ZC_DELETE_MEMBER_FROM_GROUP'))
d:add(0x00d8, -1, require('ZC_DESTROY_ROOM'))
d:add(0x01cf, -1, require('ZC_DEVOTIONLIST'))
d:add(0x00c0, 31, require('ZC_EMOTION'))
d:add(0x00db, 8, require('ZC_ENTER_ROOM'))
d:add(0x00a4, -1, require('ZC_EQUIPMENT_ITEMLIST'))
d:add(0x013c, -1, require('ZC_EQUIP_ARROW'))
d:add(0x022f, -1, require('ZC_FEED_MER'))
d:add(0x01a3, 3, require('ZC_FEED_PET'))
d:add(0x0201, 4, require('ZC_FRIENDS_LIST'))
d:add(0x0227, 4, require('ZC_GAME_GUARD'))
d:add(0x0101, 20, require('ZC_GROUPINFO_CHANGE'))
d:add(0x00fb, 16, require('ZC_GROUP_LIST'))
d:add(0x01b6, 13, require('ZC_GUILD_INFO2'))
d:add(0x016f, 9, require('ZC_GUILD_NOTICE'))
d:add(0x0162, 10, require('ZC_GUILD_SKILLINFO'))
d:add(0x0239, 71, require('ZC_HOSKILLINFO_UPDATE'))
d:add(0x02f5, 8, require('ZC_IRMAIL_NOTIFY'))
d:add(0x017b, -1, require('ZC_ITEMCOMPOSITION_LIST'))
d:add(0x0177, -1, require('ZC_ITEMIDENTIFY_LIST'))
d:add(0x009d, 3, require('ZC_ITEM_ENTRY'))
d:add(0x009e, 3, require('ZC_ITEM_FALL_ENTRY'))
d:add(0x0238, 12, require('ZC_KILLER_RANK'))
d:add(0x018d, 7, require('ZC_MAKABLEITEMLIST'))
d:add(0x01ad, 14, require('ZC_MAKINGARROW_LIST'))
d:add(0x00dd, -1, require('ZC_MEMBER_EXIT'))
d:add(0x00dc, 4, require('ZC_MEMBER_NEWENTRY'))
d:add(0x018c, -1, require('ZC_MONSTER_INFO'))
d:add(0x043f, 25, require('ZC_MSG_STATE_CHANGE2'))
d:add(0x010c, 8, require('ZC_MVP'))
d:add(0x010b, -1, require('ZC_MVP_GETTING_SPECIAL_EXP'))
d:add(0x014c, 2, require('ZC_MYGUILD_BASIC_INFO'))
d:add(0x01ee, 11, require('ZC_NORMAL_ITEMLIST2'))
d:add(0x008a, -1, require('ZC_NOTIFY_ACT'))
d:add(0x02e1, 60, require('ZC_NOTIFY_ACT2'))
d:add(0x007a, 6, require('ZC_NOTIFY_ACTENTRY'))
d:add(0x0121, 67, require('ZC_NOTIFY_CARTITEM_COUNTINFO'))
d:add(0x0109, 3, require('ZC_NOTIFY_CHAT_PARTY'))
d:add(0x0117, 26, require('ZC_NOTIFY_GROUNDSKILL'))
d:add(0x0106, -1, require('ZC_NOTIFY_HP_TO_GROUPM'))
d:add(0x0075, -1, require('ZC_NOTIFY_INITCHAR'))
d:add(0x0189, 6, require('ZC_NOTIFY_MAPINFO'))
d:add(0x0199, 282, require('ZC_NOTIFY_MAPPROPERTY'))
d:add(0x01d6, -1, require('ZC_NOTIFY_MAPPROPERTY2'))
d:add(0x0086, -1, require('ZC_NOTIFY_MOVE'))
d:add(0x01da, 4, require('ZC_NOTIFY_MOVEENTRY2'))
d:add(0x022c, -1, require('ZC_NOTIFY_MOVEENTRY3'))
d:add(0x02ec, 9, require('ZC_NOTIFY_MOVEENTRY4'))
d:add(0x0079, 21, require('ZC_NOTIFY_NEWENTRY'))
d:add(0x01d9, 54, require('ZC_NOTIFY_NEWENTRY2'))
d:add(0x008e, 12, require('ZC_NOTIFY_PLAYERCHAT'))
d:add(0x0087, -1, require('ZC_NOTIFY_PLAYERMOVE'))
d:add(0x01eb, 59, require('ZC_NOTIFY_POSITION_TO_GUILDM'))
d:add(0x0114, 10, require('ZC_NOTIFY_SKILL'))
d:add(0x01de, 282, require('ZC_NOTIFY_SKILL2'))
d:add(0x0078, -1, require('ZC_NOTIFY_STANDENTRY'))
d:add(0x01d8, 7, require('ZC_NOTIFY_STANDENTRY2'))
d:add(0x022a, -1, require('ZC_NOTIFY_STANDENTRY3'))
d:add(0x007c, 2, require('ZC_NOTIFY_STANDENTRY_NPC'))
d:add(0x0077, 7, require('ZC_NOTIFY_UPDATEPLAYER'))
d:add(0x0091, -1, require('ZC_NPCACK_MAPMOVE'))
d:add(0x0092, 3, require('ZC_NPCACK_SERVERMOVE'))
d:add(0x012d, 13, require('ZC_OPENSTORE'))
d:add(0x00b0, -1, require('ZC_PAR_CHANGE'))
d:add(0x0287, 3, require('ZC_PC_CASH_POINT_ITEMLIST'))
d:add(0x00c6, -1, require('ZC_PC_PURCHASE_ITEMLIST'))
d:add(0x0136, -1, require('ZC_PC_PURCHASE_MYITEMLIST'))
d:add(0x00ca, -1, require('ZC_PC_PURCHASE_RESULT'))
d:add(0x013d, 3, require('ZC_RECOVERY'))
d:add(0x00da, -1, require('ZC_REFUSE_ENTER_ROOM'))
d:add(0x0171, 6, require('ZC_REQ_ALLY_GUILD'))
d:add(0x00e5, 2, require('ZC_REQ_EXCHANGE_ITEM'))
d:add(0x01f4, 8, require('ZC_REQ_EXCHANGE_ITEM2'))
d:add(0x00fe, -1, require('ZC_REQ_JOIN_GROUP'))
d:add(0x023a, 22, require('ZC_REQ_STORE_PASSWORD'))
d:add(0x00ac, -1, require('ZC_REQ_TAKEOFF_EQUIP_ACK'))
d:add(0x00aa, 26, require('ZC_REQ_WEAR_EQUIP_ACK'))
d:add(0x00b3, -1, require('ZC_RESTART_ACK'))
d:add(0x0167, 5, require('ZC_RESULT_MAKE_GUILD'))
d:add(0x0148, -1, require('ZC_RESURRECTION'))
d:add(0x00e1, 28, require('ZC_ROLE_CHANGE'))
d:add(0x00c4, -1, require('ZC_SELECT_DEALTYPE'))
d:add(0x00d2, 6, require('ZC_SETTING_WHISPER_STATE'))
d:add(0x01b3, -1, require('ZC_SHOW_IMAGE2'))
d:add(0x010f, 43, require('ZC_SKILLINFO_LIST'))
d:add(0x0120, 12, require('ZC_SKILL_DISAPPEAR'))
d:add(0x01c9, 79, require('ZC_SKILL_ENTRY2'))
d:add(0x01ac, 6, require('ZC_SKILL_UPDATE'))
d:add(0x01d0, -1, require('ZC_SPIRITS'))
d:add(0x01e1, 7, require('ZC_SPIRITS2'))
d:add(0x0119, -1, require('ZC_STATE_CHANGE'))
d:add(0x00bd, 10, require('ZC_STATUS'))
d:add(0x00be, 14, require('ZC_STATUS_CHANGE'))
d:add(0x0088, 60, require('ZC_STOPMOVE'))
d:add(0x0131, 5, require('ZC_STORE_ENTRY'))
d:add(0x00a6, 18, require('ZC_STORE_EQUIPMENT_ITEMLIST'))
d:add(0x0296, 6, require('ZC_STORE_EQUIPMENT_ITEMLIST2'))
d:add(0x00a5, -1, require('ZC_STORE_NORMAL_ITEMLIST'))
d:add(0x0226, 6, require('ZC_TAEKWON_RANK'))
d:add(0x01a0, -1, require('ZC_TRYCAPTURE_MONSTER'))
d:add(0x016d, -1, require('ZC_UPDATE_CHARSTAT'))
d:add(0x01f2, -1, require('ZC_UPDATE_CHARSTAT2'))
d:add(0x016c, -1, require('ZC_UPDATE_GDID'))
d:add(0x00c2, 4, require('ZC_USER_COUNT'))
d:add(0x013e, -1, require('ZC_USESKILL_ACK'))
d:add(0x00a8, 27, require('ZC_USE_ITEM_ACK'))
d:add(0x01c8, 4, require('ZC_USE_ITEM_ACK2'))
d:add(0x011a, 8, require('ZC_USE_SKILL'))
d:add(0x00b5, 6, require('ZC_WAIT_DIALOG'))
d:add(0x0097, 10, require('ZC_WHISPER'))

return d