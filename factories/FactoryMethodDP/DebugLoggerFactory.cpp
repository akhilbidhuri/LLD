#include "DebugLoggerFactory.h"
#include "DebugLogger.h"
ILogger* DebugLoggerFactory::createLogger() {
	return new DebugLogger();
}