#include "server.h"


bool WebServer::Initialize() {
	if (!this->conns->Init())
		return false;

	return true;
}

void WebServer::Run() {

}

void WebServer::Shutdown() {

}