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
 * Base Author - Sxyz (sagunxp@gmail.com)
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

#ifndef HORIZON_ZONE_GAME_ITEM_DEFINITIONS
#define HORIZON_ZONE_GAME_ITEM_DEFINITIONS

#include <cstring>
#include <iostream>
#include <cstdlib>
#include <cstdint>

#define ITEM_NAME_LENGTH 50
#define UNKNOWN_ITEM_ID 512 // Apple
#define MAX_ITEM_OPTIONS 5
#define MAX_ITEM_SLOTS 4

static_assert(MAX_ITEM_OPTIONS >= 0, "MAX_ITEM_OPTIONS cannot be less than 0.");
static_assert(MAX_ITEM_OPTIONS <= 5,
			  "MAX_ITEM_OPTIONS is limited by the client and database layout "
			  "and should not be changed unless supported by the client.");
static_assert(MAX_ITEM_SLOTS > 0 && MAX_ITEM_SLOTS <= 4,
			  "MAX_ITEM_SLOTS is limited by the client and database layout "
			  "and should not be changed unless supported by the client.");

enum weapon_type
{
	WT_FIST,      ///< Bare hands
	WT_DAGGER,    //1
	WT_1HSWORD,   //2
	WT_2HSWORD,   //3
	WT_1HSPEAR,   //4
	WT_2HSPEAR,   //5
	WT_1HAXE,     //6
	WT_2HAXE,     //7
	WT_1HMACE,      //8
	WT_2HMACE,    //9 (unused)
	WT_STAFF,     //10
	WT_BOW,       //11
	WT_KNUCKLE,   //12
	WT_MUSICAL,   //13
	WT_WHIP,      //14
	WT_BOOK,      //15
	WT_KATAR,     //16
	WT_REVOLVER,  //17
	WT_RIFLE,     //18
	WT_GATLING,   //19
	WT_SHOTGUN,   //20
	WT_GRENADE,   //21
	WT_HUUMA,     //22
	WT_2HSTAFF,   //23
	WT_SHIELD,    //24
	WT_MAX
};

enum item_gender_type
{
	IT_GENDER_FEMALE = 0,
	IT_GENDER_MALE   = 1,
	IT_GENDER_ANY    = 2
};

//Equip position constants
enum item_equip_location_mask {
	IT_EQPM_NONE               = 0x000000,
	IT_EQPM_HEAD_LOW           = 0x000001,
	IT_EQPM_HAND_R             = 0x000002, //2
	IT_EQPM_GARMENT            = 0x000004, //4
	IT_EQPM_ACC_L              = 0x000008, //8
	IT_EQPM_ARMOR              = 0x000010, //16
	IT_EQPM_HAND_L             = 0x000020, //32
	IT_EQPM_SHOES              = 0x000040, //64
	IT_EQPM_ACC_R              = 0x000080, //128
	IT_EQPM_HEAD_TOP           = 0x000100, //256
	IT_EQPM_HEAD_MID           = 0x000200, //512
	IT_EQPM_COSTUME_HEAD_TOP   = 0x000400, //1024
	IT_EQPM_COSTUME_HEAD_MID   = 0x000800, //2048
	IT_EQPM_COSTUME_HEAD_LOW   = 0x001000, //4096
	IT_EQPM_COSTUME_GARMENT    = 0x002000, //8192
	//UNUSED_COSTUME_FLOOR = 0x004000, //16384
	IT_EQPM_AMMO               = 0x008000, //32768
	IT_EQPM_SHADOW_ARMOR       = 0x010000, //65536
	IT_EQPM_SHADOW_WEAPON      = 0x020000, //131072
	IT_EQPM_SHADOW_SHIELD      = 0x040000, //262144
	IT_EQPM_SHADOW_SHOES       = 0x080000, //524288
	IT_EQPM_SHADOW_ACC_R       = 0x100000, //1048576
	IT_EQPM_SHADOW_ACC_L       = 0x200000, //2097152

