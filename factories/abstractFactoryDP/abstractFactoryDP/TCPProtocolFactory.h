#pragma once
#include "ProtocolFactory.h"
class TCPProtocolFactory :
    public ProtocolFactory
{
public:
    Protocol* getProtocol() override;
};

