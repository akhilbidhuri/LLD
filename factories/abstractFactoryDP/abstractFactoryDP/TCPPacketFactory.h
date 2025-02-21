#pragma once
#include "ProtocolPacketFactory.h"
class TCPPacketFactory :
    public ProtocolPacketFactory
{
public:
    ProtocolPacket* createPacket(int no) override;
};

