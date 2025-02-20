// factories.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This Program is an example of factory method design pattern which also follows SOLID porinciples
// Author: Akhil Bidhuri
//

#include <iostream>
#include "ILogger.h"
#include "LoggerFactory.h"
#include "ConsoleLoggerFactory.h"
#include "InfoLoggerFactory.h"
#include "DebugLoggerFactory.h"
#include "ErrorLoggerFactory.h"

int main()
{
    std::cout << "Factory Method Design Pattern...\n";

    // get all factories
    LoggerFactory* consoleLoggerFactory = new ConsoleLoggerFactory();
    LoggerFactory* infoLoggerFactory = new InfoLoggerFactory();
    LoggerFactory* debugLoggerFactory = new DebugLoggerFactory();
    LoggerFactory* errorLoggerFactory = new ErrorLoggerFactory();

    // get specific loggers and call them
    ILogger* consoleLogger = consoleLoggerFactory->createLogger();
    consoleLogger->log("application started on port");

    ILogger* infoLogger = infoLoggerFactory->createLogger();
    infoLogger->log("application processing requests");

    ILogger* debugLogger = debugLoggerFactory->createLogger();
    debugLogger->log("taking longer to process db requests for transactions");

    ILogger* errorLogger = errorLoggerFactory->createLogger();
    errorLogger->log("error in processing request, entry not found in dbs");

    delete consoleLogger;
    delete infoLogger;
    delete debugLogger;
    delete errorLogger;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
