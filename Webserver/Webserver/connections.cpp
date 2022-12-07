#include "connections.h"


bool Connections::Init() {
#ifdef _WIN32
	WSADATA Data;
	if (WSAStartup(MAKEWORD(2, 2), &Data) !=0) {
		Log::WriteError(ERROR_WINSOCKERROR);
		return false;
	}
#endif


}