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

local d = require('default_packets_ad')

d:add(0x02db, -1, require('CZ_BATTLEFIELD_CHAT'))
d:add(0x02dc, -1, require('ZC_BATTLEFIELD_CHAT'))
d:add(0x02dd, 32, require('ZC_BATTLEFIELD_NOTIFY_CAMPINFO'))
d:add(0x02e0, 34, require('ZC_BATTLEFIELD_NOTIFY_HP'))
d:add(0x02de, 6, require('ZC_BATTLEFIELD_NOTIFY_POINT'))
d:add(0x02df, 36, require('ZC_BATTLEFIELD_NOTIFY_POSITION'))

return d