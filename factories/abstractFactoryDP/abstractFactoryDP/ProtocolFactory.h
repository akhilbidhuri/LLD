#pragma once
#include "Protocol.h"

class ProtocolFactory {
public:
	virtual Protocol* getProtocol() = 0;
};