/**           _   _            _
 *          | | | |          (_)
 *          | |_| | ___  _ __ _ _______  _ __
 *          |  _  |/ _ \| '__| |_  / _ \| '_ \
 *          | | | | (_) | |  | |/ / (_) | | | |
 *          \_| |_/\___/|_|  |_/___\___/|_| |_|
 *
 * This file is part of Horizon (c).
 * Copyright (c) 2018 Horizon Dev Team.
 *
 * Base Author - Sagun Khosla. (sagunxp@gmail.com)
 *
 * Under a proprietary license this file is not for use
 * or viewing without permission.
 ****************************************************/

#ifndef HORIZON_ZONESOCKETMGR_H
#define HORIZON_ZONESOCKETMGR_H

#include "Core/Networking/SocketMgr.hpp"

/**
 * Auth Socket Manager
 * @brief Singleton class
 */
class ZoneSocketMgr : public SocketMgr<ZoneSession>
{
	typedef SocketMgr<ZoneSession> BaseSocketMgr;

public:
	static ZoneSocketMgr &Instance()
	{
		static ZoneSocketMgr instance;
		return instance;
	}

	bool StartNetwork(boost::asio::io_service &io_service, std::string const &listen_ip, uint16_t port, uint32_t threads = 1) override
	{

		if (!BaseSocketMgr::StartNetwork(io_service, listen_ip, port, threads))
			return false;

		CoreLog->trace("Max allowed socket connections {}", (int) boost::asio::socket_base::max_connections);

		_acceptor->SetSocketFactory(std::bind(&BaseSocketMgr::GetSocketForAccept, this));
		_acceptor->AsyncAcceptWithCallback<&ZoneSocketMgr::OnSocketAccept>();

		CoreLog->info("Networking initialized, listening on {} {} (Maximum Threads: {})", listen_ip, port, threads);

		return true;
	}

	bool StartConnection(std::string const &connection_name, boost::asio::io_service &io_service, std::string const &connect_ip, uint16_t port, uint32_t connections = 1) override
	{
		if (!BaseSocketMgr::StartConnection(connection_name, io_service, connect_ip, port, connections)) {
			CharLog->error("ZoneSocketMgr failed to start a connection.");
			return false;
		}

		_connector->SetSocketFactory(std::bind(&BaseSocketMgr::GetSocketForConnect, this));
		_connector->ConnectWithCallback<&ZoneSocketMgr::OnSocketConnect>(connections);

		return true;
	}

protected:
	static void OnSocketAccept(tcp::socket &&socket, uint32_t threadIndex)
	{
		Instance().OnSocketOpen(std::forward<tcp::socket>(socket), threadIndex);
	}

	static void OnSocketConnect(tcp::socket &&socket, uint32_t threadIndex)
	{
		Instance().OnSocketOpen(std::forward<tcp::socket>(socket), threadIndex);
	}
};

#define sZoneSocketMgr ZoneSocketMgr::Instance()

#endif //HORIZON_ZONESOCKETMGR_H
