#include "ConsoleLogger.h"
#include<iostream>

void ConsoleLogger::log(std::string const s) {
	std::cout << "Console Log: " << s << std::endl;
}
