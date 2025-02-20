#include "InfoLogger.h"
#include<iostream>

void InfoLogger::log(std::string const s) {
	std::cout << "Info Logger: " << s << std::endl;
}
