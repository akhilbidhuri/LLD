#pragma once
#include "Protocol.h"
#include "ProtocolPacket.h"

class AbstractNetworkFactory {
public:
	virtual Protocol* getProtocol() = 0;
	virtual ProtocolPacket* createPacket(int) = 0;
};