#pragma once
#include "Ilogger.h"

class ConsoleLogger : public ILogger
{
public:
	void log(std::string const s);
};

