#include "TCPNetworkFactory.h"
#include "TCPPacketFactory.h"
#include "TCPProtocolFactory.h"

TCPNetworkFactory::TCPNetworkFactory() {
	this->protocolPacketFactory = new TCPPacketFactory();
	this->protocolFactory = new TCPProtocolFactory();
}

Protocol* TCPNetworkFactory::getProtocol() {
	return this->protocolFactory->getProtocol();
}

ProtocolPacket* TCPNetworkFactory::createPacket(int no) {
	return this->protocolPacketFactory->createPacket(no);
}