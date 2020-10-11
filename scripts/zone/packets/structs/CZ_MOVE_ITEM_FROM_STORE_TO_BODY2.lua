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

if RAGNA_ROOT == nil then print('Error: Running outside of project directory') os.exit() end

if packet_version >= 20180523 then
	local pid = 0x0365
elseif packet_version >= 20180511 then
	local pid = 0x0365
elseif packet_version >= 20180321 then
	local pid = 0x0365
elseif packet_version >= 20180315 then
	local pid = 0x0365
elseif packet_version >= 20180314 then
	local pid = 0x0365
elseif packet_version >= 20180228 then
	local pid = 0x0365
elseif packet_version >= 20180213 then
	local pid = 0x0365
elseif packet_version >= 20180207 then
	local pid = 0x0365
elseif packet_version >= 20180131 then
	local pid = 0x0365
elseif packet_version >= 20180124 then
	local pid = 0x0365
elseif packet_version >= 20180117 then
	local pid = 0x0365
elseif packet_version >= 20180103 then
	local pid = 0x0365
elseif packet_version >= 20171220 then
	local pid = 0x0365
elseif packet_version >= 20171213 then
	local pid = 0x0365
elseif packet_version >= 20171206 then
	local pid = 0x0365
elseif packet_version >= 20171130 then
	local pid = 0x0365
elseif packet_version >= 20171129 then
	local pid = 0x0365
elseif packet_version >= 20171127 then
	local pid = 0x0365
elseif packet_version >= 20171122 then
	local pid = 0x0365
elseif packet_version >= 20171121 then
	local pid = 0x0365
elseif packet_version >= 20171115 then
	local pid = 0x0365
elseif packet_version >= 20171101 then
	local pid = 0x0365
elseif packet_version >= 20171025 then
	local pid = 0x0365
elseif packet_version >= 20171018 then
	local pid = 0x0365
elseif packet_version >= 20171011 then
	local pid = 0x0365
elseif packet_version >= 20170830 then
	local pid = 0x0365
elseif packet_version >= 20170823 then
	local pid = 0x0365
elseif packet_version >= 20170809 then
	local pid = 0x0365
elseif packet_version >= 20170801 then
	local pid = 0x0365
elseif packet_version >= 20170719 then
	local pid = 0x0365
elseif packet_version >= 20170712 then
	local pid = 0x0365
elseif packet_version >= 20170705 then
	local pid = 0x0365
elseif packet_version >= 20170628 then
	local pid = 0x0365
elseif packet_version >= 20170621 then
	local pid = 0x0365
elseif packet_version >= 20170517 then
	local pid = 0x0365
elseif packet_version >= 20170502 then
	local pid = 0x0365
elseif packet_version >= 20170419 then
	local pid = 0x0365
elseif packet_version >= 20170412 then
	local pid = 0x0365
elseif packet_version >= 20170329 then
	local pid = 0x0365
elseif packet_version >= 20170322 then
	local pid = 0x0365
elseif packet_version >= 20170315 then
	local pid = 0x0365
elseif packet_version >= 20170308 then
	local pid = 0x0365
elseif packet_version >= 20170111 then
	local pid = 0x0365
elseif packet_version >= 20170104 then
	local pid = 0x0365
elseif packet_version >= 20161207 then
	local pid = 0x0365
elseif packet_version >= 20161130 then
	local pid = 0x0365
elseif packet_version >= 20161116 then
	local pid = 0x0365
elseif packet_version >= 20161109 then
	local pid = 0x0365
elseif packet_version >= 20161026 then
	local pid = 0x0365
elseif packet_version >= 20161019 then
	local pid = 0x0365
elseif packet_version >= 20161012 then
	local pid = 0x0365
elseif packet_version >= 20160928 then
	local pid = 0x0365
elseif packet_version >= 20160921 then
	local pid = 0x0365
elseif packet_version >= 20160913 then
	local pid = 0x0365
elseif packet_version >= 20160907 then
	local pid = 0x0365
elseif packet_version >= 20160831 then
	local pid = 0x0365
elseif packet_version >= 20160824 then
	local pid = 0x0365
elseif packet_version >= 20160727 then
	local pid = 0x0365
elseif packet_version >= 20160720 then
	local pid = 0x0365
elseif packet_version >= 20160525 then
	local pid = 0x0365
elseif packet_version >= 20160511 then
	local pid = 0x0365
elseif packet_version >= 20160504 then
	local pid = 0x0365
elseif packet_version >= 20160427 then
	local pid = 0x0365
elseif packet_version >= 20160406 then
	local pid = 0x0365
