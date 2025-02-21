#pragma once
#include "AbstractNetworkFactory.h"
#include "ProtocolFactory.h"
#include "ProtocolPacketFactory.h"

class TCPNetworkFactory :
    public AbstractNetworkFactory
{
    ProtocolFactory* protocolFactory;
    ProtocolPacketFactory* protocolPacketFactory;
public:
    TCPNetworkFactory();
    Protocol* getProtocol() override;
    ProtocolPacket* createPacket(int no) override;
};

