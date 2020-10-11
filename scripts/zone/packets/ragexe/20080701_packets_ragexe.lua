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

d:add(0x00e6, 6, require('CZ_ACK_EXCHANGE_ITEM'))
d:add(0x0208, 2, require('CZ_ACK_REQ_ADD_FRIENDS'))
d:add(0x00e8, -1, require('CZ_ADD_EXCHANGE_ITEM'))
d:add(0x0218, -1, require('CZ_ALCHEMIST_RANK'))
d:add(0x0217, 7, require('CZ_BLACKSMITH_RANK'))
d:add(0x0099, -1, require('CZ_BROADCAST'))
d:add(0x00ed, -1, require('CZ_CANCEL_EXCHANGE_ITEM'))
d:add(0x0118, 67, require('CZ_CANCEL_LOCKON'))
d:add(0x00de, 5, require('CZ_CHANGE_CHATROOM'))
d:add(0x0361, 27, require('CZ_CHANGE_DIRECTION2'))
d:add(0x019d, -1, require('CZ_CHANGE_EFFECTSTATE'))
d:add(0x00b8, 20, require('CZ_CHOOSE_MENU'))
d:add(0x01ed, 14, require('CZ_CHOPOKGI'))
d:add(0x022d, 10, require('CZ_COMMAND_MER'))
d:add(0x01a1, 3, require('CZ_COMMAND_PET'))
d:add(0x0090, 10, require('CZ_CONTACTNPC'))
d:add(0x00d5, 7, require('CZ_CREATE_CHATROOM'))
d:add(0x0203, -1, require('CZ_DELETE_FRIENDS'))
d:add(0x00ce, -1, require('CZ_DISCONNECT_ALL_CHARACTER'))
d:add(0x00cc, 33, require('CZ_DISCONNECT_CHARACTER'))
d:add(0x00ef, -1, require('CZ_EXEC_EXCHANGE_ITEM'))
d:add(0x00e3, 26, require('CZ_EXIT_ROOM'))
d:add(0x017e, 4, require('CZ_GUILD_CHAT'))
d:add(0x016e, -1, require('CZ_GUILD_NOTICE'))
d:add(0x01d5, 3, require('CZ_INPUT_EDITDLGSTR'))
d:add(0x02f3, -1, require('CZ_IRMAIL_SEND'))
d:add(0x013f, 30, require('CZ_ITEM_CREATE'))
d:add(0x0362, -1, require('CZ_ITEM_PICKUP2'))
d:add(0x0363, -1, require('CZ_ITEM_THROW2'))
d:add(0x00ff, 5, require('CZ_JOIN_GROUP'))
d:add(0x0237, 29, require('CZ_KILLER_RANK'))
d:add(0x019c, 282, require('CZ_LOCALBROADCAST'))
d:add(0x00f9, 6, require('CZ_MAKE_GROUP'))
d:add(0x01e8, -1, require('CZ_MAKE_GROUP2'))
d:add(0x0140, -1, require('CZ_MOVETO_MAP'))
d:add(0x0126, 3, require('CZ_MOVE_ITEM_FROM_BODY_TO_CART'))
d:add(0x0364, 43, require('CZ_MOVE_ITEM_FROM_BODY_TO_STORE2'))
d:add(0x0127, 9, require('CZ_MOVE_ITEM_FROM_CART_TO_BODY'))
d:add(0x0129, -1, require('CZ_MOVE_ITEM_FROM_CART_TO_STORE'))
d:add(0x0365, 18, require('CZ_MOVE_ITEM_FROM_STORE_TO_BODY2'))
d:add(0x0128, 5, require('CZ_MOVE_ITEM_FROM_STORE_TO_CART'))
d:add(0x00c8, 2, require('CZ_PC_PURCHASE_ITEMLIST'))
d:add(0x0134, -1, require('CZ_PC_PURCHASE_ITEMLIST_FROMMC'))
d:add(0x00c9, 39, require('CZ_PC_SELL_ITEMLIST'))
d:add(0x01bd, 6, require('CZ_RECALL_GID'))
d:add(0x0161, -1, require('CZ_REG_CHANGE_GUILD_POSITIONINFO'))
d:add(0x01ba, -1, require('CZ_REMOVE_AID'))
d:add(0x018e, -1, require('CZ_REQMAKINGITEM'))
d:add(0x0369, 26, require('CZ_REQNAME_BYGID2'))
d:add(0x0232, 28, require('CZ_REQUEST_MOVENPC'))
d:add(0x0360, 10, require('CZ_REQUEST_TIME2'))
d:add(0x0170, -1, require('CZ_REQ_ALLY_GUILD'))
d:add(0x015b, 6, require('CZ_REQ_BAN_GUILD'))
d:add(0x012e, -1, require('CZ_REQ_CLOSESTORE'))
d:add(0x018a, 6, require('CZ_REQ_DISCONNECT'))
d:add(0x00e4, -1, require('CZ_REQ_EXCHANGE_ITEM'))
d:add(0x0103, -1, require('CZ_REQ_EXPEL_GROUP_MEMBER'))
d:add(0x0149, 14, require('CZ_REQ_GIVE_MANNER_POINT'))
d:add(0x014d, -1, require('CZ_REQ_GUILD_MENUINTERFACE'))
d:add(0x017c, -1, require('CZ_REQ_ITEMCOMPOSITION'))
d:add(0x017a, 29, require('CZ_REQ_ITEMCOMPOSITION_LIST'))
d:add(0x01fd, 13, require('CZ_REQ_ITEMREPAIR'))
d:add(0x00fc, 22, require('CZ_REQ_JOIN_GROUP'))
d:add(0x0168, 6, require('CZ_REQ_JOIN_GUILD'))
d:add(0x0159, 7, require('CZ_REQ_LEAVE_GUILD'))
d:add(0x0165, 54, require('CZ_REQ_MAKE_GUILD'))
d:add(0x01ae, 7, require('CZ_REQ_MAKINGARROW'))
d:add(0x00b9, -1, require('CZ_REQ_NEXT_SCRIPT'))
d:add(0x00e0, 9, require('CZ_REQ_ROLE_CHANGE'))
d:add(0x00ab, -1, require('CZ_REQ_TAKEOFF_EQUIP'))
d:add(0x00c1, 6, require('CZ_REQ_USER_COUNT'))
d:add(0x00a9, 6, require('CZ_REQ_WEAR_EQUIP'))
d:add(0x00d3, -1, require('CZ_REQ_WHISPER_LIST'))
d:add(0x01a7, 2, require('CZ_SELECT_PETEGG'))
d:add(0x00bb, 60, require('CZ_STATUS_CHANGE'))
d:add(0x0225, -1, require('CZ_TAEKWON_RANK'))
d:add(0x019f, 36, require('CZ_TRYCAPTURE_MONSTER'))
d:add(0x0112, -1, require('CZ_UPGRADE_SKILLLEVEL'))
d:add(0x0366, -1, require('CZ_USE_SKILL_TOGROUND2'))
d:add(0x0096, 10, require('CZ_WHISPER'))
d:add(0x0073, 71, require('ZC_ACCEPT_ENTER'))
d:add(0x00ea, -1, require('ZC_ACK_ADD_EXCHANGE_ITEM'))
d:add(0x00d6, 15, require('ZC_ACK_CREATE_CHATROOM'))
d:add(0x015e, -1, require('ZC_ACK_DISORGANIZE_GUILD_RESULT'))
d:add(0x00e7, -1, require('ZC_ACK_EXCHANGE_ITEM'))
d:add(0x017d, 33, require('ZC_ACK_ITEMCOMPOSITION'))
d:add(0x0179, 59, require('ZC_ACK_ITEMIDENTIFY'))
d:add(0x01fe, 30, require('ZC_ACK_ITEMREPAIR'))
d:add(0x0095, 6, require('ZC_ACK_REQNAME'))
d:add(0x0195, 26, require('ZC_ACK_REQNAMEALL'))
d:add(0x0194, 42, require('ZC_ACK_REQNAME_BYGID'))
d:add(0x018b, 66, require('ZC_ACK_REQ_DISCONNECT'))
d:add(0x0169, 5, require('ZC_ACK_REQ_JOIN_GUILD'))
d:add(0x0098, 8, require('ZC_ACK_WHISPER'))
d:add(0x013b, 4, require('ZC_ACTION_FAILURE'))
d:add(0x0209, -1, require('ZC_ADD_FRIENDS_LIST'))
d:add(0x0124, -1, require('ZC_ADD_ITEM_TO_CART'))
d:add(0x0104, -1, require('ZC_ADD_MEMBER_TO_GROUP'))
d:add(0x01e9, -1, require('ZC_ADD_MEMBER_TO_GROUP2'))
d:add(0x0111, 17, require('ZC_ADD_SKILL'))
d:add(0x021a, 6, require('ZC_ALCHEMIST_RANK'))
d:add(0x0139, 26, require('ZC_ATTACK_FAILURE_FOR_DISTANCE'))
d:add(0x013a, -1, require('ZC_ATTACK_RANGE'))
d:add(0x0147, 282, require('ZC_AUTORUN_SKILL'))
d:add(0x01cd, 10, require('ZC_AUTOSPELLLIST'))
d:add(0x021b, -1, require('ZC_BLACKSMITH_POINT'))
d:add(0x009a, 3, require('ZC_BROADCAST'))
d:add(0x01c3, 10, require('ZC_BROADCAST2'))
d:add(0x00ee, 14, require('ZC_CANCEL_EXCHANGE_ITEM'))
d:add(0x0122, -1, require('ZC_CART_EQUIPMENT_ITEMLIST'))
d:add(0x0297, -1, require('ZC_CART_EQUIPMENT_ITEMLIST2'))
d:add(0x0123, -1, require('ZC_CART_NORMAL_ITEMLIST'))
d:add(0x01ef, 7, require('ZC_CART_NORMAL_ITEMLIST2'))
d:add(0x00df, 34, require('ZC_CHANGE_CHATROOM'))
d:add(0x009c, 67, require('ZC_CHANGE_DIRECTION'))
d:add(0x00b6, 8, require('ZC_CLOSE_DIALOG'))
d:add(0x00f8, -1, require('ZC_CLOSE_STORE'))
d:add(0x01d2, 2, require('ZC_COMBODELAY'))
d:add(0x0144, -1, require('ZC_COMPASS'))
d:add(0x00ec, 55, require('ZC_CONCLUDE_EXCHANGE_ITEM'))
d:add(0x01ea, 97, require('ZC_CONGRATULATION'))
d:add(0x0137, 9, require('ZC_DELETEITEM_FROM_MCSTORE'))
d:add(0x020a, -1, require('ZC_DELETE_FRIENDS'))
d:add(0x0125, 10, require('ZC_DELETE_ITEM_FROM_CART'))
d:add(0x00f6, 11, require('ZC_DELETE_ITEM_FROM_STORE'))
d:add(0x01cf, 3, require('ZC_DEVOTIONLIST'))
d:add(0x0132, -1, require('ZC_DISAPPEAR_ENTRY'))
d:add(0x01b9, 14, require('ZC_DISPEL'))
d:add(0x00c0, -1, require('ZC_EMOTION'))
d:add(0x00db, -1, require('ZC_ENTER_ROOM'))
d:add(0x00a4, 86, require('ZC_EQUIPMENT_ITEMLIST'))
d:add(0x0295, -1, require('ZC_EQUIPMENT_ITEMLIST2'))
d:add(0x013c, 6, require('ZC_EQUIP_ARROW'))
d:add(0x00f0, 11, require('ZC_EXEC_EXCHANGE_ITEM'))
d:add(0x022f, -1, require('ZC_FEED_MER'))
d:add(0x01a3, 31, require('ZC_FEED_PET'))
d:add(0x0201, 9, require('ZC_FRIENDS_LIST'))
d:add(0x0206, 2, require('ZC_FRIENDS_STATE'))
d:add(0x0227, 2, require('ZC_GAME_GUARD'))
d:add(0x0101, 5, require('ZC_GROUPINFO_CHANGE'))
d:add(0x00fb, -1, require('ZC_GROUP_LIST'))
d:add(0x01b6, 12, require('ZC_GUILD_INFO2'))
d:add(0x016f, 44, require('ZC_GUILD_NOTICE'))
d:add(0x0162, 81, require('ZC_GUILD_SKILLINFO'))
d:add(0x0235, 6, require('ZC_HOSKILLINFO_LIST'))
d:add(0x0239, 30, require('ZC_HOSKILLINFO_UPDATE'))
d:add(0x02f5, 8, require('ZC_IRMAIL_NOTIFY'))
d:add(0x017b, 2, require('ZC_ITEMCOMPOSITION_LIST'))
d:add(0x0177, 2, require('ZC_ITEMIDENTIFY_LIST'))
d:add(0x00a1, 6, require('ZC_ITEM_DISAPPEAR'))
d:add(0x009d, -1, require('ZC_ITEM_ENTRY'))
d:add(0x009e, -1, require('ZC_ITEM_FALL_ENTRY'))
d:add(0x00a0, 30, require('ZC_ITEM_PICKUP_ACK'))
d:add(0x00af, -1, require('ZC_ITEM_THROW_ACK'))
d:add(0x00b1, 3, require('ZC_LONGPAR_CHANGE'))
d:add(0x018d, 2, require('ZC_MAKABLEITEMLIST'))
d:add(0x0154, 11, require('ZC_MEMBERMGR_INFO'))
d:add(0x00dd, 6, require('ZC_MEMBER_EXIT'))
d:add(0x00dc, 6, require('ZC_MEMBER_NEWENTRY'))
d:add(0x00b7, 22, require('ZC_MENU_LIST'))
d:add(0x018c, 14, require('ZC_MONSTER_INFO'))
d:add(0x0196, 15, require('ZC_MSG_STATE_CHANGE'))
d:add(0x010c, 7, require('ZC_MVP'))
d:add(0x010b, 3, require('ZC_MVP_GETTING_SPECIAL_EXP'))
d:add(0x014c, 26, require('ZC_MYGUILD_BASIC_INFO'))
d:add(0x00a3, 28, require('ZC_NORMAL_ITEMLIST'))
d:add(0x01ee, 8, require('ZC_NORMAL_ITEMLIST2'))
d:add(0x007a, 2, require('ZC_NOTIFY_ACTENTRY'))
d:add(0x0121, 8, require('ZC_NOTIFY_CARTITEM_COUNTINFO'))
d:add(0x008d, 2, require('ZC_NOTIFY_CHAT'))
d:add(0x0109, 31, require('ZC_NOTIFY_CHAT_PARTY'))
d:add(0x0106, 10, require('ZC_NOTIFY_HP_TO_GROUPM'))
d:add(0x0075, 30, require('ZC_NOTIFY_INITCHAR'))
d:add(0x0199, 7, require('ZC_NOTIFY_MAPPROPERTY'))
d:add(0x01d6, 30, require('ZC_NOTIFY_MAPPROPERTY2'))
d:add(0x0086, 2, require('ZC_NOTIFY_MOVE'))
d:add(0x01da, 32, require('ZC_NOTIFY_MOVEENTRY2'))
d:add(0x0079, 4, require('ZC_NOTIFY_NEWENTRY'))
d:add(0x01d9, 39, require('ZC_NOTIFY_NEWENTRY2'))
d:add(0x022b, -1, require('ZC_NOTIFY_NEWENTRY3'))
d:add(0x008e, -1, require('ZC_NOTIFY_PLAYERCHAT'))
d:add(0x0087, -1, require('ZC_NOTIFY_PLAYERMOVE'))
d:add(0x019a, 58, require('ZC_NOTIFY_RANKING'))
d:add(0x0114, 10, require('ZC_NOTIFY_SKILL'))
d:add(0x01de, -1, require('ZC_NOTIFY_SKILL2'))
d:add(0x0078, 20, require('ZC_NOTIFY_STANDENTRY'))
d:add(0x01d8, 6, require('ZC_NOTIFY_STANDENTRY2'))
d:add(0x022a, -1, require('ZC_NOTIFY_STANDENTRY3'))
d:add(0x007c, 5, require('ZC_NOTIFY_STANDENTRY_NPC'))
d:add(0x00f2, 4, require('ZC_NOTIFY_STOREITEM_COUNTINFO'))
d:add(0x0077, 2, require('ZC_NOTIFY_UPDATEPLAYER'))
d:add(0x0093, 4, require('ZC_NPCACK_ENABLE'))
d:add(0x0091, -1, require('ZC_NPCACK_MAPMOVE'))
d:add(0x0092, -1, require('ZC_NPCACK_SERVERMOVE'))
d:add(0x01b0, 8, require('ZC_NPCSPRITE_CHANGE'))
d:add(0x012d, -1, require('ZC_OPENSTORE'))
d:add(0x0142, 6, require('ZC_OPEN_EDITDLG'))
d:add(0x01d4, 8, require('ZC_OPEN_EDITDLGSTR'))
d:add(0x00b0, 7, require('ZC_PAR_CHANGE'))
d:add(0x01ab, 10, require('ZC_PAR_CHANGE_USER'))
d:add(0x0287, -1, require('ZC_PC_CASH_POINT_ITEMLIST'))
d:add(0x0133, 11, require('ZC_PC_PURCHASE_ITEMLIST_FROMMC'))
d:add(0x0136, 54, require('ZC_PC_PURCHASE_MYITEMLIST'))
d:add(0x00c7, 182, require('ZC_PC_SELL_ITEMLIST'))
d:add(0x01a6, 4, require('ZC_PETEGG_LIST'))
d:add(0x0166, 4, require('ZC_POSITION_ID_NAME_INFO'))
d:add(0x0160, 5, require('ZC_POSITION_INFO'))
d:add(0x022e, 30, require('ZC_PROPERTY_HOMUN'))
d:add(0x01a2, 2, require('ZC_PROPERTY_PET'))
d:add(0x013d, -1, require('ZC_RECOVERY'))
d:add(0x00da, -1, require('ZC_REFUSE_ENTER_ROOM'))
d:add(0x01fc, -1, require('ZC_REPAIRITEMLIST'))
d:add(0x0207, -1, require('ZC_REQ_ADD_FRIENDS'))
d:add(0x0171, 8, require('ZC_REQ_ALLY_GUILD'))
d:add(0x00e5, -1, require('ZC_REQ_EXCHANGE_ITEM'))
d:add(0x01f4, -1, require('ZC_REQ_EXCHANGE_ITEM2'))
d:add(0x016a, -1, require('ZC_REQ_JOIN_GUILD'))
d:add(0x023a, 13, require('ZC_REQ_STORE_PASSWORD'))
d:add(0x00ac, -1, require('ZC_REQ_TAKEOFF_EQUIP_ACK'))
d:add(0x00b3, 14, require('ZC_RESTART_ACK'))
d:add(0x023c, 60, require('ZC_RESULT_STORE_PASSWORD'))
d:add(0x00d7, 10, require('ZC_ROOM_NEWENTRY'))
d:add(0x00c4, -1, require('ZC_SELECT_DEALTYPE'))
d:add(0x00d1, 26, require('ZC_SETTING_WHISPER_PC'))
d:add(0x00d2, 16, require('ZC_SETTING_WHISPER_STATE'))
d:add(0x010f, -1, require('ZC_SKILLINFO_LIST'))
d:add(0x010e, -1, require('ZC_SKILLINFO_UPDATE'))
d:add(0x0120, -1, require('ZC_SKILL_DISAPPEAR'))
d:add(0x011f, 11, require('ZC_SKILL_ENTRY'))
d:add(0x01c9, -1, require('ZC_SKILL_ENTRY2'))
d:add(0x01d0, 3, require('ZC_SPIRITS'))
d:add(0x01e1, -1, require('ZC_SPIRITS2'))
d:add(0x00c3, -1, require('ZC_SPRITE_CHANGE'))
d:add(0x01d7, 14, require('ZC_SPRITE_CHANGE2'))
d:add(0x020e, 10, require('ZC_STARSKILL'))
d:add(0x0229, -1, require('ZC_STATE_CHANGE3'))
d:add(0x00bd, 60, require('ZC_STATUS'))
d:add(0x00be, 6, require('ZC_STATUS_CHANGE'))
d:add(0x00bc, -1, require('ZC_STATUS_CHANGE_ACK'))
d:add(0x0088, 19, require('ZC_STOPMOVE'))
d:add(0x00a6, -1, require('ZC_STORE_EQUIPMENT_ITEMLIST'))
d:add(0x01f0, -1, require('ZC_STORE_NORMAL_ITEMLIST2'))
d:add(0x0224, 4, require('ZC_TAEKWON_POINT'))
d:add(0x01a0, -1, require('ZC_TRYCAPTURE_MONSTER'))
d:add(0x016d, 3, require('ZC_UPDATE_CHARSTAT'))
d:add(0x01f2, 12, require('ZC_UPDATE_CHARSTAT2'))
d:add(0x016c, 7, require('ZC_UPDATE_GDID'))
d:add(0x00c2, -1, require('ZC_USER_COUNT'))
d:add(0x013e, 26, require('ZC_USESKILL_ACK'))
d:add(0x00a8, -1, require('ZC_USE_ITEM_ACK'))
d:add(0x011a, 11, require('ZC_USE_SKILL'))
d:add(0x00b5, -1, require('ZC_WAIT_DIALOG'))
d:add(0x0097, 282, require('ZC_WHISPER'))

return d