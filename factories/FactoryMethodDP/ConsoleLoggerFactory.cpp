#include "ConsoleLoggerFactory.h"
#include "ConsoleLogger.h"

ILogger* ConsoleLoggerFactory::createLogger() {
	return new ConsoleLogger();
}
