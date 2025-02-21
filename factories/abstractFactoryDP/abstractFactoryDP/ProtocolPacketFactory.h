#pragma once
#include "ProtocolFactory.h"

class ProtocolPacketFactory {
public:
	virtual ProtocolPacket* createPacket(int) = 0;
};