elseif packet_version >= 20160330 then
	local pid = 0x0365
elseif packet_version >= 20160323 then
	local pid = 0x0365
elseif packet_version >= 20160316 then
	local pid = 0x0365
elseif packet_version >= 20160224 then
	local pid = 0x0365
elseif packet_version >= 20160217 then
	local pid = 0x0365
elseif packet_version >= 20160211 then
	local pid = 0x0365
elseif packet_version >= 20160203 then
	local pid = 0x0365
elseif packet_version >= 20160120 then
	local pid = 0x0365
elseif packet_version >= 20160106 then
	local pid = 0x0365
elseif packet_version >= 20151230 then
	local pid = 0x0365
elseif packet_version >= 20151223 then
	local pid = 0x0365
elseif packet_version >= 20151216 then
	local pid = 0x0365
elseif packet_version >= 20151209 then
	local pid = 0x0365
elseif packet_version >= 20151202 then
	local pid = 0x0365
elseif packet_version >= 20151125 then
	local pid = 0x0365
elseif packet_version >= 20151118 then
	local pid = 0x0365
elseif packet_version >= 20151104 then
	local pid = 0x0365
elseif packet_version >= 20151021 then
	local pid = 0x0365
elseif packet_version >= 20151014 then
	local pid = 0x0365
elseif packet_version >= 20151001 then
	local pid = 0x0365
elseif packet_version >= 20150916 then
	local pid = 0x0365
elseif packet_version >= 20150909 then
	local pid = 0x0365
elseif packet_version >= 20150819 then
	local pid = 0x0365
elseif packet_version >= 20150805 then
	local pid = 0x0365
elseif packet_version >= 20150701 then
	local pid = 0x0365
elseif packet_version >= 20150624 then
	local pid = 0x0365
elseif packet_version >= 20150617 then
	local pid = 0x0365
elseif packet_version >= 20150603 then
	local pid = 0x0365
elseif packet_version >= 20150527 then
	local pid = 0x0365
elseif packet_version >= 20150429 then
	local pid = 0x0365
elseif packet_version >= 20150422 then
	local pid = 0x0365
elseif packet_version >= 20150401 then
	local pid = 0x0365
elseif packet_version >= 20150325 then
	local pid = 0x0365
elseif packet_version >= 20150225 then
	local pid = 0x0365
elseif packet_version >= 20150217 then
	local pid = 0x0365
elseif packet_version >= 20150211 then
	local pid = 0x0365
elseif packet_version >= 20150204 then
	local pid = 0x0365
elseif packet_version >= 20150128 then
	local pid = 0x0365
elseif packet_version >= 20150121 then
	local pid = 0x0365
elseif packet_version >= 20150107 then
	local pid = 0x0365
elseif packet_version >= 20141231 then
	local pid = 0x0365
elseif packet_version >= 20141105 then
	local pid = 0x0365
elseif packet_version >= 20141029 then
	local pid = 0x0365
elseif packet_version >= 20141022 then
	local pid = 0x0365
elseif packet_version >= 20141008 then
	local pid = 0x0365
elseif packet_version >= 20141001 then
	local pid = 0x0365
elseif packet_version >= 20140924 then
	local pid = 0x0365
elseif packet_version >= 20140917 then
	local pid = 0x0365
elseif packet_version >= 20140827 then
	local pid = 0x0365
elseif packet_version >= 20140820 then
	local pid = 0x0365
elseif packet_version >= 20140813 then
	local pid = 0x0365
elseif packet_version >= 20140806 then
	local pid = 0x0365
elseif packet_version >= 20140611 then
	local pid = 0x0365
elseif packet_version >= 20140605 then
	local pid = 0x0365
elseif packet_version >= 20140528 then
	local pid = 0x0365
elseif packet_version >= 20140521 then
	local pid = 0x0365
elseif packet_version >= 20140508 then
	local pid = 0x0365
elseif packet_version >= 20140423 then
	local pid = 0x0365
elseif packet_version >= 20140416 then
	local pid = 0x0365
elseif packet_version >= 20140402 then
	local pid = 0x0365
elseif packet_version >= 20140326 then
	local pid = 0x0365
elseif packet_version >= 20140312 then
	local pid = 0x0365
elseif packet_version >= 20140305 then
	local pid = 0x0365
elseif packet_version >= 20140212 then
	local pid = 0x0365
elseif packet_version >= 20140205 then
	local pid = 0x0365
elseif packet_version >= 20140115 then
	local pid = 0x0365
elseif packet_version >= 20140108 then
	local pid = 0x0365
elseif packet_version >= 20131230 then
	local pid = 0x0365
