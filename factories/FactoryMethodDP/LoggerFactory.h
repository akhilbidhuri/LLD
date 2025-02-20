#pragma once
#include "Ilogger.h"

class LoggerFactory {
public:
	virtual ILogger* createLogger() = 0;
};