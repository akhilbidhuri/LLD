#include "DebugLogger.h"
#include<iostream>

void DebugLogger::log(std::string const s) {
	std::cout << "Debug Logger: " << s << std::endl;
}