	// Composites
	IT_EQPM_WEAPON             = IT_EQPM_HAND_R,
	IT_EQPM_SHIELD             = IT_EQPM_HAND_L,
	IT_EQPM_ARMS               = IT_EQPM_HAND_R | IT_EQPM_HAND_L,
	IT_EQPM_HELM               = IT_EQPM_HEAD_LOW | IT_EQPM_HEAD_MID | IT_EQPM_HEAD_TOP,
	IT_EQPM_ACC                = IT_EQPM_ACC_L | IT_EQPM_ACC_R,
	IT_EQPM_COSTUME            = IT_EQPM_COSTUME_HEAD_TOP | IT_EQPM_COSTUME_HEAD_MID | IT_EQPM_COSTUME_HEAD_LOW | IT_EQPM_COSTUME_GARMENT,
	IT_EQPM_SHADOW_ACC         = IT_EQPM_SHADOW_ACC_R | IT_EQPM_SHADOW_ACC_L,
	IT_EQPM_SHADOW_ARMS        = IT_EQPM_SHADOW_WEAPON | IT_EQPM_SHADOW_SHIELD
};

enum item_equip_location_index {
	IT_EQPI_ACC_L            = 0,
	IT_EQPI_ACC_R            = 1,
	IT_EQPI_SHOES            = 2,
	IT_EQPI_GARMENT          = 3,
	IT_EQPI_HEAD_LOW         = 4,
	IT_EQPI_HEAD_MID         = 5,
	IT_EQPI_HEAD_TOP         = 6,
	IT_EQPI_ARMOR            = 7,
	IT_EQPI_HAND_L           = 8,
	IT_EQPI_HAND_R           = 9,
	IT_EQPI_COSTUME_TOP      = 10,
	IT_EQPI_COSTUME_MID      = 11,
	IT_EQPI_COSTUME_LOW      = 12,
	IT_EQPI_COSTUME_GARMENT  = 13,
	IT_EQPI_AMMO             = 14,
	IT_EQPI_SHADOW_ARMOR     = 15,
	IT_EQPI_SHADOW_WEAPON    = 16,
	IT_EQPI_SHADOW_SHIELD    = 17,
	IT_EQPI_SHADOW_SHOES     = 18,
	IT_EQPI_SHADOW_ACC_R     = 19,
	IT_EQPI_SHADOW_ACC_L     = 20,
	IT_EQPI_MAX
};

enum item_trade_restriction_mask {
	ITRMASK_NONE                   = 0x0000, ///< No restrictions
	ITRMASK_NO_DROP                = 0x0001, ///< Item can't be dropped
	ITRMASK_NO_TRADE               = 0x0002, ///< Item can't be traded (nor vended)
	ITRMASK_CAN_TRADEWPARTNER      = 0x0004, ///< Wedded partner can override ITR_NOTRADE restriction
	ITRMASK_NO_SELL_TO_NPC         = 0x0008, ///< Item can't be sold to NPCs
	ITRMASK_NO_CART                = 0x0010, ///< Item can't be placed in the cart
	ITRMASK_NO_STORAGE             = 0x0020, ///< Item can't be placed in the storage
	ITRMASK_NO_GSTORAGE            = 0x0040, ///< Item can't be placed in the guild storage
	ITRMASK_NO_MAIL                = 0x0080, ///< Item can't be attached to mail messages
	ITRMASK_NO_AUCTION             = 0x0100, ///< Item can't be auctioned
	ITRMASK_NO_BUYING_STORE        = 0x0200, ///< Item can't be listed in the buying store.
	ITRMASK_ALL                    = 0x03ff  ///< Sum of all the above values
};

enum item_usage_restriction_mask {
	IURMASK_NONE    = 0x0, ///< No restrictions
	IURMASK_SITTING = 0x1, ///< Item can't be used while sitting
	IURMASK_ALL     = 0x1  ///< Sum of all the above values
};

