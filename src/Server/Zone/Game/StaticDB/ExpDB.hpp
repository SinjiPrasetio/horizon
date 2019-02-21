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

#ifndef HORIZON_ZONE_GAME_CONFIGURATION_EXPDB
#define HORIZON_ZONE_GAME_CONFIGURATION_EXPDB

#include <string>
#include <vector>
#include <unordered_map>
#include <sol.hpp>

namespace Horizon
{
namespace Zone
{
namespace Game
{

struct exp_group_data
{
	uint32_t max_level;
	std::vector<uint64_t> exp;
};

enum exp_group_type
{
	EXP_GROUP_TYPE_BASE,
	EXP_GROUP_TYPE_JOB
};
	
class ExpDB
{
public:
	ExpDB() { }
	~ExpDB() { }

	bool load();

	int load_group(sol::table &tbl, exp_group_type type);

protected:
	std::unordered_map<std::string, exp_group_data> _base_exp_group_db;
	std::unordered_map<std::string, exp_group_data> _job_exp_group_db;
};

}
}
}
#endif /* HORIZON_ZONE_GAME_CONFIGURATION_EXPDB */