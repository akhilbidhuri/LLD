#pragma once
#include "ILogger.h"
class DebugLogger: public ILogger
{
public:
	void log(std::string const s);
};

