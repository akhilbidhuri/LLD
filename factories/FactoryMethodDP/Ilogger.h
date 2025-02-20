#pragma once

#include<string>

class ILogger {

public:
	virtual void log(std::string const s) = 0;
	virtual ~ILogger() {};
};