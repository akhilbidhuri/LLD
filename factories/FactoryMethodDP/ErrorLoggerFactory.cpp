#include "ErrorLoggerFactory.h"
#include "ErrorLogger.h"

ILogger* ErrorLoggerFactory::createLogger() {
	return new ErrorLogger();
}