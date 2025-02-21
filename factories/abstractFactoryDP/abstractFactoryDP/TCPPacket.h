#pragma once
#include "ProtocolPacket.h"
#include<sstream>

class TCPPacket :
    public ProtocolPacket
{
    int no;
    std::stringbuf header;
    std::stringbuf body;
    std::stringbuf tail;
public:
    TCPPacket(int no);
    void read(std::string streamDummy);
    void write(std::string protocolBuffer);
    void flush();
    int getpacketNum();
};

