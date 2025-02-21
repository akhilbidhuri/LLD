#pragma once
#include "ProtocolPacket.h"
class Protocol {
public:
	virtual bool attachPort(int port) = 0;
	virtual bool sendPacket(ProtocolPacket* pkt) = 0;

	virtual ~Protocol() {}
};