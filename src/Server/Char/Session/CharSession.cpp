/***************************************************
 *       _   _            _                        *
 *      | | | |          (_)                       *
 *      | |_| | ___  _ __ _ _______  _ __          *
 *      |  _  |/ _ \| '__| |_  / _ \| '_  \        *
 *      | | | | (_) | |  | |/ / (_) | | | |        *
 *      \_| |_/\___/|_|  |_/___\___/|_| |_|        *
 ***************************************************
 * This file is part of Horizon (c).
 * Copyright (c) 2018 Horizon Dev Team.
 *
 * Base Author - Sagun Khosla. (sagunxp@gmail.com)
 *
 * Under a proprietary license this file is not for use
 * or viewing without permission.
 **************************************************/

#include "CharSession.hpp"

#include "Server/Char/Packets/PacketHandler.hpp"
#include "Server/Char/Packets/PacketHandlerFactory.hpp"
#include "Server/Char/Socket/CharSocket.hpp"
#include "Server/Common/Models/GameAccount.hpp"
#include "Server/Common/Models/SessionData.hpp"
#include "Server/Common/PacketBuffer.hpp"
#include "Server/Char/Char.hpp"

using namespace Horizon::Char;
using namespace Horizon::Models::Character;
CharSession::CharSession(std::shared_ptr<CharSocket> socket)
: Horizon::Networking::Session<CharSocket>(socket)
{
	_client_type = CharServer->general_conf().get_client_type();
	_packet_version = CharServer->general_conf().get_packet_version();
	set_packet_handler(PacketHandlerFactory::create_packet_handler(socket, _client_type, _packet_version));
}

CharSession::~CharSession()
{
	//
}

/* Packet Handler */
std::shared_ptr<PacketHandler> CharSession::get_packet_handler() { return _packet_handler; }
void CharSession::set_packet_handler(std::shared_ptr<PacketHandler> handler) { _packet_handler.swap(handler); }
/* Character */
std::shared_ptr<Character> CharSession::get_character() { return _character; }
void CharSession::set_character(std::shared_ptr<Character> character) { _character.swap(character); }
/* Game Account */
std::shared_ptr<GameAccount> CharSession::get_game_account() { return _game_account; }
void CharSession::set_game_account(std::shared_ptr<GameAccount> account) { _game_account.swap(account); }
/* Session Data */
std::shared_ptr<SessionData> CharSession::get_session_data() { return _session_data; }
void CharSession::set_session_data(std::shared_ptr<SessionData> session_data) { _session_data.swap(session_data); }

void CharSession::update(uint32_t /*diff*/)
{
	std::shared_ptr<PacketBuffer> buf;

	if (_packet_handler != nullptr && _packet_handler->session_has_expired()) {
		get_socket()->close_socket();
		return;
	}

	while ((buf = get_socket()->get_packet_recv_queue().try_pop())) {
		_packet_handler->handle_received_packet(*buf);
	}
}

