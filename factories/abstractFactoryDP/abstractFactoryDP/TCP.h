#pragma once
#include "Protocol.h"
class TCP :
    public Protocol
{
    int port;
public:
    TCP();
    bool attachPort(int port);
    bool sendPacket(ProtocolPacket* pkt);
};

