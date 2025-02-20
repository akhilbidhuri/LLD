#pragma once
#include "LoggerFactory.h"
class InfoLoggerFactory :
    public LoggerFactory
{
public:
    ILogger* createLogger();
};

