#ifndef WEBSERVER_SERVER_H
#define WEBSERVER_SERVER_H

#include <cstdint>
#include <string>
#include <vector>
#include <map>
#include <thread>
#include <iostream>

#include "connections.h"


class WebServer {
public:
	WebServer() = default;
	~WebServer() = default;

	bool Initialize();
	void Run();
	void Shutdown();

private:
	std::map<std::string, std::thread> Workers;

	Connections* conns;
};

#endif //WEBSERVER_SERVER_H