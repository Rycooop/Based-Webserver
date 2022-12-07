#ifndef WEBSERVER_LOG_H
#define WEBSERVER_LOG_H

#include <fstream>
#include <iostream>

class Log {
public:
	static bool WriteError(const int& Error);

};

enum LOG_ERRORS {
	ERROR_INVALIDSTART = 0,
	ERROR_WINSOCKERROR
};

#endif //WEBSERVER_LOG_H