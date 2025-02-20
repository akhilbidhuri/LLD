#pragma once
#include "Ilogger.h"
class ErrorLogger : public ILogger
{
public:
	void log(std::string const s);
};

