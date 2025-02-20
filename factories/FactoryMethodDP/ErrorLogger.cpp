#include "ErrorLogger.h"
#include<iostream>

void ErrorLogger::log(std::string const s) {
	std::cout << "Error Logger: " << s << std::endl;
}