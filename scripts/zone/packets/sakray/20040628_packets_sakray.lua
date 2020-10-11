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

local d = require('default_packets_sakray')

d:add(0x0208, 11, require('CZ_ACK_REQ_ADD_FRIENDS'))
d:add(0x0202, 26, require('CZ_ADD_FRIENDS'))
d:add(0x0203, 10, require('CZ_DELETE_FRIENDS'))
d:add(0x0209, 36, require('ZC_ADD_FRIENDS_LIST'))
d:add(0x020a, 10, require('ZC_DELETE_FRIENDS'))
d:add(0x0205, 26, require('ZC_DIVORCE'))
d:add(0x0201, -1, require('ZC_FRIENDS_LIST'))
d:add(0x0206, 11, require('ZC_FRIENDS_STATE'))
d:add(0x0207, 34, require('ZC_REQ_ADD_FRIENDS'))

return d