#pragma once
#include "LoggerFactory.h"
class ConsoleLoggerFactory :
    public LoggerFactory
{
public :
    ILogger* createLogger();
};

