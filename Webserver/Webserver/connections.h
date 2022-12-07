#ifndef WEBSERVER_CONNECTIONS_H
#define WEBSERVER_CONNECTIONS_H

#ifdef _WIN32
#include <winsock.h>
#else
#include <sys/socket.h>
#endif

#include <vector>
#include <string>

#include "log.h"


class Connections {
public:
	bool Init();

private:
	std::vector<SOCKET*> Sockets;
};

#endif //WEBSERVER_CONNECTIONS_H