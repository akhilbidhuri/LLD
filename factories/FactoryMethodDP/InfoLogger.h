#pragma once
#include "ILogger.h"
class InfoLogger: public ILogger
{
public:
	void log(std::string const s);
};