elseif packet_version >= 20131223 then
	local pid = 0x0365
elseif packet_version >= 20131218 then
	local pid = 0x0365
elseif packet_version >= 20131204 then
	local pid = 0x0365
elseif packet_version >= 20131127 then
	local pid = 0x0365
elseif packet_version >= 20131106 then
	local pid = 0x0365
elseif packet_version >= 20131030 then
	local pid = 0x0365
elseif packet_version >= 20131008 then
	local pid = 0x0365
elseif packet_version >= 20131002 then
	local pid = 0x0365
elseif packet_version >= 20130911 then
	local pid = 0x0365
elseif packet_version >= 20130904 then
	local pid = 0x0365
elseif packet_version >= 20130814 then
	local pid = 0x0365
elseif packet_version >= 20130807 then
	local pid = 0x0365
elseif packet_version >= 20130717 then
	local pid = 0x0365
elseif packet_version >= 20130703 then
	local pid = 0x0365
elseif packet_version >= 20130618 then
	local pid = 0x0365
elseif packet_version >= 20130605 then
	local pid = 0x0365
elseif packet_version >= 20130502 then
	local pid = 0x0365
elseif packet_version >= 20130417 then
	local pid = 0x0365
elseif packet_version >= 20130410 then
	local pid = 0x0365
elseif packet_version >= 20130403 then
	local pid = 0x0365
elseif packet_version >= 20130327 then
	local pid = 0x0365
elseif packet_version >= 20130320 then
	local pid = 0x0365
elseif packet_version >= 20130313 then
	local pid = 0x0365
elseif packet_version >= 20130227 then
	local pid = 0x0365
elseif packet_version >= 20130220 then
	local pid = 0x0365
elseif packet_version >= 20130115 then
	local pid = 0x0365
elseif packet_version >= 20130109 then
	local pid = 0x0365
elseif packet_version >= 20130103 then
	local pid = 0x0365
elseif packet_version >= 20121121 then
	local pid = 0x0365
elseif packet_version >= 20121114 then
	local pid = 0x0365
elseif packet_version >= 20121107 then
	local pid = 0x0365
elseif packet_version >= 20121031 then
	local pid = 0x0365
elseif packet_version >= 20121024 then
	local pid = 0x0365
elseif packet_version >= 20121017 then
	local pid = 0x0365
elseif packet_version >= 20120925 then
	local pid = 0x0365
elseif packet_version >= 20120919 then
	local pid = 0x0365
elseif packet_version >= 20120911 then
	local pid = 0x0365
elseif packet_version >= 20120905 then
	local pid = 0x0365
elseif packet_version >= 20120830 then
	local pid = 0x0365
elseif packet_version >= 20120822 then
	local pid = 0x0365
elseif packet_version >= 20120814 then
	local pid = 0x0365
elseif packet_version >= 20120808 then
	local pid = 0x0365
elseif packet_version >= 20120724 then
	local pid = 0x0365
elseif packet_version >= 20120716 then
	local pid = 0x0365
elseif packet_version >= 20120710 then
	local pid = 0x0365
elseif packet_version >= 20120702 then
	local pid = 0x0365
elseif packet_version >= 20120626 then
	local pid = 0x0365
elseif packet_version >= 20120612 then
	local pid = 0x0365
elseif packet_version >= 20120604 then
	local pid = 0x0365
elseif packet_version >= 20120601 then
	local pid = 0x0365
elseif packet_version >= 20120529 then
	local pid = 0x0365
elseif packet_version >= 20120508 then
	local pid = 0x0365
elseif packet_version >= 20120503 then
	local pid = 0x0365
elseif packet_version >= 20120502 then
	local pid = 0x0365
elseif packet_version >= 20120424 then
	local pid = 0x0365
elseif packet_version >= 20120417 then
	local pid = 0x0365
elseif packet_version >= 20120328 then
	local pid = 0x0365
elseif packet_version >= 20120320 then
	local pid = 0x0365
elseif packet_version >= 20120214 then
	local pid = 0x0365
elseif packet_version >= 20120207 then
	local pid = 0x0365
elseif packet_version >= 20120131 then
	local pid = 0x0365
elseif packet_version >= 20120120 then
	local pid = 0x0365
elseif packet_version >= 20120117 then
	local pid = 0x0365
elseif packet_version >= 20120103 then
	local pid = 0x0365
elseif packet_version >= 20111227 then
	local pid = 0x0365
elseif packet_version >= 20111220 then
	local pid = 0x0365
elseif packet_version >= 20111213 then
	local pid = 0x0365
elseif packet_version >= 20111207 then
	local pid = 0x0365
