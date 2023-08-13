/***************************************************
 *       _   _            _                        *
 *      | | | |          (_)                       *
 *      | |_| | ___  _ __ _ _______  _ __          *
 *      |  _  |/ _ \| '__| |_  / _ \| '_  \        *
 *      | | | | (_) | |  | |/ / (_) | | | |        *
 *      \_| |_/\___/|_|  |_/___\___/|_| |_|        *
 ***************************************************
 * This file is part of Horizon (c).
 *
 * Copyright (c) 2019 Sagun K. (sagunxp@gmail.com).
 * Copyright (c) 2019 Horizon Dev Team.
 *
 * Base Author - Sagun K. (sagunxp@gmail.com)
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

#include "Combat.hpp"
#include "Server/Zone/Definitions/ItemDefinitions.hpp"
#include "Server/Zone/Definitions/ClientDefinitions.hpp"
#include "Server/Zone/Game/Entities/Traits/Status.hpp"
#include "Server/Zone/Game/Entities/Player/Assets/Inventory.hpp"
#include "Server/Zone/Game/Entities/Player/Player.hpp"
#include "Server/Zone/Game/Entities/Creature/Hostile/Monster.hpp"
#include "Server/Zone/Game/StaticDB/ItemDB.hpp"
#include "Server/Zone/Session/ZoneSession.hpp"
#include "Server/Zone/Interface/ZoneClientInterface.hpp"

using namespace Horizon::Zone;

CombatRegistry::CombatRegistry(std::shared_ptr<Entity> entity)
: _entity(entity)
{

}

CombatRegistry::~CombatRegistry() 
{

}

Combat::Combat(std::shared_ptr<Entity> entity, std::shared_ptr<Entity> target)
: _entity(entity), _target(target), _start_time(std::time(nullptr))
{
}

Combat::~Combat()
{
}

combat_retaliate_type Combat::weapon_attack()
{
    if (entity()->type() == ENTITY_PLAYER) {
        EquipmentListType const& equipments = entity()->downcast<Horizon::Zone::Entities::Player>()->inventory()->equipments();
        std::shared_ptr<const item_entry_data> weapon = nullptr;

        combat_damage dmg;

        // Calculate element damage ratio and damage.
        int64_t batk = entity()->status()->base_attack()->total();

        if (equipments[IT_EQPI_HAND_R].second.expired() == false) {
            batk = deduce_weapon_element_attack(batk, ELE_NEUTRAL, IT_EQPI_HAND_R);
            batk = deduce_damage_size_modifier(batk, IT_EQPI_HAND_R);
            dmg.right_damage = (batk << 1);
        }

        if (equipments[IT_EQPI_HAND_L].second.expired() == false) {
            batk = deduce_weapon_element_attack(batk, ELE_NEUTRAL, IT_EQPI_HAND_L);
            batk = deduce_damage_size_modifier(batk, IT_EQPI_HAND_L);
            dmg.left_damage = batk;
        }

        entity()->downcast<Horizon::Zone::Entities::Player>()->get_session()->clif()->notify_damage(entity()->guid(), target()->guid(), get_sys_time(), entity()->status()->attack_motion()->total(), entity()->status()->attack_delay()->total(), dmg.right_damage, 0, 1, ZCNA3_DAMAGE, dmg.left_damage);

        target()->status()->current_hp()->sub_base(dmg.right_damage + dmg.left_damage);

        switch (target()->type()) {
        case ENTITY_PLAYER:
            break;
        case ENTITY_NPC:
            break;
        case ENTITY_SKILL:
            break;
        case ENTITY_MONSTER:
            target()->notify_nearby_players_of_movement(true);
            target()->downcast<Horizon::Zone::Entities::Monster>()->on_damage_received(entity(), dmg.right_damage + dmg.left_damage);
            break;
        case ENTITY_PET:
            break;
        case ENTITY_HOMUNCULUS:
            break;
        case ENTITY_MERCENARY:
            break;
        case ENTITY_ELEMENTAL:
            break;
        case ENTITY_ITEM:
        case ENTITY_UNKNOWN:
        case ENTITY_EVENT:
            break;
        }
    }

    return CBT_RET_NONE;
}

int64_t Combat::calculate_weapon_attack(int64_t damage)
{
    return damage;
}

int64_t Combat::calculate_magic_attack(int64_t damage)
{
    return damage;
}

int64_t Combat::calculate_misc_attack(int64_t damage)
{
    return damage;
}

int64_t Combat::deduce_weapon_element_attack(int64_t damage, element_type def_ele, item_equip_location_index loc)
{
    if (entity()->type() == ENTITY_PLAYER) {
        EquipmentListType const &equipments = entity()->downcast<Horizon::Zone::Entities::Player>()->inventory()->equipments();
        std::shared_ptr<const item_entry_data> weapon = nullptr;

        if (equipments[loc].second.expired())
            return damage;

        weapon = equipments[loc].second.lock();

        if (loc != IT_EQPI_HAND_R || loc != IT_EQPI_HAND_L)
            return damage; // not a weapon.

        std::shared_ptr<const item_config_data> weapond = ItemDB->get_item_by_id(weapon->item_id);

        if (weapond == nullptr) {
            HLog(warning) << "Combat::deduce_weapon_element_attack: could not find item config of right hand weapon ID: " << weapon->item_id << ". ignoring..." ;
            return damage;
        }

        int32_t attribute_damage_ratio = ItemDB->get_weapon_attribute_modifier(weapond->level.weapon, ELE_NEUTRAL, def_ele);

        damage += (attribute_damage_ratio < 100 ? -(damage * (attribute_damage_ratio - 100) / 100) : (damage * (attribute_damage_ratio - 100) / 100));
    }

    return damage;
}

int64_t Combat::deduce_damage_size_modifier(int64_t damage, item_equip_location_index loc)
{
    if (entity()->type() == ENTITY_PLAYER) {
        EquipmentListType const &equipments = entity()->downcast<Horizon::Zone::Entities::Player>()->inventory()->equipments();
        std::shared_ptr<const item_entry_data> weapon = nullptr;

        if (equipments[loc].second.expired())
            return damage;

        weapon = equipments[loc].second.lock();

        if (loc == IT_EQPI_HAND_R || loc == IT_EQPI_HAND_L) 
            return damage; // not a weapon.

        std::shared_ptr<const item_config_data> weapond = ItemDB->get_item_by_id(weapon->item_id);

        if (weapond == nullptr) {
            HLog(warning) << "Combat::deduce_weapon_element_attack: could not find item config of right hand weapon ID: " << weapon->item_id << ". ignoring..." ;
            return damage;
        }

        int32_t size_damage_ratio = ItemDB->get_weapon_target_size_modifier(weapond->sub_type.weapon_t, (entity_size_type) entity()->status()->size()->get_base());

        damage += (size_damage_ratio < 100 ? -(damage * (size_damage_ratio - 100) / 100) : (damage * (size_damage_ratio - 100) / 100));
    }

    return damage;
}

CombatRegistry::AttributeOperation *CombatRegistry::CombatStage::push_attribute_operation(std::shared_ptr<Entity> source, std::shared_ptr<Entity> target, std::shared_ptr<Traits::Attribute> attribute, CombatRegistry::AttributeOperation::attribute_operation_type operation_type, int value)
{
    CombatRegistry::AttributeOperation::AttributeOperand *operand = new CombatRegistry::AttributeOperation::AttributeOperand(source, target, attribute);
    CombatRegistry::CombatValueInteger *combat_value = new CombatRegistry::CombatValueInteger(value);
    CombatRegistry::AttributeOperation *operation = new CombatRegistry::AttributeOperation(operand, operation_type, combat_value);
    this->add_operation(operation);
    return operation;
}

CombatRegistry::StatusOperation *CombatRegistry::CombatStage::push_status_add_operation(std::shared_ptr<Entity> source, std::shared_ptr<Entity> target, CombatRegistry::StatusOperation::StatusOperand::s_combat_status_operation_config config)
{
    CombatRegistry::StatusOperation::StatusOperand *operand = new CombatRegistry::StatusOperation::StatusOperand(source, target, config);
    CombatRegistry::StatusOperation *operation = new CombatRegistry::StatusOperation(operand, CombatRegistry::StatusOperation::status_operation_type::STATUS_OPERATION_ADD);
    this->add_operation(operation);
    return operation;
}

CombatRegistry::StatusOperation *CombatRegistry::CombatStage::push_status_remove_operation(std::shared_ptr<Entity> source, std::shared_ptr<Entity> target, CombatRegistry::StatusOperation::StatusOperand::s_combat_status_operation_config config)
{
    CombatRegistry::StatusOperation::StatusOperand *operand = new CombatRegistry::StatusOperation::StatusOperand(source, target, config);
    CombatRegistry::StatusOperation *operation = new CombatRegistry::StatusOperation(operand, CombatRegistry::StatusOperation::status_operation_type::STATUS_OPERATION_REMOVE);
    this->add_operation(operation);
    return operation;
}

CombatRegistry::SkillExecutionOperation *CombatRegistry::CombatStage::push_skill_execution_operation(std::shared_ptr<Entity> source, std::shared_ptr<Entity> target, CombatRegistry::SkillExecutionOperation::SkillExecutionOperand::s_skill_execution_operation_config config, CombatRegistry::SkillExecutionOperation::skill_execution_operation_type operation_type)
{
    CombatRegistry::SkillExecutionOperation::SkillExecutionOperand *operand = new CombatRegistry::SkillExecutionOperation::SkillExecutionOperand(source, target, config);
    CombatRegistry::SkillExecutionOperation *operation = new CombatRegistry::SkillExecutionOperation(operand, operation_type);
    this->add_operation(operation);
    return operation;
}

CombatRegistry::SkillResultOperation *CombatRegistry::CombatStage::push_skill_result_damage_operation(std::shared_ptr<Entity> source, std::shared_ptr<Entity> target, CombatRegistry::SkillResultOperation::SkillResultOperand::s_skill_result_operation_config config, combat_damage value_config)
{
    CombatRegistry::SkillResultOperation::SkillResultOperand *operand = new CombatRegistry::SkillResultOperation::SkillResultOperand(source, target, config);
    CombatRegistry::CombatValueDamage *combat_value = new CombatRegistry::CombatValueDamage(value_config);
    CombatRegistry::SkillResultOperation *operation = new CombatRegistry::SkillResultOperation(operand, CombatRegistry::SkillResultOperation::skill_result_operation_type::SKILL_RESULT_OPERATION_DAMAGE, combat_value);
    this->add_operation(operation);
    return operation;
}

CombatRegistry::SkillResultOperation *CombatRegistry::CombatStage::push_skill_result_healing_operation(std::shared_ptr<Entity> source, std::shared_ptr<Entity> target, CombatRegistry::SkillResultOperation::SkillResultOperand::s_skill_result_operation_config config, combat_healing value_config)
{
    CombatRegistry::SkillResultOperation::SkillResultOperand *operand = new CombatRegistry::SkillResultOperation::SkillResultOperand(source, target, config);
    CombatRegistry::CombatValueHealing *combat_value = new CombatRegistry::CombatValueHealing(value_config);
    CombatRegistry::SkillResultOperation *operation = new CombatRegistry::SkillResultOperation(operand, CombatRegistry::SkillResultOperation::skill_result_operation_type::SKILL_RESULT_OPERATION_HEALING, combat_value);
    this->add_operation(operation);
    return operation;
}

CombatRegistry::MeleeExecutionOperation *CombatRegistry::CombatStage::push_melee_execution_operation(std::shared_ptr<Entity> source, std::shared_ptr<Entity> target, CombatRegistry::MeleeExecutionOperation::MeleeExecutionOperand::s_melee_execution_operation_config config, CombatRegistry::MeleeExecutionOperation::melee_execution_operation_type operation_type)
{
    CombatRegistry::MeleeExecutionOperation::MeleeExecutionOperand *operand = new CombatRegistry::MeleeExecutionOperation::MeleeExecutionOperand(source, target, config);
    CombatRegistry::MeleeExecutionOperation *operation = new CombatRegistry::MeleeExecutionOperation(operand, operation_type);
    this->add_operation(operation);
    return operation;
}

CombatRegistry::MeleeResultOperation *CombatRegistry::CombatStage::push_melee_result_damage_operation(std::shared_ptr<Entity> source, std::shared_ptr<Entity> target, combat_damage value_config)
{
    CombatRegistry::MeleeResultOperation::MeleeResultOperand *operand = new CombatRegistry::MeleeResultOperation::MeleeResultOperand(source, target);
    CombatRegistry::CombatValueDamage *combat_value = new CombatRegistry::CombatValueDamage(value_config);
    CombatRegistry::MeleeResultOperation *operation = new CombatRegistry::MeleeResultOperation(operand, CombatRegistry::MeleeResultOperation::melee_result_operation_type::MELEE_RESULT_OPERATION_DAMAGE, combat_value);
    this->add_operation(operation);
    return operation;
}

CombatRegistry::MeleeResultOperation *CombatRegistry::CombatStage::push_melee_result_healing_operation(std::shared_ptr<Entity> source, std::shared_ptr<Entity> target, combat_healing value_config)
{
    CombatRegistry::MeleeResultOperation::MeleeResultOperand *operand = new CombatRegistry::MeleeResultOperation::MeleeResultOperand(source, target);
    CombatRegistry::CombatValueHealing *combat_value = new CombatRegistry::CombatValueHealing(value_config);
    CombatRegistry::MeleeResultOperation *operation = new CombatRegistry::MeleeResultOperation(operand, CombatRegistry::MeleeResultOperation::melee_result_operation_type::MELEE_RESULT_OPERATION_HEALING, combat_value);
    this->add_operation(operation);
    return operation;
}

void CombatRegistry::AttributeOperation::execute() const
{
    CombatRegistry::AttributeOperation::AttributeOperand *operand = dynamic_cast<CombatRegistry::AttributeOperation::AttributeOperand *>(get_operand());
    CombatRegistry::CombatValueInteger *integer = dynamic_cast<CombatRegistry::CombatValueInteger*>(get_operation_value());
    int value = integer->get_value();
    switch (get_operation_sub_type())
    {
        case ATTRIBUTE_OPERATION_ADD_TO_BASE:
        {
            operand->get_attribute()->add_base(value);
        }
            break;
        case ATTRIBUTE_OPERATION_SUBTRACT_FROM_BASE:
        {
            operand->get_attribute()->sub_base(value);
        }
            break;
        case ATTRIBUTE_OPERATION_ADD_TO_EQUIP:
        {
            operand->get_attribute()->add_equip(value);
        }
            break;
        case ATTRIBUTE_OPERATION_SUBTRACT_FROM_EQUIP:
        {
            operand->get_attribute()->sub_equip(value);
        }
            break;
        case ATTRIBUTE_OPERATION_ADD_TO_STATUS:
        {
            operand->get_attribute()->add_status(value);
        }
            break;
        case ATTRIBUTE_OPERATION_SUBTRACT_FROM_STATUS:
        {
            operand->get_attribute()->sub_status(value);
        }
            break;
    }
}

void CombatRegistry::StatusOperation::execute() const
{
    CombatRegistry::StatusOperation::StatusOperand *operand = dynamic_cast<CombatRegistry::StatusOperation::StatusOperand *>(get_operand());
    CombatRegistry::StatusOperation::StatusOperand::s_combat_status_operation_config config = operand->get_config();
    std::shared_ptr<Entity> target = operand->get_target();

    if (get_operation_sub_type() == STATUS_OPERATION_REMOVE)
        target->status_effect_end(config.type);
    else
        target->status_effect_start(config.type, config.total_time, config.val1, config.val2, config.val3, config.val4);
}

void CombatRegistry::SkillExecutionOperation::execute() const
{
    CombatRegistry::SkillExecutionOperation::SkillExecutionOperand *operand = static_cast<CombatRegistry::SkillExecutionOperation::SkillExecutionOperand*>(get_operand());
    CombatRegistry::SkillExecutionOperation::SkillExecutionOperand::s_skill_execution_operation_config &config = operand->get_config();
    std::shared_ptr<Entity> source = operand->get_source();
    std::shared_ptr<Entity> target = operand->get_target();

    switch(get_operation_sub_type())
    {
        case SKILL_EXECUTION_OPERATION_TARGET:
        {
            HLog(debug) << "Started skill execution on target: " << target->guid() << " with skill: " << config.skd->name << "." << std::endl;
            config.skill_execution->execute(target->guid());
            HLog(debug) << "Finished skill execution on target: " << target->guid() << " with skill: " << config.skd->name << "." << std::endl;
        }
            break;
        case SKILL_EXECUTION_OPERATION_GROUND:
        {
            if (config.contents.size() > 0)
                config.skill_execution->execute(config.pos_x, config.pos_y, config.contents);
            else
                config.skill_execution->execute(config.pos_x, config.pos_y);
        }
        break;
    }
}

void CombatRegistry::SkillResultOperation::execute() const
{
    std::shared_ptr<Entity> source = get_operand()->get_source();
    std::shared_ptr<Entity> target = nullptr;

    switch(get_operation_sub_type())
    {
        case SKILL_RESULT_OPERATION_DAMAGE:
        {
            HLog(debug) << "Started skill result damage operation for skill: " << (dynamic_cast<CombatRegistry::SkillResultOperation::SkillResultOperand *>(get_operand()))->get_config().skill_id << "." << std::endl;
            if (source->type() == ENTITY_PLAYER) {
                CombatValueDamage *value = dynamic_cast<CombatValueDamage *>(get_operation_value());
                combat_damage damage = value->get_damage();
                target = get_operand()->get_target();
                source->downcast<Horizon::Zone::Entities::Player>()->get_session()->clif()->notify_hostile_skill_use(damage.skill_id, 
                    source->guid(), 
                    target->guid(), 
                    0,
                    damage.amotion,
                    damage.dmotion, 
                    damage.left_damage + damage.right_damage, 
                    damage.skill_lv,
                    damage.number_of_hits,
                    ZCNA3_SKILL);
            }
            HLog(debug) << "Finished skill result damage operation for skill: " << dynamic_cast<CombatRegistry::SkillResultOperation::SkillResultOperand *>(get_operand())->get_config().skill_id << "." << std::endl;
        }
            break;
        case SKILL_RESULT_OPERATION_HEALING:
        {
            if (source->type() == ENTITY_PLAYER) {
                CombatValueHealing *value = dynamic_cast<CombatValueHealing *>(get_operation_value());
                combat_healing healing = value->get_healing();
                target = get_operand()->get_target();
                source->downcast<Horizon::Zone::Entities::Player>()->get_session()->clif()->notify_safe_skill_use(healing.skill_id, healing.heal_amount, target->guid(), ZC_USESKILL2_SUCCESS);
            }
        }
            break;
        default:
            HLog(warning) << "CombatRegistry::SkillOperation::execute(): unknown skill operation type: " << get_operation_sub_type();
            break;
    }
}

void CombatRegistry::MeleeExecutionOperation::execute() const
{
    std::shared_ptr<Entity> source = get_operand()->get_source();
    std::shared_ptr<Entity> target = get_operand()->get_source();
    CombatRegistry::MeleeExecutionOperation::MeleeExecutionOperand *operand = dynamic_cast<CombatRegistry::MeleeExecutionOperation::MeleeExecutionOperand*>(get_operand());
    CombatRegistry::MeleeExecutionOperation::MeleeExecutionOperand::s_melee_execution_operation_config config = operand->get_config();
    
    switch(get_operation_sub_type())
    {
        case MELEE_EXECUTION_OPERATION_TARGET:
        {
			source->attack(target, config.continuous);
        }
            break;
    }
}

void CombatRegistry::MeleeResultOperation::execute() const
{
    std::shared_ptr<Entity> source = get_operand()->get_source();
    std::shared_ptr<Entity> target = get_operand()->get_source();

    switch(get_operation_sub_type())
    {
        case MELEE_RESULT_OPERATION_DAMAGE:
        {

        }
            break;
        case MELEE_RESULT_OPERATION_HEALING:
        {

        }
            break;
    }
}

void CombatRegistry::process_queue()
{
	while (!_combat_stage_queue.empty()) {
		CombatStage *combat_stage = _combat_stage_queue.top();
        HLog(debug) << "Started combat stage: " << (void *) combat_stage << std::endl;
        _combat_stage_queue.pop();
        while (combat_stage->has_operations()) {
            const CombatOperation *operation = combat_stage->get_next_operation();
            combat_stage->pop_queue();
            operation->execute();
            delete operation;
        }
        HLog(debug) << "Ended combat stage: " << (void *) combat_stage << std::endl;
        delete combat_stage;
	};
}