enum item_type : uint8_t {
	IT_TYPE_HEALING              = 0,
	IT_TYPE_UNKNOWN              = 1,
	IT_TYPE_USABLE               = 2,
	IT_TYPE_ETC                  = 3,
	IT_TYPE_WEAPON               = 4,
	IT_TYPE_ARMOR                = 5,
	IT_TYPE_CARD                 = 6,
	IT_TYPE_PET_EGG              = 7,
	IT_TYPE_PET_ARMOR            = 8,
	IT_TYPE_UNKNOWN2             = 9,
	IT_TYPE_AMMO                 = 10,
	IT_TYPE_CONSUMPTION_DELAY    = 11,
	IT_TYPE_CASH                 = 18,
	IT_TYPE_MAX
};

enum item_ammunition_type {
	AMMO_TYPE_NONE               = 0,
	AMMO_TYPE_ARROW              = 1,
	AMMO_TYPE_DAGGER             = 2,
	AMMO_TYPE_BULLET             = 3,
	AMMO_TYPE_SHELL              = 4,
	AMMO_TYPE_GRENADE            = 5,
	AMMO_TYPE_SHURIKEN           = 6,
	AMMO_TYPE_KUNAI              = 7,
	AMMO_TYPE_CANNONBALL         = 8,
	AMMO_TYPE_THROWABLE_WEAPON   = 9,
	AMMO_TYPE_MAX
};

enum item_inventory_addition_notif_type : uint8_t {
	ITEM_INV_ADD_SUCCESS, // * 0 = success
	ITEM_INV_ADD_INVALID, // * 1 = invalid itemid not found or negative amount
	ITEM_INV_ADD_OVER_WEIGHT, // * 2 = overweight
	ITEM_INV_ADD_UNKNOWN, // * 3 = ?
	ITEM_INV_ADD_NO_INV_SPACE, // * 4 = no free place found
	ITEM_INV_ADD_OVER_QUANTITY, // * 5 = max amount reached
	ITEM_INV_ADD_UNKNOWN2, // * 6 = ?
	ITEM_INV_ADD_OVER_STACK_LIMIT, // * 7 = stack limitation
};

enum item_deletion_reason_type : uint16_t {
	ITEM_DEL_NORMAL         = 0, /// Normal
	ITEM_DEL_SKILLUSE       = 1, /// Item used for a skill
	ITEM_DEL_FAILREFINE     = 2, /// Refine failed
	ITEM_DEL_MATERIALCHANGE = 3, /// Material changed
	ITEM_DEL_TOSTORAGE      = 4, /// Moved to storage
	ITEM_DEL_TOCART         = 5, /// Moved to cart
	ITEM_DEL_SOLD           = 6, /// Item sold
	ITEM_DEL_ANALYSIS       = 7, /// Consumed by Four Spirit Analysis (SO_EL_ANALYSIS) skill
};

enum item_element_type : uint8_t {
	ELE_NEUTRAL = 0,
	ELE_WATER   = 1,
	ELE_EARTH   = 2,
	ELE_FIRE    = 3,
	ELE_WIND    = 4,
	ELE_POISON  = 5,
	ELE_HOLY    = 6,
	ELE_DARK    = 7,
	ELE_GHOST   = 8,
	ELE_UNDEAD  = 9,
	ELE_MAX     = 10,
	ELE_ALL     = 0xFF
};

enum item_bind_type : uint8_t {
	IT_BIND_NONE      = 0x0,
	IT_BIND_MIN       = 0x1,
	IT_BIND_ACCOUNT   = 0x1,
	IT_BIND_GUILD     = 0x2,
	IT_BIND_PARTY     = 0x3,
	IT_BIND_CHARACTER = 0x4,
	IT_BIND_MAX       = 0x4,
};

enum item_equip_result_type {
	IT_EQUIP_SUCCESS = 0x0,
	IT_EQUIP_FAIL_LV = 0x1,
	IT_EQUIP_FAIL    = 0x2,
};

enum item_unequip_result_type {
	IT_UNEQUIP_SUCCESS = 0x0,
	IT_UNEQUIP_FAIL    = 0x1,
};

struct item_config_data
{
	uint32_t item_id;
	std::string name{""}, aegis_name{""};

	int32_t value_buy{0};
	int32_t value_sell{0};

	item_type type{IT_TYPE_ETC};

	union {
		int weapon_t;
		int ammo_t;
	} sub_type{0};