elseif packet_version >= 20111122 then
	local pid = 0x0365
elseif packet_version >= 20111114 then
	local pid = 0x0365
elseif packet_version >= 20111108 then
	local pid = 0x0365
elseif packet_version >= 20111010 then
	local pid = 0x0365
elseif packet_version >= 20111004 then
	local pid = 0x0365
elseif packet_version >= 20110928 then
	local pid = 0x0365
elseif packet_version >= 20110920 then
	local pid = 0x0365
elseif packet_version >= 20110906 then
	local pid = 0x0365
elseif packet_version >= 20110831 then
	local pid = 0x0365
elseif packet_version >= 20110823 then
	local pid = 0x0365
elseif packet_version >= 20110816 then
	local pid = 0x0365
elseif packet_version >= 20110809 then
	local pid = 0x0365
elseif packet_version >= 20110705 then
	local pid = 0x0365
elseif packet_version >= 20110627 then
	local pid = 0x0365
elseif packet_version >= 20110620 then
	local pid = 0x0365
elseif packet_version >= 20110607 then
	local pid = 0x0365
elseif packet_version >= 20110531 then
	local pid = 0x0365
elseif packet_version >= 20110523 then
	local pid = 0x0365
elseif packet_version >= 20110517 then
	local pid = 0x0365
elseif packet_version >= 20110511 then
	local pid = 0x0365
elseif packet_version >= 20110503 then
	local pid = 0x0365
elseif packet_version >= 20110426 then
	local pid = 0x0365
elseif packet_version >= 20110412 then
	local pid = 0x0365
elseif packet_version >= 20110405 then
	local pid = 0x0365
elseif packet_version >= 20110329 then
	local pid = 0x0365
elseif packet_version >= 20110118 then
	local pid = 0x0365
elseif packet_version >= 20110104 then
	local pid = 0x0365
elseif packet_version >= 20101228 then
	local pid = 0x0365
elseif packet_version >= 20101130 then
	local pid = 0x0365
elseif packet_version >= 20101123 then
	local pid = 0x0365
elseif packet_version >= 20100105 then
	local pid = 0x0365
elseif packet_version >= 20090318 then
	local pid = 0x0365
elseif packet_version >= 20090311 then
	local pid = 0x0365
elseif packet_version >= 20090211 then
	local pid = 0x0365
elseif packet_version >= 20090204 then
	local pid = 0x0365
elseif packet_version >= 20090120 then
	local pid = 0x0365
elseif packet_version >= 20090107 then
	local pid = 0x0365
elseif packet_version >= 20081217 then
	local pid = 0x0365
elseif packet_version >= 20081203 then
	local pid = 0x0365
elseif packet_version >= 20081126 then
	local pid = 0x0365
elseif packet_version >= 20081119 then
	local pid = 0x0365
elseif packet_version >= 20081112 then
	local pid = 0x0365
elseif packet_version >= 20081105 then
	local pid = 0x0365
elseif packet_version >= 20081029 then
	local pid = 0x0365
elseif packet_version >= 20081001 then
	local pid = 0x0365
elseif packet_version >= 20080924 then
	local pid = 0x0365
elseif packet_version >= 20080917 then
	local pid = 0x0365
elseif packet_version >= 20080910 then
	local pid = 0x0365
elseif packet_version >= 20080903 then
	local pid = 0x0365
elseif packet_version >= 20080820 then
	local pid = 0x0365
elseif packet_version >= 20080813 then
	local pid = 0x0365
elseif packet_version >= 20080806 then
	local pid = 0x0365
elseif packet_version >= 20080708 then
	local pid = 0x0365
elseif packet_version >= 20080701 then
	local pid = 0x0365
elseif packet_version >= 20080618 then
	local pid = 0x0365
elseif packet_version >= 20080610 then
	local pid = 0x0365
elseif packet_version >= 20080528 then
	local pid = 0x0365
elseif packet_version >= 20080527 then
	local pid = 0x0365
elseif packet_version >= 0 then
	local pid = 0x0365
end

local CZ_MOVE_ITEM_FROM_STORE_TO_BODY2 = {
	_id = pid,
	_length = 0,
	_buffer = nil
}


function CZ_MOVE_ITEM_FROM_STORE_TO_BODY2.new(o)
	o = o or CZ_MOVE_ITEM_FROM_STORE_TO_BODY2
	setmetatable(o, self)
	self.__index = self
	return o
end

function CZ_MOVE_ITEM_FROM_STORE_TO_BODY2.deserialize(buf)

end

return CZ_MOVE_ITEM_FROM_STORE_TO_BODY2
