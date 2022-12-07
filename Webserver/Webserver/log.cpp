#include "log.h"


bool Log::WriteError(const int& Error) {
	std::ofstream LogOutput = std::ofstream("log.txt", std::ios::app);
	if (!LogOutput.is_open()) {
		std::cerr << "[-] Unable to write to log" << std::endl;
		return false;
	}

	switch (Error) {
		case LOG_ERRORS::ERROR_INVALIDSTART: LogOutput << "Error 0x1: Failed to initialize server" << std::endl;

		default: LogOutput << "Error Unknown";
	}

	LogOutput.close();

	return true;
}