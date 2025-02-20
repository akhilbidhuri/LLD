#pragma once
#include "LoggerFactory.h"
class DebugLoggerFactory :
    public LoggerFactory
{
public:
    ILogger* createLogger();
};

