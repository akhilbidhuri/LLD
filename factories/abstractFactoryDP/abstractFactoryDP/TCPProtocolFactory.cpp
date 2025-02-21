#include "TCPProtocolFactory.h"
#include "TCP.h"

Protocol* TCPProtocolFactory::getProtocol() {
	return new TCP();
}