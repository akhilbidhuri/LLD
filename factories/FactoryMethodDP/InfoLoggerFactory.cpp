#include "InfoLoggerFactory.h"
#include "InfoLogger.h"

ILogger* InfoLoggerFactory::createLogger() {
	return new InfoLogger();
}