	uint64_t equip_location_mask{0};      ///< @see equip_location_mask type.
	uint32_t weight{0};
	int32_t attack{0};
	int32_t defense{0};
	int8_t attack_range{0};
	int8_t card_slot_count{0};
	uint32_t sprite_id{0};

	union {
		int8_t armor;
		int8_t weapon;
	} level{0};

	int32_t magic_atk{0};
	struct {
		int32_t max_lv{0};
		int32_t min_lv{0};
		int32_t job_mask{0};
		item_gender_type gender{IT_GENDER_ANY};
	} requirements;

	int drop_effect_mode{0};

	int delay{0};

	std::string default_script{""}; ///< Default script for everything.
	std::string equip_script{""};   ///< Script executed once when equipping.
	std::string unequip_script{""}; ///< Script executed once when unequipping.

	struct {
		unsigned available : 1;
		unsigned refineable : 1;
		unsigned consumption_delay : 1;         ///< Signifies items that are not consumed immediately upon double-click
		unsigned trade_restriction : 9;         ///< Item trade restrictions mask (@see enum item_trade_restrictions_mask)
		unsigned bind_on_equip : 1;
		unsigned allow_item_options: 1;            ///< disallows use of item options on the item. (non-equippable items are automatically flagged)
		unsigned drop_announce : 1;             ///< Official Drop Announce
		unsigned show_drop_effect : 1;          ///< Shows Drop Effect.
		struct {
			unsigned short max_amount{0};          ///< Max amount per stack.
			unsigned int inventory    : 1;
			unsigned int cart         : 1;
			unsigned int storage      : 1;
			unsigned int guildstorage : 1;
		} stack;
		struct {
			unsigned int mask{0};                  ///< Item nouse restriction mask (@see enum ItemNouseRestrictions)
		} usage_restriction;
	} config;
};

/**
 * Structure used to store and convey item data in the state machine
 * and in communication with the client.
 */
struct item_entry_data
{
	bool is_equipment() { return type == IT_TYPE_WEAPON || type == IT_TYPE_ARMOR; }

	bool is_stackable()
	{
		if (type == IT_TYPE_WEAPON || type == IT_TYPE_ARMOR
			|| type == IT_TYPE_PET_EGG || type == IT_TYPE_PET_ARMOR
			|| hire_expire_date > 0
			)
			return false;
		return true;
	}

	bool operator == (item_entry_data const &data)
	{
		bool same = true;

		if (item_id != data.item_id
			|| bind_type != data.bind_type
			|| hire_expire_date != data.hire_expire_date
			|| unique_id != data.unique_id
			)
			same = false;

		for (int i = 0; i < MAX_ITEM_SLOTS && same; i++) {
			if (slot_item_id[i] != data.slot_item_id[i])
				same = false;
		}

		for (int i = 0; i < MAX_ITEM_OPTIONS && same; i++) {
			if (option_data[i].index != data.option_data[i].index
				|| option_data[i].value != data.option_data[i].value
				|| option_data[i].param != data.option_data[i].param)
				same = false;
		}

		return same;
	}

	uint16_t inventory_index{0};
	uint32_t item_id{0};
	item_type type{IT_TYPE_ETC};
	uint16_t amount{0};
	uint32_t current_equip_location_mask{0};
	uint32_t actual_equip_location_mask{0};
	uint8_t refine_level{0};
	uint32_t slot_item_id[MAX_ITEM_SLOTS]{0};
	uint32_t hire_expire_date{0};
	uint16_t bound_type{0};
	uint16_t sprite_id{0};

	item_element_type element_type{ELE_NEUTRAL};
	struct options {
		int16_t index{0};
		int16_t value{0};
		uint8_t param{0};
	} option_data[MAX_ITEM_OPTIONS];
	struct {
		unsigned is_identified : 1;
		unsigned is_broken : 1;
		unsigned is_favorite : 1;
		unsigned spare_bits : 5;
	} info;
	item_bind_type bind_type{IT_BIND_NONE};
	uint64_t unique_id{0};
};

#endif /* HORIZON_ZONE_GAME_ITEM_DEFINITIONS */
