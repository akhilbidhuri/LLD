#pragma once
#include "LoggerFactory.h"
class ErrorLoggerFactory :
    public LoggerFactory
{
public:
    ILogger* createLogger();
};

